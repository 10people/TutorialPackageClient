using UnityEngine;
using System.Collections;

public class MissionTooltipsLogic : MonoBehaviour {

    public UISprite m_missionIcon;
    public UILabel m_missionName;
    public UILabel m_missionLevel;
    public UILabel m_missionDesc;

    private static MissionTooltipsLogic m_instance = null;
    public static MissionTooltipsLogic Instance()
    {
        return m_instance;
    }
    void Awake()
    {
        m_instance = this;
    }

    void OnDestroy()
    {
        m_instance = null;
    }

    public static void ShowTooltips(ChatLinkLogic.MissonLinkInfo mission)
    {
        UIManager.ShowUI(UIInfo.MissionTooltipsRoot, OnShowMissionTip, mission);
    }

    static void OnShowMissionTip(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            return;
        }

        ChatLinkLogic.MissonLinkInfo mission = (ChatLinkLogic.MissonLinkInfo)param;

        if (false == mission.IsValid())
        {
            return;
        }

        if (MissionTooltipsLogic.Instance() != null)
        {
            MissionTooltipsLogic.Instance().SetMissionLinkInfo(mission);
        }
    }

    public void SetMissionLinkInfo(ChatLinkLogic.MissonLinkInfo mission)
    {
        if (mission.IsValid())
        {
            m_missionIcon.spriteName = mission.missionIcon;
            m_missionName.text = mission.missionName;
            m_missionLevel.text = mission.missionLevel;
            m_missionDesc.text = mission.missionDesc;
        }
    }

    public void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.MissionTooltipsRoot);
    }
}
