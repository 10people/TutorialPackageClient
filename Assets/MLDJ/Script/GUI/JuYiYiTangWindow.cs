using UnityEngine;
using System.Collections;
using GCGame.Table;
using System;
using Games.GlobeDefine;
using Games.LogicObj;
using GCGame;

public class JuYiYiTangWindow : MonoBehaviour {

    private static JuYiYiTangWindow m_Instance = null;
    public static JuYiYiTangWindow Instance()
    {
        return m_Instance;
    }

    public UILabel m_OpenTimeLabel;
    public JuYiRewardItemLogic[] m_JuYiReward;
    public UISprite m_JuYiProgress;

    private const int JUYIYITANG_RECEIVERMAX = 15;
    private const int JUYIYITANG_AWARDCOUNT = 5;
    private int[] JUYILINGAWARD_COUNT = { 1, 3, 6, 10, 15 };

    void Awake()
    {
        m_Instance = this;
    }

    void OnEnable()
    {
        m_Instance = this;

        InitOpenTime();
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

    void InitOpenTime()
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

    public void Init()
    {        
        int nJuYiCount = GameManager.gameManager.PlayerDataPool.JuYiCount;
        m_JuYiProgress.fillAmount = (float)nJuYiCount / (float)JUYIYITANG_RECEIVERMAX;

        for (int i = 0; i < m_JuYiReward.Length; i++ )
        {
            m_JuYiReward[i].Init(i);
        }
    }

    void AskJuYiLing()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < 40)
        {
            GUIData.AddNotifyData2Client(false, "#{5463}");
            return;
        }

        CG_ASK_JUYILING_ITEM packet = (CG_ASK_JUYILING_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_JUYILING_ITEM);
        packet.NoParam = 1;
        packet.SendPacket();
    }
}
