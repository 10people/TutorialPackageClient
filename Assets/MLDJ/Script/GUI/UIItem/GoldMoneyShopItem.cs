using System;
using Games.GlobeDefine;

public struct GoldMoneyShopItem
{
    public GoldMoneyShopItem(int nGoodId, int nLeftCount)
    {
        m_GoodId = nGoodId;
        m_LeftCount = nLeftCount;
    }

    public bool IsValid()
    {
        return m_GoodId != GlobeVar.INVALID_ID && m_LeftCount >= 0;
    }

    public int m_GoodId;
    public int m_LeftCount;
}