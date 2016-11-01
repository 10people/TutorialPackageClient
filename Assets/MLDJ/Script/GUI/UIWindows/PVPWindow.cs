using UnityEngine;
using System.Collections;
using GCGame;

public class PVPWindow : MonoBehaviour
{
	public UILabel LabelRange;
	public UILabel LabelFightTime;
	public UILabel LabelPower;
    public UILabel LabelCom;
    //这里是一个引用窗口,需要界面赋值
    public BuyCopySceneNumWindow m_BuyCopySceneNumWindow;

    void OnEnable()
    {
        UpdatePVPInfo();
        PVPData.delUpdateMyData += UpdatePVPInfo;

        if (NewPlayerGuidLogic.Instance())
            NewPlayerGuidLogic.CloseWindow();
    }

    void OnDisable()
    {
        PVPData.delUpdateMyData -= UpdatePVPInfo;
    }

	void UpdatePVPInfo()
	{
        if (PVPData.MyPVPRange == -1) {
            LabelRange.text = "4000+";
        }else if (PVPData.MyPVPRange > 4000) {
            LabelRange.text = (PVPData.MyPVPRange / 1000 * 1000).ToString() + "+";
        }else {
            LabelRange.text = (PVPData.MyPVPRange + 1).ToString();
        }
				
        LabelFightTime.text = PVPData.LeftFightTime.ToString();
		LabelPower.text = PVPData.PVPJiFen.ToString();

        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            LabelCom.text = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.CombatValue.ToString();
        }
       
	}
    void onClickPvpShop()
    {
        UIManager.ShowUI(UIInfo.PvPShopRoot);
    }

    void OnBuyChallengeCoutClick()
    {
        BuyCopySceneNumWindow BuyWindow = m_BuyCopySceneNumWindow.GetComponent<BuyCopySceneNumWindow>();
        if (BuyWindow != null) {
            BuyWindow.SendData((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUASHANLUNJIAN, true );
            BuyWindow.gameObject.SetActive(true);
        }
    }
}
