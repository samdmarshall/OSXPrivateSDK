OSXPrivateSDK
=============

SDK target for opensource.apple.com code

1. Quit Xcode
2. `$ cd ~/Desktop; git clone git@github.com:samdmarshall/OSXPrivateSDK.git PrivateSDK | cd PrivateSDK | git submodule update --init --recursive | cd SDKBuilder`
2. `$ python SDKBuilder.py --sdk ~/Desktop/PrivateSDK/PrivateSDK/`
3. Open Xcode and select "Private (10.9)" as your SDK Target


This is based on many of the projects on opensource.apple.com to build in a proper environment. 
Looking for contributions and fixes to add more compatibility to existing projects.
