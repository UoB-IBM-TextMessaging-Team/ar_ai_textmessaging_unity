using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARFoundation;
using UnityEngine.SceneManagement;
using TMPro;
using System.Threading.Tasks;

using System.Threading;
public class main_test : MonoBehaviour
{
    [Header("AR Object To Place")]
    public GameObject objectToPlace;

    [Header("Message Input")]
    public TMP_InputField messageInput;
    public Button confirmActionButton;

    private watsonNLUTTSIF watsonService;
    private bool isPlaying_lastframe = false;
    private string message;
    private int messageSignal;
    private int emotionSignal = 0;
    private ARObjectControl curARObjControl;

    private void Awake()
    {
        confirmActionButton.onClick.AddListener(OnConfirmAction);
    }

    void Start()
    {
        curARObjControl = objectToPlace.GetComponent<ARObjectControl>();
    }

    void Update()
    {
        if(messageSignal==1)
        {
            if(!string.IsNullOrEmpty(message)) {
                watsonService = new watsonNLUTTSIF(message);
                //watsonService.soundTTS();
                message = string.Empty;
            }
            // NLU TTS    
            if(watsonService.getNLUResult()!=null) {
                emotionSignal = watsonService.getEmotion();
                Debug.Log(emotionSignal);
                watsonService.soundTTS();
            }  
            //Animate
            if (watsonService.getStatusOfAudio() && (!isPlaying_lastframe)) {
                if(emotionSignal==1) {
                    curARObjControl.Animator.SetTrigger("sadness");
                }
                else if(emotionSignal==2) {
                    curARObjControl.Animator.SetTrigger("joy");
                }
                else if(emotionSignal==3) {
                    curARObjControl.Animator.SetTrigger("fear");
                }
                else if(emotionSignal==4) {
                    curARObjControl.Animator.SetTrigger("disgust");
                }
                else if(emotionSignal==5) {
                    curARObjControl.Animator.SetTrigger("anger");
                }
                else {
                    curARObjControl.Animator.SetTrigger("normal");
                }
                isPlaying_lastframe = true;
            }
            else if ((!watsonService.getStatusOfAudio()) && isPlaying_lastframe) {
                curARObjControl.Animator.SetTrigger("normal");
                isPlaying_lastframe = false;
            }
            
        }
        else if (messageSignal==0)
        {
            watsonService.destroyAudio();
            curARObjControl.Animator.SetTrigger("normal");
        }

    }

    #region 
    // Actions after pressing confirm button
    private void OnConfirmAction()
    {
        string message_flutter = messageInput.text;
        if (message_flutter.Substring(1,1)==":") {
            messageSignal = int.Parse(message_flutter.Substring(0,1));
            message = message_flutter.Remove(0,2);
        }
        
        
    }
    #endregion
}



