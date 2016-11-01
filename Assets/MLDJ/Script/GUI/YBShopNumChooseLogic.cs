using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.Item;
using Games.GlobeDefine;

public class YBShopNumChooseLogic : MonoBehaviour {

    public ItemSlotLogic m_ItemSlot;
    //public UILabel m_NumLabel;
    public UIInput m_NumInput;
    public UILabel m_SumPriceLabel;
    public UILabel m_ItemNameLabel;
    public GameObject m_ButtonGrid;
    public GameObject m_PresentButton;
    public BoxCollider m_InputBoxCollider;

    private int m_CurNum = 1;
    private int m_SumPrice = 0;

    private int m_GoodsId;
    private ItemSlotLogic.SLOT_TYPE m_eSlotType;
    private int m_ItemID;
    //private int m_GoodsNum;
    private int m_ItemPrice = 0;
    private bool m_bChooseBind = true;
    private CG_BUY_YUANBAOGOODS.DEADLINE_TYPE m_eDeadlineType;

	// Use this for initialization
	void Start () {
	
	}

    public void InitInfo(int nGoodsId, ItemSlotLogic.SLOT_TYPE eSlotType, int nItemID, int nGoodsNum, int nPrice, bool bBind, 
        CG_BUY_YUANBAOGOODS.DEADLINE_TYPE eDeadlineType, string strItemName)
    {
        m_CurNum = 1;
        m_NumInput.value = m_CurNum.ToString();
        m_ItemNameLabel.text = strItemName;

        m_GoodsId = nGoodsId;
        m_eSlotType = eSlotType;
        m_ItemID = nItemID;
        //m_GoodsNum = nGoodsNum;
        m_ItemSlot.InitInfo(eSlotType, nItemID, GoodsOnClick);
        m_ItemPrice = nPrice;
        m_bChooseBind = bBind;
        m_eDeadlineType = eDeadlineType;
        UpdateSumPrice();
        UpdatePresentButton(nGoodsId);

        if (IsLimitVipBox())
        {
            m_InputBoxCollider.enabled = false;
        }
        else
        {
            m_InputBoxCollider.enabled = true;
        }
    }

    void GoodsOnClick(int nItemID, ItemSlotLogic.SLOT_TYPE eSlotType, string strSlotName)
    {
        if (eSlotType == ItemSlotLogic.SLOT_TYPE.TYPE_ITEM)
        {
            GameItem item = new GameItem();
            item.DataID = nItemID;
            if (item.IsEquipMent())
            {
                EquipTooltipsLogic.ShowEquipTooltip(item, EquipTooltipsLogic.ShowType.Info);
            }  
            else
            {
                ItemTooltipsLogic.ShowItemTooltip(item, ItemTooltipsLogic.ShowType.Info);
            }
        }
    }

    void AddNum()
    {
        // VIP礼包只能买一个
        if (m_eSlotType != ItemSlotLogic.SLOT_TYPE.TYPE_FASHION && false == IsLimitVipBox())
        {
            if (m_CurNum < 999)
            {
                m_CurNum += 1;
                m_NumInput.value = m_CurNum.ToString();
                UpdateSumPrice();
                return;
            }
            else if (m_CurNum == 999)
            {
                m_CurNum = 1;
                m_NumInput.value = m_CurNum.ToString();
                UpdateSumPrice();
                return;
            }
            
        }
    }

    void SubNum()
    {
        // VIP礼包只能买一个
        if (m_eSlotType != ItemSlotLogic.SLOT_TYPE.TYPE_FASHION && false == IsLimitVipBox())
        {
            if (m_CurNum > 1)
            {
                m_CurNum -= 1;
                m_NumInput.value = m_CurNum.ToString();
                UpdateSumPrice();
                return;
            }
            else if (m_CurNum == 1)
            {
                m_CurNum = 999;
                m_NumInput.value = m_CurNum.ToString();
                UpdateSumPrice();
                return;
            }
        }        
    }

    public void NumChooseSubmit()
    {
        bool bCanParse = int.TryParse(m_NumInput.value, out m_CurNum);
        if (!bCanParse)
        {
            return;
        }

        UpdateSumPrice();
    }

    void ChargeOnClick()
    {
        DoPay();
    }

    void BuyOnClick()
    {
        if (m_bChooseBind)
        {
            int nPlayerYuanBaoBind = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
            int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();

            if (nPlayerYuanBaoBind < m_SumPrice)
            {
                // 元宝补充
                int nRepairYuanBao = m_SumPrice - nPlayerYuanBaoBind;
                if (nRepairYuanBao <= nPlayerYuanBao)
                {
                    MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1849}", nRepairYuanBao), "", RepairYuanBaoOK, RepairYuanBaoCancel);
                }
                else
                {
                    // 元宝不足
                    MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1848}"), "", BuyChargeOK, BuyChargeCancel);               
                }
            }
            else
            {
                SendBuyGoodsPacket();

                CloseWindow();
            }           
        }
        else
        {
            int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();
            
            if (nPlayerYuanBao < m_SumPrice)
            {
                // 元宝不足
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1848}"), "", BuyChargeOK, BuyChargeCancel);
            }
            else
            {
                SendBuyGoodsPacket();

                CloseWindow();               
            }
        }
    }

    void BuyChargeOK()
    {
        DoPay();
    }

    void DoPay()
    {
        RechargeData.PayUI();
    }

    void BuyChargeCancel()
    {
        
    }

    void RepairYuanBaoOK()
    {
        SendBuyGoodsPacket();

        CloseWindow();
    }

    void RepairYuanBaoCancel()
    {

    }

    void UpdateSumPrice()
    {
        m_SumPrice = m_CurNum * m_ItemPrice;
        string dicStr = StrDictionary.GetClientDictionaryString("#{1850}", m_SumPrice);
        m_SumPriceLabel.text = dicStr;
    }

    void SendBuyGoodsPacket()
    {
        int curNum = 0;
        bool bCanParse = int.TryParse(m_NumInput.value, out curNum);
        if (!bCanParse)
        {
            return;          
        }

        if (m_CurNum <= 0)
        {
            return;
        }

        //PlayGoodsSoundEffect();

        CG_BUY_YUANBAOGOODS packet = (CG_BUY_YUANBAOGOODS)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUY_YUANBAOGOODS);
        packet.GoodID = m_GoodsId;
        packet.BuyNum = curNum;
        packet.IsUseBind = m_bChooseBind ? 1 : 0;
        packet.Deadline = (int)m_eDeadlineType;
        packet.SendPacket();
    }

    void CloseWindow()
    {
        gameObject.SetActive(false);

        m_CurNum = 1;
        m_NumInput.value = "1";
        m_SumPrice = 0;
    }

    void PlayGoodsSoundEffect()
    {
        if (m_eSlotType == ItemSlotLogic.SLOT_TYPE.TYPE_ITEM)
        {
            GameItem item = new GameItem();
            item.DataID = m_ItemID;

            if (item.IsGem() || item.IsEnchanceExpItem() || item.IsStarStone())
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(110);  //buy_gem
            }
            else if (item.IsLivingSkillDrawing() || item.IsFellowSkillBook())
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(111);     //buy_paper
            }
            else
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(112);  //buy_drug
            }            
        }
        else
        {
            GameManager.gameManager.SoundManager.PlaySoundEffect(112);      //buy_drug
        }
    }

    void UpdatePresentButton(int nGoodsId)
    {
        Tab_YuanBaoShop tabGood = TableManager.GetYuanBaoShopByID(nGoodsId, 0);
        if (tabGood != null)
        {
            if (tabGood.IsCanPresent == 1 && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_PRESENT))
            {
                m_PresentButton.SetActive(true);
                m_ButtonGrid.transform.localPosition = new Vector3(-135, -100, 0);
                m_ButtonGrid.GetComponent<UIGrid>().cellWidth = 160;
                m_ButtonGrid.GetComponent<UIGrid>().Reposition();
            }
            else
            {
                m_PresentButton.SetActive(false);
                m_ButtonGrid.transform.localPosition = new Vector3(-75, -100, 0);
                m_ButtonGrid.GetComponent<UIGrid>().cellWidth = 200;
                m_ButtonGrid.GetComponent<UIGrid>().Reposition();
            }
        }
    }

    void PresentOnClick()
    {
        bool bCanParse = int.TryParse(m_NumInput.value, out m_CurNum);
        if (!bCanParse)
        {
            return;
        }

        if (false == GameManager.gameManager.PlayerDataPool.ShoppingCart.IsCanAdd(m_GoodsId, m_CurNum))
        {
            GUIData.AddNotifyData2Client(false, "#{5089}");
            return;
        }

        if (m_CurNum <= 0)
        {
            return;
        }

        GameManager.gameManager.PlayerDataPool.ShoppingCart.AddGoods(m_GoodsId, m_CurNum);

        PresentRootLogic.OpenWithTab(PresentRootLogic.TAB_INDEX.TAB_SHOPPINGCART);
    }

    bool IsLimitVipBox()
    {
        return m_eSlotType == ItemSlotLogic.SLOT_TYPE.TYPE_ITEM &&
            (m_ItemID == GlobeVar.YUANBAOSHOP_VIPBOX_LV9 ||
            m_ItemID == GlobeVar.YUANBAOSHOP_VIPBOX_LV10 ||
            m_ItemID == GlobeVar.YUANBAOSHOP_VIPBOX_LV11 ||
            m_ItemID == GlobeVar.YUANBAOSHOP_VIPBOX_LV12 ||
            m_ItemID == GlobeVar.YUANBAOSHOP_VIPBOX_LV13 ||
            m_ItemID == GlobeVar.YUANBAOSHOP_VIPBOX_LV14 ||
            m_ItemID == GlobeVar.YUANBAOSHOP_VIPBOX_LV15);
    }
}
