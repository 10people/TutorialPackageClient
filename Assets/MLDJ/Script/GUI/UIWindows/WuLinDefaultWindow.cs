using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame;
using GCGame.Table;
using System;

public class WuLinDefaultWindow : MonoBehaviour {

    public GameObject m_RegisterMemberButton;
    public GameObject m_RegisterButton;
    public GameObject m_PkInfoButton;

    public UILabel m_LableTime;
    public UILabel m_LabelPos;
    public WuLinTopThreeItem[] m_TopTrees;

	// Use this for initialization
	void Start () 
	{
        m_RegisterMemberButton.SetActive(false);
        m_RegisterButton.SetActive(false);
        m_PkInfoButton.SetActive(false);
        m_LabelPos.text = Utils.GetDicByID(4804);
	}

    void SetButtonActive(bool member, bool reg, bool bPkInfButton)
    {
        m_RegisterMemberButton.SetActive(member);
        m_RegisterButton.SetActive(reg);
        m_PkInfoButton.SetActive(bPkInfButton);
    }

    void ShowDefaultWindowMySelf()
    {
        //TODO:
        string strPos = Utils.GetDicByID(4677); 
        //string s64Plus = "100+";
        switch ((GC_WULIN_STATE.WULINSTATE)WuLinData.WuLinState)
        {
            case GC_WULIN_STATE.WULINSTATE.CLOSED:
                strPos = Utils.GetDicByID(4677); //未开启
                SetButtonActive(false, false,false);
                break;
            case GC_WULIN_STATE.WULINSTATE.WAITNEXTROUND:
                strPos = Utils.GetDicByID(4805);// "请等待本轮结束";
                SetButtonActive(false, false,false);
                break;
            case GC_WULIN_STATE.WULINSTATE.KICKED:
                //..增加通知
                strPos = Utils.GetDicByID(4807); //StrDictionary.GetClientDictionaryString("#{4806}", s64Plus);
                SetButtonActive(true, false, false);
                break;
            case GC_WULIN_STATE.WULINSTATE.REGISTER:
                //..增加通知
                strPos = Utils.GetDicByID(5020);//StrDictionary.GetClientDictionaryString("#{4806}", s64Plus);
                SetButtonActive(false, true,false);
                break;
            case GC_WULIN_STATE.WULINSTATE.REGOK:
                strPos = StrDictionary.GetClientDictionaryString("#{4806}", (WuLinData.WuLinPosition + 1).ToString());
                SetButtonActive(true, false,false);
                break;
            case GC_WULIN_STATE.WULINSTATE.REGISTERED:
                //..增加通知
                strPos = StrDictionary.GetClientDictionaryString("#{4806}", (WuLinData.WuLinPosition + 1).ToString());
                SetButtonActive(true, false,false);
                break;
            case GC_WULIN_STATE.WULINSTATE.MAKEEFF:
                //..增加通知
                strPos = Utils.GetDicByID(4807);
                SetButtonActive(true, false, false);
                break;
            case GC_WULIN_STATE.WULINSTATE.FINISH:
                break;
            case GC_WULIN_STATE.WULINSTATE.START:
                strPos = Utils.GetDicByID(4808); //华山论剑已开始
                SetButtonActive(false, false, false);
                break;
            case GC_WULIN_STATE.WULINSTATE.SEARCH:
                SetButtonActive(false, false, false);
                break;
        }
        m_LabelPos.text = strPos;
    }


    void OnEnable()
    {
        WuLinData.delegateShowWuLinHeroesInHistory += ShowHistoryResult;
        WuLinData.delegateShowDefaultWindowMySelf += ShowDefaultWindowMySelf;
        UpdateOpenTimeInfo();
    }

    void OnDisable()
    {
        WuLinData.delegateShowWuLinHeroesInHistory -= ShowHistoryResult;
        WuLinData.delegateShowDefaultWindowMySelf -= ShowDefaultWindowMySelf;
    }

    int GetWeekDictId(int week)
    {
        switch (week)
        {
            case 0:
                return 5162;
            case 1:
                return 5163;
            case 2:
                return 5164;
            case 3:
                return 5165;
            case 4:
                return 5166;
            case 5:
                return 5167;
            case 6:
                return 5168;
        }
        return 0;
    }

    void UpdateOpenTimeInfo()
    {
        DateTime curTime = Utils.GetServerDateTime();

        DateTime BeginTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinOpenTime1 % 10000) / 100, GlobalData.WuLinOpenTime1 % 100, 0);
        //结束时间
        DateTime EndTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinCloseTime1 % 10000) / 100, GlobalData.WuLinCloseTime1 % 100, 0);

        DateTime BeginTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinOpenTime2 % 10000) / 100, GlobalData.WuLinOpenTime2 % 100, 0);
        //结束时间
        DateTime EndTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinCloseTime2 % 10000) / 100, GlobalData.WuLinCloseTime2 % 100, 0);


        int dictWeek1 = GetWeekDictId(GlobalData.WuLinOpenWeek1);
        int dictWeek2 = GetWeekDictId(GlobalData.WuLinOpenWeek2);
        string StrTime = StrDictionary.GetClientDictionaryString("#{4678}",
            Utils.GetDicByID(dictWeek1), BeginTimeOne.ToString("HH:mm"), EndTimeOne.ToString("HH:mm"), EndTimeOne.ToString("HH:mm"),
            Utils.GetDicByID(dictWeek2), BeginTimeTwo.ToString("HH:mm"), EndTimeTwo.ToString("HH:mm"), EndTimeTwo.ToString("HH:mm"));

        if (m_LableTime != null)
        {
            m_LableTime.text = StrTime;
        }
    }

    void OnRegisterButtonClick( )
    {
        if (Singleton<ObjManager>.Instance.MainPlayer.IsInJianYu())
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2216}");
            return;
        }

        //sendMsg
        CG_WULIN_REGISTER packet = (CG_WULIN_REGISTER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WULIN_REGISTER);
        packet.None = 0;
        packet.SendPacket();
    }

    void OnRegisterListButtonClick()
    {
        CG_WULIN_MEMBERLIST packet = (CG_WULIN_MEMBERLIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WULIN_MEMBERLIST);
        packet.CurPage = 1;
        packet.SendPacket();
    }

    void OnClickPkInfo()
    {
      //  CG_REQ_HUASHAN_PKINFO packet = (CG_REQ_HUASHAN_PKINFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_HUASHAN_PKINFO);
      //  packet.None = 0;
      //  packet.SendPacket();
    }

    public void ShowHistoryResult()
    {
        CleanHistory();
        for (int i = 0; i < WuLinData.HerosInHistoryList.Count; i++)
        {
            int index = GetItekmIndex(WuLinData.HerosInHistoryList[i].LevelGroup);
            if (index >= 0 && index < m_TopTrees.Length)
            {
                if (m_TopTrees[index] != null)
                {
                    m_TopTrees[index].SetData(
                        WuLinData.HerosInHistoryList[i].position,
                        WuLinData.HerosInHistoryList[i].name);
                }
            }
        }
    }

    int GetItekmIndex(int levelGroup)
    {
        if (levelGroup == 40) return 0;
        if (levelGroup == 50) return 1;
        if (levelGroup == 60) return 2;
        if (levelGroup == 70) return 3;
        if (levelGroup == 80) return 4;
        if (levelGroup == 90) return 5;
        if (levelGroup == 100) return 6;
        return 6;
    }

    void CleanHistory()
    {
        for (int i = 0; i < m_TopTrees.Length; i++)
        {
            if (m_TopTrees[i] != null)
            {
                m_TopTrees[i].Cleanup();
            }
        }
    }
}
