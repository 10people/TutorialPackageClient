using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Collections.Generic;
using System.Text;
using Games.GlobeDefine;
using GCGame;

public class GuildSearchLogic : MonoBehaviour {

    private static GuildSearchLogic m_Instance = null;
    public static GuildSearchLogic Instance()
    {
        return m_Instance;
    }

    public GameObject m_GuildListItem;
    public GameUIInput m_GuildNameInput;
    public GameObject m_GuildListGrid;
    public GameObject m_NoneResultLabel;

    void OnEnable()
    {
        m_Instance = this;

        m_GuildNameInput.defaultText = StrDictionary.GetClientDictionaryString("#{10353}");
        m_NoneResultLabel.SetActive(false);
    }

    void OnDisable()
    {
        m_Instance = null;

        m_GuildNameInput.value = "";
        Utils.CleanGrid(m_GuildListGrid);
    }

    void OnSearchClick()
    {
        if (m_GuildNameInput.value.Length <= 0)
        {
            GUIData.AddNotifyData("#{1761}"); //请输入帮会名称 
            return;
        }

        if (Encoding.UTF8.GetBytes(m_GuildNameInput.value).Length > GlobeVar.MAX_GUILD_NAME)
        {
            GUIData.AddNotifyData("#{10365}"); //公会名过长
            return;
        }

        Utils.CleanGrid(m_GuildListGrid);

        CG_GUILD_SEARCH pak = (CG_GUILD_SEARCH)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_SEARCH);
        pak.GuildName = m_GuildNameInput.value;
        pak.SendPacket();
    }

    public void RefreshSearchResult(GC_GUILD_SEARCH pak)
    {
        if (pak.NoneResult == 1)
        {
            m_NoneResultLabel.SetActive(true);
        }
        else
        {
            m_NoneResultLabel.SetActive(false);

            for (int i = 0; i < pak.guildGuidCount; ++i)
            {
                GuildPreviewInfo info = new GuildPreviewInfo();
                info.GuildGuid = pak.GetGuildGuid(i);
                if (info.GuildGuid == GlobeVar.INVALID_GUID)
                {
                    continue;
                }

                if (i < pak.guildNameCount)
                {
                    info.GuildName = pak.GetGuildName(i);
                }

                if (i < pak.guildLevelCount)
                {
                    info.GuildLevel = pak.GetGuildLevel(i);
                }

                if (i < pak.guildChiefNameCount)
                {
                    info.GuildChiefName = pak.GetGuildChiefName(i);
                }

                if (i < pak.guildMemberNumCount)
                {
                    info.GuildCurMemberNum = pak.GetGuildMemberNum(i);
                }
                if (i < pak.guildCombatCount)
                {
                    info.GuildCombatValue = pak.GetGuildCombat(i);
                }
                if (i < pak.isEnemyGuildCount)
                {
                    info.IsEnemyGuild = (pak.GetIsEnemyGuild(i) == 1);
                }
                if (i < pak.guildApplyNumCount)
                {
                    info.GuildCurApplyNum = pak.GetGuildApplyNum(i);
                }
                if (i < pak.guildApplyMaxNumCount)
                {
                    info.GuildMaxApplyNum = pak.GetGuildApplyMaxNum(i);
                }
                if (i < pak.GuildDeclarationCount)
                {
                    info.GuildDeclaration = pak.GetGuildDeclaration(i);
                }

                string szItemName = i < 10 ? "0" + i.ToString() : i.ToString();
                GameObject GuildListItem = Utils.BindObjToParent(m_GuildListItem, m_GuildListGrid, szItemName);
                if (GuildListItem != null && GuildListItem.GetComponent<GuildListItemLogic>() != null)
                {
                    GuildListItem.GetComponent<GuildListItemLogic>().Init(info);
                }
            }

            if (m_GuildListGrid.GetComponent<UIGrid>() != null)
            {
                m_GuildListGrid.GetComponent<UIGrid>().Reposition();
            }
        }
    }

    public void UpdateSearchList()
    {
        GuildListItemLogic[] aItem = m_GuildListGrid.GetComponentsInChildren<GuildListItemLogic>();
        for (int i = 0; i < aItem.Length; i++)
        {
            aItem[i].UpdateGuildJoinButton();
        }
    }
}
