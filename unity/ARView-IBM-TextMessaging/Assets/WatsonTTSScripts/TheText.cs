using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;


public class TheText : MonoBehaviour
{
    [SerializeField]
    private GameObject targetGameObject;
    //private InputField textInput; // The text input field the user types text into
    public string s; //The text give by nlu
    // Start is called before the first frame update

    public int index;
    void Start()
    {
        Debug.Log("StartTheText");
        index = 0;
    }

    // Update is called once per frame
    void Update() {
        if (index == 1)
        {
            Debug.Log("send str");
            index++;
            GameObject.Find("TextToSpeech").SendMessage("AddTextToQueue", s);
            s = string.Empty;
        }
    }

    public void sendTextToTTS(string str)
    {
        s = str;
        index = 1;

    }


}
