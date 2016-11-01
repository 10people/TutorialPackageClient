using UnityEngine;
using System.Collections;

public class CostRebateLogic : MonoBehaviour {

    public CostRebateItemLogic[] m_RebateUnit;
    public UIGrid m_UnitGrid;
    public UILabel m_RebateValue;
    public UILabel m_StartEndTime;
    public UILabel m_CostTypeDesc;

    public static bool IsRebateCanGet()
    {
        CostRebateData costRebate = GameManager.gameManager.PlayerDataPool.CostRebate;
        int costValue = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COSTREBATE_VALUE);
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            if (costRebate.RebateLimit[i] > 0)
            {
                if (costValue >= costRebate.RebateLimit[i] && costRebate.RebateFlag[i] == false)
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
        CostRebateData costRebate = GameManager.gameManager.PlayerDataPool.CostRebate;
        if (costRebate.CostRebateOpen && GameManager.gameManager.PlayerDataPool.IsClickCostRebate == false)
        {
            return true;
        }
        return false;
    }

    private static CostRebateLogic m_Instance = null;
    public static CostRebateLogic Instance()
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
        CostRebateData costRebate = GameManager.gameManager.PlayerDataPool.CostRebate;
        int costValue = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_COSTREBATE_VALUE);
        m_RebateValue.text= costValue.ToString();
        m_StartEndTime.text = costRebate.GetStartEndTineString();
        m_CostTypeDesc.text = costRebate.GetCostDescString();
        for (int i = 0; i < costRebate.RebateLimit.Length; i++)
		{
            if (costRebate.RebateLimit[i] != -1)
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
}
