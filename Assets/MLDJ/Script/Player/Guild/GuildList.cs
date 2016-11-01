/********************************************************************************
 *	文件名：	GuildList.cs
 *	全路径：	\Script\Player\Guild\GuildList.cs
 *	创建人：	李嘉
 *	创建时间：2014-04-24
 *
 *	功能说明：帮会列表基础数据
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using System;

public class GuildList
{
    public GuildList()
    {
        CleanUp();
    }

    public void CleanUp()
    {
        if (null == m_GuildInfoList)
        {
            m_GuildInfoList = new List<GuildPreviewInfo>();
        }

        m_GuildInfoList.Clear();
    }

    private List<GuildPreviewInfo> m_GuildInfoList;
    public List<GuildPreviewInfo> GuildInfoList
    {
        get { return m_GuildInfoList; }
        set { m_GuildInfoList = value; }
    }

    public void UpdateData(GC_GUILD_RET_LIST list)
    {
        m_GuildInfoList.Clear();
        for (int i = 0; i < list.guildGuidCount; ++i)
        {
            GuildPreviewInfo info = new GuildPreviewInfo();
            info.GuildGuid = list.GetGuildGuid(i);
            if (info.GuildGuid == GlobeVar.INVALID_GUID)
            {
                continue;
            }

            if (i < list.guildNameCount)
            {
                info.GuildName = list.GetGuildName(i);
            }

            if (i < list.guildLevelCount)
            {
                info.GuildLevel = list.GetGuildLevel(i);
            }

            if (i < list.guildChiefNameCount)
            {
                info.GuildChiefName = list.GetGuildChiefName(i);
            }

            if (i < list.guildMemberNumCount)
            {
                info.GuildCurMemberNum = list.GetGuildMemberNum(i);
            }
            if (i < list.guildCombatCount)
            {
                info.GuildCombatValue = list.GetGuildCombat(i);
            }
            if (i< list.isEnemyGuildCount)
            {
                info.IsEnemyGuild = (list.GetIsEnemyGuild(i) == 1);
            }
            if (i < list.guildApplyNumCount)
            {
                info.GuildCurApplyNum = list.GetGuildApplyNum(i);
            }
            if (i < list.guildApplyMaxNumCount)
            {
                info.GuildMaxApplyNum = list.GetGuildApplyMaxNum(i);
            }
            if (i < list.GuildDeclarationCount)
            {
                info.GuildDeclaration = list.GetGuildDeclaration(i);
            }
            
            m_GuildInfoList.Add(info);
        }
    }

    /// <summary>
    /// 帮会列表按照帮会的战力值排序
    /// </summary>
    /// <param name="guidlist"></param>
    /// <returns></returns>

    static public List<GuildPreviewInfo> GuildSort(List<GuildPreviewInfo> guidlist)
    {
        if (guidlist == null)
        {
            return null;
        }

		//int alreadySortedNum = 0;

		//SortedDictionary<int, GuildPreviewInfo> tempListFront = new SortedDictionary<int, GuildPreviewInfo>(new MySort());
		SortedDictionary<int, GuildPreviewInfo> tempListBehind = new SortedDictionary<int, GuildPreviewInfo>(new MySort());

		List<UInt64> SortedGuildGuid = new List<UInt64>();

		// 没有帮会的人要优先显示可以加入的
//		if(GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid == GlobeVar.INVALID_GUID)
//		{
//			// 可以申请加入的排前面
//			foreach(var info in guidlist)
//			{
//				if(info.GuildCurMemberNum < info.GuildMaxMemberNum  && info.GuildCurApplyNum < info.GuildMaxApplyNum)
//				{
//					tempListFront.Add(- info.GuildCombatValue,info);
//					SortedGuildGuid.Add(info.GuildGuid);
//				}
//			}
//		}

		// 然后再按照战力排列
		foreach(var info in guidlist)
		{
			if(SortedGuildGuid.Contains(info.GuildGuid))
			{
				continue;
			}
			tempListBehind.Add( - info.GuildCombatValue,info);
		}

		guidlist.Clear ();
//		foreach (var item in tempListFront)
//		{
//			guidlist.Add(item.Value);
//		}
		foreach(var item in tempListBehind)
		{
			guidlist.Add(item.Value);
		}

        return guidlist;
    }
}
