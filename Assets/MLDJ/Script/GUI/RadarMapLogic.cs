using UnityEngine;
using GCGame.Table;

public class RadarMapLogic : MonoBehaviour
{
	public UILabel m_CopySceneName;
	public UILabel m_RemainTimeLab;
	private int m_nExistTime;


    void Awake()
    {
        
    }

    // Use this for initialization
    void Start()
    {
		m_CopySceneName.text = GameManager.gameManager.ActiveScene.GetSceneName();
		m_nExistTime = GameManager.gameManager.ActiveScene.ExistTime;
    }
	
    void OnDestroy()
    {
        
    }

	void UpdateRemainTime()
	{
		int nDeltaTime = (int)(Time.realtimeSinceStartup - GameManager.gameManager.ActiveScene.StartTime);
		int nRemainTime = m_nExistTime - nDeltaTime;
		//int nExistTime = (int)m_nExistTime;
		if ( nRemainTime >=0 )
		{
			int h=nRemainTime/3600;
			int m=(nRemainTime-h*3600)/60;
			int s=(nRemainTime-h*3600) % 60;
			m_RemainTimeLab.text = h+":"+m+":"+s;
		}
	}

	public void Update()
	{
		UpdateRemainTime();
	}

	public void OnExitFBClick()
	{
		string str = StrDictionary.GetClientDictionaryString("#{1847}");
		if ((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI == GameManager.gameManager.RunningScene)
		{
			str = StrDictionary.GetClientDictionaryString("#{2345}");
		}
		
		MessageBoxLogic.OpenOKCancelBox(str, "", OnLeaveCopySceneOK, OnLEaveCopySceneNO);
	}

	public void OnLeaveCopySceneOK()
	{
		if (GameManager.gameManager.PlayerDataPool.CopySceneChange) //正在传送中
		{
			return;
		}
		GameManager.gameManager.PlayerDataPool.CopySceneChange = true;
		CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
		packet.NoParam = 1;
		packet.SendPacket();
	}
	public void OnLEaveCopySceneNO()
	{
		
	}
}
