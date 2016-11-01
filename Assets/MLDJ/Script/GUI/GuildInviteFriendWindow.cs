using UnityEngine;
using System.Collections;
using GCGame;
using System.Collections.Generic;
using System;
using GCGame.Table;

public class GuildInviteFriendWindow : MonoBehaviour {

    private static GuildInviteFriendWindow m_Instance = null;
    public static GuildInviteFriendWindow Instance()
    {
        return m_Instance;
    }

    public GameObject m_GuildInviteFriendItem;
    public GameObject m_GuildInviteFriendGrid;
    public UILabel m_MailTitleLabel;
    public UILabel m_SendMailBtnLabel;

    private List<UInt64> m_ChooseGuid = new List<UInt64>();

	void OnEnable()
    {
        m_Instance = this;

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        m_MailTitleLabel.text = StrDictionary.GetClientDictionaryString("#{10474}", info.GuildName);

        Utils.CleanGrid(m_GuildInviteFriendGrid);

        int index = 0;
        foreach (KeyValuePair<UInt64, Relation> pair in GameManager.gameManager.PlayerDataPool.FriendList.RelationDataList)
        {
            Relation relation = pair.Value;
            if (false == relation.IsValid())
            {
                continue;
            }

            GameObject InviteItem = Utils.BindObjToParent(m_GuildInviteFriendItem, m_GuildInviteFriendGrid, index.ToString());
            if (InviteItem == null || InviteItem.GetComponent<GuildInviteFriendItem>() == null)
            {
                continue;
            }

            InviteItem.GetComponent<GuildInviteFriendItem>().Init(relation);
        }

        if (m_GuildInviteFriendGrid.GetComponent<UIGrid>() != null)
        {
            m_GuildInviteFriendGrid.GetComponent<UIGrid>().Reposition(true);
        }

        m_SendMailBtnLabel.text = StrDictionary.GetClientDictionaryString("#{3381}");
    }

    void OnDisable()
    {
        m_Instance = null;

        Utils.CleanGrid(m_GuildInviteFriendGrid);
        m_ChooseGuid.Clear();
    }

    public void OnItemAdd(UInt64 guid)
    {
        if (false == m_ChooseGuid.Contains(guid))
        {
            m_ChooseGuid.Add(guid);

            m_SendMailBtnLabel.text = StrDictionary.GetClientDictionaryString("#{10478}", m_ChooseGuid.Count);
        }
    }

    public void OnItemRemove(UInt64 guid)
    {
        if (m_ChooseGuid.Contains(guid))
        {
            m_ChooseGuid.Remove(guid);

            if (m_ChooseGuid.Count <= 0)
            {
                m_SendMailBtnLabel.text = StrDictionary.GetClientDictionaryString("#{3381}");
            }
            else
            {
                m_SendMailBtnLabel.text = StrDictionary.GetClientDictionaryString("#{10478}", m_ChooseGuid.Count);
            }
        }
    }

    void OnSendMailClick()
    {
        if (m_ChooseGuid.Count <= 0)
        {
            GUIData.AddNotifyData("#{4063}");
            return;
        }

        CG_GUILD_INVITE_MAIL pak = (CG_GUILD_INVITE_MAIL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_INVITE_MAIL);
        for (int i = 0; i < m_ChooseGuid.Count; i++ )
        {
            pak.ReceiverGuidList.Add(m_ChooseGuid[i]);
        }
        pak.SendPacket();
    }

    void OnCancelClick()
    {
        gameObject.SetActive(false);
    }
}
