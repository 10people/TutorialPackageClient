using UnityEngine;
using System.Collections;
using GCGame.Table;

public class ChargeActivityLogic_SY : MonoBehaviour {

    public UISlider m_ProcessBar;
    public UILabel m_TotalYBLabel;
    public UIImageButton m_GetButton;
    public UISprite m_RemainTips;
    public UILabel m_LabelTitle;
    public UILabel m_LabelSYFirstReturn;

    private static ChargeActivityLogic_SY m_Instance = null;
    public static ChargeActivityLogic_SY Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
        //modified by zhang dongai [tt12776] 2015-1-17
        //各个渠道版本不应该区分字典号，直接使用一个字典号，对内容本地化即可
        //因为已经区分了字典号，那么大陆使用4184字典号。其他渠道全部使用4721字典号，不能再新增字典号了。
        string dicTip = "#{4184}";
        //如果是大陆，招财进宝的提示使用5146字典号
        string dicFirstReturn = "#{5146}";
        //如果不是大陆版本，使用4721字典号
        if (!PlatformHelper.IsChannelMainland())
        {
            dicTip = "#{4721}";
            //如果不是大陆，使用5147字典号的成长基金提示
            dicFirstReturn = "#{5147}";
        }
        m_LabelTitle.text = StrDictionary.GetClientDictionaryString(dicTip);
        m_LabelSYFirstReturn.text = StrDictionary.GetClientDictionaryString(dicFirstReturn);
    }

    // Use this for initialization
    void Start()
    {
        InitPrize();
    }

    public static bool IsMonthCardCanGet()
    {
        PayActivityData payData = GameManager.gameManager.PlayerDataPool.PayActivity;
        if (payData.IsMonthCardFlag() == true &&        //已经触发月卡
            payData.IsMonthCardOver() == false &&       //月卡未领取结束
            payData.IsMonthCardTodayFlag() == false)    //今日未领取月卡
        {
            return true;
        }
        return false;
    }

    public static bool IsNeedClickToday()
    {
        //未购买月卡 && 当天首次登陆后未点击
        PlayerData playerData = GameManager.gameManager.PlayerDataPool;
        if (playerData.PayActivity.IsMonthCardFlag() == false && playerData.IsClickChargeActivitySY == false)
        {
            return true;
        }
        return false;
    }

    public void InitPrize()
    {
        PayActivityData payData = GameManager.gameManager.PlayerDataPool.PayActivity;
        int totalYB = payData.MonthCardYBTotal;
        if (totalYB == 0)
        {
            m_ProcessBar.value = 0;
        }
        else
        {
            m_ProcessBar.value = (float)totalYB / (30 * 50);
        }
        m_TotalYBLabel.text = StrDictionary.GetClientDictionaryString("#{5104}", totalYB);

        if (payData.IsMonthCardFlag() == true &&        //已经触发月卡
            payData.IsMonthCardOver() == false &&       //月卡未领取结束
            payData.IsMonthCardTodayFlag() == false)    //今日未领取月卡
        {
            m_GetButton.isEnabled = true;
            m_RemainTips.gameObject.SetActive(true);
        }
        else
        {
            m_GetButton.isEnabled = false;
            m_RemainTips.gameObject.SetActive(false);
        }

        if (ChargeActivityLogic.Instance() != null)
        {
            ChargeActivityLogic.Instance().UpdateRemainTips();
        }
    }

    void OnClickGet()
    {
        PayActivityData payData = GameManager.gameManager.PlayerDataPool.PayActivity;
        if (payData.IsMonthCardFlag() == false)
        {
            return;
        }

        if (payData.IsMonthCardOver() == true)
        {
            return;
        }

        if (payData.IsMonthCardTodayFlag() == true)
        {
            return;
        }
        //发包领奖
        payData.SendMonthCardPacket();
    }
}
