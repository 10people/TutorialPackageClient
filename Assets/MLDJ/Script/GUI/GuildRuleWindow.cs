using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using System.Collections.Generic;

public class GuildRuleWindow : MonoBehaviour {

    public enum GUILDRULE_TYPE
    {
        TYPE_GUILD = 1,
        TYPE_REWARD = 2,
    }

    public GameObject m_GuildRuleItem;
    public GameObject m_GuildRuleItemTable;
    public UILabel m_TitleLabel;

    void OnDisable()
    {
        Utils.CleanGrid(m_GuildRuleItemTable);
    }

    public void Show(GUILDRULE_TYPE type)
    {
        gameObject.SetActive(true);

        if (type == GUILDRULE_TYPE.TYPE_GUILD)
        {
            m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{10461}");
        }
        else if (type == GUILDRULE_TYPE.TYPE_REWARD)
        {
            m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{10508}");
        }

        Utils.CleanGrid(m_GuildRuleItemTable);

        int index = 0;
        foreach (KeyValuePair<int, List<Tab_GuildRule>> pair in TableManager.GetGuildRule())
        {
            Tab_GuildRule tabRule = pair.Value[0];
            if (tabRule == null)
            {
                continue;
            }

            if (tabRule.RuleType != (int)type)
            {
                continue;
            }

            string szItemName = index < 10 ? "0" + index.ToString() : index.ToString();
            GameObject RuleItem = Utils.BindObjToParent(m_GuildRuleItem, m_GuildRuleItemTable, szItemName);
            if (RuleItem == null || RuleItem.GetComponent<GuildRuleItemLogic>() == null)
            {
                continue;
            }

            RuleItem.GetComponent<GuildRuleItemLogic>().Init(tabRule);
        }

        if (m_GuildRuleItemTable.GetComponent<UITable>() != null)
        {
            m_GuildRuleItemTable.GetComponent<UITable>().Reposition();
        }
    }

    void OnCloseClick()
    {
        gameObject.SetActive(false);
    }
}
