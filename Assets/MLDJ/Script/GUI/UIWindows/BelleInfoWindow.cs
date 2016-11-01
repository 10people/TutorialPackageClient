/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleInfoWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleInfoWindow.cs
    *  @filePaht : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/6/30 17:37:40
*****************************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;

/// <summary>
/// 弃用
/// </summary>
public class BelleInfoWindow : MonoBehaviour
{

    //scrollViewBelle
    public GameObject m_belleItem;
    public UICabalGrid m_belleGrid;

    public GameObject m_ownBelleWin;
    public GameObject m_unOwnBelleWin;

    private static BelleInfoWindow m_Instance = null;
    public static BelleInfoWindow Instance()
    {
        return m_Instance;
    }

    private Tab_Belle m_curSelectedBelleData = null;
    public Tab_Belle CurSellectedBelleData
    {
        get { return m_curSelectedBelleData; }
        set { m_curSelectedBelleData = value; }
    }

    BelleShowItem m_curSelectBelle;
    //belleList data
    private static List<int> m_belleList = new List<int>();


    // Use this for initialization
    void Awake()
    {

      m_Instance = this;
    }
    void Start()
    {
        
        FillScrollViewList(m_belleItem);

        Check_NewPlayerGuide();

    }

    void OnEnable()
    {
       
    }
    // Update is called once per frame
    void Update()
    {
    }

    public void UpdateScrollViewList()
    {       
        //Utils.CleanGrid(m_belleGrid.gameObject);
//         FillScrollViewList(m_belleItem,true);
        if(m_curSelectBelle != null)
        {
            m_curSelectBelle.UpdateData();
        }
    }

    public void UpdateCloseRedTipState()
    {
//         if (m_curSelectBelle != null)
//         {
//             m_curSelectBelle.UpdateCloseRedTip();
//         }

        if(m_belleGrid != null)
        {
            for (int i = 0; i < m_belleGrid.gameObject.transform.childCount; i++)
            {
               Transform itemTrans = m_belleGrid.gameObject.transform.GetChild(i);
               BelleShowItem belleItemLogic = itemTrans.gameObject.GetComponent<BelleShowItem>();

               if (belleItemLogic != null)
               {
                   belleItemLogic.UpdateCloseRedTip(); 
               }
            }
        }
        
    }

    public void UpdateEvoRedTipState()
    {
        if (m_curSelectBelle != null)
        {
            m_curSelectBelle.SetEvoRedTip(false);
        }
    }
    /// <summary>
    /// fillBelleList
    /// </summary>
    private void FillScrollViewList(GameObject item)
    {
        m_belleList.Clear();
        int nOwnBelleIndex = 0;

        foreach (int bellId in TableManager.GetBelle().Keys)
        {
            if (BelleData.OwnedBelleMap.ContainsKey(bellId))
            {
                m_belleList.Insert(nOwnBelleIndex++, bellId);
            }
            else
            {
                m_belleList.Add(bellId);
            }
        }

        for (int i = 0, count = m_belleList.Count; i < count; i++)
        {
            Tab_Belle curBelle = TableManager.GetBelleByID(m_belleList[i], 0);
            if (curBelle != null)
            {
                GameObject belleItemObj = GameObject.Instantiate(item) as GameObject;
                if (null == belleItemObj)
                {
                    continue;
                }

                belleItemObj.transform.parent = m_belleGrid.transform;
                belleItemObj.transform.localPosition = Vector3.zero;
                belleItemObj.transform.localScale = Vector3.one;

                BelleShowItem belleItemLogic = belleItemObj.GetComponent<BelleShowItem>();
                if (belleItemLogic != null)
                {
                    belleItemLogic.SetData(this, m_belleList[i], curBelle, BelleData.OwnedBelleMap.ContainsKey(m_belleList[i]));
                }
            }
        }
        m_belleGrid.Reposition();

        Transform curSelectBelle = m_belleGrid.transform.FindChild(m_belleList.Count > 0 ? m_belleList[0].ToString() : "");
        if (null != curSelectBelle)
        {
            m_curSelectBelle = curSelectBelle.GetComponent<BelleShowItem>();
            if (m_curSelectBelle != null)
            {
                m_curSelectBelle.SetClickHighLight(true);
            }
        }
        int belleId;
        if (null == m_curSelectBelle || !int.TryParse(m_curSelectBelle.gameObject.name, out belleId))
        {
            return;
        }
        if (0 < m_belleList.Count)
        {
            ShowBelleInfoWindow(TableManager.GetBelleByID(belleId, 0), BelleData.OwnedBelleMap.ContainsKey(belleId));
        }
    }

    /// <summary>
    /// 更新后的回调
    /// </summary>
    private void FillScrollViewList(GameObject item, bool isUpdate)
    {
        m_belleList.Clear();
        int nOwnBelleIndex = 0;

        foreach (int bellId in TableManager.GetBelle().Keys)
        {
            if (BelleData.OwnedBelleMap.ContainsKey(bellId))
            {
                m_belleList.Insert(nOwnBelleIndex++, bellId);
            }
            else
            {
                m_belleList.Add(bellId);
            }
        }

        for (int i = 0, count = m_belleList.Count; i < count; i++)
        {
            Tab_Belle curBelle = TableManager.GetBelleByID(m_belleList[i], 0);
            if (curBelle != null)
            {
                GameObject belleItemObj = GameObject.Instantiate(item) as GameObject;
                if (null == belleItemObj)
                {
                    continue;
                }

                belleItemObj.transform.parent = m_belleGrid.transform;
                belleItemObj.transform.localPosition = Vector3.zero;
                belleItemObj.transform.localScale = Vector3.one;

                BelleShowItem belleItemLogic = belleItemObj.GetComponent<BelleShowItem>();
                if (belleItemLogic != null)
                {
                    belleItemLogic.SetData(this, m_belleList[i], curBelle, BelleData.OwnedBelleMap.ContainsKey(m_belleList[i]));
                }
            }
        }
        m_belleGrid.Reposition();

        if (isUpdate)
        {
            Transform curSelectBelle = m_belleGrid.transform.FindChild(m_belleList.Count > 0 ? m_belleList[0].ToString() : "");
            if (null != curSelectBelle)
            {
                m_curSelectBelle = curSelectBelle.GetComponent<BelleShowItem>();
                if (m_curSelectBelle != null)
                {
                    m_curSelectBelle.SetClickHighLight(true);
                }
            }
            int belleId;
            if (null == m_curSelectBelle || !int.TryParse(m_curSelectBelle.gameObject.name, out belleId))
            {
                return;
            }
            if (0 < m_belleList.Count)
            {
                ShowBelleInfoWindow(TableManager.GetBelleByID(belleId, 0), BelleData.OwnedBelleMap.ContainsKey(belleId));
            }
        }
    }
    /// <summary>
    /// 显示美人属性界面
    /// </summary>
    /// <param name="tabBelle"></param>
    /// <param name="isOwn"></param>
    public void ShowBelleInfoWindow(Tab_Belle tabBelle, bool isOwn)
    {
        m_curSelectedBelleData = tabBelle;
        m_unOwnBelleWin.SetActive(!isOwn);
        if (m_unOwnBelleWin.activeSelf)
        {
            BelleUnOwnWindow belleUnOwnWindow = m_unOwnBelleWin.GetComponent<BelleUnOwnWindow>();
            if (belleUnOwnWindow != null)
            {
                belleUnOwnWindow.SetUnOwnBelleInfo();
            }
        }

        m_ownBelleWin.SetActive(isOwn);
        if (m_ownBelleWin.activeSelf)
        {
            BelleOwnWindow belleOwnwindow = m_ownBelleWin.GetComponent<BelleOwnWindow>();
            if (belleOwnwindow != null)
            {
                belleOwnwindow.SetData();
                belleOwnwindow.SetUpdateEva(true);
            }
        }

    }

    public void OnClickBelleItem(GameObject item)
    {
        if (m_curSelectBelle != null)
        {
            m_curSelectBelle.SetClickHighLight(false);
        }
        m_curSelectBelle = item.GetComponent<BelleShowItem>();
        if (null == m_curSelectBelle)
            return;
        m_curSelectBelle.SetClickHighLight(true);

        int belleId;
        if (!int.TryParse(m_curSelectBelle.gameObject.name, out belleId))
        {
            return;
        }
        ShowBelleInfoWindow(TableManager.GetBelleByID(belleId, 0), BelleData.OwnedBelleMap.ContainsKey(belleId));
    }

    /// <summary>
    /// 弃用
    /// </summary>
    void Check_NewPlayerGuide()
    {
        if (BelleController.Instance() && BelleController.Instance().NewPlayerGuide_Step == 1)
        {
            //10号魂器女王蜂，作为新手引导的ID。如有修改，要改这里
            Transform itemTrans = m_belleGrid.transform.FindChild("10");
            if (itemTrans)
            {
                BelleShowItem BelleItem = itemTrans.GetComponent<BelleShowItem>();
                if (BelleItem)
                {
                    BelleItem.NewPlayerGuide(1);
                }
            }
        }
    }
}
