# AR_AI_textmessaging

*Work in progress..     
A text messaging app powered by IBM Watson.  

## Team Members

*Work in progress.. 

## Build Instruction

The build requirement including:

Google flutter (3.0.0+)
installation(https://docs.flutter.dev/get-started/install)

Unity 2020.3.35f1 (with android NDK 19) 
installation(https://unity3d.com/get-unity/download)

To build the app, you just need to:

1. (If the unity project been changed/First time init) Open the `unity` project and build it: Menu -> Flutter -> Export Android
2. setting `android/local.properties`：  
   `sdk.dir=<android sdk location>`  
   `flutter.sdk=<flutter location>`  
   `flutter.buildMode=debug`  
   `flutter.compileSdkVersion=33`  
   `flutter.minSdkVersion=24`  
   `ndk.dir=<android NDK location>`    
3. (Recommended) Installing flutter plugin in your working IDE
4. `flutter run`

If you got any installation problem, check your flutter installation using `flutter doctor`. Make sure `android NDK` and `flutter` are set correctly. Further question please dm @Cheong43 .

## Unity Project Folder

`/unity` is the unity project location, `ARView-IBM-TextMessaging` is the current unity work dir. The `flutter-unity-view-widget-plugin` and `IBM Watson Unity sdk` already installed, please do not making any change on them.

If you would like to build the unity project independently, just use the unity `build and run`

## Trouble Shooting

*Work in progress..     

## How to use TTS in your script

add code

GameObject.Find("TheText").SendMessage("sendTextToTTS", s);

to your script.

s is the string you want to reading(the text user send or recevice on our app)
