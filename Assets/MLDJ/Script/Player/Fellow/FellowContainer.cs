//********************************************************************
// 文件名: FellowContainer.cs
// 描述: 伙伴容器
// 作者: TangYi
// 创建时间: 2014-2-18
//
// 修改历史:
//********************************************************************

using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using GCGame.Table;
using Games.GlobeDefine;

namespace Games.Fellow
{
    public class FellowContainer
    {
        /// <summary>
        /// 伙伴容器默认容量
        /// </summary>
        private const int SIZE_FELLOWCONTAINER = 50;
        
        private List<Fellow> m_Fellows = new List<Fellow>();
        public List<Fellow> Fellows
        {
            get { return m_Fellows; }
        }
        private int m_ContainerSize = 0;

        /// <summary>
        /// 构造函数
        /// </summary>
        public FellowContainer()
        {
            m_ContainerSize = SIZE_FELLOWCONTAINER;
            for (int i = 0; i < m_ContainerSize; ++i)
            {
                m_Fellows.Add(new Fellow());
            }
        }

        /// <summary>
        /// 清空
        /// </summary>
        public void CleanUp()
        {
            for (int i = 0; i < m_Fellows.Count; ++i)
            {
                m_Fellows[i].CleanUp();
            }
        }

        /// <summary>
        /// 容器大小
        /// </summary>
        public int ContainerSize
        {
            get { return m_ContainerSize; }
        }
        public void AddContainerSize(int nAdd)
        {
            m_ContainerSize += nAdd;
            for (int i = 0; i < nAdd; ++i)
            {
                m_Fellows.Add(new Fellow());
            }
        }

        /// <summary>
        /// 根据索引取得Fellow
        /// </summary>
        /// <param name="Slot"></param>
        /// <returns></returns>
        public Fellow GetFellowByIndex(int slot)
        {
            if (slot >= 0 && slot < m_Fellows.Count)
            {
                return m_Fellows[slot];
            }
            return null;
        }

        /// <summary>
        /// 根据Guid取得Fellow
        /// </summary>
        /// <param name="guid"></param>
        /// <returns></returns>
        public Fellow GetFellowByGuid(UInt64 guid)
        {
            for (int i = 0; i < m_Fellows.Count; ++i)
            {
                if (m_Fellows[i].Guid == guid)
                {
                    return m_Fellows[i];
                }
            }
            return null;
        }

        /// <summary>
        /// 更新伙伴
        /// </summary>
        /// <param name="slot"></param>
        /// <param name="fellow"></param>
        /// <returns></returns>
        public bool UpdateFellow(int slot, Fellow fellow)
        {
            bool bRet = false;
            if (slot >= 0 && slot < m_Fellows.Count)
            {
                m_Fellows[slot] = fellow;
                bRet = true;
            }
            return bRet;
        }

        /// <summary>
        /// 取得伙伴数量
        /// </summary>
        /// <returns></returns>
        public int GetFellowCount()
        {
            int count = 0;
            for (int i = 0; i < m_Fellows.Count; ++i)
            {
                Fellow fellow = m_Fellows[i];
                if (fellow.IsValid())
                {
                    ++count;
                }
            }
            return count;
        }

        /// <summary>
        /// 空槽位数量
        /// </summary>
        /// <returns></returns>
        public int GetEmptySlotCount()
        {
            return ContainerSize - GetFellowCount();
        }

        public string GetCapacityStr()
        {
            return GetFellowCount() + "/" + ContainerSize;
        }

        public bool IsHaveBabyFellow()
        {
            for (int i = 0; i < m_Fellows.Count; ++i)
            {
                Fellow fellow = m_Fellows[i];
                if (fellow.IsValid() && fellow.IsBabyFellow())
                {
                    return true;
                }
            }
            return false;
        }
        public Dictionary<int, List<int>> GetPartnerCanLearnSkill()
        {
            Dictionary<int, List<int>> fellowlearnskill = new Dictionary<int, List<int>>();
            for (int i = 0; i < ContainerSize; i++)
            {
                Fellow fellow = GetFellowByIndex(i);
                if (fellow != null && fellow.IsValid() && fellow.Called && !fellowlearnskill.ContainsKey(fellow.DataId))
                {
                    for (int j = 0; j < Fellow.FELLOW_ELEMENTSKILL_COUNT && j < Fellow.FELLOW_ELEMENTSKILL_OPENCOUNT; j++)
                    {
                        if (fellow.GetElementSkillId(j) == GlobeVar.INVALID_ID && j > -1 &&
                            j < Fellow.FELLOW_ELEMENTSKILL_LEVELNEED.Length && fellow.Level >= Fellow.FELLOW_ELEMENTSKILL_LEVELNEED[j])
                        {
                            List<Tab_CabalFellowElementSkillBook> books = GameManager.gameManager.PlayerDataPool.BackPack.GetSkillLearnBooksByElementType(fellow.ElementAttr);
                            if (books != null && books.Count > j && GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(books[j].Id) > 0)
                            {
                                List<int> skills;
                                if (!fellowlearnskill.TryGetValue(fellow.DataId, out skills))
                                {
                                    skills = new List<int>();
                                }
                                skills.Add(j);
                            }
                        }
                    }
                }
            }
            return fellowlearnskill;
        }
        public Dictionary<int, List<int>> GetPartnerCanUpdateSkill()
        {
            Dictionary<int, List<int>> fellowupdateskill = new Dictionary<int, List<int>>();
            for (int i = 0; i < ContainerSize; i++)
            {
                Fellow fellow = GetFellowByIndex(i);
                if (fellow != null && fellow.IsValid()&&!fellowupdateskill.ContainsKey(fellow.DataId))
                {
                    for (int j = 0; j < Fellow.FELLOW_ELEMENTSKILL_COUNT; j++)
                    {
                        int fellowElementSkillId = fellow.GetElementSkillId(j);
                        if (fellowElementSkillId != GlobeVar.INVALID_ID)
                        {
                            Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(fellowElementSkillId, 0);
                            if (tabSkill != null)
                            {
                                Tab_CabalFellowElementSkill tabNextSkill = TableManager.GetCabalFellowElementSkillByID(tabSkill.NextSkillId, 0);
                                {
                                    if (tabNextSkill != null)
                                    {
                                        int packHaveBookNum = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(tabNextSkill.NeedBookId);
                                        int nextSkillNeedBookNum = tabNextSkill.NeedBookCount;
                                        if (packHaveBookNum >= nextSkillNeedBookNum)
                                        {
                                            List<int> skilllist;
                                            if (!fellowupdateskill.TryGetValue(fellow.DataId, out skilllist))
                                            {
                                                skilllist = new List<int>();
                                            }
                                            skilllist.Add(fellowElementSkillId);
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
            return fellowupdateskill;
        }
    }

    public class FellowTool
    {
        public static List<Fellow> FellowSort(FellowContainer container)
        {
            List<Fellow> resultList = new List<Fellow>();
            for (int i = 0; i < container.ContainerSize; i++)
            {
                if (container.GetFellowByIndex(i) != null && container.GetFellowByIndex(i).IsValid())
                {
                    resultList.Add(container.GetFellowByIndex(i));
                }
            }

            for (int i=0; i<resultList.Count; i++)
            {
                int flag = 0;
                for (int j = 0; j < (resultList.Count - i - 1); j++)
                {
                    //当前召出伙伴排前面
                    if (resultList[j + 1].Called)
                    {
                        Fellow tempFellow = resultList[j + 1];
                        resultList[j + 1] = resultList[j];
                        resultList[j] = tempFellow;
                        flag = 1;
                    }
                    else if (resultList[j].Called == false)
                    {
                        //星级高的伙伴排前面
                        if (resultList[j + 1].StarLevel > resultList[j].StarLevel)
                        {
                            Fellow tempFellow = resultList[j + 1];
                            resultList[j + 1] = resultList[j];
                            resultList[j] = tempFellow;
                            flag = 1;
                        }
                        else if (resultList[j + 1].StarLevel == resultList[j].StarLevel)
                        {
                            //品质高的排前面
                            if (resultList[j + 1].Quality > resultList[j].Quality)
                            {
                                Fellow tempFellow = resultList[j + 1];
                                resultList[j + 1] = resultList[j];
                                resultList[j] = tempFellow;
                                flag = 1;
                            }
                            else if (resultList[j + 1].Quality == resultList[j].Quality)
                            {
                                //等级高的排前面
                                if (resultList[j + 1].Level > resultList[j].Level)
                                {
                                    Fellow tempFellow = resultList[j + 1];
                                    resultList[j + 1] = resultList[j];
                                    resultList[j] = tempFellow;
                                    flag = 1;
                                }
                                else if (resultList[j + 1].Level == resultList[j].Level)
                                {
                                    //DataId大的排前面
                                    if (resultList[j + 1].DataId > resultList[j].DataId)
                                    {
                                        Fellow tempFellow = resultList[j + 1];
                                        resultList[j + 1] = resultList[j];
                                        resultList[j] = tempFellow;
                                        flag = 1;
                                    }
                                    else if (resultList[j + 1].DataId == resultList[j].DataId)
                                    {
                                        //Guid大的排前面
                                        if (resultList[j + 1].Guid > resultList[j].Guid)
                                        {
                                            Fellow tempFellow = resultList[j + 1];
                                            resultList[j + 1] = resultList[j];
                                            resultList[j] = tempFellow;
                                            flag = 1;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
                if (flag == 0)
                {
                    break;
                }
            }

            return resultList;
        }

        public static List<Fellow> FellowCanBreedingFilter(FellowContainer container)
        {
            List<Fellow> resultList = new List<Fellow>();
            for (int i = 0; i < container.ContainerSize; i++)
            {
                Fellow fellow = container.GetFellowByIndex(i);
                if (fellow != null && fellow.IsValid() && false ==fellow.Called && fellow.IsBabyFellow() && fellow.ProcreateCount >= 1)
                {
                    resultList.Add(container.GetFellowByIndex(i));
                }
            }
            return resultList;
        }

        public static List<Fellow> FellowBabyFilter(FellowContainer container)
        {
            List<Fellow> resultList = new List<Fellow>();
            for (int i = 0; i < container.ContainerSize; i++)
            {
                Fellow fellow = container.GetFellowByIndex(i);
                if (fellow != null && fellow.IsValid() && fellow.IsBabyFellow())
                {
                    resultList.Add(container.GetFellowByIndex(i));
                }
            }
            return resultList;
        }

        public static string GetFellowQualityFrame(int quality)
        {
            switch (quality)
            {
                case (int)FELLOWQUALITY.WHITE:
                    return "QualityGrey";
                case (int)FELLOWQUALITY.GREEN:
                    return "QualityGreen";
                case (int)FELLOWQUALITY.BLUE:
                    return "QualityBlue";
                case (int)FELLOWQUALITY.PURPLE:
                    return "QualityPurple";
                case (int)FELLOWQUALITY.ORANGE:
                    return "QualityYellow";
                case (int)FELLOWQUALITY.RED:
                    return "QualityDarkRed";
                case (int)FELLOWQUALITY.GOLD:
                    return "QualityGold";
                default:
                    return "QualityGrey";
            }
        }

        public static string GetFellowQualityIcon(int quality)
        {
            switch (quality)
            {
                case (int)FELLOWQUALITY.WHITE:
                    return "gem-white";
                case (int)FELLOWQUALITY.GREEN:
                    return "gem-green";
                case (int)FELLOWQUALITY.BLUE:
                    return "gem-blue";
                case (int)FELLOWQUALITY.PURPLE:
                    return "gem-purple";
                case (int)FELLOWQUALITY.ORANGE:
                    return "gem-orange";
                case (int)FELLOWQUALITY.RED:
                    return "gem-red";
                case (int)FELLOWQUALITY.GOLD:
                    return "gem-gold";
                default:
                    return "gem-white";
            }
        }

        public static string GetFellowElementPic(int elemenetattr)
        {
            switch ((FELLOWELEMENT)elemenetattr)
            {
                case FELLOWELEMENT.ELEMENT_WATER:
                    return "talent_water";
                case FELLOWELEMENT.ELEMENT_WIND:
                    return "talent_wind";
                case FELLOWELEMENT.ELEMENT_GROUND:
                    return "talent_ground";
                case FELLOWELEMENT.ELEMENT_FIRE:
                    return "talent_fire";
                default:
                    return "talent_fire";
            }
        }

        public static string GetFellowElementText(int elemenetattr)
        {
            switch ((FELLOWELEMENT)elemenetattr)
            {
                case FELLOWELEMENT.ELEMENT_WATER:
                    return StrDictionary.GetClientDictionaryString("#{10190}");
                case FELLOWELEMENT.ELEMENT_WIND:
                    return StrDictionary.GetClientDictionaryString("#{10191}");
                case FELLOWELEMENT.ELEMENT_GROUND:
                    return StrDictionary.GetClientDictionaryString("#{10192}");
                case FELLOWELEMENT.ELEMENT_FIRE:
                    return StrDictionary.GetClientDictionaryString("#{10189}");
                default:
                    return StrDictionary.GetClientDictionaryString("#{10189}");
            }
        }

        public static string GetFellowTypeText(int type, int alien = 0)
        {
            switch ((FELLOWTYPE)type)
            {
                case FELLOWTYPE.BABY:
                    return StrDictionary.GetClientDictionaryString("#{10166}");
                case FELLOWTYPE.ADULT:
                    return StrDictionary.GetClientDictionaryString("#{10167}");
                case FELLOWTYPE.ALIEN:
                    return StrDictionary.GetClientDictionaryString("#{10168}", alien);
                default:
                    return StrDictionary.GetClientDictionaryString("#{10166}");
            }
        }

        public static string GetFellowStarQualityPic(int starlevel)
        {
            int nQuality = starlevel > 0 ? (starlevel - 1) / 12 : 0;
            switch ((FELLOWSTAR)nQuality)
            {
                case FELLOWSTAR.WHITE:
                    return "white-kuang";
                case FELLOWSTAR.GREEN:
                    return "green-kuang";
                case FELLOWSTAR.BLUE:
                    return "blue-kuang";
                case FELLOWSTAR.PURPLE:
                    return "pink-kuang";
                case FELLOWSTAR.ORANGE:
                    return "orange-kuang";
                default:
                    return "white-kuang";
            }
        }

        public static string GetChatFellowStarQualityPic(int starlevel)
        {
            int nQuality = starlevel > 0 ? (starlevel - 1) / 12 : 0;
            switch ((FELLOWSTAR)nQuality)
            {
                case FELLOWSTAR.WHITE:
                    return "WhiteStar";
                case FELLOWSTAR.GREEN:
                    return "GreenStar";
                case FELLOWSTAR.BLUE:
                    return "BlueStar";
                case FELLOWSTAR.PURPLE:
                    return "PurpleStar";
                case FELLOWSTAR.ORANGE:
                    return "OrangeStar";
                default:
                    return "WhiteStar";
            }
        }
        public static string GetFellowTallentSkillQualityPic(int skillid)
        {
            Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
            if (tabSkill == null)
            {
                return "white-jinengkuang";
            }

            switch ((FELLOWTALLENTSKILL)tabSkill.Quality)
            {
                case FELLOWTALLENTSKILL.WHITE:
                    return "white-jinengkuang";
                case FELLOWTALLENTSKILL.GREEN:
                    return "green-jinengkuang";
                case FELLOWTALLENTSKILL.BLUE:
                    return "bule-jinengkuang";
                case FELLOWTALLENTSKILL.PURPLE:
                    return "purple-jinengkuang";
                case FELLOWTALLENTSKILL.ORANGE:
                    return "orange-jinengkuang";
                default:
                    return "white-jinengkuang";
            }
        }

        public static string GetChatFellowTallentSkillQualityPic(int skillid)
        {
            Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(skillid, 0);
            if (tabSkill == null)
            {
                return "white-jinengkuang";
            }

            switch ((FELLOWTALLENTSKILL)tabSkill.Quality)
            {
                case FELLOWTALLENTSKILL.WHITE:
                    return "white-jinengkuang";
                case FELLOWTALLENTSKILL.GREEN:
                    return "green-jinengkuang";
                case FELLOWTALLENTSKILL.BLUE:
                    return "bule-jinengkuang";
                case FELLOWTALLENTSKILL.PURPLE:
                    return "purple-jinengkuang";
                case FELLOWTALLENTSKILL.ORANGE:
                    return "orange-jinengkuang";
                default:
                    return "white-jinengkuang";
            }
        }

        public static string GetFellowElementSkillQualityPic(int skillid)
        {
            Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
            if (tabSkill == null)
            {
                return "white-jinengkuang";
            }

            switch ((FELLOWELEMENTSKILL)tabSkill.Level)
            {
                case FELLOWELEMENTSKILL.WHITE_0:
                    return "white-jinengkuang";
                case FELLOWELEMENTSKILL.GREEN_0:
                case FELLOWELEMENTSKILL.GREEN_1:
                case FELLOWELEMENTSKILL.GREEN_2:
                    return "green-jinengkuang";
                case FELLOWELEMENTSKILL.BLUE_0:
                case FELLOWELEMENTSKILL.BLUE_1:
                case FELLOWELEMENTSKILL.BLUE_2:
                case FELLOWELEMENTSKILL.BLUE_3:
                    return "bule-jinengkuang";
                case FELLOWELEMENTSKILL.PURPLE_0:
                case FELLOWELEMENTSKILL.PURPLE_1:
                case FELLOWELEMENTSKILL.PURPLE_2:
                case FELLOWELEMENTSKILL.PURPLE_3:
                case FELLOWELEMENTSKILL.PURPLE_4:
                    return "purple-jinengkuang";
                case FELLOWELEMENTSKILL.ORANGE_0:
                    return "orange-jinengkuang";
                default:
                    return "white-jinengkuang";
            }
        }
        public static string GetChatFellowElementSkillQualityPic(int skillid)
        {
            Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
            if (tabSkill == null)
            {
                return "white-jinengkuang";
            }

            switch ((FELLOWELEMENTSKILL)tabSkill.Level)
            {
                case FELLOWELEMENTSKILL.WHITE_0:
                    return "white-jinengkuang";
                case FELLOWELEMENTSKILL.GREEN_0:
                case FELLOWELEMENTSKILL.GREEN_1:
                case FELLOWELEMENTSKILL.GREEN_2:
                    return "green-jinengkuang";
                case FELLOWELEMENTSKILL.BLUE_0:
                case FELLOWELEMENTSKILL.BLUE_1:
                case FELLOWELEMENTSKILL.BLUE_2:
                case FELLOWELEMENTSKILL.BLUE_3:
                    return "bule-jinengkuang";
                case FELLOWELEMENTSKILL.PURPLE_0:
                case FELLOWELEMENTSKILL.PURPLE_1:
                case FELLOWELEMENTSKILL.PURPLE_2:
                case FELLOWELEMENTSKILL.PURPLE_3:
                case FELLOWELEMENTSKILL.PURPLE_4:
                    return "purple-jinengkuang";
                case FELLOWELEMENTSKILL.ORANGE_0:
                    return "orange-jinengkuang";
                default:
                    return "white-jinengkuang";
            }
        }

        public static string GetFellowElementLevelText(int skillid)
        {
            Tab_CabalFellowElementSkill tabSkill = TableManager.GetCabalFellowElementSkillByID(skillid, 0);
            if (tabSkill == null)
            {
                return "";
            }
            return tabSkill.Level.ToString();

//             switch ((FELLOWELEMENTSKILL)tabSkill.Level)
//             {
//                 case FELLOWELEMENTSKILL.WHITE_0:
//                 case FELLOWELEMENTSKILL.GREEN_0:
//                 case FELLOWELEMENTSKILL.BLUE_0:
//                 case FELLOWELEMENTSKILL.PURPLE_0:
//                 case FELLOWELEMENTSKILL.ORANGE_0:
//                     return "";
//                 case FELLOWELEMENTSKILL.GREEN_1:
//                 case FELLOWELEMENTSKILL.BLUE_1:
//                 case FELLOWELEMENTSKILL.PURPLE_1:
//                     return "+1";
//                 case FELLOWELEMENTSKILL.GREEN_2:
//                 case FELLOWELEMENTSKILL.BLUE_2:
//                 case FELLOWELEMENTSKILL.PURPLE_2:
//                     return "+2";
//                 case FELLOWELEMENTSKILL.BLUE_3:
//                 case FELLOWELEMENTSKILL.PURPLE_3:
//                     return "+3";                                                                
//                 case FELLOWELEMENTSKILL.PURPLE_4:
//                     return "+4";
//                 default:
//                     return "";
//             }
        }

        public static int GetFellowTalentSkillNewLevel(int skillid, ref int addexp)
        {
            int nSkillId = skillid;

            int loopmax = 20;
            for (int i = 0; i < loopmax; i++)
            {
                Tab_CabalFellowTallentSkill tabSkill = TableManager.GetCabalFellowTallentSkillByID(nSkillId, 0);
                if (tabSkill == null)
                {
                    break;
                }

                // 满级
                if (tabSkill.NextSkillId == GlobeVar.INVALID_ID)
                {
                    addexp = Mathf.Min(addexp, tabSkill.LevelUpExp);
                    break;
                }

                if (addexp < tabSkill.LevelUpExp)
                {
                    break;
                }

                addexp -= tabSkill.LevelUpExp;
                nSkillId = tabSkill.NextSkillId;
            }

            return nSkillId;
        }

        public static int GetFellowAddStarLevel(int curstarlevel, int totalstarexp)
        {
            int addLevel = 0;

            for (int i = curstarlevel; ; i++)
            {
                Tab_CabalFellowStar tabStar = TableManager.GetCabalFellowStarByID(i, 0);
                if (tabStar == null)
                {
                    break;
                }

                if (totalstarexp >= tabStar.ConsumeNum)
                {
                    totalstarexp -= tabStar.ConsumeNum;
                    addLevel += 1;
                }
                else
                {
                    break;
                }
            }

            return addLevel;
        }
    }
    
}