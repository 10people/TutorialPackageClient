using UnityEngine;
using System.Collections;
using Module.Log;
using System.Collections.Generic;
using GCGame.Table;
using GCGame;
using Games.FakeObject;
using Games.GlobeDefine;
using Games.Item;
using System;

public class PriorityInfo
{
    public short GoodsId;
    public short Priority;  // 存储表格中商品优先级 上限是32767 若该表需要同步修改此处

    public PriorityInfo()
    {
        GoodsId = GlobeVar.INVALID_ID;
        Priority = GlobeVar.INVALID_ID;
    }

    public PriorityInfo(short goodsId, short priority)
    {
        GoodsId = goodsId;
        Priority = priority;
    }
}

// 比较函数 left比right -1靠前 1靠后
public class PriorityInfoCompare : IComparer<PriorityInfo>
{
    public int Compare(PriorityInfo left, PriorityInfo right)
    {
        if (left.Priority == right.Priority)
        {
            // 优先级相同时 GoodsId靠前的优先级高
            if (left.GoodsId < right.GoodsId)
            {
                return -1;
            }
            else
            {
                return 1;
            }
        }
        else
        {
            // 优先级为-1不参与排序 排最后
            if (left.Priority == GlobeVar.INVALID_ID)
            {
                return 1;
            }
            else if (right.Priority == GlobeVar.INVALID_ID)
            {
                return -1;
            }
            else
            {
                // 比ShowPirority 小的靠前
                if (left.Priority < right.Priority)
                {
                    return -1;
                }
                else
                {
                    return 1;
                }
            }
        }
    }
}

public class YuanBaoShopLogic : UIControllerBase<YuanBaoShopLogic>{

    public enum TAB_INDEX
    {
        TAB_INVALID = -1,
        TAB_STREN = 0,
        TAB_MOUNT,
        TAB_DECORATE,
        TAB_OTHER,
        TAB_VIP,
        VIP_PRECIOUS,
        TAB_COUNT,
        TAB_BLACKMARKET = 999,
    }

    public enum BUY_TYPE
    {
        TYPE_BIND,
        TYPE_UNBIND,
    }

    public enum OPEN_TYPE
    {
        OPEN_INVALID = 0,
        OPEN_FUNCTION_BUTTON = 1,
        OPEN_CHRISTMAS = 2, 
        OPEN_BEPOWER = 3,
		OPEN_FESTIVAL = 4,
        OPEN_FLOWEREGG = 5,
    }

    private static OPEN_TYPE m_YuanBaoShopOpenType = OPEN_TYPE.OPEN_FUNCTION_BUTTON;
    public static OPEN_TYPE YuanBaoShopOpenType
    {
        get{ return m_YuanBaoShopOpenType;}
        set{ m_YuanBaoShopOpenType = value;}
    } 

    public TabController m_TabController;
    public GameObject m_GoodsGrid;
    public GameObject m_Deadline;
    public UIPopupList m_DeadlinePopupList;
    public GameObject m_YBShopNumChoose;
    public TabController m_BuyTypeController;
    public UILabel m_UnBindYBNumLabel;
    public UILabel m_BindYBNumLabel;
    public GameObject m_FakeObjTopLeft;
    public GameObject m_FakeObjBottomRight;
    public GameObject m_BindBuy;
    public GameObject m_UnBindBuy;
    public UIGrid m_TabGrid;
    public GameObject m_BlackMarketTab;
    public ModelDragLogic m_ModelDrag;
    public GameObject m_VIPLabel;
    public GameObject m_Pages;
    public UILabel m_PageLabel;
    public YuanBaoShopItemLogic[] m_GoodsArray;
    public GameObject m_BindYuanBaoInfo;
    public GameObject m_PreciousTabLabel;

    //private static Dictionary<string, List<Tab_YuanBaoShop>> m_YuanBaoShopTable = null;
    private BUY_TYPE m_eCurBuyType = BUY_TYPE.TYPE_BIND;
    
    private FakeObject m_FitOnFakeObj;
    private int m_FakeObjID = GlobeVar.INVALID_ID;
    private GameObject m_FitOnGameObject;
    private YuanBaoShopItemLogic.DEADLINE_PRICE m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
    private const int ItemCount_PerPage = 6;
    private TAB_INDEX m_CurTabIndex = TAB_INDEX.TAB_INVALID;
    private List<PriorityInfo> m_ListPriority = new List<PriorityInfo>();
    private DateTime StandardDateTime = new DateTime(1970, 1, 1);

    public struct PageInfo
    {
        public int CurPage;
        public int PageCount;
        public int PageStartID; //以前存表第一列ID 现在存的是m_ListPriority索引!!
        public int PageEndID;   //以前存表第一列ID 现在存的是m_ListPriority索引!!

        public void Clear()
        {
            CurPage = GlobeVar.INVALID_ID;
            PageCount = GlobeVar.INVALID_ID;
            PageStartID = GlobeVar.INVALID_ID;
            PageEndID = GlobeVar.INVALID_ID;
        }
    }
    private PageInfo m_TabPageInfo = new PageInfo();

    public struct FitOnVisual
    {
        public int FashionGoodsID;
        public int ArmorGoodsID;
        public int WeaponGoodsID;
        public int FellowGoodsID;
        public int MountGoodsID;

        public int FashionID;
        public int ArmorID;
        public int WeaponID;
        public int FellowID;
        public int MountID;

        public YuanBaoShopItemLogic.DEADLINE_PRICE FashionDeadline;

        public void Clear()
        {
            FashionGoodsID = GlobeVar.INVALID_ID;
            ArmorGoodsID = GlobeVar.INVALID_ID;
            WeaponGoodsID = GlobeVar.INVALID_ID;
            FellowGoodsID = GlobeVar.INVALID_ID;
            MountGoodsID = GlobeVar.INVALID_ID;

            FashionID = GlobeVar.INVALID_ID;
            ArmorID = GlobeVar.INVALID_ID;
            WeaponID = GlobeVar.INVALID_ID;
            FellowID = GlobeVar.INVALID_ID;
            MountID = GlobeVar.INVALID_ID;

            FashionDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
        }
    }
    private FitOnVisual m_FitOnVisual = new FitOnVisual();

    void Awake()
    {
        SetInstance(this);
    }

	// Use this for initialization
	void Start () {

	}

    void OnEnable()
    {
        SetInstance(this);

        LoadAllGoodsDicPriority();

        m_BuyTypeController.ChangeTab("2Bind");
        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjTopLeft, m_FakeObjBottomRight);
        GameManager.gameManager.ActiveScene.ShowFakeObj();
        m_TabController.delTabChanged = TabOnClick;
        //m_YuanBaoShopTable = TableManager.GetYuanBaoShop();
        m_Deadline.SetActive(false);
        m_YBShopNumChoose.SetActive(false);
        m_BuyTypeController.delTabChanged = BuyTypeOnClick;
        UpdateYuanBaoInfo();

        m_TabController.InitData();
        bool bShowMountTab = GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_MOUNTTAB);
        if (m_TabController.GetTabButton("Sort04-Tab3") != null &&
            m_TabController.GetTabButton("Sort04-Tab3").gameObject != null)
        {
            m_TabController.GetTabButton("Sort04-Tab3").gameObject.SetActive(bShowMountTab);
        }
        bool bShowVipTab = GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP);
        if (m_TabController.GetTabButton("Sort06-Tab5") != null &&
            m_TabController.GetTabButton("Sort06-Tab5").gameObject != null)
        {
            m_TabController.GetTabButton("Sort06-Tab5").gameObject.SetActive(bShowVipTab);
        }
        m_TabGrid.Reposition();

		//如果是情人节界面点击，跳转到限时界面
		if (OPEN_TYPE.OPEN_FESTIVAL == YuanBaoShopOpenType)
		{
			m_TabController.ChangeTab("Sort02-Tab999");
		}
        else if (OPEN_TYPE.OPEN_FLOWEREGG == YuanBaoShopOpenType)
		{
            m_TabController.ChangeTab("Sort05-Tab4");
		}
		else
		{
			m_TabController.ChangeTab("Sort01-Tab1");
		}

        InitFakeObj();
        m_FitOnVisual.Clear();

#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.SHOP_UI);
#endif
    }

    void OnDisable()
    {
        
        m_eCurBuyType = BUY_TYPE.TYPE_BIND;
        m_FakeObjID = GlobeVar.INVALID_ID;
        m_FitOnGameObject = null;
        m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
        m_CurTabIndex = TAB_INDEX.TAB_INVALID;

        DestroyPartnerFakeObj();
        SetInstance(null);
        if (GameManager.gameManager.ActiveScene != null)
        {
            GameManager.gameManager.ActiveScene.HideFakeObj();
        }
        if (OPEN_TYPE.OPEN_CHRISTMAS == YuanBaoShopOpenType)
        {
            if (GlobalData.IsChristmasOpen())
            {
                UIManager.ShowUI(UIInfo.ChristmasController);
            }                      
        }
		if (OPEN_TYPE.OPEN_FESTIVAL == YuanBaoShopOpenType)
		{
			if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER) || 
			    GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING))
			{
				UIManager.ShowUI(UIInfo.FestivalController);
				return;
			}                      
		}
        YuanBaoShopOpenType = OPEN_TYPE.OPEN_FUNCTION_BUTTON;
    }

    void LoadAllGoodsDicPriority()
    {
        if (m_ListPriority.Count > 0)
        {
            return;
        }

        for (int i = 0; i < TableManager.GetYuanBaoShop().Count; i++)
        {
            Tab_YuanBaoShop tabYuanBaoShop = TableManager.GetYuanBaoShopByID(i, 0);
            if (tabYuanBaoShop == null)
            {
                continue;
            }

            m_ListPriority.Add(new PriorityInfo((short)i, (short)tabYuanBaoShop.ShowPriority));
        }

        m_ListPriority.Sort(new PriorityInfoCompare());
    }

    public static void OpenYuanBaoShop(OPEN_TYPE openType, bool isShowBlackMarket)
    {
        YuanBaoShopOpenType = openType;
        UIManager.ShowUI(UIInfo.YuanBaoShop, YuanBaoShopLogic.OnYuanBaoShopLoad, isShowBlackMarket);
    }

    static public void OnYuanBaoShopLoad(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            bool isShowBlackMarket = (bool)param;
            if (YuanBaoShopLogic.Instance() != null)
            {
                YuanBaoShopLogic.Instance().m_BlackMarketTab.SetActive(isShowBlackMarket);
                YuanBaoShopLogic.Instance().m_TabGrid.Reposition();
            }            
        }
    }

    void InitBuyTypeTabButtonChoose()
    {
        int nPlayerYuanBaoBind = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
        int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();

        // 绑定默认勾选看玩家是否有绑定元宝 非绑定只在玩家没有绑定元宝且有非绑定元宝时默认勾选 
        // 新增 精品标签下默认选择非绑定
        if ((nPlayerYuanBaoBind == 0 && nPlayerYuanBao != 0) || m_CurTabIndex == TAB_INDEX.VIP_PRECIOUS)
        {
            m_BuyTypeController.ChangeTab("1UnBind");
        }
        else
        {
            m_BuyTypeController.ChangeTab("2Bind");
        }
    }

    public void UpdateYuanBaoInfo()
    {
        int nPlayerYuanBaoBind = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
        int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();

        m_BindBuy.GetComponent<BoxCollider>().enabled = (nPlayerYuanBaoBind != 0);
        m_UnBindBuy.GetComponent<BoxCollider>().enabled = (nPlayerYuanBao != 0);

        InitBuyTypeTabButtonChoose();

        m_BindYBNumLabel.text = nPlayerYuanBaoBind.ToString();
        m_UnBindYBNumLabel.text = nPlayerYuanBao.ToString();        
    }

    void InitFakeObj()
    {
        int profession = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
        //对应FakeObject.txt配置
        switch ((CharacterDefine.PROFESSION)profession)
        {
            case CharacterDefine.PROFESSION.SHAOLIN:
                m_FakeObjID = 7;
                break;
            case CharacterDefine.PROFESSION.TIANSHAN:
                m_FakeObjID = 8;
                break;
            case CharacterDefine.PROFESSION.DALI:
                m_FakeObjID = 10;
                break;
            case CharacterDefine.PROFESSION.XIAOYAO:
                m_FakeObjID = 9;
                break;
            case CharacterDefine.PROFESSION.GAIBANG:
                m_FakeObjID = 62;
                break;
            default:
                m_FakeObjID = 7;
                break;
        }
        CreateFitOnFakeObj(profession);
    }

    void DestroyPartnerFakeObj()
    {
        if (m_FitOnFakeObj != null)
        {
            m_FitOnFakeObj.Destroy();
            m_FitOnFakeObj = null;
        }
    }

    void CreateFitOnFakeObj(int pro)
    {
        if (m_FitOnFakeObj != null)
        {
            DestroyPartnerFakeObj();
        }        

        m_FitOnFakeObj = new FakeObject();
        if (m_FitOnFakeObj == null)
        {
            return;
        }

        m_FitOnFakeObj.initFakeObject(m_FakeObjID, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FitOnGameObject);
        m_ModelDrag.ModelTrans = m_FitOnFakeObj.ObjAnim.transform;
    }

    //强化 伙伴 装饰 其他 VIP
    void TabOnClick(TabButton value)
    {
        if (value.name.Contains("Sort01-Tab1"))
        {
            m_Deadline.SetActive(false);
            m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
            UpdateGoodsInfo(TAB_INDEX.TAB_STREN);

            ShowBindYuanBao();
            m_PreciousTabLabel.SetActive(false);
        }
        else if (value.name.Contains("Sort02-Tab999"))
        {
            m_Deadline.SetActive(false);
            m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
            UpdateGoodsInfo(TAB_INDEX.TAB_BLACKMARKET);

            ShowBindYuanBao();
            m_PreciousTabLabel.SetActive(false);
        }
        else if (value.name.Contains("Sort03-Tab2"))
        {
            m_Deadline.SetActive(false);
            m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
            UpdateGoodsInfo(TAB_INDEX.TAB_MOUNT);

            ShowBindYuanBao();
            m_PreciousTabLabel.SetActive(false);
        }
        else if (value.name.Contains("Sort04-Tab3"))
        {
            m_Deadline.SetActive(false);
            m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
            UpdateGoodsInfo(TAB_INDEX.TAB_DECORATE);

            ShowBindYuanBao();
            m_PreciousTabLabel.SetActive(false);
        }
        else if (value.name.Contains("Sort05-Tab4"))
        {
            m_Deadline.SetActive(false);
            m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
            UpdateGoodsInfo(TAB_INDEX.TAB_OTHER);

            ShowBindYuanBao();
            m_PreciousTabLabel.SetActive(false);
        }
        else if (value.name.Contains("Sort06-Tab5"))
        {
            m_Deadline.SetActive(false);
            m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
            UpdateGoodsInfo(TAB_INDEX.TAB_VIP);

            ShowBindYuanBao();
            m_PreciousTabLabel.SetActive(false);
        }
        else if (value.name.Contains("Sort07-Tab6"))
        {
            m_Deadline.SetActive(false);
            m_eDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
            UpdateGoodsInfo(TAB_INDEX.VIP_PRECIOUS);

            HideBindYuanBao();
            m_PreciousTabLabel.SetActive(true);
        }
        InitBuyTypeTabButtonChoose();
    }

    void ShowBindYuanBao()
    {
        m_BindBuy.SetActive(true);
        m_BindYuanBaoInfo.SetActive(true);
    }

    void HideBindYuanBao()
    {
        m_BindBuy.SetActive(false);
        m_BindYuanBaoInfo.SetActive(false);
    }

    void UpdateGoodsInfo(TAB_INDEX eTabIndex)
    {
        m_TabPageInfo.Clear();
        m_CurTabIndex = eTabIndex;

        if (eTabIndex == TAB_INDEX.TAB_VIP)
        {
            if (Singleton<ObjManager>.Instance.MainPlayer != null)
            {
                int nPlayerVIPLevel = VipData.GetVipLv();
                if (nPlayerVIPLevel < 9)
                {
                    m_GoodsGrid.SetActive(false);
                    m_Pages.SetActive(false);
                    m_VIPLabel.SetActive(true);
                    return;
                }
                else
                {
                    m_GoodsGrid.SetActive(true);
                    m_Pages.SetActive(true);
                    m_VIPLabel.SetActive(false);                    
                }
            }
        }
        else
        {
            m_GoodsGrid.SetActive(true);
            m_Pages.SetActive(true);
            m_VIPLabel.SetActive(false);
        }

        int nTabItemCount = 0;
        int nPageItemIndex = 0;

        for (int i = 0; i < m_ListPriority.Count; i++ )
        {
            Tab_YuanBaoShop tabYuanBaoShop = TableManager.GetYuanBaoShopByID(m_ListPriority[i].GoodsId, 0);
            if (tabYuanBaoShop == null)
            {
                continue;
            }

            if (IsTabNewGoods(tabYuanBaoShop))
            {
                nTabItemCount += 1;
                if (HandleNewGoods(tabYuanBaoShop, nPageItemIndex, i, true))
                {
                    nPageItemIndex += 1;
                }
            }
        }

        UpdateGoodsActive(nPageItemIndex);

        m_TabPageInfo.PageCount = Mathf.CeilToInt((float)nTabItemCount / (float)ItemCount_PerPage);
        if (m_TabPageInfo.PageCount <= 0)
        {
            m_TabPageInfo.CurPage = 0;
        }
        else
        {
            m_TabPageInfo.CurPage = 1;
        }
        m_PageLabel.text = m_TabPageInfo.CurPage.ToString() + "/" + m_TabPageInfo.PageCount.ToString();
    }

    void ShowNextPage()
    {
        if (m_TabPageInfo.CurPage >= m_TabPageInfo.PageCount)
        {
            return;
        }

        int end = m_TabPageInfo.PageEndID;
        m_TabPageInfo.PageStartID = GlobeVar.INVALID_ID;
        m_TabPageInfo.PageEndID = GlobeVar.INVALID_ID;

        int nPageItemIndex = 0;
        for (int i = end + 1; i < m_ListPriority.Count; i++)
        {
            Tab_YuanBaoShop tabYuanBaoShop = TableManager.GetYuanBaoShopByID(m_ListPriority[i].GoodsId, 0);
            if (tabYuanBaoShop == null)
            {
                continue;
            }

            if (IsTabNewGoods(tabYuanBaoShop))
            {
                if (HandleNewGoods(tabYuanBaoShop, nPageItemIndex, i, true))
                {
                    nPageItemIndex += 1;
                }
                if (nPageItemIndex >= ItemCount_PerPage)
                {
                    break;
                }
            }
        }

        UpdateGoodsActive(nPageItemIndex);

        m_TabPageInfo.CurPage += 1;
        m_PageLabel.text = m_TabPageInfo.CurPage.ToString() + "/" + m_TabPageInfo.PageCount.ToString();
    }

    void ShowPrePage()
    {
        if (m_TabPageInfo.CurPage <= 1)
        {
            return;
        }

        int start = m_TabPageInfo.PageStartID;
        m_TabPageInfo.PageStartID = GlobeVar.INVALID_ID;
        m_TabPageInfo.PageEndID = GlobeVar.INVALID_ID;

        int nPageItemIndex = ItemCount_PerPage - 1;
        for (int i = start - 1; i >= 0; i--)
        {
            Tab_YuanBaoShop tabYuanBaoShop = TableManager.GetYuanBaoShopByID(m_ListPriority[i].GoodsId, 0);
            if (tabYuanBaoShop == null)
            {
                continue;
            }

            if (IsTabNewGoods(tabYuanBaoShop))
            {
                if (HandleNewGoods(tabYuanBaoShop, nPageItemIndex, i, false))
                {
                    nPageItemIndex -= 1;
                }
                if (nPageItemIndex < 0)
                {
                    break;
                }
            }
        }

        // 上一页必然所有item都显示
        UpdateGoodsActive(ItemCount_PerPage);
        m_TabPageInfo.CurPage -= 1;
        m_PageLabel.text = m_TabPageInfo.CurPage.ToString() + "/" + m_TabPageInfo.PageCount.ToString();
    }

    bool IsTabNewGoods(Tab_YuanBaoShop tabYuanBaoShop)
    {
        if (tabYuanBaoShop.TabIndex != (int)m_CurTabIndex)
        {
            return false;
        }

        if (false == IsGoodsOnSell(tabYuanBaoShop))
        {
            return false;
        }

        if (m_CurTabIndex == TAB_INDEX.TAB_VIP)
        {
            if (tabYuanBaoShop.ItemType != (int)YuanBaoShopItemLogic.ITEM_TYPE.TYPE_ITEM)
            {
                return false;
            }

            Tab_VIPShop tabVIPShop = TableManager.GetVIPShopByID(tabYuanBaoShop.ItemID, 0);
            if (tabVIPShop == null)
            {
                return false;
            }

            int nPlayerVIPLevel = VipData.GetVipLv();

            if (nPlayerVIPLevel < tabVIPShop.ShowLevelReq)
            {
                return false;
            }
        }

        return true;
    }

    bool IsGoodsOnSell(Tab_YuanBaoShop tabYuanBaoShop)
    {
        if (tabYuanBaoShop.SellTimeStart == GlobeVar.INVALID_ID ||
            tabYuanBaoShop.SellTimeEnd == GlobeVar.INVALID_ID)
        {
            return true;
        }

        DateTime DateTimeSellStart = new DateTime(
            tabYuanBaoShop.SellTimeStart / 100000000 % 100 + 2000,
            tabYuanBaoShop.SellTimeStart / 1000000 % 100,
            tabYuanBaoShop.SellTimeStart / 10000 % 100,
            tabYuanBaoShop.SellTimeStart / 100 % 100,
            tabYuanBaoShop.SellTimeStart / 1 % 100,
            0);
        DateTime DateTimeSellEnd = new DateTime(
            tabYuanBaoShop.SellTimeEnd / 100000000 % 100 + 2000,
            tabYuanBaoShop.SellTimeEnd / 1000000 % 100,
            tabYuanBaoShop.SellTimeEnd / 10000 % 100,
            tabYuanBaoShop.SellTimeEnd / 100 % 100,
            tabYuanBaoShop.SellTimeEnd / 1 % 100,
            0);

        DateTime DateTimeNow = Utils.GetServerDateTime();

        return DateTimeSellStart <= DateTimeNow && DateTimeNow < DateTimeSellEnd;
    }

    bool HandleNewGoods(Tab_YuanBaoShop tabYuanBaoShop, int nPageItemIndex, int nPriorityIndex, bool bNextPage)
    {
        if (nPageItemIndex >= ItemCount_PerPage || nPageItemIndex < 0)
        {
            return false;
        }

        m_GoodsArray[nPageItemIndex].Init(tabYuanBaoShop);
        if (bNextPage)
        {           
            if (nPageItemIndex == 0)
            {
                m_TabPageInfo.PageStartID = nPriorityIndex;
            }
            m_TabPageInfo.PageEndID = nPriorityIndex;
        }
        else
        {
            if (nPageItemIndex == ItemCount_PerPage - 1)
            {
                m_TabPageInfo.PageEndID = nPriorityIndex;
            }
            m_TabPageInfo.PageStartID = nPriorityIndex;
        }

        return true;
    }

    void UpdateGoodsActive(int nPageItemIndex)
    {
        for (int i = 0; i < ItemCount_PerPage; i++)
        {
            if (i < nPageItemIndex)
            {
                m_GoodsArray[i].gameObject.SetActive(true);
            }
            else
            {
                m_GoodsArray[i].gameObject.SetActive(false);
            }
        }
    }

    void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.YuanBaoShop);
    }

    public void ChangeDeadline()
    {
        //if (m_DeadlinePopupList.value == "7天")
        if (m_DeadlinePopupList.value == StrDictionary.GetClientDictionaryString("#{2888}"))
        {
            ChangeGoodsPrice(YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_WEEK);
        }
        //else if (m_DeadlinePopupList.value == "30天")
        else if (m_DeadlinePopupList.value == StrDictionary.GetClientDictionaryString("#{2889}"))
        {
            ChangeGoodsPrice(YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_MONTH);
        }
        //else if (m_DeadlinePopupList.value == "永久")
        else if (m_DeadlinePopupList.value == StrDictionary.GetClientDictionaryString("#{2890}"))
        {
            ChangeGoodsPrice(YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER);
        }
    }

    void ChangeGoodsPrice(YuanBaoShopItemLogic.DEADLINE_PRICE eDeadline)
    {
        m_eDeadline = eDeadline;
        foreach(YuanBaoShopItemLogic item in m_GoodsGrid.GetComponentsInChildren<YuanBaoShopItemLogic>())
        {
            item.ChangePrice(eDeadline);
        }
    }

    public void ShowYBShopNumChoose(int nGoodsId, ItemSlotLogic.SLOT_TYPE eSlotType, int nItemID, int nGoodsNum, int nPrice,
        CG_BUY_YUANBAOGOODS.DEADLINE_TYPE eDeadlineType, string strItemName)
    {
        m_YBShopNumChoose.SetActive(true);
        m_YBShopNumChoose.GetComponent<YBShopNumChooseLogic>().InitInfo(nGoodsId, eSlotType, nItemID, nGoodsNum, nPrice,
            m_eCurBuyType == BUY_TYPE.TYPE_BIND ? true : false, eDeadlineType, strItemName);
    }

    void BuyTypeOnClick(TabButton value)
    {
        if (value.name == "1UnBind")
        {
            m_eCurBuyType = BUY_TYPE.TYPE_UNBIND;
        }
        else if (value.name == "2Bind")
        {
            m_eCurBuyType = BUY_TYPE.TYPE_BIND;
        }        
    }

    public void HandleFitOn(YuanBaoShopItemLogic.ITEM_TYPE eItemType, int nGoodsId, int nItemID)
    {
        if (eItemType == YuanBaoShopItemLogic.ITEM_TYPE.TYPE_ITEM)
        {
            HandleFitOnEquipment(nGoodsId, nItemID);
        }
        else if (eItemType == YuanBaoShopItemLogic.ITEM_TYPE.TYPE_FASHION)
        {
            HandleFitOnFashion(nGoodsId, nItemID);
        }
        else if (eItemType == YuanBaoShopItemLogic.ITEM_TYPE.TYPE_FELLOW)
        {
            HandleFitOnFellow(nGoodsId, nItemID);
        }
        else if (eItemType == YuanBaoShopItemLogic.ITEM_TYPE.TYPE_MOUNT)
        {
            HandleFitOnMount(nGoodsId, nItemID);
        }
    }

    void HandleFitOnEquipment(int nGoodsId, int nDataID)
    {
        m_FitOnVisual.FellowGoodsID = GlobeVar.INVALID_ID;
        m_FitOnVisual.MountGoodsID = GlobeVar.INVALID_ID;

        m_FitOnVisual.FellowID = GlobeVar.INVALID_ID;
        m_FitOnVisual.MountID = GlobeVar.INVALID_ID;

        Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(nDataID, 0);
        if (tabCommonItem == null)
        {
            return;
        }

        Tab_EquipAttr tabEquipAttr = TableManager.GetEquipAttrByID(nDataID, 0);
        if (tabEquipAttr == null)
        {
            return;
        }
        
        // 武器装备
        if (tabEquipAttr.Component == (int)EquipPackSlot.Slot_WEAPON + 1)
        {
            HandleFitOnWeapon(nGoodsId, nDataID, tabEquipAttr);
        }
        if (tabEquipAttr.Component == (int)EquipPackSlot.Slot_ARMOR + 1)
        {
            HandleFitOnArmor(nGoodsId, nDataID, tabEquipAttr);
        }           
    }

    void HandleFitOnWeapon(int nGoodsId, int nDataID, Tab_EquipAttr tabWeaponEquipAttr)
    {
        Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(tabWeaponEquipAttr.ModelId, 0);
        if (tabItemVisual == null)
        {
            return;
        }

        int nWeaponModelID = Singleton<ObjManager>.Instance.MainPlayer.GetWeaponModelID(tabItemVisual);
        Tab_WeaponModel tabWeaponModel = TableManager.GetWeaponModelByID(nWeaponModelID, 0);
        if (tabWeaponModel == null)
        {
            return;
        }

        /// 因为可能显示过伙伴 坐骑的模型 所以要重载玩家模型预览 设置玩家外观
        Tab_ItemVisual tabModelVisual = null;
        if (m_FitOnVisual.FashionID != GlobeVar.INVALID_ID)
        {
            Tab_FashionData tabFashionData = TableManager.GetFashionDataByID(m_FitOnVisual.FashionID, 0);
            if (tabFashionData == null)
            {
                return;
            }
            tabModelVisual = TableManager.GetItemVisualByID(tabFashionData.ItemVisualID, 0);
        }
        else if (m_FitOnVisual.ArmorID != GlobeVar.INVALID_ID)
        {
            Tab_EquipAttr tabArmorEquipAttr = TableManager.GetEquipAttrByID(m_FitOnVisual.ArmorID, 0);
            if (tabArmorEquipAttr == null)
            {
                return;
            }
            tabModelVisual = TableManager.GetItemVisualByID(tabArmorEquipAttr.ModelId, 0);
        }
        else
        {
            if (Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID == GlobeVar.INVALID_ID)
            {
                tabModelVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
            }
            else
            {
                tabModelVisual = TableManager.GetItemVisualByID(Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID, 0);
            }
        }

        if (tabModelVisual == null)
        {
            return;
        }
        // 设置结束 下面与武器一起重载

        int nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID(tabModelVisual);
        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(m_FakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        m_FitOnVisual.WeaponGoodsID = nGoodsId;
        m_FitOnVisual.WeaponID = nDataID;

        List<object> param = new List<object>();
        param.Add(tabFakeObject);
        param.Add(m_FitOnFakeObj);
        param.Add(m_FitOnVisual);

        Singleton<ObjManager>.GetInstance().ReloadModel(m_FitOnGameObject,
            tabCharModel.ResPath,
            Singleton<ObjManager>.GetInstance().AsycLoadFitOnObjOver,
            param);
    }

    void HandleFitOnArmor(int nGoodsId, int nDataID, Tab_EquipAttr tabArmorEquipAttr)
    {
        Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(tabArmorEquipAttr.ModelId, 0);
        if (tabItemVisual == null)
        {
            return;
        }

        int nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID(tabItemVisual);
        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(m_FakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        m_FitOnVisual.ArmorGoodsID = nGoodsId;
        m_FitOnVisual.ArmorID = nDataID;

        // 装备 时装 不同时预览
        m_FitOnVisual.FashionGoodsID = GlobeVar.INVALID_ID;
        m_FitOnVisual.FashionID = GlobeVar.INVALID_ID;
        m_FitOnVisual.FashionDeadline = YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;

        List<object> param = new List<object>();
        param.Add(tabFakeObject);
        param.Add(m_FitOnFakeObj);
        param.Add(m_FitOnVisual);

        Singleton<ObjManager>.GetInstance().ReloadModel(m_FitOnGameObject,
            tabCharModel.ResPath,
            Singleton<ObjManager>.GetInstance().AsycLoadFitOnObjOver,
            param);
    }

    void HandleFitOnFellow(int nGoodsId, int nFellowID)
    {
        m_FitOnVisual.Clear();

        Tab_CabalFellowAttr tabFellowAttr = TableManager.GetCabalFellowAttrByID(nFellowID, 0);
        if (tabFellowAttr == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(tabFellowAttr.FakeObjId, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        m_FitOnVisual.FellowGoodsID = nGoodsId;
        m_FitOnVisual.FellowID = nFellowID;

        m_FitOnFakeObj.initFakeObject(tabFellowAttr.FakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FitOnGameObject);
        m_ModelDrag.ModelTrans = m_FitOnFakeObj.ObjAnim.transform;
    }

    void HandleFitOnMount(int nGoodsId, int nMountID)
    {
        m_FitOnVisual.Clear();

        Tab_MountBase tabMountBase = TableManager.GetMountBaseByID(nMountID, 0);
        if (tabMountBase == null)
        {
            return;
        }

        Tab_CharMount tabCharMount = TableManager.GetCharMountByID(tabMountBase.ModelID, 0);
        if (tabCharMount == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(tabCharMount.FakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        m_FitOnVisual.MountGoodsID = nGoodsId;
        m_FitOnVisual.MountID = nMountID;

        m_FitOnFakeObj.initFakeObject(tabCharMount.FakeObjID, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FitOnGameObject);
        m_ModelDrag.ModelTrans = m_FitOnFakeObj.ObjAnim.transform;
    }

    void HandleFitOnFashion(int nGoodsId, int nFashionID)
    {
        m_FitOnVisual.FellowGoodsID = GlobeVar.INVALID_ID;
        m_FitOnVisual.MountGoodsID = GlobeVar.INVALID_ID;

        m_FitOnVisual.FellowID = GlobeVar.INVALID_ID;
        m_FitOnVisual.MountID = GlobeVar.INVALID_ID;

        Tab_FashionData tabFashionData = TableManager.GetFashionDataByID(nFashionID, 0);
        if (tabFashionData == null)
        {
            return;
        }

        Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(tabFashionData.ItemVisualID, 0);
        if (tabItemVisual == null)
        {
            return;
        }

        int nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID(tabItemVisual);
        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(m_FakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        m_FitOnVisual.FashionGoodsID = nFashionID;
        m_FitOnVisual.FashionID = nFashionID;
        m_FitOnVisual.FashionDeadline = m_eDeadline;
        
        // 装备 时装 不同时预览
        m_FitOnVisual.ArmorGoodsID = GlobeVar.INVALID_ID;
        m_FitOnVisual.ArmorID = GlobeVar.INVALID_ID;

        List<object> param = new List<object>();
        param.Add(tabFakeObject);
        param.Add(m_FitOnFakeObj);
        param.Add(m_FitOnVisual);

        Singleton<ObjManager>.GetInstance().ReloadModel(m_FitOnGameObject,
            tabCharModel.ResPath,
            Singleton<ObjManager>.GetInstance().AsycLoadFitOnObjOver,
            param);
    }

    void ResetView()
    {
        m_FitOnFakeObj.initFakeObject(m_FakeObjID, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FitOnGameObject);
        if (null != m_FitOnFakeObj.ObjAnim)
            m_ModelDrag.ModelTrans = m_FitOnFakeObj.ObjAnim.transform;

        m_FitOnVisual.Clear();
    }

    void BuyView()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2137}"), "", BuyViewOK, BuyViewCancel);
    }

    void BuyViewOK()
    {
        int[] viewGoods = { m_FitOnVisual.FashionGoodsID, m_FitOnVisual.ArmorGoodsID, m_FitOnVisual.WeaponGoodsID, m_FitOnVisual.FellowGoodsID, m_FitOnVisual.MountGoodsID };
        for (int i = 0; i < 5; i++)
        {
            if (viewGoods[i] != GlobeVar.INVALID_ID)
            {
                CG_BUY_YUANBAOGOODS packet = (CG_BUY_YUANBAOGOODS)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUY_YUANBAOGOODS);
                packet.GoodID = viewGoods[i];
                packet.BuyNum = 1;
                packet.IsUseBind = m_eCurBuyType == BUY_TYPE.TYPE_BIND ? 1 : 0;
                if (i == 0)
                {
                    // 时装按照选择的期限
                    packet.Deadline = (int)m_FitOnVisual.FashionDeadline;
                }
                else
                {
                    // 其他的按永久
                    packet.Deadline = (int)YuanBaoShopItemLogic.DEADLINE_PRICE.PRICE_FOREVER;
                }
                packet.SendPacket();
            }
        }
    }

    void BuyViewCancel(){}

    void OnClickChongZhi()
    {
        RechargeData.PayUI();
    }
}