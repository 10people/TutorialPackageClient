using UnityEngine;
using System.Collections;
using GCGame;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.UserCommonData;
using Module.Log;
public class QianDaoController : UIControllerBase<QianDaoController> 
{
    private enum TabIndex
    {
        Tab_Denglu=0,
        Tab_YueDu,
        Tab_TianDao
    }

    public TabController m_TabConLeft;//左侧TabCon
    public GameObject[] m_objTitles;
    void Awake()
    {
        SetInstance(this);
        m_TabConLeft.delTabChanged = OnTabChange;
    }
    void OnEnable()
    {
        SetInstance(this);
        InitData();
    }
    void OnDisable()
    {
        SetInstance(null);
    }


    void InitData()
    {
        
    }
    #region UI事件
    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.SignReward);
    }
    #endregion
    void OnTabChange(TabButton button)
    {
        if (button.name == "Button1_Denglu")
        {
            UpdateTitles(0);
        }
        else if (button.name == "Button2_Meiri")
        {
            UpdateTitles(1);
        }
        else if (button.name == "Button3_Tiandaochouqin")
        {
            UpdateTitles(2);
        }
    }
    private void UpdateTitles(int index)
    {
        for (int i = 0; i < m_objTitles.Length; i++)
        {
            if (i == index)
            {
                m_objTitles[i].SetActive(true);
            }
            else
            {
                m_objTitles[i].SetActive(false);
            }
        }
    }
}
