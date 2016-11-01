using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using System;

public class GuildJobSelectMemberItemLogic : MonoBehaviour {

    public UILabel m_NameLabel;
    public UILabel m_CombatLabel;
    public UILabel m_LevelLabel;
    public UISprite m_ProfessionSprite;
    public GameObject m_ChooseBtn;
    public GameObject m_RemoveBtn;

    private UInt64 m_MemberGuid;
    public UInt64 MemberGuid
    {
        get { return m_MemberGuid; }
        set { m_MemberGuid = value; }
    }

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void Init(GuildMember member, int curguildjob)
    {
        if (false == member.IsValid())
        {
            return;
        }

        m_NameLabel.text = member.MemberName;
        m_CombatLabel.text = StrDictionary.GetClientDictionaryString("#{1241}", member.ComBatVal);
        m_LevelLabel.text = "LV" + member.Level;
        m_ProfessionSprite.spriteName = Utils.GetProfessionIcon(member.Profession);

        m_ChooseBtn.SetActive(member.Job != curguildjob);
        m_RemoveBtn.SetActive(member.Job == curguildjob);

        m_MemberGuid = member.Guid;
    }

    void OnChooseClick()
    {
        if (GuildAuthorityWindowLogic.Instance() != null)
        {
            GuildAuthorityWindowLogic.Instance().HandleSelecMemberChoose(this);
        }
    }

    public void HandleItemAdd()
    {
        m_ChooseBtn.SetActive(false);
        m_RemoveBtn.SetActive(true);
    }

    public void HandleItemRemove()
    {
        m_ChooseBtn.SetActive(true);
        m_RemoveBtn.SetActive(false);
    }
}
