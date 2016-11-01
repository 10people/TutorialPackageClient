using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using System;
using Module.Log;
using System.Collections.Generic;

public class SelectMyBelleTOMatrixWindow : MonoBehaviour
{
    public GameObject m_myBelleGrid;
    public GameObject m_myBelleItem;

    //当前阵上的美人Item
    public GameObject m_curMatrixBelleItem;

    public GameObject m_curMatrixObj;
    public Vector3 m_curScrollViewListOriPositon;
    //有第一个美人的时候滑动列表的起始位置
    public Vector3 m_curScrollViewListPosition;

    public Vector4 m_curScrollViewPanelFrom;
    public Vector4 m_curScrollViewPanelTo;

    public Vector3 m_scrollPosition;
    public UIPanel m_curScrollViwPanel;
    public GameObject m_scrollViewList;
    private static SelectMyBelleTOMatrixWindow m_instance = null;
    public static SelectMyBelleTOMatrixWindow Instance()
    {
        return m_instance;
    }

    // Use this for initialization
    void Start()
    {
        m_instance = this;
    }
    void OnEnable()
    {
        FillMyBelleList();
    }
    // Update is called once per frame
    void Update()
    {

    }

    public void FillMyBelleList()
    {
        if (BelleMatrixBand.Instance() == null)
        {
            return;
        }
        m_curScrollViwPanel.transform.localPosition = m_scrollPosition;
//        m_curMatrixObj.SetActive(BelleMatrixBand.Instance().SelectBelleData.belleID != -1);
        m_scrollViewList.transform.localPosition = m_curScrollViewListOriPositon;
        m_curScrollViwPanel.clipRange = m_curScrollViewPanelFrom;
/*        if (m_curMatrixObj.activeSelf)
        {
            BelleSelectToMatrixItem selectBelleItem = m_curMatrixBelleItem.GetComponent<BelleSelectToMatrixItem>();
            if (selectBelleItem != null)
            {
                selectBelleItem.SetData(this, BelleMatrixBand.Instance().SelectBelleData, 0);
            }
            m_scrollViewList.transform.localPosition = m_curScrollViewListPosition;
            m_curScrollViwPanel.clipRange = m_curScrollViewPanelTo;

        }*/

        Utils.CleanGrid(m_myBelleGrid);
		List<SelectBelleData>  recommondBelleData = new List<SelectBelleData>();
		//if the clicked slot is not empty, insert bell info to the top of the list.
		m_curMatrixObj.SetActive (false);
		if (BelleMatrixBand.Instance ().SelectBelleData.belleID != -1) 
		{
			recommondBelleData.Add (BelleMatrixBand.Instance ().SelectBelleData);
			int count = BelleMatrixBand.Instance().SelectBelleList.Count;
			for (int i = 0; i < count; i++)
			{
				recommondBelleData.Add(BelleMatrixBand.Instance().SelectBelleList[i]);
			}
		} 
		else 
		{
			recommondBelleData = BelleMatrixBand.Instance().SelectBelleList;
		}
        if (null == recommondBelleData || recommondBelleData.Count == 0)
        {
            return;
        }

        if (null == m_myBelleItem)
        {
            LogModule.ErrorLog("MyBelleItem is null!");
            return;
        }

        for (int i = 0; i < recommondBelleData.Count; i++)
        {
            GameObject curItem = Utils.BindObjToParent(m_myBelleItem,m_myBelleGrid) as GameObject;

            if (curItem != null)
            {
                BelleSelectToMatrixItem selectBelleItem = curItem.GetComponent<BelleSelectToMatrixItem>();
                if (selectBelleItem != null)
                {
                    selectBelleItem.SetData(this,recommondBelleData[i],i);
                }
            }
        }
        if (m_myBelleGrid != null && m_myBelleGrid.GetComponent<UIGrid>() != null)
        m_myBelleGrid.GetComponent<UIGrid>().Reposition();
    }

    public void OnCloseClick()
    {
        gameObject.SetActive(false);
    }
}
