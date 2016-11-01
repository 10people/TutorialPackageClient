//********************************************************************
// 文件名: AppearanceLogic.cs
// 全路径：	\Script\GUI\AppearanceLogic.cs
// 描述: 外观界面
// 作者: roby
// 创建时间: 2015年8月25日15:21:25
//********************************************************************
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.Animation_Modle;
using GCGame.Table;
using Games.MountModule;
using Games.FakeObject;
using GCGame;
using Module.Log;

public class AppearanceLogic : MonoBehaviour
{
    private static AppearanceLogic m_Instance = null;
    public static AppearanceLogic Instance()
    {
        return m_Instance;
    }

    public TabController m_Tabs;
    public GameObject m_FashionPage;
    public GameObject m_MountPage;
    public GameObject m_WingPage;
    
    void Start () 
    {
    
	}   

    void Awake()
    {
        m_Instance = this;
        m_Tabs.delTabChanged = OnTabClick;
        m_Tabs.ChangeTab("Mount");
    }
    
    void OnDestroy()
    {       
        m_Instance = null;        
    }

    void OnEnable()
    {
        m_Instance = this;
    }

    void OnDisable()
    {
        m_Instance = null;
    }

    public void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.MountFrameRoot);
    }

    void OnTabClick(TabButton button)
    {
        m_FashionPage.SetActive(false);
        m_MountPage.SetActive(false);
        m_WingPage.SetActive(false);
        if (button.name == "Fashion")
        {
            m_FashionPage.SetActive(true);
        }
        else if (button.name == "Mount")
        {
            m_MountPage.SetActive(true);
        }
        else if (button.name == "Wing")
        {
            m_WingPage.SetActive(true);
        }

    }
}

