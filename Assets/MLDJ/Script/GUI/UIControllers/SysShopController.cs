/********************************************************************
	created:	2014/01/14
	created:	14:1:2014   13:38
	filename: 	SysShopController.cs
	author:		王迪
	
	purpose:	系统商店控制器
*********************************************************************/
using UnityEngine;
using System.Collections;
using GCGame;
using System.Collections.Generic;
using GCGame.Table;
using Games.Item;
using Games.LogicObj;
using Module.Log;
public class SysShopController : UIControllerBase<SysShopController>
{
    public GameObject shopPageRoot;                                       // 商品页父节点
    public GameObject dianquanshopPageRoot;                         // 点券商品页父节点
    public TabController topTabWindow; 									//右上角的tabcontrol
    public TabController dianQuanTab;									//点券商店里的tabcontrol
    public RewardItem[] recycleItems;                                       // 或沟槽图片
    public UILabel LabelBuyTip;                                        // 双击购买提示
    public UILabel LabelBuyBackTip;                                    // 回购提示
    public UILabel LabelCoinNum;                                       // 金币数量
    public UILabel LabelYuanbaoNum;                                    // 元宝数量
    public UILabel LabelBindYuanbaoNum;                                // 绑定元宝数量
    private List<GameObject> m_pageList = new List<GameObject>();       // 商品页LIST

    private List<GameObject> pageListForGoldShop = new List<GameObject>();		//金币商品页LIST
    private List<GameObject> pageListForDianQuanShop = new List<GameObject>();       // 点券商品页LIST
    private GameObject m_curShowPage = null;                         // 当前显示的商品页
    private int m_curPageNum = 0;                            // 当前第几页
    private List<ulong> m_recycleGUIDList = new List<ulong>();            // 当前回购槽对应的商品GUID
    public UILabel labelPage;                                          // 显示页数label
    public UILabel dianquanlabelPage;                              //点券显示页数

    private static int m_curShopID = 2;                             // 当前商店ID，目前为1，如果增加表需要改动

    private static int GOLD_SHOP_ID = 2;
    private static int DIANQUAN_SHOP_ID = 4;

    private const int ITEMCOUNT_MIN = 1;                            // 一次购买商品最小数量
    private const int ITEMCOUNT_MAX = 999;                           // 一次购买商品最大数量

    private const int PAGEITEMCOUNT_MAX = 6;                              // 每一页商品最大数量

    private GameObject m_PageItem;
    private GameObject m_ShopItem;

    public GameObject m_BuyBackWindow;
    public GameObject m_GoldMoneyShopItemGrid;
    public GameObject m_GoldMoneyShopItem;
    private int m_LeftTime;
    public UILabel m_LeftTimeLabel;

    public UIGrid m_SysShowPageRoot;

    public enum ShopTypeEnum
    {
        None,
        GoldMoneyShop,
        DianQuanShop,
        TimeLimitShop,
    }

    private ShopTypeEnum CurShopType = ShopTypeEnum.None;

    // 买药新手指引
    private int m_NewPlayerGuide_Step = -1;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }

    void OnEnable()
    {
        GUIData.delMoneyChanged += UpdateMoney;
        UpdateBuyBackItems();
        UpdateGoldMoneyShopItem();
        UpdateGoldMoneyShopTime();
        shopPageRoot.GetComponent<UICenterOnChild>().onCenterFinished = SetCurPageNum;
        dianquanshopPageRoot.GetComponent<UICenterOnChild>().onCenterFinished = SetCurPageNum;
        //shopPageRoot.GetComponent<UIGrid>().onReposition = SetToCurPage;
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.GRUGSHOP_UI);
#endif
    }

    void OnDisable()
    {
        GUIData.delMoneyChanged -= UpdateMoney;
        CancelInvoke("UpdateTime");
    }
    void Awake()
    {
        SetInstance(this);

        LabelBuyTip.text = Utils.GetDicByID(1088);
        LabelBuyBackTip.text = Utils.GetDicByID(1296);
        for (int i = 0; i < recycleItems.Length; ++i)
        {
            recycleItems[i].delItemClick = OnBuyBackClick;
        }

        topTabWindow.delTabChanged = OnTopTabClick;
        dianQuanTab.delTabChanged = OnDianQuanTabClick;
    }

    void Start()
    {
     
        UpdateMoney();
        UIManager.LoadItem(UIInfo.SysShopPage, OnLoadPageItem);
        topTabWindow.ChangeTab("Gold shop");
        ShowPage(Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level/30);
    }

    void SetCurPageNum(GameObject target)
    {
        m_curPageNum = target.GetComponent<SysShopPage>().GetPageNum();
        ShowPage(m_curPageNum);
    }

    void SetToCurPage()
    {
        m_pageList[m_curPageNum].SendMessage("OnClick", SendMessageOptions.DontRequireReceiver);
    }

    public SysShopPage GetCurShowShopPage()
    {
        return m_curShowPage.GetComponent<SysShopPage>();
    }

    void OnLoadPageItem(GameObject pageItem, object param)
    {
        m_PageItem = pageItem;
        if (null == m_PageItem)
        {
            LogModule.ErrorLog("can not load pageobj in" + UIInfo.SysShopPage.path);
            return;
        }

        UIManager.LoadItem(UIInfo.SysShopPageItem, OnLoadShopItem);
    }

    void OnLoadShopItem(GameObject shopItem, object param)
    {
        m_ShopItem = shopItem;
        if (null == m_ShopItem)
        {
            LogModule.ErrorLog("can not load pageobj in" + UIInfo.SysShopPageItem.path);
            return;
        }

        InitDianQuanShopPageInfo();
        InitGoldShopPageInfo();
    }

    void InitDianQuanShopPageInfo()
    {
        InitShopPageInfo(pageListForDianQuanShop, DIANQUAN_SHOP_ID, dianquanshopPageRoot);
    }

    void InitGoldShopPageInfo()
    {
        InitShopPageInfo(pageListForGoldShop, GOLD_SHOP_ID, shopPageRoot);
    }

    void InitShopPageInfo(List<GameObject> pageList, int shopID, GameObject BindObject)
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPlayer)
        {
            LogModule.ErrorLog("main player is not init");
            return;
            //yield break;
        }

        pageList.Clear();

        GameObject curPage = null;
        GameObject curPageItem = null;

        // 根据表格配置，初始化ITEM
        Tab_SystemShop curShopTable = TableManager.GetSystemShopByID(shopID, 0);
        int curItemIndex = 0;       // 除去无效物品，实际物品ID
        int curShowPage = 0;
        for (int i = 0, count = curShopTable.getPidCount(); i < count; i++)
        {
            //yield return null;
            Tab_CommonItem curTabItem = TableManager.GetCommonItemByID(curShopTable.GetPidbyIndex(i), 0);
            if (null != curTabItem)
            {
                if (curItemIndex % PAGEITEMCOUNT_MAX == 0)
                {
                    curPage = Utils.BindObjToParent(m_PageItem, BindObject);
                    pageList.Add(curPage);
                    curPage.name = i.ToString();
                    curPage.GetComponent<SysShopPage>().SetPageNum(curItemIndex / PAGEITEMCOUNT_MAX);
                }


                // 显示适用等级的最后一页
                if (curTabItem.MinLevelRequire <= mainPlayer.BaseAttr.Level && shopID == GOLD_SHOP_ID)
                {
                    curShowPage = pageList.Count - 1;
                }
                GameObject newCurPageBindObject = null;
                newCurPageBindObject = curPage.GetComponent<SysShopPage>().ShopItemGirdObject;
                curPageItem = Utils.BindObjToParent(m_ShopItem, newCurPageBindObject);
                curPageItem.name = i.ToString();
                curPage.GetComponent<SysShopPage>().AddItem(curPageItem, curItemIndex % PAGEITEMCOUNT_MAX, i, curShopTable);
                curItemIndex++;
            }
            else
            {
                LogModule.DebugLog("systemshop:can not find cur item in item table, item id:" + curShopTable.GetPidbyIndex(i));
            }
//             UIGrid[] gridArray = m_SysShowPageRoot.gameObject.GetComponentsInChildren<UIGrid>();
//             for (int j = 0; j < gridArray.Length; j++)
//             {
//                 gridArray[j].repositionNow = true;
//             }
//             m_SysShowPageRoot.repositionNow = true;
        }
        
        if (shopID == GOLD_SHOP_ID)
        {
            CurShopType = ShopTypeEnum.GoldMoneyShop;

            m_pageList = pageListForGoldShop;
        }
        else if (shopID == DIANQUAN_SHOP_ID)
        {
            CurShopType = ShopTypeEnum.DianQuanShop;
            m_pageList = pageListForDianQuanShop;
        }
        ShowPage(curShowPage);
    }

    public void ShowPage(int page)
    {
        if (CurShopType == ShopTypeEnum.None || m_pageList == null || m_pageList.Count == 0)
        {
            return;
        }

        if (page >= m_pageList.Count)
        {
            return;
        }

        m_curShowPage = m_pageList[page];

        m_curPageNum = page;
        if (CurShopType == ShopTypeEnum.GoldMoneyShop)
        {
            labelPage.text = (m_curPageNum + 1).ToString() + "/" + m_pageList.Count.ToString();
        }

        if (CurShopType == ShopTypeEnum.DianQuanShop)
        {
            dianquanlabelPage.text = (m_curPageNum + 1).ToString() + "/" + m_pageList.Count.ToString();
        }

        Invoke("SetToCurPage", 0.1f);

        Check_NewPlayerGuide();
    }
    public static int SetShopId
    {
      set { m_curShopID = value; }
    }
    // 购买物品
    public static void BuyItem(string strItemIndex, int count)
    {
        int curItemIndex;
        bool bCanGetID = int.TryParse(strItemIndex, out curItemIndex);
        if (!bCanGetID)
        {
            LogModule.ErrorLog("cur item id set error!");
            return;
        }

        Tab_SystemShop sysShopTable = TableManager.GetSystemShopByID(m_curShopID, 0);
        if (null == sysShopTable)
        {
            LogModule.ErrorLog("cur sysshop id isn't exist! : id " + m_curShopID.ToString());
            return;
        }

        int pid = sysShopTable.GetPricebyIndex(curItemIndex);
        if (pid < 0)
        {
            LogModule.ErrorLog("can not find cur item pid : itemID" + pid.ToString());
            return;
        }

        if (count < ITEMCOUNT_MIN || count > ITEMCOUNT_MAX)
        {
            LogModule.ErrorLog("item count is out range : count " + count.ToString());
            return;
        }

        CG_SYSTEMSHOP_BUY buyPacket = (CG_SYSTEMSHOP_BUY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SYSTEMSHOP_BUY);
        buyPacket.SetBuyNum(count);
        buyPacket.SetShopId(m_curShopID);
        buyPacket.SetMercIndex(curItemIndex);
        buyPacket.SendPacket();
    }

    // 卖物品
    public static void SellItem(int packet, List<ulong> packetGUIDList)
    {
        CG_SYSTEMSHOP_SELL sellPacket = (CG_SYSTEMSHOP_SELL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SYSTEMSHOP_SELL);

        sellPacket.SetPackage(packet);
        for (int i = 0; i < packetGUIDList.Count; ++i)
        {
            sellPacket.AddItemGuid(packetGUIDList[i]);
        }
        sellPacket.SendPacket();
    }

    // 回购物品
    public static void BuyBack(ulong guid)
    {
        CG_SYSTEMSHOP_BUYBACK buyBackPacket = (CG_SYSTEMSHOP_BUYBACK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SYSTEMSHOP_BUYBACK);
        buyBackPacket.SetShopId(GOLD_SHOP_ID);  //这里原来是金币商店的ID
        buyBackPacket.SetItemGuid(guid);
        buyBackPacket.SendPacket();

    }

    // 更新回购槽
    public void UpdateBuyBackItems()
    {
        if (null == GameManager.gameManager)
        {
            return;
        }
        // 根据回购背包数据更新回购槽
        m_recycleGUIDList.Clear();
        GameItemContainer buyBackPack = GameManager.gameManager.PlayerDataPool.BuyBackPack;
        int index = 0;
        if (buyBackPack == null)
        {
            return;
        }
        int count = buyBackPack.GetItemCount();
        for (int i = 0; i < count; i++)
        {
            GameItem curItem = buyBackPack.GetItem(i);
            if (null != curItem && index < recycleItems.Length)
            {
                //sprRecycleSlots[index].gameObject.SetActive(true);
                m_recycleGUIDList.Add(curItem.Guid);

                int itemID = curItem.DataID;
                Tab_CommonItem curTabItem = TableManager.GetCommonItemByID(itemID, 0);
                if (null != curTabItem)
                {
                    recycleItems[index].SetData(itemID, curItem.StackCount, true);
                    index++;
                }
            }
        }

        for (int i = index; i < recycleItems.Length; i++)
        {
            recycleItems[i].SetData(-1, 0, true);
        }
    }

    // 购买当前选中物品
    public void BuyCurItem()
    {
        CloseCurItemTip();
        if (null != m_curShowPage)
        {
            SysShopPage curPage = m_curShowPage.GetComponent<SysShopPage>();
            if (curPage == null)
            {
                return;
            }
            SysShopPageItem curItem = curPage.GetCurHighLightItem();
            if (curItem == null)
            {
                return;
            }

            BuyItem(curItem.gameObject.name, 1);
        }
    }

    // 批量购买当前选中物品
    public void BuyBatchCurItem()
    {
        CloseCurItemTip();
        if (null != m_curShowPage)
        {
            SysShopPage curPage = m_curShowPage.GetComponent<SysShopPage>();
            if (curPage == null || curPage.GetCurHighLightItem() == null)
            {
                return;
            }

            Tab_SystemShop sysShopTable = TableManager.GetSystemShopByID(m_curShopID, 0);

            if (sysShopTable != null && sysShopTable.CanBuyMulty > 0)
            {
                string medicalName = curPage.GetCurHighLightItem().LabelName.text;
                string goldMoneyShopTitle = StrDictionary.GetClientDictionaryString("#{10955}", medicalName);
                string goldMoneyShopTotalTitle = StrDictionary.GetClientDictionaryString("#{2837}");
                string oktitle = StrDictionary.GetClientDictionaryString("#{2837}");
                int index = int.Parse(curPage.GetCurHighLightItem().gameObject.name);
                string currencyIcon = string.Empty;
                int moneyType = sysShopTable.GetMoneyTypebyIndex(index);
                int moneySubType = sysShopTable.GetMoneySubTypebyIndex(index);
                int stepPerClick = 1;
                if (moneyType == (int)Consume_Type.COIN)
                {
                    currencyIcon = "qian5";
                    stepPerClick = 10;
                }
                else if (moneyType == (int)Consume_Type.YUANBAO)
                {
                    if (moneySubType == (int)Consume_SubType.YUANBAO_NORMAL)
                    {
                        currencyIcon = "qian2";
                    }
                    else if (moneySubType == (int)Consume_SubType.YUANBAO_BIND)
                    {
                        currencyIcon = "qian3";
                    }
                }
                NumChooseController.OpenWindow(ITEMCOUNT_MIN, ITEMCOUNT_MAX, goldMoneyShopTitle, OnNumChoose, stepPerClick, goldMoneyShopTotalTitle, oktitle,
                    true, "", currencyIcon, sysShopTable.GetPricebyIndex(index));
            }
            else
            {
                MessageBoxLogic.OpenOKBox(1004, 1000);
            }

        }
    }

    // 显示当前物品信息
    public void ShowCurItemTip()
    {
        SysShopPageItem curItem = GetSelectedItem();
        if (null == curItem)
        {
            return;
        }

        if (curItem.GetGameItem().IsEquipMent())
        {
            EquipTooltipsLogic.SetDelegateBuyClick(EquipBuyBatchClick, EquipBuyClick);
            //             EquipTooltipsLogic.ShowEquipTooltip(curItem.GetGameItem(),
            //             m_curShopTable.CanBuyMulty > 0 ? EquipTooltipsLogic.ShowType.ShopBuyBatch : EquipTooltipsLogic.ShowType.ShopBuy);
            EquipTooltipsLogic.ShowEquipTooltip(curItem.GetGameItem(), EquipTooltipsLogic.ShowType.Info);
        }
        else
        {
            ItemTooltipsLogic.SetDelegateBuyClick(ItemBuyBatchClick, ItemBuyClick);
            //              ItemTooltipsLogic.ShowItemTooltip(curItem.GetGameItem(),
            //              m_curShopTable.CanBuyMulty > 0 ? ItemTooltipsLogic.ShowType.ShopBuyBatch : ItemTooltipsLogic.ShowType.ShopBuy,null);
            ItemTooltipsLogic.ShowItemTooltip(curItem.GetGameItem(), ItemTooltipsLogic.ShowType.Info);
        }

    }

    void EquipBuyBatchClick()
    {
        if (SysShopController.Instance() != null)
        {
            SysShopController.Instance().BuyBatchCurItem();
        }
    }
    void EquipBuyClick()
    {
        if (SysShopController.Instance() != null)
        {
            SysShopController.Instance().BuyCurItem();
        }
    }

    public void ItemBuyBatchClick()
    {
        if (SysShopController.Instance() != null)
        {
            if (SysShopController.Instance().m_NewPlayerGuide_Step == 1)
            {
                SysShopController.Instance().m_NewPlayerGuide_Step = -1;
                NewPlayerGuidLogic.CloseWindow();
            }
            SysShopController.Instance().BuyBatchCurItem();
        }
    }

    void ItemBuyClick()
    {
        if (SysShopController.Instance() != null)
        {
            SysShopController.Instance().BuyCurItem();
        }
    }


    void CloseCurItemTip()
    {
        SysShopPageItem curItem = GetSelectedItem();

        if (null == curItem)
        {
            return;
        }

        if (curItem.GetGameItem().IsEquipMent())
        {
            UIManager.CloseUI(UIInfo.EquipTooltipsRoot);
        }
        else
        {
            UIManager.CloseUI(UIInfo.ItemTooltipsRoot);
        }
    }

    // 获取当前选中ITEM
    SysShopPageItem GetSelectedItem()
    {
        if (null == m_curShowPage)
        {
            return null;
        }
        SysShopPage curPage = m_curShowPage.GetComponent<SysShopPage>();
        if (null == curPage)
        {
            return null;
        }

        return curPage.GetCurHighLightItem();
    }

    void OnNextPageClick()
    {
        ShowPage(Mathf.Min(m_pageList.Count - 1, m_curPageNum + 1));
    }

    void OnPrevPageClick()
    {
        ShowPage(Mathf.Max(0, m_curPageNum - 1));
    }

    void OnCancelClick()
    {
        UIManager.CloseUI(UIInfo.SysShop);
    }

    void OnBuyBackClick(RewardItem item)
    {
        int curIndex = 0;
        if (!int.TryParse(item.name, out curIndex))
        {
            LogModule.ErrorLog("item is not a int value :" + item.name);
            return;
        }

        if (curIndex >= m_recycleGUIDList.Count)
        {
            return;
        }

        BuyBack(m_recycleGUIDList[curIndex]);
    }

    // buy
    void OnBuyClick()
    {
        BuyCurItem();
    }
    // 点击批量购买
    void OnBuyBatch()
    {
        BuyBatchCurItem();
    }

    // 批量购买确定
    void OnNumChoose(int curNum)
    {
        if (null == m_curShowPage)
        {
            LogModule.ErrorLog("curShowPage can not find");
            return;
        }

        SysShopPageItem curItem = m_curShowPage.GetComponent<SysShopPage>().GetCurHighLightItem();
        if (null == curItem)
        {
            LogModule.ErrorLog("cur select item is none");
            return;
        }

        BuyItem(curItem.gameObject.name, curNum);
    }

    void UpdateMoney()
    {
        LabelCoinNum.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        LabelYuanbaoNum.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao().ToString();
        LabelBindYuanbaoNum.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind().ToString();
    }

    void Check_NewPlayerGuide()
    {
        if (m_curPageNum != 0)
        {
            return;
        }

        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 10)
        {
            NewPlayerGuide(1);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 1:
                {
                    Transform gObjTrans = m_curShowPage.transform.FindChild("6");
                    if (gObjTrans)
                    {
                        NewPlayerGuidLogic.OpenWindow(gObjTrans.gameObject, 325, 100, "", "right", 0, true, true);
                    }
                }
                break;
        }
    }

    public void OnOpenBuyBackWindow()
    {
        if (m_BuyBackWindow != null)
        {
            m_BuyBackWindow.SetActive(true);
        }
    }

    public void OnCloseBuyBackWindow()
    {
        if (m_BuyBackWindow != null)
        {
            m_BuyBackWindow.SetActive(false);
        }
    }

    public void OnClickBuyBackAll()
    {
        for (int i = 0; i < recycleItems.Length; ++i)
        {
            recycleItems[i].OnItemClick();
        }
    }

    public void UpdateGoldMoneyShopItem()
    {
        Utils.CleanGrid(m_GoldMoneyShopItemGrid);

        int nValidCount = 0;
        for (int i = 0; i < GameManager.gameManager.PlayerDataPool.GoldMoneyShopItemList.Count; i++)
        {
            if (false == GameManager.gameManager.PlayerDataPool.GoldMoneyShopItemList[i].IsValid())
            {
                break;
            }

            int nGoodId = GameManager.gameManager.PlayerDataPool.GoldMoneyShopItemList[i].m_GoodId;
            int nLeftCount = GameManager.gameManager.PlayerDataPool.GoldMoneyShopItemList[i].m_LeftCount;

            string szItemName = i < 10 ? "0" + i.ToString() : i.ToString();
            GameObject ShopItem = Utils.BindObjToParent(m_GoldMoneyShopItem, m_GoldMoneyShopItemGrid, szItemName);
            if (ShopItem == null || ShopItem.GetComponent<GoldMoneyShopItemLogic>() == null)
            {
                continue;
            }

            ShopItem.GetComponent<GoldMoneyShopItemLogic>().Init(i, nGoodId, nLeftCount);

            nValidCount += 1;
        }

        if (m_GoldMoneyShopItemGrid.GetComponent<UIGrid>() != null)
        {
            m_GoldMoneyShopItemGrid.GetComponent<UIGrid>().Reposition();
        }
    }

    public void UpdateGoldMoneyShopTime()
    {
        CG_ASK_GOLDMONEYSHOPTIME packet = (CG_ASK_GOLDMONEYSHOPTIME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GOLDMONEYSHOPTIME);
        packet.NoParam = 1;
        packet.SendPacket();
    }

    public void SetLeftTime()
    {
        m_LeftTime = GameManager.gameManager.PlayerDataPool.GoldMoneyShopNextTime;
        InvokeRepeating("UpdateTime", 0, 1);
    }

    void UpdateTime()
    {
        if (m_LeftTime > 0)
        {
            int Seconds = m_LeftTime % 60;
            int Minutes = (m_LeftTime - Seconds) / 60 % 60;
            int Hours = ((m_LeftTime - Seconds) / 60 - Minutes) / 60;

            string hourStr = Hours >= 10 ? Hours.ToString() : "0" + Hours;
            string MinutesStr = Minutes >= 10 ? Minutes.ToString() : "0" + Minutes;
            string SecondsStr = Seconds >= 10 ? Seconds.ToString() : "0" + Seconds;

            //string timestr = string.Format("{0}:{1}:{2}", hourStr, MinutesStr, SecondsStr);
            string timestr = StrDictionary.GetClientDictionaryString("#{10840}", hourStr, MinutesStr ,SecondsStr);
            if (m_LeftTimeLabel != null)
            {
                m_LeftTimeLabel.text = timestr;
                m_LeftTimeLabel.color = new Color(255f / 255f, 148f / 255f, 9f / 255f);
            }

            GameManager.gameManager.PlayerDataPool.GoldMoneyShopNextTime = m_LeftTime;
            m_LeftTime--;

        }
    }

    void OnTopTabClick(TabButton value)
    {
        if (value.name == "Gold shop")
        {
            CurShopType = ShopTypeEnum.GoldMoneyShop;
            m_pageList = pageListForGoldShop;
            m_curShopID = GOLD_SHOP_ID;

            //ShowPage(0);
        }
        else if (value.name == "Trading line")
        {
            CurShopType = ShopTypeEnum.DianQuanShop;
            m_pageList = pageListForDianQuanShop;
            m_curShopID = DIANQUAN_SHOP_ID;

            ShowPage(0);
        }
    }

    void OnDianQuanTabClick(TabButton value)
    {
        if (value.name == "timelimit")
        {
            CurShopType = ShopTypeEnum.TimeLimitShop;
        }
        else if (value.name == "medical")
        {
            CurShopType = ShopTypeEnum.DianQuanShop;
            m_pageList = pageListForDianQuanShop;
            m_curShopID = DIANQUAN_SHOP_ID;

            //ShowPage(0);
        }
    }
}
