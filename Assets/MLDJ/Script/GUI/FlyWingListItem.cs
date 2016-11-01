using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.GlobeDefine;
using Games.FakeObject;

public class FlyWingListItem : MonoBehaviour {

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    //=========================================================================
    private int m_FlyWingId = GlobeVar.INVALID_ID;
  
	public UILabel m_ItemName ;
    public void Init( int id ,bool isChoose  )
    {
        Tab_FlyWing flyWingTab = TableManager.GetFlyWingByID(id, 0);
        if (flyWingTab == null) 
		{
			m_FlyWingId = GlobeVar.INVALID_ID;
			m_ItemName.text = "" ;
			return ;
		}

		m_FlyWingId = flyWingTab.INDEX;
		m_ItemName.text = flyWingTab.Name;

        if (isChoose)
           onClickItem();
    }
	public void onClickItem()
	{
       if(  FlyWingRoot.Instance().GetFlyWingDreamWin() != null && m_FlyWingId != GlobeVar.INVALID_ID)
       {
           FlyWingRoot.Instance().GetFlyWingDreamWin().GetComponent<FlyWingDream>().clickItem(m_FlyWingId);
       }
	}
    //==================================================================================
  
}
