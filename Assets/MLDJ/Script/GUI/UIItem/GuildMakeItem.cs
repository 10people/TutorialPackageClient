using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;

public class GuildMakeItem : MonoBehaviour {

    public UILabel LabelName;
    public UILabel LableDesc;
    public UISprite SpriteIcon;
    public UISprite SpriteQuality;
    public UISprite SprHightlight;

    private GuildMake m_parent;
	private GuildShopMakeItem m_data;


    public static GuildMakeItem CreateItem(GameObject grid, GameObject resObj, string name, GuildMake parent, GuildShopMakeItem data)
	{
		GameObject curItem = Utils.BindObjToParent(resObj, grid);
        if (null != curItem)
        {
            GuildMakeItem curItemComponent = curItem.GetComponent<GuildMakeItem>();
            if (null != curItemComponent)
                curItemComponent.SetData(parent, data);
            return curItemComponent;
        }

        return null;
	}

    public void SetData(GuildMake parent, GuildShopMakeItem data)
	{
		m_parent = parent;
        m_data = data;

        if(data.IsValid())
        {
            Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(data.m_ItemID, 0);
            if (tabCommonItem == null)
            {
                return;
            }
            if (SpriteQuality != null)
            {
                SpriteQuality.spriteName = GlobeVar.QualityColorGrid[tabCommonItem.Quality - 1];
            }

            if (SpriteIcon != null)
            {
                SpriteIcon.spriteName = tabCommonItem.Icon;
            }

            if (LabelName != null)
            {
                LabelName.text = tabCommonItem.Name;
            }

            if (LableDesc != null)
            {
                LableDesc.text = Utils.GetDicByID(data.m_DictID);
            }
        }
    }

    public GuildShopMakeItem GetData()
	{
		return m_data;
	}

	void OnItemClick()
	{
		if(null != m_parent) m_parent.OnOpItemClick(this);
	}

    public void EnableHighlight(bool bEnable)
    {
        if (SprHightlight != null)
        {
            SprHightlight.gameObject.SetActive(bEnable);
        }
    }
    
}
