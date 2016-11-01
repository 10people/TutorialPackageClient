using UnityEngine;
using System.Collections;
using System;
using GCGame;

namespace Games.MonthMultiple
{
    public class GameMonthMultiple
    {
        private int m_BeginTime;
        public int BeginTime
        {
            get { return m_BeginTime; }
            set { m_BeginTime = value; }
        }

        private short[] m_MonthMultiple_WildSceneDrop = new short[7];
        public short[] MonthMultiple_WildSceneDrop
        {
            get { return m_MonthMultiple_WildSceneDrop; }
            set { m_MonthMultiple_WildSceneDrop = value; }
        }

        private short[] m_MonthMultiple_WildSceneExp = new short[7];
        public short[] MonthMultiple_WildSceneExp
        {
            get { return m_MonthMultiple_WildSceneExp; }
            set { m_MonthMultiple_WildSceneExp = value; }
        }

        private short[] m_MonthMultiple_JuXianZhuangDrop_Solo = new short[7];
        public short[] MonthMultiple_JuXianZhuangDrop_Solo
        {
            get { return m_MonthMultiple_JuXianZhuangDrop_Solo; }
            set { m_MonthMultiple_JuXianZhuangDrop_Solo = value; }
        }

        private short[] m_MonthMultiple_JuXianZhuangDrop_Team = new short[7];
        public short[] MonthMultiple_JuXianZhuangDrop_Team
        {
            get { return m_MonthMultiple_JuXianZhuangDrop_Team; }
            set { m_MonthMultiple_JuXianZhuangDrop_Team = value; }
        }

        private short[] m_MonthMultiple_NuHaiChuJianDrop_Solo = new short[7];
        public short[] MonthMultiple_NuHaiChuJianDrop_Solo
        {
            get { return m_MonthMultiple_NuHaiChuJianDrop_Solo; }
            set { m_MonthMultiple_NuHaiChuJianDrop_Solo = value; }
        }

        private short[] m_MonthMultiple_YanZiWuDrop_Solo = new short[7];
        public short[] MonthMultiple_YanZiWuDrop_Solo
        {
            get { return m_MonthMultiple_YanZiWuDrop_Solo; }
            set { m_MonthMultiple_YanZiWuDrop_Solo = value; }
        }

        private short[] m_MonthMultiple_YanZiWuDrop_Team = new short[7];
        public short[] MonthMultiple_YanZiWuDrop_Team
        {
            get { return m_MonthMultiple_YanZiWuDrop_Team; }
            set { m_MonthMultiple_YanZiWuDrop_Team = value; }
        }

        private short[] m_MonthMultiple_ZhenLongQiJuDrop_Solo = new short[7];
        public short[] MonthMultiple_ZhenLongQiJuDrop_Solo
        {
            get { return m_MonthMultiple_ZhenLongQiJuDrop_Solo; }
            set { m_MonthMultiple_ZhenLongQiJuDrop_Solo = value; }
        }

        private short[] m_MonthMultiple_ZhenLongQiJuDrop_Team = new short[7];
        public short[] MonthMultiple_ZhenLongQiJuDrop_Team
        {
            get { return m_MonthMultiple_ZhenLongQiJuDrop_Team; }
            set { m_MonthMultiple_ZhenLongQiJuDrop_Team = value; }
        }

        private short[] m_MonthMultiple_ShaoShiShanDrop_Team = new short[7];
        public short[] MonthMultiple_ShaoShiShanDrop_Team
        {
            get { return m_MonthMultiple_ShaoShiShanDrop_Team; }
            set { m_MonthMultiple_ShaoShiShanDrop_Team = value; }
        }

        private short[] m_MonthMultiple_PaoShangMoney = new short[7];
        public short[] MonthMultiple_PaoShangMoney
        {
            get { return m_MonthMultiple_PaoShangMoney; }
            set { m_MonthMultiple_PaoShangMoney = value; }
        }

        private short[] m_MonthMultiple_FourVillainDrop_Team = new short[7];
        public short[] MonthMultiple_FourVillainDrop_Team
        {
            get { return m_MonthMultiple_FourVillainDrop_Team; }
            set { m_MonthMultiple_FourVillainDrop_Team = value; }
        }

        private short[] m_MonthMultiple_YanMenGuanDefenseDrop_Team = new short[7];
        public short[] MonthMultiple_YanMenGuanDefenseDrop_Team
        {
            get { return m_MonthMultiple_YanMenGuanDefenseDrop_Team; }
            set { m_MonthMultiple_YanMenGuanDefenseDrop_Team = value; }
        }

        private bool m_IsOpen = false;
        public bool IsOpen
        {
            get { return m_IsOpen; }
            set { m_IsOpen = value; }
        }

        public GameMonthMultiple()
        {
            ClearData();
        }

        public void SyncMonthMultiple(GC_SYNC_MONTHMULTIPLE pak)
        {
            m_BeginTime = pak.BeginTime;

            if (m_BeginTime > 0)
            {
                m_IsOpen = true;

                for (int i = 0; i < 7; i++)
                {
                    m_MonthMultiple_WildSceneDrop[i] = (short)pak.WildSceneDropList[i];
                    m_MonthMultiple_WildSceneExp[i] = (short)pak.WildSceneExpList[i];
                    m_MonthMultiple_JuXianZhuangDrop_Solo[i] = (short)pak.JuXianZhuangDrop_SoloList[i];
                    m_MonthMultiple_JuXianZhuangDrop_Team[i] = (short)pak.JuXianZhuangDrop_TeamList[i];
                    m_MonthMultiple_NuHaiChuJianDrop_Solo[i] = (short)pak.NuHaiChuJianDrop_SoloList[i];
                    m_MonthMultiple_YanZiWuDrop_Solo[i] = (short)pak.YanZiWuDrop_SoloList[i];
                    m_MonthMultiple_YanZiWuDrop_Team[i] = (short)pak.YanZiWuDrop_TeamList[i];
                    m_MonthMultiple_ZhenLongQiJuDrop_Solo[i] = (short)pak.ZhenLongQiJuDrop_SoloList[i];
                    m_MonthMultiple_ZhenLongQiJuDrop_Team[i] = (short)pak.ZhenLongQiJuDrop_TeamList[i];
                    m_MonthMultiple_ShaoShiShanDrop_Team[i] = (short)pak.ShaoShiShanDrop_TeamList[i];
                    m_MonthMultiple_PaoShangMoney[i] = (short)pak.PaoShangMoneyList[i];
                    m_MonthMultiple_FourVillainDrop_Team[i] = (short)pak.FourVillainDrop_TeamList[i];
                    m_MonthMultiple_YanMenGuanDefenseDrop_Team[i] = (short)pak.YanMenGuanDefenseDrop_TeamList[i];
                }
            }
            else
            {
                m_IsOpen = false;
            }

            if (WeekdayActivityWindow.Instance() != null)
            {
                WeekdayActivityWindow.Instance().OnSyncMonthMultiple();
            }
        }

        public void ClearData()
        {
            for (int i = 0; i < 7; i++)
            {
                m_MonthMultiple_WildSceneDrop[i] = 1;
                m_MonthMultiple_WildSceneDrop[i] = 1;
                m_MonthMultiple_WildSceneExp[i] = 1;
                m_MonthMultiple_JuXianZhuangDrop_Solo[i] = 1;
                m_MonthMultiple_JuXianZhuangDrop_Team[i] = 1;
                m_MonthMultiple_NuHaiChuJianDrop_Solo[i] = 1;
                m_MonthMultiple_YanZiWuDrop_Solo[i] = 1;
                m_MonthMultiple_YanZiWuDrop_Team[i] = 1;
                m_MonthMultiple_ZhenLongQiJuDrop_Solo[i] = 1;
                m_MonthMultiple_ZhenLongQiJuDrop_Team[i] = 1;
                m_MonthMultiple_ShaoShiShanDrop_Team[i] = 1;
                m_MonthMultiple_PaoShangMoney[i] = 1;
                m_MonthMultiple_FourVillainDrop_Team[i] = 1;
                m_MonthMultiple_YanMenGuanDefenseDrop_Team[i] = 1;
            }
        }

        // 因为开启活动时间可能不是整点 所以加上开始时间算一个活动真正的日期
        public DateTime GetCurMonthMultipleDate()
        {
            TimeSpan span = new TimeSpan(m_BeginTime / 100, m_BeginTime % 100, 0);
            return Utils.GetServerDateTime() - span;
        }
    }
}
