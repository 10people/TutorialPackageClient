//********************************************************************
// 文件名: Fellow.cs
// 描述: 伙伴
// 作者: TangYi
// 创建时间: 2014-2-18
//
// 修改历史:
//********************************************************************
using UnityEngine;
using System.Collections.Generic;
using System;
using GCGame.Table;
using Games.GlobeDefine;

namespace Games.Fellow
{
    public enum FELLOWELEMENT
    {
        ELEMENT_INVALID = 0,
        ELEMENT_WATER   = 1,
        ELEMENT_WIND    = 2,
        ELEMENT_GROUND  = 3,
        ELEMENT_FIRE    = 4,  
    }

    public enum FELLOWCLASS
    {
        ANIMAL = 1,     //动物型
        HUNMAN = 2,     //人型
    }

    public enum FELLOWATTACK
    {
        PHYSCIS = 1,    //物理攻击
        MAGIC = 2,      //魔法攻击
    }

    public enum FELLOWQUALITY
    {
        WHITE = 0,      //白色品质
        GREEN = 1,      //绿色品质
        BLUE = 2,       //蓝色品质
        PURPLE = 3,     //紫色品质
        ORANGE = 4,     //橙色品质
        RED = 5,        //红色品质
        GOLD = 6,       //金色品质
        MAX,
    }

    public enum FELLOWSTAR
    {
        WHITE = 0,      //白色品质
        GREEN = 1,      //绿色品质
        BLUE = 2,       //蓝色品质
        PURPLE = 3,     //紫色品质
        ORANGE = 4,     //橙色品质
    }

    public enum FELLOWTALLENTSKILL
    {
        WHITE = 0,      //白色品质
        GREEN = 1,      //绿色品质
        BLUE = 2,       //蓝色品质
        PURPLE = 3,     //紫色品质
        ORANGE = 4,     //橙色品质
    }

    public enum FELLOWELEMENTSKILL
    {
        WHITE_0 = 0,
        GREEN_0 = 1,
        GREEN_1,
        GREEN_2,
        BLUE_0,
        BLUE_1,
        BLUE_2,
        BLUE_3,
        PURPLE_0,
        PURPLE_1,
        PURPLE_2,
        PURPLE_3,
        PURPLE_4,
        ORANGE_0,
    }

    public enum FELLOWTYPE
    {
        BABY = 0,
        ADULT = 1,
        ALIEN = 2,
    }

    public enum FELLOWATTR
    {
        FELLOWATTR_ATTACK = 0,
        FELLOWATTR_HIT,
        FELLOWATTR_CRITICAL,
        FELLOWATTR_GUARD,
        FELLOWATTR_BLESS,
        FELLOWATTR_COUNT,
    }

    public class Fellow
    {
        /// <summary>
        /// 构造函数
        /// </summary>
        /// <returns></returns>
        public Fellow()
        {
            CleanUp();
        }

        /// <summary>
        /// 清空
        /// </summary>
        public void CleanUp()
        {
            m_nGuid = GlobeVar.INVALID_GUID;
            m_nDataId = GlobeVar.INVALID_ID;
            m_szName = "";
            m_nQuality = GlobeVar.INVALID_ID;
            m_nExp = GlobeVar.INVALID_ID;
            m_nLevel = GlobeVar.INVALID_ID;
            m_nStarExp = GlobeVar.INVALID_ID;
            m_nStarLevel = GlobeVar.INVALID_ID;
            //m_fGrowUp = GlobeVar.INVALID_ID;
            m_nLucky = GlobeVar.INVALID_ID;
            m_nProcreateCount = GlobeVar.INVALID_ID;
            m_nElementAttr = (int)FELLOWELEMENT.ELEMENT_INVALID;
            m_bLocked = false;
            m_BaseAttack = GlobeVar.INVALID_ID;
            m_BaseHit = GlobeVar.INVALID_ID;
            m_BaseCritical = GlobeVar.INVALID_ID;
            m_BaseGuard = GlobeVar.INVALID_ID;
            m_BaseBless= GlobeVar.INVALID_ID;
            if (m_TallentSkill != null)
            {
                m_TallentSkill.Clear();
            }
            for (int index = 0; index < FELLOW_ELEMENTSKILL_COUNT; index++ )
            {
                m_ElementSkill[index] = -1;
            }
            m_bCalled = false;
            m_callLevel = GlobeVar.INVALID_ID;
        }

        /// <summary>
        /// IsValid
        /// </summary>
        /// <returns></returns>
        public bool IsValid()
        {
            if (m_nDataId >= 0)
            {
                Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
                if (line != null)
                {
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// 伙伴Guid
        /// </summary>
        /// <returns></returns>
        private UInt64 m_nGuid;
        public System.UInt64 Guid
        {
            get { return m_nGuid; }
            set { m_nGuid = value; }
        }

        /// <summary>
        /// 伙伴ID 对应FellowAttr.txt里面的ID
        /// </summary>
        /// <returns></returns>
        private int m_nDataId;
        public int DataId
        {
            get { return m_nDataId; }
            set { m_nDataId = value; }
        }

        /// <summary>
        /// 名称
        /// </summary>
        /// <returns></returns>
        private string m_szName;
        public string Name
        {
            get { return m_szName; }
            set { m_szName = value; }
        }

        /// <summary>
        /// 出战等级
        /// </summary>
        private int m_callLevel;
        public int CallLevel
        {
            get { return m_callLevel; }
            set { m_callLevel = value; }
        }
        /// <summary>
        /// 品质
        /// </summary>
        private int m_nQuality;
        public int Quality
        {
            get { return m_nQuality; }
            set { m_nQuality = value; }
        }

        /// <summary>
        /// 经验值
        /// </summary>
        /// <returns></returns>
        private int m_nExp;
        public int Exp
        {
            get { return m_nExp; }
            set { m_nExp = value; }
        }

        /// <summary>
        /// 级别
        /// </summary>
        /// <returns></returns>
        private int m_nLevel;
        public int Level
        {
            get { return m_nLevel; }
            set { m_nLevel = value; }
        }

        public const int FELLOW_STARLEVEL_MAX = 60;
        private int m_nStarExp;
        public int StarExp
        {
            get { return m_nStarExp; }
            set { m_nStarExp = value; }
        }

        /// <summary>
        /// 星级
        /// </summary>
        /// <returns></returns>
        private int m_nStarLevel;
        public int StarLevel
        {
            get { return m_nStarLevel; }
            set { m_nStarLevel = value; }
        }

        //private float m_fGrowUp;
        //public float GrowUp
        //{
        //    get { return m_fGrowUp; }
        //    set { m_fGrowUp = value; }
        //}

        private int m_nLucky;
        public int Lucky
        {
            get { return m_nLucky; }
            set { m_nLucky = value; }
        }

        private int m_nProcreateCount;
        public int ProcreateCount
        {
            get { return m_nProcreateCount; }
            set { m_nProcreateCount = value; }
        }

        private int m_nElementAttr;
        public int ElementAttr
        {
            get { return m_nElementAttr; }
            set { m_nElementAttr = value; }
        }

        /// <summary>
        /// 加锁
        /// </summary>
        private bool m_bLocked;
        public bool Locked
        {
            get { return m_bLocked; }
            set { m_bLocked = value; }
        }

        private int m_BaseAttack;
        public int BaseAttack
        {
            get { return m_BaseAttack; }
            set { m_BaseAttack = value; }
        }

        private int m_BaseHit;
        public int BaseHit
        {
            get { return m_BaseHit; }
            set { m_BaseHit = value; }
        }

        private int m_BaseCritical;
        public int BaseCritical
        {
            get { return m_BaseCritical; }
            set { m_BaseCritical = value; }
        }

        private int m_BaseGuard;
        public int BaseGuard
        {
            get { return m_BaseGuard; }
            set { m_BaseGuard = value; }
        }

        private int m_BaseBless;
        public int BaseBless
        {
            get { return m_BaseBless; }
            set { m_BaseBless = value; }
        }

        private bool m_bCalled;
        public bool Called
        {
            get { return m_bCalled; }
            set { m_bCalled = value; }
        }

        /// <summary>
        /// 攻击属性值
        /// </summary>
        private int m_combatAttr_Attack;
        public int CombatAttr_Attack
        {
            get { return m_combatAttr_Attack; }
            set { m_combatAttr_Attack = value; }
        }

        /// <summary>
        /// 加持属性值
        /// </summary>
        private int m_combatAttr_Bless;
        public int CombatAttr_Bless
        {
            get { return m_combatAttr_Bless; }
            set { m_combatAttr_Bless = value; }
        }

        /// <summary>
        /// 暴击属性值
        /// </summary>
        private int m_combatAttr_Critical;
        public int CombatAttr_Critical
        {
            get { return m_combatAttr_Critical; }
            set { m_combatAttr_Critical = value; }
        }

        /// <summary>
        /// 守护属性值
        /// </summary>
        private int m_combatAttr_Guard;
        public int CombatAttr_Guard
        {
            get { return m_combatAttr_Guard; }
            set { m_combatAttr_Guard = value; }
        }

        /// <summary>
        /// 命中属性值
        /// </summary>
        private int m_combatAttr_Hit;
        public int CombatAttr_Hit
        {
            get { return m_combatAttr_Hit; }
            set { m_combatAttr_Hit = value; }
        }

        private int m_combatValue;
        public int CombatValue
        {
            get { return m_combatValue; }
            set { m_combatValue = value; }
        }
        public const int FELLOW_TALLENTSKILL_COUNT = 5;
        public const int FELLOW_TALLENTSKILL_OPENCOUNT = 3;
        private Dictionary<int, int> m_TallentSkill = new Dictionary<int, int>();
        public Dictionary<int, int> TallentSkill
        {
            get { return m_TallentSkill; }
            set { m_TallentSkill = value; }
        }
        public const int FELLOW_ELEMENTSKILL_COUNT = 6;
        public const int FELLOW_ELEMENTSKILL_OPENCOUNT = 3;
        public static int[] FELLOW_ELEMENTSKILL_LEVELNEED = { 1, 10, 20};
        public const int FELLOW_ELEMENTSKILL_LOCKCOST = 20;
        private int[] m_ElementSkill = new int[FELLOW_ELEMENTSKILL_COUNT];

        public int GetElementSkillId(int index)
        {
            if (index >= 0 && index < FELLOW_ELEMENTSKILL_COUNT && index < FELLOW_ELEMENTSKILL_OPENCOUNT)
            {
                return m_ElementSkill[index];
            }
            return GlobeVar.INVALID_ID;
        }
        public void SetElementSkillId(int skillId, int index)
        {
            if (index >= 0 && index < FELLOW_ELEMENTSKILL_COUNT && index < FELLOW_ELEMENTSKILL_OPENCOUNT)
            {
                m_ElementSkill[index] = skillId;
            }
        }
        public bool IsHaveSkillId(int skillId)
        {
            for (int index = 0; index < FELLOW_ELEMENTSKILL_COUNT && index < FELLOW_ELEMENTSKILL_OPENCOUNT; index++)
            {
                Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(m_ElementSkill[index], 0);
                if (tabSkill == null)
                {
                    continue;
                }

                if (m_ElementSkill[index] == skillId)
                {
                    return true;
                }

                if (tabSkill.BaseSkill == skillId)
                {
                    return true;
                }
            }
            return false;
        }

        /// <summary>
        /// 头像
        /// </summary>
        /// <returns></returns>
        public string GetIcon()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line != null)
            {
                return line.Icon;
            }
            return null;
        }

        public int GetFellowType()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line != null)
            {
                return line.FellowType;
            }
            return GlobeVar.INVALID_ID;
        }

        public int GetCallLevel()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line != null)
            {
                return line.CallLevel;
            }
            return GlobeVar.INVALID_ID;
        }

        public int GetAttach_Attack(int starLv)
        {
            Tab_CabalFellowAttr lineAttr = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            Tab_CabalFellowStar lineStar = TableManager.GetCabalFellowStarByID(starLv, 0);
            if ( lineAttr != null && lineStar != null)
            {
                int nAddValue = 0;
                if (starLv > 0)
                {
                    nAddValue = lineStar.GetAttachAttrbyIndex((int)FELLOWATTR.FELLOWATTR_ATTACK);
                }
                float result = (float)lineAttr.AttachAttackRatio * 0.01f * (nAddValue + lineAttr.AttachAttackOffset);
                return (int)result;
            }
            return 0;
        }

        public int GetAttach_Hit(int starLv)
        {
            Tab_CabalFellowAttr lineAttr = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            Tab_CabalFellowStar lineStar = TableManager.GetCabalFellowStarByID(starLv, 0);
            if (lineAttr != null && lineStar != null)
            {
                int nAddValue = 0;
                if (starLv > 0)
                {
                    nAddValue = lineStar.GetAttachAttrbyIndex((int)FELLOWATTR.FELLOWATTR_HIT);
                }
                float result = (float)lineAttr.AttachHitRatio * 0.01f * (nAddValue + lineAttr.AttachHitOffset);
                return (int)result;
            }
            return 0;
        }

        public int GetAttach_Critical(int starLv)
        {
            Tab_CabalFellowAttr lineAttr = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            Tab_CabalFellowStar lineStar = TableManager.GetCabalFellowStarByID(starLv, 0);
            if (lineAttr != null && lineStar != null)
            {
                int nAddValue = 0;
                if (starLv > 0)
                {
                    nAddValue = lineStar.GetAttachAttrbyIndex((int)FELLOWATTR.FELLOWATTR_CRITICAL);
                }
                float result = (float)lineAttr.AttachCriticalRatio * 0.01f * (nAddValue + lineAttr.AttachCriticalOffset);
                return (int)result;
            }
            return 0;
        }

        public int GetAttach_Guard(int starLv)
        {
            Tab_CabalFellowAttr lineAttr = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            Tab_CabalFellowStar lineStar = TableManager.GetCabalFellowStarByID(starLv, 0);
            if (lineAttr != null && lineStar != null)
            {
                int nAddValue = 0;
                if (starLv > 0)
                {
                    nAddValue = lineStar.GetAttachAttrbyIndex((int)FELLOWATTR.FELLOWATTR_GUARD);
                }
                float result = (float)lineAttr.AttachGuardRatio * 0.01f * (nAddValue + lineAttr.AttachGuardOffset);
                return (int)result;
            }
            return 0;
        }

        public int GetAttach_Bless(int starLv)
        {
            Tab_CabalFellowAttr lineAttr = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            Tab_CabalFellowStar lineStar = TableManager.GetCabalFellowStarByID(starLv, 0);
            if (lineAttr != null && lineStar != null)
            {
                int nAddValue = 0;
                if (starLv > 0)
                {
                    nAddValue = lineStar.GetAttachAttrbyIndex((int)FELLOWATTR.FELLOWATTR_BLESS);
                }
                float result = (float)lineAttr.AttachBlessRatio * 0.01f * (nAddValue + lineAttr.AttachBlessOffset);
                return (int)result;
            }
            return 0;
        }
        public int GetAttackValue()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseAttack + (m_nLevel - 1) * line.LevelAddAttack + GetAttach_Attack(m_nStarLevel);
        }

        public int GetAttackValueByStar(int starLv)
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseAttack + (m_nLevel - 1) * line.LevelAddAttack + GetAttach_Attack(starLv);
        }

        public int GetHitValue()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseHit + (m_nLevel - 1) * line.LevelAddHit + GetAttach_Hit(m_nStarLevel);
        }

        public int GetHitValueByStar(int starLv)
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseHit + (m_nLevel - 1) * line.LevelAddHit + GetAttach_Hit(starLv);
        }

        public int GetCriticalValue()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseCritical + (m_nLevel - 1) * line.LevelAddCritical + GetAttach_Critical(m_nStarLevel);
        }

        public int GetCriticalValueByStar(int starLv)
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseCritical + (m_nLevel - 1) * line.LevelAddCritical + GetAttach_Critical(starLv);
        }

        public int GetGuardValue()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseGuard + (m_nLevel - 1) * line.LevelAddGuard + GetAttach_Guard(m_nStarLevel);
        }

        public int GetGuardValueByStar(int starLv)
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseGuard + (m_nLevel - 1) * line.LevelAddGuard + GetAttach_Guard(starLv);
        }

        public int GetBlessValue()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseBless + (m_nLevel - 1) * line.LevelAddBless + GetAttach_Bless(m_nStarLevel);
        }

        public int GetBlessValueByStar(int starLv)
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return m_BaseBless + (m_nLevel - 1) * line.LevelAddBless + GetAttach_Bless(starLv);
        }

        public int GetEvolveLevel()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line == null)
            {
                return GlobeVar.INVALID_ID;
            }

            return line.EvolveLevel;
        }

        /// <summary>
        /// 伙伴分类ID 1动物 2人形
        /// </summary>
        /// <returns></returns>
        public int GetClassId()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line != null)
            {
                return line.ClassId;
            }
            return 0;
        }

        /// <summary>
        /// 获取战斗力
        /// </summary>
        /// <returns></returns>
        public int GetCombatValue()
        {
            double fCombatValue = 0.0f;
            int k = 21200;

            fCombatValue += (double)GetAttackValue() * 2;
            fCombatValue += (double)GetHitValue() * 2.5;
            fCombatValue += (double)GetCriticalValue() *  2.4;
            fCombatValue += (double)GetGuardValue() * 2.288;
            fCombatValue += (double)GetBlessValue() * 2.288;
            fCombatValue -= (double)k;

            if (fCombatValue < 0.0f)
            {
                return 0;
            }

            return (int)fCombatValue;
        }

        /// <summary>
        /// 伙伴普攻ID
        /// </summary>
        /// <returns></returns>
        public int GetFirstSkillId()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line != null)
            {
                return line.FirstSkillId;
            }
            return -1;
        }

        public int GetBaseStarExp()
        {
            Tab_CabalFellowAttr line = TableManager.GetCabalFellowAttrByID(m_nDataId, 0);
            if (line != null)
            {
                switch ((FELLOWQUALITY)m_nQuality)
                {
                    case FELLOWQUALITY.WHITE:
                        return line.StarExpWhite;
                    case FELLOWQUALITY.GREEN:
                        return line.StarExpGreen;
                    case FELLOWQUALITY.BLUE:
                        return line.StarExpBlue;
                    case FELLOWQUALITY.PURPLE:
                        return line.StarExpPurple;
                    case FELLOWQUALITY.ORANGE:
                        return line.StarExpOrange;
                    default:
                        return line.StarExpWhite;
                }
            }
            return 0;
        }

        public int GetFullStarExp()
        {
            int exp = 0;

            exp += GetBaseStarExp();
            exp += m_nStarExp;

            if (m_nStarLevel > 0)
            {
                for (int i = 0; i < m_nStarLevel; i++)
                {
                    Tab_CabalFellowStar tabStar = TableManager.GetCabalFellowStarByID(i, 0);
                    if (tabStar == null)
                    {
                        break;
                    }

                    exp += tabStar.ConsumeNum;
                }
            }

            return exp;
        }

        public int GetCurStarExpMax()
        {
            if (m_nStarLevel >= FELLOW_STARLEVEL_MAX)
            {
                return GlobeVar.INVALID_ID;
            }

            Tab_CabalFellowStar line = TableManager.GetCabalFellowStarByID(m_nStarLevel, 0);
            if (line != null)
            {
                return line.ConsumeNum;
            }
            return GlobeVar.INVALID_ID;
        }

        public bool IsBabyFellow()
        {
            return GetFellowType() == (int)FELLOWTYPE.BABY;
        }

        public int GetFellowLevelUpNeedExp()
        {
            Tab_LevelUp line = TableManager.GetLevelUpByID(m_nLevel, 0);
            if (line != null)
            {
                return line.FellowExpNeed;
            }
            return GlobeVar.INVALID_ID;
        }
    }

    public class FriendBreedingFellow
    {
        public FriendBreedingFellow()
        {
            CleanUp();
        }

        public void CleanUp()
        {
            m_DataId = GlobeVar.INVALID_ID;
            m_Name = "";
            m_Quality = 0;
            m_Lucky = 0;
            m_Level = 0;
            m_TalentSkill = GlobeVar.INVALID_ID;
        }

        public void InitInfo(GC_FELLOW_FRIEND_BREEDING pak)
        {
            m_DataId = pak.Dataid;

            if (pak.HasFellowName)
            {
                m_Name = pak.FellowName;
            }

            if (pak.HasQuality)
            {
                m_Quality = pak.Quality;
            }

            if (pak.HasLucky)
            {
                m_Lucky = pak.Lucky;
            }
            
            if (pak.HasLevel)
            {
                m_Level = pak.Level;
            }
            
            if (pak.HasTalentSkill)
            {
                m_TalentSkill = pak.TalentSkill;
            }            
        }

        public bool IsValid()
        {
            return m_DataId != GlobeVar.INVALID_ID;
        }

        private int m_DataId;
        public int DataId
        {
            get { return m_DataId; }
            set { m_DataId = value; }
        }
        private string m_Name;
        public string Name
        {
            get { return m_Name; }
            set { m_Name = value; }
        }
        private int m_Quality;
        public int Quality
        {
            get { return m_Quality; }
            set { m_Quality = value; }
        }
        private int m_Lucky;
        public int Lucky
        {
            get { return m_Lucky; }
            set { m_Lucky = value; }
        }
        private int m_Level;
        public int Level
        {
            get { return m_Level; }
            set { m_Level = value; }
        }
        private int m_TalentSkill;
        public int TalentSkill
        {
            get { return m_TalentSkill; }
            set { m_TalentSkill = value; }
        }
    }
}
