/********************************************************************
	filename:	ShoppingList.cs
	date:		2014-12-4 
	author:		王喆
	purpose:	购物单数据结构
*********************************************************************/

using System;
using System.Collections.Generic;
using Games.GlobeDefine;
using GCGame.Table;

namespace Games.YuanBaoShopData
{
    // 赠送/代付条目item
    public class ShoppingList
    {
        public ShoppingList()
        {
            CleanUp();
        }

        public void CleanUp()
        {
            m_Guid = GlobeVar.INVALID_GUID;
            m_SenderName = "";
            m_CreateTime = GlobeVar.INVALID_ID;
            m_GoodsID = new int[GlobeVar.SHOPPINGLIST_GOODSMAX];
            m_GoodsCount = new int[GlobeVar.SHOPPINGLIST_GOODSMAX];
            for (int i = 0; i < GlobeVar.SHOPPINGLIST_GOODSMAX; i++)
            {
                m_GoodsID[i] = GlobeVar.INVALID_ID;
                m_GoodsCount[i] = GlobeVar.INVALID_ID;
            }
            m_LifeTime = GlobeVar.INVALID_ID;
        }

        public bool IsValid()
        {
            return m_Guid != GlobeVar.INVALID_GUID;
        }

        // 获取存在时间 秒
        public int GetAliveTime()
        {
            return GlobalData.ServerAnsiTime - m_CreateTime;
        }

        // 获取剩余时间 秒
        public int GetRemainTime()
        {
            if (m_LifeTime != GlobeVar.INVALID_ID)
            {
                return m_LifeTime - GetAliveTime();
            }
            return GlobeVar.INVALID_ID;
        }

        // 获取剩余时间 天
        public int GetRemainDay()
        {
            return GetRemainTime() / 3600 / 24;
        }

        public int GetCostYuanBao()
        {
            int cost = 0;
            for (int i = 0; i < m_GoodsID.Length && i < m_GoodsCount.Length; i++ )
            {
                if (m_GoodsID[i] == GlobeVar.INVALID_ID || m_GoodsCount[i] == GlobeVar.INVALID_ID)
                {
                    break;
                }

                Tab_YuanBaoShop tabGood = TableManager.GetYuanBaoShopByID(m_GoodsID[i], 0);
                if (tabGood == null)
                {
                    break;
                }

                cost += tabGood.PriceForever * tabGood.Num * m_GoodsCount[i];
            }
            return cost;
        }

        UInt64 m_Guid;
        public UInt64 Guid
        {
            get { return m_Guid; }
            set { m_Guid = value; }
        }

        string m_SenderName;
        public string SenderName
        {
            get { return m_SenderName; }
            set { m_SenderName = value; }
        }

        int m_CreateTime;
        public int CreateTime
        {
            get { return m_CreateTime; }
            set { m_CreateTime = value; }
        }

        int[] m_GoodsID;
        public int[] GoodsID
        {
            get { return m_GoodsID; }
            set { m_GoodsID = value; }
        }

        int[] m_GoodsCount;
        public int[] GoodsCount
        {
            get { return m_GoodsCount; }
            set { m_GoodsCount = value; }
        }

        int m_LifeTime;
        public int LifeTime
        {
            get { return m_LifeTime; }
            set { m_LifeTime = value; }
        }
    }
}