using System;
using System.Collections.Generic;
using System.Text;
using Module.Log;
using UnityEngine;
using System.Collections;
using System.Runtime.InteropServices;
using GCGame.Table;

public class SpeechEngine : MonoBehaviour
{
    public enum SpeechStatus
    {
        SS_DEFAULT,     //非工作状态 
        SS_STARTED,     //启动工作
        SS_READY,       //录音准备就绪
        SS_LISTENING,   //录音中
        SS_RECOGNIZING, //识别中
        SS_CANCELING,   //任务取消中
        SS_PLAYING,     //语音播放中
    }

    public enum SpeechEventType
    {
        SET_TASK_START = 0,
        SET_SPEECH_READY,
        SET_SPEECH_BEGIN,
        SET_SPEECH_END,
        SET_CANCLE,
        SET_TASK_OVER,
		SET_AUDIO_PLAYOVER,
		SET_AUDIO_DECODEERROR,
        SET_NONE
    }

    public delegate void TextProcessHandler(string text);
	public delegate void ErrorProcessHandler(string errorcode);
    public delegate void SpeechEventHandler();

    private static SpeechEngine m_Instance = null;
#if ENGINE_SPEECH_USE_KD
    private static string m_sAppId = "5459e8cc";
	private static string m_sAppKey = "";
#else
    private static string m_sAppId = "RDKO6023";
    private static string m_sAppKey = "zxb8w4q5";
#endif
    private static bool m_bInited = false;

    private TextProcessHandler m_TextHandler = null;
    private ErrorProcessHandler m_ErrorHandler = null;
    private SpeechEventHandler m_TaskStartHandler = null;
    private SpeechEventHandler m_TaskOverHandler = null;
    private SpeechEventHandler m_RecordBeginHandler = null;
    private SpeechEventHandler m_RecordEndHandler = null;
    private SpeechEventHandler m_RecordReadyHandler = null;
    private SpeechEventHandler m_TaskCancleHandler = null;
	private SpeechEventHandler m_AudioPlayOverHandler = null;
	private SpeechEventHandler m_AudioDecodeError = null;

    private static SpeechStatus m_Status = SpeechStatus.SS_DEFAULT;


    public static SpeechEngine Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        if (null != m_Instance)
        {
            Destroy(this.gameObject);
        }
        m_Instance = this;
        m_Status = SpeechStatus.SS_DEFAULT;
        m_Instance.Init();
        DontDestroyOnLoad(this.gameObject);
    }

    #region 公共接口
    
    /// <summary>
    /// 开始录音
    /// </summary>
    public static void StartRecording()
    {
		if (!m_bInited)
            m_Instance.Init();
        if (m_Status == SpeechStatus.SS_DEFAULT)
        {
            SpeechAPI.StartRecording();
        }
        
    }

    /// <summary>
    /// 停止录音
    /// </summary>
    public static void StopRecording()
    {
		if (!m_bInited)
            m_Instance.Init();
        if (m_Status == SpeechStatus.SS_STARTED || m_Status == SpeechStatus.SS_READY || m_Status == SpeechStatus.SS_LISTENING)
        {
            SpeechAPI.StopRecording();
#if UNITY_ANDROID && !UNITY_EDITOR
            SpeechEngine.Instance().InvokeRepeating("StatusRecover", 11.0f, 1.0f);
#endif
        }
        
    }

#if UNITY_ANDROID && !UNITY_EDITOR
    void StatusRecover()
    {
        CancleTask();
        CancelInvoke("StatusRecover");
    }
#endif

    /// <summary>
    /// 取消语音任务
    /// </summary>
    public static void CancleTask()
    {
        if (!m_bInited)
            m_Instance.Init();
        if (m_Status == SpeechStatus.SS_STARTED || m_Status == SpeechStatus.SS_READY ||
            m_Status == SpeechStatus.SS_LISTENING || m_Status == SpeechStatus.SS_RECOGNIZING)
        {
            SpeechAPI.CancleTask();
        }
        
    }

    /// <summary>
    /// 播放语音
    /// </summary>
    /// <param name="audioName">语音路径</param>
    /*public static void PlayAudio(string audioName)
    {
        if (!m_bInited)
            m_Instance.Init();
        if (m_Status == SpeechStatus.SS_DEFAULT)
        {
            m_Status = SpeechStatus.SS_PLAYING;
            SpeechAPI.PlayAudio(audioName);
            if (ChatInfoLogic.Instance() != null)
            {
                ChatInfoLogic.Instance().OnPlayVoiceChat();
            }            
        }
    }

    /// <summary>
    /// 播放buffer内的语音
    /// </summary>
    /// <param name="audioIdx"></param>
    public static void PlayAudio(byte[] buffer)
    {
        if (!m_bInited)
            m_Instance.Init();

        if (m_Status == SpeechStatus.SS_DEFAULT && buffer != null)
        {
            m_Status = SpeechStatus.SS_PLAYING;
            SpeechAPI.PlayAudioBuffer(buffer);
            if (ChatInfoLogic.Instance() != null)
            {
                ChatInfoLogic.Instance().OnPlayVoiceChat();
            }
        }
    }*/

    public static void PlayAudio(int voiceindex, byte[] buffer, bool bForce = false)
    {
        if (!m_bInited)
            m_Instance.Init();

        if (buffer != null)
        {
            if (m_Status == SpeechStatus.SS_DEFAULT || bForce)
            {
                m_Status = SpeechStatus.SS_PLAYING;
                GameManager.gameManager.SoundManager.MusicDown();
                SpeechAPI.PlayAudioBuffer(buffer);
                GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord.PlayingVoiceIndex = voiceindex;
                if (ChatInfoLogic.Instance() != null)
                {
                    ChatInfoLogic.Instance().OnPlayVoiceChat();
                }
#if UNITY_ANDROID && !UNITY_EDITOR
                SpeechEngine.Instance().InvokeRepeating("ForcePlayOver", 20.0f, 1.0f);
#endif
            }
        }        
    }

#if UNITY_ANDROID && !UNITY_EDITOR
    void ForcePlayOver()
    {
        m_Status = SpeechStatus.SS_DEFAULT;
        OnAudioPlayOver();
        CancelInvoke("ForcePlayOver");
    }
#endif

    public static byte[] GetAudioBuffer()
    {
        if (!m_bInited)
            m_Instance.Init();

        return SpeechAPI.GetAudioBuffer();
        
    }

    /// <summary>
    /// 设置录音时长上限
    /// </summary>
    /// <param name="maxInternal">时长，单位s</param>
    public void SetMaxRecordInterval(float maxInternal)
    {
        if (!m_bInited)
            m_Instance.Init();

        SpeechAPI.SetMaxRecordInterval(maxInternal);
    }

    /// <summary>
    /// 设置回调对象名称
    /// </summary>
    /// <param name="gbName"></param>
    public void SetUnityReceiver(string gbName)
    {
        SpeechAPI.SetUnityReceiver(gbName);
    }

    /// <summary>
    /// 设置语音识别回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetTextProcessHandler(TextProcessHandler handler)
    {
        m_TextHandler = handler;
    }

    /// <summary>
    /// 设置错误回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetErrorProcessHandler(ErrorProcessHandler handler)
    {
        m_ErrorHandler = handler;
    }

    /// <summary>
    /// 设置任务开始回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetTaskStartHandler(SpeechEventHandler handler)
    {
        m_TaskStartHandler = handler;
    }

    /// <summary>
    /// 设置任务结束回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetTaskOverHandler(SpeechEventHandler handler)
    {
        m_TaskOverHandler = handler;
    }

    /// <summary>
    /// 设置任务取消回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetTaskCancleHandler(SpeechEventHandler handler)
    {
        m_TaskCancleHandler = handler;
    }

    /// <summary>
    /// 设置录音准备就绪的回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetRecordReadyHandler(SpeechEventHandler handler)
    {
        m_RecordReadyHandler = handler;
    }

    /// <summary>
    /// 设置录音开始回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetRecordBeginHandler(SpeechEventHandler handler)
    {
        m_RecordBeginHandler = handler;
    }

    /// <summary>
    /// 设置录音结束回调函数
    /// </summary>
    /// <param name="handler"></param>
    public void SetRecordEndHandler(SpeechEventHandler handler)
    {
        m_RecordEndHandler = handler;
    }

    /// <summary>
    /// 当前状态
    /// </summary>
    public static SpeechStatus Status
    {
        get { return m_Status; }
    }

	/// <summary>
    /// 设置播放音频解码错误回调函数
	/// </summary>
	public void SetAudioDecodeHandler(SpeechEventHandler handler)
	{
		m_AudioDecodeError = handler;
	}
	/// <summary>
    /// 设置播放音频结束回调函数
	/// </summary>
	public void SetAudioPlayOverHandler(SpeechEventHandler handler)
	{
		m_AudioPlayOverHandler = handler;
	}

    #endregion

    #region 内部实现
    /// <summary>
    /// 初始化
    /// </summary>
    protected void Init()
    {
        m_Instance.SetUnityReceiver(this.transform.name);
        SpeechAPI.Init (m_sAppId, m_sAppKey);
        m_bInited = true;
    }

    /// <summary>
    /// 检查是否初始化
    /// </summary>
    /// <returns></returns>
	protected static bool CheckIfInit()
	{
		return m_bInited;
	}

    /// <summary>
    /// 语音功能API
    /// </summary>
    private class SpeechAPI
    {
#if UNITY_IOS && !UNITY_EDITOR

        #region DllImport
        [DllImport("__Internal")]
        private static extern void _SGSetUnityReceiver(string gbName);

        [DllImport("__Internal")]
        private static extern void _SGInitSDK(string appid, string appkey);

        [DllImport("__Internal")]
        private static extern void _SGStartRecord();

        [DllImport("__Internal")]
        private static extern void _SGStopRecord();

        [DllImport("__Internal")]
        private static extern void _SGCancelTask();

        [DllImport("__Internal")]
        private static extern void _SGPlayAudio(string audioPath);

		[DllImport("__Internal")]
        private static extern void _SGPlayAudioBuffer(byte[] bytes, int length);

		[DllImport("__Internal")]
        private static extern void _SGGetAudioBuffer(System.IntPtr bytes);

		[DllImport("__Internal")]
        private static extern int _SGGetAudioBufferLength();

        [DllImport("__Internal")]
        private static extern void _SGSetMaxRecordInterval(float interval);

        #endregion
        

        #region API调用
        public static void Init(string appid, string appkey)
        {
            _SGInitSDK(appid, appkey);
        }

        public static void StartRecording()
        {
            _SGStartRecord();
        }

        public static void StopRecording()
        {
            _SGStopRecord();
        }

        public static void SetUnityReceiver(string gbName)
        {
            _SGSetUnityReceiver(gbName);
        }

        public static void CancleTask()
        {
            _SGCancelTask();
        }

        public static void PlayAudio(string audioname)
        {
            _SGPlayAudio(audioname);
        }

		public static void PlayAudioBuffer(byte[] audioBuff)
		{
            _SGPlayAudioBuffer(audioBuff, audioBuff.Length);
		}
		
		public static byte[] GetAudioBuffer()
		{
            int length = _SGGetAudioBufferLength();
			byte[] audioBuff = new byte[length];
			
			IntPtr bytePtr = Marshal.AllocHGlobal (length);
            _SGGetAudioBuffer(bytePtr);
			Marshal.Copy (bytePtr,audioBuff,0,length);

			return audioBuff;
		}

        public static void SetMaxRecordInterval(float maxInterval)
        {
            _SGSetMaxRecordInterval(maxInterval);
        }

        #endregion


#elif UNITY_ANDROID
        #region API调用
        private static string m_sSGAndroidName = "com.cyou.speechengine.SG_SpeechAPI";
//         private static string m_sKDAndroidName = "com.cyou.keda_speechapi";
// 
//         private static string m_sSGFunc_prefix = "_SG";
//         private static string m_sKDFunc_prefix = "_KD";

        //调用函数名称
        private static string m_sSetUnityReceiver = "_SetUnityReceiver";
        private static string m_sInitSDK = "_InitSDK";
        private static string m_sStartRecord = "_StartRecord";
        private static string m_sStopRecord = "_StopRecord";
        private static string m_sCancleTask = "_CancleTask";
        private static string m_sPlayAudio = "_PlayAudio";
        private static string m_sPlayAudioBuffer = "_PlayAudioBuffer";
        private static string m_sGetAudioBuffer = "_GetAudioBuffer";
        private static string m_sSetMaxRecordInterval = "_SetMaxRecordInterval";
        public static void Init(string appid, string appkey)
        {
            DoSDKFunc(m_sInitSDK, appid, appkey);
        }

        public static void StartRecording()
        {
            DoSDKFunc(m_sStartRecord);
        }

        public static void StopRecording()
        {
            DoSDKFunc(m_sStopRecord);
        }

        public static void CancleTask()
        {
            DoSDKFunc(m_sCancleTask);
        }

        public static void SetUnityReceiver(string gbName)
        {
            DoSDKFunc(m_sSetUnityReceiver, gbName);
        }

        public static void PlayAudio(string audioname)
        {
            DoSDKFunc(m_sPlayAudio, audioname);
        }

        public static void PlayAudioBuffer(byte[] audioBuff)
        {

//            using (AndroidJavaClass cls = new AndroidJavaClass("com.cyou.cx.mtlbb.SDKService"))
//            {
//                cls.CallStatic(m_sPlayAudioBuffer, audioBuff);
//            }


            using (AndroidJavaClass cls = new AndroidJavaClass(m_sSGAndroidName))
            {
                cls.CallStatic(m_sPlayAudioBuffer, audioBuff);
            }
        }

        public static byte[] GetAudioBuffer()
        {

//            using (AndroidJavaClass cls = new AndroidJavaClass("com.cyou.cx.mtlbb.SDKService"))
//            {
//                AndroidJavaObject obj = cls.CallStatic<AndroidJavaObject>(m_sGetAudioBuffer);
//                if (obj.GetRawObject().ToInt32() != 0)
//                {
//                    byte[] result = AndroidJNIHelper.ConvertFromJNIArray<byte[]>(obj.GetRawObject());
//                    return result;
//                }
//			}
			
            using (AndroidJavaClass cls = new AndroidJavaClass(m_sSGAndroidName))
            {
                AndroidJavaObject obj = cls.CallStatic<AndroidJavaObject>(m_sGetAudioBuffer);
                if (obj.GetRawObject().ToInt32() != 0)
                {
                    byte[] result = AndroidJNIHelper.ConvertFromJNIArray<byte[]>(obj.GetRawObject());
                    return result;
                }
            }
            return null;
        }

        public static void SetMaxRecordInterval(float maxInterval)
        {
            DoSDKFunc(m_sSetMaxRecordInterval, maxInterval);
        }

        private static void DoSDKFunc(string func, params object[] args)
        {

//            System.Text.StringBuilder sb = new System.Text.StringBuilder();
//            JsonWriter writer = new JsonWriter(sb);
//            writer.WriteObjectStart();
//            for (int i = 0; i < args.Length; i++)
//            {
//                writer.WritePropertyName("param" + i.ToString());
//                writer.Write(args[i].ToString());
//            }
//            writer.WriteObjectEnd();
//            LogModule.DebugLog("SDK_JSON:" + sb.ToString());
//            AndroidHelper.doSdk(func, sb.ToString());

            using (AndroidJavaClass cls = new AndroidJavaClass(m_sSGAndroidName))
            {
                cls.CallStatic(func, args);
            }
            
        }

        #endregion
#elif UNITY_WP8
        #region API调用
        public static void Init(string appid, string appkey)
        {

        }

        public static void StartRecording()
        {

        }

        public static void StopRecording()
        {
        }

        public static void CancleTask()
        {
        }

        public static void SetUnityReceiver(string gbName)
        {

        }

        public static void PlayAudio(string audioName)
        {

        }

        public static void PlayAudioBuffer(byte[] audioBuff)
        {

        }

        public static byte[] GetAudioBuffer()
        {
#if UNITY_WP8
            return null;
#else
            return Encoding.GetEncoding("utf-8").GetBytes("");
#endif
        }

        public static void SetMaxRecordInterval(float maxInterval)
        {

        }

        #endregion
#else
        #region API调用
        public static void Init(string appid, string appkey)
        {

        }

        public static void StartRecording()
        {

        }

        public static void StopRecording()
        {

        }

        public static void CancleTask()
        {
            
        }

        public static void SetUnityReceiver(string gbName)
        {

        }

        public static void PlayAudio(string audioName)
        {

        }

        public static void PlayAudioBuffer(byte[] audioBuff)
        {

        }

        public static byte[] GetAudioBuffer()
        {
#if UNITY_WP8
            return null;
#else
            return Encoding.GetEncoding("utf-8").GetBytes("");
#endif
        }

        public static void SetMaxRecordInterval(float maxInterval)
        {

        }

        #endregion
#endif

        /// <summary>
        /// 获得错误代码的具体描述
        /// </summary>
        /// <param name="errorCode">错误代码</param>
        /// <returns></returns>
        public static string GetErrorCodeDesc(string errorCode)
        {
#if ENGINE_SPEECH_USE_KD
            return GetKDErrorCodeDesc(errorCode);
#else
            return GetSGErrorCodeDesc(errorCode);
#endif
        }

        /// <summary>
        /// 获得搜狗语音的错误描述
        /// </summary>
        /// <param name="errorCode">错误代码</param>
        /// <returns>描述</returns>
        public static string GetSGErrorCodeDesc(string errorCode)
        {
            int err = int.Parse(errorCode);
            if (err != -1)
            {
                if (ChatInfoLogic.Instance() != null)
                {
                    ChatInfoLogic.Instance().RecordError();
                }                
            }            
            switch (err)
            {
                case -1:
                    //return "正常输入";
                    return StrDictionary.GetClientDictionaryString("#{5255}");
                case 0:
                    //return "退出语音输入界面";
                    return StrDictionary.GetClientDictionaryString("#{5256}");
                case 1:
                    //return "连接网络超时";
                    return StrDictionary.GetClientDictionaryString("#{5257}");
                case 2:
                    //return "网络异常且超重试次数";
                    return StrDictionary.GetClientDictionaryString("#{5258}");
                case 3:
                    //return "录音任务错误";
                    return StrDictionary.GetClientDictionaryString("#{5259}");
                case 4:
                    //return "后端服务器错误";
                    return StrDictionary.GetClientDictionaryString("#{5260}");
                case 5:
                    //return "客户端错误";
                    return StrDictionary.GetClientDictionaryString("#{5261}");
                case 6:
                    //return "未检测到有效语音";
                    return StrDictionary.GetClientDictionaryString("#{5262}");
                case 7:
                    //return "无解码结果";
                    return StrDictionary.GetClientDictionaryString("#{5263}");
                case 8:
                    //return "服务器繁忙";
                    return StrDictionary.GetClientDictionaryString("#{5264}");
                case 9:
                    //return "禁止操作";
                    return StrDictionary.GetClientDictionaryString("#{5265}");
                case 10:
                    //return "预处理任务错误";
                    return StrDictionary.GetClientDictionaryString("#{5266}");
                case 11:
                    //return "网络不可达";
                    return StrDictionary.GetClientDictionaryString("#{5267}");
                case 12:
                    //return "网络协议错误";
                    return StrDictionary.GetClientDictionaryString("#{5268}");
                case 13:
                    //return "网络IO错误";
                    return StrDictionary.GetClientDictionaryString("#{5269}");
                case 14:
                    //return "网络连接错误";
                    return StrDictionary.GetClientDictionaryString("#{5270}");
            }
            //return "未知错误：代码"+errorCode;
            return StrDictionary.GetClientDictionaryString("#{5271}", errorCode);
        }

        /// <summary>
        /// 获得科大语音的错误描述
        /// </summary>
        /// <param name="errorCode">错误代码</param>
        /// <returns>描述</returns>
        public static string GetKDErrorCodeDesc(string errorCode)
        {
            return "未知错误";
        }

        public static string BytesToString(byte[] bytes)
        {
#if UNITY_WP8
            return Encoding.GetEncoding("utf-8").GetString(bytes,0,bytes.Length);
#else
            return Encoding.GetEncoding("utf-8").GetString(bytes);
#endif
        }

        public static byte[] StringToBytes(string str)
        {
//#if UNITY_WP8
//           return Encoding.GetEncoding("utf-8").GetBytes(str);
//#else
            return Encoding.GetEncoding("utf-8").GetBytes(str);
//#endif
        }
    }

    #endregion

    #region 回调
    /// <summary>
    /// 语音识别结果回调
    /// </summary>
    /// <param name="text">识别结果</param>
    private void ProcessSpeechText(string text)
    {
        if (m_TextHandler != null)
        {
            m_TextHandler(text);
        }
    }

    /// <summary>
    /// 错误回调函数
    /// </summary>
    /// <param name="errorCode">错误代码</param>
	private void ProcessErrorCode(string errorCode)
	{
        if (/*!errorCode.Equals("0") && */m_ErrorHandler != null)
		{
            m_ErrorHandler(SpeechAPI.GetErrorCodeDesc(errorCode));
		}
        m_Status = SpeechStatus.SS_DEFAULT;
	}

    /// <summary>
    /// 获得event类型
    /// </summary>
    /// <param name="eventstr"></param>
    /// <returns></returns>
    private SpeechEventType GetEventType(string eventstr)
    {
//        Array arr = Enum.GetValues(typeof (SpeechEventType));
        for (int i = 0; i < (int)SpeechEventType.SET_NONE; i++)
        {
            if (((SpeechEventType)i).ToString().Equals(eventstr))
            {
                return ((SpeechEventType)i);
            }
        }
        return SpeechEventType.SET_NONE;
    }

    /// <summary>
    /// 事件处理回调
    /// </summary>
    /// <param name="eventstr">事件类型</param>
    private void ProcessEvent(string eventstr)
    {
        SpeechEventType evt = GetEventType(eventstr);
        ProcessEvent(evt);
    }

    /// <summary>
    /// 事件处理回调
    /// </summary>
    /// <param name="evt">事件类型</param>
    private void ProcessEvent(SpeechEventType evt)
    {
        switch (evt)
        {
            case SpeechEventType.SET_CANCLE:
				if(m_Status != SpeechStatus.SS_DEFAULT){
                	m_Status = SpeechStatus.SS_CANCELING;
					OnTaskCancle();
				}
                break;
            case SpeechEventType.SET_SPEECH_BEGIN:
				if(m_Status == SpeechStatus.SS_STARTED || m_Status == SpeechStatus.SS_READY){
                	m_Status = SpeechStatus.SS_LISTENING;
                	OnRecordBegin();
				}
                break;
            case SpeechEventType.SET_SPEECH_END:
				if(m_Status== SpeechStatus.SS_READY || m_Status == SpeechStatus.SS_LISTENING || m_Status == SpeechStatus.SS_STARTED)
				{
					m_Status = SpeechStatus.SS_RECOGNIZING;
					OnRecordEnd();
				}
			
			break;
            case SpeechEventType.SET_SPEECH_READY:
				if(m_Status == SpeechStatus.SS_STARTED)
				{
					m_Status = SpeechStatus.SS_READY;
					OnRecordReady();
				}
			
			break;
            case SpeechEventType.SET_TASK_START:
				if(m_Status == SpeechStatus.SS_DEFAULT)
				{
					m_Status = SpeechStatus.SS_STARTED;
					OnTaskStart();
				}
			
			break;
            case SpeechEventType.SET_TASK_OVER:
				if(m_Status != SpeechStatus.SS_DEFAULT)
				{
					m_Status = SpeechStatus.SS_DEFAULT;
#if UNITY_ANDROID && !UNITY_EDITOR
        CancelInvoke("StatusRecover");
#endif
                    OnTaskOver();
				}
                break;
			case SpeechEventType.SET_AUDIO_PLAYOVER:
                if (m_Status != SpeechStatus.SS_DEFAULT)
                {
                    m_Status = SpeechStatus.SS_DEFAULT;
#if UNITY_ANDROID && !UNITY_EDITOR
        CancelInvoke("ForcePlayOver");
#endif
                    OnAudioPlayOver();
                }
				break;
			case SpeechEventType.SET_AUDIO_DECODEERROR:
				OnAudioDecodeError();
                m_Status = SpeechStatus.SS_DEFAULT;
				break;
            default:
                break;
        }
    }

    /// <summary>
    /// 启动任务回调
    /// </summary>
    private void OnTaskStart()
    {
        if (m_TaskStartHandler != null)
        {
            m_TaskStartHandler();
        }
    }

    /// <summary>
    /// 任务结束回调
    /// </summary>
    private void OnTaskOver()
    {
        if (m_TaskOverHandler != null)
        {
            m_TaskOverHandler();
        }
    }

    /// <summary>
    /// 任务取消回调
    /// </summary>
    private void OnTaskCancle()
    {
        if (m_TaskCancleHandler != null)
        {
            m_TaskCancleHandler();
        }
    }

    /// <summary>
    /// 录音准备就绪回调
    /// </summary>
    private void OnRecordReady()
    {
        if (m_RecordReadyHandler != null)
        {
            m_RecordReadyHandler();
        }
    }

    /// <summary>
    /// 录音开始回调
    /// </summary>
    private void OnRecordBegin()
    {
        if (m_RecordBeginHandler != null)
        {
            m_RecordBeginHandler();
        }
    }

    /// <summary>
    /// 录音结束回调
    /// </summary>
    private void OnRecordEnd()
    {
        if (m_RecordEndHandler != null)
        {
            m_RecordEndHandler();
        }
    }

	/// <summary>
	/// 播放音频解码错误回调
	/// </summary>
	private void OnAudioDecodeError()
	{
		if (m_AudioDecodeError != null)
		{
			m_AudioDecodeError();
		}
	}
	/// <summary>
	/// 播放音频结束结束回调
	/// </summary>
	private void OnAudioPlayOver()
	{
		if (m_AudioPlayOverHandler != null)
		{
			m_AudioPlayOverHandler();
		}
	}
    #endregion

}
