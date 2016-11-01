using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;
using GCGame;

public class AroundPlayerItemLogic : MonoBehaviour {

    public UISprite m_PlayerProPic;
    public UISprite m_PlayerHeadPic;
    public UILabel m_PlayerNameLabel;
    public UILabel m_PlayerLevelLabel;
    public UILabel m_PlayerCombatNumLabel;
    public UILabel m_PlayerVipLevelLabel;
    public UILabel m_PlayerGuildNameLabel;
    public GameObject VipSprite;

    public NearbyPlayer m_nearbyPlayer = null;

    public void Init(NearbyPlayer info)
    {
        if (info == null || false == info.IsValid())
        {
            return;
        }

        m_nearbyPlayer = info;

        SetPro(info.Profession);
        SetHeadPic(info.Profession);
        SetName(info.Name);
        SetLevel(info.Level);
        SetCombatNum(info.CombatNum);
        SetVipLevel(info.VipLevel);
        SetGuildName(info.GuildName);
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

    void SetName(string szName)
    {
        if (m_PlayerNameLabel != null)
        {
            m_PlayerNameLabel.gameObject.SetActive(true);
            m_PlayerNameLabel.text = szName;
        }
    }

    void SetGuildName(string szName)
    {
        if (m_PlayerGuildNameLabel != null)
        {
            m_PlayerGuildNameLabel.gameObject.SetActive(true);
            m_PlayerGuildNameLabel.text = szName;
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

    void SetVipLevel(int nLevel)
    {
      if (nLevel > 0) {
        if (m_PlayerVipLevelLabel != null) {
          m_PlayerVipLevelLabel.gameObject.SetActive(true);
          m_PlayerVipLevelLabel.text = nLevel.ToString();
        }
        VipSprite.SetActive(true);
      } else {
        VipSprite.SetActive(false);
        m_PlayerVipLevelLabel.text = "";
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

    void OnRoleViewClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (m_nearbyPlayer == null)
        {
            return;
        }

        if (GlobeVar.INVALID_GUID != m_nearbyPlayer.Guid)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqViewOtherPlayer(m_nearbyPlayer.Guid, OtherRoleViewLogic.OPEN_TYPE.OPEN_TYPE_INVALID);
        }
    }

    void OnInviteTeamClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (m_nearbyPlayer == null)
        {
            return;
        }

        //如果有队伍，则判断下队伍是否已满
        if (GlobeVar.INVALID_ID != GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            if (GameManager.gameManager.PlayerDataPool.TeamInfo.IsFull())
            {
                return;
            }
        }

        if (GlobeVar.INVALID_GUID != m_nearbyPlayer.Guid)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteTeam(m_nearbyPlayer.Guid);
        }
    }

    void OnInviteGuildClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (m_nearbyPlayer == null)
        {
            return;
        }

        if (GlobeVar.INVALID_GUID == GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid)
        {
            //你当前未加入帮会，无法邀请。
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2686}");
            return;
        }

        if (m_nearbyPlayer.Guid != GlobeVar.INVALID_GUID &&
            m_nearbyPlayer.Guid != Singleton<ObjManager>.Instance.MainPlayer.GUID)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteGuild(m_nearbyPlayer.Guid);
        }
    }
}
