using UnityEngine;
using System.Collections;
using GCGame;
using GCGame.Table;
/********************************************************************
    created:	2016-03-15
    filename: 	BuyCopySceneNumWindow.cs
    purpose:	副本购买次数
*********************************************************************/
public class BuyCopySceneNumWindow : MonoBehaviour
{
    /*
     * 显示VIP等级
    */
    public UILabel m_LblVipLevel;
    /*
     * 输入框（购买次数)
    */
    public UILabel m_LbLBuyNum;
    /*
     * 剩余次数
     */
    public UILabel m_LblRemainNum;
    /*
     * 消耗元宝数量
     */
    public UILabel m_LblBuyPointNum;
    /*
     * 场景ID
     */ 
    private int  m_nBuyCopySceneId;
    /*
     * 单人or组队
     */
    private bool m_bIsSinglePlayerCopyScene;
    /*
     * 界面显示最小值
     */
    private const int m_cnMinValue      = 1;

    private bool m_isAdd = false;
    private bool m_isDel = false;
    void Start()
    {
    }
    void OnEnable()
    {
      Reset();
      CancelInvoke("SlowUpdate");
      InvokeRepeating("SlowUpdate", 0, 0.1f);
    }
    void OnDestroy()
    {
       
    }
    void Reset()
    {
        m_LblVipLevel.text      = VipData.GetVipLv().ToString();
        int nRemainNum = VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene);
        m_LbLBuyNum.text = nRemainNum.ToString();
        m_LblRemainNum.text = nRemainNum.ToString();
        int nPointNum = Utils.GetSceneBuyPoint(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene);
        m_LblBuyPointNum.text = StrDictionary.GetClientDictionaryString("#{5395}", nPointNum * nRemainNum);
    }
    void OnCloseWindow()
    {
       CancelInvoke("SlowUpdate");
       gameObject.SetActive(false);
    }
    public void SendData(int nCopySceneId, bool Single)
    {
        m_nBuyCopySceneId = nCopySceneId;
        m_bIsSinglePlayerCopyScene = Single;
    }
  
    void OnPayButtonClick()
    {
        UIManager.ShowUI(UIInfo.Recharge);
    }
    /*
     * OnEnterButtonClick()
     */
    void OnEnterButtonClick()
    {
        int nCurNum = 0;
        if (int.TryParse(m_LbLBuyNum.text, out nCurNum)) {
            if (nCurNum == 0) {
                OnCloseWindow();
                return;
            }
        }
       MessageBoxLogic.OpenCostBox(
       //StrDictionary.GetClientDictionaryString("#{11341}", Utils.GetSceneBuyPoint(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene)),
       StrDictionary.GetClientDictionaryString("#{11341}", nCurNum ),
       StrDictionary.GetClientDictionaryString("#{11007}", VipData.GetVipLv(), __GetIptValue(), VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene)),
       StrDictionary.GetClientDictionaryString("#{10323}"),
       StrDictionary.GetClientDictionaryString("#{11008}"),
       "qian3", "X" + __GetTotalBuybackYuanBao().ToString(), OnEnterBuyCopySceneNum, OnCancelBuyCopySceneNum);
    }

    void OnEnterBuyCopySceneNum()
    {
        int nCurNum = 0;
        if (int.TryParse(m_LbLBuyNum.text, out nCurNum)) {
            CG_BUYBACK_COPYSCENENUMBER pak = (CG_BUYBACK_COPYSCENENUMBER)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUYBACK_COPYSCENENUMBER);
            pak.SetNSceneClassID(m_nBuyCopySceneId);
            pak.SetType(m_bIsSinglePlayerCopyScene == true ? 1 : 0);
            pak.SetNData(__GetIptValue());
            pak.SendPacket();
        }
        OnCloseWindow();
    }

    void OnCancelBuyCopySceneNum()
    {
    }
    /*
    * OnAddButtonClick();
    */
    public void OnAddButtonClick()
    {
        if( VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene) == 0 ) {
            return;
        }
        int nCurNum = 0;
        if (int.TryParse(m_LbLBuyNum.text, out nCurNum)) 
        {
            nCurNum += 1;
            int nRemainNum = VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene);
            if( nCurNum > nRemainNum ) {
                nCurNum = 1;
            }
            //nCurNum = Mathf.Min(nCurNum, VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId));
            m_LbLBuyNum.text = nCurNum.ToString();
        }
        int nPointNum = Utils.GetSceneBuyPoint(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene);
        m_LblBuyPointNum.text = StrDictionary.GetClientDictionaryString("#{5395}", nPointNum * nCurNum );
    }
    /*
     * SubButtonClick();
     */
    public void OnSubButtonClick()
    {
        if (VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene) == 0) {
            return;
        }

        int nCurNum = 0;
        if (int.TryParse(m_LbLBuyNum.text, out nCurNum)) 
        {
            //nCurNum = Mathf.Max( nCurNum, 1 );
            //m_LbLBuyNum.text = nCurNum.ToString();
            nCurNum -= 1;
            if( nCurNum < 1 ) {
                nCurNum = VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene);
            }
            m_LbLBuyNum.text = nCurNum.ToString();
        }
        int nPointNum         = Utils.GetSceneBuyPoint(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene);
        m_LblBuyPointNum.text = StrDictionary.GetClientDictionaryString("#{5395}", nPointNum * nCurNum );
    }
    /*
     * 输入数据
     */
    void OnClickInput()
    {
        int nCurNum = 0;
        bool bCanParse = int.TryParse(m_LbLBuyNum.text, out nCurNum);
        if (bCanParse) 
        {
            nCurNum = Mathf.Min(VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene), Mathf.Max(1, nCurNum));
            if (1 == nCurNum)
            {
                m_LbLBuyNum.text = "1";
            }
        }
    }
    /*
     * 得到当前Input框内的值
     */
    private int __GetIptValue() 
    {
        int nCurNum = 0;
        if (int.TryParse(m_LbLBuyNum.text, out nCurNum)) 
        {
            return nCurNum;    
        }
        return 0;
    }
    /*
     * 得到购买一次副本需要消耗的元宝数量
     */
    private int __GetTotalBuybackYuanBao()
    {
        int nCurNum = 0;
        if (int.TryParse(m_LbLBuyNum.text, out nCurNum)) {
            nCurNum = Mathf.Min(nCurNum, VipData.GetVipCopySceneRemainBuyNum(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene));
            m_LbLBuyNum.text = nCurNum.ToString();
        }
        int nPointNum = Utils.GetSceneBuyPoint(m_nBuyCopySceneId, m_bIsSinglePlayerCopyScene);
        return nPointNum * nCurNum;
    }

    void SlowUpdate()
    {
        if (m_isAdd) {
            OnAddButtonClick();
        }
        if (m_isDel) {
            OnSubButtonClick();
        }
    }

    void AddOnPress()
    {
        m_isAdd = true;
    }

    void AddOnRelease()
    {
        m_isAdd = false;
    }

    void DelOnPress()
    {
        m_isDel = true;
    }

    void DelOnRelease()
    {
        m_isDel = false;
    }
	
}
