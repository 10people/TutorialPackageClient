//********************************************************************
// 文件名: ItemTooltipsLogic.cs
// 描述: 物品tips界面脚本
// 作者: WangZhe
//********************************************************************

using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;
using Games.GlobeDefine;
using GCGame;
using System.Collections.Generic;
using Module.Log;
using Games.UserCommonData;

public class ItemTooltipsLogic : MonoBehaviour {

    public enum ShowType
    {
        Normal = 1,     //正常tooltips
        Info,           //无操作按钮的tooltips
        ShopBuy,            // 购买界面
        ShopBuyBatch,       // 可以批量购买
        QianKunDaiStuff,    // 乾坤袋材料选择 比Normal多一个放入
        ChatLink,           //聊天栏超链
        CangKu,             //仓库取出
        CangKuBackPack,     //仓库放入
    }

    public UILabel m_ItemNameLabel;
    public UILabel m_ItemTypeLabel;
    public UILabel m_ItemUseLevelLabel;
    public UILabel m_ItemBindLabel;
    public UILabel m_ItemPriceLabel;
    public UISprite m_ItemPriceIcon;
    public UILabel m_ItemMaxNumLabel;
    public UILabel m_ItemDescLabel;
    public UISprite m_ItemIconSprite;
    public UISprite m_ItemQualityGrid;
    public UIImageButton m_SellButton;
    public UIImageButton m_ThrowButton;
    public UIImageButton m_UseButton;
	public UIImageButton m_LoverFlowerUseButton;
    public UIImageButton m_ShareLinkButton;
    public UIImageButton m_BuyButton;
    public UIImageButton m_BuyBatchButton;
    public UIImageButton m_ConsignSaleBuyButton;
    public UIImageButton m_CangKuInButton;
    public UIImageButton m_CangKuOutButton;
    public UILabel m_ItemSellLabel;
    public GameObject m_ItemDisableSprite;
    public UIImageButton m_UseBatchButton;
    public GameObject m_PutInQianKunDaiButton;
    public UIGrid m_OpButtonGrid;
    public UILabel m_ItemDescDynamicLabel;
    public UILabel m_RemainTimeLable;
    public GameObject m_AbsorbButton;
    public GameObject m_ComposeButton;
    public GameItem m_Item = null;

    public delegate void VoidBuyDelegate();
    private static VoidBuyDelegate delBuyClick = null;
    private static VoidBuyDelegate delBuyBatchClick = null;


    private static ItemTooltipsLogic m_Instance;
    public static ItemTooltipsLogic Instance()
    {
        return m_Instance;
    }

    private static GameItem m_curItem;
    private static ShowType m_curType;
    private static ItemSlotLogic m_curItemSlot;
    public static void ShowItemTooltip(int dataId, ShowType type, ItemSlotLogic slot = null)
    {
        GameItem item = new GameItem();
        item.DataID = dataId;
        if (item.IsValid() && !item.IsEquipMent())
        {
            ShowItemTooltip(item, type, slot);
        }
    }
    public static void ShowItemTooltip(GameItem equip, ShowType type, ItemSlotLogic slot = null)
    {
        m_curItem = equip;
        m_curType = type;
        m_curItemSlot = slot;
        UIManager.ShowUI(UIInfo.ItemTooltipsRoot, ItemTooltipsLogic.OnShowItemTip);
    }
    public static void SetDelegateBuyClick(VoidBuyDelegate clickBuyBatchDelegate, VoidBuyDelegate clickBuyDelegate)
    {
        delBuyBatchClick = clickBuyBatchDelegate;
        delBuyClick = clickBuyDelegate;
    }

    private static void OnShowItemTip(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            LogModule.ErrorLog("load equiptooltip error");
            return;
        }

        if (null != ItemTooltipsLogic.Instance())
        {
            ItemTooltipsLogic.Instance().ShowTooltips(m_curItem, m_curType);
        }
    }


    // 新手指引
    private int m_NewPlayerGuideFlag_Step = -1;

    void Awake()
    {
        m_Instance = this;
    }

    void Start()
    {
        Check_NewPlayerGuide();
    }
	
	
    void OnDestroy()
    {
#if !UNITY_WP8
        if (NumChooseController.Instance() != null)
        {
            UIManager.CloseUI(UIInfo.NumChoose);
        }
#endif
        m_Instance = null;
    }

    private void ShowTooltips(GameItem item, ShowType type)
    {
        if (item == null)
        {
            CloseWindow();
            return;
        }
        if (item.IsValid() == false)
        {
            CloseWindow();
            return;
        }

        gameObject.SetActive(true);
        // 物品图标
        SetItemIcon(item);
        // 玩家是否可用
        SetItemDisableSprite(item);
        // 颜色品级
        SetItemQualityGrid(item);
        // 物品名 根据物品等级变颜色
        SetItemName(item);
        // 类别
        SetItemType(item);
        // 使用等级
        SetItemUseLevel(item);
        // 绑定信息
        SetItemBind(item);
        // 是否可出售
        SetItemSellInfo(item);
        // 售价
        SetItemPrice(item);
        // 叠加数量
        SetItemMaxNum(item);
        // 描述
        SetItemDesc(item);
        // 动态数据域
        SetItemDynamicDesc(item, type);
        // 显示剩余时间
        ShowRemainTime(item);

        int canuse = TableManager.GetCommonItemByID(item.DataID, 0).CanUse;
        int cansell = TableManager.GetCommonItemByID(item.DataID, 0).CanSell;
        int canthrow = TableManager.GetCommonItemByID(item.DataID, 0).CanThrow;
        int canbatchuse = TableManager.GetCommonItemByID(item.DataID, 0).IsCanBatchUse;
        int cancompose = TableManager.GetCommonItemByID(item.DataID, 0).IsCanQianKunDai;

        m_BuyButton.gameObject.SetActive(false);
        m_BuyBatchButton.gameObject.SetActive(false);

        m_SellButton.gameObject.SetActive(false);
        //丢弃按钮
        m_ThrowButton.gameObject.SetActive(false);
        //使用按钮
        m_UseButton.gameObject.SetActive(false);
        //批量使用按钮
        m_UseBatchButton.gameObject.SetActive(false);
        //链接按钮
        m_ShareLinkButton.gameObject.SetActive(false);
        //乾坤袋放入
        m_PutInQianKunDaiButton.SetActive(false);
        //寄售行求购信息
        m_ConsignSaleBuyButton.gameObject.SetActive(false);
        //仓库取回按钮
        m_CangKuOutButton.gameObject.SetActive(false);
        //仓库放入按钮
        m_CangKuInButton.gameObject.SetActive(false);
        //吸收按钮
        m_AbsorbButton.SetActive(false);
		//情人节道具使用按钮
		m_LoverFlowerUseButton.gameObject.SetActive(false);
        //合成按钮
        m_ComposeButton.SetActive(false);
        if (type == ShowType.Info)    //仅显示信息 没有操作按钮的tips
        {
            //出售按钮
           
        }
        else if(type == ShowType.ShopBuy)
        {
            m_BuyButton.gameObject.SetActive(true);
        }
        else if(type == ShowType.ShopBuyBatch)
        {
            m_BuyButton.gameObject.SetActive(true);
            m_BuyBatchButton.gameObject.SetActive(true);
        }
        else if (type == ShowType.ChatLink)
        {
            //根据是否可以上架 决定是否显示求购按钮
            if (ConsignSaleBag.isCanConsignSale(item, true))
            {
                m_ConsignSaleBuyButton.gameObject.SetActive(true);
            }
        }
        else if (type == ShowType.CangKu)  //仓库界面 仓库物品tips
        {
            //显示取回按钮
            m_CangKuOutButton.gameObject.SetActive(true);
        }
        else if (type == ShowType.CangKuBackPack)  //仓库界面 背包物品tips
        {
            //显示放入仓库按钮
            m_CangKuInButton.gameObject.SetActive(true);
        }
        else
        {
            if (type == ShowType.QianKunDaiStuff)
            {
                m_PutInQianKunDaiButton.SetActive(true);
            }
            else
            {
                m_PutInQianKunDaiButton.SetActive(false);
            }
			if(FriendChooseLogic.IsLoverFestivalItem(item.DataID))//情人节道具使用按钮
			{
				if(item.DynamicData[7] == 0)//道具未使用
				{
					m_LoverFlowerUseButton.gameObject.SetActive(true);
				}
			}
			else
			{
				m_LoverFlowerUseButton.gameObject.SetActive(false);
			}
            //出售按钮
            m_SellButton.gameObject.SetActive((cansell == 1) ? true : false);
            //使用按钮
            m_UseButton.gameObject.SetActive((canuse == 1) ? true : false);
            //批量使用按钮
            m_UseBatchButton.gameObject.SetActive((canuse == 1 && canbatchuse == 1 && item.StackCount > 1) ? true : false);
            //丢弃按钮
            m_ThrowButton.gameObject.SetActive((canthrow == 1) ? true : false);
            //链接按钮
            m_ShareLinkButton.gameObject.SetActive(true);
            //吸收按钮
            m_AbsorbButton.SetActive(item.IsEnchanceExpItem());
            //合成按钮
            m_ComposeButton.SetActive(cancompose == 1);

            m_OpButtonGrid.Reposition();
        }
        
        m_Item = item;

        //gameObject.SetActive(true);
        //UIManager.ShowUI(UIInfo.ItemTooltipsRoot);
    }

    void SetItemSellInfo(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(item.DataID, 0);
            if (tabItem != null)
            {
                m_ItemSellLabel.text = (ConsignSaleBag.isCanConsignSale(item) && !item.BindFlag) ? StrDictionary.GetClientDictionaryString("#{2382}") : StrDictionary.GetClientDictionaryString("#{2383}");
            }
        }
    }

    void SetItemIcon(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            m_ItemIconSprite.spriteName = item.GetIcon();
            m_ItemIconSprite.MakePixelPerfect();
        }
    }

    void SetItemDisableSprite(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            if (item.IsFitForPlayer())
            {
                m_ItemDisableSprite.SetActive(false);
            }
            else
            {
                m_ItemDisableSprite.SetActive(true);
            }
        }
    }

    void SetItemQualityGrid(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(item.DataID, 0);
            if (tabItem != null)
            {
                int nQuality = tabItem.Quality;
                m_ItemQualityGrid.spriteName = GlobeVar.QualityColorGrid[nQuality - 1];
            }
        }
    }

    void SetItemName(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            int nQuality = (int)item.GetQuality();
            m_ItemNameLabel.text = Utils.GetItemNameColor(nQuality);
            m_ItemNameLabel.text += TableManager.GetCommonItemByID(item.DataID, 0).Name;
            int nExistTime = TableManager.GetCommonItemByID(item.DataID, 0).ExistTime;
            if (nExistTime > 0)
            {
                if (nExistTime >= 24*60) // 天
                {    
                    m_ItemNameLabel.text += StrDictionary.GetClientDictionaryString("#{3316}", (float)nExistTime / 60f / 24f);
                }
                else // 小时
                {
                    m_ItemNameLabel.text += StrDictionary.GetClientDictionaryString("#{2834}", (int)(nExistTime / 60));
                }
            }
        }
    }

    void SetItemType(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(item.DataID, 0);
            if (tabItem != null)
            {
                int nClassID = tabItem.ClassID;
                int nSubClassID = tabItem.SubClassID;
                m_ItemTypeLabel.text = Utils.GetItemType(nClassID, nSubClassID);
            }
        }
    }

    void SetItemUseLevel(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            int nPlayerLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(item.DataID, 0);
            if (null != tabItem)
            {
                int nItemUseLevel = tabItem.MinLevelRequire;
                if (nPlayerLevel >= nItemUseLevel)
                {
                    m_ItemUseLevelLabel.text = "";
                }
                else
                {
                    m_ItemUseLevelLabel.text = "[E60012]";
                }
                m_ItemUseLevelLabel.text += StrDictionary.GetClientDictionaryString("#{3319}", nItemUseLevel);
            }
        }
    }

    void SetItemBind(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            if (item.BindFlag)
            {
                m_ItemBindLabel.text = StrDictionary.GetClientDictionaryString("#{2827}");
            }
            else
            {
                m_ItemBindLabel.text = StrDictionary.GetClientDictionaryString("#{2828}");
            }
        }
    }

    void SetItemPrice(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(item.DataID, 0);
            if (tabItem != null)
            {
                // 价格
                m_ItemPriceLabel.text = tabItem.SellPrice.ToString();

                // 出售方式 图标
                //             int nPower = Mathf.FloorToInt(Mathf.Log10((float)nItemPrice));
                //             m_ItemPriceIcon.gameObject.transform.localPosition = new Vector3(84 + 12 * nPower, 0, 0);
                if (tabItem.SellMoneyType == (int)ItemSellMoneyType.TYPE_COIN)
                {
                    m_ItemPriceIcon.spriteName = "qian5";
                }
                else if (tabItem.SellMoneyType == (int)ItemSellMoneyType.TYPE_YUANBAO)
                {
                    m_ItemPriceIcon.spriteName = "qian2";
                }
                else if (tabItem.SellMoneyType == (int)ItemSellMoneyType.TYPE_BIND_YUANBAO)
                {
                    m_ItemPriceIcon.spriteName = "qian3";
                }
            }
        }
    }

    void SetItemDesc(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            m_ItemDescLabel.text = string.Empty;
            if (null != TableManager.GetCommonItemByID(item.DataID, 0))
            {
                string strItemDesc = TableManager.GetCommonItemByID(item.DataID, 0).Tips;
                m_ItemDescLabel.text += strItemDesc;
            }

            if (item.DataID == GlobeVar.MARRY_RING_ITEMID)
            {
                m_ItemDescLabel.text += Utils.GetMarryRingString(item);
            }

			if (FriendChooseLogic.IsLoverFestivalItem(item.DataID))
			{
				if(item.DataID != FriendChooseLogic.RoseDataId1){
					m_ItemDescLabel.text += Utils.GetLoverString(item);
				}
			}

            m_ItemDescLabel.text = m_ItemDescLabel.text.Replace("#r", "\n");
        }
    }
    void SetItemDynamicDesc(GameItem item, ShowType type)
    {
        if (item != null && item.IsValid())
        {
            bool bRet = false;
            if (item.GetClass() == (int)ItemClass.MEDIC
                && (item.GetSubClass() == (int)MedicSubClass.HP_DY
                || item.GetSubClass() == (int)MedicSubClass.MP_DY
                || item.GetSubClass() == (int)MedicSubClass.HPMP_DY
                ))
            {
                bRet = true;
            }
            else if (item.GetClass() == (int)ItemClass.MISSION && item.GetSubClass() == (int)MissionSubClass.SHANGPIAO)
            {
                bRet = true;
            }
            else if (item.GetClass() == (int)ItemClass.MISSION && 
                item.GetSubClass() == (int)MissionSubClass.HEROCODECARD &&
                type != ShowType.Info)
            {
                bRet = true;
            }

            if (bRet)
            {
                m_ItemDescDynamicLabel.gameObject.SetActive(true);

                if (item.DataID == GlobeVar.HEROCODE_MAILITEM)
                {
                    m_ItemDescDynamicLabel.text = StrDictionary.GetClientDictionaryString("#{5542}", item.DynamicData[0], item.DynamicData[1], item.DynamicData[2], item.DynamicData[3]);
                }
                else
                {
                    if (item.DynamicData[0] == 1)
                    {
                        m_ItemDescDynamicLabel.text = StrDictionary.GetClientDictionaryString("#{3159}", item.DynamicData[1]);
                    }
                    else
                    {
                        int dataId = item.DataID;
                        Tab_UsableItem line = TableManager.GetUsableItemByID(dataId, 0);
                        if (line != null)
                        {
                            m_ItemDescDynamicLabel.text = StrDictionary.GetClientDictionaryString("#{3159}", line.UseParamB);
                        }
                    }
                }
            }
            else
            {
                m_ItemDescDynamicLabel.gameObject.SetActive(false);
            }
        }
    }

    void ShowRemainTime(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            Tab_CommonItem line = TableManager.GetCommonItemByID(item.DataID, 0);
            if (line != null)
            {
                if (line.ExistTime != -1)
                {
                    int remainSecond = (line.ExistTime * 60) - (GlobalData.ServerAnsiTime - item.CreateTime);
                    if (remainSecond > 0)
                    {
                        if (remainSecond >= 24 * 3600)
                        {
                            //m_RemainTimeLable.text = string.Format("{0}天", (int)(remainSecond / 3600 / 24));
                            m_RemainTimeLable.text = StrDictionary.GetClientDictionaryString("#{2833}", Mathf.RoundToInt((float)remainSecond / 3600.0f / 24.0f));
                        }
                        else if (remainSecond >= 60 * 60)
                        {
                            //m_RemainTimeLable.text = string.Format("{0}小时", (int)(remainSecond / 60 / 60));
                            m_RemainTimeLable.text = StrDictionary.GetClientDictionaryString("#{2834}", Mathf.RoundToInt((float)remainSecond / 60.0f / 60.0f));
                        }
                        else
                        {
                            //m_RemainTimeLable.text = string.Format("{0}小时", 1);
                            m_RemainTimeLable.text = StrDictionary.GetClientDictionaryString("#{2834}", 1);
                        }
                    }
                    else
                    {
                        //m_RemainTimeLable.text = string.Format("{0}小时", 0);
                        m_RemainTimeLable.text = StrDictionary.GetClientDictionaryString("#{2834}", 0);
                    }
                    m_RemainTimeLable.gameObject.SetActive(true);
                }
                else
                {
                    m_RemainTimeLable.gameObject.SetActive(false);
                }
            }
        }
    }

    void SetItemMaxNum(GameItem item)
    {
        if (item != null && item.IsValid())
        {
            if (null != TableManager.GetCommonItemByID(item.DataID, 0))
            {
                int nItemMaxNum = TableManager.GetCommonItemByID(item.DataID, 0).MaxStackSize;
                m_ItemMaxNumLabel.text = StrDictionary.GetClientDictionaryString("#{3320}", nItemMaxNum);
            }
        }
    }

    public void CloseWindow()
    {
        m_Item = null;
        //gameObject.SetActive(false);

        // 新手指引如果还在 直接干掉
        if (m_NewPlayerGuideFlag_Step != 0 && NewPlayerGuidLogic.Instance())
        {
            m_NewPlayerGuideFlag_Step = GlobeVar.INVALID_ID;
            NewPlayerGuidLogic.CloseWindow();
        }

        UIManager.CloseUI(UIInfo.ItemTooltipsRoot);
    }

    void ItemSell()
    {
        if (m_Item != null && m_Item.IsValid())
        {
            if (m_Item.GetQuality() >= ItemQuality.QUALITY_BLUE)
            {
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{4668}"), "", ItemSellOK, null);
            }
            else
            {
                ItemSellOK();
            }
        }
    }

    void ItemSellOK()
    {
        if (m_Item != null && m_Item.IsValid())
        {
            List<ulong> selllist = new List<ulong>();
            selllist.Add(m_Item.Guid);
            SysShopController.SellItem((int)GameItemContainer.Type.TYPE_BACKPACK, selllist);
            CloseWindow();
        }
    }

    void ItemThrow()
    {
        if (m_Item != null && m_Item.IsValid())
        {
            MessageBoxLogic.OpenOKCancelBox(3274, 1000, ItemThrowOK);
        }
    }

    void ItemThrowOK()
    {
        Games.LogicObj.Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (m_Item != null && m_Item.IsValid() && null != mainPlayer)
        {
            if (mainPlayer.CheckThrowItem(m_Item))
            {
                mainPlayer.ThrowItem(m_Item);
            }
            CloseWindow();
        }
    }

    void ItemUse()
    {
        if (m_Item != null && m_Item.IsValid())
        {
            if (m_NewPlayerGuideFlag_Step == 0)
            {
                NewPlayerGuidLogic.CloseWindow();
                m_NewPlayerGuideFlag_Step = -1;
                if (BackPackLogic.Instance())
                {
                    BackPackLogic.Instance().NewPlayerGuide(2);
                }
            }
            if (null != Singleton<ObjManager>.Instance.MainPlayer &&
                Singleton<ObjManager>.Instance.MainPlayer.CheckUseItem(m_Item))
            {
                Singleton<ObjManager>.Instance.MainPlayer.UseItem(m_Item);
            }
            if (m_Item.DataID == GlobeVar.MARRY_RING_ITEMID)
            {
                if (BackPackLogic.Instance() != null)
                {
                    BackPackLogic.Instance().CloseWindow();
                }
                if (PlayerFrameLogic.Instance() != null)
                {
                    PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
                }
            }
            CloseWindow();
        }
    }

    void ItemBatchUse()
    {
        if (m_Item != null && m_Item.IsValid())
        {
            //NumChooseController.OpenWindow(1, m_Item.StackCount, "使用", OnBatchUseNumChoose,1);
            NumChooseController.OpenWindow(1, (m_Item.StackCount > 99) ? 99 : m_Item.StackCount, StrDictionary.GetClientDictionaryString("#{2840}"), OnBatchUseNumChoose, 1, StrDictionary.GetClientDictionaryString("#{2840}"),
                StrDictionary.GetClientDictionaryString("#{3395}"), false);
        }
    }

    void OnBatchUseNumChoose(int num)
    {
        if (m_Item != null && m_Item.IsValid())
        {
            for (int i = 0; i < num && i < m_Item.StackCount; i++)
            {
                if (null != Singleton<ObjManager>.Instance.MainPlayer &&
                    Singleton<ObjManager>.Instance.MainPlayer.CheckUseItem(m_Item))
                {
                    Singleton<ObjManager>.Instance.MainPlayer.UseItem(m_Item);
                }
            }
            CloseWindow();
        }
    }

    void ItemShareLink()
    {
        if (m_Item != null && m_Item.IsValid())
        {
            ShareTargetChooseLogic.InitItemShare(m_Item);
        }
        //ShareLinkDirectChatInfo();
    }

    void PutInQianKunDai()
    {
        if (m_Item != null && m_Item.IsValid())
        {
            if (QianKunDaiLogic.Instance() != null && QianKunDaiLogic.Instance().gameObject.activeSelf)
            {
                QianKunDaiLogic.Instance().ChooseStuff(m_Item, m_curItemSlot);
            }
            CloseWindow();
        }
    }

    void Check_NewPlayerGuide()
    {
        if (BackPackLogic.Instance() != null)
        {
            int nIndex = BackPackLogic.Instance().NewPlayerGuideFlag_Step;
            if (nIndex == 1)
            {
                NewPlayerGuide(0);
                BackPackLogic.Instance().NewPlayerGuideFlag_Step = -1;
            }
        }
        else if (SysShopController.Instance() != null)
        {
            int nIndex = SysShopController.Instance().NewPlayerGuide_Step;
            if (nIndex == 1)
            {
                NewPlayerGuide(1);
                SysShopController.Instance().NewPlayerGuide_Step = -1;
            }
        }
        
    }
    public void NewPlayerGuide(int nIndex)
    {
        if (nIndex < 0)
        {
            return;
        }

        m_NewPlayerGuideFlag_Step = nIndex;
        switch (nIndex)
        {
            case 0:
                NewPlayerGuidLogic.OpenWindow(m_UseButton.gameObject, 130, 70, Utils.GetDicByID(10428), "top", 0, true, true);
                break;
            case 1:
                NewPlayerGuidLogic.OpenWindow(m_BuyBatchButton.gameObject, 130, 70, "", "right", 0, true, true);
                break;
        }
    }

    void OnBuyClick_Normal()
    {
        if (SysShopController.Instance() != null)
        {
            SysShopController.Instance().BuyCurItem();
        }
    }

    void OnBuyBatchClick_Normal()
    {
        if (SysShopController.Instance() != null)
        {
            if (m_NewPlayerGuideFlag_Step == 1)
            {
                m_NewPlayerGuideFlag_Step = -1;
                NewPlayerGuidLogic.CloseWindow();
            }
            SysShopController.Instance().BuyBatchCurItem();
        }
    }

    void OnBuyClick()
    {
        if (null != delBuyClick)
        {
            delBuyClick();
        }

    }

    void OnBuyBatchClick()
    {
        if (null != delBuyBatchClick)
        {
            delBuyBatchClick();
        }
    }

    void ShareLinkDirectChatInfo()
    {
        UIManager.ShowUI(UIInfo.ChatInfoRoot, ShowChatInfoRootOver);
    }

    void ShowChatInfoRootOver(bool bSuccess, object param)
    {
        if (m_Item != null && m_Item.IsValid())
        {
            if (bSuccess)
            {
                ChatInfoLogic.Instance().InsertItemLinkText(m_Item);
                ItemTooltipsLogic.Instance().CloseWindow();
            }
        }
    }
    //寄售行求购
    void ConsignSaleBuyBt()
    {
        UIManager.ShowUI(UIInfo.ConsignSaleRoot, BuyItemOpenConsignSale);
       
    }

    void BuyItemOpenConsignSale(bool bSuccess, object param)
    {
        if (m_Item != null && m_Item.IsValid())
        {
            if (bSuccess)
            {
                if (ConsignSaleLogic.Instance() != null)
                {
                    ConsignSaleLogic.Instance().SearchForAskBuy(m_Item.GetName());
                }
                CloseWindow();
            }
        }
    }

    void CangKuIn()
    {
        if (m_Item != null && m_Item.IsValid() && null != Singleton<ObjManager>.Instance.MainPlayer)
        {
            Singleton<ObjManager>.Instance.MainPlayer.CangKuPutIn(m_Item);
            CloseWindow();
        }
    }

    void CangKuOut()
    {
        if (m_Item != null && m_Item.IsValid() && null != Singleton<ObjManager>.Instance.MainPlayer)
        {
            Singleton<ObjManager>.Instance.MainPlayer.CangKuTakeOut(m_Item);
            CloseWindow();
        }
    }

    void AbsorbOnClick()
    {
        bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_STRENGTHENFUNCTION_OPENFLAG);
        if (bRet == false)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2182}");
            return;
        }
        UIManager.ShowUI(UIInfo.EquipStren);
        CloseWindow();
    }

	void FlowerItemUse()
	{
		if (m_Item != null && m_Item.IsValid())
		{
			if(m_Item.DataID != FriendChooseLogic.RoseDataId1)
			{
				if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING))
				{
					GUIData.AddNotifyData("#{5138}");
					return;
				}
				if (GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount() != 2)
				{
					GUIData.AddNotifyData("#{5075}");
					return;
				}
				if (GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(FriendChooseLogic.RoseDataId1) == 0)
				{
					GUIData.AddNotifyData("#{5074}");
					return;
				}
			}else
			{
				if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERFLOWER))
				{
					GUIData.AddNotifyData("#{5138}");
					return;
				}
				//如果非玩家，则无效
				if (null == TargetFrameLogic.Instance() || GlobeVar.INVALID_GUID == TargetFrameLogic.Instance().TargetGuid)
				{
					GUIData.AddNotifyData("#{5203}");
					return;
				}
			}
			UseFlowerNumChooseController.OpenWindow(1, GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(FriendChooseLogic.RoseDataId1), 
						                                        StrDictionary.GetClientDictionaryString("#{2840}"), OnFlowerUseNumChoose, 1,m_Item.GetName(),m_Item.DataID);
		}
	}

	void OnFlowerUseNumChoose(int num)
	{
		if (m_Item != null && m_Item.IsValid())
		{
			if (null != Singleton<ObjManager>.Instance.MainPlayer)
			{
				Singleton<ObjManager>.Instance.MainPlayer.UseFlowerItem(m_Item,num);
			}
			CloseWindow();
		}
	}

    void ComposeOnClick()
    {
        BackPackLogic.m_OpenWay = BackPackLogic.OPEN_WAY.MENU_BACKPACK;
        UIManager.ShowUI(UIInfo.BackPackRoot, BackPackLogic.SwitchQianKunDaiViewPutInDirectly, m_Item);
        CloseWindow();
    }
	
}
