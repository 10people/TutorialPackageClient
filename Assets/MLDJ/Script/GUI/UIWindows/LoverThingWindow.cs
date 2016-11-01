using UnityEngine;
using System.Collections;
using Module.Log;
using Games.SwordsMan;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;
using System;

/********************************************************************
    created:	2014-12-17
    filename: 	LoverThingWindow.cs
    author:		zk
    purpose:	情人节活动界面
*********************************************************************/
public class LoverThingWindow: MonoBehaviour
{
	public GameObject m_BuyRoseBtn;
	public GameObject m_GetThingBtn;

	public UILabel m_ActTimeLabel;

	// Use this for initialization
	void Start () 
	{
		UpdateActTime();
	}

	void OnBuyClick()
	{
		CG_ASK_YUANBAOSHOP_OPEN packet = (CG_ASK_YUANBAOSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_YUANBAOSHOP_OPEN);
		packet.NoParam = (int)YuanBaoShopLogic.OPEN_TYPE.OPEN_FESTIVAL;
		packet.SendPacket();
	}
	public void UpdateActTime()
	{
		int nStartYear = 2000 + GlobalData.LoverThingStartTime / 100000000;
		int nStartMonth = (GlobalData.LoverThingStartTime / 1000000) % 100;
		int nStartDay = (GlobalData.LoverThingStartTime / 10000) % 100;
		int nEndYear = 2000 + GlobalData.LoverThingEndTime / 100000000;
		int nEndMonth = (GlobalData.LoverThingEndTime / 1000000) % 100;
		int nEndDay = (GlobalData.LoverThingEndTime / 10000) % 100;
		if (m_ActTimeLabel)
		{
			m_ActTimeLabel.text = StrDictionary.GetClientDictionaryString("#{4891}",nStartYear, nStartMonth, nStartDay, nEndYear, nEndMonth, nEndDay);
		}
	}
}

