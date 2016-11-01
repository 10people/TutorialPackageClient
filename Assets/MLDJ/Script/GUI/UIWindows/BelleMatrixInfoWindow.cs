/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleMatrixInfoWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleMatrixInfoWindow.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/7/3 16:00:15
*****************************************************************************/
using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame.Table;
using GCGame;
using Games.LogicObj;
using System.Collections.Generic;

public class BelleMatrixInfoWindow : MonoBehaviour
{
    public GameObject m_belleMatrixItem;
    public GameObject m_matrixGrid;

    //阵法上详细信息
    public BelleMatrixDetailBand matrixDetailBand;
    //阵法激活按钮
    public UILabel m_LabelBtnActive;
    public UIImageButton btnActive;
    private Color m_ColorHighlight = new Color(162.0f / 255.0f, 1.0f, 0, 1.0f);
    private Color m_ColorDisable = new Color(64 / 255.0f, 64 / 255.0f, 64 / 255.0f, 1.0f);
    private int m_curShowMatrixID;
    private BelleMatrixInfoItem m_curSelectMatrix;
    // Use this for initialization
    void Start()
    {
        FillMatrixList();
    }

     void OnEnable()
    {
        ShowMatrixByItem();
    }
    // Update is called once per frame
    void Update()
    {

    }

    /// <summary>
    /// 填充阵型列表
    /// </summary>
    /// <param name="item"></param>
    public void FillMatrixList()
    {
        if (null == m_belleMatrixItem)
        {
            LogModule.ErrorLog("m_belleMatrixItem is not found!");
        }

        for (int i = 0; i < TableManager.GetBelleMatrix().Count; i++)
        {
            Tab_BelleMatrix belleMatrixTab = TableManager.GetBelleMatrixByID(i, 0);
            if (null == belleMatrixTab)
            {
                continue;
            }

            GameObject curItem = Utils.BindObjToParent(m_belleMatrixItem, m_matrixGrid);
            if (curItem != null && curItem.GetComponent<BelleMatrixInfoItem>() != null)
            {
                curItem.GetComponent<BelleMatrixInfoItem>().SetData(this,i,belleMatrixTab);
            }
        }

        m_matrixGrid.GetComponent<UICabalGrid>().repositionNow = true;

        Transform curMatrix = m_matrixGrid.transform.FindChild("0");
        if (null != curMatrix)
        {
            m_curSelectMatrix = curMatrix.GetComponent<BelleMatrixInfoItem>();
            if (m_curSelectMatrix != null)
            {
                m_curSelectMatrix.SetClickHighLight(true);
            }

            ShowMatrixByItem();
        }
    }

    /// <summary>
    /// 点击阵型列表响应函数
    /// </summary>
    /// <param name="objItem"></param>
    public void OnMatrixListItemClick(GameObject objItem)
    {

        if (null != m_curSelectMatrix)
        {
            m_curSelectMatrix.SetClickHighLight(false);
        }

        m_curSelectMatrix = objItem.GetComponent<BelleMatrixInfoItem>();
        if (null != m_curSelectMatrix)
            m_curSelectMatrix.SetClickHighLight(true);

        ShowMatrixByItem();
    }

    /// <summary>
    /// 点击Item显示对应的阵型
    /// </summary>
    private void ShowMatrixByItem()
    {

        if (null == m_curSelectMatrix)
        {
            return;
        }
        int matrixID;
        if (!int.TryParse(m_curSelectMatrix.gameObject.name, out matrixID))
        {
            return;
        }

        Tab_BelleMatrix curTabMatrix = TableManager.GetBelleMatrixByID(matrixID, 0);
        if (null == curTabMatrix)
        {
            LogModule.ErrorLog("can not find cur matrix id :" + matrixID.ToString());
            return;
        }

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;

        if (!BelleData.OwnedMatrixMap.ContainsKey(matrixID) || null == mainPlayer || mainPlayer.BaseAttr.Level < curTabMatrix.OpenLevel)
        {
            m_LabelBtnActive.text = Utils.GetDicByID(3408);
            btnActive.isEnabled = false;
        }
        else
        {
            if (BelleData.OwnedMatrixMap[matrixID].isActive)
            {
                //如果已经激活，则可以取消激活
                btnActive.isEnabled = true;
                m_LabelBtnActive.text = Utils.GetDicByID(4772);
            }
            else
            {
                m_LabelBtnActive.text = Utils.GetDicByID(3408);
                int activeCount = 0;
                foreach (KeyValuePair<int, BelleMatrix> curMatrixPair in BelleData.OwnedMatrixMap)
                {
                    if (curMatrixPair.Value.isActive)
                    {
                        activeCount++;
                    }
                }
                // 如果未激活，并且激活数量小于2，可以点激活
                // 如果未激活，并且激活数量大于1，不能激活

                btnActive.isEnabled = activeCount < 2;
            }
        }
        matrixDetailBand.SetMatrix(matrixID);
        m_curShowMatrixID = matrixID;
    }

    /// <summary>
    /// 添加其他美人响应函数
    /// </summary>
    public void OnClickPlusOtherBelle()
    {
        
    }

    /// <summary>
    /// 点击美人图片按钮
    /// </summary>
    public void OnClickBelleIcon()
    {
        
        //显示美人详细信息界面
        ///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        // showSomething();
    }
}
