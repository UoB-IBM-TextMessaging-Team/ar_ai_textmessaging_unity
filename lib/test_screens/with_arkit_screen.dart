import 'package:flutter/material.dart';
import 'package:flutter_unity_widget/flutter_unity_widget.dart';


class WithARkitScreen extends StatefulWidget {
  @override
  _WithARkitScreenState createState() => _WithARkitScreenState();
}

class CustomPopupMenu {
  CustomPopupMenu({required this.title, required this.scene});

  String title;
  int scene;
}

List<CustomPopupMenu> choices = <CustomPopupMenu>[
  CustomPopupMenu(title: 'AR Demo', scene: 0),
];

class _WithARkitScreenState extends State<WithARkitScreen> {

  static final GlobalKey<ScaffoldState> _scaffoldKey =
  GlobalKey<ScaffoldState>();
  late UnityWidgetController _unityWidgetController;
  double _sliderValue = 0.0;

  String TextToUnity = '';

  CustomPopupMenu _selectedChoices = choices[0];

  void _select(CustomPopupMenu choice) {
    setState(() {
      _selectedChoices = choice;
    });

    print('Selected');

    _unityWidgetController.postMessage(
      'GameManager',
      'LoadGameScene',
      choice.scene.toString(),
    );

  }

  void _updateTextField(){
    TextToUnity = myController.text;
  }

  @override
  void initState() {
    myController.addListener(_updateTextField);
    super.initState();
  }

  @override
  void dispose() {
    myController.dispose();
    super.dispose();
  }

  final myController = TextEditingController();

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: Text('AR Demo'),
        actions: <Widget>[
          PopupMenuButton<CustomPopupMenu>(
            elevation: 3.2,
            initialValue: choices[0],
            onCanceled: () {
              print('You have not chossed anything');
            },
            tooltip: 'This is tooltip',
            onSelected: _select,
            itemBuilder: (BuildContext context) {
              return choices.map((CustomPopupMenu choice) {
                return PopupMenuItem<CustomPopupMenu>(
                  value: choice,
                  child: Text(choice.title),
                );
              }).toList();
            },
          )
        ],
      ),
      body:Card(
        margin: const EdgeInsets.all(8),
        clipBehavior: Clip.antiAlias,
        shape: RoundedRectangleBorder(
          borderRadius: BorderRadius.circular(20.0),
        ),
        child: Stack(
          children: <Widget>[
          UnityWidget(
          onUnityCreated: onUnityCreated,
          onUnityMessage: onUnityMessage,
          webUrl: 'http://localhost:6080',
          useAndroidViewSurface: true,
          fullscreen: false,
          borderRadius: BorderRadius.all(Radius.circular(70)),
        ),
            Positioned(
              bottom: 50,
              left: 0,
              right: 0,
              child: TextField(
                controller: myController,
                decoration: InputDecoration(
                  border: OutlineInputBorder(),
                  hintText: 'Enter a text',
                ),
              ),
            ),
            Positioned(
                left: 0,
                right: 0,
                bottom: 5,
                child: ElevatedButton(
                  child: Text('Send'),
                  onPressed: () {
                    sendUnityPlay();
                  },
                )
            ),

          ],
        ),
      ),

    );
  }

  void sendUnityPlay(){
    _unityWidgetController.postMessage('main_control', 'StartPlayMessage', TextToUnity);
  }

  void onUnityMessage(message) {
    print('Received message from unity: ${message.toString()}');
  }

  // Callback that connects the created controller to the unity controller
  void onUnityCreated(controller) {
    this._unityWidgetController = controller;
  }

  void onUnitySceneLoaded(SceneLoaded scene) {
    print('Received scene loaded from unity: ${scene.name}');
    print('Received scene loaded from unity buildIndex: ${scene.buildIndex}');
  }


}
