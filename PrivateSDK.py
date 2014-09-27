import os
import subprocess
import shutil
import time
import sys
from subprocess import CalledProcessError

def should_update(installed, update):
    existing = os.path.getmtime(installed)
    updated = os.path.getmtime(update)
    return existing < updated

def file_exists(path):
    return os.path.exists(path)
    
def make_dir(path):
    if file_exists(path) == False:
        os.mkdir(path)
        
def make_sym(original, path):
    if file_exists(path) == False:
        os.symlink(original, path)

def copy_private(path, sdk_path):
    private_path = os.path.join(os.getcwd(), path)
    for root, dirs, files in os.walk(private_path, followlinks=False):
        for name in dirs:
            original_path = os.path.join(root, name)
            sdk_item_path = original_path.split(os.getcwd()+'/')[1]
            private_sdk_item_path = os.path.join(sdk_path, sdk_item_path)
            is_sym_link = os.path.islink(original_path)
            if is_sym_link == False:
                make_dir(private_sdk_item_path)
            else:
                link_path = os.path.realpath(original_path)
                sdk_link = link_path.split(os.getcwd()+'/')[1]
                sdk_target_link = os.path.join(sdk_path, sdk_link)
                make_sym(sdk_target_link, private_sdk_item_path)
            
        
        for name in files:
            original_path = os.path.join(root, name)
            sdk_item_path = original_path.split(os.getcwd()+'/')[1]
            private_sdk_item_path = os.path.join(sdk_path, sdk_item_path)
            if name != '.DS_Store':
                if file_exists(private_sdk_item_path) == False:
                    shutil.copy2(original_path, os.path.dirname(private_sdk_item_path))
                else:
                    if should_update(private_sdk_item_path, sdk_item_path) == True and os.path.islink(private_sdk_item_path) == False:
                        print 'Updating \"' + private_sdk_item_path + '\"'
                        shutil.copy2(original_path, os.path.dirname(private_sdk_item_path))


def make_xcrun_call(call_args):
    error = 0
    output = ''
    try:
        output = subprocess.check_output(call_args)
        error = 0
    except CalledProcessError as e:
        output = e.output
        error = e.returncode
    
    return (output, error)
    

def walk_sdk_dirs(dirs):
    for name in dirs:
        original_path = os.path.join(root, name)
        is_sym_link = os.path.islink(original_path)
        sdk_item_path = original_path.split(mac_osx_sdk+'/')[1]
        private_sdk_item = os.path.join(private_sdk, sdk_item_path)
        if is_sym_link == False:
            make_dir(private_sdk_item)
        if os.path.basename(sdk_item_path) == 'Headers' or os.path.basename(sdk_item_path) == 'PrivateHeaders' or os.path.basename(sdk_item_path) == 'Current' or os.path.basename(sdk_item_path) == 'Frameworks':
            if is_sym_link == True:
                private_sdk_path = os.path.join(private_sdk, sdk_item_path)
                make_sym(original_path, private_sdk_path)


def walk_sdk_files(files):
    for name in files:
        original_path = os.path.join(root, name)
        sdk_item_path = original_path.split(mac_osx_sdk+'/')[1]
        if sdk_item_path != kSDKSettingsPlist:
            private_sdk_path = os.path.join(private_sdk, sdk_item_path)
            make_sym(original_path, private_sdk_path)


def walk_sdk_frameworks(dirs):
    for name in dirs:
        original_path = os.path.join(root, name)
        is_sym_link = os.path.islink(original_path)
        sdk_item_path = original_path.split(mac_osx_sdk+'/')[1]
        private_sdk_item = os.path.join(private_sdk, sdk_item_path)
        if os.path.basename(sdk_item_path) == 'Frameworks':
            if is_sym_link == True:
                private_sdk_path = os.path.join(private_sdk, sdk_item_path)
                base_framework_path = os.path.join(os.path.dirname(sdk_item_path), 'Versions/Current/Frameworks/')
                remake_frameworks_sym_path = os.path.join(private_sdk, base_framework_path)
                os.unlink(private_sdk_path)
                make_sym(remake_frameworks_sym_path, private_sdk_path)


def walk_sdk_current(dirs):
    for name in dirs:
        original_path = os.path.join(root, name)
        is_sym_link = os.path.islink(original_path)
        sdk_item_path = original_path.split(mac_osx_sdk+'/')[1]
        private_sdk_item = os.path.join(private_sdk, sdk_item_path)
        if os.path.basename(sdk_item_path) == 'Current':
            if is_sym_link == True:
                private_sdk_path = os.path.join(private_sdk, sdk_item_path)
                find_linked_current = os.readlink(private_sdk_path)
                if os.path.islink(find_linked_current) == True:
                    current_framework_version = os.readlink(find_linked_current)
                    base_version_sym_path = os.path.join(os.path.dirname(sdk_item_path), current_framework_version)
                    remake_version_sym_path = os.path.join(private_sdk, base_version_sym_path)
                    os.unlink(private_sdk_path)
                    make_sym(remake_version_sym_path, private_sdk_path)


kSDKSettingsPlist = 'SDKSettings.plist'


platform_path = ''
xcrun_result = make_xcrun_call(('xcrun', '--show-sdk-platform-path'))
if xcrun_result[1] != 0:
    print 'Please run Xcode first!'
    sys.exit()
    
platform_path = xcrun_result[0].rstrip('\n')
platform_path = os.path.join(platform_path, 'Developer/SDKs/')

private_sdk = os.path.join(platform_path, 'PrivateMacOSX10.9.sdk')

make_dir(private_sdk)

mac_osx_sdk = ''
xcrun_result = make_xcrun_call(('xcrun', '--show-sdk-path'))
if xcrun_result[1] != 0:
    print 'Please run Xcode first!'
    sys.exit()
    
mac_osx_sdk = xcrun_result[0].rstrip('\n')

# create the base SDK and symlinks back to existing latest
print 'Generating SDK based on \"' + mac_osx_sdk + '\"...'
for root, dirs, files in os.walk(mac_osx_sdk, followlinks=False):
    walk_sdk_dirs(dirs)
    walk_sdk_files(files)
    walk_sdk_current(dirs)
    walk_sdk_frameworks(dirs)
    

print 'Copying in additional SDK headers...'
# now copy in the private headers
copy_private('System', private_sdk)
copy_private('usr', private_sdk)

print 'Configuring SDK to be recognized by Xcode...'
# finally, dump our own SDKSettings.plist
sdksettings_plist = os.path.join(os.getcwd(), kSDKSettingsPlist)
if file_exists(sdksettings_plist) == True:
    shutil.copy2(sdksettings_plist, private_sdk)

print 'Finished creating SDK!'
