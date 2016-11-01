using UnityEngine;
using System.Collections;
using Games.LogicObj;
using GCGame;
using System;

public class GlobalData 
{
    public static int ServerAnsiTime = 0;       // 服务器同步的时间
    public static DateTime CurerntLocalDateTime; //客户端时间(依赖服务器同步时间)
    public static bool IsOpenConsumeRank = true; // 是否开启消费排行榜
    public static bool IsOpenChristmas = false; // 是否开启圣诞节活动

    public static bool IsOpenChongZhiRank = false;
    public static int ChongZhiStartTime = 0;
    public static int ChongZhiEndTime = 0;

    public static bool IsOpenSpChongZhiRank = false;
    public static int SpChongZhiStartTime = 0;
    public static int SpChongZhiEndTime = 0;

    public static int ChristmasStartTime = 0;
    public static int ChristmasEndTime = 0;

    public static bool IsOpenVillain = false;
    public static int VillainStartTimeOne = 0;
    public static int VillainEndTimeOne = 0;

    public static int VillainStartTimeTwo = 0;
    public static int VillainEndTimeTwo = 0;

	public static int LoverFlowerStartTime = 0;
	public static int LoverFlowerEndTime = 0;

	public static int LoverThingStartTime = 0;
	public static int LoverThingEndTime = 0;

    public static bool IsOpenHongBao = false;
    public static int HongBaoStartTime = 0; // 1502010000 年月日时分
    public static int HongBaoEndTime = 0;
    public static int HongBaoRankEndTime = 0;

	public static bool IsOpenNianShou = false;
	public static int NianShouStartTimeOne = 0;
	public static int NianShouEndTimeOne = 0;
	
	public static int NianShouStartTimeTwo = 0;
	public static int NianShouEndTimeTwo = 0;

    public static bool IsOpenWuLinFlag = false;
    public static int WuLinOpenWeek1 = 0;
    public static int WuLinOpenTime1 = 0;
    public static int WuLinCloseTime1 = 0;
    public static int WuLinOpenWeek2 = 0;
    public static int WuLinOpenTime2 = 0;
    public static int WuLinCloseTime2 = 0;

    public static bool IsOpenHeroReturn = false;
    public static int HeroReturnOpenTime = 0;
    public static int HeroReturnCloseTime = 0;

    public static bool IsOpenLoudSpeakerRankFlag = false;
    public static bool IsOpenCharmRankFlag = false;

    public static bool IsOpenSevenDaysRewardFlag = false;
    public static bool IsOpenNewServerAwardFlag = false;
    public static bool IsOpenContinueLoginAwardFlag = false;

    public static int EnterAutoCombatTime = 8000; //挂机空闲时，自动进入战斗的时间（以毫秒为单位）	

    // 是否开启聚宝盆
    public static bool IsOpenPrecious()
    {
        if(null == GameManager.gameManager)
        {
            return false;
        }
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return false;
        }

        DateTime curTime = Utils.GetServerDateTime();
        if (curTime.Hour >= 20 && curTime.Hour < 22)
        {
            return true;
        }

        return false;
    }

    public static bool IsOpenWar()
    {
        if (null == GameManager.gameManager)
        {
            return false;
        }
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return false;
        }

        DateTime curTime = Utils.GetServerDateTime();

        if (curTime.DayOfWeek == DayOfWeek.Wednesday || curTime.DayOfWeek == DayOfWeek.Thursday ||
            curTime.DayOfWeek == DayOfWeek.Saturday || curTime.DayOfWeek == DayOfWeek.Sunday)
        {
            if (curTime.Hour == 21)
            {
                return true;
            }
        }

        return false;
    }

    public static bool IsChristmasOpen()
    {
        if (!IsOpenChristmas)
        {
            return false;
        }
        DateTime curTime = Utils.GetServerDateTime();

        DateTime startTime = new DateTime(1970, 1, 1, 0, 0, 0);
        //开始时间
        DateTime BeginTime = new DateTime(startTime.Ticks + (long)GlobalData.ChristmasStartTime * 10000000L, DateTimeKind.Unspecified);
        BeginTime = BeginTime.ToLocalTime();
        //结束时间
        DateTime EndTime = new DateTime(startTime.Ticks + (long)GlobalData.ChristmasEndTime * 10000000L, DateTimeKind.Unspecified);
        EndTime = EndTime.ToLocalTime();

        if (curTime < BeginTime || curTime > EndTime)
        {
            return false;
        }
        return true;
    }

    public static bool IsHongBaoOpen()
    {
        if (!IsOpenHongBao)
        {
            return false;
        }
        // 时间格式：1412161721--2014.12.16.17.21
        DateTime curTime = Utils.GetServerDateTime();
        int nDwordTime = curTime.Minute + curTime.Hour * 100 + curTime.Day * 10000 + curTime.Month * 1000000 + (curTime.Year % 100) * 100000000;
        if (nDwordTime < HongBaoStartTime || nDwordTime > HongBaoEndTime)
        {
            return false;
        }

        return true;
    }
    public static bool IsHongBaoRankOpen()
    {
        if (!IsOpenHongBao)
        {
            return false;
        }
        // 时间格式：1412161721--2014.12.16.17.21
        DateTime curTime = Utils.GetServerDateTime();
        int nDwordTime = curTime.Minute + curTime.Hour * 100 + curTime.Day * 10000 + curTime.Month * 1000000 + (curTime.Year % 100) * 100000000;
        if (nDwordTime < HongBaoStartTime || nDwordTime > HongBaoRankEndTime) // 排行榜多显示 24小时
        {
            return false;
        }

        return true;
    }
    public static bool IsVillainOpen()
    {
        if (!IsOpenVillain)
        {
            return false;
        }
        DateTime curTime = Utils.GetServerDateTime();

        DateTime BeginTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainStartTimeOne % 10000) / 100, GlobalData.VillainStartTimeOne % 100, 0);
       
        //结束时间
        DateTime EndTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainEndTimeOne % 10000) / 100, GlobalData.VillainEndTimeOne % 100, 0);
        

        DateTime BeginTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainStartTimeTwo % 10000) / 100, GlobalData.VillainStartTimeTwo % 100, 0);
        
        //结束时间
        DateTime EndTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainEndTimeTwo % 10000) / 100, GlobalData.VillainEndTimeTwo % 100, 0);
        

        if ((curTime >= BeginTimeOne && curTime <= EndTimeOne) || (curTime >= BeginTimeTwo && curTime <= EndTimeTwo))
        {
            return true;
        }
        return false;
    }

	public static bool IsNianShouOpen()
	{
		// 日期范围内UI都显示

		return IsOpenNianShou;
	}

    public static bool IsWuLinOpen()
    {
        if (!IsOpenWuLinFlag)
        {
            return false;
        }

        DateTime curTime = Utils.GetServerDateTime();
        if ((int)curTime.DayOfWeek == WuLinOpenWeek1)
        {
            DateTime BeginTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinOpenTime1 % 10000) / 100, GlobalData.WuLinOpenTime1 % 100, 0);
          
            //结束时间
            DateTime EndTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinCloseTime1 % 10000) / 100, GlobalData.WuLinCloseTime1 % 100, 0); 
            if (curTime >= BeginTimeOne && curTime <= EndTimeOne)
            {
                return true;
            }
        }

        if ((int)curTime.DayOfWeek == WuLinOpenWeek2)
        {
            DateTime BeginTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinOpenTime2 % 10000) / 100, GlobalData.WuLinOpenTime2 % 100, 0);
           
            //结束时间
            DateTime EndTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.WuLinCloseTime2 % 10000) / 100, GlobalData.WuLinCloseTime2 % 100, 0);
            if (curTime >= BeginTimeTwo && curTime <= EndTimeTwo)
            {
                return true;
            }
        }

        return false;
    }

    public static bool IsHeroReturnOpen()
    {
        if (false == IsOpenHeroReturn)
        {
            return false;
        }

        if (HeroReturnOpenTime <= 0 || HeroReturnCloseTime <= 0)
        {
            return false;
        }

        DateTime OpenDate = new DateTime(
            HeroReturnOpenTime / 100000000 % 100 + 2000,
            HeroReturnOpenTime / 1000000 % 100,
            HeroReturnOpenTime / 10000 % 100,
            HeroReturnOpenTime / 100 % 100,
            HeroReturnOpenTime / 1 % 100,
            0);
        DateTime CloseDate = new DateTime(
            HeroReturnCloseTime / 100000000 % 100 + 2000,
            HeroReturnCloseTime / 1000000 % 100,
            HeroReturnCloseTime / 10000 % 100,
            HeroReturnCloseTime / 100 % 100,
            HeroReturnCloseTime / 1 % 100,
            0);

        return OpenDate <= Utils.GetServerDateTime() && Utils.GetServerDateTime() < CloseDate;
    }
}
