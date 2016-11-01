using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.Mission;
using Games.LogicObj;
using Module.Log;

public class GuildMission : MonoBehaviour {
    
    // 任务相关
    public UILabel m_MisNameLabel;  // 任务名字
    public UILabel m_MisInfoLabel;  // 任务描述
    public UILabel m_MisMoneyLabel; // 金币
    public UILabel m_MisExpLabel;   // 经验
    public UILabel m_MisOptButtonLabel; // 任务 按钮文字
    public UILabel m_MisRoundInfoLabel; // 任务环数

    // 帮会相关
    public UILabel m_GuildMisAssignTimesLabel;    // 帮会任务次数
    public UILabel m_GuildMisCanAcptTimesLabel;   // 帮会任务可开启次数
    public UILabel m_OpenInfoLabel;      // 帮会任务开启信息
    public UILabel m_GuildWealthLabel;   // 帮会财富

    public UIImageButton m_OpenButton;  // 开启发布按钮
    public UIImageButton m_JoinButton;  // 参与按钮
    public UIImageButton m_MissionOptButton;    // 任务操作按钮

    private int m_nMisionData;   // 任务数据
    public int MisionData
    {
        get { return m_nMisionData; }
        set {
            m_nMisionData = value;
            UpdateMissionInfo(m_nMisionData);
        }
    }

    private static GuildMission m_Instance = null;
    public static GuildMission Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
    }

	// Use this for initialization
	void Start () {
        }
	
    void OnEnable()
    {
        CleanGuildData();
        AskGuildMissionData();
        MisionData = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_GUILDMISSION_DAILYDATA);
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    // 任务显示相关
    void UpdateMissionInfo(int nData)
    {
        CleanMissionInfo();

        int nMissionID = nData % 10000;
        int nRoundIndex = (nData / 10000) % 100;
        int nAcptedTimes = nData / 1000000;

        // 大于0 才是 帮会任务
        // 没有帮会 也不显示
        PlayerData MyPlayerData = GameManager.gameManager.PlayerDataPool;
        if (MyPlayerData == null)
        {
            return;
        }
        if (MyPlayerData.GuildInfo == null)
        {
            return;
        }
        if (false == MyPlayerData.IsHaveGuild())
        {
            return;
        }

        Tab_GuildMissionGuild guildMisGuild = TableManager.GetGuildMissionGuildByID(MyPlayerData.GuildInfo.GuildLevel, 0);
        if (guildMisGuild == null)
        {
			LogModule.ErrorLog("Can not find guildMisGuild {0}", MyPlayerData.GuildInfo.GuildLevel);
            return;
        }

        // 按钮显示否
        if (nAcptedTimes <= guildMisGuild.MemMaxTimesOneDay)
        {
            if (nRoundIndex < guildMisGuild.MemMisRoundNumOnce)
            {
                // 还没任务呢
                if (nMissionID <= 0)
                {
                    if (m_JoinButton)
                    {
                        m_JoinButton.isEnabled = true;
                    }
                }
                else
                {
                    if (m_MissionOptButton)
                    {
                        m_MissionOptButton.isEnabled = true;
                    }
                }
            }
            else
            {
                if (m_JoinButton && nAcptedTimes < guildMisGuild.MemMaxTimesOneDay)
                {
                    m_JoinButton.isEnabled = true;
                }
            }
        }

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer == null)
        {
            return;
        }

        if (nMissionID > 0)
        {
            Tab_MissionBase misTab = TableManager.GetMissionBaseByID(nMissionID, 0);
			if (misTab == null)
			{
				LogModule.ErrorLog("Can not find missionBase {0}", nMissionID);
				return;
			}
			else
            if (misTab.MissionType != (int)MISSIONTYPE.MISSION_GUILD)
            {
                return;
            }

            Tab_MissionDictionary misDic = TableManager.GetMissionDictionaryByID(nMissionID, 0);
            if (misDic == null)
            {
				LogModule.ErrorLog("Can not find missionDictionary {0}", nMissionID);
                return;
            }

            Tab_GuildMission guildMis = TableManager.GetGuildMissionByID(misTab.GuildMissionTabID, 0);
            if (guildMis == null)
            {
				LogModule.ErrorLog("Can not find guidMission {0}", misTab.GuildMissionTabID);
                return;
            }
            
            
            if (m_MisNameLabel && m_MisInfoLabel)
            {
                m_MisNameLabel.text = string.Format(misDic.MissionName, "[ffffff]", "[ffffff]");
                m_MisInfoLabel.text = misDic.MissionDesc;
            }

            // 金币 经验
            Tab_GuildMissionAward awardTab = TableManager.GetGuildMissionAwardByID(mainPlayer.BaseAttr.Level, 0);
            if (awardTab == null)
            {
				LogModule.ErrorLog("Can not find guidMissionAward {0}", mainPlayer.BaseAttr.Level);
                return;
            }

            float fMisMoney = guildMis.AwardMoney * guildMisGuild.AwardFactor * awardTab.GetExpQualityFactorbyIndex((int)(MISSION_QUALITY.MISSION_QUALITY_PURPLE - 1)) * awardTab.MoneyFactor;
            float fMisExp = guildMis.AwardExp * guildMisGuild.AwardFactor * awardTab.GetExpQualityFactorbyIndex((int)(MISSION_QUALITY.MISSION_QUALITY_PURPLE - 1)) * awardTab.ExpFactor;

            if (m_MisMoneyLabel && m_MisExpLabel)
            {
                m_MisMoneyLabel.text = ((int)fMisMoney).ToString();
                m_MisExpLabel.text = ((int)fMisExp).ToString();
            }

            UpdateMissionState(nMissionID);

            // 任务环数
            if (m_MisRoundInfoLabel && nRoundIndex >= 0)
            {
                m_MisRoundInfoLabel.text = nRoundIndex + "/" + guildMisGuild.MemMisRoundNumOnce;
            }
        }
    }

    void CleanMissionInfo()
    {
        if (m_MisNameLabel && m_MisInfoLabel
            && m_MisMoneyLabel && m_MisExpLabel
            && m_MisRoundInfoLabel && m_MisOptButtonLabel)
        {
            m_MisNameLabel.text = Utils.GetDicByID(5435); // 默认字典
            m_MisInfoLabel.text = "";
            m_MisMoneyLabel.text = "0";
            m_MisExpLabel.text = "0";
            m_MisRoundInfoLabel.text = "0/0";
            m_MisOptButtonLabel.text = Utils.GetDicByID(5427);// 默认字典呗
        }

        if (m_JoinButton && m_MissionOptButton)
        {
            m_JoinButton.isEnabled = false;
            m_MissionOptButton.isEnabled = false;  // 默认开着吧
        }
    }

    public void UpdateMissionState(int nMissionID)
    {
        // 任务 按钮 字
        int nMisOptButtonDicID = 5427;
        bool isHaveMission = GameManager.gameManager.MissionManager.IsHaveMission(nMissionID);
        if (isHaveMission)
        {
            MissionState state = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
            if (state == MissionState.Mission_Accepted)
            {
                // 放弃任务
                nMisOptButtonDicID = 5428;
            }
            else if (state == MissionState.Mission_Completed)
            {
                nMisOptButtonDicID = 5429;
            }
        }
        else
        {
            nMisOptButtonDicID = 5427;
        }
        if (m_MisOptButtonLabel)
        {
            m_MisOptButtonLabel.text = Utils.GetDicByID(nMisOptButtonDicID);
        }
    }

    public void UpdateGuildData(GC_RET_GUIDMISSION_DATA pak)
    {
        PlayerData MyPlayerData = GameManager.gameManager.PlayerDataPool;
        if (MyPlayerData == null)
        {
            return;
        }
        if (MyPlayerData.GuildInfo == null)
        {
            return;
        }
        if (false == MyPlayerData.IsHaveGuild())
        {
            return;
        }

        // 帮主才能看见
        if (true == MyPlayerData.IsGuildChief())
        {
            m_OpenButton.isEnabled = true;
        }

        Tab_GuildMissionGuild guildMisGuild = TableManager.GetGuildMissionGuildByID(MyPlayerData.GuildInfo.GuildLevel, 0);
        if (guildMisGuild == null)
        {
			LogModule.ErrorLog("Can not find guidMissionGuid {0}", MyPlayerData.GuildInfo.GuildLevel);
            return;
        }

        // 发布次数
        if (m_GuildMisAssignTimesLabel && pak.HasAssignTimes)
        {
            m_GuildMisAssignTimesLabel.text = pak.AssignTimes + "/" + guildMisGuild.CanAssignTime;
        }
        // 可接次数
        if (m_GuildMisCanAcptTimesLabel && pak.HasAcceptTimes)
        {
            m_GuildMisCanAcptTimesLabel.text = pak.AcceptTimes + "/" + guildMisGuild.CanAcceptTimesOnce;/*((guildMisGuild.CanAssignTime - pak.AssignTimes) * guildMisGuild.CanAcceptTimesOnce);*/
        }
        // 帮会财富
        if (m_GuildWealthLabel && pak.HasGuildWeath)
        {
            m_GuildWealthLabel.text = pak.GuildWeath.ToString();
        }

        // 开启信息
        if (m_OpenInfoLabel)
        {
            m_OpenInfoLabel.text = StrDictionary.GetClientDictionaryString("#{5421}", guildMisGuild.ConsumeWealth, guildMisGuild.CanAcceptTimesOnce);
        }
    }

    void CleanGuildData()
    {
        if (m_GuildMisAssignTimesLabel && m_GuildMisCanAcptTimesLabel
            && m_OpenInfoLabel && m_GuildWealthLabel)
        {
            m_GuildMisAssignTimesLabel.text = "0/0";
            m_GuildMisCanAcptTimesLabel.text = "0/0";
            m_OpenInfoLabel.text = Utils.GetDicByID(5469);
            m_GuildWealthLabel.text = "0";
        }

        if (m_OpenButton)
        {
            m_OpenButton.isEnabled = false;
        }
    }

    // 请求 帮会任务数据
    void AskGuildMissionData()
    {
        // 没有帮会 不发包
        PlayerData MyPlayerData = GameManager.gameManager.PlayerDataPool;
        if (MyPlayerData == null)
        {
            return;
        }
        if (MyPlayerData.GuildInfo == null)
        {
            return;
        }
        if (false == MyPlayerData.IsHaveGuild())
        {
            return;
        }

        CG_ASK_GUIDMISSION_DATA askpak = (CG_ASK_GUIDMISSION_DATA)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GUIDMISSION_DATA);
        askpak.NoParam = 0;
        askpak.SendPacket();
    }

    // 开启帮会任务
    void OpenGuildMission()
    {
        // 没有帮会
        PlayerData MyPlayerData = GameManager.gameManager.PlayerDataPool;
        if (MyPlayerData == null)
        {
            return;
        }
        if (MyPlayerData.GuildInfo == null)
        {
            return;
        }
        if (false == MyPlayerData.IsHaveGuild())
        {
            return;
        }

        if (false == MyPlayerData.IsGuildChief())
        {
            return;
        }

        Tab_GuildMissionGuild guildMisGuild = TableManager.GetGuildMissionGuildByID(MyPlayerData.GuildInfo.GuildLevel, 0);
        if (guildMisGuild == null)
        {
			LogModule.ErrorLog("Can not find guidMissionGuid {0}", MyPlayerData.GuildInfo.GuildLevel);
            return;
        }

        string str = StrDictionary.GetClientDictionaryString("#{5432}", guildMisGuild.ConsumeWealth, guildMisGuild.CanAcceptTimesOnce);
        MessageBoxLogic.OpenOKCancelBox(str, null, OnOpenGuildMisMessageOK, OnCancelClick);
    }

    void OnOpenGuildMisMessageOK()
    {
        CG_ASK_GUIDMISSION_OPEN askpak = (CG_ASK_GUIDMISSION_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GUIDMISSION_OPEN);
        askpak.NoParam = 0;
        askpak.SendPacket();
    }

    // 参与帮会任务
    void JoinGuildMission()
    {
        // 没有帮会
        PlayerData MyPlayerData = GameManager.gameManager.PlayerDataPool;
        if (MyPlayerData == null)
        {
            return;
        }
        if (MyPlayerData.GuildInfo == null)
        {
            return;
        }
        if (false == MyPlayerData.IsHaveGuild())
        {
            return;
        }

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer == null)
        {
            return;
        }

        // 接任务 判断次数
        Tab_GuildMissionGuild guildMisGuild = TableManager.GetGuildMissionGuildByID(MyPlayerData.GuildInfo.GuildLevel, 0);
        if (guildMisGuild == null)
        {
			LogModule.ErrorLog("Can not find guidMissionGuid {0}", MyPlayerData.GuildInfo.GuildLevel);
            return;
        }

        int nAcptedTimes = MisionData / 1000000;
        if (nAcptedTimes >= guildMisGuild.MemMaxTimesOneDay)
        {
            mainPlayer.SendNoticMsg(false, "#{5437}");
            return;
        }

        CG_ASK_GUIDMISSION_ACCEPT askpak = (CG_ASK_GUIDMISSION_ACCEPT)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GUIDMISSION_ACCEPT);
        askpak.NoParam = 0;
        askpak.SendPacket();
    }

    // 接任务
    void MissionOpt()
    {
        int nMissionID = MisionData % 10000;
        if (nMissionID <= 0)
        {
            return;
        }
        bool isHaveMission = GameManager.gameManager.MissionManager.IsHaveMission(nMissionID);
        if (isHaveMission)
        {
            MissionState state = (MissionState)GameManager.gameManager.MissionManager.GetMissionState(nMissionID);
            if (state == MissionState.Mission_Accepted)
            {
                // 放弃任务
                string str = Utils.GetDicByID(5440);
                MessageBoxLogic.OpenOKCancelBox(str, null, OnAbandonMessageOK, OnCancelClick);
            }
            else if (state == MissionState.Mission_Completed)
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(136);  //get_reward
                GameManager.gameManager.MissionManager.CompleteMission(nMissionID);
            }
        }
        else
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(135);  //yes
            GameManager.gameManager.MissionManager.AcceptMission(nMissionID);
        }
    }

    void OnAbandonMessageOK()
    {
        int nMissionID = MisionData % 10000;
        GameManager.gameManager.MissionManager.AbandonMission(nMissionID);
    }
    
    void OnCancelClick()
    {
        MessageBoxLogic.CloseBox();
    }

}
