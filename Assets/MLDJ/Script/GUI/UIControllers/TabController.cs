/********************************************************************
	created:	2014/01/14
	created:	14:1:2014   13:43
	filename: 	TabController.cs
	author:		王迪
	
	purpose:	Tab页控制器，结构为Tab页控制器--Grid字节点--Tab字项
*********************************************************************/
using UnityEngine;
using System.Collections;
using Module.Log;
public class TabController : MonoBehaviour {

    public int startSelectTab = 0;          // 初始高亮索引

    private TabButton curHighLightTab;      // 当前高亮的索引
    private Transform m_grid;               // 子结点必须有一个GRID
    private bool m_bEnableClick;

    public delegate void TabChangedDelegate(TabButton curButton);
    public TabChangedDelegate delTabChanged;
	void Awake () 
    {

        InitData();
	}

    public void InitData()
    {
        if (null != m_grid)
        {
            return;
        }

        if (gameObject.GetComponent<UIGrid>() != null)
        {
            m_grid = transform;
        }

		else if(gameObject.GetComponent<UICabalGrid>() != null )
		{
			m_grid = transform;
		}
        else if (transform.GetChild(0) != null &&
            (transform.GetChild(0).GetComponent<UIGrid>() != null || transform.GetChild(0).GetComponent<UICabalGrid>() != null))
        {
            m_grid = transform.GetChild(0);
        }

        if (null == m_grid)
        {
            m_grid = transform;
        }
        
        if (null != m_grid)
        {
            for (int i = 0; i < m_grid.childCount; i++)
            {
                Transform gridChild = m_grid.GetChild(i);
                if (null != gridChild && null != gridChild.gameObject)
                {
                    TabButton mTabBtn = gridChild.gameObject.GetComponent<TabButton>();
                    if (null != mTabBtn)
                    {
                        if (i == startSelectTab)
                        {
                            curHighLightTab = mTabBtn;
                            curHighLightTab.HighLightTab(true);
                        }
                        else
                        {
                            mTabBtn.HighLightTab(false);
                        }
                    }
                }
            }


        }

        m_bEnableClick = true;
    }
    public void OnTabClicked(TabButton curTab)
    {
        if (!m_bEnableClick)
        {
            return;
        }

        if (curHighLightTab == curTab) {
          #region
          //策划需求双击主界面上任务界面的任务按钮和组队按钮，分别打开任务界面和组队界面。
          if (curTab != null) {
            switch (curTab.name) {
              case "Tab1-Mission":
                MissionLogLogic.IsOpenFromMissionDialog = true;
                if (PlayerFrameLogic.Instance() != null) {
                  PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
                }
                UIManager.ShowUI(UIInfo.MissionLogRoot);
                break;
              case "Tab2-Team":
                RelationLogic.m_OpenWay = RelationLogic.OPEN_WAY.MISSION_TEAM;
                if (GameManager.gameManager.PlayerDataPool.TeamInfo != null && Games.GlobeDefine.GlobeVar.INVALID_ID != GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
                {
                    RelationLogic.OpenTeamWindow(RelationTeamWindow.TeamTab.TeamTab_TeamInfo);
                }
                else
                {
                    RelationLogic.OpenTeamWindow(RelationTeamWindow.TeamTab.TeamTab_NearTeam);
                }
                break;
              default:
                break;
            }
          }
          #endregion
          return;
        }
		if(RelationFriendWindow.Instance ()!=null && RelationFriendWindow.Instance ().m_OtherWindows.activeSelf)
			RelationFriendWindow.Instance ().m_OtherWindows.SetActive (false);
        DoChangeTab(curTab);
    }

    // 切换标签
    public GameObject ChangeTab(string tabName)
    {
        InitData();
        if (null == m_grid)
        {
            LogModule.ErrorLog("tabcontroller can not find grid");
            return null;
        }

        Transform curTabTrans = m_grid.FindChild(tabName);
        if (null == curTabTrans)
        {
            LogModule.ErrorLog("can not find tabButton" + tabName);
            return null;
        }

        return DoChangeTab(curTabTrans.GetComponent<TabButton>());
    }

    public void ClearTabChoose()
    {
        if (null != m_grid)
        {
            for (int i = 0; i < m_grid.childCount; i++)
            {
                Transform gridChild = m_grid.GetChild(i);
                if (null != gridChild && null != gridChild.gameObject)
                {
                    TabButton mTabBtn = gridChild.gameObject.GetComponent<TabButton>();
                    if (null != mTabBtn)
                    {
                        mTabBtn.HighLightTab(false);
                    }
                }
            }
            curHighLightTab = null;
        }
    }

    // 控制是否接收点击事件
    public void EnableClick(bool bEnable)
    {
        m_bEnableClick = bEnable;
    }

    // 根据名称获取按钮
    public TabButton GetTabButton(string tabName)
    {
        if (null == m_grid)
        {
            return null;
        }

        Transform curTabTrans = m_grid.FindChild(tabName);
        if (null == curTabTrans)
        {
            LogModule.ErrorLog("can not find tabButton" + tabName);
            return null;
        }

        return curTabTrans.GetComponent<TabButton>();
    }

    // 获取当前选中TabButton
    public TabButton GetHighlightTab()
    {
        return curHighLightTab;
    }

    GameObject DoChangeTab(TabButton curTab)
    {
        
        if (null != curHighLightTab)
        {
            curHighLightTab.HighLightTab(false);
        }
        curTab.HighLightTab(true);
        curHighLightTab = curTab;
        if (null != delTabChanged) delTabChanged(curTab);
        return curHighLightTab.GetComponent<TabButton>().targetObject;
    }

    public void SortTabGrid()
    {
        if (null!= m_grid)
        {
            if (null != m_grid.gameObject.GetComponent<UIGrid>())
            {
                m_grid.gameObject.GetComponent<UIGrid>().Reposition();
            }

            if (null != m_grid.gameObject.GetComponent<UITopGrid>())
            {
                m_grid.gameObject.GetComponent<UITopGrid>().Recenter(true);
            }
        }
    }

    /// <summary>
    /// 获取Tab Button GameObject
    /// </summary>
    /// <param name="tabName"></param>
    /// <returns></returns>
    public GameObject GetTabButtonObj(string tabName)
    {
        if (null == m_grid)
        {
            return null;
        }

        Transform curTabTrans = m_grid.FindChild(tabName);
        if (null == curTabTrans)
        {
            LogModule.ErrorLog("can not find tabButton" + tabName);
            return null;
        }

        return curTabTrans.gameObject;
    }
}
