using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using System;
using Module.Log;
using System.Collections.Generic;


public class BelleSelectToMatrixItem : MonoBehaviour
{
    public UISprite m_QualitySprite;
    public UISprite m_belleIcon;
    public UILabel m_belleName;
    public UISprite m_relationshipIcon;
    public UILabel m_combatValue;
    public UILabel m_isInMatirx;

    //未上阵文字
    public UILabel m_notInMatrix;

    //美人的主子颜色描述
    public UILabel m_belleMainColor;
    public UILabel m_belleSubColor;
    public UISprite m_belleMainColorPic;

    public UILabel m_inCurMatrix;
    public UILabel m_OnMatrixBtnText;
    public UISprite m_OnMatrixBtnSprite;
    private SelectMyBelleTOMatrixWindow parentWindow;

    private SelectBelleData m_RecommonBelleData;
    private int m_curMatrixId;

    public string RED_SPRITE_NORMAL_NAME = "Btn-Common-Blue01";
    public string RED_SPRITE_PRESSED_NAME = "RedBtnPress";
    public string BLUE_SPRITE_NORMAL_NAME = "Btn-Common-Orange01";
    public string BLUE_SPRITE_PRESSED_NAME = "blueBtnPrssed";

    public UIImageButton m_OnMatrixBtn;

    private Belle myBelle;
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }
    public void SetData(SelectMyBelleTOMatrixWindow parentWindow, SelectBelleData recommonBelleData, int index)
    {
        this.parentWindow = parentWindow;
        this.gameObject.name = index.ToString();
        this.m_RecommonBelleData = recommonBelleData;

        if (null == recommonBelleData)
        {
            return;
        }

        if (!BelleData.OwnedBelleMap.ContainsKey(recommonBelleData.belleID))
        {
            return;
        }
        Tab_Belle _belle = TableManager.GetBelleByID(recommonBelleData.belleID, 0);
        if (null == _belle)
        {
            return;
        }

        m_belleName.text = _belle.Name;
        Tab_CommonItem commItem = TableManager.GetCommonItemByID(_belle.BelleItemID, 0);
        if (commItem == null)
        {
            return;
        }


        m_belleIcon.spriteName = commItem.Icon;
        if (m_QualitySprite != null && BelleData.OwnedBelleMap.ContainsKey(recommonBelleData.belleID)) {
          m_QualitySprite.spriteName = Games.GlobeDefine.GlobeVar.QualityColorGrid[BelleData.OwnedBelleMap[recommonBelleData.belleID].colorLevel - 1];
        }

        m_relationshipIcon.gameObject.SetActive(recommonBelleData.isRelationship);
        Belle belle = BelleData.OwnedBelleMap[recommonBelleData.belleID];
        if (null == belle)
        {
            return;
        }
        this.myBelle = belle;
        m_combatValue.text = recommonBelleData.combatValue.ToString();


        m_belleMainColor.text = BelleData.GetBelleDescByColorLevel(belle.colorLevel);
        m_belleMainColorPic.spriteName = BelleData.GetBelleColorPicByColorLevel(belle.colorLevel);
        m_belleSubColor.text = StrDictionary.GetClientDictionaryString("#{10811}", belle.subLevel);
        m_belleMainColor.color = BelleData.GetBelleColorByColorLevel(belle.colorLevel);
        m_belleSubColor.color = BelleData.GetBelleColorByColorLevel(belle.colorLevel);

        if (belle.matrixIndex != -1 && belle.matrixID != -1)
        {
            if(BelleData.OwnedBelleMap.ContainsKey(recommonBelleData.belleID))
            {
                Tab_BelleMatrix _matrix = TableManager.GetBelleMatrixByID(belle.matrixID,0);
                if(null == _matrix)
                    return;

                //在阵上但不在当前阵上的 都上阵
                if (!recommonBelleData.isInCurMatrix)
                {
                    m_isInMatirx.text = StrDictionary.GetClientDictionaryString("#{10403}", _matrix.Name);
                    
                    m_notInMatrix.gameObject.SetActive(false);
                    m_OnMatrixBtnText.text = StrDictionary.GetClientDictionaryString("#{10404}");
                    m_OnMatrixBtnSprite.spriteName = BLUE_SPRITE_NORMAL_NAME;
                    m_OnMatrixBtn.normalSprite = BLUE_SPRITE_NORMAL_NAME;
                    m_OnMatrixBtn.pressedSprite = BLUE_SPRITE_PRESSED_NAME;
                    m_OnMatrixBtn.hoverSprite = BLUE_SPRITE_NORMAL_NAME;
                }
                else
                {
                    m_isInMatirx.gameObject.SetActive(false);
                    m_notInMatrix.gameObject.SetActive(false);
                    m_inCurMatrix.gameObject.SetActive(true);
                    m_OnMatrixBtnText.text = StrDictionary.GetClientDictionaryString("#{10405}");

                    m_OnMatrixBtnSprite.spriteName = RED_SPRITE_NORMAL_NAME;
                    m_OnMatrixBtn.normalSprite = RED_SPRITE_NORMAL_NAME;
                    m_OnMatrixBtn.pressedSprite = RED_SPRITE_PRESSED_NAME;
                    m_OnMatrixBtn.hoverSprite = RED_SPRITE_NORMAL_NAME;
                }
            }
        }
        else
        {
            if (!recommonBelleData.isInCurMatrix)
            {
                m_isInMatirx.gameObject.SetActive(false);
                m_isInMatirx.text = StrDictionary.GetClientDictionaryString("#{10402}");
                m_OnMatrixBtnText.text = StrDictionary.GetClientDictionaryString("#{10404}");
                m_notInMatrix.gameObject.SetActive(true);
            }
            m_OnMatrixBtnSprite.spriteName = BLUE_SPRITE_NORMAL_NAME;
            m_OnMatrixBtn.normalSprite = BLUE_SPRITE_NORMAL_NAME;
            m_OnMatrixBtn.pressedSprite = BLUE_SPRITE_PRESSED_NAME;
            m_OnMatrixBtn.hoverSprite = BLUE_SPRITE_NORMAL_NAME;
        }
    }

    //上阵触发按钮
    public void OnClickItem()
    {
        LogModule.DebugLog("the Item is click ----------------------------------------------------------------------------");
        if (null != BelleMatrixBand.Instance() && null != BelleMatrixWindow.Instance() && myBelle != null)
        {
            BelleMatrixBand.Instance().SelectRoleToMatrix(this.m_RecommonBelleData.belleID, this.m_RecommonBelleData.isInCurMatrix);
        }
    }
}
