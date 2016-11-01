using System;
using Games.Item;
using Games.LogicObj;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using GCGame;
using Module.Log;
using Games.GlobeDefine;
using System.Collections.Generic;

public class LivingSkillLogic : UIControllerBase<LivingSkillLogic> {

    public enum FORMULA_TYPE
    {
        TYPE_DAZAO = 0,
        TYPE_ZHIYAO = 1,
        TYPE_SHENJIE =2,
        TYPE_SHENQI = 3,
        TYPE_SUIT = 4,
    }
    public TabController m_SkillTab;
    public GameObject m_FormulaGrid;
    public GameObject m_StuffGrid;
    public UILabel m_MakeButtonLabel;
    public UILabel m_PayMoneyLabel;
    public UILabel m_PayStaminaLabel;
    public GameObject m_StuffCollectInfo;
    public UILabel m_StuffCollectLabel;
    public UILabel m_StaminaContentLabel;
    public UILabel m_MoneyContentLabel;
    public UILabel m_CountDownLabel;
    public GameObject m_StaminaTips;
    public GameObject m_SelShenQiStuffObj;
    public GameObject m_ShenQiStuffItem = null;
    
    // new added ui ref
    public GameObject m_HelpIcon;
    public Tooltip m_HelpInfo;
    public UISprite m_OutputIcon;
    public GameObject m_GetInfoPanel;
    public GameObject m_GetInfoGrid;
    public GameObject m_GetInfoCloseBg;
    public GameObject m_GetInfoItemTemplate;
    public Transform[] m_GetInfoAnchors;

    private GameObject m_FormulaItem = null;
    private GameObject m_StuffItem = null;
   
    private int m_CurFormulaID = GlobeVar.INVALID_ID;

    private UInt64 m_SelShenQiEuqipGuid = GlobeVar.INVALID_GUID; //神器打造中选择神器装备的GUID
    private UInt64 m_SelNormalEuqipGuid = GlobeVar.INVALID_GUID;  //神器打造中选择非神器装备的GUID
    private bool m_bIsMakeShenQi = false;//是否制造神器
    private bool m_bIsMakeShenQiByChuanCheng = false;//是否通过传承制造神器
    private bool m_bIsMakeSuit = false;
  //  private bool m_bisMakeShenUseBind = false;
  //  private bool m_bHaveLowShenQi = false;
    public GameObject m_ShowShenQiInfo;
    public GameObject m_QiuGouBt;
    private const string DaZaoTabStr  ="1DazaoButton";
    private const string ZhiYaoTabStr ="2ZhiyaoButton";
    private const string SuitTabStr = "4SuitButton";
    private const string ShenQiTabStr ="3ShenqiButton";

    void Awake()
    {
        SetInstance(this);
    }

	void Start () 
    {
        m_SelShenQiStuffObj.SetActive(false);
        m_SkillTab.delTabChanged = OnSkillTabClick;
        UIManager.LoadItem(UIInfo.LivingSkillFormulaItem, LoadFormulaItemOver);
        UIManager.LoadItem(UIInfo.LivingSkillStuffItem, LoadStuffItemOver);
        m_StuffCollectInfo.SetActive(false);
        if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level<(int)ShenQiInfo.MINOPENLEVEL)
        {
            TabButton _ShenQiBtTab = m_SkillTab.GetTabButton(ShenQiTabStr);
	        if (_ShenQiBtTab != null)
	        {
	           _ShenQiBtTab.gameObject.SetActive(false);
	        }
	    }
        UpdatePlayerStamina();
        UpdateCountDownLabel();

        UIEventListener.Get(m_HelpIcon).onClick = ShowHelpInfo;
        UIEventListener.Get(m_GetInfoCloseBg).onClick = HideGetInfo;
        Check_NewPlayerGuide();

#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.MAKE_UI);
#endif
	}

    void OnDestroy()
    {
        SetInstance(null);
    }

    void LoadFormulaItemOver(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load LivingSkillFormulaItem error");
            return;
        }

        m_FormulaItem = resItem;

        if (m_FormulaItem != null && m_StuffItem != null)
        {
            m_MakeButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1891}");
            UpdateLivingSkillInfo(FORMULA_TYPE.TYPE_DAZAO);
        }
    }

    void LoadStuffItemOver(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load YuanBaoShopItem error");
            return;
        }

        m_StuffItem = resItem;

        if (m_FormulaItem != null && m_StuffItem != null)
        {
            m_MakeButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1891}");
            UpdateLivingSkillInfo(FORMULA_TYPE.TYPE_DAZAO);
        }
    }
    
    void OnSkillTabClick(TabButton curButton)
    {
        if (curButton.name ==DaZaoTabStr )
        {
            m_MakeButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1891}");
            UpdateLivingSkillInfo(FORMULA_TYPE.TYPE_DAZAO);
            m_QiuGouBt.SetActive(false);
            m_ShowShenQiInfo.SetActive(false);
        }
        else if (curButton.name ==ZhiYaoTabStr )
        {
            m_MakeButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1892}");
            UpdateLivingSkillInfo(FORMULA_TYPE.TYPE_ZHIYAO);
            m_QiuGouBt.SetActive(false);
            m_ShowShenQiInfo.SetActive(false);
            if (m_NewPlayerGuideFlag_Step == 1)
                NewPlayerGuide(2);
        }
        if (curButton.name == ShenQiTabStr)
        {
            m_MakeButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1891}");
            UpdateLivingSkillInfo(FORMULA_TYPE.TYPE_SHENQI);
            m_QiuGouBt.SetActive(false);
            m_ShowShenQiInfo.SetActive(true);
        }
        if (curButton.name == SuitTabStr)
        {
            m_MakeButtonLabel.text = StrDictionary.GetClientDictionaryString("#{1891}");
            UpdateLivingSkillInfo(FORMULA_TYPE.TYPE_SUIT);
            m_QiuGouBt.SetActive(false);
            m_ShowShenQiInfo.SetActive(false);
        }
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.MAKE_TAB_UI);
#endif
    }
	private List<Tab_LivingSkill> DealLivingSkill()//打造重新排序
	{
		List<Tab_LivingSkill> liveSkill = new List<Tab_LivingSkill>();//未超出等级
		List<Tab_LivingSkill> liveSkillLV = new List<Tab_LivingSkill>();//超出等级
//		Dictionary<int, List<Tab_LivingSkill>> SkillDic = TableManager.GetLivingSkill ();
//		Tab_LivingSkill obj;
		foreach(KeyValuePair<int, List<Tab_LivingSkill>> pair in TableManager.GetLivingSkill())
		{
			Tab_LivingSkill tabLivingSkill = pair.Value[0];
			if(tabLivingSkill.OpenLevel>Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level)
				liveSkillLV.Add(tabLivingSkill);
			else
				liveSkill.Add(tabLivingSkill);
		}
		for (int i=0; i<liveSkillLV.Count; ++i) 
		{
			liveSkill.Add(liveSkillLV[i]);
		}
		return liveSkill;
	}
    void UpdateLivingSkillInfo(FORMULA_TYPE eType)
    {
        Utils.CleanGrid(m_FormulaGrid);
        Utils.CleanGrid(m_StuffGrid);
        m_FormulaGrid.GetComponent<UITopGrid>().Recenter(true);
        bool bFirstFormula = true;
        int index = 0;
		List<Tab_LivingSkill> liveSkill = DealLivingSkill ();
        //foreach(KeyValuePair<int, List<Tab_LivingSkill>> pair in TableManager.GetLivingSkill())
		for (int i=0; i<liveSkill.Count; ++i) 
        {
            //Tab_LivingSkill tabLivingSkill = pair.Value[0];
			Tab_LivingSkill tabLivingSkill = liveSkill[i];
            if (tabLivingSkill == null)
            {
                continue;
            }

            if (tabLivingSkill.Type == (int)eType ||
                (eType == FORMULA_TYPE.TYPE_SHENQI && tabLivingSkill.Type == (int)FORMULA_TYPE.TYPE_SHENJIE) //神器页面把神节配方加进来
                )
            {
                 //神器配方单独做处理 筛选出自己职业的神器配方
                if (tabLivingSkill.Type == (int) FORMULA_TYPE.TYPE_SHENQI ||
                    tabLivingSkill.Type == (int) FORMULA_TYPE.TYPE_SUIT)
                {
                    Tab_CommonItem _ProductItem = TableManager.GetCommonItemByID(tabLivingSkill.StaticProductItemId, 0);
                    if (_ProductItem == null)
                    {
                        continue;
                    }
                    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                    if (_mainPlayer == null)
                    {
                        continue;
                    }
                    //筛选出自己职业的神器配方
                    if (_mainPlayer.Profession != _ProductItem.ProfessionRequire)
                    {
                        continue;
                    }
                }
                // 加载对应分页商品
                //string itemName = index < 10 ? ("0" + index.ToString()) : (index.ToString());
                string itemName = tabLivingSkill.SortID > 0 ? tabLivingSkill.SortID.ToString() + tabLivingSkill.Id.ToString() : "99999" + tabLivingSkill.Id.ToString();
                GameObject FormulaItem = Utils.BindObjToParent(m_FormulaItem, m_FormulaGrid, itemName);
                if (FormulaItem == null)
                {
                    continue;
                }
               
                if (null != FormulaItem.GetComponent<LivingSkillFormulaLogic>())
                {
                    if (tabLivingSkill.StaticProductItemId ==-1)
                    {
                        FormulaItem.GetComponent<LivingSkillFormulaLogic>().InitInfo(tabLivingSkill.Id);
                    }
                    else
                    {
                        FormulaItem.GetComponent<LivingSkillFormulaLogic>().InitInfoForStaticProduct(tabLivingSkill.Id);
                    }
                    if (bFirstFormula)
                    {
                        FormulaItem.GetComponent<LivingSkillFormulaLogic>().ChooseFormula();
                        bFirstFormula = false;
                    }
                }

                index++;
            }
        }

        m_FormulaGrid.GetComponent<UIGrid>().Reposition(true);
        m_FormulaGrid.GetComponent<UITopGrid>().Recenter(true);
    }

    public void OnFormulaChoose(int nFormulaID)
    {
        Tab_LivingSkill tabLivingSkill = TableManager.GetLivingSkillByID(nFormulaID, 0);
        if (tabLivingSkill == null)
        {
            return;
        }

        Utils.CleanGrid(m_StuffGrid);
        int i = 0;
        if (tabLivingSkill.Type == (int)FORMULA_TYPE.TYPE_SHENQI ||
            tabLivingSkill.Type == (int)FORMULA_TYPE.TYPE_SHENJIE ||
            tabLivingSkill.Type == (int)FORMULA_TYPE.TYPE_SUIT)
        {
            for (; i < tabLivingSkill.getStuffIDCount(); i++)
            {
                int nStuffID = tabLivingSkill.GetStuffIDbyIndex(i);
                GameObject StuffItem = Utils.BindObjToParent(m_ShenQiStuffItem, m_StuffGrid, i.ToString());
                if (StuffItem != null)
                {
                    if (nStuffID != GlobeVar.INVALID_ID)
                    {
                        UInt64 itemGuid = GameManager.gameManager.PlayerDataPool.BackPack.GetItemGuidByDataID(tabLivingSkill.GetStuffIDbyIndex(i));
                        StuffItem.GetComponent<LivingSkillShenQiStuffLogic>().InitInfo(tabLivingSkill.GetStuffIDbyIndex(i), itemGuid, tabLivingSkill.GetStuffCountbyIndex(i));
                    }
                    else
                    {
                        // init empty
                    }
                }
            }
        }
        else
        {
            for (; i < tabLivingSkill.getStuffIDCount(); i++)
            {
                int nStuffID = tabLivingSkill.GetStuffIDbyIndex(i);
                GameObject StuffItem = Utils.BindObjToParent(m_StuffItem, m_StuffGrid, i.ToString());
                if (StuffItem != null)
                {
                    if (nStuffID != GlobeVar.INVALID_ID)
                    {
                        StuffItem.GetComponent<LivingSkillStuffLogic>().InitInfo(tabLivingSkill.GetStuffIDbyIndex(i), tabLivingSkill.GetStuffCountbyIndex(i));
                    }
                    else
                    {
                        // init empty
                        StuffItem.GetComponent<LivingSkillStuffLogic>().InitEmpty();
                    }
                }
            }
        }

        m_StuffGrid.GetComponent<UIGrid>().Reposition();
        //m_StuffGrid.GetComponent<UITopGrid>().Recenter(true);
        m_CurFormulaID = nFormulaID;

        m_PayMoneyLabel.text = tabLivingSkill.Money.ToString();
        m_PayStaminaLabel.text = tabLivingSkill.Stamina.ToString();
        m_OutputIcon.spriteName = tabLivingSkill.Icon;

        foreach (LivingSkillFormulaLogic formula in m_FormulaGrid.GetComponentsInChildren<LivingSkillFormulaLogic>())
        {
            if (formula.FormulaID != nFormulaID)
            {
                formula.ChooseCancel();
            }            
        }
    }

    void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.LivingSkill);
    }

    bool IsNeedWaringHaveLowShenQiEquip()
    {
        if (m_bIsMakeShenQi == false && m_bIsMakeSuit == false)
        {
            return false; //不是神器不用提示
        }
        if (m_bIsMakeShenQiByChuanCheng)
        {
            return false; //传承不用提示
        }
        GameItem stuffEquipItem = null;
      
        foreach (LivingSkillShenQiStuffLogic stuff in m_StuffGrid.GetComponentsInChildren<LivingSkillShenQiStuffLogic>())
        {
            GameItem stuffItem = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(stuff.ItemGuid);
            if (stuffItem != null && stuffItem.IsValid())
            {
                if (stuffItem.IsEquipMent() && stuffItem.IsShenQiEquipMent() ==false)
                {
                    stuffEquipItem =stuffItem;
                }
            }
        }
        if (stuffEquipItem !=null)
        {
            //背包是否有
            List<GameItem> backpackitem = GameManager.gameManager.PlayerDataPool.BackPack.GetList();
            for (int i = 0; i < backpackitem.Count; i++)
            {
                GameItem item = backpackitem[i];
                if (item.IsShenQiEquipMent() && item.GetMinLevelRequire()==stuffEquipItem.GetMinLevelRequire()-5) //有低一级的神器
                {
                    return true;
                }
            }
            //身上是否有
            List<GameItem> Equippackitem = GameManager.gameManager.PlayerDataPool.EquipPack.GetList();
            for (int i = 0; i < Equippackitem.Count; i++)
            {
                GameItem item = Equippackitem[i];
                //非神器 不能吸收神器
                if (item.IsShenQiEquipMent() && item.GetMinLevelRequire() == stuffEquipItem.GetMinLevelRequire() - 5) //有低一级的神器
                {
                    return true;
                }
            }
        }
        return false;
    }
    void MakeItem()
    {
        NewPlayerGuidLogic.CloseWindow();
        Tab_LivingSkill tabLivingSkill = TableManager.GetLivingSkillByID(m_CurFormulaID, 0);
        if (tabLivingSkill == null)
        {
            return;
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level < tabLivingSkill.OpenLevel)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false,"#{1900}",tabLivingSkill.OpenLevel);
            return;
        }

        bool isBind = false;
        bool isMakeShenQiMoreEquip = false;//神器打造总材料装备是否有多
        m_bIsMakeShenQi = false;
        m_bIsMakeSuit = false;
        Tab_CommonItem _ShenQiline = TableManager.GetCommonItemByID(tabLivingSkill.StaticProductItemId, 0);
        if (_ShenQiline != null)
        {
            if (_ShenQiline.ClassID == (int)ItemClass.EQUIP && tabLivingSkill.Type == (int)FORMULA_TYPE.TYPE_SUIT)
            {
                m_bIsMakeSuit = true;
            }
            else if (_ShenQiline.ClassID ==(int)ItemClass.EQUIP && _ShenQiline.ThirdClassID ==(int)EquipThirdClass.SHENQI)
            {
                m_bIsMakeShenQi = true;
            }
        }
        for (int i = 0; i < tabLivingSkill.getStuffIDCount(); i++ )
        {
            int nStuffID = tabLivingSkill.GetStuffIDbyIndex(i);
            int nStuffCount = tabLivingSkill.GetStuffCountbyIndex(i);
            if (nStuffID != GlobeVar.INVALID_ID)
            {
                if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(nStuffID) < nStuffCount)
                {
                    Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{1901}");
                    return;
                }    
                if (!isBind)
                {
                    if (GameManager.gameManager.PlayerDataPool.BackPack.GetBindItemCountByDataId(nStuffID) > 0)
                    {
                        isBind = true;
                        //m_bisMakeShenUseBind = true;
                    }                    
                }
                if (m_bIsMakeShenQi)
                {
                    Tab_CommonItem line = TableManager.GetCommonItemByID(nStuffID, 0);
                    if (line != null)
                    {
                        if (line.ClassID == (int)ItemClass.EQUIP && line.ThirdClassID ==(int)EquipThirdClass.SHENQI)
                        {
                            m_bIsMakeShenQiByChuanCheng = true; //有材料是神器 则是传承 不是打造
                        }
                        if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(nStuffID) > nStuffCount)
                        {
                            if (line.ClassID == (int) ItemClass.EQUIP)
                            {
                                isMakeShenQiMoreEquip = true;
                            }
                        }
                    }
                }

                if (m_bIsMakeSuit)
                {
                    Tab_CommonItem line = TableManager.GetCommonItemByID(nStuffID, 0);
                    if (line != null)
                    {
                        if (GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(nStuffID) > nStuffCount)
                        {
                            if (line.ClassID == (int)ItemClass.EQUIP)
                            {
                                isMakeShenQiMoreEquip = true;
                            }
                        }
                    }
                }
            }
        }

        if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.CurStamina < tabLivingSkill.Stamina)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2139}");
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.BackPack.GetCanContainerSize() <= 0)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{1903}");
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin() < tabLivingSkill.Money)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{1902}");
            return;
        }
        if (m_bIsMakeShenQi || m_bIsMakeSuit)
        {
            if (isMakeShenQiMoreEquip) // 提示有多余的装备 是否确定用当前的装备打造神器
            {
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5068}"), "", MakeShenQi_CurEquip_Ok);
            }
            else if (IsNeedWaringHaveLowShenQiEquip())
            {
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5220}"), "", MakeItemOK, MakeItemCancel);
            }
            else
            {
                MakeItemOK();
            }
        }
        else
        {
            if (isBind)
            {
                MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{2659}"), "", MakeItemOK, MakeItemCancel);
            }
            else
            {
                MakeItemOK();
            }
        }
        
    }

    void MakeShenQi_CurEquip_Ok()
    {
        if (IsNeedWaringHaveLowShenQiEquip())
        {
            MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{5220}"), "", MakeItemOK, MakeItemCancel);
        }
        else
        {
            MakeItemOK();
        }
    }
    void MakeShenQi_Bind_Ok()
    {
       MakeItemOK();
    }
    
    void MakeItemOK()
    {
        CG_USE_LIVINGSKILL packet = (CG_USE_LIVINGSKILL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_LIVINGSKILL);
        packet.FormulaID = m_CurFormulaID;
        if (m_bIsMakeShenQi)
        {
            //神器把当前选择的材料装备GUID 带过去
            foreach (LivingSkillShenQiStuffLogic stuff in m_StuffGrid.GetComponentsInChildren<LivingSkillShenQiStuffLogic>())
            {
                GameItem stuffItem = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(stuff.ItemGuid);
                if (stuffItem != null && stuffItem.IsValid())
                {
                    if(stuffItem.IsShenQiEquipMent())
                    {
                        packet.ShenqiequipGuid = stuff.ItemGuid;
                    }
                    else if (stuffItem.IsEquipMent())
                    {
                        packet.NormalequipGuid = stuff.ItemGuid;
                    }
                }
            }
            if (null != GameManager.gameManager)
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(28);
            }
            //播放特效 延迟发包
            if (BackCamerControll.Instance() != null)
            {
                BackCamerControll.Instance().PlaySceneEffect(133);
            }
        }
        if (m_bIsMakeSuit)
        {
            foreach (LivingSkillShenQiStuffLogic stuff in m_StuffGrid.GetComponentsInChildren<LivingSkillShenQiStuffLogic>())
            {
                GameItem stuffItem = GameManager.gameManager.PlayerDataPool.BackPack.GetItemByGuid(stuff.ItemGuid);
                if (stuffItem != null && stuffItem.IsValid())
                {
                    if (stuffItem.IsEquipMent())
                    {
                        packet.SuitEquipGuid = stuff.ItemGuid;
                    }
                }
            }
            if (null != GameManager.gameManager)
            {
                GameManager.gameManager.SoundManager.PlaySoundEffect(28);
            }
            //播放特效 延迟发包
            if (BackCamerControll.Instance() != null)
            {
                BackCamerControll.Instance().PlaySceneEffect(133);
            }
        }
        packet.SendPacket();
        m_bIsMakeShenQi = false;
    }

    void MakeItemCancel(){}

    void BuyItem()
    {
        UIManager.ShowUI(UIInfo.ConsignSaleRoot, BuyItemOpenConsignSale);
    }

    void BuyItemOpenConsignSale(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            Tab_LivingSkill tabLivingSkill = TableManager.GetLivingSkillByID(m_CurFormulaID, 0);
            if (tabLivingSkill == null)
            {
                return;
            }

            if (ConsignSaleLogic.Instance() != null)
            {
                ConsignSaleLogic.Instance().SearchForAskBuy(tabLivingSkill.Name);
            }            
        }
    }

    public void HandleUpdateItem()
    {
        // 刷新当前配方界面信息
        foreach (LivingSkillStuffLogic stuff in m_StuffGrid.GetComponentsInChildren<LivingSkillStuffLogic>())
        {
            stuff.HandleUpdateItem();
        }
        // 刷新当前配方界面信息
        foreach (LivingSkillShenQiStuffLogic stuff in m_StuffGrid.GetComponentsInChildren<LivingSkillShenQiStuffLogic>())
        {
            stuff.HandleUpdateItem();
        }
    }

    public void ShowStuffCollectInfo(int nStuffDataID)
    {
        m_StuffCollectInfo.SetActive(true);

        Tab_LivingSkillStuff tabLivingSkillStuff = TableManager.GetLivingSkillStuffByID(nStuffDataID, 0);
        if (tabLivingSkillStuff == null)
        {
            m_StuffCollectLabel.text = "";
            return;
        }

        m_StuffCollectLabel.text = tabLivingSkillStuff.CollectInfo.Replace("#r", "\n"); ;
    }

    void CloseStuffCollect()
    {
        m_StuffCollectInfo.SetActive(false);
    }

    public void UpdatePlayerStamina()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer != null)
        {
            int nCurStamina = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.CurStamina;
            int nStaminaFull = Singleton<ObjManager>.Instance.MainPlayer.GetStaminaFull();
            m_StaminaContentLabel.text = nCurStamina + "/" + nStaminaFull;
            m_MoneyContentLabel.text = Utils.ConvertLargeNumToString(GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin());
        }
    }

    void BuyStamina()
    {
        int nPlayerVIPLevel = VipData.GetVipLv();
        Tab_StaminaBuyRule tabRightRule = null;
        foreach (KeyValuePair<int, List<Tab_StaminaBuyRule>> pair in TableManager.GetStaminaBuyRule())
        {
            Tab_StaminaBuyRule tabBuyRule = pair.Value[0];
            if (tabBuyRule == null)
            {
                continue;
            }

            if (tabBuyRule.VIPRequire <= nPlayerVIPLevel)
            {
                tabRightRule = tabBuyRule;
            }
        }

        if (tabRightRule == null)
        {
            return;
        }

        // 超出当日购买次数上限
        int nTodayBuyNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_STAMINA_BUYNUM);
        if (nTodayBuyNum >= tabRightRule.BuyNumMax || nTodayBuyNum < 0)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2131}");
            return;
        }

        //string strMessage = StrDictionary.GetClientDictionaryString("#{2123}", nTodayBuyNum + 1, GlobeVar.STAMINA_BUYVALUE, tabRightRule.Price);
        MessageBoxLogic.OpenCostBox(
            StrDictionary.GetClientDictionaryString("#{11006}", GlobeVar.STAMINA_BUYVALUE),
            StrDictionary.GetClientDictionaryString("#{11007}", nPlayerVIPLevel, nTodayBuyNum + 1, tabRightRule.BuyNumMax),
            StrDictionary.GetClientDictionaryString("#{11005}"),
            StrDictionary.GetClientDictionaryString("#{11008}"),
            "qian3", "X" + tabRightRule.Price.ToString(), BuyStaminaOK, BuyStaminaCancel);
        //MessageBoxLogic.OpenOKCancelBox(strMessage, "", BuyStaminaOK, BuyStaminaCancel);
    }

    void BuyStaminaOK()
    {
        CG_BUY_STAMINA packet = (CG_BUY_STAMINA)PacketDistributed.CreatePacket(MessageID.PACKET_CG_BUY_STAMINA);
        packet.NoParam = 1;
        packet.SendPacket();
    }

    void BuyStaminaCancel(){}

    public void UpdateCountDownLabel()
    {
        int nRemainTime = GameManager.gameManager.PlayerDataPool.StaminaCountDown;
        if (nRemainTime >= 0)
        {
            int nMinutes = nRemainTime / 60;
            int nSeconds = nRemainTime % 60;
            string strSeconds = nSeconds < 10 ? ("0" + nSeconds.ToString()) : (nSeconds.ToString());
            m_CountDownLabel.text = StrDictionary.GetClientDictionaryString("#{2124}", nMinutes, strSeconds);
        }
        else
        {
            m_CountDownLabel.text = "";
        }
    }

    void ShowStaminaTips()
    {
        if (string.IsNullOrEmpty(m_CountDownLabel.text)) return;
        m_StaminaTips.SetActive(true);
    }

    void HideStaminaTips()
    {
        m_StaminaTips.SetActive(false);
    }

    /// <summary>
    /// 显示打造帮助
    /// </summary>
    /// <param name="go"></param>
    void ShowHelpInfo(GameObject go)
    {
        m_HelpInfo.ShowTooltip(StrDictionary.GetClientDictionaryString("#{11041}"));
    }

    /// <summary>
    /// 显示获取途径界面
    /// </summary>
    /// <param name="itemId"></param>
    public void ShowGetInfo(int itemId, int index)
    {
        Utils.CleanGrid(m_GetInfoGrid);
        Tab_UsableItem item = TableManager.GetUsableItemByID(itemId, 0);
        List<int> wayIdList = Utils.GetWayIdByWayIds(item.UseParamE.ToString());
        if (wayIdList.Count == 0)
        {
            Debug.LogError("No get info skill book, id = " + itemId);
            return;
        }
        for (int i = 0; i < wayIdList.Count; i++)
        {
            Tab_ItemGetWay way = TableManager.GetItemGetWayByID(wayIdList[i], 0);
            if (way == null)
            {
                Debug.LogError("Error ItemGetWay, item id = " + itemId + ", ItemGetWay id = " + wayIdList[i]);
                continue;
            }
            GameObject obj = Utils.BindObjToParent(m_GetInfoItemTemplate, m_GetInfoGrid);
            GetInfoItem infoItem = obj.GetComponent<GetInfoItem>();
            infoItem.closeUIHandler = CloseAllUI;
            infoItem.SetData(way);
        }
        Transform t = m_GetInfoPanel.transform;
        t.parent = m_GetInfoAnchors[index];
        t.localPosition = Vector3.zero;
        t.localRotation = Quaternion.identity;
        t.localScale = Vector3.one;
        m_GetInfoPanel.SetActive(true);
        m_GetInfoGrid.GetComponent<UIGrid>().Reposition();
    }

    /// <summary>
    /// 隐藏获取途径界面
    /// </summary>
    /// <param name="go"></param>
    void HideGetInfo(GameObject go)
    {
        m_GetInfoPanel.SetActive(false);
    }

    void CloseAllUI()
    {
        UIManager.CloseUI(UIInfo.LivingSkill);
        if (MenuBarLogic.Instance() != null)
        {
            MenuBarLogic.Instance().CloseWindow();
        }
    }

    // 新手指引相关
    private int m_NewPlayerGuideFlag_Step = -1;
    public int NewPlayerGuideFlag_Step
    {
        get { return m_NewPlayerGuideFlag_Step; }
        set { m_NewPlayerGuideFlag_Step = value; }
    }

    void Check_NewPlayerGuide()
    {
        if (MenuBarLogic.Instance() == null)
        {
            return;
        }
        int nIndex = MenuBarLogic.Instance().NewPlayerGuideIndex;
        if (nIndex == 20)
        {
            NewPlayerGuide(1);
            MenuBarLogic.Instance().NewPlayerGuideIndex = -1;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        if (nIndex < 0)
        {
            return;
        }
        m_NewPlayerGuideFlag_Step = nIndex;

        switch (nIndex)
        {
            case 1:
                NewPlayerGuidLogic.OpenWindow(m_SkillTab.transform.Find("Grid/2ZhiyaoButton").gameObject, 250, 70, "", "top", 0, true, true);
                break;
            case 2:
                NewPlayerGuidLogic.OpenWindow(m_MakeButtonLabel.gameObject, 250, 70, "", "top", 0, true, true);
                m_NewPlayerGuideFlag_Step = -1;
                break;
        }
    }
}
