using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class watsonNLUTTSIF 
{
    private WasonNLU wasonNLU;
    //private string NLUResult;
    private int indexOfEmotion;
    public watsonNLUTTSIF(string str)
    {
        wasonNLU = new WasonNLU();
        wasonNLU.sendTextToNLU(str);
        GameObject.Find("WatsonTTSAndNLU").SendMessage("AddTextToQueue", str);
    }
    //return index of emotion 
    //Sad return 1 //Joy return2 //Fear return3 //Disgust return4 //Anger return5 //no emotion return 0
    public int getEmotion()
    {
        string NLUResult;
        NLUResult = wasonNLU.getResult();
        parserForNLU p = new parserForNLU();
        indexOfEmotion = p.parse(NLUResult);
        return indexOfEmotion;
    }
    // return nlu result (string)
    public string getNLUResult() {
        string NLUResult;
        NLUResult = wasonNLU.getResult();
        return NLUResult;
    }
    // return whether aduio is playing  
    public bool getStatusOfAudio()
    {
        return GameObject.Find("WatsonTTSAndNLU").GetComponent<TextToSpeech>().outputAudioSource.isPlaying;
    }


}
