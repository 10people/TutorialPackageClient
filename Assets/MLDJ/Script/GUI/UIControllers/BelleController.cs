/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleController.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIControllers\BelleController.cs
    *  @filePaht : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIControllers

    *  @author   : fanzhipeng
    *  @date     : 2015/6/30 16:37:49
*****************************************************************************/

using UnityEngine;
using System.Collections;
using Module.Log;
using System.Collections.Generic;
public class BelleController : UIControllerBase<BelleController>
{
    public GameObject BelleCollectRedPoint;
    public GameObject BelleBattleRedPoint;
    //TabBtn 
    public GameObject m_belleInfoBtn;
    public GameObject m_matrixInfoBtn;
    public GameObject m_belleShowInfoBtn;
    public GameObject m_belleNormalObj;
    public GameObject m_bellePressedObj;
    public GameObject m_matrixNormalObj;
    public GameObject m_matrixPressedObj;
    public GameObject m_belleShowNormalObj;
    public GameObject m_belleShowPressedObj;


    private string curtabStr;


    //window
    public GameObject m_belleInfoWin;
    public GameObject m_matrixInfoWin;
    public GameObject m_belleShowInfoWin;

    public GameObject m_GuidePoint;

    public GameObject m_ObjNewMatrixTip;

    void Awake()
    {
        SetInstance(this);
    }

    void Start()
    {
        //InitTabInfo
        InitTabBtn();
        CheckNewPlayerGuide();
        BelleData.CleanBelleTip();

        UpdateNewMatrixTip();
    }

    void UpdateTabBtn(string name)
    {
      //m_belleNormalObj.SetActive(name != "belletab");
      //m_bellePressedObj.SetActive(name == "belletab");
      m_matrixNormalObj.SetActive(name != "matrixtab");
      m_matrixPressedObj.SetActive(name == "matrixtab");
      m_belleShowNormalObj.SetActive(name != "belleshowtab");
      m_belleShowPressedObj.SetActive(name == "belleshowtab");
    }
    /// <summary>
    /// InitTabInfo
    /// </summary>
    private void InitTabBtn()
    {
        if (string.IsNullOrEmpty(curtabStr)) {
            curtabStr = "belletab";
            m_belleInfoWin.SetActive(false);
            m_matrixInfoWin.SetActive(false);
            m_belleShowInfoWin.SetActive(true);
            UpdateTabBtn("belleshowtab");
        }
    }

    /// <summary>
    /// ChangeTab
    /// </summary>
    public void OnChangeTab(GameObject btn)
    {
        LogModule.DebugLog("Tab btn is pressed  " + btn.name);
        OnChangeTab(btn.name);
        if (btn == m_belleShowInfoBtn&&m_FTEIndex == 1)
        {
            DoFTE(2);
        }
    }

    public void OnChangeTab( string strTableIndex )
    {
        if( strTableIndex != curtabStr ) {
            curtabStr = strTableIndex;
            m_belleInfoWin.SetActive(strTableIndex == "belletab");
            m_matrixInfoWin.SetActive(strTableIndex == "matrixtab");
            m_belleShowInfoWin.SetActive(strTableIndex == "belleshowtab");
            UpdateTabBtn(strTableIndex);
        }
    }

    public void OnCloseClick()
    {
        if (m_NewPlayerGuide_Step == 2 && MenuBarLogic.Instance())
        {
            MenuBarLogic.Instance().NewPlayerGuide(101);
        }
        UIManager.CloseUI(UIInfo.Belle);
    }

    private int m_NewPlayerGuide_Step = -1;
    public int NewPlayerGuide_Step
    {
        get { return m_NewPlayerGuide_Step; }
        set { m_NewPlayerGuide_Step = value; }
    }
    public GameObject m_CloseButton; // 关闭按钮

    void CheckNewPlayerGuide()
    {
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 1)
        {
            // 1代表之前是开启魂器引导
            NewPlayerGuide(4);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
        else if (nIndex == 4)
        {
            // 阵法引导
            NewPlayerGuide(1);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }
    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 1:
                // 点击魂器上阵分页，后接BelleMatrixBand
                NewPlayerGuidLogic.OpenWindow(m_matrixInfoBtn, 130, 60, GCGame.Utils.GetDicByID(11353), "center", 0, true, true);
                break;
            case 3:
                // 点击关闭按钮
                NewPlayerGuidLogic.OpenWindow_Circle(m_GuidePoint, 100, GCGame.Utils.GetDicByID(11355), "left", 0, true, true);
                break;
            case 4:
                // 指向左侧魂器模型，加提示文字（字典号11398）
                NewPlayerGuidLogic.OpenWindow(m_belleShowInfoWin.transform.FindChild("BGDi").gameObject, 180, 180, 
                    GCGame.Utils.GetDicByID(11398), "right", -1, true, true, false, null, null, 0, 0, true, false, () =>
                {
                    NewPlayerGuide(5);
                });
                break;
            case 5:
                // 强制点击女王蜂图标（字典号11399）,后接BelleOwnWindow.NewPlayerGuide(1)
                NewPlayerGuidLogic.OpenWindow(m_belleShowInfoWin.GetComponent<BelleShowWindow>().GridParent.FindChild("10").gameObject, 160, 160,
                    GCGame.Utils.GetDicByID(11399), "left", 2, true, true);
                break;
        }
    }

    public void UpdateNewMatrixTip()
    {
        if (BelleData.IsAddNewMatrix())
        {
            //Debug.Log("is add matrix is true..........................................................................................................................");
        }
        else
        {
            //  Debug.Log("isnot add matrix is false..........................................................................................................................");            
        }

        m_ObjNewMatrixTip.SetActive(BelleData.IsAddNewMatrix());
    }
    void OnEnable()
    {
        UpdateTapRedPoint();
        if (MenuBarLogic.Instance() != null && MenuBarLogic.Instance().NewPlayerGuideIndex == 99)
        {
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
            DoFTE(1);
        }
    }
    public int FTEIndex
    {
        get { return m_FTEIndex; }
    }
    private int m_FTEIndex = -1;
    public void DoFTE(int index)
    {
        m_FTEIndex = index;
        switch (m_FTEIndex)
        {
            case 1:
                NewPlayerGuidLogic.OpenWindow(m_belleShowInfoBtn, 32, 269, "", "right", 0, true, false);
                break;
            case 2:
                NewPlayerGuidLogic.OpenWindow(m_belleShowInfoWin.GetComponent<BelleShowWindow>().GridParent.FindChild("10").gameObject, 160, 160,
                    GCGame.Utils.GetDicByID(11399), "left", 2, true, true);
                break;
            case 3:
                if (BelleOwnWindow.Instance() != null)
                {
                    NewPlayerGuidLogic.OpenWindow(BelleOwnWindow.Instance().AdvancePlane.transform.parent.gameObject, 160, 160, GCGame.Utils.GetDicByID(11460), "left", 0, true, true);
                }
                break;
            case 4:
                if (BelleOwnWindow.Instance() != null && BelleOwnWindow.Instance().AdvancePlane != null)
                {
                    Transform tf = BelleOwnWindow.Instance().AdvancePlane.transform.Find("Once");
                    if (tf != null)
                    {
                        NewPlayerGuidLogic.OpenWindow(tf.gameObject, 160, 160, GCGame.Utils.GetDicByID(11461), "left", 0, true, true);
                    }
                }
                break;
            case 5:
                if (BelleOwnWindow.Instance() != null)
                {
                    NewPlayerGuidLogic.OpenWindow(BelleOwnWindow.Instance().AdvancePlane.transform.parent.gameObject, 160, 160, GCGame.Utils.GetDicByID(11462), "left", 0, true, true);
                }
                break;
            case 6:
                if (BelleOwnWindow.Instance() != null)
                {
                    NewPlayerGuidLogic.OpenWindow(BelleOwnWindow.Instance().m_curBelleMainColorPic.gameObject, 180, 180,
                    GCGame.Utils.GetDicByID(11463), "right", -1, true, true, false, null, null, 0, 0, true, false, () =>
                    {
                        DoFTE(7);
                    });
                }
                break;
            case 7:
                if (BelleOwnWindow.Instance() != null)
                {
                    Transform tf = BelleOwnWindow.Instance().transform.Find("Close");
                    if (tf != null)
                    {
                        NewPlayerGuidLogic.OpenWindow(tf.gameObject, 160, 160, GCGame.Utils.GetDicByID(11464), "left", 0, true, true);
                    }
                }
                break;
        }
    }
    private void AfterIntroduceBelleLevel()
    {
        DoFTE(7);
    }
    public void UpdateTapRedPoint()
    {
        BelleData.CalculateCreateNewBelle();
        BelleData.CalculateActiveMatrixIds();
        if (BelleCollectRedPoint != null)
        {
            BelleCollectRedPoint.SetActive(BelleData.RedPointBelleIds.Count > 0);
        }
        if (BelleBattleRedPoint != null)
        {
			int count = GetActiveMatrixCount();
			BelleBattleRedPoint.SetActive(BelleData.RedPointMatrixIds.Count > 0 && count<2);
        }
    }
	private int GetActiveMatrixCount()
	{
		int activeCount = 0;
		foreach (KeyValuePair<int, BelleMatrix> curMatrixPair in BelleData.OwnedMatrixMap)
		{
			if (curMatrixPair.Value.isActive)
			{
				activeCount++;
			}
		}
		return activeCount;
	}
}
