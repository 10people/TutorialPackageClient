/********************************************************************
	filename:	YuanBaoShopData.cs
	date:		2014-12-4 
	author:		王喆
	purpose:	元宝商店赠送/代付
*********************************************************************/

using System;
using System.Collections.Generic;
using Games.GlobeDefine;
using GCGame;

namespace Games.YuanBaoShopData
{
    public class ShoppingListRecord
    {
        public ShoppingListRecord(int nMaxCount, int nItemLife)
        {
            CleanUp();
            m_MaxCount = nMaxCount;
            m_ItemLife = nItemLife;
        }

        public void CleanUp()
        {
            m_Record = new Dictionary<ulong, ShoppingList>();
        }

        public void AddShoppingList(ShoppingList shoppinglist)
        {
            if (false == shoppinglist.IsValid())
            {
                return;
            }

            if (m_Record.Count >= m_MaxCount)
            {
                return;
            }

            if (m_Record.ContainsValue(shoppinglist))
            {
                return;
            }

            shoppinglist.LifeTime = m_ItemLife;
            m_Record.Add(shoppinglist.Guid, shoppinglist);
        }

        public void DelShoppingList(UInt64 guid)
        {
            if (guid == GlobeVar.INVALID_GUID)
            {
                return;
            }

            if (m_Record.Count <= 0)
            {
                return;
            }

            if (false == m_Record.ContainsKey(guid))
            {
                return;
            }

            m_Record.Remove(guid);
        }

        public ShoppingList GetShoppingList(UInt64 guid)
        {
            if (m_Record.ContainsKey(guid) && guid != GlobeVar.INVALID_GUID)
            {
                return m_Record[guid];
            }

            return null;
        }

        public int GetAliveTime(UInt64 guid)
        {
            if (false == m_Record.ContainsKey(guid))
            {
                return GlobeVar.INVALID_ID;
            }

            return m_Record[guid].GetAliveTime();
        }

        public int GetRemainTime(UInt64 guid)
        {
            if (false == m_Record.ContainsKey(guid))
            {
                return GlobeVar.INVALID_ID;
            }

            return m_Record[guid].GetRemainTime();
        }

        public int GetRemainDay(UInt64 guid)
        {
            if (false == m_Record.ContainsKey(guid))
            {
                return GlobeVar.INVALID_ID;
            }

            return m_Record[guid].GetRemainDay();
        }

        public int GetRecordCount()
        {
            return m_Record.Count;
        }

        public int GetCostYuanBao(UInt64 guid)
        {
            if (false == m_Record.ContainsKey(guid))
            {
                return GlobeVar.INVALID_ID;
            }

            return m_Record[guid].GetCostYuanBao();
        }

        public string GetSenderName(UInt64 guid)
        {
            if (false == m_Record.ContainsKey(guid))
            {
                return "";
            }

            return m_Record[guid].SenderName;
        }

        Dictionary<UInt64, ShoppingList> m_Record;
        public Dictionary<UInt64, ShoppingList> Record
        {
            get { return m_Record; }
            set { m_Record = value; }
        }

        int m_MaxCount;
        public int MaxCount
        {
            get { return m_MaxCount; }
            set { m_MaxCount = value; }
        }

        int m_ItemLife;
        public int ItemLife
        {
            get { return m_ItemLife; }
            set { m_ItemLife = value; }
        }
    }
}