using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Module.Log;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif


public class RechargeBarLogic : UIControllerBase<RechargeBarLogic> {

	// Use this for initialization
    public GameObject m_VipButton;
    public GameObject m_ChargeButton;
    public UISprite m_RemainTips;
    public UISprite m_VipTips;

    public void RefreshVIPTips()
    {
        m_VipTips.gameObject.SetActive(GameManager.gameManager.PlayerDataPool.IsShowVipTip);
    }

    private int m_SavedVipCost;
    public void OnVipCostChange(int nVipCost)
    {
        m_VipButton.SetActive(false);
        if (nVipCost >= 0)
        {
            m_VipButton.SetActive(true);

            if (VipData.GetVipLv() > 0)
            {
                GameManager.gameManager.PlayerDataPool.IsShowVipTip = false;
                RefreshVIPTips();
            }
        }
        m_SavedVipCost = nVipCost;        
    }
	void Awake () 
    {
        m_SavedVipCost = -1;
        SetInstance(this);

        UpdateChargeActivity();
        UpdateChargeTip();
        RefreshVIPTips();
#if BOBJOYSTICK
        MapRechargeBarToJoy();
        Attachfirstui();
#endif
	}
#if BOBJOYSTICK
    JoyUIButton defaultbtn;
    public JoyUIButton Defaultbtn
    {
        get { return defaultbtn; }
    }
    JoyUIButton uiVIP;
    public JoyUIButton UiVIP
    {
        get { return uiVIP; }
    }
    
    void Attachfirstui()
    {
        if (null == defaultbtn)
        {
            return;
        }
        LogModule.DebugLog("attaching " + defaultbtn.name);
        JoyStickCursor.Instance.AttachCursor(defaultbtn);
    }
    void MapRechargeBarToJoy()
    {
        if (null == FunctionButtonLogic.Instance() ||
            null == JoyUIButtonFactory.Instance)
        {
            return;
        }
        
        GameObject btnCharge = m_ChargeButton;
        GameObject btnVIP = m_VipButton;

        GameObject btnShowDetail = FunctionButtonLogic.Instance().m_BtnOpenDetail;
        GameObject btnCloseDetail = FunctionButtonLogic.Instance().m_BtnCloseDetail;

        if (defaultbtn == null)
        {
            defaultbtn = JoyUIButtonFactory.Instance.MapUI(btnCharge);
        }
        if (uiVIP == null)
        {
            uiVIP = JoyUIButtonFactory.Instance.MapUI(btnVIP);
        }

        defaultbtn.Right = uiVIP;

        uiVIP.Left = defaultbtn;
        FunctionButtonLogic.Instance().MapFunctionButtonToJoy(false);

    }
#endif
    void OnDestroy()
    {
        SetInstance(null);
    }

    public void UpdateChargeActivity()
    {
        if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_PAYACT))
        {
            m_ChargeButton.SetActive(true);
        }
        else
        {
            m_ChargeButton.SetActive(false);
        }
    }

    void OnClickChargeActivity()
    {
        if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_PAYACT))
        {
            UIManager.ShowUI(UIInfo.ChargeActivity);
        }
    }

    void OnVipClick()
    {
        if (m_SavedVipCost >= 0 && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP))
        {
            UIManager.ShowUI(UIInfo.VipRoot);
        }     
    }

    public void PlayTween(bool nDirection)
    {
#if BOBJOYSTICK
        if (nDirection == false)
        {
            Attachfirstui();
        }
#endif
        gameObject.SetActive(!nDirection);
    }

    public void UpdateChargeTip()
    {
        if (ChargeActivityLogic_SY.IsMonthCardCanGet() ||
            ChargeActivityLogic_SY.IsNeedClickToday() ||
            ChargeActivityLogic_CZ.IsGrowUpCanGet() ||
            ChargeActivityLogic_CZ.IsNeedClickToday() ||
            ChargeActivityLogic_XY.IsNeedShowTip() ||
            CostRebateLogic.IsRebateCanGet() ||
            CostRebateLogic.IsNeedClickToday() || 
            SpecialTimePayRebateLogic.IsRebateCanGet() ||
            SpecialTimePayRebateLogic.IsNeedClickToday() ||
            ChargeActivityLogic_MT.IsNeedClickToday())
        {
            m_RemainTips.gameObject.SetActive(true);
        }
        else
        {
            m_RemainTips.gameObject.SetActive(false);
        }
    }

	void onClickPvp()
	{
		FunctionButtonLogic.Instance().OnPKClick();
	}
}
