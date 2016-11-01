using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Games.GlobeDefine;

public class FlowerEggItemSlot : MonoBehaviour {

    public UISprite m_ItemIcon;
    public UISprite m_QualitySprite;
    public UILabel  m_NumLabel;
    public UISprite m_DisableSprite;
    public UISprite m_ChooseSprite;
    public UILabel  m_LableCharmValue;

    private Tab_CharmItem m_tabItem;
    private FlowerEggWindow m_Parent = null;

    public static FlowerEggItemSlot CreateItem(GameObject grid, GameObject resItem, string name, FlowerEggWindow parent)
    {
        GameObject curItem = Utils.BindObjToParent(resItem, grid, name);
        if (null == curItem)
        {
            return null;
        }
        curItem.SetActive(true);
        FlowerEggItemSlot curItemComponent = curItem.GetComponent<FlowerEggItemSlot>();
        if (null == curItemComponent)
       {
           return null;
       }
        curItemComponent.SetParent(parent);
        return curItemComponent;
    }

    /// <summary>
    /// 设置侠客信息
    /// </summary>
    public void SetData(Tab_CharmItem tabCharmItem)
    {
        if (tabCharmItem == null)
        {
            ClearInfo();
            return;
        }
        Tab_CommonItem tabCommonItem = TableManager.GetCommonItemByID(tabCharmItem.Id, 0);
        if (tabCommonItem == null)
        {
            ClearInfo();
            return;
        }
        m_tabItem = tabCharmItem;

        m_ItemIcon.spriteName = tabCommonItem.Icon;
        m_ItemIcon.gameObject.SetActive(true);

        if (tabCommonItem.Quality -1 < GlobeVar.QualityColorGrid.Length)
        {
            m_QualitySprite.spriteName = GlobeVar.QualityColorGrid[tabCommonItem.Quality - 1];
            m_QualitySprite.gameObject.SetActive(true);
        }
        else
        {
            m_QualitySprite.gameObject.SetActive(false);
        }
        if (m_tabItem.Type == 1)
        {
            m_LableCharmValue.text = StrDictionary.GetClientDictionaryString("#{5328}", m_tabItem.CharmValue);
        }
        else if (m_tabItem.Type == 2)
        {
            m_LableCharmValue.text = StrDictionary.GetClientDictionaryString("#{5329}", m_tabItem.CharmValue);
        }      
        m_NumLabel.gameObject.SetActive(false);       
        m_DisableSprite.gameObject.SetActive(false);

    }

    /// <summary>
    /// 
    /// </summary>
    /// <param name="parent"></param>
    public void SetParent(FlowerEggWindow parent)
    {
        m_Parent = parent;
    }

    public void ClearInfo()
    {
        m_tabItem = null;
        m_Parent = null;
    }

    void SlotOnClick(GameObject value)
    {
      if ( m_Parent != null)
      {
          m_Parent.OnClickItem(this);
      }
    }

    public void ItemSlotChoose()
    {
        m_ChooseSprite.gameObject.SetActive(true);
    }

    public void ItemSlotChooseCancel()
    {
        m_ChooseSprite.gameObject.SetActive(false);
    }

    public int ItemID()
    {
        if (m_tabItem == null)
        {
            return -1;
        }
        return m_tabItem.Id;
    }
}
