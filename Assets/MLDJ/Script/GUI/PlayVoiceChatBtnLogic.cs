using UnityEngine;
using System.Collections;
using Games.ChatHistory;
using System;

public class PlayVoiceChatBtnLogic : MonoBehaviour {

    public UISprite m_BtnSprite;

    private int m_VoiceChatIndex;
    public int VoiceChatIndex
    {
        get { return m_VoiceChatIndex; }
        set { m_VoiceChatIndex = value; }
    }

    private UInt64 m_SenderGuid;
    
    void OnDisable()
    {
        StopVoice(false);
    }

    public void Init(int vioceindex, UInt64 senderguid)
    {
        m_VoiceChatIndex = vioceindex;
        m_SenderGuid = senderguid;
    }

    void PlayVoiceChat()
    {
        VoiceChatDownload playerDownload = GameManager.gameManager.PlayerDataPool.VoiceChatDownloadRecord;
        if (playerDownload.ForcePlayIndex == m_VoiceChatIndex)
        {
            return;
        }

        if (playerDownload.IsHaveDownload(m_VoiceChatIndex))
        {
            playerDownload.PlayInPlayerDownload(m_VoiceChatIndex);
        }
        else
        {
            playerDownload.ForcePlayIndex = m_VoiceChatIndex;
            if (playerDownload.IsHaveVoice(m_VoiceChatIndex))
            {
                playerDownload.ForcePlay(m_VoiceChatIndex);
            }
            else
            {
                // 请求下载 下载后直接播放
                playerDownload.ReqDownload(m_VoiceChatIndex, m_SenderGuid, true);
            }
        }
    }

    public void PlayVoice()
    {
        m_BtnSprite.spriteName = "VoicePlaying";
        m_BtnSprite.MakePixelPerfect();
    }

	public void StopVoice(bool bState=true)
    {
		gameObject.SetActive (bState);
        m_BtnSprite.spriteName = "VoicePlayer";
        m_BtnSprite.MakePixelPerfect();
    }
}
