/********************************************************************
	created:	2014/02/17
	created:	17:2:2014   9:56
	filename: 	UIPath.cs
	author:		王迪
	
	purpose:	记录UI存储位置信息，调用统一接口，方便加载位置发生变化时统一更改
*********************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
public class UIPathData
{
    public enum UIType
    {
        TYPE_ITEM,          // 只是用资源路径
        TYPE_BASE,          // 常驻场景的UI，Close不销毁 一级UI
        TYPE_POP,           // 弹出式UI，互斥，当前只能有一个弹出界面 二级弹出 在一级之上 阻止移动 无法操作后面UI
        TYPE_STORY,         // 故事界面，故事界面出现，所有UI消失，故事界面关闭，其他界面恢复
        TYPE_TIP,           // 三级弹出 在二级之上 不互斥 阻止移动 无法操作后面UI
        TYPE_MENUPOP,       // TYPE_POP的一个分支 由主菜单MenuBar打开的二级UI 主要用于动态加载特殊屏蔽区域 其他和POPUI完全一致
        TYPE_MESSAGE,       // 消息提示UI 在三级之上 一般是最高层级 不互斥 不阻止移动 可操作后面UI
        TYPE_DEATH,         // 死亡UI 目前只有复活界面 用于添加复活特殊规则
    };

    public static Dictionary<string, UIPathData> m_DicUIInfo = new Dictionary<string, UIPathData>();
    public static Dictionary<string, UIPathData> m_DicUIName = new Dictionary<string, UIPathData>();

    // group捆绑打包名称，会将同一功能的UI打包在一起
    // isMainAsset
    // bDestroyOnUnload 只对PopUI起作用
    public UIPathData(string _path, UIType _uiType, string groupName = null, bool bMainAsset = false, bool bDestroyOnUnload = true)
    {
        path = _path;
        uiType = _uiType;
        int lastPathPos = _path.LastIndexOf('/');
        if (lastPathPos > 0)
        {
            name = path.Substring(lastPathPos + 1);
        }
        else
        {
            name = path;
        }

        uiGroupName = groupName;
        isMainAsset = bMainAsset;
        isDestroyOnUnload = bDestroyOnUnload;

#if UNITY_ANDROID

        // < 768M UI不进行缓存
        if (SystemInfo.systemMemorySize < 768)
        {
            isDestroyOnUnload = true;
        }

#endif

        m_DicUIInfo.Add(_path, this);
        m_DicUIName.Add(name, this);
    }

    public string path;
    public string name;
    public UIType uiType;
    public string uiGroupName;
    public bool isMainAsset;            // 是否是主资源，如果主资源UI被关闭
    public bool isDestroyOnUnload;
}
public class UIInfo
{
    // item
    public static UIPathData SysShopPageItem = new UIPathData("Prefab/UI/SysShopPageItem", UIPathData.UIType.TYPE_ITEM, "SystemShop");
    public static UIPathData SysShopPage = new UIPathData("Prefab/UI/SysShopPage", UIPathData.UIType.TYPE_ITEM, "SystemShop");
    //public static UIPathData MailListItem = new UIPathData("Prefab/UI/MailListItem", UIPathData.UIType.TYPE_ITEM, "Relation");
	public static UIPathData MailListItem = new UIPathData("Prefab/UI/MailListItemEx", UIPathData.UIType.TYPE_ITEM, "Relation");
  public static UIPathData RelationMailNameListItem = new UIPathData("Prefab/UI/MailTargetListItem", UIPathData.UIType.TYPE_ITEM, "Relation");
  public static UIPathData RelationNameListItem = new UIPathData("Prefab/UI/RelationNameListItemEx", UIPathData.UIType.TYPE_ITEM, "Relation");
    //public static UIPathData RelationNameListItem = new UIPathData("Prefab/UI/RelationNameListItem", UIPathData.UIType.TYPE_ITEM, "Relation");
    public static UIPathData AwardListItem = new UIPathData("Prefab/UI/AwardActivityItem", UIPathData.UIType.TYPE_ITEM);
    //public static UIPathData PVPOpListItem = new UIPathData("Prefab/UI/PVPOpListItem", UIPathData.UIType.TYPE_ITEM);
	public static UIPathData ChannelListItem = new UIPathData("Prefab/UI/ChannelListItem", UIPathData.UIType.TYPE_ITEM);
	public static UIPathData PVPSkillListItem = new UIPathData("Prefab/UI/PVPSkillListItem", UIPathData.UIType.TYPE_ITEM);
	public static UIPathData PVPRecordListItem = new UIPathData("Prefab/UI/PVPRecordListItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData AutoDrugItem = new UIPathData("Prefab/UI/AutoDrugItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData HuaShanMemberListItem = new UIPathData("Prefab/UI/HuaShanMemberListItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData AchieveItem = new UIPathData("Prefab/UI/AchieveItem", UIPathData.UIType.TYPE_ITEM);    
    public static UIPathData EquipStrengthenItem = new UIPathData("Prefab/UI/EquipStrengthenItem", UIPathData.UIType.TYPE_ITEM);
    //public static UIPathData PlayerListItem = new UIPathData("Prefab/UI/PlayerListItem", UIPathData.UIType.TYPE_ITEM);
	public static UIPathData PlayerListItem = new UIPathData("Prefab/UI/Main/FriendListItem1", UIPathData.UIType.TYPE_ITEM);
    //public static UIPathData PlayerFindItem = new UIPathData("Prefab/UI/PlayerFindItem", UIPathData.UIType.TYPE_ITEM);
	public static UIPathData PlayerFindItem = new UIPathData("Prefab/UI/playerFindItem1", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData SceneMapTransmitPoint = new UIPathData("Prefab/UI/SceneMapTransmitPoint", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData PopMenuItem = new UIPathData("Prefab/UI/PopMenuItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData MissionItem = new UIPathData("Prefab/UI/MissionItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData MissionLogItem = new UIPathData("Prefab/UI/MissionLogItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData PartnerSkillItem = new UIPathData("Prefab/UI/PartnerSkillItem", UIPathData.UIType.TYPE_ITEM, "Partner");
    public static UIPathData PartnerFrameItem = new UIPathData("Prefab/UI/PartnerFrameItem", UIPathData.UIType.TYPE_ITEM, "Partner");
    public static UIPathData MountItem = new UIPathData("Prefab/UI/MountItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData TitleInvestitiveItem = new UIPathData("Prefab/UI/TitleInvestitiveItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData FastReplyItem = new UIPathData("Prefab/UI/FastReplyItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData LastSpeakerItem = new UIPathData("Prefab/UI/LastSpeakerItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData FashionItem = new UIPathData("Prefab/UI/FashionItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData ConsignSaleBagItem = new UIPathData("Prefab/UI/ConsignSaleBagItem", UIPathData.UIType.TYPE_ITEM, "ConsignSale");
    public static UIPathData ConsignSaleBuyItem = new UIPathData("Prefab/UI/ConsignSaleBuyItem", UIPathData.UIType.TYPE_ITEM, "ConsignSale");
    public static UIPathData ConsignSaleMySaleItem = new UIPathData("Prefab/UI/ConsignSaleMySaleItem", UIPathData.UIType.TYPE_ITEM, "ConsignSale");
    public static UIPathData ConsignSaleQualityItem = new UIPathData("Prefab/UI/ConsignSaleQualityItem", UIPathData.UIType.TYPE_ITEM, "ConsignSale");
    public static UIPathData ConsignSaleClassItem = new UIPathData("Prefab/UI/ConsignSaleClassItem", UIPathData.UIType.TYPE_ITEM, "ConsignSale");
    public static UIPathData ConsignSaleSubClassItem = new UIPathData("Prefab/UI/ConsignSaleSubClassItem", UIPathData.UIType.TYPE_ITEM, "ConsignSale");
    public static UIPathData TeamPlatformItem = new UIPathData("Prefab/UI/TeamPlatformItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData SkillRootButtonItem = new UIPathData("Prefab/UI/SkillRootButtonItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData SkillRootBarItem = new UIPathData("Prefab/UI/SkillRootBarItem", UIPathData.UIType.TYPE_ITEM);
    //public static UIPathData GuildListItem = new UIPathData("Prefab/UI/GuildListItem", UIPathData.UIType.TYPE_ITEM);
    //public static UIPathData GuildMemberListItem = new UIPathData("Prefab/UI/GuildMemberListItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData YuanBaoShopItem = new UIPathData("Prefab/UI/YBGood", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData DropItemHeadInfo = new UIPathData("Prefab/UI/DropItemHeadInfo", UIPathData.UIType.TYPE_ITEM, "DropItemHeadInfo");
    public static UIPathData PlayerHeadInfo = new UIPathData("Prefab/UI/PlayerHeadInfo", UIPathData.UIType.TYPE_ITEM, "PlayerHeadInfo");
    public static UIPathData FellowHeadInfo = new UIPathData("Prefab/UI/FellowHeadInfo", UIPathData.UIType.TYPE_ITEM, "FellowHeadInfo");
    public static UIPathData NPCHeadInfo = new UIPathData("Prefab/UI/NPCHeadInfo", UIPathData.UIType.TYPE_ITEM, "NPCHeadInfo");
    public static UIPathData MercenaryListItem = new UIPathData("Prefab/UI/MercenaryListItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData LivingSkillFormulaItem = new UIPathData("Prefab/UI/LiveSkillFormulaItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData LivingSkillStuffItem = new UIPathData("Prefab/UI/LiveSkillStuffItem", UIPathData.UIType.TYPE_ITEM);
   // public static UIPathData LivingSkillShenQiStuffItem = new UIPathData("Prefab/UI/LiveSkillShenqiStuffItem", UIPathData.UIType.TYPE_ITEM);
   // public static UIPathData AutoShenqiStuffItem = new UIPathData("Prefab/UI/AutoShenqiStuffItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData MasterMemberItem = new UIPathData("Prefab/UI/MasterMemberItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData MasterReserveMemberItem = new UIPathData("Prefab/UI/MasterCheckItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData MasterPreviewItem = new UIPathData("Prefab/UI/MasterItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData WorldBossListItem = new UIPathData("Prefab/UI/WorldBossListItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData DamageBoard = new UIPathData("Prefab/UI/DamageBoard", UIPathData.UIType.TYPE_ITEM, "DamageBoard");
    public static UIPathData BackCamera = new UIPathData("Prefab/UI/BackCamera", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData PvPRankListItem = new UIPathData("Prefab/UI/PvPRankListItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData PowerPushListItem = new UIPathData("Prefab/UI/PowerPushItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData PowerPushReliveListItem = new UIPathData("Prefab/UI/PowerPushReliveItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData SwordsManItem = new UIPathData("Prefab/UI/SwordsManItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData SwordsManShopItem = new UIPathData("Prefab/UI/SwordsManShopItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData CangKuItem = new UIPathData("Prefab/UI/CangKuItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData CangKuBackItem = new UIPathData("Prefab/UI/CangKuBackItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData MasterShopItem = new UIPathData("Prefab/UI/MasterGood", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData AutoSelSkillItem = new UIPathData("Prefab/UI/AutoSelSkillItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData MakeWaistbandItem = new UIPathData("Prefab/UI/MakeWaistbandItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData WuLinMemberListItem = new UIPathData("Prefab/UI/WuLinMemberListItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData ActivityRewardItem = new UIPathData("Prefab/UI/XiaofeiItem", UIPathData.UIType.TYPE_ITEM, "NewReward");
    public static UIPathData BelleShowItem = new UIPathData("Prefab/UI/BelleShowItem", UIPathData.UIType.TYPE_ITEM);
    public static UIPathData RewardOnlineItem = new UIPathData("Prefab/UI/RewardOnlineItem", UIPathData.UIType.TYPE_ITEM, "NewReward");
    //baseui 
	public static UIPathData RollNotice = new UIPathData("Prefab/UI/RollNotice", UIPathData.UIType.TYPE_MESSAGE, "MainBaseUI");
    public static UIPathData TargetFrameRoot = new UIPathData("Prefab/UI/TargetFrameRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData PlayerFrameRoot = new UIPathData("Prefab/UI/PlayerFrameRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData MenuBarRoot = new UIPathData("Prefab/UI/MenuBarRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData FunctionButtonRoot = new UIPathData("Prefab/UI/FunctionButtonRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData MissionDialogAndLeftTabsRoot = new UIPathData("Prefab/UI/MissionDialogAndLeftTabsRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData ChatFrameRoot = new UIPathData("Prefab/UI/ChatFrameRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData ExpRoot = new UIPathData("Prefab/UI/ExpRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData JoyStickRoot = new UIPathData("Prefab/UI/JoyStickRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData SkillBarRoot = new UIPathData("Prefab/UI/SkillBarRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData PlayerHitsRoot = new UIPathData("Prefab/UI/PlayerHitsRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData SkillProgress = new UIPathData("Prefab/UI/SkillProgress", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData CollectItemSlider = new UIPathData("Prefab/UI/CollectItemSliderRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData RechargeBar = new UIPathData("Prefab/UI/RechargeBar", UIPathData.UIType.TYPE_BASE, "MainBaseUI");
    public static UIPathData PkNotice = new UIPathData("Prefab/UI/PKNoticeRoot", UIPathData.UIType.TYPE_BASE, "MainBaseUI");

    public static UIPathData MessageBox = new UIPathData("Prefab/UI/MessageBoxRoot", UIPathData.UIType.TYPE_BASE);
    // popwindow
    public static UIPathData HuoDongJiangLi = new UIPathData("Prefab/UI/HuodongjiangliRoot", UIPathData.UIType.TYPE_POP, "NewReward");
    public static UIPathData RewardOnline = new UIPathData("Prefab/UI/RewardOnline", UIPathData.UIType.TYPE_POP, "NewReward");
    public static UIPathData AddFriend = new UIPathData("Prefab/UI/AddFriend", UIPathData.UIType.TYPE_POP);
	public static UIPathData OpenServer = new UIPathData("Prefab/UI/OpenServer", UIPathData.UIType.TYPE_POP);
    public static UIPathData SysShop = new UIPathData("Prefab/UI/SysShopController", UIPathData.UIType.TYPE_POP, "SystemShop", true);
    public static UIPathData SceneMapRoot = new UIPathData("Prefab/UI/SceneMapRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData WorldMapWindow = new UIPathData("Prefab/UI/WorldMapWindow", UIPathData.UIType.TYPE_POP);
    //public static UIPathData AutoFightRoot = new UIPathData("Prefab/UI/AutoFightRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData MissionInfoController = new UIPathData("Prefab/UI/MissionInfoRoot", UIPathData.UIType.TYPE_POP, null, false, false);// 任务领奖UI
	public static UIPathData MarryRoot = new UIPathData("Prefab/UI/MarryDialogueRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData OptionDialogRoot = new UIPathData("Prefab/UI/OptionDialogRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData ChatInfoRoot = new UIPathData("Prefab/UI/ChatInfoRoot", UIPathData.UIType.TYPE_POP, null, false, false);// 聊天界面
    public static UIPathData ServerChoose = new UIPathData("Prefab/UI/ServerChooseController", UIPathData.UIType.TYPE_POP);
    public static UIPathData RoleChoose = new UIPathData("Prefab/UI/RoleChoose", UIPathData.UIType.TYPE_POP);
    public static UIPathData RoleCreate = new UIPathData("Prefab/UI/RoleCreate", UIPathData.UIType.TYPE_POP);
    public static UIPathData ChannelChange = new UIPathData("Prefab/UI/ChangeChannel", UIPathData.UIType.TYPE_POP);
    public static UIPathData Activity = new UIPathData("Prefab/UI/ActivityController", UIPathData.UIType.TYPE_POP, null, false, false);
    public static UIPathData PvPShopRoot = new UIPathData("Prefab/UI/PvpShop", UIPathData.UIType.TYPE_POP);
    public static UIPathData PKSetInfo = new UIPathData("Prefab/UI/PKSetRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData AwardRoot = new UIPathData("Prefab/UI/RewardRoot", UIPathData.UIType.TYPE_POP);// 应该已弃用
    public static UIPathData MoneyTreeRoot = new UIPathData("Prefab/UI/MoneyTreeRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData DailyDrawRoot = new UIPathData("Prefab/UI/DailyLuckyDrawRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData HelpController = new UIPathData("Prefab/UI/HelpController", UIPathData.UIType.TYPE_POP);
    public static UIPathData YuanBaoShop = new UIPathData("Prefab/UI/YBShop", UIPathData.UIType.TYPE_POP);// 应该已弃用
    public static UIPathData RankRoot = new UIPathData("Prefab/UI/RankRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData ZiPaiRoot = new UIPathData("Prefab/UI/ZiPaiRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData CheckPowerRoot = new UIPathData("Prefab/UI/CheckPowerRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData VictoryScoreRoot = new UIPathData("Prefab/UI/VictoryScoreRoot", UIPathData.UIType.TYPE_POP);
	public static UIPathData SNSRoot = new UIPathData("Prefab/UI/SNS", UIPathData.UIType.TYPE_POP);
	public static UIPathData SNSShareCodeRoot = new UIPathData("Prefab/UI/SNSBonusCode", UIPathData.UIType.TYPE_POP);
	public static UIPathData SNSShareRoot = new UIPathData("Prefab/UI/SNSShare", UIPathData.UIType.TYPE_POP);    
    public static UIPathData Recharge = new UIPathData("Prefab/UI/ReChargeCollect", UIPathData.UIType.TYPE_POP);
    public static UIPathData ChangeName = new UIPathData("Prefab/UI/ChangeName", UIPathData.UIType.TYPE_POP);
    public static UIPathData ChargeActivity = new UIPathData("Prefab/UI/ChargeActivity", UIPathData.UIType.TYPE_POP);
    public static UIPathData CangKu = new UIPathData("Prefab/UI/CangKu", UIPathData.UIType.TYPE_POP);
    public static UIPathData BlackMarket = new UIPathData("Prefab/UI/BlackMarket", UIPathData.UIType.TYPE_POP);
    public static UIPathData VipRoot = new UIPathData("Prefab/UI/VipRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData ShareRoot = new UIPathData("Prefab/UI/ShareRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData ChristmasController = new UIPathData("Prefab/UI/ChristmasController", UIPathData.UIType.TYPE_POP);
    public static UIPathData PresentRoot = new UIPathData("Prefab/UI/Present", UIPathData.UIType.TYPE_POP);
	public static UIPathData FestivalController = new UIPathData("Prefab/UI/FestivalController", UIPathData.UIType.TYPE_POP);
    public static UIPathData FlowerEggRoot = new UIPathData("Prefab/UI/FlowerEgg", UIPathData.UIType.TYPE_POP);
    public static UIPathData GongJiShopRoot = new UIPathData("Prefab/UI/GongJiShop", UIPathData.UIType.TYPE_POP);
    public static UIPathData PicGuideRoot = new UIPathData("Prefab/UI/PicGuideRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData NewServerActivityRoot = new UIPathData("Prefab/UI/NewServerActivityRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData MissionGame = new UIPathData("Prefab/UI/Missiongame", UIPathData.UIType.TYPE_POP);
    public static UIPathData StoryCopySceneResultRoot = new UIPathData("Prefab/UI/ActivityJuQingScoreRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData StoryCopySceneInfoRoot = new UIPathData("Prefab/UI/ActivityJuQingInfoRoot2", UIPathData.UIType.TYPE_POP);
    // STORY
    public static UIPathData StoryDialogRoot = new UIPathData("Prefab/UI/StoryDialogRoot", UIPathData.UIType.TYPE_STORY);
	public static UIPathData MovieUI = new UIPathData("Prefab/UI/MovieUI", UIPathData.UIType.TYPE_STORY);
    public static UIPathData ShiCiRoot = new UIPathData("Prefab/UI/ShiCiRoot", UIPathData.UIType.TYPE_STORY);
    public static UIPathData JianPuRoot = new UIPathData("Prefab/UI/JianPuRoot", UIPathData.UIType.TYPE_STORY);

    // TIPBOX
    public static UIPathData ItemTooltipsRoot = new UIPathData("Prefab/UI/ItemTooltipsRoot", UIPathData.UIType.TYPE_TIP, "TooltipsGroup");
    public static UIPathData EquipTooltipsRoot = new UIPathData("Prefab/UI/EquipTooltipsRoot", UIPathData.UIType.TYPE_TIP, "TooltipsGroup");
    public static UIPathData NumChoose = new UIPathData("Prefab/UI/NumChooseController", UIPathData.UIType.TYPE_TIP);
	public static UIPathData FlowerNumChoose = new UIPathData("Prefab/UI/UseFlowerNumChooseController", UIPathData.UIType.TYPE_TIP);
    public static UIPathData QueueWindow = new UIPathData("Prefab/UI/QueueWindow", UIPathData.UIType.TYPE_TIP);
    public static UIPathData RelationNamePopWindow = new UIPathData("Prefab/UI/RelationNamePopWindow", UIPathData.UIType.TYPE_TIP, "Relation");
    public static UIPathData AutoDrug = new UIPathData("Prefab/UI/AutoDrug", UIPathData.UIType.TYPE_TIP);
    public static UIPathData SwordsManTooltipsRoot = new UIPathData("Prefab/UI/SwordsManToolTips", UIPathData.UIType.TYPE_TIP, "TooltipsGroup");
    public static UIPathData MoneyTipRoot = new UIPathData("Prefab/UI/MoneyTipRoot", UIPathData.UIType.TYPE_TIP, "TooltipsGroup");
    public static UIPathData MissionTooltipsRoot = new UIPathData("Prefab/UI/MissionTooltipsRoot", UIPathData.UIType.TYPE_TIP, "TooltipsGroup");
    public static UIPathData FellowTooltipsRoot = new UIPathData("Prefab/UI/FellowTooltipsRoot", UIPathData.UIType.TYPE_TIP, "TooltipsGroup");
       
    //MenuPop
    public static UIPathData Belle = new UIPathData("Prefab/UI/BelleController", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData FlyWingRoot = new UIPathData("Prefab/UI/ChibangRoot", UIPathData.UIType.TYPE_MENUPOP); 
    public static UIPathData EquipStren = new UIPathData("Prefab/UI/EquipStrengthenRoot", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData BackPackRoot = new UIPathData("Prefab/UI/BackPackRoot", UIPathData.UIType.TYPE_MENUPOP, null, false, false);
    public static UIPathData RelationRoot = new UIPathData("Prefab/UI/RelationRoot", UIPathData.UIType.TYPE_POP, "Relation", true);
    public static UIPathData MissionLogRoot = new UIPathData("Prefab/UI/MissionLogRoot", UIPathData.UIType.TYPE_POP);
    public static UIPathData PartnerFrameRoot = new UIPathData("Prefab/UI/PartnerFrameRoot", UIPathData.UIType.TYPE_MENUPOP, "Partner", true);
    public static UIPathData RoleView = new UIPathData("Prefab/UI/RoleView", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData SkillInfo = new UIPathData("Prefab/UI/SkillRoot", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData SystemAndAutoFight = new UIPathData("Prefab/UI/SystemRoot", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData ConsignSaleRoot = new UIPathData("Prefab/UI/ConsignSaleRoot", UIPathData.UIType.TYPE_MENUPOP, "ConsignSale", true);
    public static UIPathData GuildRoot = new UIPathData("Prefab/UI/GuildRoot", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData Restaurant = new UIPathData("Prefab/UI/Restaurant", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData LivingSkill = new UIPathData("Prefab/UI/Liveskill", UIPathData.UIType.TYPE_MENUPOP);    
    public static UIPathData OtherRoleView = new UIPathData("Prefab/UI/OtherRoleView", UIPathData.UIType.TYPE_POP);
    public static UIPathData SwordsManLevelUpRoot = new UIPathData("Prefab/UI/SwordsManLevelupController", UIPathData.UIType.TYPE_MENUPOP);// 应该已弃用
    public static UIPathData SwordsManShopRoot = new UIPathData("Prefab/UI/SwordsManShop", UIPathData.UIType.TYPE_MENUPOP);// 应该已弃用
    public static UIPathData SwordsManRoot = new UIPathData("Prefab/UI/SwordsManController", UIPathData.UIType.TYPE_MENUPOP);// 应该已弃用
    public static UIPathData Biography = new UIPathData("Prefab/UI/BiographyController", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData Notice = new UIPathData("Prefab/UI/Notice", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData JoyStickTipInfo = new UIPathData("Prefab/UI/XiaoMiNotice", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData MountFrameRoot = new UIPathData("Prefab/UI/MountFrameRoot", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData FashionRoot = new UIPathData("Prefab/UI/FashionRoot", UIPathData.UIType.TYPE_MENUPOP);
    public static UIPathData SevenDaysReward = new UIPathData("Prefab/UI/SevenDaysReward", UIPathData.UIType.TYPE_POP, "NewReward");

    //MessageUI    
    public static UIPathData CentreNotice = new UIPathData("Prefab/UI/CentreNotice", UIPathData.UIType.TYPE_MESSAGE);
   // public static UIPathData RollNotice = new UIPathData("Prefab/UI/RollNotice", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData PopMenuRoot = new UIPathData("Prefab/UI/PopMenuRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData PowerRemindRoot = new UIPathData("Prefab/UI/PowerRemindRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData EquipRemindRoot = new UIPathData("Prefab/UI/EquipRemindRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData UseItemRemindRoot = new UIPathData("Prefab/UI/UseItemRemindRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData ItemRemindRoot = new UIPathData("Prefab/UI/ItemRemindRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData CountDown = new UIPathData("Prefab/UI/CountDown", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData ChallengeRewardRoot = new UIPathData("Prefab/UI/ChallengeRewardRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData LevelupTip = new UIPathData("Prefab/UI/LevelUpTip", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData NewPlayerGuidRoot = new UIPathData("Prefab/UI/NewPlayerGuidRoot", UIPathData.UIType.TYPE_MESSAGE);
	public static UIPathData GuaJiGuild  = new UIPathData("Prefab/UI/GuaJiGuild", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData NewItemGetRoot = new UIPathData("Prefab/UI/NewItemGetRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData BonusItemGetRoot = new UIPathData("Prefab/UI/BonusItemGetRoot", UIPathData.UIType.TYPE_MESSAGE);// 应该已弃用
    public static UIPathData ShareTargetChooseRoot = new UIPathData("Prefab/UI/ShareTargetChooseRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData UpdateLoadingBar = new UIPathData("Prefab/UI/UpdateLoadingBar", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData MercenaryWindowRoot = new UIPathData("Prefab/UI/MercenaryWindowRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData WorldBossWindowRoot = new UIPathData("Prefab/UI/WorldBossRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData GuilWarRetWindow = new UIPathData("Prefab/UI/GuildWarRetInfoRoot", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData GuilWarPushMessage = new UIPathData("Prefab/UI/GuildWarInfoBt", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData RequestReviewWindow = new UIPathData("Prefab/UI/Pingjia", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData MissionCompletefEffect = new UIPathData("Prefab/UI/MissionCompleted", UIPathData.UIType.TYPE_MESSAGE);
    public static UIPathData BelleMatrixUpdateEffect = new UIPathData("Prefab/UI/BelleMatrixUpdate", UIPathData.UIType.TYPE_MESSAGE);

    //Sign 签到有礼
    public static UIPathData SignReward = new UIPathData("Prefab/UI/QiandaoRoot", UIPathData.UIType.TYPE_POP, "NewReward");
    public static UIPathData SignRewardTip = new UIPathData("Prefab/UI/HuodongItem", UIPathData.UIType.TYPE_TIP, "NewReward");
    //DeathUI
    public static UIPathData Relive = new UIPathData("Prefab/UI/Relive", UIPathData.UIType.TYPE_DEATH);
	//失败
	public static UIPathData FailRoot = new UIPathData("Prefab/UI/FailRoot", UIPathData.UIType.TYPE_MESSAGE);
}
