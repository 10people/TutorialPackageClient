using UnityEngine;
using GCGame;
using System.Collections.Generic;
using Games.GlobeDefine;
using GCGame.Table;
using Games.FakeObject;
using Games.UserCommonData;

public class FashionLogic : MonoBehaviour
{
    private static FashionLogic m_Instance = null;
    public static FashionLogic Instance()
    {
        return m_Instance;
    }

#region UI ref
    public GameObject m_FashionItemGrid;
    public UILabel m_ChooseFashionName;
    public UILabel m_TimeLeftLabel;
    public UILabel m_DescLabel;
    public UILabel m_RubyLabel;
    public UILabel m_SourceLabel;
    public GameObject m_EquipButton;
    public GameObject m_TakeOffButton;
    public GameObject m_RenewButton;
    public GameObject m_BuyButton;
    public GameObject m_FashionItem;

    public GameObject buySuitDialog;
    public GameObject btnOKBuy;
    public GameObject btnCancelBuy;
    public UILabel lblBuyTitle;
    public UILabel lblBuyDesc;
    public UILabel lblBuyCost;
    public TabController buyOptions;

    public TabController m_TitleControl;

    public GameObject m_FakeObjTopLeft;
    public GameObject m_FakeObjBottomRight;
    public ModelDragLogic m_ModelDrag;
    public enum FashionType 
    { 
        TYPE_ClOSETH = 1,   // 外装
        TYPE_WING = 2,   // 羽毛
    }

#endregion

#region params
    private FakeObject m_PlayerFakeObj;
    private int m_PlayerFakeObjID = GlobeVar.INVALID_ID;
    private GameObject m_FakeObjGameObject = null;
    
    private bool m_IsFitOn = false;
    public bool IsFitOn
    {
        get { return m_IsFitOn; }
        set { m_IsFitOn = value; }
    }
    private int m_BuyType = (int)CG_BUY_FASHION.BUYTYPE.TYPE_WEEK;
    private int m_CurTab = (int)FashionType.TYPE_ClOSETH;
    int m_curChooseFashion = GlobeVar.INVALID_ID;
    Tab_FashionData mCurFashion = null;
#endregion

#region UI ref functions
    public void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.FashionRoot);
    }
#endregion

#region functions
    void OnEnable()
    {
        m_Instance = this;
        InvokeRepeating("SlowUpdate", 0f, 60.0f);

        

        //更新预览模型
        GameManager.gameManager.ActiveScene.InitFakeObjRoot(m_FakeObjTopLeft, m_FakeObjBottomRight);
        int profession = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
        CreatePartnerFakeObj(profession);
        GameManager.gameManager.ActiveScene.ShowFakeObj();
        Init();
    }

    void OnDisable()
    {
        CancelInvoke("SlowUpdate");
        DestroyPartnerFakeObj();
        GameManager.gameManager.ActiveScene.HideFakeObj();
        m_Instance = null;
    }

    void Init()
    {
        UIEventListener.Get(m_BuyButton).onClick = ShowBuySuitDialog;
        UIEventListener.Get(m_RenewButton).onClick = ShowRenewDialog;
        UIEventListener.Get(btnOKBuy).onClick = BuyFashion;
        UIEventListener.Get(btnCancelBuy).onClick = HideBuySuitDialog;
        buyOptions.delTabChanged = OnTabChange;
        m_TitleControl.delTabChanged = OnTitleTabChange;
        InitFashionList();
        UpdateRuby();
    }

    public void UpdateRuby()
    {
        m_RubyLabel.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind().ToString();
    }

    void OnTitleTabChange(TabButton button)
    {
        int FashionFirstId = 0;
        string m_buttonName = button.name;
        if (m_buttonName == "Boutique")
        {
            FashionFirstId = 0;
            m_CurTab = (int)FashionType.TYPE_ClOSETH;
        }
        else if (m_buttonName == "Wing")
        {
            FashionFirstId = 2;
            m_CurTab = (int)FashionType.TYPE_WING;
        }
        m_curChooseFashion = GlobeVar.INVALID_ID;
        InitFashionList();
        int profession = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
        CreatePartnerFakeObj(profession);
        foreach (FashionItemLogic item in m_FashionItemGrid.GetComponentsInChildren<FashionItemLogic>())
        {
            if (item.FashionID == FashionFirstId)
            {
                item.HandleItemChoose();
            }
        }
    }

    void OnTabChange(TabButton button)
    {
        m_BuyType = int.Parse(button.name.Substring(button.name.Length - 1, 1)) - 1;
        switch(m_BuyType)
        {
            case 0:
                lblBuyCost.text = mCurFashion.PriceWeek.ToString();
                break;
            case 1:
                lblBuyCost.text = mCurFashion.PriceMonth.ToString();
                break;
            case 2:
                lblBuyCost.text = mCurFashion.PriceForever.ToString();
                break;
        }
    }

    void ShowBuySuitDialog(GameObject go)
    {
        if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_FLYWING) &&
            m_CurTab == (int)FashionType.TYPE_WING)
        {
            GUIData.AddNotifyData("#{10830}");
            return;
        }
        Tab_FashionData tabFashionData = TableManager.GetFashionDataByID(m_curChooseFashion, 0);
        if (tabFashionData != null)
        {
            if (tabFashionData.FashionType == (int)FashionType.TYPE_WING)
            {
                if (!GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_OPEN_FLYWING))
                {
                    GUIData.AddNotifyData("#{10830}");
                    return;
                }
            }
        }

        //if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level < 45 && m_CurTab == (int)FashionType.TYPE_WING)
        //{
        //    GUIData.AddNotifyData("#{10830}");
        //    return;
        //}
        lblBuyTitle.text = StrDictionary.GetClientDictionaryString("#{11132}");
        lblBuyDesc.text = StrDictionary.GetClientDictionaryString("#{11131}", mCurFashion.Name);
        buyOptions.ChangeTab("Op1");
        lblBuyCost.text = mCurFashion.PriceWeek.ToString();
        buySuitDialog.SetActive(true);
    }

    void ShowRenewDialog(GameObject go)
    {
        lblBuyTitle.text = StrDictionary.GetClientDictionaryString("#{11136}");
        lblBuyDesc.text = StrDictionary.GetClientDictionaryString("#{11137}", mCurFashion.Name);
        lblBuyCost.text = mCurFashion.PriceWeek.ToString();
        buySuitDialog.SetActive(true);
    }

    void HideBuySuitDialog(GameObject go)
    {
        buySuitDialog.SetActive(false);
    }

    void BuyFashion(GameObject go)
    {
        CG_BUY_FASHION packet = (CG_BUY_FASHION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUY_FASHION);
        packet.FashionID = m_curChooseFashion;
        packet.BuyType = m_BuyType;
        packet.SendPacket();
        buySuitDialog.SetActive(false);
    }

    /// <summary>
    /// 销毁FakeObj
    /// </summary>
    private void DestroyPartnerFakeObj()
    {
        if (m_PlayerFakeObj != null)
        {
            m_PlayerFakeObj.Destroy();
            m_PlayerFakeObj = null;
        }
    }

    public enum FashionFakeObjectID
    {
        FakeObjectID_SHAOLIN = 68,
        FakeObjectID_TIANSHAN = 69,
        FakeObjectID_DALI = 71,
        FakeObjectID_XIAOYAO = 70
    }
    /// <summary>
    /// 创建FakeObj
    /// </summary>
    /// <param name="pro"></param>
    private void CreatePartnerFakeObj(int pro)
    {
        if (m_PlayerFakeObj != null)
        {
            DestroyPartnerFakeObj();
        }
        CharacterDefine.PROFESSION profession = (CharacterDefine.PROFESSION)pro;
        //对应FakeObject.txt配置
        int fakeObjId = -1;
        switch (profession)
        {
            case CharacterDefine.PROFESSION.SHAOLIN:
                fakeObjId = (int)FashionFakeObjectID.FakeObjectID_SHAOLIN;
                break;
            case CharacterDefine.PROFESSION.TIANSHAN:
                fakeObjId = (int)FashionFakeObjectID.FakeObjectID_TIANSHAN;
                break;
            case CharacterDefine.PROFESSION.DALI:
                fakeObjId = (int)FashionFakeObjectID.FakeObjectID_DALI;
                break;
            case CharacterDefine.PROFESSION.XIAOYAO:
                fakeObjId = (int)FashionFakeObjectID.FakeObjectID_XIAOYAO;
                break;
            default:
                fakeObjId = (int)FashionFakeObjectID.FakeObjectID_TIANSHAN;
                break;
        }

        m_PlayerFakeObj = new FakeObject();
        if (m_PlayerFakeObj == null)
        {
            return;
        }

        m_PlayerFakeObjID = fakeObjId;
        m_PlayerFakeObj.initFakeObject(fakeObjId, GameManager.gameManager.ActiveScene.FakeObjTrans, out m_FakeObjGameObject);
        if (null != m_PlayerFakeObj.ObjAnim)
        {
            m_ModelDrag.ModelTrans = m_PlayerFakeObj.ObjAnim.transform;
        }
    }

    public void FitOnFashion(int nFashionID)
    {
        Tab_FashionData tabFashionData = TableManager.GetFashionDataByID(nFashionID, 0);
        if (tabFashionData == null)
        {
            return;
        }

        Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(tabFashionData.ItemVisualID, 0);
        if (tabItemVisual == null)
        {
            return;
        }

        int nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID(tabItemVisual);
        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(m_PlayerFakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        List<object> param = new List<object>();
        param.Add(tabFakeObject);
        param.Add(m_PlayerFakeObj);

        Singleton<ObjManager>.GetInstance().ReloadModel(m_FakeObjGameObject,
            tabCharModel.ResPath,
            Singleton<ObjManager>.GetInstance().AsycLoadRoleViewFitOnObjOver,
            param);
    }

    public void FitOnWing()
    {
        int profession = Singleton<ObjManager>.GetInstance().MainPlayer.Profession;
        CreatePartnerFakeObj(profession);
    }

    /// <summary>
    /// 时钟更新
    /// </summary>
    void SlowUpdate()
    {
        UpdateCurChooseFashion();
    }

    /// <summary>
    /// 更新时装信息
    /// </summary>
    /// <param name="nFashionID"></param>
    public void HandleSendFashionInfo(int nFashionID)
    {
        if (nFashionID == m_curChooseFashion)
        {
            UpdateCurChooseFashion();
        }
        foreach (FashionItemLogic item in m_FashionItemGrid.GetComponentsInChildren<FashionItemLogic>())
        {
            if (item.FashionID == nFashionID)
            {
                item.UpdateState(GameManager.gameManager.PlayerDataPool.FashionDeadline[nFashionID] != 0);
            }
        }
        m_RubyLabel.text = GameManager.gameManager.PlayerDataPool.Money.GetMoney_YuanBaoBind().ToString();
    }

    public void HandleSendCurFashion(int nCurFashionID)
    {
        GameManager.gameManager.PlayerDataPool.CurFashionID = nCurFashionID;
        FashionLogic.Instance().UpdateCurChooseFashion();
    }

    /// <summary>
    /// 弃用
    /// </summary>
    void ShowFashionChange()
    {
        CG_CHANGE_SHOWFASHION packet = (CG_CHANGE_SHOWFASHION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CHANGE_SHOWFASHION);
        packet.NoParam = 1;
        packet.SendPacket();
    }

    public void ChooseFashionItem(int nFashionID)
    {
        foreach (FashionItemLogic item in m_FashionItemGrid.GetComponentsInChildren<FashionItemLogic>())
        {
            item.UpdateHightLight(nFashionID);
        }

        Tab_FashionData tabFashion = TableManager.GetFashionDataByID(nFashionID, 0);
        if (tabFashion == null)
        {
            return;
        }
        mCurFashion = tabFashion;
        m_curChooseFashion = nFashionID;
        m_ChooseFashionName.text = tabFashion.Name;
        //m_DescLabel.text = StrDictionary.GetClientDictionaryString(tabFashion.DescDicId);
		m_DescLabel.text = Utils.GetDicByID(int.Parse(tabFashion.DescDicId));
        IsFitOn = true;
        UpdateCurChooseFashion();
    }

    public void ClearFashionItemChoose()
    {
        ChooseFashionItem(GlobeVar.INVALID_ID);
    }

    bool isFirst = true;
    void InitFashionList()
    {
        Utils.CleanGrid(m_FashionItemGrid);
        List<Tab_FashionData> notObtainedList = new List<Tab_FashionData>();
        foreach (var dataList in TableManager.GetFashionData().Values)
        {
            Tab_FashionData data = dataList[0];
            bool isObtained = (GameManager.gameManager.PlayerDataPool.FashionDeadline[data.Id] != 0);
            if (!isObtained)
            {
                notObtainedList.Add(data);
                continue;
            }
            if (data.FashionType == m_CurTab)
            {
                AddFashionItem(data, isObtained);
            }
        }
        foreach (Tab_FashionData data in notObtainedList)
        {
            if (data.FashionType == m_CurTab)
            {
                AddFashionItem(data, false);
            }
        }
        m_FashionItemGrid.GetComponent<UICabalGrid>().Reposition();
    }

    void AddFashionItem(Tab_FashionData data, bool isObtained)
    {
        GameObject newFashionItem = Utils.BindObjToParent(m_FashionItem, m_FashionItemGrid);
        if (newFashionItem != null)
        {
            FashionItemLogic newFashionItemLogic = newFashionItem.GetComponent<FashionItemLogic>();
            if (null != newFashionItemLogic)
            {
                newFashionItemLogic.InitInfo(data, isObtained);
                if (isFirst)
                {
                    newFashionItemLogic.HandleItemChoose();
                    isFirst = false;
                }
                if (data.Id == Singleton<ObjManager>.Instance.MainPlayer.CurFashionID)
                {
                    newFashionItemLogic.ShowChosenSprite();
                }
            }
        }
    }

    void EquipOnClick()
    {
        Tab_FashionData m_curChooseFashionData = TableManager.GetFashionDataByID(m_curChooseFashion, 0);
        int m_curChooseFashionType = 0;
        if (m_curChooseFashionData == null)
        {
            return;
        }
        m_curChooseFashionType = m_curChooseFashionData.FashionType;
        if (m_curChooseFashionType == (int)FashionType.TYPE_ClOSETH)
        {
            CG_WEAR_FASHION packet = (CG_WEAR_FASHION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_WEAR_FASHION);
            packet.FashionID = m_curChooseFashion;
            packet.SendPacket();
        }
        else if (m_curChooseFashionType == (int)FashionType.TYPE_WING)
        {
            CG_ASK_EQUIPFLYWING PACK = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
            PACK.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_DREAM);
            PACK.SetFlyWingId1(m_curChooseFashionData.ItemVisualID);
            PACK.SendPacket();
            //GameManager.gameManager.FlyWingMananger.DreamFlyWing(m_curChooseFashionData.ItemVisualID);
        }
        
    }

    void TakeOffOnClick()
    {
        Tab_FashionData m_curChooseFashionData = TableManager.GetFashionDataByID(m_curChooseFashion, 0);
        int m_curChooseFashionType = 0;
        if (m_curChooseFashionData == null)
        {
            return;
        }
        m_curChooseFashionType = m_curChooseFashionData.FashionType;
        if (m_curChooseFashionType == (int)FashionType.TYPE_ClOSETH)
        {
            CG_TAKEOFF_FASHION packet = (CG_TAKEOFF_FASHION)PacketDistributed.CreatePacket(MessageID.PACKET_CG_TAKEOFF_FASHION);
            packet.FashionID = m_curChooseFashion;
            packet.SendPacket();
        }
        else if (m_curChooseFashionType == (int)FashionType.TYPE_WING)
        {
            CG_ASK_EQUIPFLYWING PACK = (CG_ASK_EQUIPFLYWING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_EQUIPFLYWING);
            PACK.SetFlyWingType((int)GlobeVar.FLY_SOCKET_TYPE.FLY_SOCKET_CANCEL_DREAM);
            PACK.SendPacket();
            //GameManager.gameManager.FlyWingMananger.DreamFlyWing(m_curChooseFashionData.ItemVisualID);
        }
    }

    public void UpdateCurChooseFashion()
    {
        if (m_curChooseFashion == GlobeVar.INVALID_ID)
        {
            return;
        }
        int nRemainTime = GameManager.gameManager.PlayerDataPool.FashionDeadline[m_curChooseFashion] - GlobalData.ServerAnsiTime;
        Tab_FashionData tabFashion = TableManager.GetFashionDataByID(m_curChooseFashion, 0);
        if (GameManager.gameManager.PlayerDataPool.FashionDeadline[m_curChooseFashion] == 0)
        {
            // 无时装
            m_TimeLeftLabel.gameObject.SetActive(false);
            m_EquipButton.SetActive(false);
            m_TakeOffButton.SetActive(false);
            m_RenewButton.SetActive(false);
            m_SourceLabel.text = tabFashion.FashionSource;
            m_SourceLabel.gameObject.SetActive(true);
            m_BuyButton.SetActive(tabFashion.IsSale == 1);
        }
        else
        {
            m_BuyButton.SetActive(false);
            m_TimeLeftLabel.gameObject.SetActive(true);
            m_SourceLabel.gameObject.SetActive(false);
            Tab_FashionData tabFashionData = TableManager.GetFashionDataByID(m_curChooseFashion, 0);
            bool isThisSuit = false;
            if (tabFashionData.FashionType == (int)FashionType.TYPE_ClOSETH)
            {
                isThisSuit = GameManager.gameManager.PlayerDataPool.CurFashionID == m_curChooseFashion;
            }
            else if (tabFashionData.FashionType == (int)FashionType.TYPE_WING)
            {
                isThisSuit = GameManager.gameManager.FlyWingMananger.CurDreamFlyWingId == tabFashionData.ItemVisualID;
            }
            
            m_EquipButton.SetActive(!isThisSuit);
            m_TakeOffButton.SetActive(isThisSuit);

            if (GameManager.gameManager.PlayerDataPool.FashionDeadline[m_curChooseFashion] == GlobeVar.INVALID_ID)
            {
                // 永久         
                m_TimeLeftLabel.text = StrDictionary.GetClientDictionaryString("#{1667}");
                m_RenewButton.SetActive(false);
            }
            else if (nRemainTime > 0)
            {
                // 显示剩余时间
                if (nRemainTime >= 24 * 3600)
                {
                    m_TimeLeftLabel.text = StrDictionary.GetClientDictionaryString("#{1669}", Mathf.RoundToInt((float)nRemainTime / 24.0f / 3600.0f));
                }
                else
                {
                    m_TimeLeftLabel.text = StrDictionary.GetClientDictionaryString("#{1670}", Mathf.RoundToInt((float)nRemainTime / 60.0f));
                }

                if (tabFashion != null && tabFashion.IsSale == 1)
                {
                    m_RenewButton.SetActive(true);
                }
                else
                {
                    m_RenewButton.SetActive(false);
                }
            }
        }
    }

    public void HandleUpdateAttr()
    {
        FashionItemLogic[] itemArray = m_FashionItemGrid.GetComponentsInChildren<FashionItemLogic>();
        for (int i = 0; i < itemArray.Length; i++)
        {
            if (itemArray[i].FashionID == Singleton<ObjManager>.Instance.MainPlayer.CurFashionID)
            {
                itemArray[i].ShowChosenSprite();
            }
            else
            {
                itemArray[i].HideChosenSprite();
            }
        }
    }

    public void UpdateFashionView()
    {
        if (null == Singleton<ObjManager>.Instance.MainPlayer)
            return;

        int nModelVisualID = Singleton<ObjManager>.Instance.MainPlayer.ModelVisualID;
        bool isDefaultVisual = false;
        Tab_ItemVisual tabItemVisual = null;

        tabItemVisual = TableManager.GetItemVisualByID(nModelVisualID, 0);
        if (tabItemVisual == null)
        {
            isDefaultVisual = true;
        }
        else
        {
            isDefaultVisual = false;
        }

        if (isDefaultVisual)
        {
            tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
            if (tabItemVisual == null)
            {
                return;
            }
        }

        int nCharModelID = Singleton<ObjManager>.Instance.MainPlayer.GetCharModelID(tabItemVisual);
        Tab_CharModel tabCharModel = TableManager.GetCharModelByID(nCharModelID, 0);
        if (tabCharModel == null)
        {
            return;
        }

        Tab_FakeObject tabFakeObject = TableManager.GetFakeObjectByID(m_PlayerFakeObjID, 0);
        if (tabFakeObject == null)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().ReloadModel(m_FakeObjGameObject,
            tabCharModel.ResPath,
            Singleton<ObjManager>.GetInstance().AsycLoadFakeObjOver,
            tabFakeObject,
            m_PlayerFakeObj);
    }

    public int GetFashionRootCurTab()
    {
        return m_CurTab;
    }
    public void SetFashionRootCurTab(int tabNum)
    {
        m_CurTab = tabNum;
    }

    public int GetCurChooseFashion()
    {
        return m_curChooseFashion;
    }
#endregion
}