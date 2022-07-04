using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARFoundation;
using UnityEngine.SceneManagement;
using TMPro;


public class main_test : MonoBehaviour
{
    [Header("AR Object To Place")]
    public GameObject objectToPlace;

    [Header("Message Input")]
    public TMP_InputField messageInput;
    public Button confirmActionButton;


    private void Awake()
    {
        confirmActionButton.onClick.AddListener(OnConfirmAction);
    }

    void Start()
    {

    }

    void Update()
    {


    }

    #region 
    // Actions after pressing confirm button
    private void OnConfirmAction()
    {
        string message = messageInput.text;
        if(string.IsNullOrEmpty(message)) {
            return;
        }
        //NLU TTS
        watsonNLUTTSIF watsonService = new watsonNLUTTSIF(message);
        //Animation
        int emotionSignal = watsonService.getEmotion();
        ARObjectControl curARObjControl = objectToPlace.GetComponent<ARObjectControl>();
        Animator ani = curARObjControl.Animator;
        
        if(emotionSignal==1) {
            ani.SetTrigger("sadness");
        }
        else if(emotionSignal==2) {
            ani.SetTrigger("joy");
        }
        else if(emotionSignal==3) {
            ani.SetTrigger("fear");
        }
        else if(emotionSignal==4) {
            ani.SetTrigger("disgust");
        }
        else if(emotionSignal==5) {
            ani.SetTrigger("anger");
        }
        
        
    }
    #endregion
}



