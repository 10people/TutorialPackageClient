/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleAttrInfoWindow.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows\BelleAttrInfoWindow.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIWindows

    *  @author   : fanzhipeng
    *  @date     : 2015/7/2 19:49:15
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Module.Log;
public class BelleAttrInfoWindow : MonoBehaviour
{

//     public UISprite m_bellePic;
//     public UILabel m_belleLevel;
    public UILabel[] m_attrTypeNames;
    public UILabel[] m_attrValues;
    public UILabel[] m_nextValues;
    public GameObject[] m_shrapPic;

    /// <summary>
    /// 加入六个背景激活文字和亲密值（不一定每一个都有亲密值待确定）
    /// </summary>
    public UILabel[] m_defaultText;
    public UILabel m_closeValueText;
   /* public UILabel m_belleCount;*/
    private Color m_ColorHighlight = new Color(176.0f / 255.0f, 251.0f/255.0f, 201.0f/255.0f, 1.0f);
    private Color m_ColorDisable = new Color(85/255.0f,121 / 255.0f, 113 / 255.0f, 1.0f);
    /*public UIImageButton m_envalutionBtn;*/
    private static BelleAttrInfoWindow m_instacnce = null;
    public static BelleAttrInfoWindow Instance()
    {
         return m_instacnce;
    }

    void Awake()
    {
        m_instacnce = this;
      //  SetBelleAttrData();
    }
    // Use this for initialization
    void Start()
    {
        //待确定是否Active时start函数会执行
        //SetBelleAttrData();
    }

    void OnEnable()
    {
        SetBelleAttrData();
    }
    // Update is called once per frame
    void Update()
    {
       // UpdateEvalutionInfo();
    }

    /// <summary>
    /// 设置基本属性界面
    /// </summary>
    public void SetBelleAttrData()
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
        if (null == curBelleData)
        {
            return;
        }

//         Tab_CommonItem commItem = TableManager.GetCommonItemByID(belleTab.BelleItemID, 0);
//         if (commItem != null)
//             m_bellePic.spriteName = commItem.Icon; 
//         //美人等级
//         m_belleLevel.text = StrDictionary.GetClientDictionaryString("#{1308}", BelleData.GetBelleDescByColorLevel(curBelleData.colorLevel), curBelleData.subLevel);
//         m_belleLevel.color = BelleData.GetBelleColorByColorLevel(curBelleData.colorLevel);

      //  UpdateEvalutionInfo();
        curBelleData.UpdateAttrMap();
        int nextAttrTypeIndex = curBelleData.GetNextLevelAttrType(curBelleData.orgLevel + 1);
        int nextAttrValue = curBelleData.GetNextLevelAttrValue(curBelleData.orgLevel + 1);
        Tab_BelleLevelup belleLevL = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
        if (null == belleLevL)
        {
            return;
        }
        //美人属性值
        for (int i = 0; i < belleTab.getAttrTypeCount(); i++)
        {
            m_shrapPic[i].gameObject.SetActive(false);
            m_defaultText[i].gameObject.SetActive(true);
            m_nextValues[i].text = "";
            m_attrTypeNames[i].text = Utils.GetAttrTypeString(belleTab.GetAttrTypebyIndex(i));

            int closeValue = 0;
            //亲密值
            if (belleTab.GetAttrTypebyIndex(i) == belleTab.CloseAddAttrType)
            {
                closeValue = curBelleData.closeAddValue;
            }
            //非第六条属性，受颜色等级控制
            if (i != belleTab.getAttrTypeCount() - 1)
            {
                if (i < curBelleData.colorLevel)
                {
                    m_attrValues[i].text = "+" + (belleLevL.GetAttrValuebyIndex(i) /*+ closeValue*/) ;
                }
                else
                {
                    m_attrValues[i].text = "+" + (belleTab.GetAttrValuebyIndex(i) /*+ closeValue*/);
                }
            }
            else //第六条属性，不受颜色等级控制
            {
                m_attrValues[i].text = "+" + ((curBelleData.IsMaxLevel()? belleLevL.GetAttrValuebyIndex(i):belleTab.GetAttrValuebyIndex(i)) /*+ closeValue*/);
                m_attrTypeNames[i].gameObject.SetActive(false);
            }

            //亲密值
            if (i == 0) {
              m_closeValueText.text = StrDictionary.GetClientDictionaryString("#{10817}", closeValue);
              m_closeValueText.gameObject.SetActive(closeValue > 0);
            }

            if (belleTab.getAttrTypeCount() - 1 != i && nextAttrTypeIndex == i)
            {
                //  LogModule.DebugLog("nextAttrType ===    " + nextAttrType + "   BelleTab.getAttrTypeByIndex " + i + "  " + belleTab.GetAttrTypebyIndex(i));
				if(i < curBelleData.colorLevel && nextAttrValue>0)
				{
                	m_nextValues[i].text = "+" + nextAttrValue.ToString();
					m_shrapPic[i].gameObject.SetActive(true);
				}
				else
					m_nextValues[i].text = "";
            }
            else
            {
                m_shrapPic[i].gameObject.SetActive(false);
                m_nextValues[i].text = "";
            }
            
            if (null != curBelleData && bOwned)
            {
                if (i != belleTab.getAttrTypeCount() - 1)
                {
                    m_attrTypeNames[i].color = i < curBelleData.colorLevel ? m_ColorHighlight : m_ColorDisable;
                     m_attrValues[i].color = i < curBelleData.colorLevel ? m_ColorHighlight : m_ColorDisable;
//                     m_nextValues[i].color = i < curBelleData.colorLevel ? m_ColorHighlight : m_ColorDisable;

                    m_defaultText[i].gameObject.SetActive(i >= curBelleData.colorLevel);
                }
                else
                {
                     m_attrTypeNames[i].color = curBelleData.IsMaxLevel() ? m_ColorHighlight : m_ColorDisable;
                     m_attrValues[i].color = curBelleData.IsMaxLevel() ? m_ColorHighlight : m_ColorDisable;
//                     m_nextValues[i].color = curBelleData.IsMaxLevel() ? m_ColorHighlight : m_ColorDisable;
                    m_defaultText[i].gameObject.SetActive(!curBelleData.IsMaxLevel());
                }
                
            }
            else
            {
                 m_attrTypeNames[i].color = m_ColorDisable;
                 m_attrValues[i].color = m_ColorDisable;
//                 m_nextValues[i].color = m_ColorDisable;
                m_shrapPic[i].gameObject.SetActive(false);
                m_defaultText[i].gameObject.SetActive(true);
                m_nextValues[i].text = "";
            }
        }
        //回调的时候等级变化，需要设置战力值
     //   SetCombatValue();
        //触发更新Item数量
        //据策划说，没有第六条属性
        m_attrTypeNames[5].gameObject.SetActive(false);
        m_attrValues[5].gameObject.SetActive(false);
        m_nextValues[5].gameObject.SetActive(false);
        m_shrapPic[5].gameObject.SetActive(false);
        m_defaultText[5].gameObject.SetActive(false);
      //
    }

//     public void UpdateEvalutionInfo()
//     {
//         if (null == BelleInfoWindow.Instance())
//         {
//             return;
//         }
// 
//         Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
//         if (null == belleTab)
//         {
//             return;
//         }
// 
//         Belle curBelleData = null;
//         
//         if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
//         {
//             curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
//         }
//         if (null == curBelleData)
//         {
//             return;
//         }
//         int belleSubItemId = belleTab.BelleItemID;
//         int belleTotalSubCount = 0;
//         Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
//         if (null != curTabBelleLevelup && curTabBelleLevelup.getConsumeTypeCount() >0)
//         {
//             belleTotalSubCount = curTabBelleLevelup.GetConsumeNumbyIndex(0);
//         }
// 
//         if (GameManager.gameManager.PlayerDataPool == null)
//         {
//             return;
//         }
//         Games.Item.GameItemContainer backPack = GameManager.gameManager.PlayerDataPool.BackPack;
//         if (backPack == null)
//         {
//             return;
//         }
//         int belleSubItemCount = backPack.GetItemCountByDataId(belleSubItemId);
//         m_belleCount.text = belleSubItemCount + "/" + belleTotalSubCount.ToString();
//         m_envalutionBtn.isEnabled = belleSubItemCount >= belleTotalSubCount;
//     }

//     public void SetCombatValue()
//     {
//         if (BelleOwnWindow.Instance() != null)
//         {
//             BelleOwnWindow.Instance().SetCombatValue();
//         }
//     }
//     进化响应函数
//         void OnEvolutionClick()
//         {
//             if (null == BelleInfoWindow.Instance())
//             {
//                 return;
//             }
//     
//             Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
//             if (null == belleTab)
//             {
//                 return;
//             }
//     
//             Belle curBelleData = null;
//             if (BelleData.OwnedBelleMap.ContainsKey(belleTab.Id))
//             {
//                 curBelleData = BelleData.OwnedBelleMap[belleTab.Id];
//             }
//             if (null == curBelleData)
//             {
//                 return;
//             }
//     
//             Tab_BelleLevelup curTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel, 0);
//             Tab_BelleLevelup nextTabBelleLevelup = TableManager.GetBelleLevelupByID(curBelleData.id * Belle.ID_FACTOR + curBelleData.orgLevel + 1, 0);
//             string strTip = "";
//     
//             if (null != curTabBelleLevelup && nextTabBelleLevelup != null)
//             {
//                 string attrTypeName = BelleData.GetBelleDescByColorLevel(nextTabBelleLevelup.MainLevel);
//                 strTip = StrDictionary.GetClientDictionaryString("#{1404}", attrTypeName,nextTabBelleLevelup.SubLevel, curTabBelleLevelup.GetConsumeNumbyIndex(0), curTabBelleLevelup.GetConsumeNumbyIndex(1));
//             }
//     
//             MessageBoxLogic.OpenOKCancelBox(strTip, "", DoEvlolution);
//         }
//     public void DoEvlolution()
//     {
//         if (BelleInfoWindow.Instance() != null)
//         {
//             Tab_Belle belleTab = BelleInfoWindow.Instance().CurSellectedBelleData;
//             if (belleTab == null)
//                 return;
//             BelleData.delEvolution = SetBelleAttrData;
//             BelleData.delEvolutionRapid = SetBelleAttrData;
//             CG_BELLE_EVOLUTION evolutionRequest = (CG_BELLE_EVOLUTION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BELLE_EVOLUTION);
//             evolutionRequest.SetBelleID(belleTab.Id);
//             evolutionRequest.SendPacket();
//         }
//     }
}
