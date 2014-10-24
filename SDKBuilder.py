import os
import subprocess
import shutil
import time
import sys
import argparse
import plistlib
from subprocess import CalledProcessError

# Globals
kSDKSettingsPlistName = 'SDKSettings.plist';
kSDKSettingsPlistPath = '';
kSDKSettingsPlist = '';
kVerboseLogLevel = 0;
kPrivateSDK = '';
# Helper Functions
def v_log(message, level):
    if kVerboseLogLevel >= level:
        print message;
def should_update(installed, update):
    existing = os.path.getmtime(installed)
    updated = os.path.getmtime(update)
    return existing < updated
def make_dir(path):
    if file_exists(path) == False:
        os.mkdir(path)
def make_sym(original, path):
    if file_exists(path) == False:
        os.symlink(original, path)
def file_exists(path):
    return os.path.exists(path)
def sdk_template_exists(path):
    if file_exists(path) == True: 
        return file_exists(os.path.join(path, kSDKSettingsPlist));
    return False;
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
def load_sdk_template_list(path):
    return plistlib.readPlist(path);
def get_sdk_template_taget(plist):
    return plist['DefaultProperties']['PLATFORM_NAME'];
def get_sdk_name(kSDKSettingsPlist):
    return kSDKSettingsPlist['CanonicalName']+'.sdk';
def sdk_is_installed(kSDKSettingsPlist, path):
    sdk_list = os.listdir(path);
    name = get_sdk_name(kSDKSettingsPlist);
    return name in sdk_list;
def resolve_platform_path(sdk_type):
    platform_path = '';
    xcrun_result = make_xcrun_call(('xcrun', '--show-sdk-platform-path', '--sdk', sdk_type));
    if xcrun_result[1] != 0:
        v_log('Please run Xcode first!',0);
        sys.exit();
    
    platform_path = xcrun_result[0].rstrip('\n');
    platform_path = os.path.join(platform_path, 'Developer/SDKs/');
    return platform_path;
def resolve_sdk_path(kSDKSettingsPlist):
    base_sdk_path = ''
    base_sdk_name = kSDKSettingsPlist['BaseSDKName'];
    if base_sdk_name == '':
        v_log('Invalid SDK template',0);
        sys.exit();
    xcrun_result = make_xcrun_call(('xcrun', '--show-sdk-path', '--sdk', base_sdk_name))
    if xcrun_result[1] != 0:
        v_log('Please run Xcode first!',0);
        sys.exit()
    
    base_sdk_path = xcrun_result[0].rstrip('\n')
    return base_sdk_path;
# SDK Functions
def iterate_sdk(path, sdk_path):
    private_path = os.path.join(os.getcwd(), path);
    for root, dirs, files in os.walk(private_path, followlinks=False):
        for name in dirs:
            original_path = os.path.join(root, name);
            sdk_item_path = original_path.split(os.getcwd()+'/')[1];
            private_sdk_item_path = os.path.join(sdk_path, sdk_item_path);
            is_sym_link = os.path.islink(original_path);
            if is_sym_link == False:
                make_dir(private_sdk_item_path);
            else:
                link_path = os.path.realpath(original_path);
                sdk_link = link_path.split(os.getcwd()+'/')[1];
                sdk_target_link = os.path.join(sdk_path, sdk_link);
                make_sym(sdk_target_link, private_sdk_item_path);
            
        
        for name in files:
            original_path = os.path.join(root, name);
            sdk_item_path = original_path.split(os.getcwd()+'/')[1];
            private_sdk_item_path = os.path.join(sdk_path, sdk_item_path);
            if name != '.DS_Store':
                if file_exists(private_sdk_item_path) == False:
                    shutil.copy2(original_path, os.path.dirname(private_sdk_item_path));
                else:
                    if should_update(private_sdk_item_path, sdk_item_path) == True and os.path.islink(private_sdk_item_path) == False:
                        v_log('Updating \"' + private_sdk_item_path + '\"',0);
                        shutil.copy2(original_path, os.path.dirname(private_sdk_item_path));
def copy_internal(path, sdk_path):
    internal_path = os.path.join(sdk_path, path)
    if file_exists(internal_path) == False:
        os.mkdir(internal_path)
    iterate_sdk(path, sdk_path)
def copy_private(path, sdk_path):
    iterate_sdk(path, sdk_path)
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
# Main
def main(argv):
    parser = argparse.ArgumentParser();
    parser.add_argument('-s','--sdk', help='path to sdk template to build', required=True, action='store');
    parser.add_argument('-u','--update', help='update sdk from template', action='store_true');
    parser.add_argument('-f','--force', help='force action', action='store_true');
    parser.add_argument('-v','--verbose', help='add verbosity', action='count');
    args = parser.parse_args();
    
    kVerboseLogLevel = args.verbose;
    
    if sdk_template_exists(args.sdk) == False:
        v_log('Invalid SDK template!',0);
        sys.exit();
    
    kSDKSettingsPlistPath = os.path.join(args.sdk, kSDKSettingsPlistName); 
    kSDKSettingsPlist = load_sdk_template_list(kSDKSettingsPlistPath);
    
    sdk_type = get_sdk_template_taget(kSDKSettingsPlist)
    platform_path = resolve_platform_path(sdk_type);
    sdk_exists = sdk_is_installed(kSDKSettingsPlist, platform_path);
    
    kPrivateSDK = os.path.join(platform_path, get_sdk_name(kSDKSettingsPlist));
    
    if sdk_exists == False:
        v_log('Creating SDK from template...',0);
        make_dir(kPrivateSDK);
        
        base_sdk = resolve_sdk_path(kSDKSettingsPlist);
        
        for root, dirs, files in os.walk(base_sdk, followlinks=False):
            walk_sdk_dirs(dirs)
            walk_sdk_files(files)
            walk_sdk_current(dirs)
            walk_sdk_frameworks(dirs)
        
    if args.update == True:
        if sdk_exists == True:
            v_log('Updating...',0);
        else:
            v_log('Copying in additional SDK headers...',0);
        
        for sdk_item_dir in os.listdir(args.sdk):
            if os.path.isdir(sdk_item_dir) and sdk_item_dir.startswith('.') == False:
                copy_private(sdk_item_dir, kPrivateSDK);
                
    else:
        v_log('SDK already exists, please specify `-u` or `--update` to update the existing SDK',0);


if __name__ == "__main__":
    main(sys.argv[1:]);