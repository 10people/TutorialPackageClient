using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using Games.YuanBaoShopData;

public class PresentFriendItem : MonoBehaviour {

    public UILabel m_CartFriendNameLabel;
    public UILabel m_PresentFriendNameLabel;
    public UILabel m_PresentTimeLabel;

    private UInt64 m_FriendGuid;
    private string m_FriendName;
    private PresentRootLogic.TAB_INDEX m_Type;
    private UInt64 m_ShoppingListGuid;

	// Use this for initialization
	void Start () {
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}

    public void InitOnCartTab(UInt64 friendguid, string friendname)
    {
        if (friendguid == GlobeVar.INVALID_GUID)
        {
            return;
        }

        m_FriendGuid = friendguid;
        m_FriendName = friendname;
        m_Type = PresentRootLogic.TAB_INDEX.TAB_SHOPPINGCART;

        m_CartFriendNameLabel.text = friendname;

        m_CartFriendNameLabel.gameObject.SetActive(true);
        m_PresentFriendNameLabel.gameObject.SetActive(false);
        m_PresentTimeLabel.gameObject.SetActive(false);
    }

    public void InitOnPresentWaitPayTab(ShoppingList shoppinglist, PresentRootLogic.TAB_INDEX tab)
    {
        if (false == shoppinglist.IsValid())
        {
            return;
        }

        m_ShoppingListGuid = shoppinglist.Guid;
        m_FriendGuid = GlobeVar.INVALID_GUID;
        m_FriendName = shoppinglist.SenderName;
        m_Type = tab;

        m_PresentFriendNameLabel.text = StrDictionary.GetClientDictionaryString("#{4794}", shoppinglist.SenderName);
        m_PresentTimeLabel.text = StrDictionary.GetClientDictionaryString("#{4795}", shoppinglist.GetRemainDay());

        m_CartFriendNameLabel.gameObject.SetActive(false);
        m_PresentFriendNameLabel.gameObject.SetActive(true);
        m_PresentTimeLabel.gameObject.SetActive(true);
    }

    void ChooseFriend()
    {
        if (PresentRootLogic.Instance() == null)
        {
            return;
        }

        if (m_Type == PresentRootLogic.TAB_INDEX.TAB_SHOPPINGCART)
        {
            PresentRootLogic.Instance().OnChooseFriend(m_FriendGuid, m_FriendName);
        }
        else
        {
            PresentRootLogic.Instance().OnChooseShoppingList(m_ShoppingListGuid);
        }
    }
}
