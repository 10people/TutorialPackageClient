using System;
using Games.GlobeDefine;

public struct GuildShopItem
{
    public GuildShopItem(int nGoodId, int nLeftCount)
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