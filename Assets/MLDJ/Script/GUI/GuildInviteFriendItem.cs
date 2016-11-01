using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using GCGame;

public class GuildInviteFriendItem : MonoBehaviour {

    public UISprite m_HeadIcon;
    public UILabel m_NameLabel;
    public UILabel m_LevelLabel;
    public UISprite m_ProIcon;
    public UILabel m_CombatLabel;
    public UILabel m_VipLabel;
    public UIToggle m_ChooseToggle;

    private UInt64 m_PlayerGuid;

	public void Init(Relation relation)
    {
        if (relation == null || false == relation.IsValid())
        {
            return;
        }

        m_HeadIcon.spriteName = GlobeVar.m_HeadIcon[relation.Profession];
        m_NameLabel.text = relation.Name;
        m_LevelLabel.text = StrDictionary.GetClientDictionaryString("#{1242}", relation.Level);
        m_ProIcon.spriteName = Utils.GetProfessionIcon(relation.Profession);
        m_CombatLabel.text = StrDictionary.GetClientDictionaryString("#{1241}", relation.CombatNum);
        m_VipLabel.text = "";

        m_PlayerGuid = relation.Guid;
    }

    void OnToggleClick()
    {
        if (GuildInviteFriendWindow.Instance() == null)
        {
            return;
        }

        if (m_ChooseToggle.value)
        {
            GuildInviteFriendWindow.Instance().OnItemAdd(m_PlayerGuid);
        }
        else
        {
            GuildInviteFriendWindow.Instance().OnItemRemove(m_PlayerGuid);
        }
    }
}
