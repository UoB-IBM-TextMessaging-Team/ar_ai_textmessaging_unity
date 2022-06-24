import 'dart:io';

import 'package:ar_ai_messaging_uob/Watson/iam_option.dart';
import 'package:ar_ai_messaging_uob/Watson/speech_to_text.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:http/http.dart';

void main() {
  setUpAll(() {
    // ↓ required to avoid HTTP error 400 mocked returns
    HttpOverrides.global = null;
  });
  testWidgets('http', (WidgetTester tester) async {
    await tester.runAsync(() async {
      String apikey = "V54HsAymPgGoYbINdYowOHxK7-ULgpTmAubGBFgg68E-";
      String url = "https://api.eu-gb.speech-to-text.watson.cloud.ibm.com/instances/30206445-a817-40a2-aac9-e5432636a66c";
      IamOptions options = await IamOptions(iamApiKey: apikey, url: url).build();
      STTResult test = await SpeechToText(iamOptions: options, audioFile: File("test/audio-file2.flac"),contentType: "audio/flac").run();
      print(test.getAllTranscript());
      print(test.transcripts);
    });
  });

  testWidgets('http2', (WidgetTester tester) async {
    await tester.runAsync(() async {
      final result = await get(Uri.parse('https://google.com'));
      print(result.statusCode); // Should get 200
    });
  });
}