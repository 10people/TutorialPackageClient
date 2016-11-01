using UnityEngine;
using System.Collections;
using GCGame;
using Module.Log;
using System;

public class RelationNameListItem : MonoBehaviour {

    public UILabel labelName;
    private RelationNamePopController m_parentWindow = null;
    public GameObject m_VisitSprite;

    private UInt64 m_Guid;

    public GameObject restaurantInfo;
    public UISprite restauranIcon;
    public UILabel restaurantLevel;
    public GameObject restaurantButtom;
    
    
	// Use this for initialization
	void Start () {
	
	}

    public static RelationNameListItem CreateItem(GameObject grid, GameObject resItem, string name, RelationNamePopController parentWindow, Relation relationData)
    {
        GameObject curItem = Utils.BindObjToParent(resItem, grid);
        if (null == curItem)
        {
            LogModule.ErrorLog("CreateItem, curItem error!");

        }
        curItem.name = name;
        RelationNameListItem curItemComponent = curItem.GetComponent<RelationNameListItem>();
        if (null == curItemComponent)
        {
            LogModule.ErrorLog("relation list item error!");
            ResourceManager.DestroyResource(ref curItem);
            return null;
        }

        curItemComponent.SetData(parentWindow, relationData);
        return curItemComponent;
    }

    public void SetData(RelationNamePopController parentWindow, Relation relationData)
    {
        m_parentWindow = parentWindow;
        labelName.text = relationData.Name;
        m_Guid = relationData.Guid;
        m_VisitSprite.SetActive(false);
        if (restaurantLevel != null)
        {
            restaurantLevel.text = relationData.Level.ToString();
        }
        if (restauranIcon != null)
        {
            restauranIcon.spriteName = Utils.GetHeadPicByProfession(relationData.Profession);
        }
    }

    void OnItemClick()
    {
        if (null != m_parentWindow)
            m_parentWindow.OnItemClick(this);

		m_VisitSprite.SetActive (true);
    }

	public void hideHightLight()
	{
		m_VisitSprite.SetActive (false);
	}
    public void UpdateRestaurantVisitState()
    {
        if (null == RestaurantData.m_PlayerRestaurantInfo ||
            null == RestaurantData.m_PlayerRestaurantInfo.m_VisitFrindList )
        {
            return;
        }
        int nCount = RestaurantData.m_PlayerRestaurantInfo.m_VisitFrindList.Count;
        for (int i = 0; i < nCount; i++)
        {
            if (m_Guid == RestaurantData.m_PlayerRestaurantInfo.m_VisitFrindList[i])
            {
                restaurantButtom.SetActive(false);
                m_VisitSprite.SetActive(true);
            }
        }
    }
    public void SetRestaurantItemInfo()
    {
        if (restaurantInfo != null)
        {
            restaurantInfo.SetActive(true);
        }
    }
}
