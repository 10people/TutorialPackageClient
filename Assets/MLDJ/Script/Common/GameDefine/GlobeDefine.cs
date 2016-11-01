/********************************************************************************
 *	文件名：	GlobeDefine.cs
 *	全路径：	\Script\GlobeDefine\GlobeDefine.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：游戏全局常量定义
 *	         全局变量请定义在GlobeVar.cs中
 *	         挡功能较多的时候可以分开文件定义
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;

namespace Games.GlobeDefine
{
    public class GameDefine_Globe
    {
        //枚举
        public enum GAMESTATUS					//游戏状态
        {
            GAMESTATUS_INVALID = -1,			//非法状态
            GAMESTATUS_LOGIN,					//登录状态
            GAMESTATUS_MAIN,					//主游戏状态
            GAMESTATUS_NUM,						//状态总数
        }

        public enum OBJ_TYPE                    //Obj类型
        {
            OBJ,
            OBJ_CHARACTER,
            OBJ_NPC,
            OBJ_FELLOW,
            OBJ_OTHER_PLAYER,
            OBJ_MAIN_PLAYER,
            OBJ_ZOMBIE_PLAYER,
            OBJ_DROP_ITEM,
            OBJ_CLIENT,
            OBJ_SNARE,
            OBJ_YANHUA,
        }
        //NPC类别（0普通 1精英 2 BOSS）
        public enum NPC_TYPE
        {
            NORMAL=0,//普通
            ELITE,//精英
            BOSS,//BOSS
        }
        //obj状态 相关 !!!跟服务器 ANIMATIONSTATE　保持一致
        public enum OBJ_ANIMSTATE
        {
            STATE_INVAILD= -1,
            STATE_NORMOR = 0, //待机
            STATE_WALK, //行走
            STATE_HIT,//受击
            STATE_ATTACKDOWN,//击倒
            STATE_ATTACKFLY,//击飞
            STATE_DEATH,//死亡
            STATE_HITBYSHAOLIN,//怪物受击（受到少林的普攻）
            STATE_HITBYTIANSHAN,//怪物受击（受到天山的普攻）
            STATE_HITBYDALI,//怪物受击（受到大理的普攻）
            STATE_HITBYXIAOYAO,//怪物受击（受到逍遥的普攻）
            STATE_JUMP, //跳跃
            STATE_JUMP_END,//跳跃结束
            STATE_FASTRUN_LEFT, //左倾斜快速奔跑
            STATE_FASTRUN_RIGHT, //右倾斜快速奔跑
            STATE_CORPSE,//尸体
            STATE_HITBYGAIBANG,//怪物受击（受到丐帮的普攻）
            STATE_COMBAT      //战斗状态(警戒状态)
        }
        public enum PACKET_DEFINE               //消息包类型定义，一定在最后添加
        {
        }

        public enum EVENT_DEFINE                //客户端事件，一定在最后添加
        {
            EVENT_INVALID = -1,                 // 非法事件
            EVENT_ENTERGAME,                    // 进入游戏事件
            EVENT_CHANGESCENE,                  // 切换场景
            EVENT_CONNECT_SUCCESS,              // 连接服务器成功
            EVENT_CONNECT_FAIL,                 // 连接服务器失败
            EVENT_MISSION_COLLECTITEM,          // 采集任务 直接跑到了采集
            EVENT_COLLECTITEM_RESEED,           // 采集点 刷新

            EVENT_QINGGONG,                     // 客户端轻功

            EVENT_TOUCH_UI, //点击到UI
            EVENT_TOUCH_OBJECT, //点击到模型
            EVENT_TOUCH_SCENE,  //点击到场景地面
            EVENT_CALL_NAVIGATOR,   //呼出浏览器，在0.3秒之后再做这件事情。因为要把游戏切换到后台
        }

        public const int MAX_COPYSCENE_CJGTIER = 100;     //藏经阁最高层

        public enum SCENE_DEFINE
        {
			SCENE_LOGIN             = 0,		   // 登录
            SCENE_LOADINGSCENE      = 1,           // loading
            SCENE_FB_CABALINTRO     = 2,           //新手场景
            SCENE_TESTSCENE         = 3,           //测试场景
            SCENE_PKSCENE           = 4,
            SCENE_MUSEYULIN         = 5,
            SCENE_FB_HUNDUNZHIDI    = 6,
            SCENE_HUANGHUNBIANJING  = 7,
            SCENE_HUANGHUNYAOSAI    = 12,
            SCENE_YIWANGFEIXU       = 17,
            SCENE_FEIQIDUSHI        = 22,

			SCENE_SHISHUI			= 30,	// 试水
			SCENE_ZAISHI			= 31,	// 再试

            //add by mawenbin 
            //copy tlbb scene define for building begin
            SCENE_ERHAI = 101,			// 洱海
            SCENE_WULIANGSHAN = 102,            // 少室山
            SCENE_TIANSHAN = 104,            // 天山
            SCENE_XINGZILIN = 105,            // 杏子林
            SCENE_JIANHUGONG = 106,            // 剑湖宫
            //SCENE_HUTOUZHANCHUAN = 107,            // 虎头战船
			SCENE_HUTOUZHANCHUAN = 13,
            SCENE_WUDAOZHIDIAN = 108,            // 武道之巅副本，暂时为临时资源                                 
            SCENE_XIAOJINGHU = 109,            // 小镜湖
            SCENE_YUQINGGONG = 110,           // 玉清宫
            SCENE_JUXIANZHUANG = 111,           // 聚贤庄-杏子林01
            SCENE_YANMENGUANWAI = 112,           // 雁门关外
            SCENE_SUZHOU = 113,           // 苏州
            SCENE_CANGJINGGE = 114,           // 藏经阁
            SCENE_SHAOSHISHAN = 115,           // 少室山野外
            SCENE_HUASHANLUNJIAN = 116,           // 华山论剑
            SCENE_RICHANGJUEDOU = 117,           // 日常决斗
            SCENE_WANGYOUGU = 118,           // 忘忧谷 副本任务通用场景
            SCENE_YANZIWU = 119,           // 燕子坞
            SCENE_YANGWANGGUMU = 127,           // 燕王古墓
            SCENE_ZHENLONGQIJU = 128,           // 珍珑棋局
            SCENE_GUILDWAR = 130,           // 帮战副本
            SCENE_FBSHAOSHISHAN = 131,           // 副本少室山
            SCENE_JIANYU = 132,           // 监狱
            SCENE_WUCHANG = 133,           // 武场
            SCENE_WORLDBOSS = 135,           // 世界BOSS
            SCENE_WULINDAHUI = 136,           // 武林大会
            SCENE_FOURVILLAIN = 137,           // 恶人洞
            SCENE_GAIBANG = 139,           // 丐帮
            SCENE_NIANSHOU = 140,           // 年兽
            SCENE_YANMENGUANDEFENCE = 141,           // 守卫雁门关副本
            //copy tlbb scene define for building end
        }

		public enum SCENCE_DEFINE_EX
		{
			SCENE_FEIQIDUSHI_ID 				= 13,					// 废弃都市
			SCENE_JIXIEYANJIUSUO_ID 		= 14,  				// 机械研究所
			SCENE_LEINABAO_ID 				= 15 ,				// 雷纳包  
			SCENE_HUANGHUNYAOSAI_ID 	= 16,					//  黄昏要塞
			SCENE_BINGDONGDIXIA_ID		= 35,					//  冰冻地下
		}

        /// <summary>
        /// 场景默认高度。对应的Index 和 SCENE_DEFINE中value (或SceneName 的Index)对应
        /// </summary>
        public static float[] SceneHeight =
        {
            0f,
            17.03708f,
            20.03166f,
            0f,
            15.12543f,
            21.66693f,
            15.16502f,
            7.216075f,
            22.20361f,
            15.83959f,
            22.38024f,
            0.0154163f,
            15.3999f,
            0f,
            14.995f,
            20.38571f,
            22.38024f,
            22.38024f,
            19.99328f,
            16.94185f,
            18.54701f,
            17.03708f,
            19.02887f,
            18.70577f,
            21.24829f,
            13.99058f,
            15.83897f,
            20.59491f,
            14.309f,
            0.01541439f,
            19.97823f,
            6.109085f,
            15.16502f,
            15.04783f,
            12.6f,
            19.17084f,
			15.04783f,
			20.59491f,
			18.54701f,
			12.0f,
			12.0f,
			12.0f,
        };

        public const string LoginSceneName = "Login";
        public const string LoadingSceneName = "LoadingScene";
		/*// 这个坑极其不科学，最好改成读SceneClass表，编辑器下可写一段特殊的读表代码
        public static string[] SceneName = {
			"Login",
            "LoadingScene",
            "Jtdd",
            "TestScene",
			"PKScene",
            "MuSeYuLin",
            "HunDunZhiDi",
			"HuangHunBianJing",
			"MuSeYuLin",
			"HuangHunBianJing",
			"HuangHunBianJing",
			"HuangHunBianJing",
            "HuangHunYaoSai",
            "HunDunZhiDi",
            "HunDunZhiDi",
            "HunDunZhiDi",
            "YiWangFeiXu",
            "HuangHunBianJing",
            "HuangHunYaoSai",
            "HuangHunYaoSai",
            "HuangHunYaoSai",
            "FeiQiDuShi",
             };*/

        //场景类型
        public enum SCENE_TYPE
        {
            SCENETYPE_CLIENT = -1,    //客户端场景
            SCENETYPE_MAINCITY = 0,   //主城
            SCENETYPE_WILDCITY,       //野外
            SCENETYPE_COPYSCENE,      //活动副本
            SCENETYPE_STORYCOPYSCENE, //剧情副本
            Scene_Type_NUM
        }

        public enum CopyScene_PlayType
        {
            NONE = 0,
            SINGLE,
            MULTIPLE
        }

        public enum DAMAGEBOARD_TYPE
        {
            PLAYER_TYPE_INVALID = -1,
            PLAYER_HP_UP = 0, //我方HP增加
            PLAYER_HP_DOWN, //我方HP减少
            PLAYER_XP_UP, //我方 XP增加
            PLAYER_XP_DOWN,//我方XP 减少
            PLAYER_MP_UP,//我方MP增加
            PLAYER_MP_DOWN,//我方MP减少
            TARGET_HPDOWN_PARTNER,//我方伙伴早曾对方ＨＰ减少
            TARGET_HPDOWN_PLAYER,//我方主角造成对方HP减少
            PLAYER_ATTACK_MISS,//我方攻击时 未命中
            TARGET_ATTACK_MISS,//对方攻击时 未命中
            SKILL_NAME, //技能名
            PLAYER_ATTACK_CRITICAL,//我方攻击时 出暴击伤害
            TARGET_ATTACK_CRITICAL,//对方攻击时 出暴击伤害
            PLAYER_ATTACK_CRITICAL_PARTNER,//我方伙伴攻击时 出暴击伤害
            PLAYER_ATTACK_IGNORE,//我方攻击时 出伤害免疫
            TARGET_ATTACK_IGNORE,//对方攻击时  出伤害免疫
            PLAYER_ATTACK_IGNORE_PARTNER,//我方伙伴攻击时 出伤害免疫
            PLAYER_ATTACK_MISS_PARTNER,//我方伙伴攻击时 出未命中
            SKILL_NAME_NPC,//NPC技能名
        }

        public enum CAMP_DEFINE
        {
            CAMP_INVALID = -1,
            CAMP_PLAYER = 0,
            CAMP_FRIENDLY,
            CAMP_ENEMY_NORMAL,
            CAMP_ENEMY_ATTACK,
        }

        public enum ITEM_CLASS
        {
            CLASS_INVALID = -1,
            CLASS_TEST = 0,
            CLASS_MAX,
        }

        public enum ITEM_SUBCLASS
        {
            SUBCLASS_INVALID = -1,
            SUBCLASS_TEST = 0,
            SUBCLASS_MAX,
        }

        public enum MESSAGEBOX_TYPE
        {
            TYPE_INVALID    = -1,
            TYPE_OK         = 0,
            TYPE_OKCANCEL   = 1,
            TYPE_WAIT       = 2,
			TYPE_CANCEL     = 3,
            TYPE_COST       = 4,
            TYPE_MAX,
        }

        //玩家列表UI界面的分类类型
        public enum RELATION_TAB_TYPE
        {
            RELATION_TAB_INVALID = -1,
            RELATION_TAB_FRIEND,
            RELATION_TAB_MAIL,
            RELATION_TAB_TEAM,
        };

        //过滤字类型
        public enum STRFILTER_TYPE
        {
            STRFILTER_CHAT = 0,         //聊天
            STRFILTER_NAME,             //命名
        }
        //复活类型
        public enum RELIVE_TYPE
        {
            RELIVE_ORIGINAL =1,     //原地复活
            RELIVE_ENTRY,           //入口复活
            RELIVE_CITY,            //主城复活
        }
        
        //拾取物品类型
        public enum AUTOCOMBAT_PICKUP_TYPE
        {
            PICKUP_EQUIP1 = 1,//白色品质
            PICKUP_EQUIP2,//优秀品质
            PICKUP_EQUIP3,//精良品质
            PICKUP_EQUIP4,//史诗品质
            PICKUP_EQUIP5,//创奇品质
            PICKUP_STUFF,//材料
            PICKUP_OTHER,//其他
        }

        public enum DROP_TYPE
        {
            DROP_ITEM = 1,  //物品
            DROP_COIN,      //金币
        }
      

        //玩家轻功轨迹类型
        public enum QINGGONG_TRAIL_TYPE
        {
            PARABOLA,       //抛物线轨迹
            TURN_LEFT,      //左倾线性轨迹
            TURN_RIGHT,     //右倾线性轨迹
        }

        //自动挂机物品初始化
        //         4011	红药	金创药	
        //         4012	红药	造化丹	
        //         4013	红药	凝血丹	
        //         4014	红药	混元丹	
        //         4015	红药	保心丹	
        //         4016	红药	大还丹	
        //         4017	红药	回魂丹	
        //         4018	红药	重生丹	
        //         4019	红药	代赭丹	
        //         4020	红药	朱哈丹	
        //         4021	蓝药	回气散	
        //         4022	蓝药	理气散	
        //         4023	蓝药	凝气散	
        //         4024	蓝药	纳气散	
        //         4025	蓝药	气定散	
        //         4026	蓝药	定神散	
        //         4027	蓝药	清灵散	
        //         4028	蓝药	通灵散	
        //         4029	蓝药	龙葵散	
        //         4030	蓝药	冰蚕散	

        public enum AUTOCOMBAT_DRUG_ID
        {
            AUTO_DRUG_START_HP = 4011,        //血药开始
            AUTO_DRUG_END_HP = 4020,        //血药结束  
            AUTO_DRUG_START_MP = 4021,        //蓝药开始
            AUTO_DRUG_END_MP = 4030,        //蓝药结束
            AUTO_DRUG_START_DYHP = 4001,    //血缸开始
            AUTO_DRUG_END_DYHP = 4005,    //血缸开始
            AUTO_DRUG_START_DYMP = 4006,    //血缸开始
            AUTO_DRUG_END_DYMP = 4010,    //血缸开始
        }

        //帮会职位定义，和服务器的帮会职位枚举对应
        public enum GUILD_JOB
        {
            INVALID = -1,     //非法
            CHIEF,            //会长
            VICE_CHIEF,       //副会长
            ELDER,            //长老
            ELITE,            //精英会员
            MEMBER,           //普通会员
            RESERVE,          //预备会员
            MAX,
        }

        public enum GUILD_ROUTINE
        {
            GUILD_ROUTINE_JOIN = 0,         //批准会员入帮
            GUILD_ROUTINE_DECLARATION = 1,  //修改公会宣言
            GUILD_ROUTINE_CHANGE_NOTICE,    //公告修改
            GUILD_ROUTINE_CHANGE_JOINREQ,   //设置入会要求（是否需要审批）
            GUILD_ROUTINE_KICK,             //踢人
            GUILD_ROUTINE_SHOP_LEVELUP,     //公会商店升级（暂时废弃 公会商店等级随公会等级自动升级）
            GUILD_ROUTINE_OPEN_ACTIVITY,    //开启公会活动
            GUILD_ROUTINE_SET_AUTHORITY,    //设置副会长和长老权限（会长独享）
            GUILD_ROUTINE_APROVE_CHIEFT,    //禅让（会长独享）
            GUILD_ROUTINE_CHANGE_JOB,       //修改职位（会长独享）
            GUILD_ROUTINE_CHANGE_JOBNAME,   //修改公会职务名称（会长独享）
            GUILD_ROUTINE_MAX,
        }

        public enum NEWBUTTON_LEVEL
        {
            PARTNER = 6,
            BELLE = 10,
            AUTOFIGHT = 12,
            ACTIVITY = 13,
            EQUIPSTREN = 15,
            FARM = 20,
            GUILD = 20,
            XIAKE = 60,
        }
        public enum RANKTYPE
        {
            TYPE_INVALID    = 0,
            TYPE_CANGJINGGE =1, //藏经阁副本
            TYPE_PRELIMINARYGUILDWARRANK =2,//帮战海选排行
            TYPE_PRELIMINARYGUILDWARKILLRANK =3,//帮战海选 击杀人数排行
            TYPE_HUASHANZHANJI = 4,//华山-战绩
            TYPE_HUASHANJINYAODAI = 5,//华山-金腰带
            TYPE_USERLEVELRANK = 6, //等级
            TYPE_USERCOMBATRANK = 7, //战斗力
            TYPE_USERHPRANK=8,//血量
            TYPE_GUILDCOMBAT=9,//帮会战斗力
            TYPE_HUASHANPOS=10,//华山-排名
            TYPE_SHAOLINREPUTATION=11, //少林大弟子
            TYPE_TIANSHANREPUTATION = 12,//天山大弟子
            TYPE_DALIREPUTATION = 13,//大理大弟子
            TYPE_XIAOYAOREPUTATION = 14,//逍遥大弟子
            TYPE_USERCOIN = 15,//金币
            TYPE_MASTER = 16,//宗师
            TYPE_USERCOSTYUANBAO = 17,//消费排行榜
			TYPE_ATTACK=18,//攻击力排行榜
            TYPE_CHONGZHI = 19,//充值排行榜
            TYPE_MASTERAVTIVECOMBAT = 20,//师门战力排行榜
            TYPE_SHAOSHISHAN = 21,//少室山排行榜
            TYPE_TOTALONLINETIME = 22,//在线时间排行榜
            TYPE_PLAYER_DECORATION = 23,//个人圣诞节排行
            TYPE_GUILD_DECORATION = 24,//帮会圣诞节排行
            TYPE_USERDEFENSE = 25,//防御力排行榜
			TYPE_GIVEROSE = 27,//送玫瑰
            TYPE_RECEIVEROSE = 28,//收玫瑰
            TYPE_HONGBAO = 29,//红包积分排行榜
            TYPE_GAIBANGREPUTATION = 30,//丐帮大弟子
            TYPE_LOUDSPEAKER = 31,//喇叭榜
            TYPE_USERCHARM = 32,//魅力榜
            TYPE_SPECIALTIMECHONGZHI=33,//特定时间充值帮

        }
        public enum MODELTYPE //骨骼类别
        {
            HUMAN =1,//人形
            HUMAN_FAT =2,//人形(胖子 侏儒)
            ANIMAL =3,//四足动物
            HUMAN_DYQ = 4,//人形(段延庆)
        }
        public enum TLI_COPYSCENEID
        {
            //TLI_NUHAICHUJIAN = 7,     //虎头战船
			TLI_NUHAICHUJIAN = 13,      //虎头战船
            TLI_JUXIANZHUAN = 11,       //聚贤庄
            TLI_CANGJINGGE = 6,         //藏经阁
            TLI_YANZIWU = 14,           //燕子坞
            TLI_YANWANGGUMO = 27,       //燕王古墓
            TLI_ZHENLONGQIJU = 28,      //珍珑棋局
            TLI_SHAOSHISHAN = 31,       //少室山
        };
        //！！！！与服务器 FORCETYPE_T保持一致
        public enum FORCETYPE
        {
            USER_NORMAL =0,//玩家势力
            NPC_FRINEND =1,//友好NPC
            NPC_NEUTRALITY =2,//中立NPC
            NPC_ATTACK =3,//敌对NPC(主动攻击)
            USER_KILL =4,//(废弃)
            FELLOW =5,//伙伴
            PVP1 =6,//PVP 势力1
            PVP2 =7,//PVP 势力2
            HELP_NPC =8,//助战NPC 帮助玩家打怪
            MAX_NUM,
        }

        //程序员请求您评价，您的选择类型
        public enum REVIEW_TYPE
        {
            RT_INVALID = -1,
            DO_NOTHING = 0,             //什么还没做
            WITH_PLEASURE = 1,              //欣然前往
            REFUSE_WITHOUT_RESON,   //残忍拒绝
            INTOLERABILITY,                     //无法忍受
            WAIT_FOR_A_MOMENT,          //稍等提醒
        }

        // 台湾安卓渠道，成就类型
        public enum GOOGLEPLAY_ACHIEVEMENT_TYPE
        {
            LEVELUP_20 = 1, //成就1,初入師門,等級達到20級
            LEVELUP_40 = 2, //成就2,得意門生,等級達到40級
            LEVELUP_50 = 3, //成就3,入室弟子,等級達到50級
            LEVELUP_60 = 4, //成就4,一代掌門,等級達到60級
            LEVELUP_70 = 5, //成就5,武術宗師,等級達到70級
            LEVELUP_80 = 6, //成就6,武林盟主,等級達到80級
            LEVELUP_100 = 7, //成就7,超凡入聖,等級達到100級
            COMBAT_VALUE_5 = 8, //成就8,小小菜鳥,戰力達到5萬
            COMBAT_VALUE_10 = 9, //成就9,勤學苦練,戰力達到10萬
            COMBAT_VALUE_20 = 10, //成就10,嶄露頭角,戰力達到20萬
            COMBAT_VALUE_30 = 11, //成就11,一代大俠,戰力達到30萬
            COMBAT_VALUE_50 = 12, //成就12,叱吒武林,戰力達到50萬
            COMBAT_VALUE_70 = 13, //成就13,鬼神之力,戰力達到70萬
            COMBAT_VALUE_100 = 14, //成就14,蓋世無雙,戰力達到100萬
            GET_ORANGE_FELLOW = 15, //成就15,黃金伙伴,獲得1個橙色伙伴
            FELLOW_COMBAT_VALUE_2 = 16, //成就16,鼓舞士氣,伙伴戰力達到2萬
            FELLOW_COMBAT_VALUE_5 = 17, //成就17,排憂解難,伙伴戰力達到5萬
            FELLOW_COMBAT_VALUE_10 = 18, //成就18,獨當一面,伙伴戰力達到10萬
            FELLOW_COMBAT_VALUE_15 = 19, //成就19,勢不可擋,伙伴戰力達到15萬
            FELLOW_COMBAT_VALUE_20 = 20, //成就20,最佳搭檔,伙伴戰力達到20萬
            GET_ORANGE_SWORDMAN = 21, //成就21,初識大俠,獲得1個橙色俠客
            SWORDMAN_COMBAT_VALUE_1 = 22, //成就22,兩肋插刀,俠客提升戰力達到1萬
            SWORDMAN_COMBAT_VALUE_5 = 23, //成就23,肝膽相照,俠客提升戰力達到5萬
            BELLE_GET_8 = 24, //成就24,美人如玉,邂逅8個美人
            BELLE_GET_15 = 25, //成就25,后宮三千,邂逅15個美人
        }

        // 台湾安卓渠道，排行榜类型
        public enum GOOGLEPLAY_RANK_TYPE
        {
            COMBAT_VALUE = 1, //战力排行榜
            LEVEL = 2, //等级排行榜
            ATTACK = 3, //攻击排行榜
            HP = 4, //血量排行榜
            GOLD_COINS = 5, //金币排行榜
        }

		public enum InternationType
        {
            DEFAULT,   // 默认资源
            TW,     // 台湾
            HK,     // 香港
            KO,     // 韩国
        }

        public enum ChangeModeState
        {
                NORMAL = 0,    //正常状态
                CHANGE_1 = 1,  //变身1
                CHANGE_2 = 2,  //变身2
                CHANGE_3 = 3,  //变身3
                COUNT = 4,     //变身数量
        }

        /// <summary>
        /// 场景layer枚举
        /// </summary>
        public enum ESceneLayer
        {
            Default = 0,
            TransparentFX = 1,
            IgnoreRaycast =2,
            Water = 4,
            UI = 8,
            BackLayer = 9,
            LogicObj = 10,
            TipTop = 11,
            MoveLayer = 12,
        }

        /// <summary>
        /// 硬件等级
        /// </summary>
        public enum HardwardLevel
        {
            /// <summary>
            /// 低
            /// </summary>
            LEVEL_LOW = 0,
            /// <summary>
            /// 中
            /// </summary>
            LEVEL_MIDDLE = 1,
            /// <summary>
            /// 高
            /// </summary>
            LEVEL_HIGH = 2,
        }

        public const int WORLDBOSS_SCENE_ID = 34;     //世界boss场景id
        public const float WORLDBOSS_X = 78.6f;       //x坐标
        public const float WORLDBOSS_Z = 70.0f;       //y坐标

        public const int NEWSERVER_ACTIVITY_EXTRA_AWARD = 56525; //登录有礼
    }
}
