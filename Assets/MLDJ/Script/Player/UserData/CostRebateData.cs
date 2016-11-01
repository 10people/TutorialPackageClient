/********************************************************************
	filename:	CostRebateData.cs
	date:		2014-12-12  10-36
	author:		tangyi
	purpose:	消费返利
*********************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Module.Log;
using System;

public enum COSTREBATE
{
    UNIT_MAX = 10,	         
}

public enum COSTTYPE
{
    COIN = 0,           //金币
    YUANBAO = 1,        //元宝
    YUANBAO_BIND = 2,   //绑定元宝
    YUANBAO_ALL =3,     //元宝 + 绑定元宝
}

public struct CostRebateData
{
    /// <summary>
    /// 消费返利是否开启
    /// </summary>
    private bool m_bCostRebateOpen;
    public bool CostRebateOpen
    {
        get { return m_bCostRebateOpen; }
        set { m_bCostRebateOpen = value; }
    }

    /// <summary>
    /// 消费返利开始时间
    /// </summary>
    private int m_nStartTime;
    public int StartTime
    {
        get { return m_nStartTime; }
        set { m_nStartTime = value; }
    }

    /// <summary>
    /// 消费返利结束时间
    /// </summary>
    private int m_nEndTime;
    public int EndTime
    {
        get { return m_nEndTime; }
        set { m_nEndTime = value; }
    }

    /// <summary>
    /// 消费返利消费类型
    /// </summary>
    private int m_nCostType;
    public int CostType
    {
        get { return m_nCostType; }
        set { m_nCostType = value; }
    }
//天龙的返利存储服务器推送数据，为适合Cabal的界面,暂不使用
    /// <summary>
    /// 消费返利消费阈值
    /// </summary>
    private int[] m_nRebateLimit;
    public int[] RebateLimit
    {
        get { return m_nRebateLimit; }
        set { m_nRebateLimit = value; }
    }

    /// <summary>
    /// 返利ID1
    /// </summary>
    private int[] m_nRebateId1;
    public int[] RebateId1
    {
        get { return m_nRebateId1; }
        set { m_nRebateId1 = value; }
    }

    /// <summary>
    /// 返利ID2
    /// </summary>
    private int[] m_nRebateId2;
    public int[] RebateId2
    {
        get { return m_nRebateId2; }
        set { m_nRebateId2 = value; }
    }

    /// <summary>
    /// 返利ID3
    /// </summary>
    private int[] m_nRebateId3;
    public int[] RebateId3
    {
        get { return m_nRebateId3; }
        set { m_nRebateId3 = value; }
    }

    /// <summary>
    /// 返利数量1
    /// </summary>
    private int[] m_nRebateNum1;
    public int[] RebateNum1
    {
        get { return m_nRebateNum1; }
        set { m_nRebateNum1 = value; }
    }

    /// <summary>
    /// 返利数量2
    /// </summary>
    private int[] m_nRebateNum2;
    public int[] RebateNum2
    {
        get { return m_nRebateNum2; }
        set { m_nRebateNum2 = value; }
    }

    /// <summary>
    /// 返利数量3
    /// </summary>
    private int[] m_nRebateNum3;
    public int[] RebateNum3
    {
        get { return m_nRebateNum3; }
        set { m_nRebateNum3 = value; }
    }

    public List<Tab_LevelAwardSimulate> CostRebateDataList
    {
      get { return m_CostRebateDataList; }
    }
    private List<Tab_LevelAwardSimulate> m_CostRebateDataList;
    /// <summary>
    /// 返利标记
    /// </summary>
    private bool[] m_bRebateFlag;
    public bool[] RebateFlag
    {
        get { return m_bRebateFlag; }
        set { m_bRebateFlag = value; }
    }

    public string GetCostTypeString()
    {
        if (m_nCostType == (int)COSTTYPE.COIN)
        {
            return StrDictionary.GetClientDictionaryString("#{5037}");
        }
        else if (m_nCostType == (int)COSTTYPE.YUANBAO)
        {
            return StrDictionary.GetClientDictionaryString("#{5038}");
        }
        else if (m_nCostType == (int)COSTTYPE.YUANBAO_BIND)
        {
            return StrDictionary.GetClientDictionaryString("#{5036}");
        }
        else if (m_nCostType == (int)COSTTYPE.YUANBAO_ALL)
        {
            return StrDictionary.GetClientDictionaryString("#{5035}");
        }
        return "";
    }

    public string GetCostDescString()
    {
        if (m_nCostType == (int)COSTTYPE.COIN)
        {
            return StrDictionary.GetClientDictionaryString("#{5032}");
        }
        else if (m_nCostType == (int)COSTTYPE.YUANBAO)
        {
            return StrDictionary.GetClientDictionaryString("#{5030}");
        }
        else if (m_nCostType == (int)COSTTYPE.YUANBAO_BIND)
        {
            return StrDictionary.GetClientDictionaryString("#{5031}");
        }
        else if (m_nCostType == (int)COSTTYPE.YUANBAO_ALL)
        {
            return StrDictionary.GetClientDictionaryString("#{5033}");
        }
        return "";
    }

    public string GetStartEndTineString()
    {
//        int startYear = m_nStartTime / 10000;
        int startMonth = (m_nStartTime % 10000) / 100;
        int startDay = m_nStartTime % 100;
//        int endYear = m_nEndTime / 10000;
        int endMonth = (m_nEndTime % 10000) / 100;
        int endDay = m_nEndTime % 100;
        return StrDictionary.GetClientDictionaryString("#{5029}", startMonth, startDay, endMonth, endDay);
    }

    public void CleanUp()
    {
        m_bCostRebateOpen = false;
        m_nStartTime = 0;
        m_nEndTime = 0;
        m_nCostType = 0;
        if (CostRebateDataList != null) {
          CostRebateDataList.Clear();
        }
      List<int> alreadyget;
      if (GameManager.gameManager.ActivityRewardGetDic.TryGetValue(ActivityRewardType.Cost, out alreadyget)) {
        alreadyget.Clear();
      }
/*天龙的返利存储服务器推送数据，先注释掉，为适合Cabal的界面
        m_nRebateLimit = new int[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_nRebateLimit[i] = -1;
        }
        m_nRebateId1 = new int[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_nRebateId1[i] = -1;
        }
        m_nRebateId2 = new int[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_nRebateId2[i] = -1;
        }
        m_nRebateId3 = new int[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_nRebateId3[i] = -1;
        }
        m_nRebateNum1 = new int[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_nRebateNum1[i] = 0;
        }
        m_nRebateNum2 = new int[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_nRebateNum2[i] = 0;
        }
        m_nRebateNum3 = new int[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_nRebateNum3[i] = 0;
        }
 */
        m_bRebateFlag = new bool[(int)COSTREBATE.UNIT_MAX];
        for (int i = 0; i < (int)COSTREBATE.UNIT_MAX; i++)
        {
            m_bRebateFlag[i] = false;
        }
    }

    public void HandlePacket(GC_UPDATE_COST_REBATE_INFO packet)
    {
        m_bCostRebateOpen = (packet.Isopen==1)?true:false;
        m_nStartTime = packet.Start;
        m_nEndTime = packet.End;
        m_nCostType = packet.Costtype;
        if (m_CostRebateDataList == null) {
          m_CostRebateDataList = new List<Tab_LevelAwardSimulate>();
        }
        int count = packet.costlimitCount;
        for (int index = 0; index < count; ++index) {
          if (m_CostRebateDataList.Count > index) {
            if (m_CostRebateDataList[index] != null) {
              m_CostRebateDataList[index].SetInfo(
              index, (int)ActivityRewardType.Cost, 0, 0, packet.GetCostlimit(index),
              new int[] { packet.GetId1(index), packet.GetId2(index), packet.GetId3(index) },
              new int[] { packet.GetNum1(index), packet.GetNum2(index), packet.GetNum3(index), }
              );
            } else {
              Tab_LevelAwardSimulate lap = new Tab_LevelAwardSimulate(
              index, (int)ActivityRewardType.Cost, 0, 0, packet.GetCostlimit(index),
              new int[] { packet.GetId1(index), packet.GetId2(index), packet.GetId3(index) },
              new int[] { packet.GetNum1(index), packet.GetNum2(index), packet.GetNum3(index), }
              );
              m_CostRebateDataList[index] = lap;
            }
          } else {
            Tab_LevelAwardSimulate lap = new Tab_LevelAwardSimulate(
              index, (int)ActivityRewardType.Cost, 0, 0, packet.GetCostlimit(index),
              new int[] { packet.GetId1(index), packet.GetId2(index), packet.GetId3(index) },
              new int[] { packet.GetNum1(index), packet.GetNum2(index), packet.GetNum3(index), }
              );

            m_CostRebateDataList.Add(lap);
          }
        }
        if (m_CostRebateDataList.Count > count) {
          m_CostRebateDataList.RemoveRange(count, m_CostRebateDataList.Count - count);
        }
          /*天龙的返利存储服务器推送数据，先注释掉，为适合Cabal的界面
                  for (int index = 0; index < packet.costlimitCount; index++)
                  {
                      m_nRebateLimit[index] = packet.GetCostlimit(index);
                  }
                  for (int index = 0; index < packet.id1Count; index++)
                  {
                      m_nRebateId1[index] = packet.GetId1(index);
                  }
                  for (int index = 0; index < packet.id2Count; index++)
                  {
                      m_nRebateId2[index] = packet.GetId2(index);
                  }
                  for (int index = 0; index < packet.id3Count; index++)
                  {
                      m_nRebateId3[index] = packet.GetId3(index);
                  }
                  for (int index = 0; index < packet.num1Count; index++)
                  {
                      m_nRebateNum1[index] = packet.GetNum1(index);
                  }
                  for (int index = 0; index < packet.num2Count; index++)
                  {
                      m_nRebateNum2[index] = packet.GetNum2(index);
                  }
                  for (int index = 0; index < packet.num3Count; index++)
                  {
                      m_nRebateNum3[index] = packet.GetNum3(index);
                  }
           */
//           for (int index = 0; index < packet.flagsCount; index++) {
//             m_bRebateFlag[index] = (packet.GetFlags(index) == 1) ? true : false;
//           }
          List<int> alreadyget;
          if (GameManager.gameManager.ActivityRewardGetDic.TryGetValue(ActivityRewardType.Cost, out alreadyget)) {
            alreadyget.Clear();
            alreadyget.AddRange(packet.flagsList);
          } else {
            GameManager.gameManager.ActivityRewardGetDic.Add(ActivityRewardType.Cost, new List<int>(packet.flagsList));
          }
//         if (ChargeActivityLogic.Instance())
//         {
//             ChargeActivityLogic.Instance().UpdateCurTab();
//         }
        if (ActivityRewardsController.Instance() != null) {
          ActivityRewardsController.Instance().RefreshCostRebate();
        }
    }
}