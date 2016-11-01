/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleGetItemWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleGetItemWindow.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/7/8 17:19:55
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using System.Collections.Generic;
using Module.Log;
using GCGame;

public class BelleGetItemWindow : MonoBehaviour
{
    public UISprite m_belleItemIcon;
    public UILabel m_belleItemName;
    public UILabel m_belleItemCount;

    public GameObject m_belleItem;
    public UICabalGrid m_belleGrid;

    private static BelleGetItemWindow m_instance = null;
    public static BelleGetItemWindow Instance()
    {
        return m_instance;
    }

    private List<Tab_BelleGetItemWay> m_belleGetItemList = new List<Tab_BelleGetItemWay>();
    private Tab_Belle m_curSelectBelleTab = null;

    private BelleItemGetShowItem m_curSelectBelleItem;
    void Awake()
    {
        m_instance = this;
    }
    // Use this for initialization
    void Start()
    {
        
    }

    void OnEnable()
    {
        if (BelleInfoWindow.Instance() != null)
        {
            m_curSelectBelleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
        }

        if (null == m_belleGetItemList)
        {
            m_belleGetItemList = new List<Tab_BelleGetItemWay>();
        }
        else
        {
            m_belleGetItemList.Clear();
        }
        SetData();
        FillScrollViewList(m_belleItem);
    }

    // Update is called once per frame
    void Update()
    {

    }

    private void FillScrollViewList(GameObject item)
    {
        if(m_belleGetItemList != null)
        m_belleGetItemList.Clear();
        else
        {
            return;
        }
        Utils.CleanGrid(m_belleGrid.gameObject);
        FillBelleItemList();

        for (int i = 0, cout = m_belleGetItemList.Count; i < cout; i++)
        {
            Tab_BelleGetItemWay belleGetItemWayTab = m_belleGetItemList[i];
            if (belleGetItemWayTab != null)
            {
                GameObject belleGetItemObj = GameObject.Instantiate(item) as GameObject;
                if (null == belleGetItemObj)
                {
                    continue;
                }
                belleGetItemObj.transform.parent = m_belleGrid.transform;
                belleGetItemObj.transform.localPosition = Vector3.zero;
                belleGetItemObj.transform.localScale = Vector3.one;

                BelleItemGetShowItem belleItemLogic = belleGetItemObj.GetComponent<BelleItemGetShowItem>();
                if (belleItemLogic != null)
                {
                    belleItemLogic.SetData(this, belleGetItemWayTab);
                }
            }
        }
        m_belleGrid.Reposition();
    }

    private void FillBelleItemList()
    {
        if (m_curSelectBelleTab != null)
        {
            string wayIdStr = m_curSelectBelleTab.WayIdS;
            List<int> nWayIds = GetWayIdByWayIds(wayIdStr);

            for (int i = 0; nWayIds != null && i < nWayIds.Count; i++)
            {
                Tab_BelleGetItemWay itemWayTab = TableManager.GetBelleGetItemWayByID(nWayIds[i],0);
                m_belleGetItemList.Add(itemWayTab);
            }
        }
    }

    private List<int> GetWayIdByWayIds(string wayIds)
    {
        List<int> nWayIdS = new List<int>();
        if (null == wayIds)
        {
            return nWayIdS;
        }
        LogModule.DebugLog(wayIds);
        string[] tempStr = wayIds.Trim("\"".ToCharArray()).Split(',');

		for (int i = 0; i < tempStr.Length; i++) {
            LogModule.DebugLog(tempStr[i]);
		}	

        for (int i = 0; tempStr != null && i < tempStr.Length; i++)
        {
            int nWayId = -1;
            int.TryParse(tempStr[i], out nWayId);
            nWayIdS.Add(nWayId);
        }
        return nWayIdS;
    }
    public void OnClickBelleItem(GameObject item)
    {
        m_curSelectBelleItem = item.GetComponent<BelleItemGetShowItem>();
        if (null == m_curSelectBelleItem)
            return;
        int nWayId;
        if (!int.TryParse(m_curSelectBelleItem.gameObject.name, out nWayId))
        {
            return;
        }

        Tab_BelleGetItemWay belleGetItemWayTab = TableManager.GetBelleGetItemWayByID(nWayId,0);
        if (null == belleGetItemWayTab)
        {
            return;
        }

        switch(belleGetItemWayTab.WayType)
        {
            case 1:
                if (UIPathData.m_DicUIName.ContainsKey(belleGetItemWayTab.WayValue))
                {
                    UIManager.CloseUI(UIInfo.Belle);
                    UIManager.ShowUI(UIPathData.m_DicUIName[belleGetItemWayTab.WayValue]);
                }
                break;
            case 2:
                MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{" + belleGetItemWayTab.WayValue + "}"));
                break;
        }
    }

    public void SetData()
    {
        if (m_curSelectBelleTab != null)
        {
            Tab_CommonItem commonItemTab = TableManager.GetCommonItemByID(m_curSelectBelleTab.BelleItemID, 0);
            if (commonItemTab != null)
            {
                m_belleItemIcon.spriteName = commonItemTab.Icon;
            }

            m_belleItemName.text = m_curSelectBelleTab.Name;
            int belleSubItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(m_curSelectBelleTab.BelleItemID);
            m_belleItemCount.text = StrDictionary.GetClientDictionaryString("#{10258}", belleSubItemCount, m_curSelectBelleTab.BelleItemCount);
        }
    }
    public void OnClose()
    {
        gameObject.SetActive(false);
    }

}
