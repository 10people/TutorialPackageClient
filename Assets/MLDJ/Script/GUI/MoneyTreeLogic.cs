using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.LogicObj;

public class MoneyTreeLogic : UIControllerBase<MoneyTreeLogic>
{
    //public const int MaxAwardCount = 20; // 最大领取次数
    public const int MoneyTreeFreeAwardTimes = 8;   // 免费领取次数
    public const int MoneyTreeYuanBaoAwardTimes = 12;   // 元宝领取次数

    public UILabel m_TimerText;
	public GameObject m_TimerDesc ;
    public UILabel m_CountTipText;
    public UILabel m_YuaBaoAwardCountTipText;

    public UILabel m_VipAwardCountTipText;

    public UILabel m_LingQuTip;
    public UILabel m_CountFreeText;
    public UILabel m_Right_Tip;

    public UIInputNumber m_AwardCountInput;

    //public UIImageButton m_FreeAwardButton;
    public UIImageButton m_YuanBaoButton;

    private int m_CDTime;
    public int CDTime
    {
        get { return m_CDTime; }
        set {
            m_CDTime = value;
            UpdateTimerText();
        }
    }

    private int m_CurMoneyTreeID;
    public int CurMoneyTreeID
    {
        get { return m_CurMoneyTreeID; }
        set {
            m_CurMoneyTreeID = value;
            UpdateCountTip(m_CurMoneyTreeID);
        }

    }

    private int m_YuanBaoAwardCount;
    public int YuanBaoAwardCount
    {
        get { return m_YuanBaoAwardCount; }
        set {
            m_YuanBaoAwardCount = value;
            UpdateYuanBaoCountTip(m_YuanBaoAwardCount);
        }
    }

    private float m_fYuanbaoFactor = 1.0f;
	public float YuanbaoFactor
	{
		get { return m_fYuanbaoFactor; }
		set { 
            if (value <= 0)
            {
                return;
            }
            m_fYuanbaoFactor = value; 
        }
	}

    void OnAwake()
    {
        SetInstance(this);
    }

	// Use this for initialization
	void Start () {
    }

    void OnEnable()
    {
        SetInstance(this);
        AskYuanbaoFactor();
        CleanUp();
        initWindow();
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.MONEYTREE_UI);
#endif
    }

    void OnDisable()
    {
        SetInstance(null);
    }

    void initWindow()
    {
        CDTime = GameManager.gameManager.PlayerDataPool.MoneyTreeData.CDTime;
        CurMoneyTreeID = GameManager.gameManager.PlayerDataPool.MoneyTreeData.MoneyTreeID;
        YuanBaoAwardCount = GameManager.gameManager.PlayerDataPool.MoneyTreeData.YuanBaoAwardCount;
        UpdateVipTip();

        if (m_LingQuTip && m_CountFreeText && m_Right_Tip)
        {
            m_LingQuTip.text = Utils.GetDicByID(1518);
            m_CountFreeText.text = Utils.GetDicByID(1520);
            m_Right_Tip.text = Utils.GetDicByID(1521);
        }

        //if (CDTime <= 0 && m_CurMoneyTreeID < MoneyTreeFreeAwardTimes)
        //{
        //    m_FreeAwardButton.isEnabled = true;
        //}

        int nVipCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_MONEYTREE);
        if (m_YuanBaoAwardCount < MoneyTreeYuanBaoAwardTimes || nVipCount > 0)
        {
            m_YuanBaoButton.isEnabled = true;
        }

    }
    void CleanUp()
    {
        if (m_AwardCountInput)
        {
            m_AwardCountInput.value = "1";
        }

        CDTime = 0;
        m_TimerText.text = "";
		m_TimerDesc.gameObject.SetActive (false);
        m_CountTipText.text = "";
        m_YuaBaoAwardCountTipText.text = "";
        m_VipAwardCountTipText.text = "";

        //if (m_FreeAwardButton && m_YuanBaoButton)
        //{
        //    m_FreeAwardButton.isEnabled = false;
        //    m_YuanBaoButton.isEnabled = false;
        //}
        if (m_YuanBaoButton)
        {
            m_YuanBaoButton.isEnabled = false;
        }
    }


    void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.MoneyTreeRoot);
    }

    //void ButtonOKClick()
    //{
    //    if (m_AwardCountInput)
    //    {
    //        if (m_AwardCountInput.value == "")
    //        {
    //            return;
    //        }

    //        int nAwardCount = 0;
    //        bool nRet = int.TryParse(m_AwardCountInput.value, out nAwardCount);
    //        if (nRet)
    //        {
    //            if (nAwardCount == 1 && m_CDTime <= 0 && m_CurMoneyTreeID < MoneyTreeFreeAwardTimes)
    //            {
    //                OnOKClick();
    //            }
    //            else
    //            {
    //                int nMaxCount = TableManager.GetMoneyTree().Count;
    //                if (nAwardCount > nMaxCount - m_CurMoneyTreeID)
    //                {
    //                    nAwardCount = nMaxCount - m_CurMoneyTreeID;
    //                }

    //                int nNeedYuanbao  = GetNeedYuanBaoByAwardCount(nAwardCount);
    //                string str = "";
    //                str = StrDictionary.GetClientDictionaryString("#{1524}", nAwardCount, nNeedYuanbao);
    //                MessageBoxLogic.OpenOKCancelBox(str, null, OnOKClick, OnCancelClick);
    //            }
    //        }
    //    }
        
    //  }

    void ButtonOKClick(GameObject obj)
    {
        if (obj.name == "bgPic")
        {
            if (m_CurMoneyTreeID < MoneyTreeFreeAwardTimes)
            {
                //OnOKClick();
                if (m_CDTime > 0)
                {
                    Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2478}");
                }
                else
                {
                    GameManager.gameManager.PlayerDataPool.MoneyTreeData.SendAwardPacket(1, 1);
                }
            }
        }
        else if (obj.name == "Button-paste")
        {
            int nNeedYuanbao = 0;
            int nAwardCoin = 0;
            int nVipCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_MONEYTREE);
            
            if (m_YuanBaoAwardCount < MoneyTreeYuanBaoAwardTimes)
            {
                nNeedYuanbao = GetNeedYuanBaoByAwardCount(1);
                nAwardCoin = GetAwardMoneyByYuanBaoAwardCount(1);
            }
            else if (nVipCount > 0)
            {
                nNeedYuanbao = GetNeedYuanBaoByVipAward();
                nAwardCoin = GetAwardMoneyByVipAward();
            }
            else
            {
                return;
            }

            string str = "";
            str = StrDictionary.GetClientDictionaryString("#{2718}", nNeedYuanbao, nAwardCoin);
            MessageBoxLogic.OpenOKCancelBox(str, null, OnOKClick, OnCancelClick);
        }
    }

    void ButtonCancelClick()
    {
        CloseWindow();
    }

    void OnOKClick()
    {
        int nType = 0;
        int nVipCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_MONEYTREE);
        if (m_YuanBaoAwardCount < MoneyTreeYuanBaoAwardTimes)
        {
            nType = 2;
        }
        else if (nVipCount > 0)
        {
            nType = 3;
        }
        if (nType <= 0)
        {
            return;
        }
        GameManager.gameManager.PlayerDataPool.MoneyTreeData.SendAwardPacket(1, nType);
    }

    void OnCancelClick()
    {
        MessageBoxLogic.CloseBox();
    }

    void ButtonUpClick()
    {
        int nCount = 0;
        bool nRet = int.TryParse(m_AwardCountInput.value, out nCount);
        int nMaxCount = TableManager.GetMoneyTree().Count;
        if (nRet == true && nCount >= 0 && nCount < nMaxCount - m_CurMoneyTreeID && m_AwardCountInput)
        {
            m_AwardCountInput.value = (nCount + 1).ToString();
        }
        else
        {
            m_AwardCountInput.value = (nMaxCount - m_CurMoneyTreeID).ToString();
        }

    }

    void ButtonDownClick()
    {
        int nCount = 0;
        bool nRet = int.TryParse(m_AwardCountInput.value, out nCount);
        int nMaxCount = TableManager.GetMoneyTree().Count;
        if (nRet == true && nCount > 1 && nCount <= nMaxCount - m_CurMoneyTreeID && m_AwardCountInput)
        {
            m_AwardCountInput.value = (nCount - 1).ToString();
        }
        else
        {
            m_AwardCountInput.value = "1";
        }
    }

    void UpdateTimerText()
    {
        if (m_CDTime <= 0)
        {
            m_TimerText.text = "";
			m_TimerDesc.gameObject.SetActive (false);
            //if (m_CurMoneyTreeID >= 0 && m_CurMoneyTreeID < MoneyTreeFreeAwardTimes
            //    && m_FreeAwardButton && m_FreeAwardButton.isEnabled == false)
            //{
            //    m_FreeAwardButton.isEnabled = true;
            //}
            return;
        }

        int nMin = (m_CDTime % (60 * 60)) / 60;
        int nSec = m_CDTime % 60;
        if (m_TimerText)
        {
            m_TimerText.text = ""+ nMin / 10 + nMin % 10 + ":" + nSec / 10 + nSec % 10;
			m_TimerDesc.gameObject.SetActive (true);
        }

        //if (m_FreeAwardButton && m_FreeAwardButton.isEnabled)
        //{
        //    m_FreeAwardButton.isEnabled = false;
        //}
    }

    int GetNeedYuanBaoByAwardCount(int nAwardCount)
    {
        int nNeedYuanBao = 0;
        if (m_YuanBaoAwardCount >= 0 && m_YuanBaoAwardCount < MoneyTreeYuanBaoAwardTimes)
        {
            for (int i = 0; i < nAwardCount; i++)
            {
                Tab_MoneyTree MoneyTree = TableManager.GetMoneyTreeByID(MoneyTreeFreeAwardTimes + m_YuanBaoAwardCount + i, 0);
                if (MoneyTree != null)
                {
                    nNeedYuanBao += MoneyTree.BindYuanbao;
                }
            }
        }

        return nNeedYuanBao;
    }

    int GetAwardMoneyByYuanBaoAwardCount(int nAwardCount)
    {
        int nAwardCoin = 0;
        if (m_YuanBaoAwardCount >= 0 && m_YuanBaoAwardCount < MoneyTreeYuanBaoAwardTimes)
        {
            for (int i = 0; i < nAwardCount; i++)
            {
                Tab_MoneyTree MoneyTree = TableManager.GetMoneyTreeByID((MoneyTreeFreeAwardTimes + m_YuanBaoAwardCount + i), 0);
                if (MoneyTree != null)
                {
                    nAwardCoin += MoneyTree.Money;
                }
            }
        }

        return (int)(m_fYuanbaoFactor*nAwardCoin);
    }

    private void UpdateCountTip(int nMoneyTreeID)
    {
        if (m_CountTipText)
        {
            m_CountTipText.text = StrDictionary.GetClientDictionaryString("#{2479}", MoneyTreeFreeAwardTimes-nMoneyTreeID, MoneyTreeFreeAwardTimes);
        }

        //if (nMoneyTreeID >= MoneyTreeFreeAwardTimes)
        //{
        //    m_FreeAwardButton.isEnabled = false;
        //}
    }

    private void UpdateYuanBaoCountTip(int nCount)
    {
        if (m_YuaBaoAwardCountTipText)
        {
            m_YuaBaoAwardCountTipText.text = StrDictionary.GetClientDictionaryString("#{2480}", MoneyTreeYuanBaoAwardTimes- nCount, MoneyTreeYuanBaoAwardTimes);
        }

        int nVipCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_MONEYTREE);
        if (nCount >= MoneyTreeYuanBaoAwardTimes && nVipCount <= 0)
        {
            m_YuanBaoButton.isEnabled = false;
        }
    }

    // 请求元宝获取金币系数
    void AskYuanbaoFactor()
    {
        // 发包请求数据
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer != null)
        {
            CG_ASK_MONEYTREE_YUANBAOAWARD_FACTOR askPak = (CG_ASK_MONEYTREE_YUANBAOAWARD_FACTOR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_MONEYTREE_YUANBAOAWARD_FACTOR);
            askPak.SetObjID(_mainPlayer.ServerID);
            askPak.SendPacket();
        }
    }

    int GetCurMTVipID()
    {
        int nMaxNum = 0;
//         for (int i = 1; i < TableManager.GetMoneyTreeVIP().Count && i <= VipData.GetVipLv(); i++ )
//         {
//             Tab_VipBook vipTab = TableManager.GetVipBookByID(i, 0);
//             if (vipTab == null)
//            {
//                 continue;
//            }
//             nID += vipTab.VipMoneyTree;
//         }

        Tab_VipBook vipTab = TableManager.GetVipBookByID(VipData.GetVipLv(), 0);
        if (vipTab != null)
        {
            nMaxNum = vipTab.VipMoneyTree;
        }

        int nVipCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_MONEYTREE);
        return nMaxNum - nVipCount;
    }

    int GetNeedYuanBaoByVipAward()
    {
        int nNeedYuanBao = 0;
        int nID = GetCurMTVipID();

        Tab_MoneyTreeVIP vipTab = TableManager.GetMoneyTreeVIPByID(nID, 0);
        if (vipTab != null)
        {
            nNeedYuanBao = vipTab.BindYuanbao;
        }

        return nNeedYuanBao;
    }

    int GetAwardMoneyByVipAward()
    {
        int nAwardCoin = 0;
        int nID = GetCurMTVipID();

        Tab_MoneyTreeVIP vipTab = TableManager.GetMoneyTreeVIPByID(nID, 0);
        if (vipTab != null)
        {
            nAwardCoin = vipTab.Money;
        }

        return (int)(m_fYuanbaoFactor * nAwardCoin);
    }

    public void UpdateVipTip()
    {
        int nVipCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_VIPCP_MONEYTREE);
        if (m_VipAwardCountTipText)
        {
            Tab_VipBook Vip = TableManager.GetVipBookByID(VipData.GetVipLv(), 0);
            if (Vip == null)
            {
                return;
            }

            m_VipAwardCountTipText.text = StrDictionary.GetClientDictionaryString("#{4013}", nVipCount, Vip.VipMoneyTree);
        }

        if (YuanBaoAwardCount >= MoneyTreeYuanBaoAwardTimes && nVipCount <= 0)
        {
            m_YuanBaoButton.isEnabled = false;
        }
    }
}
