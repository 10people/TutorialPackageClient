/************************************************************************
* 特定时间充值返利 
* mwh
************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Module.Log;
using System;

public enum SPPAYREBATE
{
    UNIT_MAX = 10,	         
}

public enum SPRANKREWARD
{
    UNIT_MAX = 10,	 
}

public struct SpecialTimePayRebateData
{
    /// <summary>
    /// 消费返利是否开启
    /// </summary>
    private bool m_bSpecialTimePayRebateOpen;
    public bool SpecialTimePayRebateOpen
    {
        get { return m_bSpecialTimePayRebateOpen; }
        set { m_bSpecialTimePayRebateOpen = value; }
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

//     /// <summary>
//     /// 消费返利消费类型
//     /// </summary>
//     private int m_nCostType;
//     public int CostType
//     {
//         get { return m_nCostType; }
//         set { m_nCostType = value; }
//     }

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
//         if (m_nCostType == (int)COSTTYPE.COIN)
//         {
//             return StrDictionary.GetClientDictionaryString("#{5037}");
//         }
//         else if (m_nCostType == (int)COSTTYPE.YUANBAO)
//         {
        return StrDictionary.GetClientDictionaryString("#{5376}");
//         }
//         else if (m_nCostType == (int)COSTTYPE.YUANBAO_BIND)
//         {
//             return StrDictionary.GetClientDictionaryString("#{5036}");
//         }
//         else if (m_nCostType == (int)COSTTYPE.YUANBAO_ALL)
//         {
//             return StrDictionary.GetClientDictionaryString("#{5035}");
//         }
//         return "";
    }

    public string GetCostDescString()
    {
//         if (m_nCostType == (int)COSTTYPE.COIN)
//         {
//             return StrDictionary.GetClientDictionaryString("#{5032}");
//         }
//         else if (m_nCostType == (int)COSTTYPE.YUANBAO)
//         {
//             return StrDictionary.GetClientDictionaryString("#{5030}");
//         }
//         else if (m_nCostType == (int)COSTTYPE.YUANBAO_BIND)
//         {
            return StrDictionary.GetClientDictionaryString("#{5031}");
//         }
//         else if (m_nCostType == (int)COSTTYPE.YUANBAO_ALL)
//         {
//             return StrDictionary.GetClientDictionaryString("#{5033}");
//         }
//         return "";
    }

    public string GetStartEndTineString()
    {
        int startYear = m_nStartTime / 10000;
        int startMonth = (m_nStartTime % 10000) / 100;
        int startDay = m_nStartTime % 100;
//        int endYear = m_nEndTime / 10000;
        int endMonth = (m_nEndTime % 10000) / 100;
        int endDay = m_nEndTime % 100;
        return StrDictionary.GetClientDictionaryString("#{5029}", startMonth, startDay, endMonth, endDay);
    }

    public void CleanUp()
    {
        m_bSpecialTimePayRebateOpen = false;
        m_nStartTime = 0;
        m_nEndTime = 0;
       // m_nCostType = 0;
        m_nRebateLimit = new int[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_nRebateLimit[i] = -1;
        }
        m_nRebateId1 = new int[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_nRebateId1[i] = -1;
        }
        m_nRebateId2 = new int[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_nRebateId2[i] = -1;
        }
        m_nRebateId3 = new int[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_nRebateId3[i] = -1;
        }
        m_nRebateNum1 = new int[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_nRebateNum1[i] = 0;
        }
        m_nRebateNum2 = new int[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_nRebateNum2[i] = 0;
        }
        m_nRebateNum3 = new int[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_nRebateNum3[i] = 0;
        }
        m_bRebateFlag = new bool[(int)SPPAYREBATE.UNIT_MAX];
        for (int i = 0; i < (int)SPPAYREBATE.UNIT_MAX; i++)
        {
            m_bRebateFlag[i] = false;
        }

        m_RankPosMin = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankPosMin[i] = 0;
        }

        m_RankPosMax = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankPosMax[i] = 0;
        }

        m_RankRewardId1 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardId1[i] = 0;
        }

        m_RankRewardId2 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardId2[i] = 0;
        }

        m_RankRewardId3 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardId3[i] = 0;
        }

        m_RankRewardId4 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardId4[i] = 0;
        }

        m_RankRewardId5 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardId5[i] = 0;
        }

        m_RankRewardId6 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardId6[i] = 0;
        }

        m_RankRewardNum1 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardNum1[i] = 0;
        }

        m_RankRewardNum2 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardNum2[i] = 0;
        }

        m_RankRewardNum3 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardNum3[i] = 0;
        }

        m_RankRewardNum4 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardNum4[i] = 0;
        }
        m_RankRewardNum5 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardNum5[i] = 0;
        }
        m_RankRewardNum6 = new int[(int)SPRANKREWARD.UNIT_MAX];
        for (int i = 0; i < (int)SPRANKREWARD.UNIT_MAX; i++)
        {
            m_RankRewardNum6[i] = 0;
        }
    }

    public void HandlePacket(GC_UPDATE_SPECIALTIME_PAY_REBATE_INFO packet)
    {
        m_bSpecialTimePayRebateOpen = (packet.Isopen==1)?true:false;
        m_nStartTime = packet.Start;
        m_nEndTime = packet.End;
        //m_nCostType = packet.Costtype;
        for (int index = 0; index < packet.paylimitCount && index <  (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_nRebateLimit[index] = packet.GetPaylimit(index);
        }
        for (int index = 0; index < packet.id1Count && index < (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_nRebateId1[index] = packet.GetId1(index);
        }
        for (int index = 0; index < packet.id2Count && index < (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_nRebateId2[index] = packet.GetId2(index);
        }
        for (int index = 0; index < packet.id3Count && index < (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_nRebateId3[index] = packet.GetId3(index);
        }
        for (int index = 0; index < packet.num1Count && index < (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_nRebateNum1[index] = packet.GetNum1(index);
        }
        for (int index = 0; index < packet.num2Count && index < (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_nRebateNum2[index] = packet.GetNum2(index);
        }
        for (int index = 0; index < packet.num3Count && index < (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_nRebateNum3[index] = packet.GetNum3(index);
        }
        for (int index = 0; index < packet.flagsCount && index < (int)SPPAYREBATE.UNIT_MAX; index++)
        {
            m_bRebateFlag[index] = (packet.GetFlags(index) == 1) ? true : false;
        }

        if (ChargeActivityLogic.Instance())
        {
            ChargeActivityLogic.Instance().UpdateCurTab();
        }
    }

#region 排行榜奖励

    private int[] m_RankPosMin;
    public int[] RankPosMin
    {
        get { return m_RankPosMin; }
        set { m_RankPosMin = value; }
    }

    private int[] m_RankPosMax;
    public int[] RankPosMax
    {
        get { return m_RankPosMax; }
        set { m_RankPosMax = value; }
    }

    private int[] m_RankRewardId1;
    public int[] RankRewardId1
    {
        get { return m_RankRewardId1; }
        set { m_RankRewardId1 = value; }
    }

    private int[] m_RankRewardId2;
    public int[] RankRewardId2
    {
        get { return m_RankRewardId2; }
        set { m_RankRewardId2 = value; }
    }

    private int[] m_RankRewardId3;
    public int[] RankRewardId3
    {
        get { return m_RankRewardId3; }
        set { m_RankRewardId3 = value; }
    }

    private int[] m_RankRewardId4;
    public int[] RankRewardId4
    {
        get { return m_RankRewardId4; }
        set { m_RankRewardId4 = value; }
    }

    private int[] m_RankRewardId5;
    public int[] RankRewardId5
    {
        get { return m_RankRewardId5; }
        set { m_RankRewardId5 = value; }
    }

    private int[] m_RankRewardId6;
    public int[] RankRewardId6
    {
        get { return m_RankRewardId6; }
        set { m_RankRewardId6 = value; }
    }

    private int[] m_RankRewardNum1;
    public int[] RankRewardNum1
    {
        get { return m_RankRewardNum1; }
        set { m_RankRewardNum1 = value; }
    }

    private int[] m_RankRewardNum2;
    public int[] RankRewardNum2
    {
        get { return m_RankRewardNum2; }
        set { m_RankRewardNum2 = value; }
    }

    private int[] m_RankRewardNum3;
    public int[] RankRewardNum3
    {
        get { return m_RankRewardNum3; }
        set { m_RankRewardNum3 = value; }
    }

    private int[] m_RankRewardNum4;
    public int[] RankRewardNum4
    {
        get { return m_RankRewardNum4; }
        set { m_RankRewardNum4 = value; }
    }

    private int[] m_RankRewardNum5;
    public int[] RankRewardNum5
    {
        get { return m_RankRewardNum5; }
        set { m_RankRewardNum5 = value; }
    }

    private int[] m_RankRewardNum6;
    public int[] RankRewardNum6
    {
        get { return m_RankRewardNum6; }
        set { m_RankRewardNum6 = value; }
    }

    public void HandlePacket(GC_SPECIALTIME_PAY_REBATE_RANK_REWARD_INFO packet)
    {
        for (int index = 0; index < packet.posMinCount && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankPosMin[index] = packet.GetPosMin(index);
        }

        for (int index = 0; index < packet.posMaxCount && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankPosMax[index] = packet.GetPosMax(index);
        }

        for (int index = 0; index < packet.id1Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankRewardId1[index] = packet.GetId1(index);
        }

        for (int index = 0; index < packet.id2Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankRewardId2[index] = packet.GetId2(index);
        }

        for (int index = 0; index < packet.id3Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankRewardId3[index] = packet.GetId3(index);
        }

        for (int index = 0; index < packet.id4Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankRewardId4[index] = packet.GetId4(index);
        }

        for (int index = 0; index < packet.id5Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankRewardId5[index] = packet.GetId5(index);
        }

        for (int index = 0; index < packet.id6Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankRewardId6[index] = packet.GetId6(index);
        }

        for (int index = 0; index < packet.num1Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            m_RankRewardNum1[index] = packet.GetNum1(index);
        }

        for (int index = 0; index < packet.num2Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            RankRewardNum2[index] = packet.GetNum2(index);
        }

        for (int index = 0; index < packet.num3Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            RankRewardNum3[index] = packet.GetNum3(index);
        }

        for (int index = 0; index < packet.num4Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            RankRewardNum4[index] = packet.GetNum4(index);
        }

        for (int index = 0; index < packet.num5Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            RankRewardNum5[index] = packet.GetNum5(index);
        }

        for (int index = 0; index < packet.num6Count && index < (int)SPRANKREWARD.UNIT_MAX; index++)
        {
            RankRewardNum6[index] = packet.GetNum6(index);
        }

        if (ChargeActivityLogic.Instance())
        {
            ChargeActivityLogic.Instance().UpdateCurTab();
        }
    }
#endregion

}