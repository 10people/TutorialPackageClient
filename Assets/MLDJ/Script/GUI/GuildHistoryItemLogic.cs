using UnityEngine;
using System.Collections;
using System;
using GCGame;
using GCGame.Table;

public class GuildHistoryItemLogic : MonoBehaviour {

    public UILabel m_DateLabel;
    public UILabel[] m_RecordLabel;
    public UITable m_RecordTabel;
    public UISprite m_Background;
    public BoxCollider m_SelfBox;

    private DateTime m_DateTime = new DateTime();
    private int m_RecordIndex = 0;

	public void Init(GuildHistory history)
    {
        m_DateTime = Utils.GetDateTimeByAnsiTime(history.HistoryTime);
        m_RecordIndex = 0;

        m_DateLabel.text = StrDictionary.GetClientDictionaryString("#{10456}", m_DateTime.Month, m_DateTime.Day);

        for (int i = 0; i < m_RecordLabel.Length; i++ )
        {
            m_RecordLabel[i].gameObject.SetActive(false);
        }

        AddRecord(history);
    }

    public bool IsSameDate(GuildHistory history)
    {
        DateTime historyDate = Utils.GetDateTimeByAnsiTime(history.HistoryTime);
        return m_DateTime.Year == historyDate.Year && m_DateTime.Month == historyDate.Month && m_DateTime.Day == historyDate.Day;
    }

    public void AddRecord(GuildHistory history)
    {
        string szTypeDic = GuildHistory.GetTypeDic(history.HistoryType);
        if (string.IsNullOrEmpty(szTypeDic))
        {
            return;
        }

        if (history.HistoryType <= (int)GuildHistory.GUILDHISTORY_TYPE.TYPE_INVALID ||
            history.HistoryType >= (int)GuildHistory.GUILDHISTORY_TYPE.TYPE_MAX)
        {
            return;
        }

        if (m_RecordIndex < 0 || m_RecordIndex >= m_RecordLabel.Length)
        {
            return;
        }

        if (m_RecordLabel[m_RecordIndex] == null)
        {
            return;
        }

        string szHour = m_DateTime.Hour.ToString();
        string szMinute = m_DateTime.Minute < 10 ? "0" + m_DateTime.Minute.ToString() : m_DateTime.Minute.ToString();

        if (history.HistoryType == (int)GuildHistory.GUILDHISTORY_TYPE.TYPE_KICK)
        {
            m_RecordLabel[m_RecordIndex].text = StrDictionary.GetClientDictionaryString(szTypeDic, szHour, szMinute, history.HistoryText[0], history.HistoryText[1]);
        }
        if (history.HistoryType == (int)GuildHistory.GUILDHISTORY_TYPE.TYPE_LEAVE)
        {
            m_RecordLabel[m_RecordIndex].text = StrDictionary.GetClientDictionaryString(szTypeDic, szHour, szMinute, history.HistoryText[0]);
        }
        if (history.HistoryType == (int)GuildHistory.GUILDHISTORY_TYPE.TYPE_JOIN)
        {
            m_RecordLabel[m_RecordIndex].text = StrDictionary.GetClientDictionaryString(szTypeDic, szHour, szMinute, history.HistoryText[0]);
        }
        if (history.HistoryType == (int)GuildHistory.GUILDHISTORY_TYPE.TYPE_GUILDLEVELUP)
        {
            m_RecordLabel[m_RecordIndex].text = StrDictionary.GetClientDictionaryString(szTypeDic, szHour, szMinute);
        }
        m_RecordLabel[m_RecordIndex].gameObject.SetActive(true);

        // 计算背景动态高度
        // 先算条目的总高度
        int showCount = m_RecordIndex + 1;
        int backHeight = 0;
        for (int i = 0; i < showCount; i++ )
        {
            backHeight += (int)m_RecordLabel[i].printedSize.y;
        }
        // 再算条目中间的间距 上下各有一个y间距
        backHeight += (int)((2 * showCount) * m_RecordTabel.padding.y);
        // 再加条目两端的偏移 估算 写死
        backHeight += 2 * 10;
        m_Background.height = backHeight;
        // 设置位置 左右偏移 （图的宽度-label的宽度）/2 居中
        // 上下偏移 应该是20/2 但字体本身并不上下居中 写死为15
        m_Background.gameObject.transform.localPosition = new Vector3(-(m_Background.width - m_RecordLabel[0].width) / 2, 15, 0);

        // 拖动判定框和背景图在一起 宽度和高度继承 因为背景图锚点在左上角 所以判定框的中心需要往右下偏移
        m_SelfBox.size = new Vector3(m_Background.width, m_Background.height, 0);
        m_SelfBox.center = new Vector3(m_SelfBox.size.x / 2, -m_SelfBox.size.y / 2, 0);

        m_RecordTabel.Reposition();
        
        m_RecordIndex += 1;
    }
}
