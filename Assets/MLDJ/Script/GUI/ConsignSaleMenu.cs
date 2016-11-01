/********************************************************************
	创建时间:	2014/06/12 13:21
	全路径:		\TLOL\Version\Main\Project\Client\Assets\MLDJ\Script\GUI\ConsignSaleMenu.cs
	创建人:		luoy
	功能说明:	寄售行购买菜单
	修改记录:
*********************************************************************/

using GCGame.Table;
using UnityEngine;
using System.Collections;

public class ConsignSaleMenu : MonoBehaviour {

	// Use this for initialization
    public GameObject m_buyMenu;
	void Start ()
    {
	}
	
    public  void OnShowBuyMenu()
    {
        gameObject.SetActive(true);
        m_buyMenu.SetActive(true);
    }
    void ClickShowBuyInfo()
    {
        if (ConsignSaleLogic.Instance() != null)
        {
            ConsignSaleLogic.Instance().ShowBuyItemInfo();
            gameObject.SetActive(false);
        } 
    }
    void ClickBuy()
    {
        if (ConsignSaleLogic.Instance() !=null)
        {
            int nSelBuyIndex = ConsignSaleLogic.Instance().SelBuyIndex;
            if (nSelBuyIndex >= 0 &&
                nSelBuyIndex < ConsignSaleLogic.Instance().BuyItemInfo.Count)
            {
                //是否花费XXX元宝购买XXX
                string dicStr = StrDictionary.GetClientDictionaryString("#{3242}", 
                    ConsignSaleLogic.Instance().BuyItemInfo[nSelBuyIndex].Price,
                    ConsignSaleLogic.Instance().BuyItemInfo[nSelBuyIndex].ItemInfo.GetName());
                MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnOkBuy, null);
            }
        }
    }

    void OnOkBuy()
    {
        if (null != ConsignSaleLogic.Instance())
            ConsignSaleLogic.Instance().BuyItem();

        gameObject.SetActive(false);
    }
    void ClickCancel()
    {
        gameObject.SetActive(false);
    }
}
