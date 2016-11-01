using UnityEngine;
using System.Collections;
using Games.LogicObj;
using GCGame.Table;
using System;
using Games.GlobeDefine;

public class YingXiongBeiChuWindow : MonoBehaviour {

    private static YingXiongBeiChuWindow m_Instance = null;
    public static YingXiongBeiChuWindow Instance()
    {
        return m_Instance;
    }

    public GameObject m_UseHeroCodeRoot;
    public UIInput[] m_HeroCodeInput;
    public UILabel m_OpenTimeLabel;

    void Awake()
    {
        m_Instance = this;
    }

    void OnEnable()
    {
        m_Instance = this;

        Init();
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    void Init()
    {
        DateTime OpenDate = new DateTime(
            GlobalData.HeroReturnOpenTime / 100000000 % 100 + 2000,
            GlobalData.HeroReturnOpenTime / 1000000 % 100,
            GlobalData.HeroReturnOpenTime / 10000 % 100,
            GlobalData.HeroReturnOpenTime / 100 % 100,
            GlobalData.HeroReturnOpenTime / 1 % 100,
            0);
        DateTime CloseDate = new DateTime(
            GlobalData.HeroReturnCloseTime / 100000000 % 100 + 2000,
            GlobalData.HeroReturnCloseTime / 1000000 % 100,
            GlobalData.HeroReturnCloseTime / 10000 % 100,
            GlobalData.HeroReturnCloseTime / 100 % 100,
            GlobalData.HeroReturnCloseTime / 1 % 100,
            0);
        m_OpenTimeLabel.text = StrDictionary.GetClientDictionaryString("#{5339}",
            OpenDate.Year, OpenDate.Month, OpenDate.Day, CloseDate.Year, CloseDate.Month, CloseDate.Day);
    }

    void ApplyHeroCodeOnClick()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < 50)
        {
            GUIData.AddNotifyData("#{5460}");
            return;
        }

        CG_APPLY_HEROCODE packet = (CG_APPLY_HEROCODE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_APPLY_HEROCODE);
        packet.NoParam = 1;
        packet.SendPacket();
    }

    void UseHeroCodeOnClick()
    {        
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level > 30)
        {
            // 只有等级小于等于30级的新玩家才可以使用英雄辈出邀请码
            GUIData.AddNotifyData("#{5462}", false);
            return;
        }

        m_UseHeroCodeRoot.SetActive(true);       
    }

    public void HandleNewHeroCode(string strHeroCode)
    {
        MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{5349}", strHeroCode));
    }

    void SendHeroCode()
    {
        if (m_HeroCodeInput.Length != 4)
        {
            return;
        }

        CG_USE_HEROCODE packet = (CG_USE_HEROCODE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_HEROCODE);
        packet.HeroCode = m_HeroCodeInput[0].value + "-" + m_HeroCodeInput[1].value + "-" + m_HeroCodeInput[2].value + "-" + m_HeroCodeInput[3].value;
        packet.SendPacket();
    }

    void CloseUseHeroCode()
    {
        m_UseHeroCodeRoot.SetActive(false);
        for (int i = 0; i < m_HeroCodeInput.Length; i++ )
        {
            m_HeroCodeInput[i].value = "";
        }
    }

    public void HandleUseHeroCode()
    {
        CloseUseHeroCode();
    }
}
