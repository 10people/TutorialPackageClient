/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleShowItem.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIItem\BelleShowItem.cs
    *  @filePaht : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIItem

    *  @author   : fanzhipeng
    *  @date     : 2015/6/30 17:58:48
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
public class BelleShowItem : MonoBehaviour
{
    //belleInfo
    public UISprite m_bellePic;
    public UISprite m_edgePic; 
    public UILabel m_belleName;
    public UILabel m_belleColorLevel;
    public UILabel m_belleSubLevel;
    public UISprite m_belleMainColorPic;

    public UISprite m_backgroudPic;
    private Tab_Belle m_curTabBelle;
    private BelleInfoWindow m_parentWindow;

    private bool m_isOwn;
    private const string NORMAL_BACK_SPRITE_NAME = "yeqian";
    private const string HIGHLIGHT_BACK_SPRITE_NAME = "yeqian-highlight";

    private int m_NewPlayerGuide_Step = -1;


    //碎片个数节点
    public GameObject m_belleItemObj;
//     public UILabel m_curBelleItemCount;
//     public UILabel m_BelleItemTotalCount;
    public UILabel m_belleItemCount;
    public UISprite m_BelleProcessBar;

    //锁的状态
    public GameObject m_lockObj;

    public GameObject m_redTipObj;
    public GameObject m_redItemTipObj;
    public GameObject m_redCloseTipObj;
    public GameObject m_redEvoTipObj;
    private int m_belleId;
    /// <summary>
    /// Set  every belle item's data 
    /// </summary>
    /// <param name="belleId"></param>
    /// <param name="tabBelle"></param>
    /// <param name="isOwn"></param>
    public void SetData(BelleInfoWindow parentWindow,int belleId, Tab_Belle tabBelle, bool isOwn)
    {
        m_parentWindow = parentWindow;
        gameObject.name = belleId.ToString();
        if (null == tabBelle)
        {
            return;
        }
        m_belleId = belleId;
        m_isOwn = isOwn;
        Tab_CommonItem commItem = TableManager.GetCommonItemByID(tabBelle.BelleItemID, 0);
        if (commItem != null)
            m_bellePic.spriteName = commItem.Icon; 
        m_belleName.text = tabBelle.Name;
        m_belleColorLevel.text = "";
        m_belleSubLevel.text = "";
        m_edgePic.spriteName = "";
        m_belleMainColorPic.spriteName = "";
        if (BelleData.OwnedBelleMap.ContainsKey(belleId))
        {
            m_belleColorLevel.text = BelleData.GetBelleDescByColorLevel(BelleData.OwnedBelleMap[belleId].colorLevel);
            m_belleMainColorPic.spriteName = BelleData.GetBelleColorPicByColorLevel(BelleData.OwnedBelleMap[belleId].colorLevel);
            m_belleSubLevel.text = StrDictionary.GetClientDictionaryString("#{10811}", BelleData.OwnedBelleMap[belleId].subLevel);
            m_belleColorLevel.color = BelleData.GetBelleColorByColorLevel(BelleData.OwnedBelleMap[belleId].colorLevel);
            m_belleSubLevel.color = BelleData.GetBelleColorByColorLevel(BelleData.OwnedBelleMap[belleId].colorLevel);
            m_belleName.color = BelleData.GetBelleColorByColorLevel(BelleData.OwnedBelleMap[belleId].colorLevel);
           m_edgePic.spriteName = BelleData.GetBelleColorNameByColorLevel(BelleData.OwnedBelleMap[belleId].colorLevel);
        }

      
        m_bellePic.gameObject.SetActive(isOwn);

        //设置当前状态
        ShowCurBelleData(isOwn);

        SetCurBelleItemProcessBar(belleId,tabBelle,isOwn);
        m_curTabBelle = tabBelle;
        m_isOwn = isOwn;
        
        //Lock
        m_lockObj.SetActive(!isOwn);

        //更新红点提示
        UpdateRedTipState();
    }

    public void UpdateRedTipState()
    {
        m_redItemTipObj.SetActive(false);
        m_redTipObj.SetActive(false);
        m_redCloseTipObj.SetActive(false);
        m_redEvoTipObj.SetActive(false);
        //red tip 
        PlayerData _playerData = GameManager.gameManager.PlayerDataPool;
        if (null != _playerData && _playerData.BelleConfigData != null)
        {
            string belleGetBits = _playerData.BelleConfigData.BelleGetBits;
            string belleItemBits = _playerData.BelleConfigData.BelleItemBits;
            string belleEvoBits = _playerData.BelleConfigData.BelleCanEvoBeits;

            if (null != belleGetBits && m_belleId >= 0 && m_belleId < belleGetBits.Length && m_isOwn)
            {
                m_redTipObj.SetActive(belleGetBits[m_belleId] == '1');
            }

            if (null != belleItemBits && m_belleId >= 0 && m_belleId < belleItemBits.Length && !m_isOwn)
            {
                m_redItemTipObj.SetActive(belleItemBits[m_belleId] == '1');
            }

            if (null != belleEvoBits && m_belleId >= 0 && m_belleId < belleEvoBits.Length && m_isOwn)
            {
                if (BelleData.OwnedBelleMap.ContainsKey(m_belleId))
                {
                    Belle belle = BelleData.OwnedBelleMap[m_belleId];
                    if (belle != null && !belle.IsMaxLevel())
                    {
                        m_redEvoTipObj.SetActive(belleEvoBits[m_belleId] == '1');
                    }
                }
            }
            m_redCloseTipObj.SetActive(BelleData.IsCanCloseFree() && m_isOwn);
        }
    }
    public void UpdateData()
    {

        if (m_curTabBelle == null)
            return;
        Tab_CommonItem commItem = TableManager.GetCommonItemByID(m_curTabBelle.BelleItemID, 0);
        if (commItem != null)
            m_bellePic.spriteName = commItem.Icon;
        m_belleName.text = m_curTabBelle.Name;
        m_belleColorLevel.text = "";
        m_belleSubLevel.text = "";

        bool isOwn = false;
        m_edgePic.spriteName = "";
        m_belleMainColorPic.spriteName = "";
        if (BelleData.OwnedBelleMap.ContainsKey(m_belleId))
        {
            m_belleColorLevel.text = BelleData.GetBelleDescByColorLevel(BelleData.OwnedBelleMap[m_belleId].colorLevel);
            m_belleMainColorPic.spriteName = BelleData.GetBelleColorPicByColorLevel(BelleData.OwnedBelleMap[m_belleId].colorLevel);
            m_belleSubLevel.text = StrDictionary.GetClientDictionaryString("#{10811}", BelleData.OwnedBelleMap[m_belleId].subLevel);
            m_belleColorLevel.color = BelleData.GetBelleColorByColorLevel(BelleData.OwnedBelleMap[m_belleId].colorLevel);
            m_belleSubLevel.color = BelleData.GetBelleColorByColorLevel(BelleData.OwnedBelleMap[m_belleId].colorLevel);
            m_belleName.color = BelleData.GetBelleColorByColorLevel(BelleData.OwnedBelleMap[m_belleId].colorLevel);
            isOwn = true;
            m_edgePic.spriteName = BelleData.GetBelleColorNameByColorLevel(BelleData.OwnedBelleMap[m_belleId].colorLevel);
        }

        m_bellePic.gameObject.SetActive(isOwn);

        //设置当前状态
        ShowCurBelleData(isOwn);

        SetCurBelleItemProcessBar(m_belleId, m_curTabBelle, isOwn);
      

        //Lock
        m_lockObj.SetActive(!isOwn);

        //红点提示
        UpdateRedTipState();
    }
    /// <summary>
    /// 根据当前美人是否拥有的状态显示不同的信息
    /// </summary>
    /// <param name="belleId"></param>
    /// <param name="tabBelle"></param>
    /// <param name="isOwn"></param>
    public void ShowCurBelleData(bool isOwn)
    {
        //未拥有时候显示等级
        m_belleColorLevel.gameObject.SetActive(false);
        m_belleSubLevel.gameObject.SetActive(isOwn);
        
        //拥有的时候显示碎片个数
        m_belleItemObj.SetActive(!isOwn);
    }

    /// <summary>
    /// 设置当前美人碎片的个数
    /// </summary>
    /// <param name="belleId"></param>
    /// <param name="tabBelle"></param>
    /// <param name="isOwn"></param>
    public void SetCurBelleItemProcessBar(int belleId, Tab_Belle tabBelle, bool isOwn)
    {
        m_belleItemObj.SetActive(!isOwn);

        if (null == tabBelle)
            return;

        //美人合成需要的碎片个数
        int belleSubItemId = tabBelle.BelleItemID;
        int belleTotalSubCount = tabBelle.BelleItemCount;
        int belleSubItemCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(belleSubItemId);

//         m_curBelleItemCount.text = belleSubItemCount.ToString();
//         m_BelleItemTotalCount.text = belleTotalSubCount.ToString();
        m_belleItemCount.text = belleSubItemCount.ToString() + "/" + belleTotalSubCount.ToString();
        belleTotalSubCount = belleTotalSubCount <= 0 ? 1 : belleTotalSubCount;
        m_BelleProcessBar.fillAmount = (float)(belleSubItemCount * 1.0 / belleTotalSubCount);
    }
    public void OnClickItem()
    {
        if (m_NewPlayerGuide_Step == 1)
        {
            NewPlayerGuidLogic.CloseWindow();
        }

        if (null != m_parentWindow)
        {
            m_parentWindow.OnClickBelleItem(gameObject);   
        }

        if (m_NewPlayerGuide_Step == 1)
        {
            if (BelleOwnWindow.Instance())
            {
                if (BelleOwnWindow.Instance())
                {
                    // 弃用
                    //BelleOwnWindow.Instance().NewPlayerGuide(1);
                }

            }
            m_NewPlayerGuide_Step = -1;
        }

        //清理红点提示
        if (m_redTipObj.gameObject.activeSelf)
        {
            BelleConfig.SetBelleGetBitsByBit(m_belleId, '0');
            m_redTipObj.SetActive(false);
            BelleData.m_belleActiveCount--;
            if (BelleData.m_belleActiveCount < 0)
            {
                BelleData.m_belleActiveCount = 0;
            }
            if (MenuBarLogic.Instance() != null)
            {
                MenuBarLogic.Instance().UpdateBelleTip();
            }
        }
        
    }
    public void SetClickHighLight(bool isHighlight)
    {
        string spriteName = NORMAL_BACK_SPRITE_NAME;
        if (isHighlight)
        {
            spriteName = HIGHLIGHT_BACK_SPRITE_NAME;
        }

        m_backgroudPic.spriteName = spriteName;
    }

    public void UpdateCloseRedTip()
    {
        m_redCloseTipObj.SetActive(BelleData.IsCanCloseFree() && m_isOwn);
    }

    public void SetEvoRedTip(bool state)
    {
        m_redEvoTipObj.SetActive(state);
    }
    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 1:
                NewPlayerGuidLogic.OpenWindow(gameObject, 300, 100, Utils.GetDicByID(10425), "right", 0, true, true);
                if (BelleController.Instance())
                {
                    BelleController.Instance().NewPlayerGuide_Step = -1;
                }
                break;
        }
    }
}
