OSXPrivateSDK
=============

SDK target for opensource.apple.com code

1. Quit Xcode
2. `$ git clone git@github.com:samdmarshall/OSXPrivateSDK.git PrivateSDK`
3. `$ cd PrivateSDK`
4. `$ git submodule update --init --recursive`
5. `$ cd SDKBuilder`
2. `$ python SDKBuilder.py --sdk /full/path/to/PrivateSDK/PrivateSDK/`
3. Open Xcode and select "Private (10.9)" as your SDK Target


This is based on many of the projects on opensource.apple.com to build in a proper environment. 
Looking for contributions and fixes to add more compatibility to existing projects.
