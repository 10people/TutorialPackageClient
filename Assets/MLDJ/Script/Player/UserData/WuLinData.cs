using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using System.Collections.Generic;
using Games.LogicObj;
using GCGame;
using GCGame.Table;
using System;

public class WuLinData
{
#region opponent info
    public struct OpponentViewInfo
    {
        public OpponentViewInfo(
            ulong _guid,
            string _name,
            CharacterDefine.PROFESSION _profession,
            int _level,
            int _combat,
            int _pos, 
            int _hp,
            int _mp,
            int _atk,
            int _def,
            int _cri,
            int _spd,
            int _dge
            )
        {
            guid = _guid;
            name = _name;
            profession = _profession;
            level = _level;
            pos = _pos;
            hp = _hp;
            mp = _mp;
            atk = _atk;
            def = _def;
            cri = _cri;
            spd = _spd;
            dge = _dge;
			combat = _combat;
        }
		
        public void Clean()
        {
            guid = Games.GlobeDefine.GlobeVar.INVALID_GUID;
        }

        public ulong guid;
        public string name;
        public CharacterDefine.PROFESSION profession;
        public int level;
        public int combat;
        public int pos;
        public int hp;
        public int mp;
        public int atk;
        public int def;
        public int cri;
        public int spd;
        public int dge;
    }

    public static OpponentViewInfo OppoViewInfo = new OpponentViewInfo();

    public delegate void ShowOpponentViewInfoDelegate();
    public static ShowOpponentViewInfoDelegate delegateShowOpponentViewInfo;

    public delegate void ShowWaitForOpponetDelegate();
    public static ShowWaitForOpponetDelegate delegateShowWaitForOpponet;

    public static void ShowOppoentViewInfo(GC_WULIN_OPPONENTVIEW msg)
    {
        if (null != ActivityController.Instance())
            ActivityController.Instance().ChangeToWuLinShowOppoentView();


	    OppoViewInfo.Clean();
	    OppoViewInfo.guid = msg.Guid;
	    OppoViewInfo.name = msg.Name;
	    OppoViewInfo.profession = (CharacterDefine.PROFESSION)msg.Profession;
	    OppoViewInfo.level = msg.Level;
	    OppoViewInfo.combat = msg.Combatnum;
	    OppoViewInfo.pos = msg.Pos;
	    OppoViewInfo.hp = msg.Hp;
	    OppoViewInfo.mp = msg.Mp;
	    OppoViewInfo.atk = msg.Attack;
	    OppoViewInfo.def = msg.Defense;
	    OppoViewInfo.cri = msg.Critical;
	    OppoViewInfo.spd = msg.Speed;
	    OppoViewInfo.dge = msg.Dodge;

        if (null != delegateShowOpponentViewInfo)
            delegateShowOpponentViewInfo();
    }

    public static int Resultwin { set; get; }
    public static int Rounder { set; get; }
    public static int wuLinPosition = -1;
    public static int WuLinPosition 
    {
        set { wuLinPosition = value; }
        get { return wuLinPosition; }
    }

    public static int WuLinState { set; get; }

    public delegate void ShowDefaultWindowMySelfDelegate();
    public static ShowDefaultWindowMySelfDelegate delegateShowDefaultWindowMySelf;

    public static string WuLinRoundTipPrefix()
    {
        if (Rounder == 1)
            return Utils.GetDicByID(4812);
        else if( Rounder == 2)
            return Utils.GetDicByID(4811);
        else
            return StrDictionary.GetClientDictionaryString("#{4816}", Rounder);
    }

    public static string WuLinRounderTip()
    {
        if (Rounder == 1)
            return Utils.GetDicByID(4812);
        else if (Rounder == 2)
            return Utils.GetDicByID(4811);
        else
            return StrDictionary.GetClientDictionaryString("#{4816}", Rounder);
    }

    public static void ChangeToDefaultWindow()
    {
        if (null != ActivityController.Instance())
            ActivityController.Instance().ChangeToWuLinShowDefault();

        if (delegateShowDefaultWindowMySelf != null)
        {
            delegateShowDefaultWindowMySelf();
        }
    }

    public static void DealWuLinState(GC_WULIN_STATE msg)
    {
        WuLinState = msg.State;
        int curPosition = -1;
        int curRounder = 0;
        if (msg.HasPosition)
        {
            curPosition = msg.Position;
        }

        if (msg.HasRounder)
        {
            curRounder = msg.Rounder;
        }

        Rounder = curRounder;
        WuLinPosition = curPosition;


        switch ((GC_WULIN_STATE.WULINSTATE)msg.State)
        {
            case GC_WULIN_STATE.WULINSTATE.KICKED:
                //..增加通知
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.CLOSED:
                //..增加通知
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.REGISTER:
                //..增加通知
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.REGOK:
                //..增加通知
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.REGISTERED:
                //..增加通知
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.MAKEEFF:
                //..增加通知
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.WAITNEXTROUND:
                //..增加通知
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.SEARCH:
                //..暂时不处理，使用通用的发送
                break;
            case GC_WULIN_STATE.WULINSTATE.OPPVIEW:
                //..暂时不处理，使用通用的发送
                break;
            case GC_WULIN_STATE.WULINSTATE.WIN:
            case GC_WULIN_STATE.WULINSTATE.LOSE:
                {
                    Resultwin = ((int)GC_WULIN_STATE.WULINSTATE.WIN == msg.State) ?
                           1 : 0;
                    Rounder = msg.Rounder;
                    //if (Resultwin == 0) SelfHSPos = -1;
                    ChallengeRewardLogic.ShowRewardUI((int)ChallegeRewardUIType.WuLin);
                }
                break;
            case GC_WULIN_STATE.WULINSTATE.WAITFOR:
                {
                    Rounder = msg.Rounder;
                    GUIData.AddNotifyData2Client(false, "#{2344}");
                    if (null != delegateShowWaitForOpponet)
                        delegateShowWaitForOpponet();
                }
                break;
            case GC_WULIN_STATE.WULINSTATE.LUCKDOG:
                {
                    Rounder = msg.Rounder;
                    string roundTips = WuLinRoundTipPrefix();
                    GUIData.AddNotifyData2Client(false, "#{4814}", roundTips);
                    
                    OppoViewInfo.Clean();
                    if (null != delegateShowOpponentViewInfo)
                        delegateShowOpponentViewInfo();
                }
                break;
            case GC_WULIN_STATE.WULINSTATE.FINISH:
                ChangeToDefaultWindow();
                break;
            case GC_WULIN_STATE.WULINSTATE.START:
                //..增加通知
                ChangeToDefaultWindow();
                break;
        }
    }

    // ...
    public static int ContinueSec { set; get; }
 
    public delegate void ShowSearchOpponentDelegate(int sec, int s);
    public static ShowSearchOpponentDelegate delegateShowSearchOpponent;
    public static void ShowSearchOpponent(GC_WULIN_ShowSearch msg)
    {
        ContinueSec = msg.ContinueSecond;
        Rounder = msg.Progress;
        if (null != ActivityController.Instance())
        {
            ActivityController.Instance().ChangeToWuLinShowOppoentView();
            CallShowSearchOpponentDelegate( );
        }
        else
        {
            UIManager.ShowUI(UIInfo.Activity, OnActiveShowActiviController);
        }
    }

    static void OnActiveShowActiviController(bool bSuccess, object param)
    {
        ActivityController.Instance().ChangeToWuLinTab();
        ActivityController.Instance().ChangeToWuLinShowOppoentView();
        CallShowSearchOpponentDelegate( );
    }

    static void CallShowSearchOpponentDelegate( )
    {
        if (null != delegateShowSearchOpponent)
            delegateShowSearchOpponent(ContinueSec, Rounder);
    }


#endregion
#region Self
//     private static int SelfHSPos = -1;
//     public static int MySelfeWuLinPos { 
//         set{SelfHSPos = value;}
//         get{return SelfHSPos;} }
//     public delegate void ShowSelfRegisterInfoDelegate();
//     public static ShowSelfRegisterInfoDelegate delegateShowSelfRegisterInfo;
//     public static void ShowSelfRegisterInfo(GC_WuLin_SELFPOSITION msg)
//     {
//         MySelfeWuLinPos = msg.SelfPos;
//         if (null != delegateShowSelfRegisterInfo)
//             delegateShowSelfRegisterInfo();
//     }
#endregion

#region register Member
    public class RegisterMemberInfo
    {
        public RegisterMemberInfo(
            ulong _guid,
            string _name,
            CharacterDefine.PROFESSION _profession,
            int _level,
            int _combat,
            int _pos
            )
        {
            guid = _guid;
            name = _name;
            profession = _profession;
            level = _level;
            combat = _combat;
            pos = _pos;
        }
        public ulong guid;
        public string name;
        public CharacterDefine.PROFESSION profession;
        public int level;
        public int combat;
        public int pos;
    };

    public static List<RegisterMemberInfo> RegisterMemberList = new List<RegisterMemberInfo>();
    public delegate void ShowRegisterMemberListDelegate();
    public static ShowRegisterMemberListDelegate delegateShowRegisterMemberList;

    public static void ShowRegisterMemberList(GC_WULIN_MEMBERLIST msg)
    {
        RegisterMemberList.Clear();
        WuLinPosition = msg.SelfPos;
        CurWuLinPage = msg.CurPage;
        MaxWuLinPage = msg.MaxPage;
        //
         if (msg.guidCount <= 0)
        {
            if (null != ActivityController.Instance())
                ActivityController.Instance().ChangeToWuLinShowDefault();
        }
        else
        {
            if (null != ActivityController.Instance())
            {
                ActivityController.Instance().ChangeToWuLinShowMemberList();
            }

            for (int i = 0; i < msg.guidCount; i++)
            {
                RegisterMemberList.Add(new RegisterMemberInfo(
                    msg.GetGuid(i), msg.GetName(i),
                    (CharacterDefine.PROFESSION)msg.GetProfession(i),
                    msg.GetLevel(i), msg.GetCombatnum(i), msg.GetPos(i)));
            }

            // ....
            if (null != delegateShowRegisterMemberList)
            {
                delegateShowRegisterMemberList();
            }
        }
    }
#endregion
    #region register member list
    public static int CurWuLinPage { set; get; }
    public static int MaxWuLinPage { set; get; }
#endregion


#region PKInfo
    public class MemberPKInfo
    {
        public MemberPKInfo(
        string fristname,
        string secondname,
        string winnername)
        {
            m_fristname = fristname;
            m_secondname = secondname;
            m_winnername = winnername;
        }
        public string m_fristname;
        public string m_secondname;
        public string m_winnername;
    };

    public static List<MemberPKInfo> WuLinPKInfoList = new List<MemberPKInfo>();
    public delegate void ShowPkInfoDelegate();
    public static ShowPkInfoDelegate delegateShowPkInfo;

    public static void ShowWuLinPkInfoList(GC_RET_HUASHAN_PKINFO msg)
    {
        WuLinPKInfoList.Clear();
        Rounder = msg.Rounder;
        //
        for (int i = 0; i < msg.fristnameCount; i++)
        {
            WuLinPKInfoList.Add(new MemberPKInfo(
                msg.GetFristname(i), msg.GetSecondname(i), msg.GetWinnername(i)));
        }
        // ....
        if (null != ActivityController.Instance() && ActivityController.Instance().IsShowWuLinTab())
        {
            if (null != ActivityController.Instance())
            {
                ActivityController.Instance().ChangeToWuLinShowPKInfo();
            }
            if (null != delegateShowPkInfo)
            {
                delegateShowPkInfo();
            }
        }
    }
#endregion

#region OpenFlag
    public static DateTime GetCurrentDateTime()
    {
        DateTime sendDate = DateTime.Now;
        sendDate = sendDate.ToLocalTime();
        return sendDate;
    }
//     public static bool IsWuLinOpen()
//     {
//         DateTime curTime = Utils.GetServerDateTime();
//         if (curTime.DayOfWeek == DayOfWeek.Monday)
//         {
//             if (curTime.Hour == 14)
//             {
//                 if (curTime.Minute >= 30 && curTime.Minute <= 59)
//                 {
//                     return true;
//                 }
//             }
//         }
// 
//         if (curTime.DayOfWeek == DayOfWeek.Friday)
//         {
//             if (curTime.Hour == 19)
//             {
//                 if (curTime.Minute >= 30 && curTime.Minute <= 59)
//                 {
//                     return true;
//                 }
//             }
//         }
//         return false;
#endregion

#region History Hero
    public class HistoryHeroMember
    {
        public HistoryHeroMember(
            ulong _guid,
            string _name,
            int _pos,
            int _levelgroup)
        {
            guid = _guid;
            name = _name;
            position = _pos;
            LevelGroup = _levelgroup;
        }

        public ulong guid;
        public string name;
        public int position;
        public int LevelGroup;
    }

    public static List<HistoryHeroMember> HerosInHistoryList = new List<HistoryHeroMember>();
    public delegate void ShowWuLinHeroesInHistoryDelegate();
    public static ShowWuLinHeroesInHistoryDelegate delegateShowWuLinHeroesInHistory;

    public static void ShowWuLinHerosInHistory(GC_WULIN_HEROS_LIST msg)
    {
        HerosInHistoryList.Clear();

        // fill
        if (msg.guidCount > 0)
        {
            for (int i = 0; i < msg.guidCount; i++)
            {
                HerosInHistoryList.Add(new HistoryHeroMember(
                    msg.GetGuid(i), msg.GetName(i), msg.GetPosition(i), msg.GetLevelGroup(i)));
            }
        }
        //
        if (null != delegateShowWuLinHeroesInHistory)
            delegateShowWuLinHeroesInHistory();
    }
#endregion

}
