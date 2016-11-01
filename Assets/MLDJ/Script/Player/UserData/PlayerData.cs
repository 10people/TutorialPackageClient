/********************************************************************************
 *	文件名：	PlayerData.cs
 *	全路径：	\Script\Player\UserData\PlayerData.cs
 *	创建人：	李嘉
 *	创建时间：2013-12-30
 *
 *	功能说明：主角游戏全程需要保留数据
 *	修改记录：
*********************************************************************************/

using System;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.ImpactModle;
using Games.LogicObj;
using Games.SkillModle;
using UnityEngine;
using System.Collections;
using Games.Item;
using Games.MountModule;
using Games.TitleInvestitive;
using Games.ChatHistory;
using Games.Fellow;
using Games.AwardActivity;
using Games.MoneyTree;
using Games.UserCommonData;
using Games.DailyMissionData;
using Games.DailyLuckyDraw;
using Games.SwordsMan;
using Games.MonthMultiple;
using Games.YuanBaoShopData;
using Games.JuQingCopySceneData;
using GCGame;
using GCGame.Table;

public enum MONEYTYPE
{
    MONEYTYPE_INVALID = -1,
    MONEYTYPE_COIN = 0,     //金币
    MONEYTYPE_YUANBAO = 1,  //元宝
    MONEYTYPE_YUANBAO_BIND = 2,  //绑定元宝

    MONEYTYPE_TYPECOUNT
}

public enum Consume_Type
{
    YUANBAO = 1,
    COIN = 2,
    CURRENCY = 3,
    EXP = 4,
    ITEM = 5,
}

public enum Consume_SubType
{
    YUANBAO_NORMAL = 1,
    YUANBAO_BIND = 2,
    COIN = 1,
}

//服务器标志、枚举同步
public enum SERVER_FLAGS_ENUM
{
    FLAG_START = 0,         //开始标记
    FLAG_VIP = FLAG_START,  //VIP开关
    FLAG_SNS,               //分享功能
    FLAG_ACTIVATION,        //激活界面
    FLAG_PAYACT,            //充值活动开关
    FLAG_TIMEFASHION,       //限时时装
    FLAG_MOUNTTAB,          //元宝商店坐骑分页
    FLAG_FASHIONTAB,        //人物界面时装分页
    FLAG_CYFANS,            //畅游老玩家回馈奖励开关
    FLAG_WISHING,           //许愿池开关
    FLAG_LIGHTSKILL,        //轻功开关
    FLAG_DAILYLUCKYDRAW,    //每日幸运抽奖
	FLAG_LOVERFLOWER,		//情人节送花开关
	FLAG_LOVERTHING,		//情人节定情开关
    FLAG_BUYBACKCSN,        //副本回购
    FLAG_PRESENT,           //元宝商城赠送
    FLAG_COMPLAIN,          //投诉
    FLAG_TRAINING,          //经脉开关
    FLAG_SKILLBREAKAUTOMOVE,//使用技能时打断自动寻路
    FLAG_SYSTEMSHOP,        //系统商店（开关）
    FLAG_FLYWING,           //翅膀开关
    FLAG_KEJIYUAN,           //科技园开关
    FLAG_NUM,               //当前使用数量
    FLAG_MAX = 30,          //最大使用数量
};

// 每日签到元素的四种状态
public enum DaySignInStates
{
	INVALID = 0,
	NOTSIGNEN = 1,
	NORMALSIGNED = 2,
	VIPSIGNEDHALF = 3,
	VIPSIGNED = 4,
}

public class VitalityData
{
    public void CleanUp()
    {
        m_Vitality = 0;
        m_Open = 0;
        m_Limit = 0;
        m_Enough = 0;
    }
    public void HandlePacket(GC_SYNC_VITALITY packet)
    {
        if (packet.HasVitality)
        {
            m_Vitality = packet.Vitality;
        }
        if (packet.HasOpen)
        {
            m_Open = packet.Open;
        }
        if (packet.HasLimit)
        {
            m_Limit = packet.Limit;
        }
        if (packet.HasEnough)
        {
            m_Enough = packet.Enough;
        }
        if (ChatInfoLogic.Instance())
        {
            ChatInfoLogic.Instance().RefreshVitaliy();
        }
    }
    private int m_Vitality;
    public int Vitality
    {
        get { return m_Vitality; }
        set { m_Vitality = value; }
    }
    private int m_Open;
    public int Open
    {
        get { return m_Open; }
        set { m_Open = value; }
    }
    private int m_Limit;
    public int Limit
    {
        get { return m_Limit; }
        set { m_Limit = value; }
    }
    private int m_Enough;
    public int Enough
    {
        get { return m_Enough; }
        set { m_Enough = value; }
    }
}
public class PlayerData
{
    public PlayerData()
    {
		// 初始化和清理要分清楚，否则很多初始化逻辑会执行两遍
		Init();
//        CleanUp();
    }

	public void Init()
	{
		m_AddFriendVlue  = new PlayerAddFriendVlue(); 
		m_MainPlayerBaseAttr = new BaseAttr();
		m_oBackPack = new GameItemContainer(GameItemContainer.SIZE_BACKPACK, GameItemContainer.Type.TYPE_BACKPACK);
		m_oEquipPack = new GameItemContainer(GameItemContainer.SIZE_EQUIPPACK, GameItemContainer.Type.TYPE_EQUIPPACK);
		m_oBuyBackPack = new GameItemContainer(GameItemContainer.MAXSIZE_BUYBACKPACK, GameItemContainer.Type.TYPE_BUYBACKPACK);
		m_oStoragePack = new GameItemContainer(GameItemContainer.SIZE_STORAGEPACK, GameItemContainer.Type.TYPE_STORAGEPACK);
		//清理玩家切场景缓存数据
		m_EnterSceneCache = new PlayerEnterSceneCache();
		
		//玩家组队信息
		m_TeamInfo = new Team();
		if (null != m_TeamInfo)
		{
			m_TeamInfo.CleanUp();
		}
		
		m_GuildInfo = new Guild();
		m_GuildList = new GuildList();
        m_GuildShopItemList = new List<GuildShopItem>();
        m_GoldMoneyShopItemList = new List<GoldMoneyShopItem>();
        m_GuildDKP = 0;
		
		m_objMountParam = new MountParam();
		m_objMountParam.CleanUp();
		// 玩家称号
		m_TitleInvestitive = new GameTitleInvestitive();
		m_IsLockPriorTitle = false;
		// 聊天记录
		m_ChatHistory = new GameChatHistory();
		// 最近私聊对象记录
		m_TellChatSpeakers = new LastSpeakerRecord();
		// 语音聊天下载记录
		m_VoiceChatDownloadRecord = new VoiceChatDownload();
		
		//初始化玩家关系数据
		m_FriendList = new RelationList();
		m_BlackList = new RelationList();
		m_HateList = new RelationList();
		
		//伙伴
		m_FellowContainer = new FellowContainer();
        m_FriendBreedingFellowInfo = new FriendBreedingFellow();
		m_LastProcreateTime = 0;
		m_GoneProcreateTime = 0;
		m_ProcreateTime = 0;
		m_FellowPlayerEffect = false;
		m_ActiveFellowSkill = new List<int>();
		m_FellowGainCount_Free = 0;
		m_FellowGainCount_Coin = 0;
		m_FellowGainCount_YuanBao = 0;
		m_FellowGainCD_Coin = 0;
		m_FellowTickTime = 0f;
		
		// 奖励活动
		m_AwardActivityData = new AwardActivityData();
		m_AwardActivityData.CleanUp();
		
		m_MoneyTreeData = new MoneyTreeData();  // 摇钱树
		m_MoneyTreeData.CleanUp();
		
		m_OwnSkillInfo = new OwnSkillData[(int)SKILLDEFINE.MAX_SKILLNUM];
		for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
		{
			m_OwnSkillInfo[i] = new OwnSkillData();
			m_OwnSkillInfo[i].CleanUp();
		}
		m_nSkillPublicTime = 0;
		m_bIsCanPKLegal = false;
		m_Money = new MONEY();
		m_nProfession = -1;
		m_nVipCost = -1;
		m_ClientImpactInfo = new List<ClientImpactInfo>();
		
		m_CommonData = new UserCommonData(); // 玩家通用数据
		m_DailyMissionData = new DailyMissionData();    // 日常任务数据
		
		m_JuQingCopySceneData = new JuQingCopySceneData();
		
		m_FashionDeadline = new int[GlobeVar.MAX_FASHION_SIZE];
		for (int i = 0; i < GlobeVar.MAX_FASHION_SIZE; i++)
		{
			m_FashionDeadline[i] = 0;
		}
		m_CurFashionID = GlobeVar.INVALID_ID;
		m_bShowFashion = false;
		m_ModelVisualID = GlobeVar.INVALID_ID;
		
		//每日幸运抽奖
		m_DailyLuckyDrawData = new DailyLuckyDrawData();
		
		//宝石
		m_GemData = new GemData();
		m_GemData.CleanUp();
		
		//师门
		m_MasterInfo = new Master();
		m_MasterPreList = new MasterPreviewList();
		m_TorchValue = 0;
		m_MasterSkillName = new Dictionary<int, string>();
		m_nPkModle = -1;
		//体能
		m_StaminaCountDown = GlobeVar.INVALID_ID;
		//隐身级别
		m_nStealthLev = 0;
        //是否开启Cabal挂机模式（自动接、交任务等）
        IsOpenCabalAuto = false;
		//是否开启挂机模式
		m_IsOpenAutoCombat = false;
		//最近一次打断 自动战斗的时间
		m_fBreakAutoCombatTime = 0.0f;
		//是否开始自动战斗
		m_bAutoComabat = false;
		
		m_oSwordsManBackPack = new SwordsManContainer(SwordsManContainer.SWORDSMAN_BACKPACK_SIZE, SwordsManContainer.PACK_TYPE.TYPE_BACKPACK);
		m_oSwordsManEquipPack = new SwordsManContainer(SwordsManContainer.SWORDSMAN_EQUIPPACK_SIZE, SwordsManContainer.PACK_TYPE.TYPE_EQUIPPACK);
		m_nSwordsManScore = 0;
		m_nSwordsManVisitState = 0;
		m_nSwordsManCombat = 0;
		
		m_ActivityRewardTable = new Dictionary<int, ActivityRewardData>();
		m_JoinNumRewardTable = new Dictionary<int, JoinNumRewardData>();
		m_OnlineAwardTable = new Dictionary<int, OnlineAwardLine>();
		m_NewOnlineAwardTable = new Dictionary<int, OnlineAwardLine>();
		m_WarPushMessaeg = new List<GuildWarPushMessageInfo>();
		m_LoverGUID = GlobeVar.INVALID_GUID;
		//上次寄售行吆喝时间
		m_fLastConsignShareTime = 0.0f;
		m_PayActivity.CleanUp();
		m_CostRebate.CleanUp();
		m_SpecailTimePayRebateData.CleanUp();
		
		m_RollNoticeList = new List<string>();
		
		m_bForthSkillFlag = false;
		
		m_MainBindChildren = new List<int>();
		m_MainBindParent = -1;
		AutoTeamState = false;
		
		m_MissionSortList = new List<int>();
		m_MissionGridLastPos = Vector3.zero;
		m_BossData = new GuildActivityBossData();
		m_bIsClickChargeActivitySY = true;
		m_bIsClickChargeActivityCZ = true;
		m_bIsClickChargeActivitySZ = true;
		m_bIsClickWishingWell = true;
		m_bIsShowVipTip = false;
		m_IsClickCostRebate = true;
		m_IsClickSpecialTimePayRebate = true;
		
		m_WishingWell_InTime = 0;
		m_WishingWell_OutTime = 0;
		m_WishingWell_Limit = 0;
		m_WishingWell_Day = 0;
		m_NewServerMountBonusNextTime = 0;
        m_GoldMoneyShopNextTime = 0;
		
		m_LastTouchedNpc = 0;
		
		// 清一下NewItemGet UI 的 list吧
		NewItemGetLogic.m_ItemListBuffer = new List<NewItemGetLogic.InitDataInfo>();
		
		m_MonthMultiple = new GameMonthMultiple();
		
		m_PresentRecord = new ShoppingListRecord(GlobeVar.SHOPPINGLISTCOUNT_PLAYER_PRESENT, GlobeVar.SHOPPINGLISTLIFE_PRESENT);
		m_WaitPayRecord = new ShoppingListRecord(GlobeVar.SHOPPINGLISTCOUNT_PLAYER_WAITPAY, GlobeVar.SHOPPINGLISTLIFE_WAITPAY);
		
		m_ShoppingCart = new ShoppingCart();
		
		m_bIsInTeamFollow = false;
		
		m_bIsShowHongBaoTip = false;
		m_bHongBaoRankFlag = false;
		
		m_bIsShowLoverFlowerTip = false;
		m_bIsShowLoverThingTip = false;
		// m_nReviewResult = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.DO_NOTHING;
		
		m_JuYiCount = 0;
		
		m_isWP8chargeMode = false;

        m_VitalityData = new VitalityData();

        //美人红点配置
        m_belleConfigData = new BelleConfigData();

        m_SevenDaysRewardData = new SevenDaysRewardProxy();

        //Debug.Log("fanzhipeng ---------------------------------------------------------------------------------------- init()");
	}

    public void CleanUp()
    {
        if (null != m_TeamInfo)
        {
            m_TeamInfo.CleanUp();
        }
        m_objMountParam.CleanUp();

        m_FriendBreedingFellowInfo.CleanUp();
        m_LastProcreateTime = 0;
        m_GoneProcreateTime = 0;
        m_ProcreateTime = 0;
        m_FellowPlayerEffect = false;
        m_ActiveFellowSkill = new List<int>();
        m_FellowGainCount_Free = 0;
        m_FellowGainCount_Coin = 0;
        m_FellowGainCount_YuanBao = 0;
        m_FellowGainCD_Coin = 0;
        m_FellowTickTime = 0f;

        // 奖励活动
        m_AwardActivityData.CleanUp();
		 // 摇钱树
		m_MoneyTreeData.CleanUp();

        m_OwnSkillInfo = new OwnSkillData[(int)SKILLDEFINE.MAX_SKILLNUM];
        for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
        {
            m_OwnSkillInfo[i] = new OwnSkillData();
            m_OwnSkillInfo[i].CleanUp();
        }
        if (null != m_JuQingCopySceneData)
		{
			m_JuQingCopySceneData.CleanUp();
		}

        m_FashionDeadline = new int[GlobeVar.MAX_FASHION_SIZE];
        for (int i = 0; i < GlobeVar.MAX_FASHION_SIZE; i++)
        {
            m_FashionDeadline[i] = 0;
        }
        m_CurFashionID = GlobeVar.INVALID_ID;
        m_bShowFashion = false;
        m_ModelVisualID = GlobeVar.INVALID_ID;

        //宝石
 		m_GemData.CleanUp();

        //师门
        m_TorchValue = 0;
        m_nPkModle = -1;
        //体能
        m_StaminaCountDown = GlobeVar.INVALID_ID;
        //隐身级别
        m_nStealthLev = 0;
        //是否开启Cabal挂机模式（自动接、交任务等）
        IsOpenCabalAuto = false;
        //是否开启挂机模式
        m_IsOpenAutoCombat = false;
        //最近一次打断 自动战斗的时间
        m_fBreakAutoCombatTime = 0.0f;
        //是否开始自动战斗
        m_bAutoComabat = false;

        m_nSwordsManScore = 0;
        m_nSwordsManVisitState = 0;
        m_nSwordsManCombat = 0;

        m_ActivityRewardTable = new Dictionary<int, ActivityRewardData>();
        m_JoinNumRewardTable = new Dictionary<int, JoinNumRewardData>();
        m_OnlineAwardTable = new Dictionary<int, OnlineAwardLine>();
        m_NewOnlineAwardTable = new Dictionary<int, OnlineAwardLine>();
        m_WarPushMessaeg = new List<GuildWarPushMessageInfo>();
        m_LoverGUID = GlobeVar.INVALID_GUID;
        //上次寄售行吆喝时间
        m_fLastConsignShareTime = 0.0f;
		m_PayActivity.CleanUp();
		m_CostRebate.CleanUp();
		m_SpecailTimePayRebateData.CleanUp();

        m_RollNoticeList = new List<string>();

        m_bForthSkillFlag = false;

        m_MainBindChildren = new List<int>();
        m_MainBindParent = -1;
        AutoTeamState = false;

        m_MissionSortList = new List<int>();
        m_MissionGridLastPos = Vector3.zero;
        m_BossData = new GuildActivityBossData();
        m_bIsClickChargeActivitySY = true;
        m_bIsClickChargeActivityCZ = true;
        m_bIsClickChargeActivitySZ = true;
        m_bIsClickWishingWell = true;
        m_bIsShowVipTip = false;
        m_IsClickCostRebate = true;
        m_IsClickSpecialTimePayRebate = true;

        m_WishingWell_InTime = 0;
        m_WishingWell_OutTime = 0;
        m_WishingWell_Limit = 0;
        m_WishingWell_Day = 0;
        m_NewServerMountBonusNextTime = 0;
        m_GoldMoneyShopNextTime = 0;

        m_LastTouchedNpc = 0;

        // 清一下NewItemGet UI 的 list吧
        NewItemGetLogic.m_ItemListBuffer = new List<NewItemGetLogic.InitDataInfo>();

        m_PresentRecord = new ShoppingListRecord(GlobeVar.SHOPPINGLISTCOUNT_PLAYER_PRESENT, GlobeVar.SHOPPINGLISTLIFE_PRESENT);
        m_WaitPayRecord = new ShoppingListRecord(GlobeVar.SHOPPINGLISTCOUNT_PLAYER_WAITPAY, GlobeVar.SHOPPINGLISTLIFE_WAITPAY);

        m_ShoppingCart = new ShoppingCart();

        m_bIsInTeamFollow = false;
        m_bIsShowHongBaoTip = false;
        m_bHongBaoRankFlag = false;

		m_bIsShowLoverFlowerTip = false;
		m_bIsShowLoverThingTip = false;
       // m_nReviewResult = (int)Games.GlobeDefine.GameDefine_Globe.REVIEW_TYPE.DO_NOTHING;

        m_JuYiCount = 0;

        m_isWP8chargeMode = false;

        if ( m_VitalityData != null )
        {
            m_VitalityData.CleanUp();
        }

        if (m_belleConfigData != null)
        {
            m_belleConfigData = null;
        }
        
    }

    private OwnSkillData[] m_OwnSkillInfo;
    public OwnSkillData[] OwnSkillInfo
    {
        get { return m_OwnSkillInfo; }
        set { m_OwnSkillInfo = value; }
    }

    private int m_CrashSkillCDTime;
    public int CrashSkillCDTime
    {
        get { return m_CrashSkillCDTime; }
        set { m_CrashSkillCDTime = value; }
    }


    private int m_nSkillPublicTime; //技能公共CD 单位：毫秒
    public int SkillPublicTime
    {
        get { return m_nSkillPublicTime; }
        set { m_nSkillPublicTime = value; }
    }
    public void CleanUpOwnSkillInfo()
    {
        for (int i = 0; i < OwnSkillInfo.Length; i++)
        {
            OwnSkillInfo[i].CleanUp();
        }
    }
    private bool m_bIsCanPKLegal;
    public bool IsCanPKLegal
    {
        get { return m_bIsCanPKLegal; }
        set { m_bIsCanPKLegal = value; }
    }
    private int m_nPkModle;
    public int PkModle
    {
        get { return m_nPkModle; }
        set { m_nPkModle = value; }
    }
    //是否开启Cabal挂机模式（自动接、交任务等）
    private bool m_IsOpenCabalAuto;
    public bool IsOpenCabalAuto
    {
        get { return m_IsOpenCabalAuto; }
        set { m_IsOpenCabalAuto = value; }
    }
    //是否开启挂机模式
    private bool m_IsOpenAutoCombat;
    public bool IsOpenAutoCombat
    {
        get { return m_IsOpenAutoCombat; }
        set { m_IsOpenAutoCombat = value; }
    }
    //最近一次打断 自动战斗的时间
    private float m_fBreakAutoCombatTime;
    public float BreakAutoCombatTime
    {
        get { return m_fBreakAutoCombatTime; }
        set { m_fBreakAutoCombatTime = value; }
    }
    //是否开始自动战斗
    protected bool m_bAutoComabat;
    public bool AutoComabat
    {
        get { return m_bAutoComabat; }
        set { m_bAutoComabat = value; }
    }
    private int m_nStealthLev;
    public int StealthLev
    {
        get { return m_nStealthLev; }
        set { m_nStealthLev = value; }
    }
    //职业
    private int m_nProfession;
    public int Profession
    {
        get { return m_nProfession; }
        set { m_nProfession = value; }
    }
    //上次寄售行吆喝时间
    private float m_fLastConsignShareTime = 0.0f;
    public float LastConsignShareTime
    {
        get { return m_fLastConsignShareTime; }
        set { m_fLastConsignShareTime = value; }
    }
    //VIP
    private int m_nVipCost;
    public int VipCost
    {
        get { return m_nVipCost; }
        set { m_nVipCost = value; }
    }
    private int m_nPoolCombatValue;
    public int PoolCombatValue
    {
        get { return m_nPoolCombatValue; }
        set { m_nPoolCombatValue = value; }
    }
    private List<ClientImpactInfo> m_ClientImpactInfo;
    public List<ClientImpactInfo> ClientImpactInfo
    {
        get { return m_ClientImpactInfo; }
        set { m_ClientImpactInfo = value; }
    }
    private int m_MainBindParent;
    public int MainBindParent
    {
        get { return m_MainBindParent; }
        set { m_MainBindParent = value; }
    }
    private List<int> m_MainBindChildren;
    public List<int> MainBindChildren
    {
        get { return m_MainBindChildren; }
        set { m_MainBindChildren = value; }
    }
    //主角基础属性
    //Obj_MainPlayer已经将自己的BaseAttr屏蔽掉，而直接从这里读取
    private BaseAttr m_MainPlayerBaseAttr;
    public BaseAttr MainPlayerBaseAttr
    {
        get { return m_MainPlayerBaseAttr; }
        set { m_MainPlayerBaseAttr = value; }
    }
	// 好友 
	private PlayerAddFriendVlue m_AddFriendVlue ;
	public PlayerAddFriendVlue AddFriendVlue 
	{
		get { return m_AddFriendVlue; }
		set { m_AddFriendVlue = value; }
	}
    //////////////////////////////////////////////////////////////////////////
    //收到EnterScene包后的数据缓存
    //////////////////////////////////////////////////////////////////////////
    PlayerEnterSceneCache m_EnterSceneCache;
    public PlayerEnterSceneCache EnterSceneCache
    {
        get { return m_EnterSceneCache; }
        set { m_EnterSceneCache = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    //背包
    //////////////////////////////////////////////////////////////////////////
    //取得背包
    public GameItemContainer GetItemContainer(GameItemContainer.Type type)
    {
        switch (type)
        {
            case GameItemContainer.Type.TYPE_BACKPACK: return m_oBackPack;
            case GameItemContainer.Type.TYPE_EQUIPPACK: return m_oEquipPack;
            case GameItemContainer.Type.TYPE_BUYBACKPACK: return m_oBuyBackPack;
            case GameItemContainer.Type.TYPE_STORAGEPACK: return m_oStoragePack;
        }
        return null;
    }

    private GameItemContainer m_oBackPack;
    public GameItemContainer BackPack
    {
        get { return m_oBackPack; }
        set { m_oBackPack = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    //装备槽位
    //////////////////////////////////////////////////////////////////////////
    private GameItemContainer m_oEquipPack;
    public GameItemContainer EquipPack
    {
        get { return m_oEquipPack; }
        set { m_oEquipPack = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    //回购槽位
    //////////////////////////////////////////////////////////////////////////
    private GameItemContainer m_oBuyBackPack;
    public GameItemContainer BuyBackPack
    {
        get { return m_oBuyBackPack; }
        set { m_oBuyBackPack = value; }
    }

    private GameItemContainer m_oStoragePack;
    public Games.Item.GameItemContainer StoragePack
    {
        get { return m_oStoragePack; }
        set { m_oStoragePack = value; }
    }
    //////////////////////////////////////////////////////////////////////////
    //坐骑数据
    //////////////////////////////////////////////////////////////////////////
    public MountParam m_objMountParam;
    //public MountParam ObjMountParam
    //{
    //    get { return m_objMountParam; }
    //    set { m_objMountParam = value; }
    //}

    //////////////////////////////////////////////////////////////////////////
    //组队数据
    //////////////////////////////////////////////////////////////////////////
    private Team m_TeamInfo;
    public Team TeamInfo
    {
        get { return m_TeamInfo; }
        set { m_TeamInfo = value; }
    }

    public bool IsHaveTeam()
    {
        return (null != m_TeamInfo && m_TeamInfo.TeamID != GlobeVar.INVALID_ID);
    }
    //某个Guid是否为队伍成员
    public bool IsTeamMem(UInt64 guid)
    {
        if (GlobeVar.INVALID_ID == m_TeamInfo.TeamID ||
            GlobeVar.INVALID_GUID == guid)
        {
            return false;
        }
        for (int i = 0; i < GlobeVar.MAX_TEAM_MEMBER; i++)
        {
            if (null != m_TeamInfo.GetTeamMember(i) &&
                guid == m_TeamInfo.GetTeamMember(i).Guid)
            {
                return true;
            }
        }
        return false;
    }

    //////////////////////////////////////////////////////////////////////////
    //帮会数据
    //////////////////////////////////////////////////////////////////////////
    private Guild m_GuildInfo;                  //帮会数据
    public Guild GuildInfo
    {
        get { return m_GuildInfo; }
        set { m_GuildInfo = value; }
    }

    // 服务器发包逻辑修改 玩家被审批时 不同步公会信息 即不算有公会
    public bool IsHaveGuild()
    {
        return (null != m_GuildInfo && m_GuildInfo.GuildGuid != GlobeVar.INVALID_GUID);
    }

    public bool IsReserveGuildMember()
    {
        if (null == m_GuildInfo || m_GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
        {
            return false;
        }

        UInt64 mainPlayerGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
        GuildMember member;
        if (m_GuildInfo.GuildMemberList.TryGetValue(mainPlayerGuid, out member))
        {
            if (member.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
            {
                return true;
            }
        }

        return false;
    }
    public bool IsGuildMember(Obj_OtherPlayer _otherPlayer)
    {
        if (_otherPlayer == null)
        {
            return false;
        }
        if (null == m_GuildInfo || m_GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
        {
            return false;
        }
        if (_otherPlayer.GUID == GlobeVar.INVALID_GUID)
        {
            return false;
        }
        GuildMember member;
        if ((m_GuildInfo.GuildMemberList.TryGetValue(_otherPlayer.GUID, out member) && m_GuildInfo.GetMemberJob(_otherPlayer.GUID) != (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE) //不是帮会审批成员
            || m_GuildInfo.GuildGuid == _otherPlayer.GuildGUID)
        {
            return true;
        }

        return false;
    }

    public bool IsGuildChief()
    {
        return (null != Singleton<ObjManager>.GetInstance().MainPlayer && m_GuildInfo.GuildChiefGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID);
    }

    public bool IsGuildViceChief(UInt64 guid)
    {
        if (null == m_GuildInfo || m_GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
        {
            return false;
        }
        if (guid == GlobeVar.INVALID_GUID)
        {
            return false;
        }
        GuildMember member;
        if (m_GuildInfo.GuildMemberList.TryGetValue(guid, out member))
        {
            if (member.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
            {
                return true;
            }
            else
            {
                return false;
            }
        }
        return false;
    }

    private GuildList m_GuildList;              //帮会列表
    public GuildList guildList
    {
        get { return m_GuildList; }
        set { m_GuildList = value; }
    }
    //帮战推送消息
    private List<GuildWarPushMessageInfo> m_WarPushMessaeg;
    public List<GuildWarPushMessageInfo> WarPushMessaeg
    {
        get { return m_WarPushMessaeg; }
        set { m_WarPushMessaeg = value; }
    }

    

    private List<GuildShopItem> m_GuildShopItemList;      // 公会商店商品
    public List<GuildShopItem> GuildShopItemList
    {
        get { return m_GuildShopItemList; }
        set { m_GuildShopItemList = value; }
    }

    private List<GoldMoneyShopItem> m_GoldMoneyShopItemList;    //金币商店限时抢购商品
    public List<GoldMoneyShopItem> GoldMoneyShopItemList
    {
        get { return m_GoldMoneyShopItemList; }
        set { m_GoldMoneyShopItemList = value; }
    }
    //////////////////////////////////////////////////////////////////////////
    //称号数据
    //////////////////////////////////////////////////////////////////////////
    private GameTitleInvestitive m_TitleInvestitive;
    public GameTitleInvestitive TitleInvestitive
    {
        get { return m_TitleInvestitive; }
        set { m_TitleInvestitive = value; }
    }

    private bool m_IsLockPriorTitle;
    public bool IsLockPriorTitle
    {
        get { return m_IsLockPriorTitle; }
        set { m_IsLockPriorTitle = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    //聊天记录
    //////////////////////////////////////////////////////////////////////////
    private GameChatHistory m_ChatHistory;
    public GameChatHistory ChatHistory
    {
        get { return m_ChatHistory; }
        set { m_ChatHistory = value; }
    }

    private ChatInfoLogic.CHANNEL_TYPE m_eChooseChannel = ChatInfoLogic.CHANNEL_TYPE.CHAT_TYPE_WORLD;
    public ChatInfoLogic.CHANNEL_TYPE ChooseChannel
    {
        get { return m_eChooseChannel; }
        set { m_eChooseChannel = value; }
    }

    private UInt64 m_LastTellGUID = GlobeVar.INVALID_GUID;
    public UInt64 LastTellGUID
    {
        get { return m_LastTellGUID; }
        set { m_LastTellGUID = value; }
    }

    private string m_LastTellName = "";
    public string LastTellName
    {
        get { return m_LastTellName; }
        set { m_LastTellName = value; }
    }

    private LastSpeakerRecord m_TellChatSpeakers;
    public LastSpeakerRecord TellChatSpeakers
    {
        get { return m_TellChatSpeakers; }
        set { m_TellChatSpeakers = value; }
    }

    private VoiceChatDownload m_VoiceChatDownloadRecord;
    public VoiceChatDownload VoiceChatDownloadRecord
    {
        get { return m_VoiceChatDownloadRecord; }
        set { m_VoiceChatDownloadRecord = value; }
    }

    // 编辑聊天内容跨场景等保存
    private string m_ChatEditInput;
    public string ChatEditInput
    {
        get { return m_ChatEditInput; }
        set { m_ChatEditInput = value; }
    }
    //////////////////////////////////////////////////////////////////////////
    //玩家关系
    //////////////////////////////////////////////////////////////////////////
    //玩家好友列表
    private RelationList m_FriendList;
    public RelationList FriendList
    {
        get { return m_FriendList; }
        set { m_FriendList = value; }
    }

    //玩家黑名单
    private RelationList m_BlackList;
    public RelationList BlackList
    {
        get { return m_BlackList; }
        set { m_BlackList = value; }
    }

    //仇人列表
    private RelationList m_HateList;
    public RelationList HateList
    {
        get { return m_HateList; }
        set { m_HateList = value; }
    }

    //伙伴数据
    private FellowContainer m_FellowContainer;
    public FellowContainer FellowContainer
    {
        get { return m_FellowContainer; }
        set { m_FellowContainer = value; }
    }
    private FriendBreedingFellow m_FriendBreedingFellowInfo;
    public FriendBreedingFellow FriendBreedingFellowInfo
    {
        get { return m_FriendBreedingFellowInfo; }
        set { m_FriendBreedingFellowInfo = value; }
    }
    private int m_LastProcreateTime;
    public int LastProcreateTime
    {
        get { return m_LastProcreateTime; }
        set { m_LastProcreateTime = value; }
    }
    private int m_GoneProcreateTime;
    public int GoneProcreateTime
    {
        get { return m_GoneProcreateTime; }
        set { m_GoneProcreateTime = value; }
    }
    public bool IsProcreateOver()
    {
        return m_LastProcreateTime == 0;
    }
    public bool IsProcreateGoing()
    {
        return !IsProcreateOver();
    }
    public bool IsProcreateWaitReceive()
    {
        return m_GoneProcreateTime >= GlobeVar.PARTNER_BREEDING_TIME;
    }
    public int GetProcreateRemainTime()
    {
        return GlobeVar.PARTNER_BREEDING_TIME - m_GoneProcreateTime;
    }
    public int GetProcreateReceiveRemainTime()
    {
        return (GlobeVar.PARTNER_BREEDING_TIME + GlobeVar.PARTNER_BREEDING_RECEIVETIME) - m_GoneProcreateTime;
    }
    private float m_ProcreateTime;
    public void Tick_ProcreateTime()
    {
        m_ProcreateTime += Time.fixedDeltaTime;
        //一秒触发一次
        if (m_ProcreateTime > 1)
        {
            m_ProcreateTime = 0f;
            m_GoneProcreateTime += 1;
        }
    }
    //伙伴特效
    private bool m_FellowPlayerEffect;
    public bool FellowPlayerEffect
    {
        get { return m_FellowPlayerEffect; }
        set { m_FellowPlayerEffect = value; }
    }
    //已经激活的伙伴技能
    private List<int> m_ActiveFellowSkill;
    public List<int> ActiveFellowSkill
    {
        get { return m_ActiveFellowSkill; }
        set { m_ActiveFellowSkill = value; }
    }
    //当天抽取伙伴次数
    private int m_FellowGainCount_Free;
    public int FellowGainCount_Free
    {
        get { return m_FellowGainCount_Free; }
        set { m_FellowGainCount_Free = value; }
    }
    private int m_FellowGainCount_Coin;
    public int FellowGainCount_Coin
    {
        get { return m_FellowGainCount_Coin; }
        set { m_FellowGainCount_Coin = value; }
    }
    private int m_FellowGainCount_YuanBao;
    public int FellowGainCount_YuanBao
    {
        get { return m_FellowGainCount_YuanBao; }
        set { m_FellowGainCount_YuanBao = value; }
    }
    //伙伴抽取CD
    private int m_FellowGainCD_Coin;
    public int FellowGainCD_Coin
    {
        get { return m_FellowGainCD_Coin; }
        set { m_FellowGainCD_Coin = value; }
    }
    private float m_FellowTickTime;
    public void Tick_FellowGainCD()
    {
        if (FellowGainCD_Coin > 0)
        {
            m_FellowTickTime += Time.fixedDeltaTime;
            //一秒触发一次
            if (m_FellowTickTime > 1)
            {
                m_FellowTickTime = 0f;
                FellowGainCD_Coin--;
//                if (PartnerFrameLogic_Gamble.Instance())
//                {
//                    PartnerFrameLogic_Gamble.Instance().SetGainCDTime(FellowGainCD_Coin);
//                }
            }
        }
    }
    // 奖励活动数据
    private AwardActivityData m_AwardActivityData;
    public AwardActivityData AwardActivityData
    {
        get { return m_AwardActivityData; }
    }

    private int m_nStartTime;
    public int NStartTime
    {
        set { m_nStartTime = value; }
        get { return m_nStartTime; }
    }
    private int m_nEndTime;
    public int NEndTime
    {
        set { m_nEndTime = value; }
        get { return m_nEndTime; }
    }

    public void Tick_Award()
    {
        m_AwardActivityData.Tick_Award();
    }
    public void HandlePacket(GC_NEWSERVERAWARD_DATA packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_CONTINUELOGINAWARD_DATA packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_DAYAWARD_DATA packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_ONLINEAWARD_DATA packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_ASK_ACTIVENESSAWARD_RET packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_SYNC_ACTIVENESSAWARD packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_SYNC_ACTIVENESS packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_NEWONLINEAWARD_DATA packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_SYNC_PAY_ACTIVITY_DATA packet)
    {
        m_PayActivity.HandlePacket(packet);
    }
    public void HandlePacket(GC_NEW7DAYONLINEAWARD_DATA packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_SYNC_NEW7DAYONLINEAWARDTABLE packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
	public void HandlePacket(GC_RET_GETREWARDFORSIGNIN packet)
	{
		m_AwardActivityData.HandlePacket(packet);
	}
    public void HandlePacket(GC_RET_GETREWARDFORACCUMULATESIGNIN packet)
    {
        m_AwardActivityData.HandlePacket(packet);
    }
    public void HandlePacket(GC_UPDATE_COST_REBATE_INFO packet)
    {
        m_CostRebate.HandlePacket(packet);
    }
    public void HandlePacket(GC_UPDATE_SPECIALTIME_PAY_REBATE_INFO packet)
    {
        m_SpecailTimePayRebateData.HandlePacket(packet);
    }

    public void HandlePacket(GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO packet)
    {
        m_SpecailTimePayRebateData.HandlePacket(packet);
    }
    

    // 摇钱树数据
    private MoneyTreeData m_MoneyTreeData;
    public MoneyTreeData MoneyTreeData
    {
        get { return m_MoneyTreeData; }
    }
    public void Tick_MoneyTreeAward()
    {
        m_MoneyTreeData.Tick_MoneyTreeAward();
    }
    public void HandlePacket(GC_MONEYTREE_DATA packet)
    {
        m_MoneyTreeData.HandlePacket(packet);
    }
    public void HandlePacket(GC_MONEYTREE_VIP_RET packet)
    {
        m_MoneyTreeData.HandlePacket(packet);
    }

    private int m_nReliveEntryTime = 0;//记录复活剩余秒
    public int ReliveEntryTime
    {
        get { return m_nReliveEntryTime; }
        set { m_nReliveEntryTime = value; }
    }

    // 通用存储数据
    private UserCommonData m_CommonData;
    public UserCommonData CommonData
    {
        get { return m_CommonData; }
        set { m_CommonData = value; }
    }

    // 日常任务
    private DailyMissionData m_DailyMissionData;
    public DailyMissionData DailyMissionData
    {
        get { return m_DailyMissionData; }
        set { m_DailyMissionData = value; }
    }

	// 剧情副本数据
	private JuQingCopySceneData m_JuQingCopySceneData;
	public JuQingCopySceneData JuQingCopySceneData
	{
		get { return m_JuQingCopySceneData; }
		set { m_JuQingCopySceneData = value; }
	}

    //伴侣 GUID
    private UInt64 m_LoverGUID = GlobeVar.INVALID_GUID;
    public System.UInt64 LoverGUID
    {
        get { return m_LoverGUID; }
        set { m_LoverGUID = value; }
    }

    //体力
    private VitalityData m_VitalityData;
    public VitalityData VitalityData
    {
        get { return m_VitalityData; }
        set { m_VitalityData = value; }
    }
    public void HandlePacket(GC_SYNC_VITALITY packet)
    {
        m_VitalityData.HandlePacket(packet);
    }

    /// <summary>
    /// 七日狂欢数据
    /// </summary>
    private SevenDaysRewardProxy m_SevenDaysRewardData;
    public SevenDaysRewardProxy SevenDaysRewardProxy
    {
        get { return m_SevenDaysRewardData; }
    }

    //经济系统
    public class MONEY
    {
        public Int32 GetMoney_Coin() { return GetMoneyByType(MONEYTYPE.MONEYTYPE_COIN); }
        public Int32 GetMoney_YuanBao() { return GetMoneyByType(MONEYTYPE.MONEYTYPE_YUANBAO); }
        public Int32 GetMoney_YuanBaoBind() { return GetMoneyByType(MONEYTYPE.MONEYTYPE_YUANBAO_BIND); }
        public void SetMoney(MONEYTYPE nType, int nValue)
        {
            if (nType > MONEYTYPE.MONEYTYPE_INVALID && nType < MONEYTYPE.MONEYTYPE_TYPECOUNT)
            {
                m_nMoney[(int)nType] = nValue;
            }
        }

        private Int32 GetMoneyByType(MONEYTYPE nType)
        {
            if (nType > MONEYTYPE.MONEYTYPE_INVALID && nType < MONEYTYPE.MONEYTYPE_TYPECOUNT)
            {
                return m_nMoney[(int)nType];
            }

            return 0;
        }

        private Int32[] m_nMoney;

        public MONEY()
        {
            m_nMoney = new Int32[(int)MONEYTYPE.MONEYTYPE_TYPECOUNT];
            for (int i = 0; i < (int)MONEYTYPE.MONEYTYPE_TYPECOUNT; ++i)
            {
                m_nMoney[i] = 0;
            }
        }
    }

    public MONEY m_Money;
    public MONEY Money
    {
        get { return m_Money; }
        set { m_Money = value; }
    }

    //////////////////////////////////////////////////////////////////////////
    //时装
    //////////////////////////////////////////////////////////////////////////
    private int[] m_FashionDeadline;
    public int[] FashionDeadline
    {
        get { return m_FashionDeadline; }
        set { m_FashionDeadline = value; }
    }

    private int m_CurFashionID;
    public int CurFashionID
    {
        get { return m_CurFashionID; }
        set { m_CurFashionID = value; }
    }

    private bool m_bShowFashion;
    public bool ShowFashion
    {
        get { return m_bShowFashion; }
        set { m_bShowFashion = value; }
    }

    private int m_ModelVisualID;
    public int ModelVisualID
    {
        get { return m_ModelVisualID; }
        set { m_ModelVisualID = value; }
    }

    public void ClearFashionData()
    {
        m_FashionDeadline = new int[GlobeVar.MAX_FASHION_SIZE];
        for (int i = 0; i < GlobeVar.MAX_FASHION_SIZE; i++)
        {
            m_FashionDeadline[i] = 0;
        }
        m_CurFashionID = GlobeVar.INVALID_ID;
        m_bShowFashion = false;
        m_ModelVisualID = GlobeVar.INVALID_ID;
    }

    //每日幸运抽奖数据
    private DailyLuckyDrawData m_DailyLuckyDrawData;
    public DailyLuckyDrawData DailyLuckyDrawData
    {
        get { return m_DailyLuckyDrawData; }
        set { m_DailyLuckyDrawData = value; }
    }

    //宝石信息
    private GemData m_GemData;
    public GemData GemData
    {
        get { return m_GemData; }
        set { m_GemData = value; }
    }

    //师门
    private Master m_MasterInfo;
    public Master MasterInfo
    {
        get { return m_MasterInfo; }
        set { m_MasterInfo = value; }
    }
    private MasterPreviewList m_MasterPreList;
    public MasterPreviewList MasterPreList
    {
        get { return m_MasterPreList; }
        set { m_MasterPreList = value; }
    }
    private int m_TorchValue;
    public int TorchValue
    {
        get { return m_TorchValue; }
        set { m_TorchValue = value; }
    }
    private Dictionary<int, string> m_MasterSkillName;
    public Dictionary<int, string> MasterSkillName
    {
        get { return m_MasterSkillName; }
        set { m_MasterSkillName = value; }
    }
    //是否有师门
    public bool IsHaveMaster()
    {
        if (m_MasterInfo != null)
        {
            return (m_MasterInfo.MasterGuid != GlobeVar.INVALID_GUID);
        }
        return false;
    }
    //是否掌门
    public bool IsMasterChief()
    {
        if (m_MasterInfo != null && Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            return (m_MasterInfo.MasterChiefGuid == Singleton<ObjManager>.GetInstance().MainPlayer.GUID);
        }
        return false;
    }
    //是否待审批师门成员
    public bool IsMasterReserveMember()
    {
        if (m_MasterInfo != null &&
            m_MasterInfo.MasterReserveMemberList.ContainsKey(Singleton<ObjManager>.GetInstance().MainPlayer.GUID) == true)
        {
            return true;
        }
        return false;
    }
    //取得师门技能名称
    public string GetMasterSkillName(int skillId)
    {
        if (skillId >= 0)
        {
            string skillname;
            if (MasterSkillName.TryGetValue(skillId, out skillname))
            {
                return skillname;
            }
        }
        return "";
    }
    //师门激活技能数量
    public int GetMasterSkillActiveNum()
    {
        return m_MasterInfo.GetActiveSkillNum();
    }

    //体能
    private int m_StaminaCountDown;
    public int StaminaCountDown
    {
        get { return m_StaminaCountDown; }
        set { m_StaminaCountDown = value; }
    }

    // 滚动公告
    private List<string> m_RollNoticeList;
    public List<string> RollNoticeList
    {
        get { return m_RollNoticeList; }
        set { m_RollNoticeList = value; }
    }
    //////////////////////////////////////////////////////////////////////////
    //侠客
    //////////////////////////////////////////////////////////////////////////
    //取得侠客


    private SwordsManContainer m_oSwordsManBackPack;
    public SwordsManContainer SwordsManBackPack
    {
        get { return m_oSwordsManBackPack; }
        set { m_oSwordsManBackPack = value; }
    }

    private SwordsManContainer m_oSwordsManEquipPack;
    public SwordsManContainer SwordsManEquipPack
    {
        get { return m_oSwordsManEquipPack; }
        set { m_oSwordsManEquipPack = value; }
    }

    public SwordsManContainer GetSwordsManContainer(SwordsManContainer.PACK_TYPE type)
    {
        switch (type)
        {
            case SwordsManContainer.PACK_TYPE.TYPE_BACKPACK: return m_oSwordsManBackPack;
            case SwordsManContainer.PACK_TYPE.TYPE_EQUIPPACK: return m_oSwordsManEquipPack;
        }
        return null;
    }

    private int m_nSwordsManVisitState;
    public int SwordsManVisitState
    {
        get { return m_nSwordsManVisitState; }
        set { m_nSwordsManVisitState = value; }
    }

    private int m_nSwordsManScore;
    public int SwordsManScore
    {
        get { return m_nSwordsManScore; }
        set { m_nSwordsManScore = value; }
    }

    private int m_nSwordsManCombat;
    public int SwordsManCombat
    {
        set { m_nSwordsManCombat = value; }
        get { return m_nSwordsManCombat; }
    }

    private int m_nReputation;
    public int Reputation
    {
        get { return m_nReputation; }
        set { m_nReputation = value; }
    }

    private int m_GuildDKP;
    public int GuildDKP
    {
        get { return m_GuildDKP; }
        set { m_GuildDKP = value; }
    }

	public bool IsOpenSignInReward = false;
	public bool IsOpenOldLoginReward = false;

	// 每日签到信息，从服务器同步     begin

	public class DaySignInInfoData
	{
		public int m_curMounthId = 0;     //   当前月份
		public int m_nowDayIndex = 0;     //  当前月份第几天
        public int m_nAlreadSignedCount = 0;//本月累计签到天数
		public int m_defaultFirstIndex = 0;     // 服务器给的当前正常签到的索引
		public int m_curSelectedIndex = 0;     // 当前选中的索引
		public Dictionary<int,DaySignInItem> m_DaySignInfoList = new Dictionary<int, DaySignInItem>();      // 签到元素列表
        public Dictionary<int, AccumulateSignInfo> m_AccumateSignDic = new Dictionary<int, AccumulateSignInfo>();      // 签到元素列表
	}

	private DaySignInInfoData m_DaySignInfo = new DaySignInInfoData();


	public DaySignInInfoData DaySignInfo
	{
		get{ return m_DaySignInfo; }
		set{ m_DaySignInfo = value; }
	}

	public int CurMounthId
	{
		set{m_DaySignInfo.m_curMounthId = value;}
		get{return m_DaySignInfo.m_curMounthId;}
	}

	public int NowDayIndex
	{
		set {
			m_DaySignInfo.m_nowDayIndex = value;
			if(m_DaySignInfo.m_nowDayIndex > 28)
			{
				m_DaySignInfo.m_nowDayIndex = 28;
			}
		}
		get {return m_DaySignInfo.m_nowDayIndex;}
	}
    public int AlreadySingedCount
    {
        set
        {
            m_DaySignInfo.m_nAlreadSignedCount = value;
            if (m_DaySignInfo.m_nAlreadSignedCount > 28)
            {
                m_DaySignInfo.m_nAlreadSignedCount = 28;
            }
        }
        get { return m_DaySignInfo.m_nAlreadSignedCount; }
    }

	public int DefaultFirstSignIndex
	{
		set{m_DaySignInfo.m_defaultFirstIndex = value;}
		get{return m_DaySignInfo.m_defaultFirstIndex;}
	}

	public int CurSelectedDayIndex
	{
		set {m_DaySignInfo.m_curSelectedIndex = value;}
		get {return m_DaySignInfo.m_curSelectedIndex;}
	}


    public bool CanDoSign(int index)
    {
           if (index == m_DaySignInfo.m_nowDayIndex)
           {
               if (m_DaySignInfo.m_DaySignInfoList[index].ItemStatus == (int)DaySignInStates.NOTSIGNEN)
                {
                    return true; 
                }
                
           }
           return false;
            
    }

	public bool IsFirstCanSupply(int index)
	{
//		int count = 1;

        if (index >= m_DaySignInfo.m_defaultFirstIndex)
        {
            return false;
        }
        
        if (null == m_DaySignInfo.m_DaySignInfoList)
        {
            return false;
        }
		
        if (!m_DaySignInfo.m_DaySignInfoList.ContainsKey(index))
        {
            return false;
        }
        
        if (m_DaySignInfo.m_DaySignInfoList[index].ItemStatus == (int)DaySignInStates.NOTSIGNEN)
        {
            return true;
        }
        return false;
        //for(;count < index ;)
        //{
			
        //    if(m_DaySignInfo.m_DaySignInfoList[count].ItemStatus == (int)DaySignInStates.NOTSIGNEN)
        //    {
        //         更新UI红点标记
        //        break;
        //    }
			
        //    count ++;
        //}
		
        //if(index == count)
        //{
        //    return true;
        //}
        //else
        //{
        //    return false;
        //}
	}
	

	public bool IsHaveNewSignCanDraw()
	{
		int count = 1;
		foreach(var item in m_DaySignInfo.m_DaySignInfoList)
		{
			if(count > m_DaySignInfo.m_nowDayIndex)
				break;
			if(item.Value.ItemStatus == (int)DaySignInStates.NOTSIGNEN)
			{
				bool bIsSignedToday = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_SIGNIN_EVERYDAY_FALG);
				if(!bIsSignedToday)
				{
					// 更新UI红点标记
					return true;
				}
			}
			count ++;
		}
        PlayerData.DaySignInInfoData DataSignInInfo = GameManager.gameManager.PlayerDataPool.DaySignInfo;
        if (DataSignInInfo != null && DataSignInInfo.m_AccumateSignDic != null)
        {
            foreach (KeyValuePair<int, AccumulateSignInfo> pair in DataSignInInfo.m_AccumateSignDic)
            {
                if (GameManager.gameManager.PlayerDataPool.AlreadySingedCount >= pair.Key * 5)
                {
                    if (pair.Value.ItemStatus == 0)
                    {
                        return true;
                    }
                }
                else
                {
                    return false;
                }
            }
        }
		return false;
	}
    public bool IsHaveNewServerAward()
    {
        bool[] flags = m_AwardActivityData.BNewServerAwardFlag;
        if (flags != null && flags.Length > m_AwardActivityData.NewServerDays)
        {
            for (int i = 0; i <= m_AwardActivityData.NewServerDays; ++i)
            {
                if (!m_AwardActivityData.BNewServerAwardFlag[i])
                {
                    return true;
                }
            }
        }
        return false;
    }
    public bool IsCONTINUELOGINAWARD()
    {
        bool[] flags = m_AwardActivityData.BContinueAwardFlag;
        if (flags != null && flags.Length > m_AwardActivityData.ContinueLoginDay)
        {
            for (int i = 0; i <= m_AwardActivityData.ContinueLoginDay; ++i)
            {
                if (!m_AwardActivityData.BContinueAwardFlag[i])
                {
                    return true;
                }
            }
        }
        return false;
    }
	public void SetSignInItemStatus(int index,int status)
	{
		DaySignInItem signItem;
		m_DaySignInfo.m_DaySignInfoList.TryGetValue (index,out signItem);
		m_DaySignInfo.m_DaySignInfoList.Remove (index);
		signItem.ItemStatus = status;
		AddDaySignInfo (signItem);
	}

	public void ClearSignInItemListInCache ()
	{
		m_DaySignInfo.m_DaySignInfoList.Clear ();
	}
    public void ClearAccuItemListCache()
    {
        m_DaySignInfo.m_AccumateSignDic.Clear();
    }
	public int GetTotalSignedCountThisMounth()
	{
		int count = 0;
		
		foreach(var item in m_DaySignInfo.m_DaySignInfoList)
		{
			if(item.Value.ItemIndex > m_DaySignInfo.m_nowDayIndex)
				break;
			if(item.Value.ItemStatus == (int)DaySignInStates.NORMALSIGNED || item.Value.ItemStatus == (int)DaySignInStates.VIPSIGNEDHALF)
			{
				count ++;
			}
		}

		return count;
	}

	public void AddDaySignInfo(DaySignInItem DataLine)
	{
		if (m_DaySignInfo.m_DaySignInfoList.ContainsKey(DataLine.ItemIndex))
		{
			m_DaySignInfo.m_DaySignInfoList[DataLine.ItemIndex] = DataLine;
		}
		else
		{
			m_DaySignInfo.m_DaySignInfoList.Add(DataLine.ItemIndex, DataLine);
		}
	}
    /// <summary>
    /// 累计登陆信息
    /// </summary>
    /// <param name="DataLine"></param>
    public void AddDaySignInfo(AccumulateSignInfo DataLine)
    {
        if (m_DaySignInfo.m_AccumateSignDic.ContainsKey(DataLine.ItemIndex))
        {
            m_DaySignInfo.m_AccumateSignDic[DataLine.ItemIndex] = DataLine;
        }
        else
        {
            m_DaySignInfo.m_AccumateSignDic.Add(DataLine.ItemIndex, DataLine);
        }
    }

	// 每日签到信息          end

    //拜年活动
    public int ActivityRewardJoinNum = 8;
    public int m_ActivityRewardIndex = -1;
    public bool m_IsActivityReward = false;//是否有可领取物品
    public bool m_IsOpenBaiNian = false;

    public int m_ActivityRewardSrateTime;
    public int m_ActivityRewardEndTime;
    public int m_ActivityRewardJoinNumSarteTime;

    private string m_ActivityRewardBeginTime = "2014-12-10";
    public string ActivityRewardBeginTime
    {
        get { return m_ActivityRewardBeginTime; }
        set
        {
            string strInfo = value;
            if (strInfo.Length >= 6)
            {
                string strDateTime = "20"+ strInfo.Substring(0, 2) + "-";
                strDateTime += strInfo.Substring(2, 2) + "-";
                strDateTime += strInfo.Substring(4, 2);

                m_ActivityRewardBeginTime = strDateTime;
            }
        }
    }

    private Dictionary<int, ActivityRewardData> m_ActivityRewardTable;
    public Dictionary<int, ActivityRewardData> OnActivityRewardTable
    {
        get { return m_ActivityRewardTable; }
        set { m_ActivityRewardTable = value; }
    }

    public void AddActivityRewardTable(ActivityRewardData rewardData)
    {
        if (m_ActivityRewardTable.ContainsKey(rewardData.Index))
        {
            m_ActivityRewardTable[rewardData.Index] = rewardData;
        }
        else
        {
            m_ActivityRewardTable.Add(rewardData.Index, rewardData);
        }

//        if (rewardData.State == AcitivityRewardState.RECEIVE)
//        {
//            m_IsActivityReward = true;
//        }
    }

    private Dictionary<int, JoinNumRewardData> m_JoinNumRewardTable;

    public Dictionary<int, JoinNumRewardData> OnJoinNumRewardTable
    {
        get { return m_JoinNumRewardTable; }
        set { m_JoinNumRewardTable = value; }
    }

    public void AddJoinNumRewardTable(JoinNumRewardData rewardData)
    {
        if (m_JoinNumRewardTable.ContainsKey(rewardData.Index))
        {
            m_JoinNumRewardTable[rewardData.Index] = rewardData;
        }
        else
        {
            m_JoinNumRewardTable.Add(rewardData.Index, rewardData);
        }

    }


    // 在线奖励 表格数据--用于动态加载    
    private Dictionary<int, OnlineAwardLine> m_OnlineAwardTable;
    public Dictionary<int, OnlineAwardLine> OnlineAwardTable
    {
        get { return m_OnlineAwardTable; }
        set { m_OnlineAwardTable = value; }
    }
    public void AddOnlineAwardLine(OnlineAwardLine DataLine)
    {
        if (m_OnlineAwardTable.ContainsKey(DataLine.ID))
        {
            m_OnlineAwardTable[DataLine.ID] = DataLine;
        }
        else
        {
            m_OnlineAwardTable.Add(DataLine.ID, DataLine);
        }
    }
    // 开服奖励 表格数据--用于动态加载
    private bool m_IsShouNowOnlineAwardWindow = false;
    public bool ShouNowOnlineAwardWindow
    {
        get { return m_IsShouNowOnlineAwardWindow; }
        set { m_IsShouNowOnlineAwardWindow = value; }
    }
    private Dictionary<int, OnlineAwardLine> m_NewOnlineAwardTable;
    public Dictionary<int, OnlineAwardLine> NewOnlineAwardTable
    {
        get { return m_NewOnlineAwardTable; }
        set { m_NewOnlineAwardTable = value; }
    }
    public void AddNewOnlineAwardLine(OnlineAwardLine DataLine)
    {
        if (m_NewOnlineAwardTable.ContainsKey(DataLine.ID))
        {
            m_NewOnlineAwardTable[DataLine.ID] = DataLine;
        }
        else
        {
            m_NewOnlineAwardTable.Add(DataLine.ID, DataLine);
        }
    }
    public NewOnlineDateTime m_sNewOnlineDateTime;
    private float m_fHpItemCDTime = 0; //记录血CD时间 PlayerFrameLogic.cs
    public float HpItemCDTime
    {
        get { return m_fHpItemCDTime; }
        set { m_fHpItemCDTime = value; }
    }
    private float m_fMpItemCDTime = 0; //记录蓝CD时间 PlayerFrameLogic.cs
    public float MpItemCDTime
    {
        get { return m_fMpItemCDTime; }
        set { m_fMpItemCDTime = value; }
    }
    private bool m_bStartSweep = false;
    public bool StartSweep
    {
        get { return m_bStartSweep; }
        set { m_bStartSweep = value; }
    }
    private int m_nCangJingGeTier = 0;
    public int CangJIngGeTier
    {
        get { return m_nCangJingGeTier; }
        set { m_nCangJingGeTier = value; }
    }
    private float m_CangJIngGeSecond = Time.realtimeSinceStartup;
    public float CangJIngGeSecond
    {
        get { return m_CangJIngGeSecond; }
        set { m_CangJIngGeSecond = value; }
    }
    private int m_nCJGSweepCDTime = 0;//记录藏经阁扫荡剩余秒
    public int CJGSweepCDTime
    {
        get { return m_nCJGSweepCDTime; }
        set { m_nCJGSweepCDTime = value; }
    }
    private int m_nCopyeSceneSweepCDTime = 0;//记录普通副本扫荡剩余秒
    public int CopyeSceneSweepCDTime
    {
        get { return m_nCopyeSceneSweepCDTime; }
        set { m_nCopyeSceneSweepCDTime = value; }
    }
    private float m_fCopySceneChange = 0;//判断副本是否发送过传送信息.
    public bool CopySceneChange
    {
        get
        {
            if (Time.realtimeSinceStartup - m_fCopySceneChange > 10.0f)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
        set
        {
            if (value)
            {
                m_fCopySceneChange = Time.realtimeSinceStartup;
            }
            else
            {
                m_fCopySceneChange = 0;
            }
        }
    }
    //充值活动
    private PayActivityData m_PayActivity;
    public PayActivityData PayActivity
    {
        get { return m_PayActivity; }
        set { m_PayActivity = value; }
    }
    //消费返利
    private CostRebateData m_CostRebate;
    public CostRebateData CostRebate
    {
        get { return m_CostRebate; }
        set { m_CostRebate = value; }
    }

    //特定时间充值返利
    private SpecialTimePayRebateData m_SpecailTimePayRebateData;
    public SpecialTimePayRebateData SpecailTimePayRebate
    {
        get { return m_SpecailTimePayRebateData; }
        set { m_SpecailTimePayRebateData = value; }
    }

    private bool m_bAutoTeamState = false;//记录自动组队状态
    public bool AutoTeamState
    {
        get { return m_bAutoTeamState; }
        set { m_bAutoTeamState = value; }
    }
    private int m_bAutoTeamCopySceneId = -1;//记录自动组队状态 场景ID
    public int AutoTeamCopySceneId
    {
        get { return m_bAutoTeamCopySceneId; }
        set { m_bAutoTeamCopySceneId = value; }
    }
    private int m_bAutoTeamCopySceneDifficult = 1;//记录自动组队状态  难度
    public int AutoTeamCopySceneDifficult
    {
        get { return m_bAutoTeamCopySceneDifficult; }
        set { m_bAutoTeamCopySceneDifficult = value; }
    }
    // 4技能新手指引，切场景需要 加个标记
    private bool m_bForthSkillFlag = false;
    public bool ForthSkillFlag
    {
        get { return m_bForthSkillFlag; }
        set { m_bForthSkillFlag = value; }
    }

    // 策划要求 任务追踪界面排序
    private List<int> m_MissionSortList;
    public List<int> MissionSortList
    {
        get { return m_MissionSortList; }
        set { m_MissionSortList = value; }
    }
    private Vector3 m_MissionGridLastPos; // 任务追踪 滑动位置记录
    public UnityEngine.Vector3 MissionGridLastPos
    {
        get { return m_MissionGridLastPos; }
        set { m_MissionGridLastPos = value; }
    }
    //服务器标记
    private int m_ServerFlags;
    public void HandlerServerFlags(GC_SERVERFLAGS packet)
    {
        m_ServerFlags = packet.Flags;
        if (RechargeBarLogic.Instance() != null)
        {
            RechargeBarLogic.Instance().UpdateChargeActivity();
        }
        if (FunctionButtonLogic.Instance() != null)
        {
            FunctionButtonLogic.Instance().UpdateDailyLuckyButton();
        }

    }
    //public bool IsVipOpen()
    //{
    //    if ((m_ServerFlags & (1 << (int)SERVER_FLAGS_ENUM.FLAG_VIP)) == 0)
    //    {
    //        return false;
    //    }
    //    return true;
    //}

    //public bool IsChargeActivityOpen()
    //{
    //    if ((m_ServerFlags & (1 << (int)SERVER_FLAGS_ENUM.FLAG_PAYACT)) == 0)
    //    {
    //        return false;
    //    }
    //    return true;
    //}

    //服务器控制的客户端功能开关是否开启
    public bool IsServerFlagOpen(SERVER_FLAGS_ENUM eFlag)
    {
        if (eFlag >= SERVER_FLAGS_ENUM.FLAG_START && eFlag < SERVER_FLAGS_ENUM.FLAG_NUM)
        {
            if ((m_ServerFlags & (1 << (int)eFlag)) == 0)
            {
                return false;
            }

            return true;
        }

        return false;
    }
    //许愿池数据x4///////////////
    private int m_WishingWell_InTime;
    public int WishingWell_InTime
    {
        get { return m_WishingWell_InTime; }
        set { m_WishingWell_InTime = value; }
    }
    private int m_WishingWell_OutTime;
    public int WishingWell_OutTime
    {
        get { return m_WishingWell_OutTime; }
        set { m_WishingWell_OutTime = value; }
    }
    private int m_WishingWell_Day;
    public int WishingWell_Day
    {
        get { return m_WishingWell_Day; }
        set { m_WishingWell_Day = value; }
    }
    private int m_WishingWell_Limit;
    public int WishingWell_Limit
    {
        get { return m_WishingWell_Limit; }
        set { m_WishingWell_Limit = value; }
    }
    private int m_WishingWell_Status;
    public int WishingWell_Status
    {
        get { return m_WishingWell_Status; }
        set { m_WishingWell_Status = value; }
    }
    private int m_NewServerMountBonusNextTime;
    public int NewServerMountBonusNextTime
    {
        get { return m_NewServerMountBonusNextTime; }
        set { m_NewServerMountBonusNextTime = value; }
    }

    private int m_GoldMoneyShopNextTime;
    public int GoldMoneyShopNextTime
    {
        get { return m_GoldMoneyShopNextTime; }
        set { m_GoldMoneyShopNextTime = value; }
    }
    private int m_LastTouchedNpc;
    public int LastTouchedNpc
    {
        get { return m_LastTouchedNpc; }
        set { m_LastTouchedNpc = value; }
    }
    public void HandlePacket(GC_UPDATE_NEWSERVERMOUNT packet)
    {
        m_NewServerMountBonusNextTime = packet.Seconds;
    }

    public void HandlePacket(GC_UPDATE_GOLDMONEYSHOPTIME packet)
    {
        m_GoldMoneyShopNextTime = packet.Seconds;
    }
    // 帮会日常活动 Boss 坐标点
     private GuildActivityBossData m_BossData;
     public GuildActivityBossData BossData
     {
         get { return m_BossData; }
     }
     public void HandleGuildActivityBossData(GC_GUILDACTIVITY_BOSSDATA packet)
     {
         m_BossData.SetBossData(packet.Sceneclassid, packet.Sceneinstid, packet.PosX/100.0f, packet.PosZ/100.0f);
     }

     //每日首次登陆触发
     public void OnTodayFirstLogin()
     {
         //首充界面提醒
         GameManager.gameManager.PlayerDataPool.IsClickChargeActivitySY = false;
         GameManager.gameManager.PlayerDataPool.IsClickChargeActivityCZ = false;
         GameManager.gameManager.PlayerDataPool.IsClickWishingWell = false;
         GameManager.gameManager.PlayerDataPool.IsClickCostRebate = false;
         GameManager.gameManager.PlayerDataPool.IsClickSpecialTimePayRebate = false;
         GameManager.gameManager.PlayerDataPool.IsClickDayCard = false;

         if (VipData.GetVipLv() == 0 && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP) )
         {
             GameManager.gameManager.PlayerDataPool.IsShowVipTip = true;
         }
         else
         {
             GameManager.gameManager.PlayerDataPool.IsShowVipTip = false;
         }

         m_IsShowMonthMultipleTip = true;

         m_bIsShowHongBaoTip = true;
		 m_bIsShowLoverFlowerTip = true;
		 m_bIsShowLoverThingTip = true;
     }

     //招财进宝
     private bool m_bIsClickChargeActivitySY = true;
     public bool IsClickChargeActivitySY
     {
         get { return m_bIsClickChargeActivitySY; }
         set { m_bIsClickChargeActivitySY = value; }
     }
     //成长基金
     private bool m_bIsClickChargeActivityCZ = true;
     public bool IsClickChargeActivityCZ
     {
         get { return m_bIsClickChargeActivityCZ; }
         set { m_bIsClickChargeActivityCZ = value; }
     }
     //首周礼包
     private bool m_bIsClickChargeActivitySZ = true;
     public bool IsClickChargeActivitySZ
     {
         get { return m_bIsClickChargeActivitySZ; }
         set { m_bIsClickChargeActivitySZ = value; }
     }
     //许愿池
     private bool m_bIsClickWishingWell = true;
     public bool IsClickWishingWell
     {
         get { return m_bIsClickWishingWell; }
         set { m_bIsClickWishingWell = value; }
     }
     //消费返利
     private bool m_IsClickCostRebate = true;
     public bool IsClickCostRebate
     {
         get { return m_IsClickCostRebate; }
         set { m_IsClickCostRebate = value; }
     }

     private bool m_IsClickSpecialTimePayRebate = true;
     public bool IsClickSpecialTimePayRebate
     {
         get { return m_IsClickSpecialTimePayRebate; }
         set { m_IsClickSpecialTimePayRebate = value; }
     }

     private bool m_IsClickDayCard = true;
     public bool IsClickDayCard
     {
         get { return m_IsClickDayCard; }
         set { m_IsClickDayCard = value; }
     }

     private bool m_bIsShowVipTip = false;
     public bool IsShowVipTip
     {
         get { return m_bIsShowVipTip; }
         set { m_bIsShowVipTip = value; }
     }
     private List<string> AbuseFilterList = new List<string>(); //动态屏蔽字
     public void AddAbuseFilter(string data)
     {
//         string str = "";
         if (string.IsNullOrEmpty(data))
         {
             return;
         }
         if (AbuseFilterList == null )
         {
             AbuseFilterList = new List<string>(); 
         }
         AbuseFilterList.Add(data);
     }
     public string GetAbuseFilter(string str)
     {
         if (str == null)
         {
             return null;
         }
         if (AbuseFilterList == null)
         {
             return null;
         }
         for (int i = 0; i < AbuseFilterList.Count; i++)
         {
             if (str.IndexOf(AbuseFilterList[i]) != -1 )
             {
                 return AbuseFilterList[i];
             }
            
         }
         return null;
     }
     public void ClearAbuseFilter()
     {
         if (AbuseFilterList != null)
         {
             AbuseFilterList.Clear();
         }
     }
     private UInt64 m_nHpDrugGUID = GlobeVar.INVALID_GUID;     //血药位置     
     public UInt64 HpDrugGUID
     {
         get { return m_nHpDrugGUID; }
         set { m_nHpDrugGUID = value; }
     }
     private UInt64 m_nMpDrugGUID = GlobeVar.INVALID_GUID;       //魔药位置
     public UInt64 MpDrugGUID
     {
         get { return m_nMpDrugGUID; }
         set { m_nMpDrugGUID = value; }
     }

    //////////////////////////////////////////////
    //月度活动
    //////////////////////////////////////////////
     private GameMonthMultiple m_MonthMultiple;
     public GameMonthMultiple MonthMultiple
     {
         get { return m_MonthMultiple; }
         set { m_MonthMultiple = value; }
     }

     private bool m_IsShowMonthMultipleTip = false;
     public bool IsShowMonthMultipleTip
     {
         get { return m_IsShowMonthMultipleTip; }
         set { m_IsShowMonthMultipleTip = value; }
     }

    //////////////////////////////////////////////
    //元宝商店赠送/代付
    //////////////////////////////////////////////
     private ShoppingListRecord m_PresentRecord;
     public ShoppingListRecord PresentRecord
     {
         get { return m_PresentRecord; }
         set { m_PresentRecord = value; }
     }

     private ShoppingListRecord m_WaitPayRecord;
     public ShoppingListRecord WaitPayRecord
     {
         get { return m_WaitPayRecord; }
         set { m_WaitPayRecord = value; }
     }

    public bool IsPresentButtonShow()
     {
         return m_PresentRecord.GetRecordCount() > 0 || 
             m_WaitPayRecord.GetRecordCount() > 0 ||
             m_ShoppingCart.IsInCountDown();
     }

     // 购物车
     ShoppingCart m_ShoppingCart;
     public ShoppingCart ShoppingCart
     {
         get { return m_ShoppingCart; }
         set { m_ShoppingCart = value; }
     }

    //组队跟随状态
     private bool m_bIsInTeamFollow;
     public bool IsInTeamFollow
     {
         get { return m_bIsInTeamFollow; }
         set { m_bIsInTeamFollow = value; }
     }

    //APP评价结果
     private int m_nReviewResult;
    public int ReviewResult
     {
         get { return m_nReviewResult; }
         set { m_nReviewResult = value; }
     }

    //是否开启APP评价的奖励
    private int m_nIsReviewRewardEnable;
    public int ReviewRewardEnable
    {
        get { return m_nIsReviewRewardEnable; }
        set { m_nIsReviewRewardEnable = value; }
    }

    private bool m_bIsShowHongBaoTip = false;
    public bool IsShowHongBaoTip
    {
        get { return m_bIsShowHongBaoTip; }
        set { m_bIsShowHongBaoTip = value; }
    }

    private bool m_bHongBaoRankFlag = false;
    public bool HongBaoRankFlag
    {
        get { return m_bHongBaoRankFlag; }
        set { m_bHongBaoRankFlag = value; }
    }

	private bool m_bIsShowLoverFlowerTip = false;
	public bool IsShowLoverFlowerTip
	{
		get { return m_bIsShowLoverFlowerTip; }
		set { m_bIsShowLoverFlowerTip = value; }
	}

	private bool m_bIsShowLoverThingTip = false;
	public bool IsShowLoverThingTip
	{
		get { return m_bIsShowLoverThingTip; }
		set { m_bIsShowLoverThingTip = value; }
	}

    // 拉回流活动
    private int m_JuYiCount = 0;
    public int JuYiCount
    {
        get { return m_JuYiCount; }
        set { m_JuYiCount = value; }
    }

    private bool m_isWP8chargeMode = false;

    public bool WP8ChargeMode
    {
        set{m_isWP8chargeMode = value;}
        get{return m_isWP8chargeMode;}
    }

    private float m_WPchangeBackTime;

    public float WP8chageBackTime
    {
        set { m_WPchangeBackTime = value; }
        get { return m_WPchangeBackTime; }
    }

    // 经脉系统
    public bool GetTrainingBranchActive(int group)
    {
        if (0 <= group && group < 32)
        {
            return Utils.GetIntFlag(GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_CHOICEDATA1), group);
        }
        else if (32 <= group && group < 64)
        {
            return Utils.GetIntFlag(GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_CHOICEDATA2), group);
        }
        else if (64 <= group && group < 96)
		{
            return Utils.GetIntFlag(GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_TRAINING_CHOICEDATA3), group);
        }

        return false;
    }
	// 添加好友
	public  class PlayerAddFriendVlue
	{
		public UInt64    m_guid ;
		public int		   m_level ;
		public int   	   m_fight ;
		public int          m_profess ;
		public string     m_name ;
	}

    //添加美人配置数据
    private BelleConfigData m_belleConfigData;
    public BelleConfigData BelleConfigData
    {
        set {m_belleConfigData = value; }
        get 
        {
            return m_belleConfigData;
        }
    }
    //添加pvp刷新时间数据 
    public float m_pvpDateTime = 300.0f;
    public float PVPDATATime 
    {
        get { return m_pvpDateTime; }
    }
    public void Tick_PVP()
    {
        m_pvpDateTime -=  Time.fixedDeltaTime ;
        if( m_pvpDateTime <= 0.0f )
        {
            m_pvpDateTime = 0.0f ;
        }

        if (PvpShopLogic.Instance())
            PvpShopLogic.Instance().showBrushTime();

    }
    public void ReTick_PVP(float time)
    {
		m_pvpDateTime = time ;
    }

    public Dictionary<int, int> m_pvpShopItemBuyNum = new Dictionary<int, int>();
    public Dictionary<int, int> PvpShopItemBuyNum
    {
        get { return m_pvpShopItemBuyNum; }
    }
    public void ClearPvpShopItemBuyNum()
    {
        m_pvpShopItemBuyNum.Clear();
    }
    public void SetPvpShopItemBuyNum(int id ,int count)
    {
        if (!m_pvpShopItemBuyNum.ContainsKey(id))
        {
            m_pvpShopItemBuyNum.Add(id, count);
        }

        else
        {
            m_pvpShopItemBuyNum[id] = count;
        }
    }
}

