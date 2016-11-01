using UnityEngine;
using System.Collections;
using GCGame;
using Module.Log;
using System;

public class LoverRankInfoItem : MonoBehaviour {

    public UILabel Rank;
	public UILabel Name;
	public UILabel Num;
	private LoverFlowerWindow m_parentWindow = null;
	public GameObject RankInfoBack;
    //public GameObject m_VisitSprite;

    private UInt64 m_Guid;
    
    
	// Use this for initialization
	void Start () {
	
	}

	public static LoverRankInfoItem CreateItem(GameObject grid, GameObject resItem, int count,string name, string num,LoverFlowerWindow parentWindow)
    {
        GameObject curItem = Utils.BindObjToParent(resItem, grid);
        if (null == curItem)
        {
            LogModule.ErrorLog("CreateItem, curItem error!");

        }

		curItem.name = count.ToString();
		LoverRankInfoItem curItemComponent = curItem.GetComponent<LoverRankInfoItem>();
        if (null == curItemComponent)
        {
            LogModule.ErrorLog("relation list item error!");
            ResourceManager.DestroyResource(ref curItem);
            return null;
        }

		curItemComponent.SetData(parentWindow,count, name ,num);
        return curItemComponent;
    }

	public void SetData(LoverFlowerWindow parentWindow,int count, string name,string num)
    {
        m_parentWindow = parentWindow;
		Rank.text = count.ToString();
		Name.text = name;
		Num.text = num;
		if (1 <= count && count <= 3)
		{
			RankInfoBack.SetActive(true);
		}
    }

    void OnItemClick()
    {
        
    }

    public void UpdateRestaurantVisitState()
    {
        /*if (null == RestaurantData.m_PlayerRestaurantInfo ||
            null == RestaurantData.m_PlayerRestaurantInfo.m_VisitFrindList )
        {
            return;
        }
        int nCount = RestaurantData.m_PlayerRestaurantInfo.m_VisitFrindList.Count;
        for (int i = 0; i < nCount; i++)
        {
            if (m_Guid == RestaurantData.m_PlayerRestaurantInfo.m_VisitFrindList[i])
            {
                m_VisitSprite.SetActive(true);
            }
        }*/
    }
}
