using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.ChatHistory;
using Games.LogicObj;

public class PlayerHeadInfo : MonoBehaviour {

    public UILabel m_LabelTitleBoard;
    public UISprite m_SprVip;
    public UILabel m_LabelName;
    public UISprite m_SprPaoShang;
	// 主玩家自动寻路的时候显示的图标
	public UISprite m_ZiDongXunLuSprite;
	// 注玩家自动战斗的时候显示的图标
	public UISprite m_ZiDongZhanDouSprite;

    public GameObject m_ObjChatBubble;
    public GameObject m_ObjOriginalHeadInfo;

    public ChatBubbleLogic m_ChatBubbleLogic;

	/// <summary>
	/// 是否是主玩家的名字版
	/// </summary>
	public bool m_bIsMainPlayer = false;


	public void Init(Obj_OtherPlayer player)
	{
		UpdatePaoShangIcon(player.PaoShangState);
		if (player is Obj_MainPlayer)
		{
			m_bIsMainPlayer = true;
		}
		else
		{
			m_bIsMainPlayer = false;
		}
	}

	public void Awake ()
	{
		Messenger.AddListener(MessengerConst.OnAutoSearchAgentEnd, OnAutoSearchEnd);
		Messenger.AddListener(MessengerConst.OnAutoSearchAgentBegin, OnAutoSearchBegin);
		Messenger.AddListener(MessengerConst.OnAutoCombatEnd, OnAutoCombatEnd);
		Messenger.AddListener(MessengerConst.OnAutoCombatBegin, OnAutoCombatBegin);

        // 暂时屏蔽称号
        m_LabelTitleBoard.gameObject.SetActive(false);
	}

	public void Clear ()
	{
		Messenger.RemoveListener(MessengerConst.OnAutoSearchAgentEnd, OnAutoSearchEnd);
		Messenger.RemoveListener(MessengerConst.OnAutoSearchAgentBegin, OnAutoSearchBegin);
		Messenger.RemoveListener(MessengerConst.OnAutoCombatEnd, OnAutoCombatEnd);
		Messenger.RemoveListener(MessengerConst.OnAutoCombatBegin, OnAutoCombatBegin);
	}

	void OnDestroy ()
	{
		Clear ();
	}

    public void UpdateVipInfo(int nVipCost)
    {
        if (m_SprVip != null && m_LabelName != null)
        {
            if (nVipCost > 0)
            {
                m_SprVip.gameObject.SetActive(true);
                float fShiftx = m_LabelName.GetComponent<UIWidget>().localSize.x / 2.0f;
                fShiftx += m_SprVip.GetComponent<UIWidget>().localSize.x / 2.0f;

                float fShifty = m_SprVip.transform.localPosition.y;
                m_SprVip.transform.localPosition = new Vector3(-fShiftx, fShifty, 0);
                m_SprVip.spriteName = VipData.GetVipImage(nVipCost);
            }
            else
            {
                m_SprVip.gameObject.SetActive(false);
            }
        }
    }

    public void UpdatePaoShangIcon(int nIconState)
    {
        switch (nIconState)
        {
            case (int)GC_BROADCASTPSSTATE.PSSTATE.REMOVE:
                m_SprPaoShang.gameObject.SetActive(false);
                break;
            case (int)GC_BROADCASTPSSTATE.PSSTATE.CANROB:
                m_SprPaoShang.gameObject.SetActive(true);
                m_SprPaoShang.spriteName = "ShangNon";
                m_SprPaoShang.MakePixelPerfect();
                break;
            case (int)GC_BROADCASTPSSTATE.PSSTATE.NOTCANROB:
                m_SprPaoShang.gameObject.SetActive(true);
                m_SprPaoShang.spriteName = "ShangOk";
                m_SprPaoShang.MakePixelPerfect();
                break;
            default:
                m_SprPaoShang.gameObject.SetActive(false);
                break;
        }
    }
    public void ShowTitleInvestitiveByTable(int titleID, string strTitleInvestitive)
    {
        if (null != m_LabelTitleBoard)
        {
            Tab_TitleData tabTitle = TableManager.GetTitleDataByID(titleID, 0);
            if (tabTitle != null)
            {
                string strTitle = "";
                strTitle += Utils.GetTitleColor(tabTitle.ColorLevel);
                strTitle += strTitleInvestitive;
                m_LabelTitleBoard.text = strTitle;
            }
            else
            {
                m_LabelTitleBoard.text = "";
            }
        }
    }

    public void ShowTitleInvestitive(string strTitleInvestitive)
    {
        m_LabelTitleBoard.text = strTitleInvestitive;
    }

    public void ShowOriginalHeadInfo(bool bShow)
    {
        if(null != m_ObjOriginalHeadInfo)
        {
            m_ObjOriginalHeadInfo.SetActive(bShow);
        }
    }

    public void ShowChatBubble(ChatHistoryItem text)
    {
        if (null != m_ChatBubbleLogic)
        {
            m_ChatBubbleLogic.Show(text);
        }
    }

	// 打开/关闭自动寻路图标
	public void ShowZiDongXunLuSprite (bool show)
	{
		m_ZiDongXunLuSprite.gameObject.SetActive(show && m_bIsMainPlayer);
	}

	// 打开/关闭自动战斗图标
	public void ShowZiDongZhanDouSprite (bool show)
	{
		m_ZiDongZhanDouSprite.gameObject.SetActive(show && m_bIsMainPlayer);
	}

	// 自动寻路状态转换时的消息响应函数
	private void OnAutoSearchBegin ()
	{
		ShowZiDongXunLuSprite(true);
	}

	private void OnAutoSearchEnd ()
	{
		ShowZiDongXunLuSprite(false);
	}

	// 自动战斗状态转换时的消息响应函数
	private void OnAutoCombatBegin ()
	{
		ShowZiDongZhanDouSprite(true);
	}
	
	private void OnAutoCombatEnd ()
	{
		ShowZiDongZhanDouSprite(false);
	}
}
