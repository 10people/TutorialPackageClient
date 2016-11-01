/********************************************************************************
 *	文件名：	GlobeVar.cs
 *	全路径：	\Script\GlobeDefine\GlobeVar.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：全局变量定义。枚举请定义在GlobeDefine.cs中
 *	修改记录：
*********************************************************************************/
using System.Collections;
using UnityEngine;
using GCGame.Table;

namespace Games.GlobeDefine
{
    public class GlobeVar
    {
        //Static 定义
        public static bool s_FirstInitGame = true;         //第一次进入游戏标示

        //Const 定义
        public const int INVALID_ID = -1;                   //非法ID
        public const string characTorPath = "";

        public const System.UInt64 INVALID_GUID = 0xFFFFFFFFFFFFFFFFul;        //非法GUID

        

        //////////////////////////////////////////////////////////////////////////
        //队伍相关定义
        //////////////////////////////////////////////////////////////////////////
        public const int MAX_TEAM_MEMBER = 5;               //队伍最大人数

        //不同职业的头像信息
        public static string[] m_HeadIcon = new string[(int)CharacterDefine.PROFESSION.MAX] { "Kuangzhanshi", "Shuangjianshi", "DaLiHead", "Modaoshi" ,"head-gaibang"};//todo 头像图标暂定

        public const int MAX_LAST_SPEAKERS = 300;        // 聊天框上次发言玩家记录最大数量

        public const int MAX_FRIEND_NUM = 99;          // 玩家好友上限
        public const int MAX_BLACK_NUM = 99;           // 玩家黑名单上限

        public const int YanMenGuan_QiaoFengAni = 86;
        public const int YanMenGuan_QiaoFengZhenPing = 54;

        public const int YanMenGuan_BossAni = 85;

        public const int YanMenGuan_BeforeQingGongStoryID = 14;
        public const int YanMenGuan_BossStory1ID = 55;
        public const int YanMenGuan_BossStory2ID = 15;
        public const int Demo_RideIntorStoryID = 77;

        public const int YanMenGuan_ModelStoryID = 0;
        public const int YanmMenGuan_QingGongID_Over = 2;

        public const int EmotionTiger_Num = 60;

        public static string[] QualityColorGrid = { "QualityGrey", "QualityGreen", "QualityBlue", "QualityPurple", "QualityYellow", "QualityDarkRed", "QualityGold" };

        public const int PosionForgDataID = 44;

        public const int QianLiChuanYinDataID = 4031;

        public const int MAX_FASHION_SIZE = 20;

        public const int MARRY_PARADE_STORY = 60;//游街故事模式

		// Cabal Demo中需要进入安静模式的剧情对话
		public const int DEMO_STORY1 = 76;
		public const int DEMO_STORY2 = 81;
		public const int DEMO_STORY3 = 77;
		public const int DEMO_STORY4 = 84;
		public const int DEMO_STORY5 = 78;
		public const int DEMO_STORY6 = 79;
		public const int DEMO_STORY7 = 80;

        //GameObject Pool相关
        public const int POOL_MAX_CAPACITY = 256;       //GameObject Pool自增长的最大可能长度，超过之后停止自增长并输出错误日志

        //帮会
        public const int CREATE_GUILD_LEVEL = 40;       //帮会创建等级
        public const int JOIN_GUILD_LEVEL = 20;         //帮会加入等级
        public const int MAX_GUILD_NAME = 15;           //帮会名字长度 已换算UTF8 5*3
        public const int MAX_GUILD_DECLARATION = 150;   //公会宣言长度 已换算UTF8 50*3
        public const int MAX_GUILD_NOTICE = 150;        //帮会公告长度 已换算UTF8 50*3
        public const int MAX_GUILD_JOBNAME = 15;        //公会职务名长度 已换算UTF8 5*3

        public const int GUILD_VICECHIEF_AUTHCOUNT = 4;
        public const int GUILD_ELDER_AUTHCOUNT = 2;

        public static int[] GUILD_MAX_ELDER = { 2, 3, 4, 5, 6, 6, 6, 6, 6 };
        public static int GetGuildElderMax(int nLevel)
        {
            nLevel = nLevel - 1;
            if (nLevel >= 0 && nLevel < GUILD_MAX_MEMBER.Length)
            {
                return GUILD_MAX_ELDER[nLevel];
            }

            return 0;
        }

        public static int[] GUILD_MAX_MEMBER = {80, 100, 120, 140, 160, 180, 220, 260, 300};
        public static int GetGuildMemberMax(int nLevel)
        {
            //由于帮会等级是1-9，但是索引为0-8，所以需要进行-1操作
            nLevel = nLevel - 1;
            if (nLevel >= 0 && nLevel < GUILD_MAX_MEMBER.Length)
            {
                return GUILD_MAX_MEMBER[nLevel];
            }

            return 0;
        }

        public static int GetGuildExpMax(int nLevel)
        {
            Tab_GuildAutoLevelUp table = TableManager.GetGuildAutoLevelUpByID(nLevel, 0);
            if (null != table)
            {
                return table.NeedGuildExp;
            }

            return 0;
        }

        //帮会成员名字，帮主，副帮主，帮众，预备成员
        public static string[] GUILD_JOB_NAME = { "#{1737}", "#{10388}", "#{10389}", "#{10390}", "#{10391}", "#{3309}" };

        public const int DEFAULT_VISUAL_ID = 0;         //默认外观ID

        public const int NewButtonEffect = 65;

        public static Vector3 INFINITY_FAR = new Vector3(-1000.0f, -1000.0f, -1000.0f);

        //透明色
        public static Color TRANSPARENT_COLOR = new Color(1, 1, 1, 0.005f);

        //师门
        public const int MAX_MASTER_NAME = 12;              //师门名称最大字数 6汉字
        public const int MAX_MASTER_NOTICE = 64;            //师门公告最大字数 32汉字
        public const int CREATE_MASTER_LEVEL = 60;
        public const int MAX_MASTER_MEMBER_NUM = 100;       //师门最大成员数量
        public const int MAX_MASTER_SKILL_NAME = 12;        //师门技能名称最大字数 6汉字

        //体力
        public const int MAX_STAMINA = 100;         // 玩家最大体力值基础值
        public const int STAMINA_BUYVALUE = 100;    // 玩家每次购买体力值

        //材质变色Material
        public const float BLUEMATERIAL_R = 0.208f;
        public const float BLUEMATERIAL_G = 0.565f;
        public const float BLUEMATERIAL_B = 0.741f; 
        
        public const float REDMATERIAL_R = 0.788f;
        public const float REDMATERIAL_G = 0.313f;
        public const float REDMATERIAL_B = 0.313f;


        //装备
        public const int EQUIP_ENCHANCE_MAX_LEVEL = 60;     //强化最大等级

        //结婚特殊技能动作
        public const int MARRY_SKILL_1 = 90103;
        public const int MARRY_SKILL_2 = 90104;
        public const int MARRY_SKILL_3 = 90105;

        //战力区分
        public const int COMBAT_LEVEL_1 = 300000;
        public const int COMBAT_LEVEL_2 = 500000;
        public const int COMBAT_LEVEL_3 = 1000000;
        public const int COMBAT_LEVEL_4 = 2000000;
        public const int COMBAT_LEVEL_5 = 3000000;
        public const int COMBAT_EFFECT_1 = 169;
        public const int COMBAT_EFFECT_2 = 170;
        public const int COMBAT_EFFECT_3 = 171;
        public const int COMBAT_EFFECT_4 = 241;
        public const int COMBAT_EFFECT_5 = 242;


        public const int SKILLLEVUPEFFECTID = 193; //技能升级特效

		// 角色升级特效
		public const int PLAYERLEVELUPEFFECTID = 52;

        public const int WuYingXunZongDataID = 59;

        public const int BIND_CHILDREN_MAX = 4;
        //苏州 黑市商人DataID
        public const int BLACKMAKETDATAID_SHUZHOU = 909;
        //洱海 黑市商人DataID
        public const int BLACKMAKETDATAID_ERHAI = 911;
        //苏州 帮会NPC
        public const int GUILDDATAID_SUZHOU = 214;
        //苏州 仓库DataID
        public const int CANGKU1_SHUZHOU = 910;
        //苏州 仓库DataID
        public const int CANGKU2_SHUZHOU = 216;

        public const int USE_AUTOFIGHT_VIPLEVEL = 2;
        //结婚相关NPC
        public const int MARRY_NPCID = 848;
        public const int DIVORCE_NPCID = 849;
        public const int PARADE_NPCID = 933;
        public const int PARADE_BUSID = 934;
        public const int MARRY_RING_ITEMID = 50;
        //伙伴抽取角标提醒开始级别
        public const int PARTNER_GAIN_TIPS_LEVEL = 32;

        //奖励NPC
        public const int AWARD_NPCID = 81999;

        //自动强化功能 25级以上可以使用
        public const int MAX_AUTOEQUIT_LIVE = 25;

        //江湖郎中NPC
        public const int RECOVERNPC_DATAID = 996;

        // 跑商任务ID
        public const int PAOSHANG_ACCEPTNPC_DATAID = 1165;
        public const int PAOSHANG_MISSIONID_H = 1166;
        public const int PAOSHANG_MISSIONID_L = 1167;
        public const int PAOSHANG_EFFECT_CANROB = 1168;
        public const int PAOSHANG_EFFECT_NOTCANROB = 1169;

        public const int QUCHONGJI_MISSION_ID = 33;
        public const int QUCHONGJI_ID = 44;
        public const int NORMAL_GUILD_VILLAINNPC_DATAID = 1001;
        public const int SUPER_GUILD_VILLAINNPC_DATAID = 1002;

        public const int GONGJISHOP_NPC_DATAID = 1034;  // 军备兑换 功绩ShopNPC

        //轻功特效ID
        public const int QINGGONG_EFFECT = 62;
        //个人轻功技能CD
        public const float LIGHT_SKILL_CD = 5.0f;
        public const int LIGHT_SKILL_EFFECT = 240;
        public const int LIGHT_SKILL_TAIL = 243;        //轻功拖尾效果

        public const int MAIL_GUILDMAIL_ORIGIN = 40044;

        public const int MOUNT_TIANLONG_ID = 13;    // 天龙坐骑ID 动作需要特殊处理

        // 元宝商店赠送/代付
        public const int SHOPPINGLIST_GOODSMAX = 5;                 // 购物单物品上限
        public const int SHOPPINGLISTCOUNT_PLAYER_PRESENT = 15;     // 每个玩家身上的赠送上限
        public const int SHOPPINGLISTCOUNT_PLAYER_WAITPAY = 5;      // 每个玩家身上的代付上限
        public const int SHOPPINGLISTLIFE_PRESENT = 2592000;        // 赠送保存时间 单位:秒 30天
        public const int SHOPPINGLISTLIFE_WAITPAY = 259200;         // 代付保存时间 单位:秒 3天

        // 元宝商店卖的VIP礼包ID V9-V15
        public const int YUANBAOSHOP_VIPBOX_LV9 = 59354;
        public const int YUANBAOSHOP_VIPBOX_LV10 = 59355;
        public const int YUANBAOSHOP_VIPBOX_LV11 = 59356;
        public const int YUANBAOSHOP_VIPBOX_LV12 = 59357;
        public const int YUANBAOSHOP_VIPBOX_LV13 = 59358;
        public const int YUANBAOSHOP_VIPBOX_LV14 = 59359;
        public const int YUANBAOSHOP_VIPBOX_LV15 = 59360;

		public const Games.GlobeDefine.GameDefine_Globe.InternationType TYPE_INTERNATION = Games.GlobeDefine.GameDefine_Globe.InternationType.DEFAULT;

        public const int ZHANKUANGPAI_DATAID = 70030;
        public const int HEROCODE_MAILITEM = 70066;

        public const int TRAININGSTAGE_LEVELCOUNT = 5;
        public const int TRAININGLEVEL_MAX = 300;
        public const int TRAINING_OPENLEVEL = 90;

		//xp技能专用impactId
		public const int XP_IMPACT_MIN_ID = 300000;
		public const int XP_IMPACT_MAX_ID = 400000;

        //xp技能，变身的临界值--mod:现在全部改成了100
        public const int XP_CHNAGE_MODE_1 = 100; //25%时一变 (单词写错了，哈哈)
        public const int XP_CHANGE_MODE_2 = 100;
        public const int XP_CHANGE_MODE_3 = 100; //满时三变

        //变身后附加技能放置的位置
        public const int CHANGEMODE_SKILLPOSITION = 4;
        //宝石开新孔的临界值
        public const int GEM_HOLE_FIRST = 40;
        public const int GEM_HOLE_SECOND = 70;
        public const int GEM_HOLE_THIRD = 90;


        // 玩家角色的模型绑定点
        public const string EFFECT_BIND_POINT_BASE = "EffectPoint";
        public const string EFFECT_BIND_POINT_CENTER = "CenterPoint";
        public const string EFFECT_BIND_POINT_HEAD = "HeadPoint";
        public const string EFFECT_BIND_POINT_LHAND = "LHandPoint";
        public const string EFFECT_BIND_POINT_RHAND = "RHandPoint";
        public const string EFFECT_BIND_POINT_LFOOT = "LFootPoint";
        public const string EFFECT_BIND_POINT_RFOOT = "RFootPoint";
        public const string EFFECT_BIND_POINT_HEADTOP = "HeadTopPoint";
        public const string EFFECT_BIND_POINT_LSHOULDER = "LShoulderPoint";
        public const string EFFECT_BIND_POINT_RSHOULDER = "RShoulderPoint";
        public const string EFFECT_BIND_POINT_RHANDBACK = "RHandBackPoint";
        public const string EFFECT_BIND_POINT_LHANDBACK = "LHandBackPoint";
        public const string EFFECT_BIND_POINT_TAIL = "TailPoint";
        public const string EFFECT_BIND_POINT_ADDONS = "AddonsPoint";
        public const string EFFECT_BIND_POINT_SPECIALWEAPON = "SpecialWeapon";

        //玩家坐骑模型绑定点 
        public const string EFFECT_BIND_POINT_MOUNT_CENTER = "MountCenterPoint";
        public const string EFFECT_BIND_POINT_MOUNT_BACK = "MountBackPoint";
        public const string EFFECT_BIND_POINT_MOUNT_LFLANK = "MountLFlankPoint";
        public const string EFFECT_BIND_POINT_MOUNT_RFLANK = "MountRFlankPoint";
        
		// 玩家翅膀绑定点
        public const string EFFECT_BIND_POINT_LFLYWING= "LFlyWingPoint";
		public const string EFFECT_BIND_POINT_RFLYWING = "RFlyWingPoint";

	   //玩家武器模型绑定点         
		public const string EFFECT_BIND_POINT_LWEAPON = "LWeaponPoint";
		public const string EFFECT_BIND_POINT_RWEAPON = "RWeaponPoint";

        //玩家上坐骑时 左右手武器的位置和旋转角度 写死
        public static Vector3 MOUNT_WEAPONPOS_L = new Vector3(-0.23f, -0.019f, -0.19f);
        public static Vector3 MOUNT_WEAPONROTATE_L = new Vector3(67f, 254f, 102f);
        public static Vector3 MOUNT_WEAPONPOS_R = new Vector3(-0.23f, -0.19f, 0.23f);
        public static Vector3 MOUNT_WEAPONROTATE_R = new Vector3(64f, 218f, 7f);

        //技能警告效果
        public const string SKILL_WARNING_EFFECT_RECT = "Prefab/Effect/SkillWarningRect";
        /// <summary>
        /// 最大hp数量
        /// </summary>
        public const int MAX_CHARACTER_HP_COUNT = 9;

        //冲锋特殊技能ID
        public const int CRASH_SKILL_ID = 90301;

        //伙伴重生消耗点券数
        public const int PARTNER_REBIRTH_YUANBAO = 20;

        //伙伴繁殖时间 秒
        public const int PARTNER_BREEDING_TIME = 1800;
        public const int PARTNER_BREEDING_RECEIVETIME = 3600;

        //队员传送特效ID
        public const int TEAMTRANS_EFFECTID = 435;

        public const int SHUANGJIANSHI_SKILL1_COMBO1 = 108001;
        public const int SHUANGJIANSHI_SKILL1_COMBO2 = 109001;
        public const int SHUANGJIANSHI_SKILL1_COMBO3 = 110001;

        // 技能新手引导开始技能Id
        public static int[] SKILL_GUIDE_START_IDS = {118001, 209001, 306001 };

		public static bool isShowSwitchAccountButton = true; //是否显示切换账号按钮

        public const int MOUNTCRASH_IMPACTID = 110;

        public const int GUILD_PLAYERRESERVE_MAX = 5;

        public const int GUILD_HIDEANDSEEK_NPCDIALOG = 89;

        public const int MISSION_ID_JUQINGAWARD = 397;

        public const float BOSS_OUTLINE_WIDTH = 0.05f;

        public const float BOSS_RIM_POWER = 0.0F;

		// 翅膀相关

		public const string  STR_FATHER_MODE_NAME = "Model/all/Bip01/Bip01 Pelvis/Bip01 Spine";//"Model";
		public const string  STR_FATHER_OTHER_MODE_NAME = "all/Bip01/Bip01 Pelvis/Bip01 Spine";//"Model";
		public const string STR_MODE_NAME = "FlyWing_Mode";
        public const string STR_MODE_NAME_FADEOBJ = "FlyWing_Mode_FadeObj"; 

		public enum FLY_SOCKET_TYPE
		{
			FLY_SOCKET_NON,
			FLY_SOCKET_ACQUIRE,
			FLY_SOCKET_ACQUIRE_DREAM,
			FLY_SOCKET_DREAM,
			FLY_SOCKET_CANCEL_DREAM,
			FLY_SOCKET_EQUIP,
            FLY_SOCKET_UNEQUIP,
			FLY_SOCKET_ABSORT,
			FLY_SOCKET_ADVANCE,
			FLY_SOCKET_SHOWHIDE,
			FLY_SOCKET_OTHER_PLAYER,
            FLY_SOCKET_CLEAN_ALL_DATA,
            FLY_SOCKET_UNACQUIRE,
			FLY_SOCKET_MAX
		}

        //button置灰常量，只用于isenable无法置灰时
        public static Color BUTTONGRAY = new Color(0, 255, 255, 255);
        //button用于将置灰button恢复正常
        public static Color BUTTONCOLER = new Color(255,255,255,255);
    }
}
