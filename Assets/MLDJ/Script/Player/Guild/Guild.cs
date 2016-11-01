/********************************************************************************
 *	文件名：	Guild.cs
 *	全路径：	\Script\Player\Guild\Guild.cs
 *	创建人：	李嘉
 *	创建时间：2014-04-22
 *
 *	功能说明：帮会基础数据
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System;
using System.Collections.Generic;
using Games.GlobeDefine;

public class Guild
{    
    public Guild()
    {
        CleanUp();
    }

    public void CleanUp()
    {
        m_GuildGuid = GlobeVar.INVALID_GUID;
        m_GuildName = "";
        m_GuildLevel = 0;
        m_GuildChiefGuid = GlobeVar.INVALID_GUID;
        m_nPSCanAcceptTimes = 0;
        m_GuildNotice = "";
        m_GuildDeclaration = "";

        if (null == m_GuildMemberList)
        {
            m_GuildMemberList = new Dictionary<UInt64, GuildMember>();
        }

        m_GuildMemberList.Clear();

        m_PreserveGuildGuid = new List<UInt64>();
        m_PreserveGuildGuid.Clear();

        m_NeedReserve = true;

        m_ViceChiefRoutine = new bool[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_MAX];
        for (int i = 0; i < m_ViceChiefRoutine.Length; i++ )
        {
            m_ViceChiefRoutine[i] = false;
        }

        m_ElderRoutine = new bool[(int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_MAX];
        for (int i = 0; i < m_ElderRoutine.Length; i++)
        {
            m_ElderRoutine[i] = false;
        }

        m_GuildJobName = new string[(int)GameDefine_Globe.GUILD_JOB.MAX];
        for (int i = 0; i < m_GuildJobName.Length; i++)
        {
            m_GuildJobName[i] = "";
        }

        m_GuildHistoryInfo = new List<GuildHistory>();
        m_GuildHistoryInfo.Clear();

        m_LastWeekContri = 0;

        m_HideAndSeekNpcInfo = new List<GuildHideAndSeekNpc>();
        m_HideAndSeekWeek = false;
    }

    private UInt64 m_GuildGuid;                     //帮会GUID
    public System.UInt64 GuildGuid
    {
        get { return m_GuildGuid; }
        set { m_GuildGuid = value; }
    }

    private string m_GuildName;                     //帮会GUID
    public string GuildName
    {
        get { return m_GuildName; }
        set { m_GuildName = value; }
    }

    private int m_GuildLevel;                       //帮会等级
    public int GuildLevel
    {
        get { return m_GuildLevel; }
        set { m_GuildLevel = value; }
    }
    
    private UInt64 m_GuildChiefGuid;                //帮主Guid
    public System.UInt64 GuildChiefGuid
    {
        get { return m_GuildChiefGuid; }
        set { m_GuildChiefGuid = value; }
    }

    private int m_GuildExp;                         //帮会繁荣度
    public int GuildExp
    {
        get { return m_GuildExp; }
        set { m_GuildExp = value; }
    }

    private string m_GuildNotice;                   //帮会公告
    public string GuildNotice
    {
        get { return m_GuildNotice; }
        set { m_GuildNotice = value; }
    }

    private string m_GuildDeclaration;
    public string GuildDeclaration
    {
        get { return m_GuildDeclaration; }
        set { m_GuildDeclaration = value; }
    }

    private Dictionary<UInt64, GuildMember> m_GuildMemberList = null;    //帮会成员列表
    public Dictionary<UInt64, GuildMember> GuildMemberList
    {
        get { return m_GuildMemberList; }
    }

    private List<UInt64> m_PreserveGuildGuid;             //玩家当前加入的待审批帮会Guid,在申请帮会列表的时候同步
    public List<UInt64> PreserveGuildGuid
    {
        get { return m_PreserveGuildGuid; }
        set { m_PreserveGuildGuid = value; }
    }

    private int m_nPSCanAcceptTimes;
    public int PSCanAcceptTimes
    {
        get { return m_nPSCanAcceptTimes; }
        set { m_nPSCanAcceptTimes = value; }
    }

    private bool m_NeedReserve;
    public bool NeedReserve
    {
        get { return m_NeedReserve; }
        set { m_NeedReserve = value; }
    }

    private bool[] m_ViceChiefRoutine;
    public bool[] ViceChiefRoutine
    {
        get { return m_ViceChiefRoutine; }
        set { m_ViceChiefRoutine = value; }
    }

    private bool[] m_ElderRoutine;
    public bool[] ElderRoutine
    {
        get { return m_ElderRoutine; }
        set { m_ElderRoutine = value; }
    }

    private string[] m_GuildJobName;
    public string[] GuildJobName
    {
        get { return m_GuildJobName; }
        set { m_GuildJobName = value; }
    }

    private List<GuildHistory> m_GuildHistoryInfo;
    public List<GuildHistory> GuildHistoryInfo
    {
        get { return m_GuildHistoryInfo; }
        set { m_GuildHistoryInfo = value; }
    }

    private int m_LastWeekContri;
    public int LastWeekContri
    {
        get { return m_LastWeekContri; }
        set { m_LastWeekContri = value; }
    }

    private List<GuildHideAndSeekNpc> m_HideAndSeekNpcInfo;
    public List<GuildHideAndSeekNpc> HideAndSeekNpcInfo
    {
        get { return m_HideAndSeekNpcInfo; }
        set { m_HideAndSeekNpcInfo = value; }
    }

    private bool m_HideAndSeekWeek;
    public bool HideAndSeekWeek
    {
        get { return m_HideAndSeekWeek; }
        set { m_HideAndSeekWeek = value; }
    }

    public void UpdateData(GC_GUILD_RET_INFO info)
    {
        //清空之前的数据
        CleanUp();

        //判断消息包数据合法性
        if (null == info || info.GuildGuid == GlobeVar.INVALID_GUID)
        {
            return;
        }

        //填充数据
        GuildGuid = info.GuildGuid;
        if (GuildGuid != GlobeVar.INVALID_GUID)
        {
            PreserveGuildGuid.Clear();
        }
        GuildLevel = info.GuildLevel;
        GuildName = info.GuildName;
        GuildChiefGuid = info.GuildChiefGuid;
        GuildExp = info.GuildExp;
        GuildNotice = info.GuildNotice;
        GuildDeclaration = info.GuildDeclaration;
        NeedReserve = info.NeedReserve == 1;
        LastWeekContri = info.LastWeekContri;

        if (info.HasPscanacpttimes)
        {
            PSCanAcceptTimes = info.Pscanacpttimes;
        }       

        for (int i = 0; i < info.memberGuidCount; ++i )
        {
            GuildMember member = new GuildMember();
            //member.CleanUp();

            member.Guid = info.GetMemberGuid(i);

            if (info.memberNameCount > i)
            {
                member.MemberName = info.GetMemberName(i);
            }
            if (info.memberVIPCount > i)
            {
                member.VIP = info.GetMemberVIP(i);
            }
            if (info.memberLevelCount > i)
            {
                member.Level = info.GetMemberLevel(i);
            }
            if (info.memberJobCount > i)
            {
                member.Job = info.GetMemberJob(i);
            }
            if (info.memberLastLogoutCount > i)
            {
                member.LastLogout = info.GetMemberLastLogout(i);
            }
            if (info.memberProfCount > i)
            {
                member.Profession = info.GetMemberProf(i);
            }
            if (info.memberStateCount > i)
            {
                member.State = info.GetMemberState(i);
            }
            if (info.memberContirbuteCount > i)
            {
                member.Contribute = info.GetMemberContirbute(i);
            }
            if (info.combatvalCount > i)
            {
                member.ComBatVal = info.GetCombatval(i);
            }
            if (member.IsValid())
            {
                GuildMemberList.Add(member.Guid, member);
            }
        }

        for (int i = 0; i < info.ViceChiefRoutineCount && i < ViceChiefRoutine.Length; i++ )
        {
            ViceChiefRoutine[i] = info.ViceChiefRoutineList[i] == 1;
        }

        for (int i = 0; i < info.ElderRoutineCount && i < ElderRoutine.Length; i++)
        {
            ElderRoutine[i] = info.ElderRoutineList[i] == 1;
        }

        for (int i = 0; i < info.GuildJobNameCount && i < GuildJobName.Length; i++ )
        {
            GuildJobName[i] = info.GuildJobNameList[i];
        }

        int nTextIndex = 0;
        for (int i = 0; i < info.GuildHistoryTypeCount; i++ )
        {
            GuildHistory history = new GuildHistory();

            if (info.GuildHistoryTypeCount > i)
            {
                history.HistoryType = info.GuildHistoryTypeList[i];
            }
            if (info.GuildHistoryTimeCount > i)
            {
                history.HistoryTime = info.GuildHistoryTimeList[i];
            }

            for (int j = 0; j < GuildHistory.GetTypeTextCount(history.HistoryType) && j < history.HistoryText.Length; j++)
            {
                history.HistoryText[j] = info.GuildHistoryTextList[nTextIndex];
                nTextIndex += 1;
            }

            if (history.IsValid())
            {
                GuildHistoryInfo.Add(history);
            }
        }

        for (int i = 0; i < info.SceneNpcIdCount; i++ )
        {
            GuildHideAndSeekNpc npcInfo = new GuildHideAndSeekNpc();

            if (info.SceneNpcIdCount > i)
            {
                npcInfo.SceneNpcId = info.SceneNpcIdList[i];
            }
            if (info.SceneNpcFindCount > i)
            {
                npcInfo.IsFound = info.SceneNpcFindList[i] == 1;
            }

            if (npcInfo.IsValid())
            {
                HideAndSeekNpcInfo.Add(npcInfo);
            }
        }

        if (info.HasHideAndSeekWeek)
        {
            m_HideAndSeekWeek = info.HideAndSeekWeek == 1;
        }

        //按照VIP等级排序
        //SortMemberListByVIP(m_GuildMemberList);
        //按照等级排序
        //SortMemberListByLevel(m_GuildMemberList);
        //按照在线状态进行排序
        //SortMemberListByOnLine(m_GuildMemberList);
        //按照职位排序
        //SortMemberListByJob(m_GuildMemberList);

		// 帮主永远第一位，玩家自己第二位，然后按照官职排，最后按照等级排列
		SortByNewRule ();    

        if (ChatInfoLogic.Instance() != null)
        {
			ChatInfoLogic.Instance().UpdateGuildChannel();
			ChatInfoLogic.Instance().UpdateSpeakerList_Guild();
        }
    }

    public int GetGuildFormalMemberCount()
    {
        int nNum = 0;
        foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)
        {
            if (member.Value.IsValid() && member.Value.Job != (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
            {
                nNum++;
            }
        }

        return nNum;
    }

    public int GetGuildReserveMemberCount()
    {
        int nNum = 0;
        foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)
        {
            if (member.Value.IsValid() && member.Value.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
            {
                nNum++;
            }
        }

        return nNum;
    }

    //根据会员Guid获得其职位
    public int GetMemberJob(UInt64 memberGuid)
    {
        int nJob = (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.INVALID;
        foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)
        {
            if (member.Value.IsValid() && member.Value.Guid == memberGuid)
            {
                nJob = member.Value.Job;
                break;
            }
        }

        return nJob;
    }

    //根据会员Guid获得其等级
    public int GetMemberLevel(UInt64 memberGuid)
    {
        int nLevel = (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.INVALID;
        foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)
        {
            if (member.Value.IsValid() && member.Value.Guid == memberGuid)
            {
                nLevel = member.Value.Level;
                break;
            }
        }

        return nLevel;
    }

    //根据会员Guid获得其贡献度
    public int GetMemberContribute(UInt64 memberGuid)
    {
        int nContribute = (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.INVALID;
        foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)
        {
            if (member.Value.IsValid() && member.Value.Guid == memberGuid)
            {
                nContribute = member.Value.Contribute;
                break;
            }
        }

        return nContribute;
    }

    //获得MainPlayer的帮会信息
    public GuildMember GetMainPlayerGuildInfo()
    {
        GuildMember mainPlayerGuildInfo;
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer &&
            GuildMemberList.TryGetValue(Singleton<ObjManager>.GetInstance().MainPlayer.GUID, out mainPlayerGuildInfo))
        {
            return mainPlayerGuildInfo;
        }

        return null;
    }

    protected Dictionary<UInt64, GuildMember> SortMemberListByJob(Dictionary<UInt64, GuildMember> dic)
    {
        List<KeyValuePair<UInt64, GuildMember>> myList = new List<KeyValuePair<UInt64, GuildMember>>(dic);
        myList.Sort(delegate(KeyValuePair<UInt64, GuildMember> s1, KeyValuePair<UInt64, GuildMember> s2)
        {
            return s1.Value.Job.CompareTo(s2.Value.Job);
        });

        dic.Clear();
        foreach (KeyValuePair<UInt64, GuildMember> pair in myList)
        {
            dic.Add(pair.Key, pair.Value);
        }
        return dic;
    }

    protected Dictionary<UInt64, GuildMember> SortMemberListByOnLine(Dictionary<UInt64, GuildMember> dic)
    {
        List<KeyValuePair<UInt64, GuildMember>> myList = new List<KeyValuePair<UInt64, GuildMember>>(dic);
        myList.Sort(delegate(KeyValuePair<UInt64, GuildMember> s1, KeyValuePair<UInt64, GuildMember> s2)
        {
            return s2.Value.State.CompareTo(s1.Value.State);
        });

        dic.Clear();
        foreach (KeyValuePair<UInt64, GuildMember> pair in myList)
        {
            dic.Add(pair.Key, pair.Value);
        }
        return dic;
    }

    protected Dictionary<UInt64, GuildMember> SortMemberListByVIP(Dictionary<UInt64, GuildMember> dic)
    {
        List<KeyValuePair<UInt64, GuildMember>> myList = new List<KeyValuePair<UInt64, GuildMember>>(dic);
        myList.Sort(delegate(KeyValuePair<UInt64, GuildMember> s1, KeyValuePair<UInt64, GuildMember> s2)
        {
            return s2.Value.VIP.CompareTo(s1.Value.VIP);
        });

        dic.Clear();
        foreach (KeyValuePair<UInt64, GuildMember> pair in myList)
        {
            dic.Add(pair.Key, pair.Value);
        }
        return dic;
    }

    protected Dictionary<UInt64, GuildMember> SortMemberListByLevel(Dictionary<UInt64, GuildMember> dic)
    {
        List<KeyValuePair<UInt64, GuildMember>> myList = new List<KeyValuePair<UInt64, GuildMember>>(dic);
        myList.Sort(delegate(KeyValuePair<UInt64, GuildMember> s1, KeyValuePair<UInt64, GuildMember> s2)
        {
            return s2.Value.Level.CompareTo(s1.Value.Level);
        });

        dic.Clear();
        foreach (KeyValuePair<UInt64, GuildMember> pair in myList)
        {
            dic.Add(pair.Key, pair.Value);
        }
        return dic;
    }

	protected void SortByNewRule()
	{
		// 先按照帮主第一玩家第二的规则排
		Dictionary<UInt64, GuildMember> tempList = new Dictionary<ulong, GuildMember> ();
		foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)// 会长
		{
			if (member.Value.IsValid() && member.Value.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.CHIEF)
			{
				tempList.Add(member.Key,member.Value);
				break;
			}
		}

		foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)// 玩家自己
		{ 
			if (tempList.ContainsKey(member.Key))
			{
				break;
			}
			if (member.Value.IsValid() && member.Key == Singleton<ObjManager>.GetInstance().MainPlayer.GUID)
			{
				tempList.Add(member.Key,member.Value);
				break;
			}
		}

		foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)// 副帮主
		{ 
			if (tempList.ContainsKey(member.Key))
			{
				continue;
			}
			if (member.Value.IsValid() && member.Value.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
			{
				tempList.Add(member.Key,member.Value);
				continue;
			}
		}

        foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)// 长老
        {
            if (tempList.ContainsKey(member.Key))
            {
                continue;
            }
            if (member.Value.IsValid() && member.Value.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.ELDER)
            {
                tempList.Add(member.Key, member.Value);
                continue;
            }
        }

		SortedDictionary<uint,GuildMember> levelTempList = new SortedDictionary<uint, GuildMember> (new MySortU());


		foreach (KeyValuePair<ulong, GuildMember> member in m_GuildMemberList)// 按照等级排序,需要排除键值相同的情况所以指定SortedDictionary中的compare方法
		{ 
			if (tempList.ContainsKey(member.Key))  // 已经排过的不处理
			{
				continue;
			}
			levelTempList.Add((uint)(200 - member.Value.Level), member.Value);   // 按照等级降序排列
		}

		foreach(var levelItem in levelTempList)
		{
			tempList.Add(levelItem.Value.Guid,levelItem.Value);
		}


		m_GuildMemberList.Clear ();
		m_GuildMemberList = tempList;
	}

    public bool IsHaveAuthority(int nJob, int nRouteIndex)
    {
        if (nRouteIndex < 0 || nRouteIndex >= (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_MAX)
        {
            return false;
        }

        switch ((GameDefine_Globe.GUILD_ROUTINE)nRouteIndex)
        {
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_JOIN:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_DECLARATION:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_NOTICE:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_SHOP_LEVELUP:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY:
                {
                    if (nJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF)
                    {
                        return true;
                    }
                    else if (nJob == (int)GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
                    {
                        return m_ViceChiefRoutine[nRouteIndex];
                    }
                    else if (nJob == (int)GameDefine_Globe.GUILD_JOB.ELDER)
                    {
                        return m_ElderRoutine[nRouteIndex];
                    }
                }
                break;
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_SET_AUTHORITY:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_APROVE_CHIEFT:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOB:
            case GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOBNAME:
                {
                    if (nJob == (int)GameDefine_Globe.GUILD_JOB.CHIEF)
                    {
                        return true;
                    }
                }
                break;
        }

        return false;
    }

    public int GetViceChiefRoutineCount()
    {
        int count = 0;
        for (int i = 0; i < m_ViceChiefRoutine.Length; i++ )
        {
            count += m_ViceChiefRoutine[i] ? 1 : 0;
        }
        return count;
    }

    public int GetElderRoutineCount()
    {
        int count = 0;
        for (int i = 0; i < m_ElderRoutine.Length; i++)
        {
            count += m_ViceChiefRoutine[i] ? 1 : 0;
        }
        return count;
    }

    public int GetGuildShopOpenSlot()
    {
        if (m_GuildLevel <= 0 || m_GuildLevel > GlobeVar.GUILD_MAX_MEMBER.Length)
        {
            return 0;
        }

        // 临时数值
        if (m_GuildLevel < 5)
        {
            return 6;
        }
        else
        {
            return 12;
        }
    }

    public bool IsInHideAndSeekActivity()
    {
        return m_HideAndSeekNpcInfo.Count > 0;
    }

    public bool IsHideAndSeekNpc(int nSceneNpcId)
    {
        for (int i = 0; i < m_HideAndSeekNpcInfo.Count; i++ )
        {
            if (m_HideAndSeekNpcInfo[i].SceneNpcId == nSceneNpcId && false == m_HideAndSeekNpcInfo[i].IsFound)
            {
                return true;
            }
        }

        return false;
    }
}

public class MySort : IComparer<int>
{
	#region IComparer 成员
	public int Compare(int x, int y)
	{
		//排序
		int iResult = x - y;
		if(iResult == 0) iResult = -1;    // 排除重复
		return iResult;
	}
	#endregion
}

public class MySortU : IComparer<uint>
{
	#region IComparer 成员
	public int Compare(uint x, uint y)
	{
		//排序
		int iResult = (int)x - (int)y;
		if(iResult == 0) iResult = -1;    // 排除重复
		return iResult;
	}
	#endregion
}


