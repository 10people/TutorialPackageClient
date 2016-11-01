/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleUnownWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIITEM\BelleMatrixBand.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIITEM\BelleMatrixBand

    *  @author   : fanzhipeng
    *  @date     : 2015/7/2 23:52:03
*****************************************************************************/
using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame.Table;
using System.Collections.Generic;
using System;
using Games.LogicObj;
using Google.ProtocolBuffers;
public class BelleMatrixBand : MonoBehaviour
{

    public BelleMatrixBandItem[] m_BelleBandBtns;
    //已经上阵的美人的数量
    private int m_hasBattleCount = 0;
    //当前阵的布局可放的美人总数量
    private int m_curMatrixCanPutBelles = 0;

    //选择美人界面
    public GameObject m_myBelleWindow;
    //情缘关系类型固定值
    private const int BELLE_AFFECTION_TYPE = 1;
    public struct MatrixBelleInfo
    {
        public int canPutFlag;
        public int belleID;
        public bool isRecommond;
        public void CleanUp()
        {
            canPutFlag = 0;
            belleID = -1;
            isRecommond = false;
        }
    }

    private int m_curMatrixIndex = -1;
    private MatrixBelleInfo[] m_MatrixBelleInfos = null;

    //has in MatrixBelles
    public  List<int> hasInMatirxBelles = new List<int>();

    //recommondBelleDataList
    public List<RecommondBelleData> recomonBelleDatas = null;

    public List<SelectBelleData> SelectBelleList = null;
    private static BelleMatrixBand m_instance = null;
    public static BelleMatrixBand Instance()
    {
        return m_instance;
    }

    private SelectBelleData m_selectBelleData;
    public SelectBelleData SelectBelleData
    {
        get { return m_selectBelleData; }
        set { m_selectBelleData = value; }
    }
    void Start()
    {
        m_instance = this;
        hasInMatirxBelles.Clear();
        m_myBelleWindow.SetActive(false);
//         if(SelectBelleList == null)
//         SelectBelleList = new List<SelectBelleData>();
        if(m_selectBelleData == null)
        m_selectBelleData = new SelectBelleData();
    }
    public bool SetMatrixInfo(int matrixID)
    {
        if (!BelleData.OwnedMatrixMap.ContainsKey(matrixID))
        {
            return false;
        }
        BelleMatrix curMatrix = BelleData.OwnedMatrixMap[matrixID];
        if (curMatrix == null)
        {
            return false;
        }
        Tab_BelleMatrix curBelleMatrix = TableManager.GetBelleMatrixByID(curMatrix.id, 0);
        if (null == curBelleMatrix)
        {
            LogModule.ErrorLog("BelleMatrix not defined");
            return false;
        }

        List<int> matrixLayout = GetLayOutByMatrixLayout(curBelleMatrix.Layout);
        LogModule.DebugLog("matrixLayout                           ======================= " + matrixLayout.ToArray().ToString());
        if (null == matrixLayout || null == m_BelleBandBtns || matrixLayout.Count != m_BelleBandBtns.Length)
        {
            LogModule.ErrorLog("matrixLayout.Count  " + matrixLayout.Count + " m_BelleBandBtns.Length " + m_BelleBandBtns.Length);
            LogModule.ErrorLog("BelleMatrix id == " + curBelleMatrix.Id + " Layout " + curBelleMatrix.Layout + "is wrong! ");
            return false;
        }

        m_MatrixBelleInfos = new MatrixBelleInfo[m_BelleBandBtns.Length];

        if (null == m_MatrixBelleInfos)
        {
            LogModule.ErrorLog("m_MatrixBelleInfos is created failed!");
            return false;
        }

        m_curMatrixCanPutBelles = 0;
        //初始化默认图标都为+号，使当前的阵法的布局正确显示出来
        for (int i = 0; i < matrixLayout.Count && i < m_BelleBandBtns.Length; i++)
        {
            m_MatrixBelleInfos[i].CleanUp();
            m_BelleBandBtns[i].gameObject.SetActive(matrixLayout[i] == 1);
            if (m_BelleBandBtns[i].gameObject.activeSelf)
            {
                //默认都为+
                m_BelleBandBtns[i].SetIconName(null, false, -1, i);
            }
            if (matrixLayout[i] == 1)
            {
                m_MatrixBelleInfos[i].canPutFlag = 1;
                m_curMatrixCanPutBelles++;
            }
        }

        //判断当前阵法布局可放的美人数量是否合法
        if (m_curMatrixCanPutBelles <= 0 || m_curMatrixCanPutBelles > m_BelleBandBtns.Length)
        {
            LogModule.ErrorLog("curMatrixCanPutBellles is null or out of the max = " + m_BelleBandBtns.Length);
            return false;
        }

        if (!BelleData.OwnedMatrixMap.ContainsKey(matrixID))
        {
            return false;
        }

        //开始正式放美人到阵上
        m_hasBattleCount = 0;
        for (int i = 0; i < curMatrix.belleIDs.Length; ++i)
        {
            if (BelleData.OwnedBelleMap.ContainsKey(curMatrix.belleIDs[i]))
            {
                Belle curBelle = BelleData.OwnedBelleMap[curMatrix.belleIDs[i]];
                if (curBelle.matrixID != matrixID)
                {
                    LogModule.WarningLog("matrix ID data error: matrixID :" + matrixID.ToString() + "belleMatrixID: " + curBelle.matrixID.ToString());
                    continue;
                }

                int curMatrixIndex = curBelle.matrixIndex;
                if (curMatrixIndex >= m_BelleBandBtns.Length)
                {
                    LogModule.WarningLog("curMatrixIndex is big than curMatrix layout count " + curMatrixIndex.ToString());
                    continue;
                }

                //该位置是否可放置美人加个判断
                if (curMatrixIndex < 0 || curMatrixIndex >= m_MatrixBelleInfos.Length || m_MatrixBelleInfos[curMatrixIndex].canPutFlag == 0)
                {
                    LogModule.ErrorLog("CurMatrixIndex " + curMatrixIndex + " is invalid!");
                    continue;
                }

                Tab_Belle curTabBelle = TableManager.GetBelleByID(curMatrix.belleIDs[i], 0);
                if (null == curTabBelle)
                {
                    continue;
                }
                Tab_CommonItem commItem = TableManager.GetCommonItemByID(curTabBelle.BelleItemID, 0);
                if (null == commItem)
                {
                    continue;
                }
                m_BelleBandBtns[curMatrixIndex].SetIconName(commItem.Icon, false, curTabBelle.Id, curMatrixIndex);
                m_MatrixBelleInfos[curMatrixIndex].belleID = curTabBelle.Id;
                m_MatrixBelleInfos[curMatrixIndex].isRecommond = false;
                m_hasBattleCount++;
            }
        }
        ////////////////////////////////////////////////////////////////////////////////////////////
        //当前已经上阵的美人ID列表
        hasInMatirxBelles.Clear();
        for (int i = 0; i < m_MatrixBelleInfos.Length; i++)
        {
            if (m_MatrixBelleInfos[i].canPutFlag == 1 && m_MatrixBelleInfos[i].belleID != -1 && !m_MatrixBelleInfos[i].isRecommond)
            {
                hasInMatirxBelles.Add(m_MatrixBelleInfos[i].belleID);
            }
        }

        //Debug一下数据
        LogModule.DebugLog(hasInMatirxBelles.ToString());

        //推荐不要了
//          recomonBelleDatas = GetRecommondBellesByBelleId(hasInMatirxBelles);
// 
        SelectBelleList = GetSelectBelleListByBelleId();
//         //如果有美人在阵上，并且没有占满就推荐跟他有情缘关系的美人,
//         if (m_hasBattleCount > 0 && m_hasBattleCount < m_curMatrixCanPutBelles && recomonBelleDatas != null)
//         {
//             //当前阵法剩余空位
//             int remainCount = m_curMatrixCanPutBelles - m_hasBattleCount;
// 
//             for (int i = 0, j = 0; i < m_MatrixBelleInfos.Length; i++)
//             {
//                 if (m_MatrixBelleInfos[i].canPutFlag == 1 && m_MatrixBelleInfos[i].belleID == -1)
//                 {
//                     if (j >= 0 && j < remainCount && j < recomonBelleDatas.Count)
//                     {
//                         RecommondBelleData _recommonBellData = recomonBelleDatas[j];
//                         if (m_hasBattleCount < m_curMatrixCanPutBelles)
//                         {
//                             m_MatrixBelleInfos[i].belleID = recomonBelleDatas[j++].BelleID;
//                             m_MatrixBelleInfos[i].isRecommond = true;
//                         }
//                     }
//                 }
//             }
//         }
// 
//         //推荐的美人界面设置
//         for (int i = 0; i < m_MatrixBelleInfos.Length; i++)
//         {
//             if (m_MatrixBelleInfos[i].canPutFlag == 1 && m_MatrixBelleInfos[i].belleID != -1 && m_MatrixBelleInfos[i].isRecommond)
//             {
//                 if (BelleData.OwnedBelleMap.ContainsKey(m_MatrixBelleInfos[i].belleID))
//                 {
//                     Belle curBelle = BelleData.OwnedBelleMap[m_MatrixBelleInfos[i].belleID];
// 
//                     Tab_Belle curTabBelle = TableManager.GetBelleByID(m_MatrixBelleInfos[i].belleID, 0);
//                     if (null == curTabBelle)
//                     {
//                         continue;
//                     }
//                     Tab_CommonItem commItem = TableManager.GetCommonItemByID(curTabBelle.BelleItemID, 0);
//                     if (null == commItem)
//                     {
//                         continue;
//                     }
//                     m_BelleBandBtns[i].SetIconName(commItem.Icon, true, curTabBelle.Id, i);
//                 }
//             }
//         }
        return true;
    }

    public static List<int> GetLayOutByMatrixLayout(string layOut)
    {
        List<int> layOuts = new List<int>();
        if (null == layOut)
        {
            return layOuts;
        }
        LogModule.DebugLog(layOut);
        string[] tempStr = layOut.Trim("\"\"".ToCharArray()).Split(',');
        LogModule.DebugLog("length                ================== " + tempStr.Length);
        for (int i = 0; i < tempStr.Length; i++)
        {
            LogModule.DebugLog(tempStr[i]);
        }
        LogModule.DebugLog("last                         ======    " + tempStr[tempStr.Length - 1]);
        for (int i = 0; tempStr != null && i < tempStr.Length; i++)
        {
            for (int j = 0; j < tempStr[i].Length; j++)
            {
                string curStr = tempStr[i];
                int nWayId = -1;
                int.TryParse(curStr[j].ToString(), out nWayId);
                layOuts.Add(nWayId);
            }

        }
        return layOuts;
    }

    public List<RecommondBelleData> GetRecommondBellesByBelleId(List<int> belleIds)
    {
        List<int> retBelles = new List<int>();
        List<RecommondBelleData> RecommBelleDataList = new List<RecommondBelleData>();
        if (belleIds == null || belleIds.Count == 0)
        {
            return RecommBelleDataList;
        }

        //find has relationship belleIds with belleIds that has in Matrix and is owned! 
        HashSet<int> hasRelationShipSets = new HashSet<int>();

        for (int i = 0; i < belleIds.Count; i++)
        {
            Tab_Belle _belleTab = TableManager.GetBelleByID(belleIds[i], 0);
            if (null != _belleTab)
            {
                for (int j = 0; j < _belleTab.getAffectionConditonTypeCount(); j++)
                {
                    if (BELLE_AFFECTION_TYPE == _belleTab.GetAffectionConditonTypebyIndex(j))
                    {
                        int belleId = _belleTab.GetAffectionConditonValuebyIndex(j);
                        if (BelleData.OwnedBelleMap.ContainsKey(belleId) && !retBelles.Contains(belleId) && !belleIds.Contains(belleId))
                        {
                            retBelles.Add(belleId);
                            if (!hasRelationShipSets.Contains(belleId))
                            {
                                hasRelationShipSets.Add(belleId);
                            }
                        }
                    }
                }
            }
        }

        //在加上那些跟当前美人没有亲密关系，但拥有的美人但没有上阵的
        foreach (var belle in BelleData.OwnedBelleMap)
        {
            if (!retBelles.Contains(belle.Value.id) && !belleIds.Contains(belle.Value.id) && belle.Value.matrixID == -1 && belle.Value.matrixIndex == -1)
            {
                retBelles.Add(belle.Value.id);
            }
        }

        //Debug 一下数据////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
        string str = "";
        for (int i = 0; i < retBelles.Count; i++)
        {
            str += retBelles[i] + " ";
        }
        LogModule.DebugLog(str);
        if (retBelles.Count > 0)
        {
            for (int i = 0; i < retBelles.Count; i++)
            {
                if (BelleData.OwnedBelleMap.ContainsKey(retBelles[i]))
                {
                    RecommondBelleData _recommonData = new RecommondBelleData();
                    _recommonData.CleanUp();
                    Belle _belle = BelleData.OwnedBelleMap[retBelles[i]];
                    _recommonData.BelleID = _belle.id;
                    _recommonData.isMatrix = _belle.matrixID != -1 ? 1 : 0;
                    _recommonData.hasRelationship = hasRelationShipSets.Contains(retBelles[i])? 1 : 0;
                    _belle.UpdateAttrMap();
                    _recommonData.combatValue = BelleData.GetPowerNum(_belle.attrMap);
                    if (!RecommBelleDataList.Contains(_recommonData))
                        RecommBelleDataList.Add(_recommonData);
                }
            }
        }
        RecommBelleDataList.Sort();
        return RecommBelleDataList;
    }

    public List<SelectBelleData> GetSelectBellelistByBelleIds(List<int> belleIds)
    {
        List<SelectBelleData> selectBelleDataList = new List<SelectBelleData>();

        if (belleIds == null && belleIds.Count == 0)
        {
            return selectBelleDataList;
        }
        foreach (int belleId in TableManager.GetBelle().Keys)
        {
            if (BelleData.OwnedBelleMap.ContainsKey(belleId))
            {
                SelectBelleData selectBelleData = new SelectBelleData();
                selectBelleData.CleanUp();
                selectBelleData.belleID = belleId;
                selectBelleData.matrixId = BelleData.OwnedBelleMap[belleId].matrixID;
                selectBelleData.combatValue = BelleData.GetPowerNum(BelleData.OwnedBelleMap[belleId].attrMap);
                for (int i = 0; i < belleIds.Count; i++)
                {
                    Tab_Belle _belleTab = TableManager.GetBelleByID(belleIds[i], 0);
                    if (null != _belleTab)
                    {
                        for (int j = 0; j < _belleTab.getAffectionConditonTypeCount(); j++)
                        {
                            if (BELLE_AFFECTION_TYPE == _belleTab.GetAffectionConditonTypebyIndex(j))
                            {
                                int belleIdRelation = _belleTab.GetAffectionConditonValuebyIndex(j);
                                if (belleIdRelation == belleId)
                                {
                                    selectBelleData.isRelationship = true;
                                }
                            }
                        }
                    }
                }

                selectBelleDataList.Add(selectBelleData);
            }
           
        }
        selectBelleDataList.Sort();
            return selectBelleDataList;
    }

    //获取当前可以显示的美人列表，当前阵上的那个美人单独处理
    public List<SelectBelleData> GetSelectBelleListByBelleId()
    {
        List<SelectBelleData> selectBelleDataList = new List<SelectBelleData>();

        foreach (int belleId in TableManager.GetBelle().Keys)
        {
            if (BelleData.OwnedBelleMap.ContainsKey(belleId))
            {
                SelectBelleData selectBelleData = new SelectBelleData();
                selectBelleData.CleanUp();
                selectBelleData.belleID = belleId;
                selectBelleData.matrixId = BelleData.OwnedBelleMap[belleId].matrixID;
                BelleData.OwnedBelleMap[belleId].UpdateAttrMap();
                selectBelleData.combatValue = BelleData.GetPowerNum(BelleData.OwnedBelleMap[belleId].attrMap);
                bool isAdd = true;
                for (int i = 0; i < hasInMatirxBelles.Count; i++)
                {
                    //已经在当前阵上上阵的就不添加了。
                    if (hasInMatirxBelles[i] == belleId)
                    {
                        isAdd = false;
                    }
                    //羁绊关系添加
                    Tab_Belle _belleTab = TableManager.GetBelleByID(hasInMatirxBelles[i], 0);
                    if (null != _belleTab)
                    {
                        for (int j = 0; j < _belleTab.getAffectionConditonTypeCount(); j++)
                        {
                            if (BELLE_AFFECTION_TYPE == _belleTab.GetAffectionConditonTypebyIndex(j))
                            {
                                int belleIdRelation = _belleTab.GetAffectionConditonValuebyIndex(j);
                                if (belleIdRelation == belleId)
                                {
                                    selectBelleData.isRelationship = true;
                                }
                            }
                        }
                    }
                }
                if(isAdd)
                selectBelleDataList.Add(selectBelleData);
            }
        }
        selectBelleDataList.Sort();
        return selectBelleDataList;
    }
    // 阵型按钮点击
    public void OnMatrixButtonClick(int matrixIndex)
    {
        if (BelleController.Instance() == null || BelleMatrixWindow.Instance() == null)
        {
            LogModule.ErrorLog("BelleController.Instance() == null || BelleMatrixWindow.Instance() == null");
            return;
        }

        if (null == BelleMatrixWindow.Instance().CurSelectMatrix)
        {
            return;
        }

        if (matrixIndex < 0)
        {
            return;
        }

        int curMatrixID = Int32.Parse(BelleMatrixWindow.Instance().CurSelectMatrix.gameObject.name);


        if (!BelleData.OwnedMatrixMap.ContainsKey(curMatrixID))
        {
            LogModule.ErrorLog("can not find matrixid in data" + curMatrixID);
            return;
        }

        Tab_BelleMatrix curTabMatrix = TableManager.GetBelleMatrixByID(curMatrixID, 0);
        if (null == curTabMatrix)
        {
            LogModule.ErrorLog("can not find cur matrix id :" + curMatrixID.ToString());
            return;
        }

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;

        if (!BelleData.OwnedMatrixMap.ContainsKey(curMatrixID) || null == mainPlayer || mainPlayer.BaseAttr.Level < curTabMatrix.OpenLevel)
        {
            return;
        }
        this.m_curMatrixIndex = matrixIndex;
        if (matrixIndex >= 0 && matrixIndex < m_MatrixBelleInfos.Length)
        {
            m_selectBelleData.CleanUp();
            m_selectBelleData.belleID = m_MatrixBelleInfos[matrixIndex].belleID;
            m_selectBelleData.matrixId = curMatrixID;
            m_selectBelleData.isInCurMatrix = true;
            if(BelleData.OwnedBelleMap.ContainsKey(m_MatrixBelleInfos[matrixIndex].belleID))
            {
                Belle belle = BelleData.OwnedBelleMap[m_MatrixBelleInfos[matrixIndex].belleID];
                if (null != belle)
                {
                    m_selectBelleData.combatValue = BelleData.GetPowerNum(belle.attrMap);
                }
            }
        }
        m_myBelleWindow.SetActive(true);
    }

    public void SelectRoleToMatrix(int belleID,bool isMatrix)
    {
        m_myBelleWindow.gameObject.SetActive(false);
        int curMatrixID = -1;
        if (null != BelleMatrixWindow.Instance())
        {
            curMatrixID = Int32.Parse(BelleMatrixWindow.Instance().CurSelectMatrix.gameObject.name);
        }
        #region//此段逻辑暂时只在客户端有，提醒服务器添加
        Belle belle; BelleMatrix bellematrix;
        if (BelleData.OwnedBelleMap.TryGetValue(belleID, out belle) && BelleData.OwnedMatrixMap.TryGetValue(belle.matrixID, out bellematrix) && bellematrix.isActive) {
          Tab_BelleMatrix tbm = TableManager.GetBelleMatrixByID(bellematrix.id, 0);
          if (tbm != null) {
            if (isMatrix) {
              GUIData.AddNotifyData2Client(false, "#{11328}", tbm.Name);
            } else {
              GUIData.AddNotifyData2Client(false, "#{11327}", tbm.Name);
            }
          }
          return;
        }
        #endregion
        //如果在当前阵上阵上，就下阵，不在当前阵上就上阵
        if (isMatrix)
        {
            CG_BELLE_REST restRequest = (CG_BELLE_REST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_REST);
            restRequest.SetBelleID(belleID);
            restRequest.SendPacket();
        }
        else
        {
            CG_BELLE_BATTLE battleRequest = (CG_BELLE_BATTLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_BATTLE);
            battleRequest.SetBelleID(belleID);
            battleRequest.SetMatrixID(curMatrixID);
            battleRequest.SetMatrixIndex(this.m_curMatrixIndex);
            battleRequest.SendPacket();
        }
      
    }

    void OnEnable()
    {
        CheckFTEInfo();
    }

    void CheckFTEInfo()
    {
        if (BelleController.Instance() != null && BelleController.Instance().NewPlayerGuide_Step == 1)
        {
            // 提示显示上阵位置
            BelleController.Instance().NewPlayerGuide_Step = 2;
            NewPlayerGuidLogic.OpenWindow(m_BelleBandBtns[4].gameObject, 68, 78, GCGame.Utils.GetDicByID(11354), "center", -1, true, true, false, null, null, 0, 0, true, false, () =>
            {
                if (BelleController.Instance() != null && BelleController.Instance().NewPlayerGuide_Step == 2)
                {
                    BelleController.Instance().NewPlayerGuide(3);
                }
            });
        }
    }
}
