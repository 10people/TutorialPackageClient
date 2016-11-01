using UnityEngine;
using System.Collections;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using Games.YuanBaoShopData;

public class PresentConfirmLogic : MonoBehaviour {

    public enum SHOW_TYPE
    {
        TYPE_INVALID = -1,
        TYPE_PRESENT = 0,
        TYPE_WAITPAY,
        TYPE_PAY,
    }

    public UILabel m_TitleLabel;
    public UILabel m_CostYuanBaoLabel;

    private SHOW_TYPE m_Type = SHOW_TYPE.TYPE_INVALID;
    private UInt64 m_ChooseFriendGuid = GlobeVar.INVALID_GUID;
    private string m_ChooseFriendName = "";
    private UInt64 m_ChooseShoppingListGuid = GlobeVar.INVALID_GUID;
    private int m_CostYuanBao = GlobeVar.INVALID_ID;

	// Use this for initialization
	void Start () {
	
	}

    public void Confirm_ShoppingCart(SHOW_TYPE type, UInt64 friendguid, string friendname)
    {
        if (type != SHOW_TYPE.TYPE_PRESENT && type != SHOW_TYPE.TYPE_WAITPAY)
        {
            return;
        }

        if (friendname == "" || friendguid == GlobeVar.INVALID_GUID)
        {
            return;
        }

        int nCostYuanBao = GameManager.gameManager.PlayerDataPool.ShoppingCart.GetCostYuanBao();
        if (nCostYuanBao == GlobeVar.INVALID_ID)
        {
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.ShoppingCart.GoodsInfo.Count <= 0 ||
            GameManager.gameManager.PlayerDataPool.ShoppingCart.GoodsInfo.Count > GlobeVar.SHOPPINGLIST_GOODSMAX)
        {
            return;
        }

        gameObject.SetActive(true);

        m_Type = type;
        m_ChooseFriendName = friendname;
        m_ChooseFriendGuid = friendguid;
        m_CostYuanBao = nCostYuanBao;

        if (type == SHOW_TYPE.TYPE_PRESENT)
        {
            m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{4757}", friendname);
        }
        else
        {
            m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{4758}", friendname);
        }
        m_CostYuanBaoLabel.text = nCostYuanBao.ToString();
    }

    public void Confirm_PayWaitPay(SHOW_TYPE type, string friendname, UInt64 shoppinglistguid)
    {
        if (type != SHOW_TYPE.TYPE_PAY)
        {
            return;
        }

        if (friendname == "")
        {
            return;
        }

        int nCostYuanBao = GameManager.gameManager.PlayerDataPool.WaitPayRecord.GetCostYuanBao(shoppinglistguid);
        if (nCostYuanBao == GlobeVar.INVALID_ID)
        {
            return;
        }

        gameObject.SetActive(true);

        m_Type = type;
        m_ChooseFriendName = friendname;
        m_CostYuanBao = nCostYuanBao;
        m_ChooseShoppingListGuid = shoppinglistguid;

        m_TitleLabel.text = StrDictionary.GetClientDictionaryString("#{4757}", friendname);
        m_CostYuanBaoLabel.text = nCostYuanBao.ToString();
    }

    void ConfirmOK()
    {
        if (m_Type == SHOW_TYPE.TYPE_INVALID)
        {
            return;
        }

        if (m_Type == SHOW_TYPE.TYPE_PRESENT || m_Type == SHOW_TYPE.TYPE_PAY)
        {
            int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();
            if (nPlayerYuanBao < m_CostYuanBao)
            {
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{1848}"), "", BuyChargeOK);
                return;
            }
        }        

        if (m_Type == SHOW_TYPE.TYPE_PRESENT)
        {
            GameManager.gameManager.PlayerDataPool.ShoppingCart.Submit(m_ChooseFriendGuid, m_ChooseFriendName, ShoppingCart.SUBMIT_TYPE.TYPE_PRESENT);
        }
        else if (m_Type == SHOW_TYPE.TYPE_WAITPAY)
        {
            GameManager.gameManager.PlayerDataPool.ShoppingCart.Submit(m_ChooseFriendGuid, m_ChooseFriendName, ShoppingCart.SUBMIT_TYPE.TYPE_WAITPAY);
        }
        else if (m_Type == SHOW_TYPE.TYPE_PAY)
        {
            CG_PAY_SHOPPINGLIST_WAITPAY packet = (CG_PAY_SHOPPINGLIST_WAITPAY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PAY_SHOPPINGLIST_WAITPAY);
            packet.Guid = m_ChooseShoppingListGuid;
            packet.SendPacket();
        }

        CleanUp();

        if (PresentRootLogic.Instance() != null)
        {
            PresentRootLogic.Instance().CleanUp();
        }

        gameObject.SetActive(false);
    }

    void ConfirmCancel()
    {
        gameObject.SetActive(false);
        CleanUp();
    }

    void BuyChargeOK()
    {
        DoPay();
    }

    void DoPay()
    {
        RechargeData.PayUI();
    }

    void CleanUp()
    {
        m_ChooseFriendGuid = GlobeVar.INVALID_GUID;
        m_ChooseFriendName = "";
        m_ChooseShoppingListGuid = GlobeVar.INVALID_GUID;
        m_CostYuanBao = GlobeVar.INVALID_ID;
    }
}
