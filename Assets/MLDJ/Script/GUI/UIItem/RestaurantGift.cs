using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame.Table;
using GCGame;
using System;

public class RestaurantGift : MonoBehaviour
{

    public UISprite m_GiftIcon;
    public UILabel  m_GiftName;
    public UILabel m_GiftCount;

    public void UpdateGiftInfo(Int32 itemId, Int32 itemCount)
    {
        Tab_CommonItem tabItem = TableManager.GetCommonItemByID(itemId, 0);
        m_GiftIcon.spriteName = tabItem.Icon;
        m_GiftName.text = tabItem.Name;
        m_GiftCount.text = itemCount.ToString();
    }

    void OnCloseGiftWindow()
    {
        NGUITools.SetActive(gameObject, false);
    }
 

}