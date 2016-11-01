using System;
using System.Collections.Generic;
using System.Text;
using Module.Log;
using UnityEngine;
using System.Collections;

public class SpeechLogic : MonoBehaviour {
//     struct SpeechUnit
//     {
//         public int m_SpeechID;
//         public byte[] m_Bytes;
// 
//         public SpeechUnit(int id, byte[] buffer)
//         {
//             m_SpeechID = id;
//             m_Bytes = buffer;
//         }
//     }

    //public GameUIInput m_Input;                                         // 输入框input脚本
    private string m_Text = "";
    private bool m_IsError = false;

    private int m_MaxSpeechBufferCount = 10;
    //private List<SpeechUnit> m_AudioBuffers = new List<SpeechUnit>();

	// Use this for initialization
	void Start ()
	{
        if (SpeechEngine.Instance() != null)
        {
            SpeechEngine.Instance().SetTextProcessHandler(ReceiveSpeechText);
            SpeechEngine.Instance().SetErrorProcessHandler(ReceiveErrorCode);
            SpeechEngine.Instance().SetRecordBeginHandler(DoRecordBegin);
            SpeechEngine.Instance().SetRecordEndHandler(DoRecordEnd);
            SpeechEngine.Instance().SetTaskCancleHandler(DoTaskCancle);
            SpeechEngine.Instance().SetTaskOverHandler(DoTaskOver);
            SpeechEngine.Instance().SetTaskStartHandler(DoTaskStart);
            SpeechEngine.Instance().SetAudioPlayOverHandler(PlayRecordOver);
        }	    
	}

    /// <summary>
    /// 开始录音
    /// </summary>
    public void StartSpeaking()
    {
        LogModule.DebugLog("StartSpeaking");

        GameManager.gameManager.SoundManager.MusicDown();

//         if (m_Input != null)
//         {
//             m_Input.value = "任务开始";
//         }
        
        m_Text = "";
        m_IsError = false;
        SpeechEngine.StartRecording();
    }

    /// <summary>
    /// 结束录音
    /// </summary>
    public void StopSpeaking()
    {
        LogModule.DebugLog("StopSpeaking");
        GameManager.gameManager.SoundManager.MusicRecover();
        SpeechEngine.StopRecording();
    }

    /// <summary>
    /// 取消录音
    /// </summary>
    public void Cancel()
    {
        LogModule.DebugLog("StartSpeaking");
        GameManager.gameManager.SoundManager.MusicRecover();
        SpeechEngine.CancleTask();
    }

//     public void Play(int audioId)
//     {
//         for (int i = 0; i < m_AudioBuffers.Count; i++)
//         {
//             if (m_AudioBuffers[i].m_SpeechID == audioId)
//             {
//                 SpeechEngine.PlayAudio(m_AudioBuffers[i].m_Bytes);
//             }
//         }
//     }

//     public void AddBuffer(int audioId, byte[] audioBuff)
//     {
//         LogModule.DebugLog("AddBuffer");
// 
//         if (m_AudioBuffers.Count >= m_MaxSpeechBufferCount)
//         {
//             m_AudioBuffers.RemoveAt(0);
//         }
// 
//         m_AudioBuffers.Add(new SpeechUnit(audioId, audioBuff));
//     }
// 
//     public void RemoveAllBuffer()
//     {
//         m_AudioBuffers.Clear();
//     }

    #region 回调

    /// <summary>
    /// 语音识别结果回调
    /// </summary>
    /// <param name="text">识别结果</param>
    private void ReceiveSpeechText(string text)
    {
        StringBuilder sb = new StringBuilder("");
        sb.Append(m_Text);
        sb.Append(text);
        m_Text = sb.ToString();
    }

    /// <summary>
    /// 错误回调函数
    /// </summary>
    /// <param name="errorCode">错误代码</param>
    private void ReceiveErrorCode(string errorCode)
    {
        m_IsError = true;
        LogModule.ErrorLog(errorCode);
//         if (m_Input != null)
//         {
//             m_Input.value = "错误：" + errorCode;
//         }
        
    }

    /// <summary>
    /// 启动任务回调
    /// </summary>
    private void DoTaskStart()
    {
//         if (m_Input != null)
//         {
//             m_Input.value = "开始语音任务。。。";
//         }
    }

    /// <summary>
    /// 任务结束回调
    /// </summary>
    private void DoTaskOver()
    {
        LogModule.DebugLog("DoTaskOver");
        if (!m_IsError && !String.IsNullOrEmpty(m_Text))
        {
            byte[] buffer = SpeechEngine.GetAudioBuffer();
            if (ChatInfoLogic.Instance())
            {
                ChatInfoLogic.Instance().OnSpeechTaskOver(m_Text, buffer);
            }
            if (ChatFrameLogic.Instance())
            {
                ChatFrameLogic.Instance().OnSpeechTaskOver(m_Text, buffer);
            }
            m_Text = "";
        }
        
        m_IsError = false;
    }

    /// <summary>
    /// 任务取消回调
    /// </summary>
    private void DoTaskCancle()
    {
//         if (m_Input != null)
//         {
//             m_Input.value = "取消语音任务。。。";
//         }
    }

    /// <summary>
    /// 录音开始回调
    /// </summary>
    private void DoRecordBegin()
    {
//         if (m_Input != null)
//         {
//             m_Input.value = "开始录音。。。";
//         }
        
    }

    /// <summary>
    /// 录音结束回调
    /// </summary>
    private void DoRecordEnd()
    {
//         if (m_Input != null)
//         {
//             m_Input.value = "正在识别";
//         }
    }

    private void PlayRecordOver()
    {
        if (ChatInfoLogic.Instance() != null)
        {
            ChatInfoLogic.Instance().OnPlayVoiceChatOver();
        }
        GameManager.gameManager.SoundManager.MusicRecover();
        GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord.OnPlayRecordOver();
    }
    #endregion

}
