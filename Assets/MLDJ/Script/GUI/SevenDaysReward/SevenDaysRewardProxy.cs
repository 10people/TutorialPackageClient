using UnityEngine;
using System;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
/// <summary>
/// 七日狂欢
/// by weitong
/// </summary>
public class SevenDaysRewardProxy
{
    List<SevenDaysRewardVO> rewardDataList = new List<SevenDaysRewardVO>(7);
    Action reqCallback = null;

    /// <summary>
    /// 获得当前天数
    /// </summary>
    /// <returns></returns>
    public int GetCurDays()
    {
        return rewardDataList.Count;
    }

    public SevenDaysRewardVO GetSevenDaysRewardByDay(int dayIndex)
    {
        if (dayIndex < rewardDataList.Count)
        {
            return rewardDataList[dayIndex];
        }
        else
        {
            return null;
        }
    }

    public void SetData(GC_SYNCALLCARNIVALGOAL data)
    {
        int dayIndex = 0;
        int rewardIndex = 0;
        for (int i = 0; i < data.GoalflagsCount; i++)
        {
            dayIndex = i / 21;
            rewardIndex = i - dayIndex * 21;
            SevenDaysRewardVO vo = null;
            if (dayIndex >= rewardDataList.Count)
            {
                vo = new SevenDaysRewardVO();
                vo.dayIndex = dayIndex;
                List<Tab_SevenDaysReward> dataList = GetTabSevenDaysRewardByDay(vo.dayIndex);
                for (int j = 0; j < dataList.Count; j++ )
                {
                    if (j == 0)
                    {
                        vo.dayTarget = dataList[j];
                    }
                    else
                    {
                        vo.data[j - 1] = dataList[j];
                    }
                }
                rewardDataList.Add(vo);
            }
            else
            {
                vo = rewardDataList[dayIndex];
            }
            // rewardIndex == 0 代表是每日目标
            if (rewardIndex == 0)
            {
                if (data.GoalflagsList[i] == -1)
                {
                    // claimed day reward
                    vo.dayTargetProgress = -1;
                }
                else
                {
                    // need to calculate
                    vo.dayTargetProgress = 0;
                }
            }
            else
            {
                // rewardIndex > 0 代表是每个任务
                if (vo.data[rewardIndex - 1] != null)
                {
                    vo.curProgress[rewardIndex - 1] = data.GoalflagsList[i];
                    if (vo.curProgress[rewardIndex - 1] == -1 && vo.dayTargetProgress != -1)
                    {
                        vo.dayTargetProgress += 1;
                    }
                }
            }
        }
        if (reqCallback != null)
        {
            reqCallback();
            reqCallback = null;
        }
    }

    public void UpdateData(GC_SYNCSINGLECARNIVALGOAL data)
    {
        if (data.NGoal == 0) // 每日目标完成
        {
            rewardDataList[data.NDay].dayTargetProgress = data.NFlag;
        }
        else
        {
            // 单个目标完成
            rewardDataList[data.NDay].curProgress[data.NGoal - 1] = data.NFlag;
            if (data.NFlag == -1 && rewardDataList[data.NDay].dayTargetProgress != -1)
            {
                rewardDataList[data.NDay].dayTargetProgress += 1;
            }
        }
        if (SevenDaysReward.Instance() != null)
        {
            SevenDaysReward.Instance().UpdateDay(data.NDay);
        }
    }

    public static List<Tab_SevenDaysReward> GetTabSevenDaysRewardByDay(int day)
    {
        day += 1;
        List<Tab_SevenDaysReward> ret = new List<Tab_SevenDaysReward>();
        var dataDic = TableManager.GetSevenDaysReward();
        foreach (var data in dataDic.Values)
        {
            if (data[0].Day == day)
            {
                ret.Add(data[0]);
            }
        }
        return ret;
    }

#region requests
    /// <summary>
    /// 请求数据
    /// </summary>
    /// <param name="callback"></param>
    public void ReqData(Action callback = null)
    {
        reqCallback = callback;
        CG_REQUESTCARNIVALGOAL_DATA packet = (CG_REQUESTCARNIVALGOAL_DATA)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQUESTCARNIVALGOAL_DATA);
        packet.NDay = 0;// 该参数不处理
        packet.SendPacket();
    }

    /// <summary>
    /// 领取奖励
    /// </summary>
    /// <param name="dayIndex"></param>
    /// <param name="rewardIndex"></param>
    public void ClaimReward(int dayIndex, int rewardIndex)
    {
        CG_REQUESTCARNIVALAWARD packet = (CG_REQUESTCARNIVALAWARD)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQUESTCARNIVALAWARD);
        packet.NDay = dayIndex;
        packet.NGoal = rewardIndex;
        packet.SendPacket();
    }

#endregion

}

public class SevenDaysRewardVO
{
    public int dayIndex;
    public Tab_SevenDaysReward[] data;
    public int[] curProgress;
    public int dayTargetProgress;
    public Tab_SevenDaysReward dayTarget;

    public SevenDaysRewardVO()
    {
        data = new Tab_SevenDaysReward[20];
        curProgress = new int[20];
    }
}