/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleData.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\Player\UserData\BelleData.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\Player\UserData

    *  @author   : fanzhipeng
    *  @date     : 2015/7/7 23:49:34
*****************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Module.Log;
using Games.LogicObj;
using GCGame;
using System;
using Games.Item;
public class Belle
{
    public int id;                      // ID
    public int colorLevel;                   // 品阶
    public int subLevel;
    public int closeAddValue;
    public int orgLevel;
    public Belle(int belleid, int belleclose, int bellelevel)
    {
      id = belleid;
      closeAddValue = belleclose;
      level = bellelevel;
    }
    public Belle() { }
    public int level
    {
        set
        {
            orgLevel = value;
            colorLevel = GetColorLevel(orgLevel);
            subLevel = GetSubLevel(orgLevel);
        }
    }
    public int closeLevel;               //亲密等级
    public int matrixID;                // 所在美人阵ID，无阵为-1
    public int matrixIndex;             // 所在美人阵位置，默认0
    //public int nextEvolutionTime;       // 下次可进化时间，暂时不用了
    public int favourValue;             // 亲密度
    public const int ID_FACTOR = 45;  //ID计算时乘以的系数值  （表BelleLevelUp中使用）
    public int maxFavourValue           //当前等级亲密度上限
    {
        get
        {
            foreach (KeyValuePair<int, List<Tab_BelleCloseLevel>> belleCloseLevelKV in TableManager.GetBelleCloseLevel())
            {
                Tab_BelleCloseLevel bellCloseLevel = belleCloseLevelKV.Value[0];
                if (null == bellCloseLevel)
                    return 0;

                if (bellCloseLevel.BelleId == id && bellCloseLevel.CloseLevel == closeLevel)
                {
                    return bellCloseLevel.CloseMaxValue;
                }
            }

            return 0;
        }
    }
    public int nextCloseAttrValue
    {
        get
        {
            foreach (KeyValuePair<int, List<Tab_BelleCloseLevel>> belleCloseLevelKV in TableManager.GetBelleCloseLevel())
            {
                Tab_BelleCloseLevel bellCloseLevel = belleCloseLevelKV.Value[0];
                if (null == bellCloseLevel)
                    return 0;

                if (bellCloseLevel.BelleId == id && bellCloseLevel.CloseLevel == closeLevel + 1)
                {
                    return bellCloseLevel.AddAttrValue;
                }
            }

            return 0;
        }
    }
    //set Main Level
    private int GetColorLevel(int level)
    {
        int nColorLevel = 1;

        Tab_BelleLevelup belleLevelUp = TableManager.GetBelleLevelupByID(id * ID_FACTOR + level, 0);
        if (belleLevelUp != null)
        {
            return belleLevelUp.MainLevel;
        }
        return nColorLevel;
    }

    private int GetSubLevel(int level)
    {
        int nSubLevel = 1;

        Tab_BelleLevelup belleLevelUp = TableManager.GetBelleLevelupByID(id * ID_FACTOR + level, 0);
        if (belleLevelUp != null)
        {
            return belleLevelUp.SubLevel;
        }
        return nSubLevel;
    }

    public Dictionary<int, int> attrMap = new Dictionary<int, int>();
    public void UpdateAttrMapForOther()
    {
      attrMap.Clear();

      Tab_Belle curTabBelle = TableManager.GetBelleByID(id, 0);
      if (null == curTabBelle) {
        return;
      }
      // 计算面板数值

//      int belleAdditonTableCount = TableManager.GetBelleAddition().Count;

      Tab_BelleLevelup belleLevelUp = TableManager.GetBelleLevelupByID(id * ID_FACTOR + orgLevel, 0);
      if (null == belleLevelUp) {
        return;
      }

      for (int i = 0, count = belleLevelUp.getAttrTypeCount(); i < count; i++) {
        if (attrMap.ContainsKey(belleLevelUp.GetAttrTypebyIndex(i))) {
          attrMap[belleLevelUp.GetAttrTypebyIndex(i)] += belleLevelUp.GetAttrValuebyIndex(i);
        } else
          attrMap.Add(belleLevelUp.GetAttrTypebyIndex(i), belleLevelUp.GetAttrValuebyIndex(i));
      }

      //加上亲密的值
      int closeAttrType = curTabBelle.CloseAddAttrType;
      if (attrMap.ContainsKey(closeAttrType)) {
        int curTypeValue = attrMap[closeAttrType];
        curTypeValue += closeAddValue;
        attrMap[closeAttrType] = curTypeValue;
      }
    }
    public void UpdateAttrMap()
    {
        attrMap.Clear();

        Tab_Belle curTabBelle = TableManager.GetBelleByID(id, 0);
        if (null == curTabBelle)
        {
            return;
        }
        // 计算面板数值

//        int belleAdditonTableCount = TableManager.GetBelleAddition().Count;

        Tab_BelleLevelup belleLevelUp = TableManager.GetBelleLevelupByID(id * ID_FACTOR + orgLevel, 0);
        if (null == belleLevelUp)
        {
            return;
        }

        for (int i = 0, count = belleLevelUp.getAttrTypeCount(); i < count; i++)
        {
            if (attrMap.ContainsKey(belleLevelUp.GetAttrTypebyIndex(i)))
            {
                attrMap[belleLevelUp.GetAttrTypebyIndex(i)] += belleLevelUp.GetAttrValuebyIndex(i);
            }
            else
                attrMap.Add(belleLevelUp.GetAttrTypebyIndex(i), belleLevelUp.GetAttrValuebyIndex(i));
        }

        //加上亲密的值
        int closeAttrType = curTabBelle.CloseAddAttrType;
        if (attrMap.ContainsKey(closeAttrType))
        {
            int curTypeValue = attrMap[closeAttrType];
            curTypeValue += closeAddValue;
            attrMap[closeAttrType] = curTypeValue;
        }
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////(注释原有的属性计算方式，用新的方式计算。)
        //             for (int curLevel = 0; curLevel < colorLevel; curLevel++)
        //             {
        //                 if (curLevel < curTabBelle.getAttrTypeCount())
        //                 {
        //                     // 属性X增加N
        //                     int curType = curTabBelle.GetAttrTypebyIndex(curLevel);
        //                     int curValueAdd = curTabBelle.GetAttrValuebyIndex(curLevel);
        //                     if (curLevel < curBelleData.colorLevel)
        //                     {
        //                         if (curLevel == curBelleData.colorLevel - 1)
        //                         {
        //                             curValueAdd = (int)(curValueAdd * curBelleData.subLevel);
        //                         }
        //                         else
        //                         {
        //                             curValueAdd = (int)(curValueAdd * 9);
        //                         }
        // 
        //                         if (attrMap.ContainsKey(curType))
        //                         {
        //                             attrMap[curType] += curValueAdd;
        //                         }
        //                         else
        //                         {
        //                             attrMap.Add(curType, curValueAdd);
        //                         }
        // 
        //                         for (int additonIndex = 0; additonIndex < belleAdditonTableCount; additonIndex++)
        //                         {
        //                             Tab_BelleAddition curTabBelleAdditon = TableManager.GetBelleAdditionByID(additonIndex, 0);
        //                             if (null == curTabBelleAdditon)
        //                             {
        //                                 continue;
        //                             }
        // 
        //                             if (BelleData.OwnedBelleMap.Count == curTabBelleAdditon.BelleCount && id == curTabBelleAdditon.BelleID && curLevel < curTabBelleAdditon.getAdditionValueCount())
        //                             {
        //                                 attrMap[curType] += curTabBelleAdditon.GetAdditionValuebyIndex(curLevel);
        //                             }
        //                         }
        //                     }
        //                 }
        //             }
        ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
    }

    /// <summary>
    /// 获取下一等级的第几个属性类型
    /// </summary>
    /// <param name="nextLevel"></param>
    /// <returns></returns>
    public int GetNextLevelAttrType(int nextLevel)
    {
        if (nextLevel <= 1)
            return -1;

        int preLevel = nextLevel - 1;

        Tab_BelleLevelup preBelleLevL = TableManager.GetBelleLevelupByID(id * ID_FACTOR + preLevel, 0);
        if (null == preBelleLevL)
        {
            return -1;
        }

        Tab_BelleLevelup nextBelleLevL = TableManager.GetBelleLevelupByID(id * ID_FACTOR + nextLevel, 0);
        if (null == nextBelleLevL)
        {
            return -1;
        }

        for (int i = 0, count = preBelleLevL.getAttrTypeCount(); i < count; i++)
        {
            if (preBelleLevL.GetAttrValuebyIndex(i) != nextBelleLevL.GetAttrValuebyIndex(i))
            {
                return i;
            }
        }

        return -1;
    }

    /// <summary>
    /// 获取下一等级增加的属性值
    /// </summary>
    /// <param name="nextLevel"></param>
    /// <returns></returns>
    public int GetNextLevelAttrValue(int nextLevel)
    {
        int nextAttrValue = 0;
        if (nextLevel <= 1)
            return nextAttrValue;

        int preLevel = nextLevel - 1;

        Tab_BelleLevelup preBelleLevL = TableManager.GetBelleLevelupByID(id * ID_FACTOR + preLevel, 0);
        if (null == preBelleLevL)
        {
            return nextAttrValue;
        }

        Tab_BelleLevelup nextBelleLevL = TableManager.GetBelleLevelupByID(id * ID_FACTOR + nextLevel, 0);
        if (null == nextBelleLevL)
        {
            return nextAttrValue;
        }

        for (int i = 0, count = preBelleLevL.getAttrTypeCount(); i < count; i++)
        {
            if (preBelleLevL.GetAttrValuebyIndex(i) != nextBelleLevL.GetAttrValuebyIndex(i))
            {
                return nextBelleLevL.GetAttrValuebyIndex(i) - preBelleLevL.GetAttrValuebyIndex(i);
            }
        }

        return nextAttrValue;
    }

    public bool IsMaxLevel()
    {

        Tab_BelleLevelup nextBelleLevL = TableManager.GetBelleLevelupByID(id * ID_FACTOR + orgLevel + 1, 0);
        if (null == nextBelleLevL)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}

public class BelleMatrix
{
    public BelleMatrix(int _id, bool _isActive, int _belleCount)
    {
        id = _id;
        isActive = _isActive;
        belleIDs = new int[_belleCount];
        for (int i = 0; i < _belleCount; i++)
        {
            belleIDs[i] = -1;
        }
    }
    public int id;                 // id
    public bool isActive;           // 是否激活
    public int[] belleIDs;           // 阵上美人列表

    public Dictionary<int, int> attrMap = new Dictionary<int, int>();
    public Dictionary<int, int> attrAffectionMap = new Dictionary<int, int>();
    public Dictionary<int, int> attrBelleMap = new Dictionary<int, int>();

    public bool m_bAffectionActive = false;
    private static float m_lastTotalValue = 0;     // 记录上次激活的时候情缘总值，以此来判断情缘是否发生变化

    public void UpdateAttrMap(bool bCalAffection = false)
    {
        attrMap.Clear();
        attrBelleMap.Clear();
        attrAffectionMap.Clear();
        m_bAffectionActive = false;

        int belleMinLevel = 0;
        int curValidBelleCount = 0;
        float curTotalValue = 0;

        for (int i = 0; i < belleIDs.Length; i++)
        {
            // 收集面板加成
            Belle curBelleData = null;
            if (BelleData.OwnedBelleMap.ContainsKey(belleIDs[i]))
            {
                curBelleData = BelleData.OwnedBelleMap[belleIDs[i]];
            }

            if (null == curBelleData)
            {
                continue;
            }

            curValidBelleCount++;
            if (curBelleData.colorLevel < belleMinLevel)
            {
                belleMinLevel = curBelleData.colorLevel;
            }
            curBelleData.UpdateAttrMap();
            foreach (KeyValuePair<int, int> curPair in curBelleData.attrMap)
            {
                if (attrMap.ContainsKey(curPair.Key))
                {
                    attrMap[curPair.Key] += curPair.Value;
                }
                else
                {
                    attrMap.Add(curPair.Key, curPair.Value);
                }

                if (attrBelleMap.ContainsKey(curPair.Key))
                {
                    attrBelleMap[curPair.Key] += curPair.Value;
                }
                else
                {
                    attrBelleMap.Add(curPair.Key, curPair.Value);
                }
            }

            // 收集情缘加成

            if (!isActive)
            {
                continue;
            }

            Tab_Belle curTabBelle = TableManager.GetBelleByID(belleIDs[i], 0);
            if (null == curBelleData)
            {
                continue;
            }

            for (int curAffectoinIndex = 0; curAffectoinIndex < curTabBelle.getAffectionConditonTypeCount(); curAffectoinIndex++)
            {
                int type = curTabBelle.GetAffectionConditonTypebyIndex(curAffectoinIndex);
                bool bAddValue = false;
                switch (type)
                {
                    case 1:
                        {
                            // 同上阵
                            int targetBelleID = curTabBelle.GetAffectionConditonValuebyIndex(curAffectoinIndex);
                            if (BelleData.OwnedBelleMap.ContainsKey(targetBelleID) && null != BelleData.OwnedBelleMap[targetBelleID])
                            {
                                if (BelleData.OwnedBelleMap[targetBelleID].matrixID == curBelleData.matrixID)
                                {
                                    bAddValue = true;
                                }
                            }
                        }
                        break;
                    case 2:
                        {
                            int targetLevel = curTabBelle.GetAffectionConditonValuebyIndex(curAffectoinIndex);
                            if (curBelleData.colorLevel > targetLevel || (curBelleData.colorLevel == targetLevel && curBelleData.subLevel == 9))
                            {
                                bAddValue = true;
                            }
                        }
                        break;
                }

                if (bAddValue)
                {

                    int attrType = curTabBelle.GetAffectionGainsTypebyIndex(curAffectoinIndex);
                    int attrValue = curTabBelle.GetAffectionGainsValuebyIndex(curAffectoinIndex);
                    curTotalValue += attrValue;

                    m_bAffectionActive = true;

                    if (attrMap.ContainsKey(attrType))
                    {
                        attrMap[attrType] += attrValue;
                    }
                    else
                    {
                        attrMap.Add(attrType, attrValue);
                    }

                    if (attrAffectionMap.ContainsKey(attrType))
                    {
                        attrAffectionMap[attrType] += attrValue;
                    }
                    else
                    {
                        attrAffectionMap.Add(attrType, attrValue);
                    }
                }
            }

        }

        if (bCalAffection)
        {
            if (m_bAffectionActive)
            {
                m_bAffectionActive = curTotalValue != m_lastTotalValue;
            }
            m_lastTotalValue = curTotalValue;
        }
        else
        {
            m_bAffectionActive = false;
        }

        //         收集阵法加成 
        //         Tab_BelleMatrix curBelleMatrix = TableManager.GetBelleMatrixByID(id, 0);
        //         if (null == curBelleMatrix)
        //         {
        //             return;
        //         }
        // 
        //         if (curBelleMatrix.BelleCount > curValidBelleCount)
        //         {
        //             return;
        //         }
        //         belleMinLevel -= 1;
        //         if (belleMinLevel >= 0 && belleMinLevel < curBelleMatrix.getAttrGainsCount())
        //         {
        //             int type = curBelleMatrix.AttrType;
        //             float precent = curBelleMatrix.GetAttrGainsbyIndex(belleMinLevel);
        // 
        //             foreach (KeyValuePair<int, int> curPair in attrMap)
        //             {
        //                 if (curPair.Key == type)
        //                 {
        //                     attrMap[curPair.Key] = (int)(curPair.Value + curPair.Value * precent);
        //                 }
        //             }
        //         }


    }
}

public class BelleData
{
    public const int MatrixBelleMax = 12;                                 //阵法上最多有9个美人
    public static int dayCloseTime = 0;                                 // 当日已亲密次数
    public static int nextCloseTime = 0;                                // 下次亲密时间 realtimeSinceStartup
    public static int belleMatrixActiveMax = 1;                         // 可以激活的美人阵最大数量                  
    public static Dictionary<int, Belle> OwnedBelleMap = new Dictionary<int, Belle>();        // 玩家拥有的美人表
    public static Dictionary<int, BelleMatrix> OwnedMatrixMap = new Dictionary<int, BelleMatrix>();        // 玩家拥有的美人阵
    public static Dictionary<UInt64, Dictionary<int, Belle>> AllOtherPlayerBelleMap = new Dictionary<UInt64, Dictionary<int, Belle>>();//非主角魂器信息（部分）
    public static Dictionary<int, int> OwnedBelleAbsorbNum = new Dictionary<int, int>();//魂器已经吸收的碎片数量

    //当前新激活的美人个数
    public static int m_belleActiveCount = 0;
    private static float m_lastEffectTime = 0;

    //当前可以通过碎片合成的美人个数
    public static int m_belleItemCount = 0;

    //当前可以进化的美人个数
    public static int m_belleEvoCount = 0;

    public static List<int> RedPointBelleIds = new List<int>();
    public static List<int> RedPointMatrixIds = new List<int>();
    public static List<int> CalculateCreateNewBelle()
    {
        if (RedPointBelleIds == null) RedPointBelleIds = new List<int>();

        RedPointBelleIds.Clear();
        Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (backPack != null)
        {
            Dictionary<int, List<Tab_Belle>> allBelle = TableManager.GetBelle();
            foreach (KeyValuePair<int, List<Tab_Belle>> pair in allBelle)
            {
                Tab_Belle belle = pair.Value[0];
                if (belle != null)
                {
                    if (!OwnedBelleMap.ContainsKey(belle.Id) && backPack.GetItemCountByDataId(belle.BelleItemID) >= belle.BelleItemCount)
                    {
                        RedPointBelleIds.Add(belle.Id);
                    }
                }
            }
        }
        return RedPointBelleIds;
    }
    public static List<int> CalculateActiveMatrixIds()
    {
        if (RedPointMatrixIds == null) RedPointMatrixIds = new List<int>();
        int level = GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level;
        RedPointMatrixIds.Clear();
        int count = 0;
        foreach (KeyValuePair<int, Belle> pair in OwnedBelleMap)
        {
            if (pair.Value != null && pair.Value.matrixID < 0)
            {
                ++count;
            }
        }
        Dictionary<int, List<Tab_BelleMatrix>> allBelle = TableManager.GetBelleMatrix();
        foreach (KeyValuePair<int, List<Tab_BelleMatrix>> pair in allBelle)
        {
            Tab_BelleMatrix bellematrix = pair.Value[0];
            if (bellematrix != null 
                && OwnedMatrixMap.ContainsKey(bellematrix.Id) 
                && bellematrix.OpenLevel<=level
                && !OwnedMatrixMap[bellematrix.Id].isActive
                && ArrayCount(OwnedMatrixMap[bellematrix.Id].belleIDs) + count >= bellematrix.BelleCount)
            {
                RedPointMatrixIds.Add(pair.Key);
            }
        }
        return RedPointMatrixIds;
    }
    private static int ArrayCount(int[] array)
    {
        int num = 0;
        if (array != null)
        {
            int count = array.Length;
            for (int i = 0; i < count; ++i)
            {
                if (array[i] > -1)
                {
                    ++num;
                }
            }
        }
        return num;
    }
    // 接收服务器推送的美人信息，更新数据
    public static void UpdateBelleData(GC_BELLE_DATA data)
    {
        OwnedBelleMap.Clear();
        OwnedMatrixMap.Clear();
        OwnedBelleAbsorbNum.Clear();
        int absorbCount = data.absorbSumList.Count;
        if (absorbCount != data.belleIDList.Count) {
            return;
        }
        for (int i = 0; i < absorbCount; ++i) {
          int id = data.belleIDList[i];
          if (OwnedBelleAbsorbNum.ContainsKey(id)) {
            OwnedBelleAbsorbNum[id] = data.GetAbsorbSum(i);
          } else {
            OwnedBelleAbsorbNum.Add(id, data.GetAbsorbSum(i));
          }
        }
          // 全局信息
          dayCloseTime = data.DayCloseTime;
        belleMatrixActiveMax = data.BelleMatrixActiveMax;
        nextCloseTime = (int)Time.realtimeSinceStartup + data.NextCloseTimer;

        // 美人信息
        int idCount = data.belleIDCount;
        for (int i = 0; i < idCount; i++)
        {
            Belle curBelle = new Belle();
            curBelle.id = data.belleIDList[i];

            curBelle.level = data.belleLevelList[i];
            curBelle.matrixID = data.belleMatrixIDList[i];
            curBelle.matrixIndex = data.belleMatrixIndexList[i];
            //curBelle.nextEvolutionTime = (int)Time.realtimeSinceStartup + data.belleNextEvolutionTimerList[i];
            curBelle.favourValue = data.belleFavourValueList[i];
            curBelle.closeLevel = data.closeLevelList[i];
            if (i < data.belleCloseAddAttrValueCount)
            {
                curBelle.closeAddValue = data.GetBelleCloseAddAttrValue(i);
            }

            OwnedBelleMap.Add(curBelle.id, curBelle);
        }

        // 阵型信息
        int matrixCount = data.matrixIDCount;
        //matrixBelleMax = data.MatrixBelleCountMax;
        foreach (KeyValuePair<int, List<Tab_BelleMatrix>> curTabMatrix in TableManager.GetBelleMatrix())
        {
            BelleMatrix curMatrix = new BelleMatrix(curTabMatrix.Value[0].Id, false, MatrixBelleMax);
            OwnedMatrixMap.Add(curMatrix.id, curMatrix);
        }
        for (int i = 0; i < matrixCount; i++)
        {
            if (!OwnedMatrixMap.ContainsKey(data.matrixIDList[i]))
            {
                LogModule.ErrorLog("can not find cur matrix in matrix table id:" + data.matrixIDList[i]);
                continue;
            }

            // 服务器传来的长度是12，只截取表中定义的长度
            BelleMatrix curMatrix = OwnedMatrixMap[data.matrixIDList[i]];
            curMatrix.isActive = data.matrixIsActiveList[i] > 0;
            for (int j = 0; j < MatrixBelleMax; j++)
            {
                if (j < curMatrix.belleIDs.Length)
                {
                    curMatrix.belleIDs[j] = (data.matrixBellesList[i * MatrixBelleMax + j]);
                }
            }
        }

        //Debug.Log("fanzhipeng ----------------------------------------------------------------------------  + BelleData()");
        // m_belleActiveCount = PlayerPreferenceData.BelleActiveTipCount;
        GameManager.gameManager.PlayerDataPool.BelleConfigData = BelleConfig.Init();

        m_belleActiveCount = BelleConfig.GetBelleActiveCountByBelleConfData();
        m_belleItemCount = BelleConfig.GetBelleItemCountByBelleConfData();
        m_belleEvoCount = BelleConfig.GetBelleEvoCountByBelleConfData();
        if (MenuBarLogic.Instance() != null)
        {
            MenuBarLogic.Instance().UpdateBelleTip();
        }

#if UNITY_ANDROID
        if (PlatformHelper.IsChannelTW())
        {
            int count = OwnedBelleMap.Count;
            if (count >= 15)
            {
                PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.BELLE_GET_15);
            }
            else if (count >= 8)
            {
                PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.BELLE_GET_8);
            }
        }
#endif
        CalculateCreateNewBelle();
        CalculateActiveMatrixIds();
        if (BelleController.Instance() != null)
        {
            BelleController.Instance().UpdateTapRedPoint();
        }
        if (BelleShowWindow.Instance() != null)
        {
            BelleShowWindow.Instance().BelleItemsShowRedPoint();
        }
        if (BelleMatrixWindow.Instance() != null)
        {
            BelleMatrixWindow.Instance().BelleMatrixShowRedPoint();
        }
    }

    // 美人亲密消息
    public delegate void CloseDataDelegate();
    public static CloseDataDelegate delClose;
    public static void UpdateCloseData(GC_BELLE_CLOSE_RET packet)
    {
        dayCloseTime = packet.DayCloseTime;
        nextCloseTime = (int)Time.realtimeSinceStartup + packet.NextCloserTimer;
        int belleID = packet.BelleID;
        if (OwnedBelleMap.ContainsKey(belleID))
        {
            //             if (packet.BelleFavourValue <= OwnedBelleMap[belleID].favourValue)
            //             {
            //                 // 用此来判断是否达到亲密上限
            // 
            //                 if (BackCamerControll.Instance() != null)
            //                 {
            //                     BackCamerControll.Instance().PlaySceneEffect(208);
            //                 }
            // 
            //                 Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
            //                 if (null != mainPlayer)
            //                 {
            //                     mainPlayer.SendNoticMsg(false, "#{3046}");
            //                 }
            //             }
            OwnedBelleMap[belleID].favourValue = packet.BelleFavourValue;
            OwnedBelleMap[belleID].closeAddValue = packet.BelleCloseAddAttrValue;
            OwnedBelleMap[belleID].closeLevel = packet.CloseLevel;
        }

        if (BackCamerControll.Instance() != null)
        {
            BackCamerControll.Instance().PlaySceneEffect(61);
        }

        //         if (null != GameManager.gameManager && null != GameManager.gameManager.SoundManager)
        //         {
        //             GameManager.gameManager.SoundManager.PlaySoundEffect(138);   //kiss
        //         }

        if (MenuBarLogic.Instance() != null)
        {
            MenuBarLogic.Instance().UpdateBelleTip();
        }
        //LevelUpController.ShowTipByID(1434);
        if (null != delClose) delClose();
    }

    // 美人进化消息
    public delegate void EvolutionDataDelegate();
    public static EvolutionDataDelegate delEvolution;
    public static void UpdateEvolutionData(GC_BELLE_EVOLUTION_RET packet)
    {
        int belleID = packet.BelleID;
        if (!OwnedBelleMap.ContainsKey(belleID))
        {
            LogModule.ErrorLog("receive an invalided bell id " + belleID.ToString());
            return;
        }

//        Belle curBelle = OwnedBelleMap[belleID];
        //curBelle.nextEvolutionTime = (int)Time.realtimeSinceStartup + packet.NextEvolutionTimer;

        if (BackCamerControll.Instance() != null)
        {
            if (Time.time - m_lastEffectTime > 3)
            {
                BackCamerControll.Instance().PlaySceneEffect(61);
                m_lastEffectTime = Time.time;
            }
        }

        //         if (null != GameManager.gameManager && null != GameManager.gameManager.SoundManager)
        //         {
        //             GameManager.gameManager.SoundManager.PlaySoundEffect(138);   //kiss
        //         }

        //LevelUpController.ShowTipByID(1435);
        if (null != delEvolution) delEvolution();
        if (OwnedBelleAbsorbNum != null)
        {
            if (OwnedBelleAbsorbNum.ContainsKey(packet.BelleID))
            {
                OwnedBelleAbsorbNum[packet.BelleID] = 0;
            }
            else
            {
                OwnedBelleAbsorbNum.Add(packet.BelleID, 0);
            }
            if (BelleOwnWindow.Instance() != null)
            {
                BelleOwnWindow.Instance().UpdateAdvanceBelleFragment();
            }
        }
        CalculateCreateNewBelle();
        CalculateActiveMatrixIds();
        if (BelleController.Instance() != null)
        {
            BelleController.Instance().UpdateTapRedPoint();
        }
        if (BelleShowWindow.Instance() != null)
        {
            BelleShowWindow.Instance().BelleItemsShowRedPoint();
        }
        if (BelleMatrixWindow.Instance() != null)
        {
            BelleMatrixWindow.Instance().BelleMatrixShowRedPoint();
        }
    }

    // 美人加速进化消息
    public delegate void EvolutionRapidDataDelegate();
    public static EvolutionRapidDataDelegate delEvolutionRapid;
    public static void UpdateEvolutionRapidData(GC_BELLE_EVOLUTIONRAPID_RET packet)
    {
        int belleID = packet.BelleID;
        Belle belle;
        BelleMatrix bellematrix;
        int col = 10;
        if (OwnedBelleMap.TryGetValue(belleID, out belle) && belle.matrixID > -1 && OwnedMatrixMap.TryGetValue(belle.matrixID, out bellematrix))
        {
            int count = bellematrix.belleIDs.Length;
            for (int i = 0; i < count; ++i)
            {
                if (bellematrix.belleIDs[i] > -1)
                {
                    if (OwnedBelleMap.TryGetValue(bellematrix.belleIDs[i], out belle) && belle.colorLevel < col)
                    {
                        col = belle.colorLevel;
                    }
                }
            }
        }
        if (!OwnedBelleMap.ContainsKey(belleID))
        {
            LogModule.ErrorLog("receive an invalided bell id " + belleID.ToString());
            return;
        }

        Belle curBelle = OwnedBelleMap[belleID];
        curBelle.level = packet.Level;
        //curBelle.nextEvolutionTime = 0;
        if (null != delEvolution) delEvolutionRapid();
        CalculateCreateNewBelle();
        CalculateActiveMatrixIds();
        if (BelleController.Instance() != null)
        {
            BelleController.Instance().UpdateTapRedPoint();
        }
        if (BelleShowWindow.Instance() != null)
        {
            BelleShowWindow.Instance().BelleItemsShowRedPoint();
        }
        if (BelleMatrixWindow.Instance() != null)
        {
            BelleMatrixWindow.Instance().BelleMatrixShowRedPoint();
        }
        int belleIDC = packet.BelleID;
        Belle belleC;
        BelleMatrix bellematrixC;
        int colC = 10;
        if (OwnedBelleMap.TryGetValue(belleIDC, out belleC) && belleC.matrixID > -1 && OwnedMatrixMap.TryGetValue(belleC.matrixID, out bellematrixC))
        {
            int countC = bellematrixC.belleIDs.Length;
            for (int i = 0; i < countC; ++i)
            {
                if (bellematrixC.belleIDs[i] > -1)
                {
                    if (OwnedBelleMap.TryGetValue(bellematrixC.belleIDs[i], out belleC) && belleC.colorLevel < colC)
                    {
                        colC = belleC.colorLevel;
                    }
                }
            }
        }
        if (colC > col && colC != 10 && col != 10)
        {
            UIManager.ShowUI(UIInfo.BelleMatrixUpdateEffect);
        }
    }

    //美人合成消息
    public delegate void GetBelleDelegate();
    public static GetBelleDelegate delGetBelle;
    public static void UpdateGetBelle(GC_RET_GET_BELLE packet)
    {
        int result = packet.Result;
        if (result != -1)
        {
            AddBelle(result);

            //合成获得的美人不提示
            BelleConfig.SetBelleGetBitsByBit(result, '0');
            m_belleActiveCount = BelleConfig.GetBelleActiveCount();

            BelleConfig.SetBelleItemBitsByBit(result,'0');
            m_belleItemCount = BelleConfig.GetBelleItemCount();
            if (null != delGetBelle) delGetBelle();
        }
        CalculateCreateNewBelle();
        CalculateActiveMatrixIds();
        if (BelleController.Instance() != null)
        {
            BelleController.Instance().UpdateTapRedPoint();
        }
        if (BelleShowWindow.Instance() != null)
        {
            BelleShowWindow.Instance().BelleItemsShowRedPoint();
        }
        if (BelleMatrixWindow.Instance() != null)
        {
            BelleMatrixWindow.Instance().BelleMatrixShowRedPoint();
        }
    }

    // 美人出阵消息
    public delegate void BattleDataDelegate();
    public static BattleDataDelegate delBattle;
    public static void UpdateBattleData(GC_BELLE_BATTLE_RET packet)
    {
        Belle belle;
        BelleMatrix bellematrix;
        int col = 10;
        if (OwnedMatrixMap.TryGetValue(packet.NewMatrixID, out bellematrix))
        {
            int count = bellematrix.belleIDs.Length;
            for (int i = 0; i < count; ++i)
            {
                if (bellematrix.belleIDs[i] > -1)
                {
                    if (OwnedBelleMap.TryGetValue(bellematrix.belleIDs[i], out belle) && belle.colorLevel < col)
                    {
                        col = belle.colorLevel;
                    }
                }
            }
        }
        int belleID = packet.BelleID;
        int oldMatrixID = packet.OldMatrixID;
        int oldMatrixIndex = packet.OldMatrixIndex;
        int newMatrixID = packet.NewMatrixID;
        int newMatrixIndex = packet.NewMatrixIndex;
        Tab_BelleMatrix oldTabMatrix = TableManager.GetBelleMatrixByID(oldMatrixID, 0);
        Tab_BelleMatrix newTabMatrix = TableManager.GetBelleMatrixByID(newMatrixID, 0);
        if (null == newTabMatrix)
        {
            return;
        }

        int nOldBelleID = packet.RestBelleID;
        if (OwnedBelleMap.ContainsKey(nOldBelleID) && null != OwnedBelleMap[nOldBelleID])
        {
            OwnedBelleMap[nOldBelleID].matrixID = -1;
            OwnedBelleMap[nOldBelleID].matrixIndex = -1;
        }
        if (null != oldTabMatrix && OwnedMatrixMap.ContainsKey(oldMatrixID) && oldMatrixIndex >= 0 && oldMatrixIndex < MatrixBelleMax)
        {
            OwnedMatrixMap[oldMatrixID].belleIDs[oldMatrixIndex] = -1;
            //OwnedMatrixMap[oldMatrixID].isActive = packet.OldMatrixIsActive > 0;
        }

        if (OwnedMatrixMap.ContainsKey(newMatrixID) && newMatrixIndex >= 0 && newMatrixIndex < MatrixBelleMax)
        {
            OwnedMatrixMap[newMatrixID].belleIDs[newMatrixIndex] = belleID;

            //OwnedMatrixMap[newMatrixID].isActive = packet.NewMatrixIsActive > 0;
        }

        if (OwnedBelleMap.ContainsKey(belleID))
        {
            OwnedBelleMap[belleID].matrixID = packet.NewMatrixID;
            OwnedBelleMap[belleID].matrixIndex = newMatrixIndex;
        }


        if (OwnedMatrixMap.ContainsKey(newMatrixID) && OwnedMatrixMap[newMatrixID].isActive)
        {
            // 判断情缘变化
            OwnedMatrixMap[newMatrixID].UpdateAttrMap(true);
            if (OwnedMatrixMap[newMatrixID].m_bAffectionActive)
            {
                if (BackCamerControll.Instance() != null)
                {
                    BackCamerControll.Instance().PlaySceneEffect(195);
                    //   GameManager.gameManager.SoundManager.PlaySoundEffect(142);
                }
                GUIData.AddNotifyData("#{11325}");
            }

            // 判断五行相克
            Tab_Belle curTabBelle = TableManager.GetBelleByID(belleID, 0);
            if (null != newTabMatrix && newMatrixIndex < newTabMatrix.getNatureIndexCount() && OwnedBelleMap.ContainsKey(belleID) && null != curTabBelle)
            {

                int natureDiff = Mathf.Abs(curTabBelle.Nature - newTabMatrix.GetNatureIndexbyIndex(newMatrixIndex));
                if (natureDiff == 0 || natureDiff == 3)
                {
                    // 增益
                }
                else if (natureDiff == 1)
                {
                    // 减益
                }

            }
        }
        if (null != delBattle) delBattle();
        CalculateCreateNewBelle();
        CalculateActiveMatrixIds();
        if (BelleController.Instance() != null)
        {
            BelleController.Instance().UpdateTapRedPoint();
        }
        if (BelleShowWindow.Instance() != null)
        {
            BelleShowWindow.Instance().BelleItemsShowRedPoint();
        }
        if (BelleMatrixWindow.Instance() != null)
        {
            BelleMatrixWindow.Instance().BelleMatrixShowRedPoint();
        }
        int colC = 10;
        if (OwnedMatrixMap.TryGetValue(packet.NewMatrixID, out bellematrix))
        {
            int count = bellematrix.belleIDs.Length;
            for (int i = 0; i < count; ++i)
            {
                if (bellematrix.belleIDs[i] > -1)
                {
                    if (OwnedBelleMap.TryGetValue(bellematrix.belleIDs[i], out belle) && belle.colorLevel < colC)
                    {
                        colC = belle.colorLevel;
                    }
                }
            }
        }
        if (colC > col && colC != 10 && col != 10)
        {
            UIManager.ShowUI(UIInfo.BelleMatrixUpdateEffect);
        }
    }


    // 美人休息消息
    public delegate void RestDataDelegate();
    public static RestDataDelegate delRest;
    public static void UpdateRestData(GC_BELLE_REST_RET packet)
    {
        int belleId = packet.BelleID;
        if (OwnedBelleMap.ContainsKey(belleId))
        {
            int matrixID = OwnedBelleMap[belleId].matrixID;
            OwnedBelleMap[belleId].matrixID = -1;
            OwnedBelleMap[belleId].matrixIndex = -1;
//            Tab_BelleMatrix curTabMatrix = TableManager.GetBelleMatrixByID(matrixID, 0);
            if (OwnedMatrixMap.ContainsKey(matrixID) && packet.MatrixIndex < MatrixBelleMax)
            {
                OwnedMatrixMap[matrixID].belleIDs[packet.MatrixIndex] = -1;
                //OwnedMatrixMap[matrixID].isActive = false;
            }
        }

        if (null != delRest) delRest();
    }

    // 激活阵型消息
    public delegate void ActiveMatrixDelegate();
    public static ActiveMatrixDelegate delActiveMatrix;
    public static void UpdateActiveMatrixData(GC_BELLE_ACTIVEMATRIX_RET packet)
    {
        if (OwnedMatrixMap.ContainsKey(packet.ActiveMatrixID))
        {
            OwnedMatrixMap[packet.ActiveMatrixID].isActive = true;
            OwnedMatrixMap[packet.ActiveMatrixID].UpdateAttrMap(true);

            if (OwnedMatrixMap[packet.ActiveMatrixID].m_bAffectionActive)
            {
                if (BackCamerControll.Instance() != null)
                {
                    BackCamerControll.Instance().PlaySceneEffect(195);
                    //  GameManager.gameManager.SoundManager.PlaySoundEffect(142);
                }
                GUIData.AddNotifyData("#{11325}");
            }
            Utils.SetBelleMatrixFlagByBit(packet.ActiveMatrixID);
        }

        if (packet.HasUnActiveMatrix && OwnedMatrixMap.ContainsKey(packet.UnActiveMatrix))
        {
            OwnedMatrixMap[packet.UnActiveMatrix].isActive = false;
            OwnedMatrixMap[packet.UnActiveMatrix].UpdateAttrMap(true);
        }

        if (null != delActiveMatrix) delActiveMatrix();
        BelleMatrix bellematrix;
        bool sign = true;
        if (BelleData.OwnedMatrixMap.TryGetValue(packet.ActiveMatrixID, out bellematrix) && bellematrix != null) {
          Tab_BelleMatrix curBelleMatrix = TableManager.GetBelleMatrixByID(bellematrix.id, 0);
          List<int> matrixLayout;
          //BelleMatrixBand belleMatrixBand = m_curMatrixBand.GetComponent<BelleMatrixBand>();
          if (/*belleMatrixBand != null &&*/ null != curBelleMatrix) {
            matrixLayout = BelleMatrixBand.GetLayOutByMatrixLayout(curBelleMatrix.Layout);
            int count = bellematrix.belleIDs.Length;
            if (matrixLayout != null && count == matrixLayout.Count) {
              for (int i = 0; i < count; ++i) {
                if (matrixLayout[i] == 1 && bellematrix.belleIDs[i] == -1) {
                  sign = false;
                  break;
                }
              }
            }
          }
        }
        if (!sign) {
          CG_BELLE_ACTIVEMATRIX activeMatrixRequest = (CG_BELLE_ACTIVEMATRIX)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_ACTIVEMATRIX);
          activeMatrixRequest.SetMatrixID(packet.ActiveMatrixID);
          activeMatrixRequest.SendPacket();
        }
        CalculateCreateNewBelle();
        CalculateActiveMatrixIds();
        if (BelleController.Instance() != null)
        {
            BelleController.Instance().UpdateTapRedPoint();
        }
        if (BelleShowWindow.Instance() != null)
        {
            BelleShowWindow.Instance().BelleItemsShowRedPoint();
        }
        if (BelleMatrixWindow.Instance() != null)
        {
            BelleMatrixWindow.Instance().BelleMatrixShowRedPoint();
        }
    }

    public static void AddBelle(int belleID)
    {
        if (OwnedBelleMap.ContainsKey(belleID))
        {
            return;
        }

        Belle curBelle = new Belle();
        curBelle.id = belleID;

        curBelle.level = 1;
        curBelle.matrixID = -1;
        curBelle.matrixIndex = -1;
        //curBelle.nextEvolutionTime = 0;
        curBelle.favourValue = 0;
        curBelle.closeLevel = 1;
        OwnedBelleMap.Add(curBelle.id, curBelle);
        m_belleActiveCount = BelleConfig.GetBelleActiveCount() + 1;
        BelleConfig.SetBelleGetBitsByBit(belleID, '1');

        if (MenuBarLogic.Instance() != null)
        {
            MenuBarLogic.Instance().UpdateBelleTip();
        }
    }

    public static void CleanBelleTip()
    {
        // PlayerPreferenceData.BelleActiveTipCount = 0;
        if (MenuBarLogic.Instance() != null)
        {
            MenuBarLogic.Instance().UpdateBelleTip();
        }
    }

    public static string GetBelleBigTextureName(Tab_Belle curTabBelle)
    {
        if (null == curTabBelle)
        {
            return "";
        }
        int textureIndex = 0;
        //         if (BelleData.OwnedBelleMap.ContainsKey(curTabBelle.Id))
        //         {
        //             if (BelleData.OwnedBelleMap[curTabBelle.Id].colorLevel > 3)
        //             {
        //                 textureIndex = BelleData.OwnedBelleMap[curTabBelle.Id].colorLevel - 3;
        //             }
        //         }
        // 
        //         if (textureIndex < 0 || textureIndex > 3)
        //         {
        //             LogModule.ErrorLog("textureIndex out of range");
        //         }

        /////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// (临时代码)
        //直接都显示第一个texture，新的只需要一个就行了，不需要别的了。
        return curTabBelle.GetBigTexNamebyIndex(textureIndex);
    }

    private static Color m_colorOrange = new Color(255 / 255.0f, 148 / 255.0f, 9 / 255.0f);
    private static Color m_colorPurple = new Color(161 / 255.0f, 12 / 255.0f, 255 / 255.0f);
    private static Color m_green = new Color(4 / 225.0f, 224 / 255.0f, 0);
    private static Color m_blue = new Color(0, 186 / 255.0f, 255 / 255.0f);
    public static Color GetBelleColorByColorLevel(int colorLevel)
    {
        if (colorLevel == 5)
        {
            return m_colorOrange;
        }
        else if (colorLevel == 4)
        {
            return m_colorPurple;
        }
        else if (colorLevel == 3)
        {
            return m_blue;
        }
        else if (colorLevel == 2)
        {
            return m_green;
        }
        else
        {
            return Color.white;
        }
    }

    public static string GetBelleColorNameByColorLevel(int colorLevel)
    {
        switch (colorLevel)
        {
            case 1:
                return "white";
            case 2:
                return "green";
            case 3:
                return "blue";
            case 4:
                return "purple";
            case 5:
                return "orange";
            default:
                return "white";
        }
    }

    public static string GetBelleDescByColorLevel(int colorLevel)
    {
        if (colorLevel == 5)
        {
            return Utils.GetDicByID(3241);
        }
        else if (colorLevel == 4)
        {
            return Utils.GetDicByID(3240);
        }
        else if (colorLevel == 3)
        {
            return Utils.GetDicByID(3239);
        }
        else if (colorLevel == 2)
        {
            return Utils.GetDicByID(3238);
        }
        else
        {
            return Utils.GetDicByID(3237);
        }
    }

    public static string GetBelleColorPicByColorLevel(int colorLevel)
    {
        if (colorLevel == 5)
        {
            return Utils.GetDicByID(11067);
        }
        else if (colorLevel == 4)
        {
            return Utils.GetDicByID(11066);
        }
        else if (colorLevel == 3)
        {
            return Utils.GetDicByID(11065);
        }
        else if (colorLevel == 2)
        {
            return Utils.GetDicByID(11064);
        }
        else if(colorLevel == 1)
        {
            return Utils.GetDicByID(11063);
        }

        return "";
    }
    // 根据属性字典获取战斗力数值
    public static int GetPowerNum(Dictionary<int, int> attrMap)
    {
        if (null == attrMap)
        {
            return 0;
        }

        float retValue = 0;
        foreach (KeyValuePair<int, int> curPair in attrMap)
        {
            switch (curPair.Key)
            {
                case 0:
                    //生命
                    retValue += curPair.Value * 0.2f;
                    break;
                case 3:
                case 4:
                case 1000:
                    // 攻击
                    retValue += curPair.Value * 2.0f;
                    break;
                case 5:
                case 6:
                case 1001:
                    // 防御
                    retValue += curPair.Value * 2.0f;
                    break;
                case 7:
                    retValue += curPair.Value * 2.5f;
                    // 命中
                    break;
                case 8:
                    retValue += curPair.Value * 3.125f;
                    // 命中
                    break;
                case 9:
                    retValue += curPair.Value * 2.4f;
                    // 暴击
                    break;
                case 10:
                    retValue += curPair.Value * 3.192f;
                    // 暴抗
                    break;
                case 11:
                    retValue += curPair.Value * 8.3f;
                    // 穿透
                    break;
                case 12:
                    retValue += curPair.Value * 8.3f;
                    // 韧性
                    break;
                case 13:
                    retValue += curPair.Value * 6.5f;
                    // 爆伤加成
                    break;
                case 14:
                    retValue += curPair.Value * 6.5f;
                    // 爆伤减免
                    break;
                case 5000:
                    retValue += curPair.Value * 6.5f;
                    // 爆伤减免
                    break;

            }
        }

        return (int)retValue;
    }

    // 距离下次亲密还有多少秒
    public static int GetBelleCloseTimeDiff()
    {
        return BelleData.nextCloseTime - (int)Time.realtimeSinceStartup;
    }

    // 获取美人功能当前通知数字数量
    public static int GetBelleTipCount()
    {

        int retBelleCloseCount = 0;



        if (IsCanCloseFree() 
            || m_belleActiveCount > 0 
            || IsAddNewMatrix()
            || m_belleItemCount > 0
            || m_belleEvoCount > 0)
        {
            retBelleCloseCount = 1;

            if (IsCanCloseFree())
            {
                //Debug.Log("can close ...................................... is true");
            }

            if (m_belleActiveCount > 0)
            {
                //Debug.Log("activeCount is  " + m_belleActiveCount + "                           ----------");
            }

            if (IsAddNewMatrix())
            {
                //Debug.Log("Matrix  is ..............................................true");
            }

            if (m_belleItemCount > 0)
            {
                //Debug.Log("m_belleItemCount  is ..............................................true");
            }

            if (m_belleEvoCount > 0)
            {
                //Debug.Log("m_belleEvoCount =============================================================================================== is true");
            }
            //Debug.Log("BelleTip is  true ---------------------------------------------------------");
        }

        return retBelleCloseCount;
    }

    public static bool IsAddNewMatrix()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPlayer)
        {
            return false;
        }

        int lastMatrixTipLevel = PlayerPreferenceData.BelleMatrixTipLevel;

        //Debug.Log("lastMatrixTipLevel ====          " + lastMatrixTipLevel);
        for (int i = 0, count = TableManager.GetBelleMatrix().Count; i < count; i++)
        {
            Tab_BelleMatrix curTabMatrix = TableManager.GetBelleMatrixByID(i, 0);
            if (null == curTabMatrix)
            {
                continue;
            }
            if (mainPlayer.BaseAttr.Level >= curTabMatrix.OpenLevel && lastMatrixTipLevel < curTabMatrix.OpenLevel)
            {
                // LogModule.DebugLog("Matrix is true                                        ------------------------------");
                return true;
            }
        }

        return false;
    }

    public static bool IsCanCloseFree()
    {
        return (GetBelleCloseTimeDiff() <= 0 && BelleData.dayCloseTime < 3 && BelleData.OwnedBelleMap.Count > 0);
    }

    /// <summary>
    /// 当前可以合成多少个美人
    /// </summary>
    /// <returns></returns>
    public static int GetCanCreateBelleCount()
    {
        int canCreateCount = 0;
        foreach (int bellId in TableManager.GetBelle().Keys)
        {
            if (!OwnedBelleMap.ContainsKey(bellId))
            {
                Tab_Belle curBelle = TableManager.GetBelleByID(bellId, 0);
                if (null != curBelle)
                {
                    //美人合成需要的碎片个数
                    int belleSubItemId = curBelle.BelleItemID;
                    int belleTotalSubCount = curBelle.BelleItemCount;
                    int belleSubItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(belleSubItemId);

                    if (belleSubItemCount > 0 && belleSubItemCount == belleTotalSubCount)
                    {
                        canCreateCount++;
                    }
                }
            }
        }
        return canCreateCount;
    }
    public static int GetActiveMatrixPowerNum()
    {
        foreach (KeyValuePair<int, BelleMatrix> curPair in OwnedMatrixMap)
        {
            if (curPair.Value.isActive)
            {
                curPair.Value.UpdateAttrMap(false);
                return GetPowerNum(curPair.Value.attrMap);
            }
        }
        return 0;
    }

    public static void SetLabelNature(UILabel curLabel, int natureValue)
    {
        if (null == curLabel)
        {
            return;
        }
        string strNature = "";

        switch (natureValue)
        {
            case 1:
                curLabel.color = Color.yellow;
                strNature = "金";
                break;
            case 2:
                curLabel.color = Color.green;
                strNature = "木";
                break;
            case 3:
                curLabel.color = new Color(60.0f / 255.0f, 82.0f / 255.0f, 45.0f / 255.0f, 1);
                strNature = "土";
                break;
            case 4:
                curLabel.color = Color.blue;
                strNature = "水";
                break;
            case 5:
                curLabel.color = Color.red;
                strNature = "火";
                break;
        }

        curLabel.text = strNature;
    }

    public static void UpdateBelleItemTip(int itemId, int itemCount)
    {
        Tab_CommonItem tab_item = TableManager.GetCommonItemByID(itemId, 0);
        if (tab_item == null)
            return;

        //如果是美人碎片
        if (tab_item.ClassID == (int)ItemClass.BELLE)
        {
            foreach (int bellId in TableManager.GetBelle().Keys)
            {
                if (!OwnedBelleMap.ContainsKey(bellId))
                {
                    Tab_Belle curBelle = TableManager.GetBelleByID(bellId, 0);
                    if (null != curBelle)
                    {
                        //美人合成需要的碎片个数
                        int belleSubItemId = curBelle.BelleItemID;

                        //找到对应的美人ID
                        if (belleSubItemId == itemId)
                        {
                            int belleTotalSubCount = curBelle.BelleItemCount;
                            if (belleTotalSubCount <= itemCount)
                            {
                                PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
                                if (null != _playerData && _playerData.BelleConfigData != null)
                                {
                                    string belleItemStr = _playerData.BelleConfigData.BelleItemBits;
                                    if (null != belleItemStr && bellId >= 0 && bellId < belleItemStr.Length && belleItemStr[bellId] != '1')
                                    {
                                                BelleConfig.SetBelleItemBitsByBit(bellId, '1');
                                    }
                                }
                            }
                        }

                    }
                }
            }
            m_belleItemCount = BelleConfig.GetBelleItemCount();
        }
    }

    public static void UpdateBelleEvoCountTip(int itemId, int itemCount)
    {
        Tab_CommonItem tab_item = TableManager.GetCommonItemByID(itemId, 0);
        if (tab_item == null)
            return;

        //如果是美人碎片
        if (tab_item.ClassID == (int)ItemClass.BELLE)
        {
            foreach (int bellId in TableManager.GetBelle().Keys)
            {
                if (OwnedBelleMap.ContainsKey(bellId))
                {
                    Tab_Belle curBelle = TableManager.GetBelleByID(bellId, 0);
                    if (null != curBelle)
                    {
                        Belle curBelleData = null;

                        if (BelleData.OwnedBelleMap.ContainsKey(bellId))
                        {
                            curBelleData = BelleData.OwnedBelleMap[bellId];
                        }
                        if (null == curBelleData)
                        {
                            continue;
                        }

                        
                        int belleTotalSubCount = 0;
                        int belleSubItemId = -1;
                        int belleTotalCoinCount = 0;
                        Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
                        if (null != curTabBelleLevelup && curTabBelleLevelup.getConsumeTypeCount() > 1)
                        {
                            belleTotalSubCount = curTabBelleLevelup.GetConsumeNumbyIndex(0);
                            belleSubItemId = curTabBelleLevelup.GetConsumeSubTypebyIndex(0);
                            belleTotalCoinCount = curTabBelleLevelup.GetConsumeNumbyIndex(1);
                        }

                        int belleSubCoinCount = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();

                        //找到对应的美人ID
                        if (belleSubItemId == itemId)
                        {
                            //这个美人已经达到最大等级了，就不提示了
                            if (curBelleData.IsMaxLevel())
                            {
                                return;
                            }

                            
                                PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
                                if (null != _playerData && _playerData.BelleConfigData != null)
                                {
                                    string belleCanEvoBeits = _playerData.BelleConfigData.BelleCanEvoBeits;
                                    if (null != belleCanEvoBeits && bellId >= 0 && bellId < belleCanEvoBeits.Length && belleCanEvoBeits[bellId] != '1')
                                    {
                                        if (belleTotalSubCount <= itemCount && belleTotalCoinCount <= belleSubCoinCount)
                                        {
                                            BelleConfig.SetBelleEvoCountByBit(bellId, '1');
                                        }
                                        else
                                        {
                                            BelleConfig.SetBelleEvoCountByBit(bellId, '0');
                                        }
                                    }
                                }
                            
                        }

                    }
                }
            }
            m_belleEvoCount = BelleConfig.GetBelleEvoCount();
        }
    }
}

public class RecommondBelleData : IComparer<RecommondBelleData>, IComparable<RecommondBelleData>
{
    public int BelleID;
    public int isMatrix; //上阵是1，没上阵是0
    public int combatValue;
    public int hasRelationship;  //has relationship with the belle that in the matrix! 
    public void CleanUp()
    {
        BelleID = -1;
        isMatrix = -1;
        combatValue = 0;
        hasRelationship = 0;
    }
    public int Compare(RecommondBelleData s1, RecommondBelleData s2)
    {
        if (s1.hasRelationship < s2.hasRelationship)
        {
            return 1;
        }
        else if (s1.hasRelationship > s2.hasRelationship)
        {
            return -1;
        }
        else
        {
            if (s1.isMatrix > s2.isMatrix)
                return 1;
            else
                if (s1.isMatrix < s2.isMatrix)
                    return -1;
                else if (s1.isMatrix == s2.isMatrix)
                {
                    if (s1.combatValue > s2.combatValue)
                    {
                        return -1;
                    }
                    else if (s1.combatValue < s2.combatValue)
                    {
                        return 1;
                    }
                    else if (s1.combatValue == s2.combatValue)
                    {
                        return 0;
                    }
                }
        }

        return 0;
    }

    public int CompareTo(RecommondBelleData s)
    {
        return Compare(this, s);
    }

    public override bool Equals(object obj)
    {
        RecommondBelleData Target = obj as RecommondBelleData;
        if (Target == null)
            return false;
        return this.BelleID == Target.BelleID && this.isMatrix == Target.isMatrix && this.combatValue == Target.combatValue;
    }
}

public class SelectBelleData : IComparer<SelectBelleData>, IComparable<SelectBelleData>
{
    public int belleID;
    public bool isRelationship;
    public int matrixId;
    public int combatValue;

    public bool isInCurMatrix;
    public void CleanUp()
    {
        belleID = -1;
        isRelationship = false;
        matrixId = -1;
        combatValue = -1;
        isInCurMatrix = false;
    }

    public int Compare(SelectBelleData s1, SelectBelleData s2)
    {
        if (!s1.isRelationship && s2.isRelationship)
        {
            return 1;
        }
        else if (s1.isRelationship && !s2.isRelationship)
        {
            return -1;
        }
        else
        {
            if (s1.matrixId > s2.matrixId)
                return 1;
            else
                if (s1.matrixId < s2.matrixId)
                    return -1;
                else if (s1.matrixId == s2.matrixId)
                {
                    if (s1.combatValue > s2.combatValue)
                    {
                        return -1;
                    }
                    else if (s1.combatValue < s2.combatValue)
                    {
                        return 1;
                    }
                    else if (s1.combatValue == s2.combatValue)
                    {
                        return 0;
                    }
                }
        }

        return 0;
    }

    public int CompareTo(SelectBelleData s)
    {
        return Compare(this, s);
    }
}
