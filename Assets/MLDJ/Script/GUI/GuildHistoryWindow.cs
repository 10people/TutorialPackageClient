using UnityEngine;
using System.Collections;
using GCGame;
using System;

public class GuildHistoryWindow : MonoBehaviour {

    public GameObject m_GuildHistoryItem;
    public GameObject m_GuildHistoryTable;

    void OnEnable()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        Utils.CleanGrid(m_GuildHistoryTable);

        // 记录上一次的item 当有同一天的日志时不创建item 而是在上一个item中加一条记录
        GuildHistoryItemLogic itemBuffer = null;
        for (int i = info.GuildHistoryInfo.Count - 1; i >= 0; i--)
        {
            GuildHistory history = info.GuildHistoryInfo[i];
            if (false == history.IsValid())
            {
                break;
            }

            if (itemBuffer == null || false == itemBuffer.IsSameDate(history))
            {
                // 第一个item或和上一个item不在同一天 创建 同时更新buffer
                string szItemName = i < 10 ? "0" + i.ToString() : i.ToString();
                GameObject historyItem = Utils.BindObjToParent(m_GuildHistoryItem, m_GuildHistoryTable, szItemName);
                if (historyItem == null || historyItem.GetComponent<GuildHistoryItemLogic>() == null)
                {
                    break;
                }

                historyItem.GetComponent<GuildHistoryItemLogic>().Init(history);

                itemBuffer = historyItem.GetComponent<GuildHistoryItemLogic>();
            }
            else
            {
                // 在同一天 加记录 不创建新的
                itemBuffer.AddRecord(history);
            }            
        }

        if (m_GuildHistoryTable.GetComponent<UITable>() != null)
        {
            m_GuildHistoryTable.GetComponent<UITable>().Reposition();
        }
    }
	
	void OnCloseClick()
    {
        gameObject.SetActive(false);
    }
}
