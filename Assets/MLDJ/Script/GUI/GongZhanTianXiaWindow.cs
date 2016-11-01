using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using System;
using Games.GlobeDefine;

public class GongZhanTianXiaWindow : MonoBehaviour {

    private static GongZhanTianXiaWindow m_Instance = null;
    public static GongZhanTianXiaWindow Instance()
    {
        return m_Instance;
    }

    public UILabel m_OpenTimeLabel;
    public GameObject m_RewardItem;
    public GameObject m_RewardGrid;
    public UILabel m_ZhanKuangPaiCountLabel;

    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnDestroy()
    {
        m_Instance = null;
    }

    void OnEnable()
    {
        m_Instance = this;

        InitOpenTime();
        Init();
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

    void Init()
    {
        UpdateZhanKuangPaiCount();

        Utils.CleanGrid(m_RewardGrid);

        for (int i = 0; i < TableManager.GetGongZhanReward().Count; i++ )
        {
            Tab_GongZhanReward tabReward = TableManager.GetGongZhanRewardByID(i, 0);
            if (tabReward == null)
            {
                continue;
            }

            string itemName = i < 10 ? "0" + i.ToString() : i.ToString();
            GameObject NewRewardItem = Utils.BindObjToParent(m_RewardItem, m_RewardGrid, itemName);
            if (NewRewardItem == null)
            {
                continue;
            }

            if (NewRewardItem.GetComponent<GongZhanRewardItemLogic>() != null)
            {
                NewRewardItem.GetComponent<GongZhanRewardItemLogic>().Init(tabReward);
            }
        }

        m_RewardGrid.GetComponent<UIGrid>().Reposition();
    }

    void SendCreateTeamChat()
    {
        CG_REQ_GONGZHAN packet = (CG_REQ_GONGZHAN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_GONGZHAN);
        packet.NoParam = 1;
        packet.SendPacket();
    }

    public void UpdateZhanKuangPaiCount()
    {
        int nZhanKuangPaiCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(GlobeVar.ZHANKUANGPAI_DATAID);
        m_ZhanKuangPaiCountLabel.text = nZhanKuangPaiCount.ToString();
    }
}
