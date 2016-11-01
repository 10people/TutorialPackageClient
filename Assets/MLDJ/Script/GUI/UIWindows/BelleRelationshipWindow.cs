/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleRelationshipWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleRelationshipWindow.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/7/2 22:40:56
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
public class BelleRelationshipWindow : MonoBehaviour
{
    public UITexture[] m_bellePics;
    public UILabel[] m_belleNames;
    public UILabel[] m_relationNames;
    public UILabel[] m_attrDescs;
   
    private static  BelleRelationshipWindow m_instance = null;
    public static BelleRelationshipWindow Instance()
    {
        return m_instance;
    }


    private Color m_ColorDisable = new Color(152 / 255.0f, 223 / 255.0f,181 / 255.0f, 1.0f);

    private Color m_belleNameHighlight = new Color(1,1,1,1);
    private Color m_relationNameHightlight = new Color(11/255.0f, 178/255.0f, 255/255.0f, 1);
    private Color m_attrDescHightlight = new Color(0, 237/255.0f, 233/255.0f,1);
    void Awake()
    {
        m_instance = this;
    }
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    void OnEnable()
    {
        SetRelationshipInfo();
    }
    public void SetRelationshipInfo()
    {
        if (null == BelleInfoWindow.Instance())
        {
            return;
        }

        Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
        if (null == belleTab)
        {
            return;
        }

        Belle curBelleData = null;
        bool bOwned = false;
        if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
        {
            curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
            bOwned = true;


        }

        for (int i = 0; i < m_belleNames.Length; i++)
        {
            if (i < belleTab.getAffectionGainsTypeCount())
            {
                Tab_Belle targetBelle = TableManager.GetBelleByID(belleTab.GetAffectionConditonValuebyIndex(i), 0);
                if (null == targetBelle)
                    continue;

                UnityEngine.Object belleTextureObj = ResourceManager.LoadResource(BelleData.GetBelleBigTextureName(targetBelle), typeof(Texture)) as Texture;
                if (null != belleTextureObj)
                {
                    m_bellePics[i].mainTexture = belleTextureObj as Texture;
                   // m_bellePics[i].color = m_ColorDisable;
                }
                //目标美人图片
              //  Tab_CommonItem commItem = TableManager.GetCommonItemByID(targetBelle.BelleItemID, 0);
               // if (commItem != null)
               //     m_bellePics[i].spriteName = commItem.Icon; 
                //目标美人名字
                m_belleNames[i].text = targetBelle.Name;
                m_belleNames[i].color = m_ColorDisable;

                //当前美人情缘名称
                m_relationNames[i].text = belleTab.GetAffectionNamebyIndex(i);
                m_relationNames[i].color = m_ColorDisable;

                //当前美人加成属性描述
                m_attrDescs[i].text = belleTab.GetAffectionDescbyIndex(i);
                m_attrDescs[i].color = m_ColorDisable;

                if (null != curBelleData && bOwned)
                {
                    int curBelleMatrixID = curBelleData.matrixID;
                    if (curBelleMatrixID < 0)
                    {
                        continue;
                    }

                    if (!BelleData.OwnedMatrixMap.ContainsKey(curBelleMatrixID))
                    {
                        continue;
                    }

                    if (!BelleData.OwnedMatrixMap[curBelleMatrixID].isActive)
                    {
                        continue;
                    }

                    bool bActive = false;

                    // 同上阵
                    int targetBelleID = belleTab.GetAffectionConditonValuebyIndex(i);
                    if (BelleData.OwnedBelleMap.ContainsKey(targetBelleID))
                    {
                        if (BelleData.OwnedBelleMap[targetBelleID].matrixID == curBelleData.matrixID)
                        {
                            bActive = true;
                        }
                    }

                    m_belleNames[i].color = bActive ? m_belleNameHighlight : m_ColorDisable;
                    m_relationNames[i].color = bActive ? m_relationNameHightlight : m_ColorDisable;
                    m_attrDescs[i].color = bActive ? m_attrDescHightlight : m_ColorDisable;
                }
            }
        }
    }

}
