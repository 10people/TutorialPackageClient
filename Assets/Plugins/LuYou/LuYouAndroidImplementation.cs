#if UNITY_ANDROID
using UnityEngine;
using System;
using System.Collections;
using System.Runtime.InteropServices;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using LitJson;

public class LuYouAndroidImplementation : LuYou.LuYouImplement {



	public static int LUYOU_STATUS_NONE = 0;
	public static int LUYOU_STATUS_INITED = 1;
	public static int LUYOU_STATUS_STARTED = 2;
	public static int LUYOU_STATUS_PAUSED = 3;
	private AndroidJavaObject recorder;

	private AndroidJavaClass lyCoreRecorder;
	private AndroidJavaClass lyCoreSharer;
	private AndroidJavaClass core;

	public LuYouAndroidImplementation(){
		AndroidJavaClass rc = new AndroidJavaClass("com.luyousdk.core.Recorder");
		//直接调用native方法的recorder
		recorder = rc.CallStatic<AndroidJavaObject> ("getInstance");
		//经java包装的recorder
		core = new AndroidJavaClass("com.luyousdk.core.LYCore");
		lyCoreRecorder = new AndroidJavaClass("com.luyousdk.core.LYCore$Recorder");
		lyCoreSharer = new AndroidJavaClass("com.luyousdk.core.LYCore$Sharer");
	}

	private int luyou_support(){
		return lyCoreRecorder.CallStatic<int> ("isSupported");
	}
	private int luyou_init(int nWidth, int nHeight){
		return recorder.Call<int> ("initRecording",nWidth,nHeight);
	}

	private bool luyou_support_uhd(){
		return lyCoreRecorder.CallStatic<bool> ("isHDSupported");
	}

	private int luyou_set_param(string strKey, string strValue){
		return recorder.Call<int> ("set",strKey,strValue);
	}		

	private void luyou_start(){
		lyCoreRecorder.CallStatic ("startRecording");
	}
	
	private void luyou_pause(){
		lyCoreRecorder.CallStatic ("pauseRecording");
	}

	private void luyou_resume(){
		lyCoreRecorder.CallStatic ("resumeRecording");
	}

	private void luyou_finish(){
		lyCoreRecorder.CallStatic ("stopRecording");
	}

	private int luyou_get_status(){
		return recorder.Call<int> ("getRecordingStatus");
	}

	private int luyou_get_errno(){
		return recorder.Call<int> ("getErrorNo");
	}

	private  int luyou_begin_draw(){
		return recorder.Call<int> ("beginDrawData");
	}

	private int luyou_end_draw(){
		return recorder.Call<int> ("endDrawData");
	}
	
	private int luyou_destroy(){
		return recorder.Call<int> ("destroyRecording");
	}


	public override void Awake(LuYou luYouInstance) {
	
	}
	
	public override void Start(LuYou luYouInstance, int screenWidth, int screenHeight) {
		luyou_init(screenWidth, screenHeight);
	}

	
	public override int IsSupported() {
		return lyCoreRecorder.CallStatic<int> ("isSupported");
	}
	
	public bool IsSupportUhd() {
		return lyCoreRecorder.CallStatic<bool> ("isHDSupported");
	}
	
	public int SetParam(string strKey, string strValue) {
		return luyou_set_param(strKey, strValue);
	}
	
	public override void StartRecording() {
		lyCoreRecorder.CallStatic ("startRecording");
	}
	
	public override void PauseRecording() {
		lyCoreRecorder.CallStatic ("pauseRecording");
	}
	
	public override void ResumeRecording() {
		lyCoreRecorder.CallStatic ("resumeRecording");
	}
	
	public override void StopRecording() {
		lyCoreRecorder.CallStatic ("stopRecording");
	}
	
	public override bool IsRecording() {
		return (GetStatus() == LUYOU_STATUS_STARTED);
	}
	
	public override bool IsPaused() {
		return (GetStatus() == LUYOU_STATUS_PAUSED);
	}	
	
	private int GetStatus() {
		return luyou_get_status();
	}
	
	private int GetErrno() {
		return luyou_get_errno();
	}
	
	public override void BeginDraw() {
		luyou_begin_draw();
	}

	public override void EndDraw() {
		luyou_end_draw();
	}
	public override void SetMinRecordingTime(int seconds){
		lyCoreRecorder.CallStatic ("setMinRecordingSeconds",seconds);
	}
	public override void SetMaxRecordingTime(int seconds){
		lyCoreRecorder.CallStatic ("setMaxRecordingSeconds",seconds);
	}
	public override string getLastRecordingFile ()
	{
		return lyCoreRecorder.CallStatic <string>("getLastRecordingFile");
	}
	public override string loadThumbnailFromFilePath (string path)
	{
		return lyCoreRecorder.CallStatic <string> ("loadThumbnailFromFilePathFromUnity",path);
	}
	public override void setMetadata (string key, string value)
	{
		lyCoreRecorder.CallStatic ("setMetadata",key,value);
	}
	public override void setMetadatas (Dictionary<string, string> metadatas)
	{
//		AndroidJavaClass ajc = new AndroidJavaClass ("java.util.HashMap");
		AndroidJavaObject map = new AndroidJavaObject ("java.util.HashMap");
		if (metadatas != null) {
			AndroidJavaObject tmpObj;
//			foreach (string key in metadatas.Keys) {
//				string value = metadatas[key];
			JsonData data = JsonMapper.ToJson(metadatas);
				
//			}
			lyCoreRecorder.CallStatic ("setMetadatasByUnity",data.ToString());
		}
	}
	public override int getVideoStatus (string videoid)
	{
		return lyCoreSharer.CallStatic<int>("getVideoStatus",videoid);
	}
	public override void publishVideo (string videoid, string path, string title, string desc)
	{
		lyCoreSharer.CallStatic("publishVideo",videoid,path,title,desc);
	}
	public override void setNotWifiAllowShare (bool isAllow)
	{
		lyCoreSharer.CallStatic("setNotWifiAllowShare",isAllow);
	}

	public override void setDeletageCallback (bool isDeletage)
	{
		core.CallStatic ("setUnityRecordingDelegate",isDeletage);
	}
	public override bool IsHDSupported ()
	{
		return lyCoreRecorder.CallStatic<bool> ("isHDSupported");
	}
    public static int getSDKVersion() {
        AndroidJavaClass vJavaClass = new AndroidJavaClass ("android.os.Build$VERSION");
        return vJavaClass.GetStatic<int>("SDK_INT");
    }	
	public override int CaptureFrame(int textureID){
		return recorder.Call<int> ("capFrame",textureID);
	}
}

#endif