/*****************************************************************************
    *  @COPYRIGHT NOTICE
    *  @Copyright (c) 2015, fanzhipeng
    *  @All rights reserved

    *  @file	 : BelleItemGetShowItem.cs
    *  @fullFile : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIItem\BelleItemGetShowItem.cs
    *  @filePath : D:\Cabal\Branches\Main\Project\Client\Assets\MLDJ\Script\GUI\UIItem

    *  @author   : fanzhipeng
    *  @date     : 2015/7/9 4:27:22
*****************************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
public class BelleItemGetShowItem : MonoBehaviour
{
    public UISprite m_getItemIcon;
    public UILabel m_belleItemGetDesc;
    private BelleGetItemWindow m_parentWindow;

    private static BelleItemGetShowItem m_instance = null;
    public static BelleItemGetShowItem Instance()
    {
        return m_instance;
    }

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

    public void SetData(BelleGetItemWindow parentWindow, Tab_BelleGetItemWay belleGetItemWay)
    {
        if (null == belleGetItemWay)
            return;
        m_parentWindow = parentWindow;
        
        gameObject.name = belleGetItemWay.Id.ToString();

        m_belleItemGetDesc.text = StrDictionary.GetClientDictionaryString("#{" + belleGetItemWay.WayDescDictId + "}");
        m_getItemIcon.spriteName = belleGetItemWay.WayIcon;
    }
    public void OnClickItem()
    {
        if (null != m_parentWindow)
        {
            m_parentWindow.OnClickBelleItem(gameObject);
        }
    }
}
