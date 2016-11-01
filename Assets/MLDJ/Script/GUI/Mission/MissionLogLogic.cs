/********************************************************************************
 *	文件名：MissionLogLogic.cs
 *	全路径：	\Script\GUI\MissionLogLogic.cs
 *	创建人：	贺文鹏
 *	创建时间：2014-02-17
 *
 *	功能说明： 任务日志界面。
 *	       
 *	修改记录：重写 By weitong
*********************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame.Table;
using Games.GlobeDefine;
using Module.Log;
using GCGame;
using Games.Mission;
using Games.Item;

public class MissionLogLogic : MonoBehaviour 
{
    public GameObject MissionDailyRedPoint;
    public TabController tabController;
    public MissionView_Main mainView;
    public MissionView_Daily dailyView;
    public MissionView_Guild guildView;
	public MissionView_CanAccept canacceptView;
    public UILabel lblCoin;
    public UILabel lblRuby;

    int mCurFTEIndex = -1;// 1:点击每日任务分页

    private static MissionLogLogic m_Instance = null;
    public static MissionLogLogic Instance()
    {
        return m_Instance;
    }

    void Awake()
    {
        m_Instance = this;
    }

	void Start () 
    {
        Init();
        mainView.Init();
        dailyView.Init();
		canacceptView.Init();
        tabController.ChangeTab(opentabname);
        CheckNewPlayerGuide();
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.MISSION_UI);
#endif
	}

    void Init()
    {
        tabController.delTabChanged = OnTabClick;
        lblCoin.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        lblRuby.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao().ToString();
    }

    void OnTabClick(TabButton button)
    {
        NewPlayerGuidLogic.CloseWindow();
        if (mCurFTEIndex == 1)
        {
            DoFTE(2);
        }
    }

    void OnEnable()
    {
        DailyMissionRedPoint();
    }

    public void DailyMissionRedPoint()
    {
        if (MissionDailyRedPoint != null)
        {
            MissionDailyRedPoint.SetActive(MissionView_Daily.CalculateIsShowRedPoint());
        }
    }

// 	void OnEnable ()
// 	{
// 		Messenger.AddListener (MessengerConst.OnMissionStateChanged, OnMissionStateChanged);
// 	}
// 
// 	void OnDisable ()
// 	{
// 		Messenger.RemoveListener (MessengerConst.OnMissionStateChanged, OnMissionStateChanged);
// 	}

    void OnDestroy()
    {
        m_Instance = null;
    }

    void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.MissionLogRoot);
    }

    void CheckNewPlayerGuide()
    {
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 13)
        {
            // 每日成就任务指引
            DoFTE(1);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    void DoFTE(int FTEIndex)
    {
        mCurFTEIndex = FTEIndex;
        switch (mCurFTEIndex)
        {
            case 1:// 点击每日任务分页
                NewPlayerGuidLogic.OpenWindow(tabController.GetTabButtonObj("Btn2-Daily"), 160, 70, "", "left", 0, true, true);
                break;

            case 2:// 指向任务列表（字典号11405）
                NewPlayerGuidLogic.OpenWindow(dailyView.gameObject, 0, 0,
                    Utils.GetDicByID(11405), "center", -1, true, true, false, null, null, 0f, 0f, true, false, () =>
                    {
                        DoFTE(3);
                    });
                break;

            case 3:// 指向今日进度（字典号11406）
                NewPlayerGuidLogic.OpenWindow(dailyView.sprProgressBarBack.gameObject, 1100, 100,
                    Utils.GetDicByID(11406), "top", -1, true, true, false, null, null, 0, 0, true, false, () =>
                    {
                        DoFTE(4);
                    });
                break;

            case 4:// 指向列表第一行前往按钮（字典号11407）
                DailyMissionItem firstItem = dailyView.missionList.transform.FindChild("0").GetComponent<DailyMissionItem>();
                NewPlayerGuidLogic.OpenWindow(firstItem.btnGoTo, 150, 60, Utils.GetDicByID(11407), "left", 0, true, true, false, null, null, -0.1f);
                break;
        }
    }

    public void SetOpenTabName(string tabname)
    {
      opentabname = tabname;
    }
    private string opentabname = "Btn1-Main";
#region 
  //策划需求双击主界面上任务界面的任务按钮，打开任务界面，此时关闭时会弹出MenuBarRoot，所以再关一次MenuBarRoot
    void OnDisable()
    {
      if (IsOpenFromMissionDialog) {
        IsOpenFromMissionDialog = false;
        if (MenuBarLogic.Instance() != null) {
          MenuBarLogic.Instance().CloseWindow();
        }
      }
    }
    static public bool IsOpenFromMissionDialog = false;
#endregion
}
