using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.XR.ARSubsystems;
using UnityEngine.XR.ARFoundation;
using UnityEngine.SceneManagement;
using TMPro;


public class Main_control : MonoBehaviour
{
    [Header("AR Object To Place")]
    public GameObject objectToPlace;

    [Header("Placement Indicator")]
    public GameObject placementIndicator;

    [Header("Button To Place")]
    public GameObject gameobject_place_btn;

    [Header("Button To Reset")]
    public GameObject gameobject_reset_btn;

    [Header("Hint Text")]
    public GameObject gameobject_hint_text;

    [Header("Message Input")]
    public TMP_InputField messageInput;
    public Button confirmActionButton;

    [Header("Watson Text To Speech")]
    public GameObject watsonTTS;

    //Placement positon in reality
    private Pose placementPose;

    //If the plane is recognized
    private bool placementPoseIsValid = false;

    //AR data source
    private ARSessionOrigin arOrigin;

    //AR object controller
    private ARObjectControl curARObjControl;

    //AR foundation raycast object
    private ARRaycastManager raycastManager;
    
    private void Awake()
    {
        confirmActionButton.onClick.AddListener(OnConfirmAction);
    }

    void Start()
    {
        //Find ar origin
        this.arOrigin = FindObjectOfType<ARSessionOrigin>();

        //Find AR raycast object
        this.raycastManager = FindObjectOfType<ARRaycastManager>();

        //Change to recognizing status
        this.change_to_recognizing();
    }

    void Update()
    {
        //When AR status is recognizing
        if (Config.ar_statu == AR_statu.recognizing)
        {
            //Update plane position/if recognized
            this.UpdatePlacementPose();

            //Update placement indicator position/if display
            this.UpdatePlacementIndicator();
        }

    }

    //Change to recognizing status
    public void change_to_recognizing()
    {
        //Set AR status recognizing
        Config.ar_statu = AR_statu.recognizing;

        //Destroy AR object placed
        GameObject[] objs = GameObject.FindGameObjectsWithTag("ARObject");
        for (int i = 0; i < objs.Length; i++)
        {
            Destroy(objs[i].gameObject);
        }

        //Hide place button
        this.gameobject_place_btn.SetActive(false);

        //Hide reset button
        this.gameobject_reset_btn.SetActive(false);

        //Hide message input area
        messageInput.gameObject.SetActive(false);
    }

    //Change to AR object is placed status
    public void change_to_object_is_placed()
    {
        //Set AR status object_is_placed
        Config.ar_statu = AR_statu.object_is_placed;

        //Place AR object
        this.PlaceObject();

        //Display reset button
        this.gameobject_reset_btn.SetActive(true);

        //Display place button
        this.gameobject_place_btn.SetActive(false);

        //Hide placement indicator
        this.placementIndicator.SetActive(false);

        //Display message input area
        messageInput.gameObject.SetActive(true);
    }

    //Update plane position/if recognized
    private void UpdatePlacementPose()
    {
        var screenCenter = Camera.main.ViewportToScreenPoint(new Vector3(0.5f, 0.5f));

        var hits = new List<ARRaycastHit>();

        //Check placement plane if valid
        this.raycastManager.Raycast(screenCenter, hits, TrackableType.Planes);
        this.placementPoseIsValid = hits.Count > 0;

        if (this.placementPoseIsValid)
        {
            this.placementPose = hits[0].pose;

            //Distance from plane to phone camera
            float distance = (this.placementPose.position - Camera.main.transform.position).sqrMagnitude;

            //Placement plane invalid when plane is too close/far away
            if (distance < 0.35f || distance > 4.5f)
                this.placementPoseIsValid = false;
            else
            {
                var cameraForward = Camera.current.transform.forward;
                var cameraBearing = new Vector3(cameraForward.x, 0, cameraForward.z).normalized;

                this.placementPose.rotation = Quaternion.LookRotation(cameraBearing);
            }

        }
    }

    //Update placement indicator position/if display
    private void UpdatePlacementIndicator()
    {
        if (this.placementPoseIsValid)
        {
            //Display indicator
            this.placementIndicator.SetActive(true);
            this.placementIndicator.transform.SetPositionAndRotation(this.placementPose.position, this.placementPose.rotation);

            //Hide hint text; Display place button
            this.gameobject_hint_text.SetActive(false);
            this.gameobject_place_btn.SetActive(true);
        }
        else
        {
            //Hide indicator 
            this.placementIndicator.SetActive(false);

            //Display hint text; Hide place button
            this.gameobject_hint_text.SetActive(true);
            this.gameobject_place_btn.SetActive(false);
        }
    }

    //Place object
    private void PlaceObject()
    {
        GameObject newObj = Instantiate(this.objectToPlace, this.placementPose.position, this.placementPose.rotation);
        curARObjControl = newObj.GetComponent<ARObjectControl>();
    }

    #region 
   //Actions after pressing place button
    public void on_reset_btn()
    {
        //Play sound
        Audio_control.instance.play_btn_sound();

        //Change to recognizing status
        this.change_to_recognizing();
    }

    //Actions after pressing back button
    public void on_back_btn()
    {
        SceneManager.LoadScene("Start");
    }

    //Actions after pressing place button
    public void on_place_btn()
    {
        //Place object
        this.change_to_object_is_placed();
    }

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
        //else {
        //    ani.SetTrigger("normal");
        //}
        
    }
    #endregion
}



