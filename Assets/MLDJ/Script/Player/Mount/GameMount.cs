//********************************************************************
// 文件名: GameMount.cs
// 描述: 坐骑
// 作者: HeWenpeng
// 创建时间: 2014-1-2
// 功能说明：玩家坐骑数据。
// 修改历史:
//    2014-5-28 Lijia: 客户端效率优化，把MountParam从class改为struct
//********************************************************************

using UnityEngine;
using System.Collections;
using Games.Animation_Modle;

namespace Games.MountModule
{
    public struct MountParam
    {
        public const int Max_MountCollect_Count = 40; 

        // 坐骑ID
        private int m_nMountID;
        public int MountID
        {
            get {return m_nMountID;}
            set {m_nMountID = value;}
        }

        private int m_AutoFlagMountID;
        public int AutoFlagMountID
        {
            get { return m_AutoFlagMountID; }
            set {
                m_AutoFlagMountID = value; 
                /*if (null != PartnerAndMountLogic.Instance() && 
                    null != PartnerAndMountLogic.Instance().m_MountRoot)
                {
                    PartnerAndMountLogic.Instance().m_MountRoot.AutoFlagClick(m_AutoFlagMountID);
                }*/
            }
        }

        private int[] m_MountCollect;
        public int[] MountCollect
        {
            get { return m_MountCollect; }
        }

        //added by mawenbin
        //获取新坐骑，红点提示，数据存储
        private int[] m_MountRemind;
        public int[] MountRemind
        {
            get { return m_MountRemind; }
        }

        private int[] m_MountDeadlineTime;
        public int[] MountDeadlineTime
        {
            get { return m_MountDeadlineTime; }
        }

        //public MountParam()
        //{
        //    m_nMountID = -1;
        //    m_AutoFlagMountID = -1;
        //    m_MountCollect = new int[Max_MountCollect_Count];
        //}

        public void CleanUp()
        {
            if (null == m_MountCollect)
            {
                m_MountCollect = new int[Max_MountCollect_Count];
            }

            if (null == m_MountDeadlineTime)
            {
                m_MountDeadlineTime = new int[Max_MountCollect_Count];
            }

            m_nMountID = -1;
            m_AutoFlagMountID = -1;
            for (int i = 0; i < Max_MountCollect_Count; i++)
            {
                m_MountCollect[i] = 0;
            }
            for (int i = 0; i < Max_MountCollect_Count; i++)
            {
                m_MountDeadlineTime[i] = 0;
            }

            //added by mawenbin
            //获取新坐骑，红点提示，初始为非
            if (null == m_MountRemind)
            {
                m_MountRemind = new int[Max_MountCollect_Count];
            }
            for (int i = 0; i < Max_MountCollect_Count; i++)
            {
                m_MountRemind[i] = 0;
            }
        }

        public void SyncMoutCollectedFlag(GC_MOUNTCOLLECTED_FLAG data)
        {
            m_AutoFlagMountID = data.AutoMountFlag;
            m_nMountID = data.CurMountID;
            for (int i = 0; i < Max_MountCollect_Count && i < data.MountCollectedFlagCount; i++)
            {
                m_MountCollect[i] = data.GetMountCollectedFlag(i);
            }
            for (int i = 0; i < Max_MountCollect_Count && i < data.MountLeftTimeCount; i++)
            {
                m_MountDeadlineTime[i] = data.GetMountLeftTime(i);
            }

            //added by mawenbin
            //获取新坐骑，红点提示，同步数据
            for (int i = 0; i < Max_MountCollect_Count && i < data.MountRemindFlagCount; i++)
            {
                m_MountRemind[i] = data.GetMountRemindFlag(i);
            }
            if (null != MenuBarLogic.Instance())
            {
                MenuBarLogic.Instance().UpdateMountRemindPoint();
            }
        }

        public int GetMoountLeftTime(int nMountID)
        {
            int nLeftTime = 0;
            if (nMountID < 0 || nMountID >= m_MountDeadlineTime.Length || nMountID >= m_MountCollect.Length )
            {
                return nLeftTime;
            }
            if (m_MountDeadlineTime[nMountID] <= 0)
            {
                nLeftTime = m_MountDeadlineTime[nMountID];
            }
            else
            {
                nLeftTime = m_MountDeadlineTime[nMountID] - GlobalData.ServerAnsiTime;
                if (nLeftTime < 0)
                {
                    nLeftTime = 0;
                }
            }
            return nLeftTime;
        }

        public bool GetMountCollectFlag(int nMountID)
        {
            if (nMountID <= 0 || nMountID >= Max_MountCollect_Count)
            {
                return false;
            }

            return (m_MountCollect[nMountID]==1)?true:false;
        }

        //added by mawenbin
        //获取新坐骑，红点提示
        //是否为新获取坐骑
        public bool GetMountRemindFlag(int nMountID)
        {
            if (nMountID <= 0 || nMountID >= Max_MountCollect_Count)
            {
                return false;
            }

            return (m_MountRemind[nMountID] == 1) ? true : false;
        }

        //added by mawenbin
        //获取新坐骑，红点提示
        //清除红点提示
        public void ClearMountRemindFlag(int nMountID)
        {
            if (nMountID <= 0 || nMountID >= Max_MountCollect_Count)
            {
                return;
            }

            m_MountRemind[nMountID] = 0;
            if (null != MenuBarLogic.Instance())
            {
                MenuBarLogic.Instance().UpdateMountRemindPoint();
            }
        }

        //added by mawenbin
        //获取新坐骑，红点提示
        //新获取的坐骑计数
        public int MountRemindFlagCount()
        {
            int nCount = 0;
            for (int ii = 0; ii < Max_MountCollect_Count; ++ii)
            {
                if (1 == m_MountRemind[ii])
                {
                    ++nCount;
                }
            }
            return nCount;
        }
    }
}

