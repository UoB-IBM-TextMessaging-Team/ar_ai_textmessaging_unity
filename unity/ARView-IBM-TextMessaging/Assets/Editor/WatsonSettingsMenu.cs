using UnityEditor;
using UnityEngine;

public class WatsonSettingsMenu
{
    [MenuItem("SNH-Watson/Create New Watson Settings Asset")]
    public static void CreateAsset()
    {
        ScriptableObjectUtility.CreateAsset<WatsonSettings>();
    }

    [MenuItem("SNH-Watson/Highlight IBM Watson Settings")]
    // Pings PhotonServerSettings and makes it selected (show in Inspector)
    private static void HighlightSettings()
    {
        WatsonSettings settings =
            (WatsonSettings)Resources.Load("WatsonSettings", typeof(WatsonSettings));
        Selection.objects = new UnityEngine.Object[] { settings };
        EditorGUIUtility.PingObject(settings);

    }
}