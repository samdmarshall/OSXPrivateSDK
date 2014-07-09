import os
import subprocess
import shutil

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
            if file_exists(private_sdk_item_path) == False:
                shutil.copy2(original_path, os.path.dirname(private_sdk_item_path))

kSDKSettingsPlist = 'SDKSettings.plist'

platform_path = subprocess.check_output(('xcrun', '--show-sdk-platform-path')).rstrip('\n')
platform_path = os.path.join(platform_path, 'Developer/SDKs/')

private_sdk = os.path.join(platform_path, 'PrivateMacOSX10.9.sdk')

make_dir(private_sdk)

mac_osx_sdk = subprocess.check_output(('xcrun', '--show-sdk-path')).rstrip('\n')

# create the base SDK and symlinks back to existing latest
for root, dirs, files in os.walk(mac_osx_sdk, followlinks=False):
    for name in dirs:
        original_path = os.path.join(root, name)
        is_sym_link = os.path.islink(original_path)
        sdk_item_path = original_path.split(mac_osx_sdk+'/')[1]
        private_sdk_item = os.path.join(private_sdk, sdk_item_path)
        if is_sym_link == False:
            make_dir(private_sdk_item)
        if os.path.basename(sdk_item_path) == 'Headers' or os.path.basename(sdk_item_path) == 'PrivateHeaders' or os.path.basename(sdk_item_path) == 'Current':
            if is_sym_link == True:
                private_sdk_path = os.path.join(private_sdk, sdk_item_path)
                make_sym(original_path, private_sdk_path)
            
        
    for name in files:
        original_path = os.path.join(root, name)
        sdk_item_path = original_path.split(mac_osx_sdk+'/')[1]
        if sdk_item_path != kSDKSettingsPlist:
            private_sdk_path = os.path.join(private_sdk, sdk_item_path)
            make_sym(original_path, private_sdk_path)
        
# now copy in the private headers
copy_private('System', private_sdk)
copy_private('usr', private_sdk)

# finally, dump our own SDKSettings.plist
sdksettings_plist = os.path.join(os.getcwd(), kSDKSettingsPlist)
if file_exists(sdksettings_plist) == True:
    shutil.copy2(sdksettings_plist, private_sdk)
