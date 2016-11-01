using UnityEngine;
using System.Collections;
using Games.UserCommonData;
using GCGame.Table;
using GCGame;
using Games.GlobeDefine;

public class GuildActivityLogic : MonoBehaviour {

    private static GuildActivityLogic m_Instance = null;
    public static GuildActivityLogic Instance()
    {
        return m_Instance;
    }

    public TabController m_TabController;

    public GameObject m_GuildRewardWindow;
    public UILabel m_LastWeekContri;
    public GameObject m_GuildRuleWindow;
    public UIImageButton m_GetRewardBtn;
    public UILabel m_GetRewardBtnLabel;

    public GameObject m_HideAndSeekRule;
    public GameObject m_HideAndSeekProgress;
    public UIImageButton m_OpenHideAndSeekBtn;
    public UILabel m_HideAndSeekTimeLabel;
    public UILabel[] m_HideAndSeedNpcLabel;
    public GameObject m_HideAndSeekDifficultyChoose;
    public TabController m_HideAndSeekTabController;

    void OnEnable()
    {
        m_Instance = this;

        for (int i = 0; i < m_HideAndSeedNpcLabel.Length; i++)
        {
            m_HideAndSeedNpcLabel[i].gameObject.SetActive(false);
        }

        m_TabController.delTabChanged = OnTabChanged;
        m_TabController.ChangeTab("Activity01-HideAndSeek");

        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }

        m_OpenHideAndSeekBtn.gameObject.SetActive(info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY));
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    void OnTabChanged(TabButton curButton)
    {
        if (curButton.name == "Activity01-HideAndSeek")
        {
            UpdateHideAndSeekContent();
        }
        else if (curButton.name == "Activity02-PaoShang")
        {
            // 全部交给GuildPaoShang处理
        }
    }

    void OnGuildRewardClick()
    {
        m_GuildRewardWindow.SetActive(true);

        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        if (info.LastWeekContri == GlobeVar.INVALID_ID)
        {
            // 新人 没有公会积分
            m_LastWeekContri.text = "0";
        }
        else
        {
            m_LastWeekContri.text = info.LastWeekContri.ToString();
        }        

        UpdateGetRewardBtn();
    }

    void OnGuildRewardCloseClick()
    {
        m_GuildRewardWindow.SetActive(false);
    }

    void OnGetRewardClick()
    {
        CG_GUILD_REQ_WEEKREWARD pak = (CG_GUILD_REQ_WEEKREWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_REQ_WEEKREWARD);
        pak.NoParam = 1;
        pak.SendPacket();
    }

    void OnRewardRuleClick()
    {
        if (m_GuildRuleWindow.GetComponent<GuildRuleWindow>() != null)
        {
            m_GuildRuleWindow.GetComponent<GuildRuleWindow>().Show(GuildRuleWindow.GUILDRULE_TYPE.TYPE_REWARD);
        }
    }

    public void UpdateGetRewardBtn()
    {
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        m_GetRewardBtn.isEnabled = (info.LastWeekContri != GlobeVar.INVALID_ID && !GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GET_GUILD_WEEKREWARD));
        m_GetRewardBtnLabel.text = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GET_GUILD_WEEKREWARD) ? StrDictionary.GetClientDictionaryString("#{1038}") : StrDictionary.GetClientDictionaryString("#{1378}");
    }

    void UpdateHideAndSeekContent()
    {
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        m_OpenHideAndSeekBtn.isEnabled = !info.HideAndSeekWeek;

        if (info.IsInHideAndSeekActivity())
        {
            m_HideAndSeekRule.SetActive(false);
            m_HideAndSeekProgress.SetActive(true);

            for (int i = 0; i < m_HideAndSeedNpcLabel.Length && i < info.HideAndSeekNpcInfo.Count; i ++ )
            {
                m_HideAndSeedNpcLabel[i].text = StrDictionary.GetClientDictionaryString(
                    "#{10504}", 
                    Utils.GetNpcNameBySceneNpcId(info.HideAndSeekNpcInfo[i].SceneNpcId),
                    info.HideAndSeekNpcInfo[i].IsFound ? 1 : 0);
                m_HideAndSeedNpcLabel[i].gameObject.SetActive(true);
            }            
        }
        else
        {
            m_HideAndSeekRule.SetActive(true);
            m_HideAndSeekProgress.SetActive(false);

            m_HideAndSeekTimeLabel.text = StrDictionary.GetClientDictionaryString("#{10496}");
            m_HideAndSeekTimeLabel.text += info.HideAndSeekWeek ? StrDictionary.GetClientDictionaryString("#{10502}") : "";
        }
    }

    public void HandleSyncHideAndSeek()
    {
        TabButton curTab = m_TabController.GetHighlightTab();
        if (curTab.name == "Activity01-HideAndSeek")
        {
            UpdateHideAndSeekContent();
        }
    }

    void OnOpenHideAndSeekClick()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{10520}"), "", OnOpenHideAndSeekOK);
    }

    void OnOpenHideAndSeekOK()
    {
        m_HideAndSeekDifficultyChoose.SetActive(true);
    }

    void OnOpenHideAndSeekOKClick()
    {
        int nDifficulty = GlobeVar.INVALID_ID;
        if (m_HideAndSeekTabController.GetHighlightTab().name == "Choose1-Easy")
        {
            nDifficulty = 0;
        }
        else if (m_HideAndSeekTabController.GetHighlightTab().name == "Choose2-Normal")
        {
            nDifficulty = 1;
        }
        else if (m_HideAndSeekTabController.GetHighlightTab().name == "Choose3-Hard")
        {
            nDifficulty = 2;
        }

        if (nDifficulty == GlobeVar.INVALID_ID)
        {
            m_HideAndSeekDifficultyChoose.SetActive(false);
            return;
        }

        CG_GUILD_OPEN_HIDEANDSEEK pak = (CG_GUILD_OPEN_HIDEANDSEEK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_OPEN_HIDEANDSEEK);
        pak.Difficulty = nDifficulty;
        pak.SendPacket();

        m_HideAndSeekDifficultyChoose.SetActive(false);
    }

    void OnOpenHideAndSeekCancelClick()
    {
        m_HideAndSeekDifficultyChoose.SetActive(false);
    }
}
