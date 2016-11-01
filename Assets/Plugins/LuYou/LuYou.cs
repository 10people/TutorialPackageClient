using UnityEngine;
using System;
using System.Collections;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Globalization;
using LitJson;

public class LuYou : MonoBehaviour {
#pragma warning disable

	public delegate void RecordingStartedDelegate();
	
	public static event RecordingStartedDelegate RecordingStarted;
	
	public delegate void RecordingStopedDelegate();
	
	public static event RecordingStopedDelegate RecordingStoped;
	
	public delegate void RecordingFailedDelegate(int code,string msg);
	
	public static event RecordingFailedDelegate RecordingFailed;
	
	public delegate void RecordingWarningDelegate(int code,string msg);
	
	public static event RecordingWarningDelegate RecordingWarning;
	
	public delegate void RecordingTimeDelegate(int seconds);
	
	public static event RecordingTimeDelegate RecordingTime;
	
	public delegate void SharerPreingDelegate(string videoId);
	
	public static event SharerPreingDelegate SharerPreing;	
	
	public delegate void SharerPreparedDelegate(string videoId,string url);
	
	public static event SharerPreparedDelegate SharerPrepared;	
	
	public delegate void SharerStartedDelegate(string videoId);
	
	public static event SharerStartedDelegate SharerStarted;	
	
	public delegate void SharerProgressDelegate(string videoId,double progress);
	
	public static event SharerProgressDelegate SharerProgress;	
	
	public delegate void SharerCompleteDelegate(string videoId);
	
	public static event SharerCompleteDelegate SharerComplete;	
	
	public delegate void SharerFailedDelegate(string videoId,int code,string msg);
	
	public static event SharerFailedDelegate SharerFailed;	
	
	public class LuYouImplement {
		//init
		public virtual void Awake(LuYou luYouInstance) {
		}
		
		public virtual void Start(LuYou luYouInstance, int screenWidth, int screenHeight) {
		}
		//recorder
		public virtual int IsSupported() {
			return -2;
		}
		public virtual bool IsHDSupported(){
			return false;
		}
		
		public virtual void StartRecording() {
		}
		
		public virtual void PauseRecording() {
		}
		
		public virtual void ResumeRecording() {
		}
		
		public virtual void StopRecording() {
		}
		public virtual void SetMinRecordingTime(int seconds) {
		}
		public virtual void SetMaxRecordingTime(int seconds) {
		}
		public virtual bool IsRecording() {
			return false;
		}
		
		public virtual bool IsPaused() {
			return false;
		}	
		
		public virtual void BeginDraw() {
		}
		
		public virtual void EndDraw() {
		}
		public virtual int CaptureFrame(int textureID){
			return 1;
		}
		public virtual string getLastRecordingFile (){
			return "";
		}
		public virtual string loadThumbnailFromFilePath(string path){
			return "";
		}
		public virtual void setMetadata (string key, string value){}
		public virtual void setMetadatas (Dictionary<string,string> metadatas){}
		//sharer
		public virtual void setNotWifiAllowShare(bool isAllow){}
		public virtual void publishVideo (string videoid,string path,string title,string desc){}
		public virtual int getVideoStatus(string videoid){
			return -1;		
		}
		public virtual void setDeletageCallback(bool isDeletage){}
	}

	public class SharerImpl{
		
	}
	private bool enableIOS = false;
	private bool enableAndroid = true;	
	public string packageName = "input your package name";	
	public string packageKey = "input your app key";	
	public int minimumRecordingTime = 5;
	public int maximumRecordingTime = 60 * 30;
	private static bool iOSEnabled_ = false;
	private static bool androidEnabled_ = true;
	public bool showLuyouUI = true;
	private static LuYouImplement luYouImpl_;
	
	private static LuYouImplement LuYouImpl() {
		if (luYouImpl_ == null) {
			if ((iOSEnabled_ || androidEnabled_) && 
			    (Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer)) {
#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1)
				LuYouLog.i ("Application.platform == RuntimePlatform.Android || Application.platform == RuntimePlatform.IPhonePlayer");
                if (androidEnabled_ && LuYouAndroidImplementation.getSDKVersion() >= 14) {
					LuYouLog.i ("ndroidEnabled_ && LuYouAndroidImplementation.getSDKVersion() >= 14");
                    luYouImpl_ = new LuYouAndroidImplementation(); 
					LuYouLog.i("luYouImpl_ = " + luYouImpl_);
                }
#elif UNITY_IPHONE
                if (iOSEnabled_) {
				
                }
#endif
	
			}
			if(luYouImpl_ == null){
				luYouImpl_ = new LuYouImplement();
			}

		}
		return luYouImpl_;
	}
	
	public static LuYou instance;
#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1)
	internal  AndroidJavaObject floatViewUtils;
	internal  AndroidJavaClass core;
	internal  AndroidJavaClass recorder;
	internal  AndroidJavaClass sharer;
#elif UNITY_IPHONE

#endif
	
	 public static LuYou Instance()
    {
        return instance;
    }
	
	void Awake() {
		if (instance != null) {
			Destroy(gameObject);
			return;
		}
		this.gameObject.name = "LuYouPrefab";
		DontDestroyOnLoad(this);
		instance = this;
		iOSEnabled_ = enableIOS;
		androidEnabled_ = enableAndroid;
			
		LuYouImpl().Awake(this);
		//support = LuYou.IsSupported();
	}
	 
	void OnApplicationQuit(){
		Debug.Log ("LuYou OnApplicationQuit");
		StopRecording ();
		#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1)
		if(showLuyouUI){
			floatViewUtils.Call("removeFloatView");
		}
		AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaObject currentActivity = jc.GetStatic<AndroidJavaObject>("currentActivity");
		core.CallStatic("release",currentActivity);
#endif
		RemoveAllEventHandlers ();
	}
	void OnApplicationPause(bool isPause){
		Debug.Log ("LuYou OnApplicationPause isPause = " + isPause);
		if (isPause) {
			PauseRecording();	
			#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1)
			if(showLuyouUI){
				floatViewUtils.Call("hideFloatView");
				Debug.Log ("LuYou hideFloatView");

			}
#endif
		} else {
			ResumeRecording();
			#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1)
			if(showLuyouUI){
				floatViewUtils.Call("showFloatView");
				Debug.Log ("LuYou showFloatView");
			}
#endif
		}
	}
	
	void Start() {
#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1)
		AndroidJavaClass jc = new AndroidJavaClass("com.unity3d.player.UnityPlayer");
		AndroidJavaObject currentActivity = jc.GetStatic<AndroidJavaObject>("currentActivity");
		core = new AndroidJavaClass("com.luyousdk.core.LYCore");
		recorder = new AndroidJavaClass("com.luyousdk.core.LYCore$Recorder");
		sharer = new AndroidJavaClass("com.luyousdk.core.LYCore$Sharer");
		core.CallStatic("initialize", new object[]{currentActivity});
		core.CallStatic ("appKey",new object[]{packageKey});
		if (showLuyouUI) {
			AndroidJavaClass fc = new AndroidJavaClass ("com.luyousdk.core.ui.FloatViewUtils");
			floatViewUtils = fc.CallStatic<AndroidJavaObject> ("getInstance");
			floatViewUtils.Call ("initFloatView",new object[]{currentActivity});
			floatViewUtils.Call ("showFloatView");
		}
#elif UNITY_IPHONE
		
#endif
		LuYouLog.d ("start init ");
		LuYouImpl().Start(this, Screen.width, Screen.height);
		LuYouImpl ().SetMaxRecordingTime(maximumRecordingTime);
		LuYouImpl ().SetMinRecordingTime(minimumRecordingTime);
		LuYouLog.d ("start init end");
#if UNITY_ANDROID && !(UNITY_2_6 ||UNITY_2_6_1|| UNITY_3_0 ||UNITY_3_0_0|| UNITY_3_1 || UNITY_3_2 || UNITY_3_3 || UNITY_3_4 || UNITY_3_5 || UNITY_4_0 ||UNITY_4_0_1|| UNITY_4_1|| UNITY_4_5)
		InitializeRenderCamera("Pre");
		InitializeRenderCamera("Post");	
#endif
	}
	
	
	private static void RemoveAllEventHandlers(){
		if (RecordingStarted != null) {
			foreach(LuYou.RecordingStartedDelegate del in RecordingStarted.GetInvocationList()){
				RecordingStarted -=del;
			}
		}
		if (RecordingStoped != null) {
			foreach(LuYou.RecordingStopedDelegate del in RecordingStoped.GetInvocationList()){
				RecordingStoped -=del;
			}
		}
		if (RecordingFailed != null) {
			foreach(LuYou.RecordingFailedDelegate del in RecordingFailed.GetInvocationList()){
				RecordingFailed -=del;
			}
		}if (RecordingWarning != null) {
			foreach(LuYou.RecordingWarningDelegate del in RecordingWarning.GetInvocationList()){
				RecordingWarning -=del;
			}
		}
		if (RecordingTime != null) {
			foreach(LuYou.RecordingTimeDelegate del in RecordingTime.GetInvocationList()){
				RecordingTime -= del;
			}
		}
		if (RecordingStarted != null) {
			foreach(LuYou.RecordingStartedDelegate del in RecordingStarted.GetInvocationList()){
				RecordingStarted -=del;
			}
		}
		if (SharerPreing != null) {
			foreach(LuYou.SharerPreingDelegate del in SharerPreing.GetInvocationList()){
				SharerPreing -=del;
			}
		}
		
		if (SharerPrepared != null) {
			foreach(LuYou.SharerPreparedDelegate del in SharerPrepared.GetInvocationList()){
				SharerPrepared -=del;
			}
		}
		if (SharerFailed != null) {
			foreach(LuYou.SharerFailedDelegate del in SharerFailed.GetInvocationList()){
				SharerFailed -=del;
			}
		}
		
		if (SharerProgress != null) {
			foreach(LuYou.SharerProgressDelegate del in SharerProgress.GetInvocationList()){
				SharerProgress -=del;
			}
		}
		if (SharerComplete != null) {
			foreach(LuYou.SharerCompleteDelegate del in SharerComplete.GetInvocationList()){
				SharerComplete -=del;
			}
		}
		if (SharerStarted != null) {
			foreach(LuYou.SharerStartedDelegate del in SharerStarted.GetInvocationList()){
				SharerStarted -=del;
			}
		}
	}
	
	void OnDisable(){
		Debug.Log ("LuYou OnDisable");
	}
	void OnEnable(){
		Debug.Log ("LuYou OnEnable");
	}
	/**
	 * æ˜¯å¦æ”¯æŒå½•åˆ¶
	 **/
	public static int IsSupported() {
		return LuYouImpl().IsSupported();
	}
	/// <summary>
	/// æ˜¯å¦æ”¯æŒé«˜æ¸…
	/// </summary>
	/// <returns><c>true</c> if is HD supported; otherwise, <c>false</c>.</returns>
	public static bool IsHDSupported() {
		return LuYouImpl().IsHDSupported();
	}
	/**
	 * å¼€å§‹å½•åˆ¶
	 **/
	public static void StartRecording() {
		LuYouImpl().StartRecording();
	}
	/**
	 * æš‚åœå½•åˆ¶
	 **/
	public static void PauseRecording() {
		LuYouImpl().PauseRecording();
	}
	/**
	 * æ¢å¤å½•åˆ¶
	 **/
	public static void ResumeRecording() {
		LuYouImpl().ResumeRecording();
	}
	/**
	 * åœæ­¢å½•åˆ¶
	 **/
	public static void StopRecording() {
		LuYouImpl().StopRecording();
	}
	/**
	 * æ˜¯å¦æ­£åœ¨å½•åˆ¶
	 **/
	public static bool IsRecording() {
		return LuYouImpl().IsRecording();
	}
	/**
	 * æ˜¯å¦æš‚åœ
	 **/
	public static bool IsPaused() {
		return LuYouImpl().IsPaused();
	}	
	public static void SetDeletageCallback(bool isDeletage){
		LuYouImpl ().setDeletageCallback (isDeletage);
	}

	public static string GetLastRecordingFile (){
		return LuYouImpl().getLastRecordingFile();
	}
	public static string LoadThumbnailFromFilePath(string path){
		return LuYouImpl().loadThumbnailFromFilePath(path);
	}
	public static void SetMetadata (string key, string value){
		LuYouImpl().setMetadata(key,value);
	}
	public static void SetMetadatas (Dictionary<string,string> metadatas){
		 LuYouImpl ().setMetadatas (metadatas);
	}
	
	internal static void BeginDraw() {
		LuYouImpl().BeginDraw();
	}
	
	internal static void EndDraw() {
		LuYouImpl().EndDraw();
	}
	internal static void CaptureFrame(int textureID){
		LuYouImpl ().CaptureFrame (textureID);
	}
	/// <summary>
	/// * è®¾ç½®æœ€å¤§å½•åˆ¶æ—¶é•¿ï¼Œä¸èƒ½å°äºŽæœ€å°å½•åˆ¶æ—¶é•¿
	///	*å•ä½sï¼ˆç§’ï¼‰
	/// </summary>
	/// <param name="seconds">Seconds.</param>
	public static void SetMaxRecordingTime(int seconds){
		LuYouImpl ().SetMaxRecordingTime (seconds);
	}
	///<summary>
	/// è®¾ç½®æœ€å°å½•åˆ¶æ—¶é•¿ï¼Œä¸èƒ½å¤§äºŽæœ€å¤§å½•åˆ¶æ—¶é•¿ï¼ˆæœ€å°å€¼5ï¼‰
	/// å•ä½sï¼ˆç§’ï¼‰
	///<summary>
	public static void SetMinRecordingTime(int seconds){
		LuYouImpl ().SetMinRecordingTime (seconds);
	}

	public static void SetNotWifiAllowShare(bool isAllow){
		LuYouImpl ().setNotWifiAllowShare (isAllow);
	}
	public static void PublishVideo (string videoid,string path,string title,string desc){
		LuYouImpl ().publishVideo (videoid,path,title,desc);
	}
	public static int GetVideoStatus(string videoid){
		return LuYouImpl ().getVideoStatus (videoid);
	}
	
	private void InitializeRenderCamera(string type) {
		if (type.Equals ("Pre") || type.Equals ("Post")) {
			if (GameObject.Find ("LuYou" + type + "Camera") == null) {
					GameObject cameraObject = new GameObject ();
					Camera camera = (Camera)cameraObject.AddComponent <Camera>();
					camera.name = "LuYou" + type + "Camera";
					camera.clearFlags = CameraClearFlags.Nothing;
					camera.cullingMask = 0;
	
					if (type.Equals ("Pre")) {
							camera.depth = Single.MinValue;
					} else {
							camera.depth = Single.MaxValue;
					}
	
					// Attach the render script.
					UnityEngineInternal.APIUpdaterRuntimeServices.AddComponent (camera.gameObject, "Assets/Plugins/LuYou/LuYou.cs (443,6)", "LuYou" + type + "Render");
	
					// Keep this fella around.
					cameraObject.SetActive (true);
					UnityEngine.Object.DontDestroyOnLoad (cameraObject);
			}
		}
	}
	
	public static void SetRenderCameraEnabled(string type, bool flag) {
		if( type.Equals("Pre") || type.Equals("Post") ) {
			GameObject renderCamera = GameObject.Find ("LuYou"+type+"Camera");
			if( renderCamera != null ) {
				renderCamera.SetActive(flag);
			}
		}
	}	
	
	/**
	 * åˆ†äº«åŠå½•åˆ¶çš„å›žè°ƒ
	 * */
	public void onRecordingStarted(string msg){
		LuYouLog.d  ("onRecordingStarted");
		if (RecordingStarted != null) {
			RecordingStarted ();
		}
	}
	public void onRecordingFailed(string msg){
		LuYouLog.d  ("onRecordingFailed msg = " + msg);
		if (RecordingFailed != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			RecordingFailed ((int)JsonData["errCode"],(string)JsonData["errMsg"]);
		}
	}
	public void onRecordingWarning(string msg){
		LuYouLog.d  ("onRecordingWarning msg = " + msg);
		if (RecordingWarning != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			RecordingWarning ((int)JsonData["errCode"],(string)JsonData["errMsg"]);
		}
	}
	public void onRecordingStopped(string msg){
		LuYouLog.d ("onRecordingStopped");
		if (RecordingStoped != null) {
			RecordingStoped ();
		}
	}
	public void onRecordingTime(string msg){
		LuYouLog.d  ("onRecordingTime seconds = " + msg);
		if (RecordingTime != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			RecordingTime ((int)JsonData["seconds"]);
		}
	}
	public void onUploadProgress(string msg){
		LuYouLog.d ("onUploadProgress msg = " + msg);
		if (SharerProgress != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			SharerProgress ((string)JsonData["videoId"],(double)JsonData["progress"]);
		}
	}
	public void onUploadPreparing(string msg){
		LuYouLog.d  ("onUploadPreparing msg = " + msg);
		if (SharerPreing != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			SharerPreing ((string)JsonData["videoId"]);
		}
	}
	public void onUploadPrepared(string msg){
		LuYouLog.d  ("onUploadPrepared");
		if (SharerPrepared != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			SharerPrepared ((string)JsonData["videoId"],(string)JsonData["shareUrl"]);
		}
	}
	public void onUploadFailed(string msg){
		LuYouLog.d ("onUploadFailed seconds = " + msg);
		if (SharerFailed != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			SharerFailed ((string)JsonData["videoId"],(int)JsonData["errCode"],(string)JsonData["errMsg"]);
		}
	}
	public void onUploadCompleted(string msg){
		LuYouLog.d ("onUploadCompleted " + msg);
		if (SharerComplete != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			SharerComplete ((string)JsonData["videoId"]);
		}
	}
	public void onUploadStarted(string msg){
		LuYouLog.d ("onUploadStarted " + msg);
		if (SharerStarted != null) {
			JsonData JsonData = JsonMapper.ToObject (msg);
			SharerStarted ((string)JsonData["videoId"]);
		}
	}
}