/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleInfoWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleMatrixWindow.cs
    *  @filePaht : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/6/30 17:37:40
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using System.Collections.Generic;
using Games.LogicObj;
using Module.Log;
using System;
public class BelleMatrixWindow : MonoBehaviour
{

    //阵法列表
    public GameObject MatrixListGrid;
    public GameObject m_ObjBelleMatrixItem;
    //阵法激活按钮
    public UIImageButton btnActive;
    //激活按钮文字
    public UILabel m_LabelBtnActive;
    //当前激活的数量
    public UILabel m_LabelMatrixActiveNum;

    //阵法总节点（内容信息）
    public GameObject MatrixInfo;
    //         //阵法详细属性信息
    public BelleMatrixDetailBand matrixDetailBand;

    //阵型布局界面
    public GameObject m_curMatrixBand;

    //     
    //        
    //     

    //     public Vector2 matrixStartPos;
    //     public float matrixXDiff;
    //     public float matrixYDiff;
    //  public MyBelleWindow m_MyBelleWindow;



    private BelleMatrixItem m_curSelectMatrix;
    public BelleMatrixItem CurSelectMatrix
    {
        get { return m_curSelectMatrix; }
        set { m_curSelectMatrix = value; }
    }
    private string m_curBelleID;
    private bool m_bEnableSelectMode = false;        // 是否增在等待选择确定模式
    private int m_curShowMatrixID;
    private SelectFromType m_curSelectFromType;

    private int m_curSelectMatrixIndex = 0;
	private int m_activeCount = 0;//魂器上阵激活数量

    public enum SelectFromType
    {
        TYPE_MYBELLE,
        TYPE_BELLEDETAIL,
    }

    private static BelleMatrixWindow m_instance = null;
    public static BelleMatrixWindow Instance()
    {
        return m_instance;
    }

    void OnEnable()
    {
        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        /////////////////////////////////////////////////////////////////////////////////////////////////////////////提示信息
        if (null != mainPlayer && PlayerPreferenceData.BelleMatrixTipLevel < mainPlayer.BaseAttr.Level)
        {
            PlayerPreferenceData.BelleMatrixTipLevel = mainPlayer.BaseAttr.Level;
            if (null != BelleController.Instance())
            {
                BelleController.Instance().UpdateNewMatrixTip();
            }
        }
        BelleData.delRest += Ret_BelleRest;
        BelleData.delActiveMatrix += Ret_ActiveMatrix;
        BelleData.delBattle += Ret_Battle;
        m_bEnableSelectMode = false;
        ShowMatrixByItem();
        UpdateMatrixItems();
        Invoke("BelleMatrixShowRedPoint", 0.1f);
    }

    void OnDisable()
    {
        BelleData.delRest -= Ret_BelleRest;
        BelleData.delActiveMatrix -= Ret_ActiveMatrix;
        BelleData.delBattle -= Ret_Battle;
    }
    void Start()
    {
        m_instance = this;
        UpdateBelleMatrixItems();
    }

    void UpdateBelleMatrixItems()
    {
        // 加载阵型Item
        if (null == m_ObjBelleMatrixItem)
        {
            LogModule.ErrorLog("can not load belle matrix item prefab in m_ObjBelleMatrixItem:");
            return;
        }

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null == mainPlayer)
        {
            return;
        }
        for (int i = 0; i < TableManager.GetBelleMatrix().Count; i++)
        {
            Tab_BelleMatrix curBelleMatrix = TableManager.GetBelleMatrixByID(i, 0);
            if (null == curBelleMatrix)
            {
                continue;
            }

            GameObject curItem = Utils.BindObjToParent(m_ObjBelleMatrixItem, MatrixListGrid);
            if (null != curItem && null != curItem.GetComponent<BelleMatrixItem>())
            {
                curItem.GetComponent<BelleMatrixItem>().SetData(this, i, curBelleMatrix);
            }
        }
        MatrixListGrid.GetComponent<UIGrid>().repositionNow = true;

        // 显示第一个阵型信息
        Transform curMatrixItem = MatrixListGrid.transform.FindChild("0");
        if (null != curMatrixItem)
        {
            m_curSelectMatrix = curMatrixItem.GetComponent<BelleMatrixItem>();
            if (null != m_curSelectMatrix)
            {
                m_curSelectMatrix.EnableHightLight(true);
            }

            MatrixInfo.SetActive(true);
            ShowMatrixByItem();
        }
        else
        {
            MatrixInfo.SetActive(false);
        }
    }


    public void EnableSelectMode(bool bEnable, string belleID, SelectFromType type)
    {
        m_bEnableSelectMode = bEnable;
        m_curBelleID = belleID;
        m_curSelectFromType = type;
    }

    //     public void SelectRoleToMatrix(string strBelleID)
    //     {
    //         m_MyBelleWindow.Hide();
    //         //BelleData.delBattle = Ret_MatrixSelectBelle;
    //         int belleID;
    //         if (!int.TryParse(strBelleID, out belleID))
    //         {
    //             LogModule.ErrorLog("id is invalid " + strBelleID);
    //             return;
    //         }
    // 
    //         CG_BELLE_BATTLE battleRequest = (CG_BELLE_BATTLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_BATTLE);
    //         battleRequest.SetBelleID(belleID);
    //         battleRequest.SetMatrixID(m_curShowMatrixID);
    //         battleRequest.SetMatrixIndex(m_curSelectMatrixIndex);
    //         battleRequest.SendPacket();
    //        // 根据ID显示当前矩阵
    void ShowMatrixByItem()
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
                m_activeCount = 0;
                foreach (KeyValuePair<int, BelleMatrix> curMatrixPair in BelleData.OwnedMatrixMap)
                {
                    if (curMatrixPair.Value.isActive)
                    {
						m_activeCount++;
                    }
                }
                // 如果未激活，并且激活数量小于2，可以点激活
                // 如果未激活，并且激活数量大于1，不能激活

				//btnActive.isEnabled = m_activeCount < 2;
                BelleMatrix bellematrix;
                bool sign = true;
                if (BelleData.OwnedMatrixMap.TryGetValue(matrixID, out bellematrix) && bellematrix != null) {
                  Tab_BelleMatrix curBelleMatrix = TableManager.GetBelleMatrixByID(bellematrix.id, 0);
                  List<int> matrixLayout;
                  //BelleMatrixBand belleMatrixBand = m_curMatrixBand.GetComponent<BelleMatrixBand>();
                  if (/*belleMatrixBand != null &&*/ null != curBelleMatrix) {
                    matrixLayout = BelleMatrixBand.GetLayOutByMatrixLayout(curBelleMatrix.Layout);
                    int count = bellematrix.belleIDs.Length;
                    if (matrixLayout != null && count == matrixLayout.Count) {
                      for (int i = 0; i < count; ++i) {
                        if (matrixLayout[i] == 1 && bellematrix.belleIDs[i] == -1) {
                          sign = false;
                          break;
                        }
                      }
                    }
                  }
                 }
				btnActive.isEnabled = (sign && (m_activeCount < 2));
            }
        }

        m_curShowMatrixID = matrixID;
        BelleMatrixBand belleMatrixBandScript = m_curMatrixBand.GetComponent<BelleMatrixBand>();
        if (belleMatrixBandScript != null)
        {
            belleMatrixBandScript.SetMatrixInfo(matrixID);
            m_curMatrixBand.SetActive(true);
            if (belleMatrixBandScript.m_myBelleWindow.gameObject.activeInHierarchy)
            {
                belleMatrixBandScript.m_myBelleWindow.GetComponent<SelectMyBelleTOMatrixWindow>().FillMyBelleList();
            }
        }
        //详细属性信息界面
        matrixDetailBand.SetMatrix(matrixID);
    }

    void UpdateMatrixItems()
    {
        BelleMatrixItem[] curItem = MatrixListGrid.GetComponentsInChildren<BelleMatrixItem>();
        if (null == curItem)
            return;

        for (int i = 0; i < curItem.Length; ++i)
        {
            if (null != curItem[i])
            {
                curItem[i].UpdateData();
            }
        }

        int activeMatrixCount = 0;
        foreach (KeyValuePair<int, BelleMatrix> curPair in BelleData.OwnedMatrixMap)
        {
            if (curPair.Value.isActive)
            {
                activeMatrixCount++;
            }
        }

        m_LabelMatrixActiveNum.text = StrDictionary.GetClientDictionaryString("#{4923}", activeMatrixCount);
    }

    //     public void ShowMyBeleList()
    //     {
    //         m_MyBelleWindow.Show();
    //     }
    //     void OnCloseBelleListPopWindowClick()
    //     {
    //         m_MyBelleWindow.Hide();
    //     }

    // 选择一个阵型
    public void OnMatrixListItemClick(GameObject objItem)
    {

        if (null != m_curSelectMatrix)
        {
            m_curSelectMatrix.EnableHightLight(false);
        }

        m_curSelectMatrix = objItem.GetComponent<BelleMatrixItem>();
        if (null != m_curSelectMatrix)
            m_curSelectMatrix.EnableHightLight(true);

        ShowMatrixByItem();
    }

    // 阵型激活信息
    void OnActiveMatrixClick()
    {
        // 新手指引直接去掉
//         if (m_NewPlayerGuide_Step == 0)
//         {
//             NewPlayerGuidLogic.CloseWindow();
//             m_NewPlayerGuide_Step = -1;
//         }

        if (null == m_curSelectMatrix)
        {
            return;
        }

        int matrixID;
        if (!int.TryParse(m_curSelectMatrix.gameObject.name, out matrixID))
        {
            LogModule.ErrorLog("can not parse cur matrixID:" + matrixID);
            return;
        }

        CG_BELLE_ACTIVEMATRIX activeMatrixRequest = (CG_BELLE_ACTIVEMATRIX)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_ACTIVEMATRIX);
        activeMatrixRequest.SetMatrixID(matrixID);
        activeMatrixRequest.SendPacket();
    }



    void Ret_ActiveMatrix()
    {
        ShowMatrixByItem();
        UpdateMatrixItems();
    }

    void Ret_BelleRest()
    {
        ShowMatrixByItem();
        UpdateMatrixItems();
    }

    void Ret_Battle()
    {
        ShowMatrixByItem();
        UpdateMatrixItems();
    }

    //     public void NewPlayerGuide(int nIndex)
    //     {
    //         switch (nIndex)
    //         {
    //             case 0:
    //                 if (btnActive)
    //              {
    //                     NewPlayerGuidLogic.OpenWindow(btnActive.gameObject, 190, 80, "", "top", 0, true, true);
    //            }
    //                 break;
    //         }
    //         m_NewPlayerGuide_Step = nIndex;    
    //}
    public void BelleMatrixShowRedPoint()
    {
        if (MatrixListGrid != null)
        {
            List<int> matrixids = BelleData.RedPointMatrixIds;
            int count = MatrixListGrid.transform.childCount;
            for (int i = 0; i < count; ++i)
            {
                Transform child = MatrixListGrid.transform.GetChild(i);
                if (child != null)
                {
                    Transform redpoint = child.Find("background/ActiveTip");
                    if (redpoint != null)
                    {
                        int id;
                        int.TryParse(child.name, out id);
						if (matrixids.Contains(id) && m_activeCount<2)//魂器上阵最多只能激活两个
                        {
                            redpoint.gameObject.SetActive(true);
                        }
                        else
                        {
                            redpoint.gameObject.SetActive(false);
                        }
                    }
                }
            }
        }
    }
}
