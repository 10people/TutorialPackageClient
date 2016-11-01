/********************************************************************
	created:	2015/11/30
	created:	2015/11/30 11:27
	filename: 	ItemGetWayItem.cs
	author:		fanzhipeng
	
	purpose:	技能升级界面----技能item获得新界面
*********************************************************************/
using UnityEngine;
using System.Collections;
using GCGame.Table;
public class ItemGetWayItem : MonoBehaviour
{
    public UISprite m_skillIcon;
    public UILabel m_desc;
    private Tab_ItemGetWay m_curGetWay;
    
    // Use this for initialization
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    public void SetData(Tab_ItemGetWay _tabGetWay)
    {
        if (null == _tabGetWay)
        {
            return;
        }
        
        m_skillIcon.spriteName = _tabGetWay.WayIcon;
        m_desc.text = StrDictionary.GetClientDictionaryString("#{" + _tabGetWay.WayDescDictId + "}");
        //m_curGetWay = _tabGetWay;
    }

    public void OnClickItem()
    {
        int nWayId;
        if (!int.TryParse(gameObject.name, out nWayId))
        {
            return;
        }
        m_curGetWay = TableManager.GetItemGetWayByID(nWayId,0);

        if (null == m_curGetWay)
        {
            return;
        }

        switch (m_curGetWay.WayType)
        {
            case 1:
                if (UIPathData.m_DicUIName.ContainsKey(m_curGetWay.WayValue))
                {
                    UIManager.CloseUI(UIInfo.SkillInfo);
                    UIManager.ShowUI(UIPathData.m_DicUIName[m_curGetWay.WayValue]);
                }
                break;
            case 2:
                MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{" + m_curGetWay.WayValue + "}"));
                break;
        }
    }
}
