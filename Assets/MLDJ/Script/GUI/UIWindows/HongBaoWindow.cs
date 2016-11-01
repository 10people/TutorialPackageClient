using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;

public enum HONGBAO_TYPE
{
    HONGBAO_TYPE_NONE = 0,
    HONGBAO_TYPE_ROBBER_FIVE,  // 5人抢
    HONGBAO_TYPE_ROBBER_TEN,   // 10人抢
    HONGBAO_TYPE_CD,    // CD 红包，时间记在User身上
    HONGBAO_TYPE_MAX_COUNT,
}

public enum HONGBAO_CHANNEL
{
    HONGBAO_CHANNEL_NONE = 0,
    HONGBAO_CHANNEL_WORLD,  // 世界
    HONGBAO_CHANNEL_GUILD,  // 帮会
    HONGBAO_CHANNEL_MAX_COUNT,
}

public class HongBaoWindow : UIControllerBase<HongBaoWindow>{
  
    // 积分排行榜奖励UI
    public GameObject m_ScoreUI;
    public ScoreAwardItem m_ScoreAwardItemCache;
    public UIGrid m_ScoreAwardList;
    public GameObject m_DescUI;

    public UILabel m_ActTimeLabel;

    void Awake()
    {
        SetInstance(this);
    }

	// Use this for initialization
	void Start () {
        CloseDesUI();
        CloseScoreWindow();
        ScoreAwardList();
        UpdateActTime();
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    void OnDestroy()
    {
        SetInstance(null);
    }

    // 积分列表
    public void ShowScoreWindow()
    {
        if (m_ScoreUI && m_ScoreUI.activeInHierarchy == false)
        {
            m_ScoreUI.SetActive(true);
        }
    }
    void CloseScoreWindow()
    {
        if (m_ScoreUI)
        {
            m_ScoreUI.SetActive(false);
        }
    }
    void ScoreAwardList()
    {
        if (TableManager.GetHongBaoRankAwardInfo() == null)
        {
            return;
        }

        int nTabCount = TableManager.GetHongBaoRankAwardInfo().Count;
        for (int i = 1; i < nTabCount; i++)
        {
            Tab_HongBaoRankAwardInfo AwardInfo = TableManager.GetHongBaoRankAwardInfoByID(i, 0);
            if (AwardInfo == null)
            {
                return;
            }
            GameObject gScoreItem = Utils.BindObjToParent(m_ScoreAwardItemCache.gameObject, m_ScoreAwardList.gameObject, i.ToString());
            if (null != gScoreItem)
            {
                ScoreAwardItem ScoreItem = gScoreItem.GetComponent<ScoreAwardItem>();
                if (null != ScoreItem)
                {
                    ScoreItem.Init(AwardInfo);
                }
            }
        }

        m_ScoreAwardList.Reposition(true);
    }

    void OnDescClick()
    {
        if (m_DescUI && m_DescUI.activeInHierarchy == false)
        {
            m_DescUI.SetActive(true);
        }
    }

    void CloseDesUI()
    {
        m_DescUI.SetActive(false);
    }

    public void UpdateActTime()
    {
        int nStartYear = 2000 + GlobalData.HongBaoStartTime / 100000000;
        int nStartMonth = (GlobalData.HongBaoStartTime / 1000000) % 100;
        int nStartDay = (GlobalData.HongBaoStartTime / 10000) % 100;
        int nEndYear = 2000 + GlobalData.HongBaoEndTime / 100000000;
        int nEndMonth = (GlobalData.HongBaoEndTime / 1000000) % 100;
        int nEndDay = (GlobalData.HongBaoEndTime / 10000) % 100;
        if (m_ActTimeLabel)
        {
            m_ActTimeLabel.text = StrDictionary.GetClientDictionaryString("#{4863}",nStartYear, nStartMonth, nStartDay, nEndYear, nEndMonth, nEndDay);
        }
    }
}
