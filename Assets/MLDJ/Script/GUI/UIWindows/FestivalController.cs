/********************************************************************
    created:	2014-12-10
    filename: 	FestivalController.cs
    author:		zk
    purpose:	活动界面
*********************************************************************/
using UnityEngine;
using System.Collections;
using Module.Log;
using Games.SwordsMan;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;
using System;
public class FestivalController : MonoBehaviour
{

    public GameObject m_SpringWindow;

	static private FestivalController m_Instance = null;
	public LoverFlowerWindow m_LoverFlowerWindow;
	public UIGrid     m_TabWindowGrid;

    // 活动按钮
    public enum Tab_Index
    {
		Tab_NianShouDetail = 0,
        Tab_Christmas_ZB,
        Tab_Christmas_WaZi,
        Tab_Spring,
        Tab_HongBao,
        Tab_Lover_Flower,      
		Tab_Lover_Thing, 
        Tab_HeroReturn_YingXiongBeiChu,
        Tab_HeroReturn_JuYiYiTang,
        Tab_HeroReturn_GongZhanTianXia,
        Tab_Max_Num,
    }
    public TabButton[] m_TabWindows = new TabButton[(int)Tab_Index.Tab_Max_Num];
    public GameObject[] m_RedTabWindes = new GameObject[(int)Tab_Index.Tab_Max_Num];

	public static Tab_Index m_nTab = Tab_Index.Tab_Lover_Flower;

    public TabController m_TabController;
    
	public static FestivalController Instance()
    {
        return m_Instance;
    }

     void Awake()
    {
        m_TabController.delTabChanged = OnTabTableau;
    }

    void OnEnable()
    {
        m_Instance = this;

        CleanUp();  // 清理下

        InitUI();   // 初始化

        UpdateTips();    // 更新下
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.FESTIVAL_UI);
#endif
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    void CleanUp()
    {
        for (int i = 0; i < m_TabWindows.Length; i++)
        {
            if (m_TabWindows[i])
            {
                m_TabWindows[i].gameObject.SetActive(false);
            }
            if (m_RedTabWindes[i])
            {
                m_RedTabWindes[i].SetActive(false);
            }
        }
    }

    // 初始化 那些能打开
    void InitUI()
    {
        // 年兽显示
		if(GlobalData.IsNianShouOpen())
		{
			m_TabWindows[(int)Tab_Index.Tab_NianShouDetail].gameObject.SetActive(true);
		}
		// 红包 显示
        if (GlobalData.IsHongBaoOpen())
        {
            m_TabWindows[(int)Tab_Index.Tab_HongBao].gameObject.SetActive(true);
        }

        if (IsOpenBaiNian())
        {
            m_TabWindows[(int)Tab_Index.Tab_Spring].gameObject.SetActive(true);
        }

		if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING)) // 玫瑰传情
		{
			m_TabWindows[(int)Tab_Index.Tab_Lover_Flower].gameObject.SetActive(true);
		}

		if (GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING)) // 玫瑰定情
		{
			m_TabWindows[(int)Tab_Index.Tab_Lover_Thing].gameObject.SetActive(true);
		}

        if (GlobalData.IsHeroReturnOpen())
        {
            m_TabWindows[(int)Tab_Index.Tab_HeroReturn_YingXiongBeiChu].gameObject.SetActive(true);
            m_TabWindows[(int)Tab_Index.Tab_HeroReturn_JuYiYiTang].gameObject.SetActive(true);
            m_TabWindows[(int)Tab_Index.Tab_HeroReturn_GongZhanTianXia].gameObject.SetActive(true);
        }

        // 放最后 重置下位置
        m_TabWindowGrid.Reposition(true);

        // 默认打开 第一个 没有 就不打开了哈
        for (int i = 0; i < m_TabWindows.Length; i++)
        {
            if (m_TabWindows[i] && m_TabWindows[i].gameObject.activeInHierarchy)
            {
                m_TabController.ChangeTab(m_TabWindows[i].gameObject.name);
                break;
            }
        }
		if (YuanBaoShopLogic.YuanBaoShopOpenType == YuanBaoShopLogic.OPEN_TYPE.OPEN_FESTIVAL &&
		    GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LOVERTHING))
		{
			m_TabController.ChangeTab("Tab6");
		}


        // 红包标记的话 默认打开红包吧
        if (GameManager.gameManager.PlayerDataPool.HongBaoRankFlag == true)
        {
            GameManager.gameManager.PlayerDataPool.HongBaoRankFlag = false;
            m_TabController.ChangeTab(m_TabWindows[(int)Tab_Index.Tab_HongBao].name);
        }
    }

    void OnCloseClick()
    {
		UIManager.CloseUI(UIInfo.FestivalController);

		if (FunctionButtonLogic.Instance() != null)
		{
			FunctionButtonLogic.Instance().UpdateFestivalTip();
		}
    }

    public void OnTabTableau(TabButton button)
    {
        if (null == button)
        {
            LogModule.ErrorLog("OnTabTableau::button is null");
            return;
        }

        else if (button.name == m_TabWindows[(int)Tab_Index.Tab_HongBao].name)
        {
            if (GameManager.gameManager.PlayerDataPool.IsShowHongBaoTip == true)
            {
                GameManager.gameManager.PlayerDataPool.IsShowHongBaoTip = false;
                UpdateHongBaoTip();
            }
        }
		else if (button.name == m_TabWindows[(int)Tab_Index.Tab_Lover_Flower].name)
        {
			if (GameManager.gameManager.PlayerDataPool.IsShowLoverFlowerTip == true)
			{
				GameManager.gameManager.PlayerDataPool.IsShowLoverFlowerTip = false;
				UpdateLoverFlowerTip();
			}
        }
		else if (button.name == m_TabWindows[(int)Tab_Index.Tab_Lover_Thing].name)
		{
			if (GameManager.gameManager.PlayerDataPool.IsShowLoverThingTip == true)
			{
				GameManager.gameManager.PlayerDataPool.IsShowLoverThingTip = false;
				UpdateLoverThingTip();
			}
		}
    }

    /// <summary>
    /// 是否开启拜年
    /// </summary>
    /// <returns></returns>
    private bool IsOpenBaiNian()
    {
        if (GameManager.gameManager.PlayerDataPool.OnActivityRewardTable.Count <= 0
            || GameManager.gameManager.PlayerDataPool.OnJoinNumRewardTable.Count <= 0)
        {
            return false;
        }

        //DateTime curTime = Utils.GetServerDateTime();
        //int nDwordTime = curTime.Minute + curTime.Hour * 100 + curTime.Day * 10000 + curTime.Month * 1000000 + (curTime.Year % 100) * 100000000;
        //if (nDwordTime < GameManager.gameManager.PlayerDataPool.m_ActivityRewardSrateTime
        //    || nDwordTime > GameManager.gameManager.PlayerDataPool.m_ActivityRewardEndTime)
        //{
        //    return false;
        //}

        return true;
    }

    // 总更新
    void UpdateTips()
    {
        UpdateHongBaoTip();
        UpdateBaiNianTip();
		UpdateLoverFlowerTip();
		UpdateLoverThingTip();
    }

    public void UpdateHongBaoTip()
    {
        bool bRetShow = GameManager.gameManager.PlayerDataPool.IsShowHongBaoTip;
        m_RedTabWindes[(int)Tab_Index.Tab_HongBao].SetActive(bRetShow);
    }

    public void UpdateBaiNianTip()
    {
        bool bRetShow = GameManager.gameManager.PlayerDataPool.m_IsActivityReward;
        m_RedTabWindes[(int)Tab_Index.Tab_Spring].SetActive(bRetShow);
    }

	public void UpdateLoverFlowerTip()
	{
		bool bRetShow = GameManager.gameManager.PlayerDataPool.IsShowLoverFlowerTip;
		m_RedTabWindes[(int)Tab_Index.Tab_Lover_Flower].SetActive(bRetShow);
	}

	public void UpdateLoverThingTip()
	{
		bool bRetShow = GameManager.gameManager.PlayerDataPool.IsShowLoverThingTip;
		m_RedTabWindes[(int)Tab_Index.Tab_Lover_Thing].SetActive(bRetShow);
	}
}
