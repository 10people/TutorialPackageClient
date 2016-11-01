using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using System;
using GCGame;

public class TeamMemberListItemLogic : MonoBehaviour {
    
    public GameObject VipSprite;
    public UILabel m_VipLevel;
    public UISprite m_PlayerProPic;
    public UISprite m_PlayerHeadPic;
    public UILabel m_PlayerNameLabel;
    public UILabel m_PlayerLevelLabel;
    public UILabel m_PlayerCombatNumLabel;
    public GameObject m_TeamLeaderPic;
    public UIImageButton m_KickImageButton;
    public UIImageButton m_LeaveImageButton;
    public UIImageButton m_MenuImageButton;
    public GameObject m_ChooseSprite;

    public TeamMember m_selfTeamMember = null;

    private int m_nTeamPosIndex = GlobeVar.INVALID_ID;
    static private Color m_SelfColor = new Color(0.0f / 255.0f, 162.0f / 255.0f, 232.0f / 255.0f, 1.0f);

    public void Init(TeamMember member, int nTeamPosIndex)
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (member == null || false == member.IsValid())
        {
            return;
        }

        m_selfTeamMember = member;
        m_nTeamPosIndex = nTeamPosIndex;

        SetTeamJob(member.Guid);
        SetPro(member.Profession);
        SetHeadPic(member.Profession);
        SetName(member.MemberName);
        SetLevel(member.Level);
        SetCombatNum(member.CombatNum);
        UpdateButtons(member.Guid);

        //如果是自己
        int viplevel = 0;
        if (m_selfTeamMember.Guid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            m_PlayerNameLabel.color = m_SelfColor;
            m_PlayerLevelLabel.color = m_SelfColor;
            m_PlayerCombatNumLabel.color = m_SelfColor;
            //m_VipLevel.text = VipData.GetVipLv().ToString();
            viplevel = VipData.GetVipLv();
        } else {
          Games.LogicObj.Obj_OtherPlayer objplayer = Singleton<ObjManager>.GetInstance().FindOtherPlayerInScene(member.Guid);
          if (objplayer != null) {
            int nCost = objplayer.VipCost;
            int nLeft = 0;
            VipData.GetVipLevel(nCost, ref viplevel, ref nLeft);
            //m_VipLevel.text = viplevel.ToString();
          }
        }
        if (viplevel > 0) {
          VipSprite.SetActive(true);
          m_VipLevel.text = viplevel.ToString();
        } else {
          VipSprite.SetActive(false);
          m_VipLevel.text = "";
        }
    }

    void SetTeamJob(UInt64 guid)
    {
        m_TeamLeaderPic.SetActive(Singleton<ObjManager>.Instance.MainPlayer.IsTeamLeader(guid));
    }

    void SetPro(int nProfession)
    {
        if (m_PlayerProPic == null)
        {
            return;
        }

        if (nProfession < 0 || nProfession >= (int)CharacterDefine.PROFESSION.MAX)
        {
            return;
        }

        m_PlayerProPic.spriteName = Utils.GetProfessionIcon(nProfession);
    }

    void SetHeadPic(int nProfession)
    {
        if (m_PlayerHeadPic == null)
        {
            return;
        }
        if (nProfession < 0 || nProfession >= (int)CharacterDefine.PROFESSION.MAX)
        {
            return;
        }
        m_PlayerHeadPic.spriteName = Utils.GetHeadPicByProfession(nProfession);
    }

    void SetName(string szName)
    {
        if (m_PlayerNameLabel != null)
        {
            m_PlayerNameLabel.gameObject.SetActive(true);
            m_PlayerNameLabel.text = szName;
        }
    }

    void SetLevel(int nLevel)
    {
        if (m_PlayerLevelLabel != null)
        {
            m_PlayerLevelLabel.gameObject.SetActive(true);
            //m_PlayerLevelLabel.text = "LV" + nLevel.ToString();
            m_PlayerLevelLabel.text = nLevel.ToString();
        }
    }

    void SetCombatNum(int nCombatNum)
    {
        if (m_PlayerCombatNumLabel != null)
        {
            m_PlayerCombatNumLabel.gameObject.SetActive(true);
            m_PlayerCombatNumLabel.text = nCombatNum.ToString();
        }
    }

    void UpdateButtons(UInt64 guid)
    {
        if (guid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            m_LeaveImageButton.gameObject.SetActive(true);
            m_KickImageButton.gameObject.SetActive(false);
            m_MenuImageButton.gameObject.SetActive(false);
        }
        else
        {
            m_LeaveImageButton.gameObject.SetActive(false);
            m_KickImageButton.gameObject.SetActive(true);
            m_MenuImageButton.gameObject.SetActive(true);

            if (Singleton<ObjManager>.Instance.MainPlayer.IsTeamLeader())
            {
                m_KickImageButton.isEnabled = true;
            }
            else
            {
				m_KickImageButton.gameObject.SetActive(false);
                m_KickImageButton.isEnabled = false;
            }
        }
    }

    public void OnItemClick()
    {
        if (m_selfTeamMember == null)
        {
            return;
        }

        //to do 新增 需要显示模型
        UpdateChoose(true);
        if (RelationTeamWindow.Instance() != null)
        {
            RelationTeamWindow.Instance().OnTeamMemberItemClick(m_selfTeamMember);
            RelationTeamWindow.Instance().CloseTeamMemberListMenu();
        }
    }

    public void UpdateChoose(bool choose)
    {
        m_ChooseSprite.SetActive(choose);
    }

    void OnMenuClick()
    {
        if (m_selfTeamMember == null)
        {
            return;
        }

        if (RelationTeamWindow.Instance() != null)
        {
            RelationTeamWindow.Instance().ShowTeamMemberListMenu(m_selfTeamMember.Guid, m_nTeamPosIndex);

            UpdateChoose(true);
            RelationTeamWindow.Instance().OnTeamMemberItemClick(m_selfTeamMember);
        }
    }

    void OnLeaveClick()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer.IsTeamLeader())
        {
            MessageBoxLogic.OpenOKCancelBox(GCGame.Table.StrDictionary.GetClientDictionaryString("#{11498}"),
                                            GCGame.Table.StrDictionary.GetClientDictionaryString("#{1315}"), LeaveClickYes, null);
        }
        else
        {
            MessageBoxLogic.OpenOKCancelBox(GCGame.Table.StrDictionary.GetClientDictionaryString("#{11497}"),
                                            GCGame.Table.StrDictionary.GetClientDictionaryString("#{1315}"), LeaveClickYes, null);
        }
    }
    void LeaveClickYes()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (m_selfTeamMember == null)
        {
            return;
        }

        if (m_selfTeamMember.Guid != Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqLeaveTeam();
    }
    void OnKickClick()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (m_selfTeamMember == null)
        {
            return;
        }

        if (m_selfTeamMember.Guid == Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            return;
        }

        if (false == Singleton<ObjManager>.Instance.MainPlayer.IsTeamLeader())
        {
            return;
        }

        //发送踢人消息
        Singleton<ObjManager>.GetInstance().MainPlayer.ReqKickTeamMember(m_selfTeamMember.Guid);
    }
}
