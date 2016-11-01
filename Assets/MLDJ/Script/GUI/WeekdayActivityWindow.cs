using UnityEngine;
using System.Collections;
using System;
using Games.MonthMultiple;
using GCGame.Table;
using GCGame;
using Games.LogicObj;

public class WeekdayActivityWindow : MonoBehaviour {

    private static WeekdayActivityWindow m_Instance = null;
    public static WeekdayActivityWindow Instance()
    {
        return m_Instance;
    }    

    public MonthActivityWeekdayLogic[] m_DayItem = new MonthActivityWeekdayLogic[7];
    public TabController m_TabController;
    public GameObject m_WeekdayActivityOpen;
    public GameObject m_WeekdayActivityClose;

    void OnEnable()
    {
        m_Instance = this;
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (null == mainPlayer)
        {
            return;
        }
        if (!mainPlayer.NeedRequestMonthMultiple)
        {
            Init();
        }
        else
        {
            mainPlayer.ReqMonthMultiple();
        }

        GameManager.gameManager.PlayerDataPool.IsShowMonthMultipleTip = false;
        if (ActivityController.Instance() != null)
        {
            ActivityController.Instance().UpdateTabTips();
        }        
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    void Init()
    {
        m_WeekdayActivityOpen.SetActive(true);
        m_WeekdayActivityClose.SetActive(false);
        if (GameManager.gameManager.PlayerDataPool.MonthMultiple.IsOpen)
        {
            m_WeekdayActivityOpen.SetActive(true);
            m_WeekdayActivityClose.SetActive(false);
            InitInfo();
        }
        else
        {
            m_WeekdayActivityOpen.SetActive(false);
            m_WeekdayActivityClose.SetActive(true);
        }
    }

    void InitInfo()
    {
        ClearUp();
        InitDayContent();
        InitDayHighLight();        
    }

    void ClearUp()
    {
        for (int i = 0; i < 7; i++)
        {
            m_DayItem[i].ClearUp();
        }
    }

    void InitDayContent()
    {
        GameMonthMultiple month = GameManager.gameManager.PlayerDataPool.MonthMultiple;
        for (int i = 0; i < 7; i++)
        {
            int multiple = 1;

            // 野外掉落
            multiple = month.MonthMultiple_WildSceneDrop[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4611}", multiple));
            }

            // 野外经验
            multiple = month.MonthMultiple_WildSceneExp[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4612}", multiple));
            }

            // 聚贤庄单人
            multiple = month.MonthMultiple_JuXianZhuangDrop_Solo[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4614}", multiple));
            }

            // 聚贤庄组队
            multiple = month.MonthMultiple_JuXianZhuangDrop_Team[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4613}", multiple));
            }

            // 怒海锄奸单人
            multiple = month.MonthMultiple_NuHaiChuJianDrop_Solo[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4615}", multiple));
            }

            // 燕子坞单人
            multiple = month.MonthMultiple_YanZiWuDrop_Solo[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4617}", multiple));
            }

            // 燕子坞组队
            multiple = month.MonthMultiple_YanZiWuDrop_Team[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4616}", multiple));
            }

            // 珍珑棋局单人 六日黄金
            bool zhenlongSolo = false;
            bool zhenlongTeam = false;
            multiple = month.MonthMultiple_ZhenLongQiJuDrop_Solo[i];
            if (multiple > 1)
            {
                string dic = "";
                if (i == 5 || i == 6)
                {
                    dic = "#{4621}";
                }
                else
                {
                    dic = "#{4619}";
                }
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString(dic, multiple));
                zhenlongSolo = true;
            }

            // 珍珑棋局组队 六日黄金
            multiple = month.MonthMultiple_ZhenLongQiJuDrop_Team[i];
            if (multiple > 1)
            {
                string dic = "";
                if (i == 5 || i == 6)
                {
                    dic = "#{4620}";
                }
                else
                {
                    dic = "#{4618}";
                }
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString(dic, multiple));
                zhenlongTeam = true;
            }

            if (i == 5 || i == 6)
            {
                if (!zhenlongSolo && !zhenlongTeam)
                {
                    // 周六日如果没配棋局翻倍 把黄金棋局显示上去     
                    m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4704}"));
                }
            }

            // 少室山组队
            multiple = month.MonthMultiple_ShaoShiShanDrop_Team[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4624}", multiple));
            }

            // 四大恶人组队
            multiple = month.MonthMultiple_FourVillainDrop_Team[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{5497}", multiple));
            }

            // 守卫雁门关组队
            multiple = month.MonthMultiple_YanMenGuanDefenseDrop_Team[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{5498}", multiple));
            }

            // 跑商金钱
            multiple = month.MonthMultiple_PaoShangMoney[i];
            if (multiple > 1)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4709}", multiple));
            }

            // 周一周五特殊 武林大会
            if (i == 0 || i == 4)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{5277}"));
            }
            // 周三特殊 华山论剑 帮战预赛
            if (i == 2)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4625}"));
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4626}"));
            }
			if (i == 3)
			{
				m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4626}"));
			}
            // 周六特殊 帮战半决赛
            if (i == 5)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4802}"));
            }
            // 周日特殊 华山论剑 帮战决赛
            if (i == 6)
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4625}"));
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4803}"));
            }

            // 如果没活动 显示"无"
            if (m_DayItem[i].IsNoneActivity())
            {
                m_DayItem[i].AddActivity(StrDictionary.GetClientDictionaryString("#{4706}"));
            }
        }
    }

    void InitDayHighLight()
    {
        m_TabController.InitData();
        DateTime DateTimeNow = GameManager.gameManager.PlayerDataPool.MonthMultiple.GetCurMonthMultipleDate();
        // 转化为0~6代表周一到周日
        int curWeekDay = ((int)DateTimeNow.DayOfWeek + 6) % 7;
        m_TabController.ChangeTab("Day" + (curWeekDay + 1).ToString());

//         int targetItem = curWeekDay >= 4 ? 4 : curWeekDay;
//         m_ListDragPanel.MoveRelative(new Vector3(0, targetItem * 115, 0));
    }

    public void OnSyncMonthMultiple()
    {
        Init();
    }
}
