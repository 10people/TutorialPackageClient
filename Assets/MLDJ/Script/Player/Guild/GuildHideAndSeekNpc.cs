using System;
using Games.GlobeDefine;

public class GuildHideAndSeekNpc
{
    public GuildHideAndSeekNpc()
    {
        CleanUp();
    }

    public void CleanUp()
    {
        m_SceneNpcId = GlobeVar.INVALID_ID;
        m_IsFound = false;
    }

    public bool IsValid()
    {
        return m_SceneNpcId != GlobeVar.INVALID_ID;
    }

    private int m_SceneNpcId;
    public int SceneNpcId
    {
        get { return m_SceneNpcId; }
        set { m_SceneNpcId = value; }
    }

    private bool m_IsFound;
    public bool IsFound
    {
        get { return m_IsFound; }
        set { m_IsFound = value; }
    }
}
