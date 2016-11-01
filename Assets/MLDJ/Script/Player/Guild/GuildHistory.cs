using System;
using Games.GlobeDefine;

public class GuildHistory
{
    public enum GUILDHISTORY_TYPE
    {
        TYPE_INVALID = -1,
        TYPE_KICK = 0,
        TYPE_LEAVE,
        TYPE_JOIN,
        TYPE_GUILDLEVELUP,
        TYPE_MAX,
    }

    public GuildHistory()
    {
        CleanUp();
    }

    public void CleanUp()
    {
        m_HistoryType = (int)GUILDHISTORY_TYPE.TYPE_INVALID;
        m_HistoryTime = GlobeVar.INVALID_ID;

        m_HistoryText = new string[GUILHISTORY_TEXTNUM];
        for (int i = 0; i < m_HistoryText.Length; i++ )
        {
            m_HistoryText[i] = "";
        }
    }

    public bool IsValid()
    {
        return m_HistoryType != (int)GUILDHISTORY_TYPE.TYPE_INVALID;
    }

    private int m_HistoryType;
    public int HistoryType
    {
        get { return m_HistoryType; }
        set { m_HistoryType = value; }
    }

    private int m_HistoryTime;
    public int HistoryTime
    {
        get { return m_HistoryTime; }
        set { m_HistoryTime = value; }
    }

    public const int GUILHISTORY_TEXTNUM = 5;
    private string[] m_HistoryText;
    public string[] HistoryText
    {
        get { return m_HistoryText; }
        set { m_HistoryText = value; }
    }

    public static string GetTypeDic(int nHistoryType)
    {
        switch ((GUILDHISTORY_TYPE)nHistoryType)
        {
            case GUILDHISTORY_TYPE.TYPE_KICK:
                return "#{10457}";
            case GUILDHISTORY_TYPE.TYPE_LEAVE:
                return "#{10458}";
            case GUILDHISTORY_TYPE.TYPE_JOIN:
                return "#{10459}";
            case GUILDHISTORY_TYPE.TYPE_GUILDLEVELUP:
                return "#{10460}";
            default:
                return "";
        }
    }

    public static int GetTypeTextCount(int nHistoryType)
    {
        switch ((GUILDHISTORY_TYPE)nHistoryType)
        {
            case GUILDHISTORY_TYPE.TYPE_KICK:
                return 2;
            case GUILDHISTORY_TYPE.TYPE_LEAVE:
                return 1;
            case GUILDHISTORY_TYPE.TYPE_JOIN:
                return 1;
            case GUILDHISTORY_TYPE.TYPE_GUILDLEVELUP:
                return 0;
            default:
                return 0;
        }
    }
}
