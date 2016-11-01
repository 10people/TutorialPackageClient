using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame;
using Games.DailyMissionData;
using GCGame.Table;


public class DailyMissionRefresh : MonoBehaviour
{
   

    //刷品质所需物品数量接口
    public UILabel m_NeedYBNumLabel;
    public UILabel m_NeedBindYBNumLabel;
    public UILabel m_NeedNormalItemNumLabel;
    public UILabel m_NeedSpecialItemNumLabel;

    //玩家身上携带物品数量接口
    public UILabel m_UnBindYBNumLabel;
    public UILabel m_BindYBNumLabel;
    public UILabel m_NormalItemNumLabel;
    public UILabel m_SpecialItemNumLabel;

    private int m_nKind = 0;
    private int m_NeedNormalItemCount = 0;
    private int m_NeedBindYB = 0;
    private int m_NeedSpecialItemCount = 0;
    private int m_NeedYB = 0;

    // 界面加载后调用
    void Start()
    {
    }
    public void InitInfo(int NormalNum, int BindYBNum, int SpecialNum, int YBNum, int Kind)
    {
        m_NeedNormalItemCount = NormalNum;
        m_NeedBindYB = BindYBNum;
        m_NeedSpecialItemCount = SpecialNum;
        m_NeedYB = YBNum;
        m_nKind = Kind;
    }
   

    void NormalRefreshByItem()
    {
        int nNormalItem = 0;
        nNormalItem = m_NeedNormalItemCount;
        string str = "";
        str = StrDictionary.GetClientDictionaryString("#{5198}", nNormalItem);
        MessageBoxLogic.OpenOKCancelBox(str, null, OnMessageOKNormal, OnCancelClick);
    }

    void NormalRefreshByBindYuanbao()
    {
        int nBindYuanbao = 0;
        nBindYuanbao = m_NeedBindYB;
        string str = "";
        str = StrDictionary.GetClientDictionaryString("#{1538}", nBindYuanbao);
        MessageBoxLogic.OpenOKCancelBox(str, null, OnMessageOKBangdedYuanBao, OnCancelClick);
    }

    void SpecialRefreshByItem()
    {
        int nSpecialItem = 0;
        nSpecialItem = m_NeedSpecialItemCount;
        string str = "";
        str = StrDictionary.GetClientDictionaryString("#{5200}", nSpecialItem);
        MessageBoxLogic.OpenOKCancelBox(str, null, OnMessageOKSpecial, OnCancelClick);
    }


    void SpecialRefreshByYuanbao()
    {
        int nSpecialYuanBao = 0;
        nSpecialYuanBao = m_NeedYB;
        string str = "";
        str = StrDictionary.GetClientDictionaryString("#{5199}", nSpecialYuanBao);
        MessageBoxLogic.OpenOKCancelBox(str, null, OnMessageOKYuanBao, OnCancelClick);
    }

    void OnMessageOKNormal()
    {
        GameManager.gameManager.PlayerDataPool.DailyMissionData.AskUpdateDailyMissionNormal(m_nKind);
        OnCloseClick();
    }
    void OnMessageOKBangdedYuanBao()
    {
        GameManager.gameManager.PlayerDataPool.DailyMissionData.AskUpdateDailyMissionBangdedYuanBao(m_nKind);
        OnCloseClick();
    }
    void OnMessageOKSpecial()
    {
        GameManager.gameManager.PlayerDataPool.DailyMissionData.AskUpdateDailyMissionSpecial(m_nKind);
        OnCloseClick();
    }
    void OnMessageOKYuanBao()
    {
        GameManager.gameManager.PlayerDataPool.DailyMissionData.AskUpdateDailyMissionYuanBao(m_nKind);
        OnCloseClick();
    }

    void OnCancelClick()
    {
        MessageBoxLogic.CloseBox();
    }

    void OnCloseClick()
    {
        if (null != DailyMissionWindow.Instance())
        {
            DailyMissionWindow.Instance().CloseRefresh();
        }
        
    }
    //刷品质所需物品数量显示
    public void ReturnAllItemNum()
    {
        m_NeedNormalItemNumLabel.text = "";
        m_NeedBindYBNumLabel.text = "";
        m_NeedSpecialItemNumLabel.text = "";
        m_NeedYBNumLabel.text = "";
        m_NeedNormalItemNumLabel.text = m_NeedNormalItemCount.ToString();
        m_NeedBindYBNumLabel.text = m_NeedBindYB.ToString();
        m_NeedSpecialItemNumLabel.text = m_NeedSpecialItemCount.ToString();
        m_NeedYBNumLabel.text = m_NeedYB.ToString();
    }
    
    //玩家身上所有物显示
    public void UpdateAllMoneyInfo()
    {
        int nNormalItemID = 59318;
        int nSpecialItemID = 59319;
        m_NormalItemNumLabel.text = "";
        m_BindYBNumLabel.text = "";
        m_SpecialItemNumLabel.text = "";
        m_UnBindYBNumLabel.text = "";
        int nNormalItem = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(nNormalItemID);
        int nPlayerYuanBaoBind = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind();
        int nSpecialItem = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(nSpecialItemID);
        int nPlayerYuanBao = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBao();

        m_UnBindYBNumLabel.text = nPlayerYuanBao.ToString();
        m_BindYBNumLabel.text = nPlayerYuanBaoBind.ToString();
        m_SpecialItemNumLabel.text = nSpecialItem.ToString();
        m_NormalItemNumLabel.text = nNormalItem.ToString(); 
    }
}