/********************************************************************
	filename:	ShoppingCart.cs
	date:		2014-12-4 
	author:		王喆
	purpose:	购物车
*********************************************************************/

using System;
using Games.GlobeDefine;
using GCGame;
using System.Collections.Generic;
using GCGame.Table;

namespace Games.YuanBaoShopData
{
    public class ShoppingCartItem
    {
        private int m_GoodsId;
        public int GoodsId
        {
            get { return m_GoodsId; }
            set { m_GoodsId = value; }
        }

        private int m_GoodsCount;
        public int GoodsCount
        {
            get { return m_GoodsCount; }
            set { m_GoodsCount = value; }
        }

        public ShoppingCartItem(int goodsid, int count)
        {
            m_GoodsId = goodsid;
            m_GoodsCount = count;
        }

        public void CleanUp()
        {
            m_GoodsId = GlobeVar.INVALID_ID;
            m_GoodsCount = GlobeVar.INVALID_ID;
        }

        public void Init(int goodsid, int count)
        {
            m_GoodsId = goodsid;
            m_GoodsCount = count;
        }
    }
    
    public class ShoppingCart
    {
        public enum SUBMIT_TYPE
        {
            TYPE_PRESENT = 0,
            TYPE_WAITPAY = 1,
        }

        public ShoppingCart()
        {
            CleanUp();
        }

        public void CleanUp()
        {
            m_GoodsInfo.Clear();
            m_CreateTime = GlobeVar.INVALID_ID;
        }

        public bool IsCanAdd(int goodsid, int count)
        {
            Tab_YuanBaoShop tabGoods = TableManager.GetYuanBaoShopByID(goodsid, 0);
            if (tabGoods== null || tabGoods.ItemType != (int)YuanBaoShopItemLogic.ITEM_TYPE.TYPE_ITEM)
            {
                return false;
            }

            if (tabGoods.Num < 0)
            {
                return false;
            }

            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(tabGoods.ItemID, 0);
            if (tabItem == null)
            {
                return false;
            }

            if (count * tabGoods.Num > tabItem.MaxStorageCount)
            {
                return false;
            }

            int nNeedSlot = GlobeVar.INVALID_ID;

            bool bAdd = false;
            int nRemainCount = count;
            for (int i = 0; i < m_GoodsInfo.Count; i++ )
            {
                if (nRemainCount == 0)
                {
                    break;
                }

                if (m_GoodsInfo[i].GoodsId == goodsid)
                {
                    if (tabGoods.Num * (m_GoodsInfo[i].GoodsCount + count) <= tabItem.MaxStackSize)
                    {
                        nRemainCount -= count;
                        nNeedSlot = 0;
                    }
                    else
                    {
                        int preAdd = tabItem.MaxStackSize / tabGoods.Num - m_GoodsInfo[i].GoodsCount;
                        nRemainCount -= preAdd;
                    }
                    bAdd = true;
                }
            }

            if (false == bAdd || nRemainCount > 0)
            {
                nNeedSlot = (int)Math.Ceiling((float)nRemainCount / (float)(tabItem.MaxStackSize / tabGoods.Num));
            }
            nRemainCount = 0;

            return nNeedSlot != GlobeVar.INVALID_ID && 
                nNeedSlot <= GlobeVar.SHOPPINGLIST_GOODSMAX - m_GoodsInfo.Count;
        }

        public bool IsInCountDown()
        {
            return m_CreateTime != GlobeVar.INVALID_ID/* && GetRemainTime() > 0*/;
        }

        public void AddGoods(int goodsid, int count)
        {
            if (goodsid == GlobeVar.INVALID_ID)
            {
                return;
            }

            if (false == IsCanAdd(goodsid, count))
            {
                return;
            }

            Tab_YuanBaoShop tabGoods = TableManager.GetYuanBaoShopByID(goodsid, 0);
            if (tabGoods == null || tabGoods.ItemType != (int)YuanBaoShopItemLogic.ITEM_TYPE.TYPE_ITEM)
            {
                return;
            }

            if (tabGoods.Num < 0)
            {
                return;
            }

            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(tabGoods.ItemID, 0);
            if (tabItem == null)
            {
                return;
            }

            if (false == IsInCountDown())
            {
                m_CreateTime = GlobalData.ServerAnsiTime;
            }

            bool bAdd = false;
            int nRemainCount = count;
            for (int i = 0; i < m_GoodsInfo.Count; i++ )
            {
                if (nRemainCount == 0)
                {
                    break;
                }

                if (m_GoodsInfo[i].GoodsId == goodsid)
                {
                    if (tabGoods.Num * (m_GoodsInfo[i].GoodsCount + count) <= tabItem.MaxStackSize)
                    {
                        int precount = m_GoodsInfo[i].GoodsCount;
                        m_GoodsInfo[i].Init(goodsid, precount + count);
                        nRemainCount -= count;
                    }
                    else
                    {
                        int precount = m_GoodsInfo[i].GoodsCount;
                        int preAdd = tabItem.MaxStackSize / tabGoods.Num - precount;
                        m_GoodsInfo[i].Init(goodsid, precount + preAdd);
                        nRemainCount -= preAdd;
                    }
                    bAdd = true;
                }
            }

            if (false == bAdd || nRemainCount > 0)
            {
                for (int i = 0; i < GlobeVar.SHOPPINGLIST_GOODSMAX; i++)
                {
                    if (nRemainCount > tabItem.MaxStackSize / tabGoods.Num)
                    {
                        m_GoodsInfo.Add(new ShoppingCartItem(goodsid, tabItem.MaxStackSize / tabGoods.Num));
                        nRemainCount -= tabItem.MaxStackSize / tabGoods.Num;
                    }
                    else
                    {
                        m_GoodsInfo.Add(new ShoppingCartItem(goodsid, nRemainCount));
                        break;
                    }
                }
            }
            nRemainCount = 0;

            WriteShoppingCartInfo();
        }

        public void DelGoods(int goodsindex)
        {
            if (goodsindex < 0 || goodsindex >= m_GoodsInfo.Count)
            {
                return;
            }

            if (m_GoodsInfo.Count <= 0)
            {
                return;
            }

            m_GoodsInfo.RemoveAt(goodsindex);

            if (m_GoodsInfo.Count == 0)
            {
                m_CreateTime = GlobeVar.INVALID_ID;
            }

            WriteShoppingCartInfo();

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }
        }

        public void TickCountDown()
        {
            if (IsInCountDown())
            {
                if (GlobalData.ServerAnsiTime - m_CreateTime >= 24 * 3600)
                {
                    CleanUp();
                    WriteShoppingCartInfo();
                }
            }
        }

        public void WriteShoppingCartInfo()
        {
            if (Singleton<ObjManager>.Instance.MainPlayer != null)
            {
                UserConfigData.AddShoppingCartInfo(Singleton<ObjManager>.Instance.MainPlayer.GUID.ToString(), this);
            }            
        }

        public void ReadShoppingCartInfo()
        {
            if (Singleton<ObjManager>.Instance.MainPlayer != null)
            {
                UInt64 guid = Singleton<ObjManager>.Instance.MainPlayer.GUID;
                Dictionary<string, ShoppingCart> playerAllShoppingCart = UserConfigData.GetShoppingCartInfo();
                if (playerAllShoppingCart.ContainsKey(guid.ToString()))
                {
                    ShoppingCart shoppingcart = UserConfigData.GetShoppingCartInfo()[guid.ToString()];
                    m_CreateTime = shoppingcart.CreateTime;
                    for (int i = 0; i < shoppingcart.GoodsInfo.Count; i++ )
                    {
                        m_GoodsInfo.Add(new ShoppingCartItem(shoppingcart.GoodsInfo[i].GoodsId, shoppingcart.GoodsInfo[i].GoodsCount));
                    }
                    TickCountDown();
                } 
            }
        }

        // 购物车剩余时间 单位秒
        public int GetRemainTime()
        {
            return ShoppingCartLife - (GlobalData.ServerAnsiTime - m_CreateTime);
        }

        public int GetCostYuanBao()
        {
            int cost = 0;
            for (int i = 0; i < m_GoodsInfo.Count; i++ )
            {
                if (m_GoodsInfo[i].GoodsId == GlobeVar.INVALID_ID || m_GoodsInfo[i].GoodsCount == GlobeVar.INVALID_ID)
                {
                    break;
                }

                Tab_YuanBaoShop tabGood = TableManager.GetYuanBaoShopByID(m_GoodsInfo[i].GoodsId, 0);
                if (tabGood == null)
                {
                    break;
                }

                cost += tabGood.PriceForever * m_GoodsInfo[i].GoodsCount;
            }
            
            return cost;
        }

        public void Submit(UInt64 receiver, string name, SUBMIT_TYPE type)
        {
            if (receiver == GlobeVar.INVALID_GUID)
            {
                return;
            }

            if (type == SUBMIT_TYPE.TYPE_PRESENT)
            {
                CG_ADD_SHOPPINGLIST_PRESENT packet = (CG_ADD_SHOPPINGLIST_PRESENT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ADD_SHOPPINGLIST_PRESENT);
                packet.ReceiverGUID = receiver;
                packet.ReceiverName = name;
                for (int i = 0; i < m_GoodsInfo.Count; i++)
                {
                    if (m_GoodsInfo[i].GoodsId == GlobeVar.INVALID_ID || m_GoodsInfo[i].GoodsCount == GlobeVar.INVALID_ID)
                    {
                        break;
                    }

                    packet.AddGoodsID(m_GoodsInfo[i].GoodsId);
                    packet.AddGoodsCount(m_GoodsInfo[i].GoodsCount);
                }
                packet.SendPacket();
            }
            else if (type == SUBMIT_TYPE.TYPE_WAITPAY)
            {
                CG_ADD_SHOPPINGLIST_WAITPAY packet = (CG_ADD_SHOPPINGLIST_WAITPAY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ADD_SHOPPINGLIST_WAITPAY);
                packet.ReceiverGUID = receiver;
                packet.ReceiverName = name;
                for (int i = 0; i < m_GoodsInfo.Count; i++)
                {
                    if (m_GoodsInfo[i].GoodsId == GlobeVar.INVALID_ID || m_GoodsInfo[i].GoodsCount == GlobeVar.INVALID_ID)
                    {
                        break;
                    }

                    packet.AddGoodsID(m_GoodsInfo[i].GoodsId);
                    packet.AddGoodsCount(m_GoodsInfo[i].GoodsCount);
                }
                packet.SendPacket();
            }

            CleanUp();
            WriteShoppingCartInfo();

            if (PresentRootLogic.Instance() != null)
            {
                PresentRootLogic.Instance().UpdateTabShow();
            }
        }

        private List<ShoppingCartItem> m_GoodsInfo = new List<ShoppingCartItem>();
        public List<ShoppingCartItem> GoodsInfo
        {
            get { return m_GoodsInfo; }
            set { m_GoodsInfo = value; }
        }

        // 创建时间 从添加第一个物品时算起
        int m_CreateTime;
        public int CreateTime
        {
            get { return m_CreateTime; }
            set { m_CreateTime = value; }
        }

        public const int ShoppingCartConfigCount = 11;
        public const int ShoppingCartLife = 24 * 3600;
    }
}