using UnityEngine;
using System.Collections;
using Module.Log;

public class ChristmasTreeData 
{
    public enum ChristmasTreeQulaity
    {
        WHITE = 1,      //白色品质
        GREEN = 2,      //绿色品质
        BLUE = 3,       //蓝色品质
        PURPLE = 4,     //紫色品质
        ORANGE = 5,     //橙色品质
    }

    public class TreeInfo
    {
        public int m_TreeLevel = 1;
        public int m_TreeExp = 0;
        public int m_TreeQuality = 1;

        public void Rest()
        {
            m_TreeLevel = 1;
            m_TreeExp = 0;
            m_TreeQuality = 1;
        }
    }
    public static TreeInfo m_ChristmasTreeInfo = new TreeInfo();
    public static int m_nPlayerDecoration = 0;//圣诞树装扮值
    public static int m_nMeDecorationRank = -1;//装扮值排行榜名次

    public delegate void UpdateChristmasTreeDelegate();
    public static UpdateChristmasTreeDelegate delUpdateChristmasTree;


    public static void UpdateChristTreeData(GC_RET_CHRISTMASTREE rPacket)
    {
        if (null == rPacket)
        {
            LogModule.ErrorLog("UpdateChrisTreeData rPacket is null ");
            return;
        }
        if (null == m_ChristmasTreeInfo)
        {
            LogModule.ErrorLog("UpdateChrisTreeData m_ChristmasTreeInfo is null ");
            return;
        }
        if (rPacket.HasLevel)
        {
            m_ChristmasTreeInfo.m_TreeLevel = rPacket.Level;
        }
        if (rPacket.HasExp)
        {
            m_ChristmasTreeInfo.m_TreeExp = rPacket.Exp;
        }
        if (rPacket.HasQuality)
        {
            m_ChristmasTreeInfo.m_TreeQuality = rPacket.Quality;
        }
        if (delUpdateChristmasTree != null)
        {
            delUpdateChristmasTree();
        }
    }

    public static void DecorateChristTreeRet(GC_RET_DECORATE_TREE rPacket)
    {
        if (null == rPacket)
        {
            LogModule.ErrorLog("UpdateChrisTreeData rPacket is null ");
            return;
        }
        if (null == m_ChristmasTreeInfo)
        {
            LogModule.ErrorLog("UpdateChrisTreeData m_ChristmasTreeInfo is null ");
            return;
        }
        if (rPacket.HasLevel)
        {
            m_ChristmasTreeInfo.m_TreeLevel = rPacket.Level;
        }
        if (rPacket.HasExp)
        {
            m_ChristmasTreeInfo.m_TreeExp = rPacket.Exp;
        }
        if (rPacket.HasQuality)
        {
            m_ChristmasTreeInfo.m_TreeQuality = rPacket.Quality;
        }
        if (delUpdateChristmasTree != null)
        {
            delUpdateChristmasTree();
        }
    }
}
