using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using Games.LogicObj;
using System;
using GCGame.Table;
using Module.Log;
using System.Collections.Generic;
using GCGame;
using Games.Item;
public class FlowerEggWindow : MonoBehaviour {

    public enum ShowType
    {
        ALL    = 0,     //鲜花和鸡蛋
        FLOWER,         //鲜花
        EGG,           //砸鸡蛋
    }

    public static int CHARM_ITEM_ID = 70007; //魅力道具

    private static FlowerEggWindow m_Instance = null;
    public static FlowerEggWindow Instance()
    {
        return m_Instance;
    }

    public GameObject   m_prefItem;
    public UILabel      m_LableNumber;
    public UIInput      m_NumInput;
    public UIGrid       m_DynamicItemGrid;

    private UInt64 m_Guid = GlobeVar.INVALID_GUID;
    private ShowType m_Type = ShowType.ALL;
    private int m_nItemNum = 0;
    FlowerEggItemSlot m_CurSelect;

    private static UInt64 m_sGuid;
    private static ShowType m_sType;

    public static void ShowFlowerEgg(UInt64 Guid, ShowType type)
    {
        m_sGuid = Guid;
        m_sType = type;
        UIManager.ShowUI(UIInfo.FlowerEggRoot, FlowerEggWindow.OnShowFlowerEgg);
    }

    private static void OnShowFlowerEgg(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            LogModule.ErrorLog("load FlowerEggRoot error");
            return;
        }

        if (null != FlowerEggWindow.Instance())
        {
            FlowerEggWindow.Instance().OpenFlowerEgg(m_sGuid, m_sType);
        }
    }

    void Awake()
    {
        m_Instance = this;
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    public void OpenFlowerEgg(UInt64 Guid, ShowType type)
    {
        m_Guid = Guid;
        m_Type = type;
        m_nItemNum = 1;
        m_CurSelect = null;
        LoadCharmItem();
    }

    private void LoadCharmItem()
    {
        if (null == m_DynamicItemGrid)
        {
            LogModule.ErrorLog("m_DynamicItemGrid id null");
            return;
        }
        if (null == m_prefItem)
        {
            LogModule.ErrorLog("tabCharItem is null");
            return;
        }
        Utils.CleanGrid(m_DynamicItemGrid.gameObject);
        int nIndex = 0;
        bool bCanAddItem = false;
        foreach (KeyValuePair<int, List<Tab_CharmItem>> pair in TableManager.GetCharmItem())
        {
            Tab_CharmItem tabCharItem = pair.Value[0];
            if (tabCharItem == null)
            {
                continue;
            }
            bCanAddItem = false;
            if (m_Type == ShowType.ALL)
            {
                bCanAddItem = true;              
            }
            else if (m_Type == ShowType.FLOWER)
            {
                if (tabCharItem.Type == (int)ShowType.FLOWER)
                {
                    bCanAddItem = true;                   
                }
            }
            else if (m_Type == ShowType.EGG)
            {
                if (tabCharItem.Type == (int)ShowType.EGG)
                {
                    bCanAddItem = true;              
                }
            }
            if (!bCanAddItem)
            {
                continue;
            }
            FlowerEggItemSlot oItem = FlowerEggItemSlot.CreateItem(m_DynamicItemGrid.gameObject, m_prefItem, nIndex.ToString(), this);
            if (oItem != null)
            {
                oItem.SetData(tabCharItem);
                if (m_CurSelect == null)
                {
                    SelectItem(oItem);
                }        
            }
            nIndex++;     
        }
        m_nItemNum = 1;
        m_NumInput.value = m_nItemNum.ToString();  
    }

    public void SelectItem(FlowerEggItemSlot selectItem)
    {
        if (null == selectItem)
        {          
            m_CurSelect = null;
            m_LableNumber.text = "";
            return;
        }
        if (m_CurSelect != null)
        {
            m_CurSelect.ItemSlotChooseCancel();
        }
        m_CurSelect = selectItem;
        m_CurSelect.ItemSlotChoose();
        UpdateItemNum();
    }

    public void UpdateItemNum()
    {
        if (null == m_CurSelect)
        {
            m_LableNumber.text = "";
            return;
        }
        int nCount = 0;
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        if (BackPack != null)
        {
            nCount = BackPack.GetItemCountByDataId(m_CurSelect.ItemID());
        }
        m_LableNumber.text = StrDictionary.GetClientDictionaryString("#{5326}", nCount);
    }

    public void OnClickItem(FlowerEggItemSlot oItem)
    {
        if (oItem == null)
        {
            LogModule.ErrorLog("OnClickItem::oItem = null");
            return;
        }
        SelectItem(oItem);
    }

    void AddNum()
    {
        if (m_nItemNum < 999)
        {
            m_nItemNum += 1;
            m_NumInput.value = m_nItemNum.ToString();          
            return;
        }
        else if (m_nItemNum == 999)
        {
            m_nItemNum = 1;
            m_NumInput.value = m_nItemNum.ToString();      
            return;
        }
    }

    void SubNum()
    {
        if (m_nItemNum > 1)
        {
            m_nItemNum -= 1;
            m_NumInput.value = m_nItemNum.ToString();
            return;
        }
        else if (m_nItemNum == 1)
        {
            m_nItemNum = 999;
            m_NumInput.value = m_nItemNum.ToString();
            return;
        }
    }

    public void NumChooseSubmit()
    {
        bool bCanParse = int.TryParse(m_NumInput.value, out m_nItemNum);
        if (!bCanParse)
        {
            return;
        } 
    }

    public void CloseWindow()
    {
        m_Guid = GlobeVar.INVALID_GUID;
        m_Type = ShowType.ALL;
        m_nItemNum = 0;
        SelectItem(null);
        UIManager.CloseUI(UIInfo.FlowerEggRoot);
    }

    public void OnClickGive()
    {
        Obj_MainPlayer mainplayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainplayer == null )
        {
            return;
        }
        if (m_CurSelect == null)
        {
            GUIData.AddNotifyData("#{5327}");
            return;
        }
        mainplayer.SendCharmItem(m_Guid, m_CurSelect.ItemID(), m_nItemNum);
    }

    public void OnClickBuy()
    {
        CG_ASK_YUANBAOSHOP_OPEN packet = (CG_ASK_YUANBAOSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_YUANBAOSHOP_OPEN);
        packet.NoParam = (int)YuanBaoShopLogic.OPEN_TYPE.OPEN_FLOWEREGG;
        packet.SendPacket();
    }
}
