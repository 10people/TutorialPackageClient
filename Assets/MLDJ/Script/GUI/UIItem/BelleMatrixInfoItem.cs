/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleMatrixInfoItem.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIItem\BelleMatrixInfoItem.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIItem

    *  @author   : fanzhipeng
    *  @date     : 2015/7/3 17:43:17
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;
public class BelleMatrixInfoItem : MonoBehaviour
{
    public UISprite m_matrixIcon;
    public UISprite m_backgroundPic;
    public UILabel m_matrixName;

    //父亲界面
    private BelleMatrixInfoWindow m_parentWindow;
    private Color m_ColorHighlight = new Color(162.0f / 255.0f, 1.0f, 0, 1.0f);
    private Color m_ColorDisable = new Color(64 / 255.0f, 64 / 255.0f, 64 / 255.0f, 1.0f);
    private const string NORMAL_BACK_SPRITE_NAME = "scrollViewItemNormal";
    private const string HIGHLIGHT_BACK_SPRITE_NAME = "scrollViewItemPressed";
   // private const string 
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    /// <summary>
    /// 设置Item的数据
    /// </summary>
    /// <param name="belleMatrixInfoWindow"></param>
    /// <param name="i"></param>
    /// <param name="belleMatrix"></param>
    public void SetData(BelleMatrixInfoWindow belleMatrixInfoWindow, int i, Tab_BelleMatrix belleMatrix)
    {
        if (null == belleMatrix)
        {
            return;
        }
        m_parentWindow = belleMatrixInfoWindow;

        gameObject.name = i.ToString();

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (null != mainPlayer && belleMatrix.OpenLevel <= mainPlayer.BaseAttr.Level)
        {
            m_matrixName.text = belleMatrix.Name;
        }
        else
        {
            m_matrixName.text = belleMatrix.OpenLevel + GCGame.Utils.GetDicByID(5057);
            m_matrixName.color = m_ColorDisable;
            m_matrixIcon.color = m_ColorDisable;
        }

        SetClickHighLight(false);

        //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////表格加图标列
        //阵法图标
        m_matrixIcon.spriteName = belleMatrix.Icon;
    }

    public void SetClickHighLight(bool isHighlight)
    {
        string spriteName = NORMAL_BACK_SPRITE_NAME;
        if (isHighlight)
        {
            spriteName = HIGHLIGHT_BACK_SPRITE_NAME;
        }

        m_backgroundPic.spriteName = spriteName;
    }
    /// <summary>
    /// Item 响应函数
    /// </summary>
    public void OnItemClick()
    {
        if (null != m_parentWindow)
        {
            m_parentWindow.OnMatrixListItemClick(gameObject);
        }
    }
}
