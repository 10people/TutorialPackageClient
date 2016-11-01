using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.GlobeDefine;
public class SpecialTimePayRebateLogic : MonoBehaviour
{

    public SpecialTimePayRebateItemLogic[] m_RebateUnit;
    public UIGrid m_UnitGrid;
    public UILabel m_RebateValue;
    public UILabel m_StartEndTime;
    public UILabel m_CostTypeDesc;

    public GameObject m_RewardDescWindow;

    public SpecialTimePayAwardItem m_SpecialTimePayAwardItem;
    public UIGrid m_RewardItemGrid;

    void ShowAwardList()
    {
        Utils.CleanGrid(m_RewardItemGrid.gameObject);
        SpecialTimePayRebateData payRebate = GameManager.gameManager.PlayerDataPool.SpecailTimePayRebate;
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
			if(payRebate.RankPosMin != null &&
               payRebate.RankPosMin.Length > 0 && 
               payRebate.RankPosMin[i] > 0 &&
               payRebate.RankPosMax != null &&
               payRebate.RankPosMax.Length > 0 &&
               payRebate.RankPosMax[i] > 0 )
			{
				if( payRebate.RankPosMin[i]  <= payRebate.RankPosMax[i] )
				{
					GameObject gScoreItem = Utils.BindObjToParent(m_SpecialTimePayAwardItem.gameObject, m_RewardItemGrid.gameObject, i.ToString());
					if (null != gScoreItem)
					{
						SpecialTimePayAwardItem rewardItem = gScoreItem.GetComponent<SpecialTimePayAwardItem>();
						if (null != rewardItem)
						{ 
							rewardItem.SetPos(payRebate.RankPosMin[i], payRebate.RankPosMax[i]);
							rewardItem.SetItem(0, payRebate.RankRewardId1[i], payRebate.RankRewardNum1[i]);
							rewardItem.SetItem(1, payRebate.RankRewardId2[i], payRebate.RankRewardNum2[i]);
							rewardItem.SetItem(2, payRebate.RankRewardId3[i], payRebate.RankRewardNum3[i]);
							rewardItem.SetItem(3, payRebate.RankRewardId4[i], payRebate.RankRewardNum4[i]);
							rewardItem.SetItem(4, payRebate.RankRewardId5[i], payRebate.RankRewardNum5[i]);
							rewardItem.SetItem(5, payRebate.RankRewardId6[i], payRebate.RankRewardNum6[i]);
						}
					}	
				}
			}
  
        }
        m_RewardItemGrid.Reposition(true);

    }

    public static bool IsRebateCanGet()
    {
        SpecialTimePayRebateData payRebate = GameManager.gameManager.PlayerDataPool.SpecailTimePayRebate;
        int costValue = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_SPECICALTIME_PAYREBATE_VALUE);
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            if (payRebate.RebateLimit[i] > 0)
            {
                if (costValue >= payRebate.RebateLimit[i] && payRebate.RebateFlag[i] == false)
                {
                    return true;
                }
            }
        }
        return false;
    }

    public static bool IsNeedClickToday()
    {
        // 消费返利开启 并且 今天没有点击过
        SpecialTimePayRebateData payRebate = GameManager.gameManager.PlayerDataPool.SpecailTimePayRebate;
        if (payRebate.SpecialTimePayRebateOpen && GameManager.gameManager.PlayerDataPool.IsClickSpecialTimePayRebate == false)
        {
            return true;
        }
        return false;
    }

    private static SpecialTimePayRebateLogic m_Instance = null;
    public static SpecialTimePayRebateLogic Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
        InitData();
	}

    public void InitData()
    {
        SpecialTimePayRebateData payRebate = GameManager.gameManager.PlayerDataPool.SpecailTimePayRebate;
        int payValue = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_SPECICALTIME_PAYREBATE_VALUE);
        m_RebateValue.text= payValue.ToString();
        m_StartEndTime.text = payRebate.GetStartEndTineString();
       // m_CostTypeDesc.text = payRebate.GetCostDescString();
        for (int i = 0; i < payRebate.RebateLimit.Length; i++)
		{
            if (payRebate.RebateLimit[i] != -1)
            {
                m_RebateUnit[i].gameObject.SetActive(true);
                m_RebateUnit[i].InitData(i);
            }
            else
            {
                m_RebateUnit[i].gameObject.SetActive(false);
            }
		}
        m_UnitGrid.sorted = true;
        m_UnitGrid.repositionNow = true;

        if (ChargeActivityLogic.Instance() != null)
        {
            ChargeActivityLogic.Instance().UpdateRemainTips();
        }
    }

    public void OnClickRewardDescButton()
    {
        if (m_RewardDescWindow != null)
        {
            m_RewardDescWindow.SetActive(true);
            ShowAwardList();
        }
    }

    public void OnClickRewardDescReturnButton()
    {
        if (m_RewardDescWindow != null)
        {
            m_RewardDescWindow.SetActive(false);
        }
    }

    public void OnClickPayRankButton()
    {
        if (RankWindow.Instance() != null)
        {
            RankWindow.Instance().OnClickRankClassBt((int)PVPData.Rank_Class.HAOXIA,(int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI);
        }
        else
        {
            RankWindow.ShowRankWindow((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI);
        }
    }

    public void OnShowRankWindow(bool bSuccess, object param)
    {
        if (RankWindow.Instance() != null)
        {
            RankWindow.ShowRankWindow((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI);
        }          
    }
}
