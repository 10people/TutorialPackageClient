using UnityEngine;
using System.Collections;
using GCGame;
using Module.Log;

public class RechargeItem : MonoBehaviour {

    public UISprite m_SprIcon;
    public UILabel m_LabelPrice;
    public UILabel m_LabelYuanbao;
    public UISprite m_SprYuanBaoIcon;
    public UISprite m_SprOnlyShowOnce;
    public GameObject m_objYuanSprite;
    public UILabel m_LabelHotTip;        // 热卖提示
    private bool m_bEnableTimes = false;

    public static RechargeItem CreateItem(GameObject resItem, Transform grid, string registerID, string strIconName, string price, string goodName, string strHotLabelText, bool bEnableTimes)
    {
        GameObject newItem = Utils.BindObjToParent(resItem, grid.gameObject, registerID);

        if(null == newItem)
        {
            LogModule.ErrorLog("load recharge item error!");
            return null;
        }
        RechargeItem curItem = newItem.GetComponent<RechargeItem>();
        if (null != curItem)
            curItem.InitData(strIconName, price, goodName, strHotLabelText, bEnableTimes);

        return curItem;
    }

    void OnBuyClick()
    {
        if (null == RechargeController.Instance())
        {
            return;
        }

        if (m_bEnableTimes)
        {
            NumChooseController.OpenWindow(1, 99999, Utils.GetDicByID(3225), OnChooseBuyCountOk, 1);
        }
        else
        {
            RechargeController.Instance().OnMakePay(gameObject.name, 1);
        }
        
    }

    public void InitData(string strIconName, string price, string goodName, string strHotLabelText, bool bEnableTimes)
    {
        if (!goodName.Contains("#y"))
        {
            m_SprYuanBaoIcon.gameObject.SetActive(false);
        }
        else
        {
            goodName = goodName.Remove(goodName.Length - 2);
        }
        m_SprIcon.spriteName = strIconName;
        if (bEnableTimes)
        {
            m_LabelPrice.text = Utils.GetDicByID(3226);
            m_objYuanSprite.SetActive(false);
        }
        else
        {
            m_objYuanSprite.SetActive(true);
            m_LabelPrice.text = price;
        }
        
        m_LabelYuanbao.text = goodName;
        m_bEnableTimes = bEnableTimes;
        if (strHotLabelText.Length > 2)
        {
            m_SprOnlyShowOnce.gameObject.SetActive(true);
            m_LabelHotTip.text = strHotLabelText;
        }
        else
        {
            m_SprOnlyShowOnce.gameObject.SetActive(false);
        }
        
    }

    public void UpdateData(bool bShowOnce)
    {
        m_SprOnlyShowOnce.gameObject.SetActive(bShowOnce);
    }

    public void OnChooseBuyCountOk(int num)
    {
        if (null != RechargeController.Instance())
            RechargeController.Instance().OnMakePay(gameObject.name, num);
    }
}
