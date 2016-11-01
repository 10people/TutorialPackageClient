using UnityEngine;
using GCGame.Table;
using GCGame;
using System.Collections;
using Games.GlobeDefine;

public class PvpShopLogic : UIControllerBase<PvpShopLogic>
{

    void Awake()
    {
        SetInstance(this);
    }

    void OnDestroy()
    {
        SetInstance(null);
    }
    void OnEnable()
    {
        _clear();
        setJiFen();
		sendOpenToServer ();
    }
    //=============================================
    public UIGrid m_GridRoot;
    public UIGrid m_GridItemList;
    public pvpItemLogic m_PvpItemLogic;

    public GameObject m_BuyContext;
    public UILabel m_BuyItemName;
    public UILabel m_BuyItemCount;
    public UILabel m_BuyItemPrice;
    public UILabel m_JiFenNum;
    public UILabel m_TimeLable;
    //=============================================
    private int m_RealPvpBlock = GlobeVar.INVALID_ID;
    private int m_BuyItemNum = 1;
    private int m_BuyPvpId = GlobeVar.INVALID_ID; 
    //private Dictionary <int,>

    private void _clear()
    {
        m_RealPvpBlock = GlobeVar.INVALID_ID;
        m_BuyItemNum = 1;
        m_BuyPvpId = GlobeVar.INVALID_ID;
        m_BuyContext.SetActive(false);
        GameManager.gameManager.PlayerDataPool.ClearPvpShopItemBuyNum();
        _clearGrid();
    }

    private void _clearGrid()
    {
        if (null == m_GridRoot)
        {
            return;
        }
        for (int i = 0, count = m_GridRoot.transform.childCount; i < count; i++)
        {
            Utils.CleanGrid(m_GridRoot.transform.GetChild(i).gameObject);
        }

        Utils.CleanGrid(m_GridRoot.gameObject);
    }

    public void initPvpShop(int blockId )
    {
        m_RealPvpBlock = blockId;
        _init();
    }
    private void _init()
    {
        if (m_RealPvpBlock == GlobeVar.INVALID_ID)
            return;

        _clearGrid();
        m_PvpItemLogic.gameObject.SetActive(true);
        m_GridItemList.transform.parent.gameObject.SetActive(true);
        int count = 0;
        int page = 0;
        for (int i = 0; i < TableManager.GetPvpShop().Count; ++i)
        {
            Tab_PvpShop tab = TableManager.GetPvpShopByID(i, 0);
			if( tab != null &&  tab.Block == m_RealPvpBlock )
			{
                if (m_PvpItemLogic != null)
                {
                    Tab_CommonItem Tab_CommonItem = TableManager.GetCommonItemByID(tab.ItemId, 0);
                    if (Tab_CommonItem != null)
                    {
                        if (GameManager.gameManager.PlayerDataPool.PvpShopItemBuyNum.ContainsKey(tab.ItemId))
                        {
                            count += 1;

                            GameObject obj = Utils.BindObjToParent(m_PvpItemLogic.gameObject,m_GridItemList.gameObject,tab.Index.ToString());
                            obj.GetComponent<pvpItemLogic>().setPvpItemData(Tab_CommonItem.Name, tab.ItemCount, tab.MoneyCount, Tab_CommonItem.Icon, GameManager.gameManager.PlayerDataPool.PvpShopItemBuyNum[tab.ItemId], tab.Index, m_RealPvpBlock, Tab_CommonItem.Quality);
                        }
                    }
                }
			}

            if (count >= 6 || (count > 0 && i + 1 >= TableManager.GetPvpShop().Count))
            {
                page += 1;
                GameObject temObj = Utils.BindObjToParent(m_GridItemList.transform.parent.gameObject, m_GridRoot.gameObject, page.ToString());
				Utils.CleanGrid(m_GridItemList.gameObject);
                count = 0;
            }
        }
     
		m_PvpItemLogic.gameObject.SetActive(false);
        m_GridItemList.transform.parent.gameObject.SetActive(false);
		m_GridRoot.repositionNow = true;
        m_GridRoot.GetComponent<UICenterOnChild>().onCenterFinished = SetPagNum;
        m_GridRoot.GetComponent<UICenterOnChild>().Recenter();
    }
    private void sendOpenToServer()
    {
        CG_PVPSHOP_OPEN pak = (CG_PVPSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PVPSHOP_OPEN);
        pak.ObjID = 1;
        pak.SendPacket();
      
    }
    //====================================================================
    public void setJiFen()
    {
        m_JiFenNum.text = PVPData.PVPJiFen.ToString();
    }
    public void BuyItem( int pvpshopId,int money)
    {
        Tab_PvpShop tabPvp = TableManager.GetPvpShopByID(pvpshopId,0);
        if (tabPvp == null)
            return;

        Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(tabPvp.ItemId, 0);
        if (tabCommonItem == null)
            return;
        //add 修复取消后，在此打开显示购买数量为0的问题
        if (m_BuyItemNum < 1)
        {
            m_BuyItemNum = 1;
        }
        m_BuyPvpId = pvpshopId;
        m_BuyItemName.text = tabCommonItem.Name;
        m_BuyItemCount.text = m_BuyItemNum.ToString();
        m_BuyItemPrice.text = money.ToString();
        m_BuyContext.SetActive(true);

    }
    //减少购买物品WW
    void onClickSubBuyItem()
    {
        Tab_PvpShop tabPvp = TableManager.GetPvpShopByID(m_BuyPvpId, 0);
        if (tabPvp == null)
            return;

        Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(tabPvp.ItemId, 0);
        if (tabCommonItem == null)
            return;

        if (m_BuyItemNum - 1 > 0)
        {
            int cellprice = 0;
            if (m_BuyItemNum == 0)
                cellprice = int.Parse(m_BuyItemPrice.text);
            else
                cellprice = int.Parse(m_BuyItemPrice.text) / m_BuyItemNum;
            
            m_BuyItemNum -= 1;
            m_BuyItemCount.text = m_BuyItemNum.ToString();
            m_BuyItemPrice.text = (m_BuyItemNum * cellprice).ToString();
        }
    }
    // 增加购买物品
    void onClickBuyAddItem()
    {
        Tab_PvpShop tabPvp = TableManager.GetPvpShopByID(m_BuyPvpId, 0);
        if (tabPvp == null)
            return;

        Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(tabPvp.ItemId, 0);
        if (tabCommonItem == null)
            return;

        //int count = GameManager.gameManager.PlayerDataPool.PvpShopItemBuyNum[tabPvp.ItemId];
        if (GameManager.gameManager.PlayerDataPool.PvpShopItemBuyNum.ContainsKey(tabPvp.ItemId))
        {
            if (m_BuyItemNum + 1 <= GameManager.gameManager.PlayerDataPool.PvpShopItemBuyNum[tabPvp.ItemId])
            {
                int cellprice = 0;
                if (m_BuyItemNum == 0)
                    cellprice = int.Parse(m_BuyItemPrice.text);
                else
                    cellprice = int.Parse(m_BuyItemPrice.text) / m_BuyItemNum;

                m_BuyItemNum += 1;
                m_BuyItemCount.text = m_BuyItemNum.ToString();
                m_BuyItemPrice.text = (cellprice * m_BuyItemNum).ToString();
            }
        }
    }
    // 购买
    void OnClickBuyItem( )
    {
        CG_PVPSHOP_BUY pak = (CG_PVPSHOP_BUY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PVPSHOP_BUY);
        pak.ITEMID = m_BuyPvpId;
        pak.ITEMCOUNT = m_BuyItemNum;
        pak.SendPacket();
    }
    // 取消购买
    public void OnClickCancelBuyItem()
    {
        m_BuyContext.SetActive(false);
        m_BuyItemNum = 0;
    }

    // 刷新
   void onClickBrush()
    {
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (_playerData != null)
        {
            if (_playerData.PVPDATATime <= 0)
            {
                _clear();

                CG_PVPSHOP_BRUSH pak = (CG_PVPSHOP_BRUSH)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PVPSHOP_BRUSH);
                pak.ObjID = 1;
                pak.SendPacket();
            }
        }
    }
	public void close()
	{
		UIManager.CloseUI (UIInfo.PvPShopRoot);
        //add 关闭pvpShop的时候，打开竞技场界面 gzq
        if (NewFunctionLogic.Instance() != null)
        {
            ActivityController.RequireOpenPVPTab();
            NewFunctionLogic.Instance().OpenActivityWithIndex(3);
        }
	}
    public void showBrushTime()
    {
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (_playerData != null)
        {
            if (_playerData.PVPDATATime > 0)
            {
                m_TimeLable.text = ((int)_playerData.PVPDATATime / 60).ToString() + ":" + ((int)_playerData.PVPDATATime % 60);
            }
            else
            {
                m_TimeLable.text = StrDictionary.GetClientDictionaryString("#{10988}");
            }
        }
    }
    public UILabel m_PageNum;
    public void SetPagNum(GameObject obj)
    {
        m_PageNum.text = obj.name + "/" + m_GridRoot.transform.GetChildCount().ToString();
    }

    public  void _Update()
    {
        if (m_RealPvpBlock == GlobeVar.INVALID_ID)
            return;

        _clearGrid();
        m_PvpItemLogic.gameObject.SetActive(true);
        m_GridItemList.transform.parent.gameObject.SetActive(true);
        int count = 0;
        int page = 0;
        for (int i = 0; i < TableManager.GetPvpShop().Count; ++i)
        {
            Tab_PvpShop tab = TableManager.GetPvpShopByID(i, 0);
            if (tab != null && tab.Block == m_RealPvpBlock)
            {
                if (m_PvpItemLogic != null)
                {
                    Tab_CommonItem Tab_CommonItem = TableManager.GetCommonItemByID(tab.ItemId, 0);
                    if (Tab_CommonItem != null)
                    {
                        if (GameManager.gameManager.PlayerDataPool.PvpShopItemBuyNum.ContainsKey(tab.ItemId))
                        {
                            count += 1;

                            GameObject obj = Utils.BindObjToParent(m_PvpItemLogic.gameObject, m_GridItemList.gameObject, tab.Index.ToString());
                            obj.GetComponent<pvpItemLogic>().setPvpItemData(Tab_CommonItem.Name, tab.ItemCount, tab.MoneyCount, Tab_CommonItem.Icon, GameManager.gameManager.PlayerDataPool.PvpShopItemBuyNum[tab.ItemId], tab.Index, m_RealPvpBlock, Tab_CommonItem.Quality);
                        }
                    }
                }
            }

            if (count >= 6 || (count > 0 && i + 1 >= TableManager.GetPvpShop().Count))
            {
                page += 1;
                GameObject temObj = Utils.BindObjToParent(m_GridItemList.transform.parent.gameObject, m_GridRoot.gameObject, page.ToString());
                Utils.CleanGrid(m_GridItemList.gameObject);
                count = 0;
            }
        }

        m_PvpItemLogic.gameObject.SetActive(false);
        m_GridItemList.transform.parent.gameObject.SetActive(false);
        m_GridRoot.repositionNow = true;
        m_GridRoot.GetComponent<UICenterOnChild>().onCenterFinished = SetPagNum;
        m_GridRoot.GetComponent<UICenterOnChild>().Recenter();

        GUIData.AddNotifyData("#{2135}");
    }
}
