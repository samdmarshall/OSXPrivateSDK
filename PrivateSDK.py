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

kSDKSettingsPlist = 'SDKSettings.plist'

platform_path = subprocess.check_output(('xcrun', '--show-sdk-platform-path')).rstrip('\n')
platform_path = os.path.join(platform_path, 'Developer/SDKs/')

private_sdk = os.path.join(platform_path, 'OSXPrivate.sdk')

make_dir(private_sdk)

mac_osx_sdk = subprocess.check_output(('xcrun', '--show-sdk-path')).rstrip('\n')

# create the base SDK and symlinks back to existing latest
for root, dirs, files in os.walk(mac_osx_sdk, followlinks=True):
    for name in dirs:
        sdk_item_path = os.path.join(root, name).split(mac_osx_sdk+'/')[1]
        private_sdk_item = os.path.join(private_sdk, sdk_item_path)
        make_dir(private_sdk_item)
        
    for name in files:
        original_path = os.path.join(root, name)
        sdk_item_path = original_path.split(mac_osx_sdk+'/')[1]
        if sdk_item_path != kSDKSettingsPlist:
            private_sdk_path = os.path.join(private_sdk, sdk_item_path)
            make_sym(original_path, private_sdk_path)
        
# now copy in the private headers

# finally, dump our own SDKSettings.plist
sdksettings_plist = os.path.join(os.getcwd(), kSDKSettingsPlist)
if file_exists(sdksettings_plist) == True:
    shutil.copy2(sdksettings_plist, private_sdk)