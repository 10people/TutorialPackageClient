using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using GCGame;
using Games.GlobeDefine;
using GCGame.Table;
using Games.YuanBaoShopData;

public class PresentRootLogic : UIControllerBase<PresentRootLogic>
{
    public enum TAB_INDEX
    {
        TAB_INVALID      = -1,
        TAB_PRESENT      = 0,
        TAB_WAITPAY      = 1,
        TAB_SHOPPINGCART = 2,
    }

    public TabController m_TabController;
    public UIGrid m_TabGrid;
    public GameObject m_WaitPayTab;
    public GameObject m_PresentTab;
    public GameObject m_ShoppingCartTab;
    public GameObject m_FriendInfoGrid;
    public GameObject m_ShoppingListGrid;
    public GameObject m_PresentFriendItem;
    public GameObject m_ShoppingListItem;
    public UILabel m_FriendNameLabel;
    public GameObject m_ShoppingCartInfo;
    public UILabel m_ShoppingCartTimeLabel;
    public UILabel m_ShoppingCartCountLabel;
    public GameObject m_FriendRecordInfo;
    public UILabel m_FriendRecordCountLabel;
    public GameObject m_RecordRoot;
    public GameObject m_PresentRuleLabel;
    public PresentConfirmLogic m_PresentConfirm;
    public GameObject m_NoFriendsLabel;

    public GameObject m_PresentButton;
    public GameObject m_WaitPayButton;
    public GameObject m_PayButton;
    public GameObject m_RefuseButton;
    public GameObject m_ReceiveButton;    

    private TAB_INDEX m_CurTab = TAB_INDEX.TAB_INVALID;
    private UInt64 m_ChooseFriendGuid = GlobeVar.INVALID_GUID;
    private string m_ChooseFriendName = "";
    private UInt64 m_ChooseShoppingListGuid = GlobeVar.INVALID_GUID;
    private bool m_IsOpenWithAddGoods = false;

    void Awake()
    {
        SetInstance(this);

        m_TabController.delTabChanged = TabOnClick;
    }

    public static void OpenWithTab(TAB_INDEX tab)
    {
        List<object> initparam = new List<object>();
        initparam.Add(tab);
        UIManager.ShowUI(UIInfo.PresentRoot, OnOpenWithTab, initparam);
    }

    public static void OnOpenWithTab(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            List<object> initparam = param as List<object>;
            if (PresentRootLogic.Instance() != null)
            {
                if (initparam.Count == 1)
                {
                    TAB_INDEX tab = (TAB_INDEX)initparam[0];
                    if (tab == TAB_INDEX.TAB_INVALID)
                    {
                        PresentRootLogic.Instance().UpdateTabShow();
                    }
                    else
                    {
                        PresentRootLogic.Instance().UpdateTabShow(false);
                        PresentRootLogic.Instance().m_TabController.ChangeTab(ConvertTabIndexToString(tab));
                        if (tab == TAB_INDEX.TAB_SHOPPINGCART)
                        {
                            PresentRootLogic.Instance().m_IsOpenWithAddGoods = true;
                        }
                    }
                }
            }
        }
    }

	// Use this for initialization
	void Start () {
        m_FriendNameLabel.text = StrDictionary.GetClientDictionaryString("#{4752}");
        m_RecordRoot.SetActive(true);
        m_PresentRuleLabel.SetActive(false);
	}

    void OnDestroy()
    {
        SetInstance(null);
    }

    public static string ConvertTabIndexToString(TAB_INDEX tab)
    {
        if (tab == TAB_INDEX.TAB_WAITPAY)
        {
            return "Tab1-WaitPay";
        }
        else if (tab == TAB_INDEX.TAB_PRESENT)
        {
            return "Tab2-Present";
        }
        else if (tab == TAB_INDEX.TAB_SHOPPINGCART)
        {
            return "Tab3-ShoppingCart";
        }
        return "";
    }

    void TabOnClick(TabButton value)
    {
        if (value.name == "Tab1-WaitPay")
        {
            if (!m_WaitPayTab.activeSelf)
            {
                return;
            }
            UpdateTabInfo(TAB_INDEX.TAB_WAITPAY);
        }
        else if (value.name == "Tab2-Present")
        {
            if (!m_PresentTab.activeSelf)
            {
                return;
            }
            UpdateTabInfo(TAB_INDEX.TAB_PRESENT);
        }
        else if (value.name == "Tab3-ShoppingCart")
        {
            if (!m_ShoppingCartTab.activeSelf)
            {
                return;
            }
            UpdateTabInfo(TAB_INDEX.TAB_SHOPPINGCART);
        }
    }

    void UpdateTabInfo(TAB_INDEX tab)
    {
        TAB_INDEX preTab = m_CurTab;

        m_CurTab = tab;
        if (m_CurTab == TAB_INDEX.TAB_INVALID)
        {
            return;
        }

        if (preTab != tab)
        {
            UpdateFriendInfo();
        }        
        UpdateShoppingListInfo();
        UpdateButtonInfo();
    }

    public void UpdateTabShow(bool forcechange = true)
    {
        m_WaitPayTab.SetActive(GameManager.gameManager.PlayerDataPool.WaitPayRecord.GetRecordCount() > 0);
        m_PresentTab.SetActive(GameManager.gameManager.PlayerDataPool.PresentRecord.GetRecordCount() > 0);
        m_ShoppingCartTab.SetActive(GameManager.gameManager.PlayerDataPool.ShoppingCart.IsInCountDown());

        m_TabGrid.Reposition();

        if (forcechange)
        {
            ForceChangeTab();
        }        
    }

    void ForceChangeTab()
    {
        if (m_CurTab == TAB_INDEX.TAB_INVALID)
        {
            if (m_WaitPayTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_WAITPAY));
            }
            else if (m_PresentTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_PRESENT));
            }
            else if (m_ShoppingCartTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_SHOPPINGCART));
            }
            else
            {
                UIManager.CloseUI(UIInfo.PresentRoot);
            }
            
        }
        else if (m_CurTab == TAB_INDEX.TAB_WAITPAY && false == m_WaitPayTab.activeSelf)
        {
            if (m_PresentTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_PRESENT));
            }
            else if (m_ShoppingCartTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_SHOPPINGCART));
            }
            else
            {
                UIManager.CloseUI(UIInfo.PresentRoot);
            }
        }
        else if (m_CurTab == TAB_INDEX.TAB_PRESENT && false == m_PresentTab.activeSelf)
        {
            if (m_WaitPayTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_WAITPAY));
            }
            else if (m_ShoppingCartTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_SHOPPINGCART));
            }
            else
            {
                UIManager.CloseUI(UIInfo.PresentRoot);
            }
        }
        else if (m_CurTab == TAB_INDEX.TAB_SHOPPINGCART && false == m_ShoppingCartTab.activeSelf)
        {
            if (m_WaitPayTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_WAITPAY));
            }
            if (m_PresentTab.activeSelf)
            {
                m_TabController.ChangeTab(ConvertTabIndexToString(TAB_INDEX.TAB_PRESENT));
            }
            else
            {
                UIManager.CloseUI(UIInfo.PresentRoot);
            }
        }
        else
        {
            // 前面的if都没进 表示当前页面没关闭 还有内容 刷新信息
            UpdateTabInfo(m_CurTab);
        }
    }

    void UpdateFriendInfo()
    {
        Utils.CleanGrid(m_FriendInfoGrid);

        CleanUp();

        if (m_CurTab == TAB_INDEX.TAB_WAITPAY)
        {            
            UpdateFriendInfo_PresentWaitPay(GameManager.gameManager.PlayerDataPool.WaitPayRecord);
        }
        else if (m_CurTab == TAB_INDEX.TAB_PRESENT)
        {
            UpdateFriendInfo_PresentWaitPay(GameManager.gameManager.PlayerDataPool.PresentRecord);
        }
        else if (m_CurTab == TAB_INDEX.TAB_SHOPPINGCART)
        {
            if (GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList.Count <= 0)
            {
                m_NoFriendsLabel.SetActive(true);
            }
            else
            {
                m_NoFriendsLabel.SetActive(false);

                int index = 0;
                // 先加载在线的 再加载离线的
                foreach (KeyValuePair<UInt64, Relation> relation in GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList)
                {
                    string itemName = index < 10 ? ("0" + index.ToString()) : (index.ToString());
                    if (relation.Value.State == (int)CharacterDefine.RELATION_TYPE.ONLINE)
                    {
                        GameObject item = Utils.BindObjToParent(m_PresentFriendItem, m_FriendInfoGrid, itemName);
                        if (item == null)
                        {
                            continue;
                        }

                        if (item.GetComponent<PresentFriendItem>() != null)
                        {
                            item.GetComponent<PresentFriendItem>().InitOnCartTab(relation.Value.Guid, relation.Value.Name);
                        }
                    }

                    index += 1;
                }

                foreach (KeyValuePair<UInt64, Relation> relation in GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList)
                {
                    string itemName = index < 10 ? ("0" + index.ToString()) : (index.ToString());
                    if (relation.Value.State == (int)CharacterDefine.RELATION_TYPE.OFFLINE)
                    {
                        GameObject item = Utils.BindObjToParent(m_PresentFriendItem, m_FriendInfoGrid, itemName);
                        if (item == null)
                        {
                            continue;
                        }

                        if (item.GetComponent<PresentFriendItem>() != null)
                        {
                            item.GetComponent<PresentFriendItem>().InitOnCartTab(relation.Value.Guid, relation.Value.Name);
                        }
                    }

                    index += 1;
                }
            }
        }

        m_FriendInfoGrid.GetComponent<UIGrid>().Reposition();
    }

    void UpdateFriendInfo_PresentWaitPay(ShoppingListRecord shoppinglistrecord)
    {        
        foreach (KeyValuePair<UInt64, ShoppingList> pair in shoppinglistrecord.Record)
        {
            if (false == pair.Value.IsValid())
            {
                continue;
            }

            GameObject item = Utils.BindObjToParent(m_PresentFriendItem, m_FriendInfoGrid, pair.Value.GetRemainTime().ToString());
            if (item == null)
            {
                continue;
            }

            if (item.GetComponent<PresentFriendItem>() != null)
            {
                item.GetComponent<PresentFriendItem>().InitOnPresentWaitPayTab(pair.Value, m_CurTab);
                if (m_ChooseShoppingListGuid == GlobeVar.INVALID_GUID)
                {
                    m_ChooseShoppingListGuid = pair.Key;
                }
            }
        }
    }

    void UpdateShoppingListInfo()
    {
        Utils.CleanGrid(m_ShoppingListGrid);

        if (m_CurTab == TAB_INDEX.TAB_WAITPAY)
        {           
            m_ShoppingCartInfo.SetActive(false);

            m_FriendRecordInfo.SetActive(true);
            UpdateFriendRecordInfo(GameManager.gameManager.PlayerDataPool.WaitPayRecord);

            UpdateShoppingListInfo_PresentWaitPay(GameManager.gameManager.PlayerDataPool.WaitPayRecord);
        }
        else if (m_CurTab == TAB_INDEX.TAB_PRESENT)
        {
            m_ShoppingCartInfo.SetActive(false);

            m_FriendRecordInfo.SetActive(true);
            UpdateFriendRecordInfo(GameManager.gameManager.PlayerDataPool.PresentRecord);

            UpdateShoppingListInfo_PresentWaitPay(GameManager.gameManager.PlayerDataPool.PresentRecord);
        }
        else if (m_CurTab == TAB_INDEX.TAB_SHOPPINGCART)
        {
            m_ShoppingCartInfo.SetActive(true);
            UpdateShoppingCartInfo();

            m_FriendRecordInfo.SetActive(false);

            ShoppingCart playerCart = GameManager.gameManager.PlayerDataPool.ShoppingCart;
            for (int i = 0; i < playerCart.GoodsInfo.Count; i++ )
            {
                if (playerCart.GoodsInfo[i].GoodsId == GlobeVar.INVALID_ID || playerCart.GoodsInfo[i].GoodsCount == GlobeVar.INVALID_ID)
                {
                    break;
                }

                string itemName = i < 10 ? ("0" + i.ToString()) : (i.ToString());
                GameObject item = Utils.BindObjToParent(m_ShoppingListItem, m_ShoppingListGrid, itemName);
                if (item == null)
                {
                    continue;
                }

                if (item.GetComponent<ShoppingListItem>() != null)
                {
                    item.GetComponent<ShoppingListItem>().Init(playerCart.GoodsInfo[i].GoodsId, playerCart.GoodsInfo[i].GoodsCount, m_CurTab, i);
                }
            }         
        }

        m_ShoppingListGrid.GetComponent<UIGrid>().Reposition();
    }

    void UpdateShoppingListInfo_PresentWaitPay(ShoppingListRecord shoppinglistrecord)
    {
        ShoppingList shoppinglist = shoppinglistrecord.GetShoppingList(m_ChooseShoppingListGuid);
        if (shoppinglist != null)
        {
            for (int i = 0; i < shoppinglist.GoodsID.Length && i < shoppinglist.GoodsCount.Length; i++)
            {
                if (shoppinglist.GoodsID[i] == GlobeVar.INVALID_ID || shoppinglist.GoodsCount[i] == GlobeVar.INVALID_ID)
                {
                    break;
                }

                GameObject item = Utils.BindObjToParent(m_ShoppingListItem, m_ShoppingListGrid, i.ToString());
                if (item == null)
                {
                    continue;
                }

                if (item.GetComponent<ShoppingListItem>() != null)
                {
                    item.GetComponent<ShoppingListItem>().Init(shoppinglist.GoodsID[i], shoppinglist.GoodsCount[i], m_CurTab);
                }
            }
        }
    }

    void UpdateFriendRecordInfo(ShoppingListRecord shoppinglistrecord)
    {
        m_FriendRecordCountLabel.text = StrDictionary.GetClientDictionaryString("#{4796}", shoppinglistrecord.GetRecordCount(), shoppinglistrecord.MaxCount);
    }

    void UpdateShoppingCartInfo()
    {
        ShoppingCart playerCart = GameManager.gameManager.PlayerDataPool.ShoppingCart;
        if (playerCart.IsInCountDown())
        {
            m_ShoppingCartTimeLabel.text = StrDictionary.GetClientDictionaryString("#{4753}", playerCart.GetRemainTime() / 3600);
        }
        else
        {
            m_ShoppingCartTimeLabel.text = "";
        }
        m_ShoppingCartCountLabel.text = StrDictionary.GetClientDictionaryString("#{4754}", playerCart.GoodsInfo.Count);
    }

    void UpdateButtonInfo()
    {
        if (m_CurTab == TAB_INDEX.TAB_WAITPAY)
        {
            m_PresentButton.SetActive(false);
            m_WaitPayButton.SetActive(false);
            m_PayButton.SetActive(true);
            m_RefuseButton.SetActive(true);
            m_ReceiveButton.SetActive(false); 
        }
        else if (m_CurTab == TAB_INDEX.TAB_PRESENT)
        {
            m_PresentButton.SetActive(false);
            m_WaitPayButton.SetActive(false);
            m_PayButton.SetActive(false);
            m_RefuseButton.SetActive(false);
            m_ReceiveButton.SetActive(true); 
        }
        else if (m_CurTab == TAB_INDEX.TAB_SHOPPINGCART)
        {
            m_PresentButton.SetActive(true);
            m_WaitPayButton.SetActive(true);
            m_PayButton.SetActive(false);
            m_RefuseButton.SetActive(false);
            m_ReceiveButton.SetActive(false); 
        }
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.PresentRoot);
        if (m_IsOpenWithAddGoods)
        {
            UIManager.ShowUI(UIInfo.YuanBaoShop);
            m_IsOpenWithAddGoods = false;
        }
    }

    public void OnDelFromShoppingCart(int goodsindex)
    {
        if (m_CurTab != TAB_INDEX.TAB_SHOPPINGCART)
        {
            return;
        }

        GameManager.gameManager.PlayerDataPool.ShoppingCart.DelGoods(goodsindex);

        UpdateShoppingListInfo();
    }

    public void OnChooseFriend(UInt64 guid, string name)
    {
        if (m_CurTab != TAB_INDEX.TAB_SHOPPINGCART)
        {
            return;
        }

        m_ChooseFriendGuid = guid;
        m_ChooseFriendName = name;

        m_FriendNameLabel.text = name;
    }

    public void OnChooseShoppingList(UInt64 shoppinglistguid)
    {
        if (m_CurTab == TAB_INDEX.TAB_SHOPPINGCART)
        {
            return;
        }

        m_ChooseShoppingListGuid = shoppinglistguid;

        UpdateShoppingListInfo();
    }

    void ShowPresentRule()
    {
        m_RecordRoot.SetActive(!m_RecordRoot.activeSelf);
        m_PresentRuleLabel.SetActive(!m_PresentRuleLabel.activeSelf);
    }

    void PresentOnClick()
    {
        if (m_ChooseFriendName == "")
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{4888}");
            return;
        }

        m_PresentConfirm.Confirm_ShoppingCart(PresentConfirmLogic.SHOW_TYPE.TYPE_PRESENT, m_ChooseFriendGuid, m_ChooseFriendName);
    }

    void WaitPayOnClick()
    {
        if (m_ChooseFriendName == "")
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{4888}");
            return;
        }

        m_PresentConfirm.Confirm_ShoppingCart(PresentConfirmLogic.SHOW_TYPE.TYPE_WAITPAY, m_ChooseFriendGuid, m_ChooseFriendName);
    }

    void PayOnClick()
    {
        string sendername = GameManager.gameManager.PlayerDataPool.WaitPayRecord.GetSenderName(m_ChooseShoppingListGuid);
        if (sendername == "")
        {
            return;
        }

        m_PresentConfirm.Confirm_PayWaitPay(PresentConfirmLogic.SHOW_TYPE.TYPE_PAY, sendername, m_ChooseShoppingListGuid);
    }

    void RefuseOnClick()
    {
        CG_REFUSE_SHOPPINGLIST_WAITPAY packet = (CG_REFUSE_SHOPPINGLIST_WAITPAY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REFUSE_SHOPPINGLIST_WAITPAY);
        packet.Guid = m_ChooseShoppingListGuid;
        packet.SendPacket();

        CleanUp();
    }

    void ReceiveOnClick()
    {
        CG_RECEIVE_SHOPPINGLIST_PRESENT packet = (CG_RECEIVE_SHOPPINGLIST_PRESENT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_RECEIVE_SHOPPINGLIST_PRESENT);
        packet.Guid = m_ChooseShoppingListGuid;
        packet.SendPacket();

        CleanUp();
    }

    public void CleanUp()
    {
        m_ChooseFriendGuid = GlobeVar.INVALID_GUID;
        m_ChooseFriendName = "";
        m_ChooseShoppingListGuid = GlobeVar.INVALID_GUID;
        m_FriendNameLabel.text = StrDictionary.GetClientDictionaryString("#{4752}");
    }
}
