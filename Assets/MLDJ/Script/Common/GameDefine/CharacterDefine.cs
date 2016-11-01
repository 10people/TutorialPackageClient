using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace Games.GlobeDefine
{
    public class CharacterDefine
    {
        public enum CharacterAnimId
        {
            Stand =0,
            Walk =1,
            Attack =9,
            Hit =10,
            Knockback_01 =11,
            Knockback_02 =12,
            Die =13,
            PlayerHit = 14,
            RIDE_STAND = 15,
            RIDE_RUN = 16,
            Dead = 53,
            Jump01 = 60,
            Jump01_Loop = 61,
            Jump02 = 62,
            Jump02_Loop = 63,
            Jump03 = 64,
            Jump03_Loop = 65,
            JumpEnd_Run = 66,
            JumpEnd_Stand = 67,
            Fastrun_Left = 68,
            Fastrun_Right = 69,
            AttackStand = 102,      //战斗型的NPC专属站立动作
            LIGHTSKILLEND = 168,      //轻功技能结束动作
            DizzyId = 252,
			JiaDie = 422,
        }

        //角色之间的关系
        public enum REPUTATION_TYPE
        {
            REPUTATION_INVALID = -1,
            REPUTATION_FRIEND,
            REPUTATION_NEUTRAL,
            REPUTATION_HOSTILE,
        }

        //角色AI状态类型
        public enum AI_STATE_TYPE
        {
            AI_STATE_NORMAL,            //非战斗型AI
            AI_STATE_COMBAT,            //战斗型AI
            AI_STATE_WALK,            //战斗型AI
            AI_STATE_DEAD,              //死亡型AI
        }

        //角色具体AI类型
        public enum AI_TYPE
        {
            AI_TYPE_INVALID  = -1,      //非法类型
            AI_TYPE_PATROL,             //普通巡逻AI
            AI_TYPE_COMBAT,             //普通战斗AI
        }

        //主角点选目标状态
        public enum SELECT_TARGET_TYPE
        {
            SELECT_TARGET_NONE,         //未选中
            SELECT_TARGET_CHAT,         //选中可对话目标
            SELECT_TARGET_ATK,          //选中可攻击状态
        }

        //玩家职业列表
        public enum PROFESSION
        {
            SHAOLIN, //少林  - 狂战士
            TIANSHAN,//天山  - 双剑士
            DALI,//大理      - 弓箭手
            XIAOYAO,//逍遥   - 魔导师
            GAIBANG,//丐帮
            MAX,
        }

        public static int[]  PROFESSION_DICNUM = 
        {
            1178, // (SHAOLIN)
            1180, // (TIANSHAN)
            1179, // (DALI)
            1181, // (XIAOYAO)
            5279, // (GAIBANG)
        };
        public static int[] COPYSCENE_DIFFICULTY= 
        {
            1311, // (简单)
            1312, // (困难)
            1313, // (挑战)
        };
        //PK模式
        public enum PKMODLE
        {
            NORMAL =0,
            KILL,
            MAX,
        }

        //选择目标的类型
        public enum TARGETTYPE
        {
            TYPE_INVAILD =0,
            SELF =1, //自身
            TEAMEM =2,//队员
            ENEMY =4,//敌人
            FRIEND =8,//友方
        }

        //关系人状态
        public enum RELATION_TYPE
        {
            OFFLINE,        //离线
            ONLINE,         //在线
        }

        public enum Attr
        {
            MAXHP,
            MAXMP,
            MAXXP,
            PYSATTACK,
            MAGATTACK,
            PYSDEF,
            MAGDEF,
            HIT,
            DODGE,
            CRITICAL,
            DECRITICAL,
            STRIKE,
            DUCTICAL,
            CRITIADD,
            CRITIMIS,
            MOVESPEED,
            ATTACKSPEED,
            COMBATATTR_MAXNUM,
        }

        public enum MixAttr
        {
            MIXTYPE_BEGIN = 999,
            MIXTYPE_ALLATTACK = 1000,
            MIXTYPE_ALLDEF = 1001,
        }

        public static Dictionary<int, int> AttrTable = new Dictionary<int, int>() 
        { 
            { (int)Attr.MAXHP, 1573 },
            { (int)Attr.MAXMP, 1574 },
            { (int)Attr.MAXXP, 1575 },
            { (int)Attr.PYSATTACK, 1576 },
            { (int)Attr.MAGATTACK, 1577 },
            { (int)Attr.PYSDEF, 1578 },
            { (int)Attr.MAGDEF, 1579 },
            { (int)Attr.HIT, 1580 },
            { (int)Attr.DODGE, 1581 },
            { (int)Attr.CRITICAL, 1582 },
            { (int)Attr.DECRITICAL, 1583 },
            { (int)Attr.STRIKE, 1584 },
            { (int)Attr.DUCTICAL, 1585 },
            { (int)Attr.CRITIADD, 1586 },
            { (int)Attr.CRITIMIS, 1587 },
            { (int)Attr.MOVESPEED, 1588 },
            { (int)Attr.ATTACKSPEED, 1589 },
            { (int)MixAttr.MIXTYPE_ALLATTACK, 1590 },
            { (int)MixAttr.MIXTYPE_ALLDEF, 1591 },
        };

        /// <summary>
        /// 坐骑的动作状态
        /// </summary>
        public enum MountAction
        {
            STAND = 0,
            RUN = 1,
        }

        public static Color NPC_COLOR_DIE = GCGame.Utils.GetColorByString("868686");
        public static Color NPC_COLOR_FRIEND = GCGame.Utils.GetColorByString("70E718");
        public static Color NPC_COLOR_NEUTRAL = GCGame.Utils.GetColorByString("E7D718");
        public static Color NPC_COLOR_ENEMY = GCGame.Utils.GetColorByString("E71818");
    }
}
