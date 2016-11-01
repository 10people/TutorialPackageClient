using UnityEngine;
using System.Collections;

public class ChargeActivityLogic_MT : MonoBehaviour {

    const int BindYuanBaoNum = 60;
    const int ItemId = 4600;
    const int ItemNum = 2;

    public ItemSlotLogic m_ItemSlot1;
    public UILabel m_Num1;
    public ItemSlotLogic m_ItemSlot2;
    public UILabel m_Num2;

    public static bool IsNeedClickToday()
    {
        //开关打开 && 未购买成长基金 && 当天首次登陆后未点击
        PlayerData playerData = GameManager.gameManager.PlayerDataPool;
        if (playerData.PayActivity.DayCardOpen &&
            playerData.PayActivity.IsDayCardFlag() == false && 
            playerData.IsClickDayCard == false)
        {
            return true;
        }
        return false;
    }

    private static ChargeActivityLogic_MT m_Instance = null;
    public static ChargeActivityLogic_MT Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
    }

    // Use this for initialization
    void Start()
    {
        InitPrize();
    }

    public void InitPrize()
    {
        m_ItemSlot1.InitInfo_YuanbaoBind();
        m_Num1.text = BindYuanBaoNum.ToString();
        m_ItemSlot2.InitInfo_Item(ItemId, ItemSlotLogic.OnClickOpenTips, "", false);
        m_Num2.text = ItemNum.ToString();
    }
}
