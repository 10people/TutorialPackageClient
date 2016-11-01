using UnityEngine;
using System.Collections;

public class ChargeActivityLogic : MonoBehaviour {

    public TabController m_TabController;
    public TabButton m_ShouChongButton;
    public TabButton m_ShouZhouButton;
    public TabButton m_ShouYueButton;
    public TabButton m_ChengZhangButton;
    public TabButton m_WishingWellButton;
    public TabButton m_CostRebateButton;
    public TabButton m_DayCardButton;
    public UISprite m_WishingWellTips;
    public TabButton m_SpecialTimePayRebateButton;
    public UIGrid m_ButtonGrid;
    public UISprite m_RemainMonthCardTips;
    public UISprite m_RemainGrowUpTips;
    public UISprite m_CostRebateTips;
    public UISprite m_SpecialTimePayRebateTips;
    public UISprite m_DayCardTips;

    private static ChargeActivityLogic m_Instance = null;
    public static ChargeActivityLogic Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
        if (m_TabController != null)
        {
            m_TabController.delTabChanged = OnTabChanged;
        }
    }

	// Use this for initialization
	void Start () {
        InitButton();
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.FTCHARGE_UI);
#endif
	}
    
    void InitButton()
    {
        m_ShouChongButton.gameObject.SetActive(false);
        m_ShouZhouButton.gameObject.SetActive(false);
        m_ShouYueButton.gameObject.SetActive(false);
        m_ChengZhangButton.gameObject.SetActive(false);
        m_WishingWellButton.gameObject.SetActive(false);
        m_CostRebateButton.gameObject.SetActive(false);
        m_SpecialTimePayRebateButton.gameObject.SetActive(false);
        m_DayCardButton.gameObject.SetActive(false);

        PayActivityData payData = GameManager.gameManager.PlayerDataPool.PayActivity;
        int playerLevel = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level;
        TabButton m_SelectButton = null;
        //首充
        if (payData.IsFirstTimeFlag() == false)
        {
            m_ShouChongButton.gameObject.SetActive(true);
            if (m_SelectButton == null){ m_SelectButton = m_ShouChongButton; }
        }
        //首周
        if (payData.IsFirstWeekOver() == false && payData.IsFirstTimeFlag() == true)
        {
            m_ShouZhouButton.gameObject.SetActive(true);
            if (m_SelectButton == null) { m_SelectButton = m_ShouZhouButton; }
        }
        //招财进宝 可重复购买 界面一直有
        {
            m_ShouYueButton.gameObject.SetActive(true);
            if (m_SelectButton == null) { m_SelectButton = m_ShouYueButton; }
        }
        //成长
        if (payData.IsGrowUpFlag() == true)
        {
            if (payData.IsGrowUpOver() == false)
            {
                m_ChengZhangButton.gameObject.SetActive(true);
                if (m_SelectButton == null) { m_SelectButton = m_ChengZhangButton; }
            }
        }
        else
        {
            if (playerLevel < payData.GrowUpLevel)
            {
                m_ChengZhangButton.gameObject.SetActive(true);
                if (m_SelectButton == null) { m_SelectButton = m_ChengZhangButton; }
            }
        }
        //许愿池
        if ( GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_WISHING) )
        {
            int intime = GameManager.gameManager.PlayerDataPool.WishingWell_InTime;
            if ( intime > 0 )
            {
                m_WishingWellButton.gameObject.SetActive(true);
                if (m_SelectButton == null)
                {
                    m_SelectButton = m_WishingWellButton;
                }
            }
        }
        //消费返利
        CostRebateData costRebate = GameManager.gameManager.PlayerDataPool.CostRebate;
        if (costRebate.CostRebateOpen == true)
        {
            m_CostRebateButton.gameObject.SetActive(true);
            if (m_SelectButton == null) { m_SelectButton = m_CostRebateButton; }
        }

        SpecialTimePayRebateData specialPayRebate = GameManager.gameManager.PlayerDataPool.SpecailTimePayRebate;
        if (specialPayRebate.SpecialTimePayRebateOpen == true)
        {
            m_SpecialTimePayRebateButton.gameObject.SetActive(true);
            if (m_SelectButton == null) { m_SelectButton = m_SpecialTimePayRebateButton; }
        }

        //日卡
        if (payData.DayCardOpen && payData.IsDayCardFlag() == false)
        {
            m_DayCardButton.gameObject.SetActive(true);
            if (m_SelectButton == null) { m_SelectButton = m_DayCardButton; }
        }

        m_ButtonGrid.repositionNow = true;
        if (null != m_SelectButton)
        {
            m_TabController.OnTabClicked(m_SelectButton);
        }

        if (m_ShouZhouButton.gameObject.activeSelf == false)
        {
            GameManager.gameManager.PlayerDataPool.IsClickChargeActivitySZ = true;
        }
        if (m_ShouYueButton.gameObject.activeSelf == false)
        {
            GameManager.gameManager.PlayerDataPool.IsClickChargeActivitySY = true;
        }
        if (m_ChengZhangButton.gameObject.activeSelf == false)
        {
            GameManager.gameManager.PlayerDataPool.IsClickChargeActivityCZ = true;
        }
        if (m_WishingWellButton.gameObject.activeSelf == false)
        {
            GameManager.gameManager.PlayerDataPool.IsClickWishingWell = true;
        }
        if (m_CostRebateButton.gameObject.activeSelf == false)
        {
            GameManager.gameManager.PlayerDataPool.IsClickCostRebate = true;
        }
        if (m_SpecialTimePayRebateButton.gameObject.activeSelf == false)
        {
            GameManager.gameManager.PlayerDataPool.IsClickSpecialTimePayRebate = true;
        }
        if (m_DayCardButton.gameObject.activeSelf == false)
        {
            GameManager.gameManager.PlayerDataPool.IsClickDayCard = true;
        }
        UpdateRemainTips();
    }

    public void UpdateCurTab()
    {
        if (ChargeActivityLogic_SC.Instance())
        {
            ChargeActivityLogic_SC.Instance().InitPrize();
        }
        if (ChargeActivityLogic_SY.Instance())
        {
            ChargeActivityLogic_SY.Instance().InitPrize();
        }
        if (ChargeActivityLogic_CZ.Instance())
        {
            ChargeActivityLogic_CZ.Instance().InitPage();
        }
        if (ChargeActivityLogic_XY.Instance())
        {
            ChargeActivityLogic_XY.Instance().InitData();
        }
        if (CostRebateLogic.Instance())
        {
            CostRebateLogic.Instance().InitData();
        }
        if (SpecialTimePayRebateLogic.Instance())
        {
            SpecialTimePayRebateLogic.Instance().InitData();
        }
        if (ChargeActivityLogic_MT.Instance())
        {
            ChargeActivityLogic_MT.Instance().InitPrize();
        }
    }

    void OnClickClose()
    {
        UIManager.CloseUI(UIInfo.ChargeActivity);
    }

    void OnClickCharge()
    {
        RechargeData.PayUI();
    }

    void OnTabChanged(TabButton button)
    {
        if (button.gameObject.name == "Tab1")
        {
            //首充
        }
        else if (button.gameObject.name == "Tab2")
        {
            //首周
            GameManager.gameManager.PlayerDataPool.IsClickChargeActivitySZ = true;
        }
        else if (button.gameObject.name == "Tab3")
        {
            //招财进宝
            GameManager.gameManager.PlayerDataPool.IsClickChargeActivitySY = true;
        }
        else if (button.gameObject.name == "Tab4")
        {
            //成长基金
            GameManager.gameManager.PlayerDataPool.IsClickChargeActivityCZ = true;
        }
        else if (button.gameObject.name == "Tab5")
        {
            //许愿池  
            GameManager.gameManager.PlayerDataPool.IsClickWishingWell = true;
        }
        else if (button.gameObject.name == "Tab6")
        {
            //消费返利
            GameManager.gameManager.PlayerDataPool.IsClickCostRebate = true;
        }
        else if (button.gameObject.name == "Tab7")
        {
            //充值返利
            GameManager.gameManager.PlayerDataPool.IsClickSpecialTimePayRebate = true;
        }
        else if (button.gameObject.name == "Tab8")
        {
            //日卡
            GameManager.gameManager.PlayerDataPool.IsClickDayCard = true;
        }
        UpdateRemainTips();
    }

    public void UpdateRemainTips()
    {
        //月卡
        if (ChargeActivityLogic_SY.IsMonthCardCanGet() ||
            ChargeActivityLogic_SY.IsNeedClickToday())
        {
            m_RemainMonthCardTips.gameObject.SetActive(true);
        }
        else
        {
            m_RemainMonthCardTips.gameObject.SetActive(false);
        }
        //成长基金
        if (ChargeActivityLogic_CZ.IsGrowUpCanGet() ||
            ChargeActivityLogic_CZ.IsNeedClickToday())
        {
            m_RemainGrowUpTips.gameObject.SetActive(true);
        }
        else
        {
            m_RemainGrowUpTips.gameObject.SetActive(false);
        }
        //许愿
        if (ChargeActivityLogic_XY.IsNeedShowTip())
        {
            m_WishingWellTips.gameObject.SetActive(true);
        }
        else
        {
            m_WishingWellTips.gameObject.SetActive(false);
        }
        //消费返利
        if (CostRebateLogic.IsRebateCanGet() ||
            CostRebateLogic.IsNeedClickToday())
        {
            m_CostRebateTips.gameObject.SetActive(true);
        }
        else
        {
            m_CostRebateTips.gameObject.SetActive(false);
        }
        //特殊时间
        if (SpecialTimePayRebateLogic.IsRebateCanGet() ||
            SpecialTimePayRebateLogic.IsNeedClickToday())
        {
            m_SpecialTimePayRebateTips.gameObject.SetActive(true);
        }
        else
        {
            m_SpecialTimePayRebateTips.gameObject.SetActive(false);
        }
        //日卡
        if (ChargeActivityLogic_MT.IsNeedClickToday())
        {
            m_DayCardTips.gameObject.SetActive(true);
        }
        else
        {
            m_DayCardTips.gameObject.SetActive(false);
        }

    }
}
