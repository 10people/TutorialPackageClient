using UnityEngine;
using System.Collections;
using GCGame;
using Games.GlobeDefine;

public class AroundTeamItemLogic : MonoBehaviour {

    public UISprite m_PlayerProPic;
    public UILabel m_PlayerNameLabel;
    public UILabel m_PlayerLevelLabel;
    public UILabel m_LeaderCombatNumLabel;
    public UILabel m_TeamCombatNumLabel;
    public UISprite m_PlayerHeadPic;

    public NearbyTeam m_nearbyTeam = null;

    public void Init(NearbyTeam info)
    {
        if (info == null || false == info.IsValid())
        {
            return;
        }

        m_nearbyTeam = info;

        SetPro(info.Profession);
        SetHeadPic(info.Profession);
        SetName(info.Name);
        SetLevel(info.Level);
        SetLeaderCombatNum(info.CombatNum);
        SetTeamCombatNum(info.TeamCombatNum);
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

    void SetLeaderCombatNum(int nCombatNum)
    {
        if (m_LeaderCombatNumLabel != null)
        {
            m_LeaderCombatNumLabel.gameObject.SetActive(true);
            m_LeaderCombatNumLabel.text = nCombatNum.ToString();
        }
    }

    void SetTeamCombatNum(int nCombatNum)
    {
        if (m_TeamCombatNumLabel != null)
        {
            m_TeamCombatNumLabel.gameObject.SetActive(true);
            m_TeamCombatNumLabel.text = nCombatNum.ToString();
        }
    }

    void OnReqJoinTeamClick()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (m_nearbyTeam == null)
        {
            return;
        }

        if (GlobeVar.INVALID_GUID != m_nearbyTeam.Guid)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqJoinTeam(m_nearbyTeam.Guid);
        }
    }

    void OnPKClick()
    {
        //
    }
}
