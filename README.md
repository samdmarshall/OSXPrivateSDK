OSXPrivateSDK
=============

SDK target for opensource.apple.com code


##### Install from homebrew

```
$ brew update
$ brew tap samdmarshall/formulae
$ brew install samdmarshall/formulae/privatesdks --HEAD
```

##### Install from github

1. `$ git clone git@github.com:samdmarshall/OSXPrivateSDK.git PrivateSDKs`
2. Go to `Build Settings` for the project file and add `<path to clone directory>/PrivateSDKs/PrivateMacOSX10.9.sparse.sdk` to the `Additional SDKs` build setting. 


**Note: On some projects this will not work out of the box, if you have build errors due to not being able to find headers or frameworks. Use the flags `-isystem` and `-iframework` to add additional system header and framework search paths as necessary.**


This is based on many of the projects on opensource.apple.com to build in a proper environment. 
Looking for contributions and fixes to add more compatibility to existing projects.
