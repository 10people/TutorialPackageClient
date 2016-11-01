using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.GlobeDefine;
using GCGame;
using Module.Log;
using Games.LogicObj;

public class FailRoot : UIControllerBase<FailRoot>
{
    private static FailRoot m_Instance = null;
    public static FailRoot Instance()
    {
        return m_Instance;
    }
    void Awake()
    {
        m_Instance = this;
        m_bIsNeedSendLevelCopySceneMsg = true;
    }

    void Start () 
	{
      
    }
	
    //Update is called once per frame
	void Update () {
       
	}

    public void SetNeedSendLevelCopyScene(bool bValue)
    {
        m_bIsNeedSendLevelCopySceneMsg = bValue;
    }

    bool m_bIsNeedSendLevelCopySceneMsg = true;

    public static void Clear()
    {
        
    }

	public void OnPowerUp()
	{
		// 显示体检界面
		if (GameManager.gameManager.ActiveScene.IsCopyScene() == false) //不是副本
		{
			return;
		}
		else
		{
			PVPData.PowerUpAutoShow = true;
            //如果玩家已经死亡,先向服务器发送一个复活消息。
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer != null && _mainPlayer.IsDie() ) {
                SendPlayerReliveMsg();
            }
		}

        if (m_bIsNeedSendLevelCopySceneMsg ) {
            // 离开副本
            SendLeaveCopySceneMsg();

        }
		
		// 关闭失败界面
		//gameObject.SetActive(false);
	}

	void SendReqPowerUpMsg()
	{
		CG_REQ_POWERUP packet = (CG_REQ_POWERUP)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_POWERUP);
		packet.Type = (int)BePowerData.BePowerType.BPTDEFINE_GEM;
		packet.Flag = 1;
		packet.SendPacket();
	}

	void SendLeaveCopySceneMsg()
	{
		CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
		packet.NoParam = -1;
		packet.SendPacket();
	}

    void SendPlayerReliveMsg()
    {
        CG_ASK_RELIVE packet = (CG_ASK_RELIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RELIVE);
        packet.SetType((int)Games.GlobeDefine.GameDefine_Globe.RELIVE_TYPE.RELIVE_CITY);
        packet.SendPacket();
    }

	public void OnQuitCopyScene()
	{
		//如果玩家已经死亡,先向服务器发送一个复活消息。
		Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
		if (_mainPlayer != null && _mainPlayer.IsDie() ) {
			SendPlayerReliveMsg();
		}
        if (m_bIsNeedSendLevelCopySceneMsg) {
            // 离开副本
            SendLeaveCopySceneMsg();

        }
	}
	
}


