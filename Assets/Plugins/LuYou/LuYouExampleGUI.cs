using UnityEngine;
using System;
using System.Collections;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text.RegularExpressions;

public class LuYouExampleGUI : MonoBehaviour {
	#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1)
	private int support = 0;
	
	private Rect RecordButtonRect1;
	private Rect RecordButtonRect2;
	private Rect SharerButtonRect;

	private AndroidJavaObject currentActivity;
	
    private void InitGUI()
    {
        RecordButtonRect1 = new Rect(10, 70, 200, 100);
		RecordButtonRect2 = new Rect(10, 330, 200, 100);
		SharerButtonRect = new Rect (230,70,200,100);
    }
	
	void Start () {
		Debug.Log ("start GUI");
		InitGUI();
		RegisterCallbacks ();
		support = LuYou.IsSupported ();
		LuYou.SetDeletageCallback (true);
	}

	private void RegisterCallbacks(){
		LuYou.RecordingTime += OnRecordingTime;
		LuYou.RecordingStoped += OnRecordingStoped;
		LuYou.RecordingStarted += OnRecordingStarted;
		LuYou.RecordingFailed += OnRecordingFailed;
		LuYou.RecordingWarning += OnRecordingWarning;
		LuYou.SharerPreing += OnSharerPreing;
		LuYou.SharerFailed += OnSharerFailed;
		LuYou.SharerPrepared += OnSharerPrepared;
		LuYou.SharerProgress += OnSharerProgress;
		LuYou.SharerComplete += OnSharerComplete;
		LuYou.SharerStarted += OnSharerStarted;
	}
	void OnGUI () {
		if (support < 0) {
			support = LuYou.IsSupported ();
		} else {
			if (!LuYou.IsRecording() && !LuYou.IsPaused()) {
				if (GUI.Button(RecordButtonRect1, "Record")) {
					LuYou.SetMaxRecordingTime(30);
					LuYou.SetMinRecordingTime(5);
					LuYou.StartRecording();
					Debug.Log("Record LuYou.IsRecording() = " + LuYou.IsRecording() + " , LuYou.IsPaused() = " + LuYou.IsPaused());
				}
				if(GUI.Button(SharerButtonRect,"share")){
					string path1 = LuYou.GetLastRecordingFile();
					LuYouLog.d("LastRecordingFile" +path1);
					LuYouLog.d("loadThumbnailFromFilePath" + LuYou.LoadThumbnailFromFilePath(path1));
					string videoId = path1;
					LuYou.PublishVideo(videoId,path1,"testTitle","testDescription");
				}
			} else if (LuYou.IsRecording()) {
				if (GUI.Button(RecordButtonRect1, "Stop")) {
					Dictionary<string, string> OthelloDict =
						new Dictionary<string, string>();
					OthelloDict.Add("test key","test value");
					OthelloDict.Add("test key1","test value1");
					OthelloDict.Add("test key2","test value2");
					LuYou.SetMetadatas(OthelloDict);
					LuYou.StopRecording();
					Debug.Log("Stop LuYou.IsRecording() = " + LuYou.IsRecording() + " , LuYou.IsPaused() = " + LuYou.IsPaused());
				}
				if (GUI.Button(RecordButtonRect2, "Pause")) {
					LuYou.PauseRecording();
					Debug.Log("Pause LuYou.IsRecording() = " + LuYou.IsRecording() + " , LuYou.IsPaused() = " + LuYou.IsPaused());
				}
			} else if (LuYou.IsPaused()) {
				if (GUI.Button(RecordButtonRect1, "Stop")) {
					LuYou.StopRecording();
					Debug.Log("Stop LuYou.IsRecording() = " + LuYou.IsRecording() + " , LuYou.IsPaused() = " + LuYou.IsPaused());
				}
				if (GUI.Button(RecordButtonRect2, "Resume")) {
					LuYou.ResumeRecording();
					Debug.Log("Resume LuYou.IsRecording() = " + LuYou.IsRecording() + " , LuYou.IsPaused() = " + LuYou.IsPaused());
				}
			}			
		}
	}

	public void OnRecordingStarted(){
		LuYouLog.d ("LuYouExampleGUI OnRecordingStarted");
	}
	public void OnRecordingStoped(){
		LuYouLog.d ("LuYouExampleGUI RecordingStoped");
	}
	public void OnRecordingFailed(int code ,string msg){
		LuYouLog.d ("LuYouExampleGUI RecordingFailed code = " + code + ", msg = "+code);
	}
	public void OnRecordingWarning(int code ,string msg){
		LuYouLog.d ("LuYouExampleGUI RecordingWarning code = " + code + ", msg = "+code);
	}
	public void OnRecordingTime(int seconds){
		LuYouLog.d ("LuYouExampleGUI OnRecordingTime seconds = " + seconds);
	}

	public void OnSharerPreing(string videoId){
		LuYouLog.d ("LuYouExampleGUI OnSharerPreing videoId = " + videoId);
	}
	public void OnSharerPrepared(string videoId,string shareUrl){
		LuYouLog.d ("LuYouExampleGUI SharerPrepared videoId = " + videoId+",shareUrl = " + shareUrl);
	}
	public void OnSharerStarted(string videoId){
		LuYouLog.d ("LuYouExampleGUI SharerStarted videoId = " + videoId);
	}
	public void OnSharerFailed(string videoid,int code ,string msg){
		LuYouLog.d ("LuYouExampleGUI SharerFailed videoid = "+videoid+",code = " + code + ", msg = "+code);
	}
	public void OnSharerProgress(string videoId,double progress){
		LuYouLog.d ("LuYouExampleGUI SharerProgress videoId = " + videoId + " , progress = " +progress);
	}
	public void OnSharerComplete(string videoId){
		LuYouLog.d ("LuYouExampleGUI SharerComplete videoId = " + videoId);
	}
#endif
}