using UnityEngine;
using System.Collections;
using Games.LogicObj;
using Games.GlobeDefine;
using GCGame.Table;
using Module.Log;
using Games.Item;
using GCGame;
using Games.SkillModle;
public class AutoFightLogic : MonoBehaviour {

    private static AutoFightLogic m_Instance = null;


    public static AutoFightLogic Instance()
    {
        return m_Instance;
    }

	// 药水 和 技能 
    public UILabel m_AutoFightInfoHp;
    public UISlider m_AutoFightInfoHpSlider;
    public UILabel m_AutoFightInfoMp;
    public UISlider m_AutoFightInfoMppSlider;
    //public UILabel m_AutoFightInfoSearch;
   // public UISlider m_AutoFightInfoSearchSlider;

	// 强化和组队
    public UIToggle m_AutoFightBaiSe;
    public UIToggle m_AutoFightYouXiu;
    public UIToggle m_AutoFightJingLiang;
    public UIButtonMessage m_AutoFightBaiSeTip;
    public UIButtonMessage m_AutoFightYouXiuTip;
    public UIButtonMessage m_AutoFightJingLiangTip;

    public GameObject m_CoverQuality;

	//public UIToggle m_AutoFightShiShi;
	//public UIToggle m_AutoFightChuanQi;
	//public UIToggle m_AutoFightQiTa;
	//public UIToggle m_AutoFightZhengQi;
	// 自动拾取
    
 
    //public UIToggle m_AutoFightDrug;   // 自动买药
    public UIToggle m_AutoFightTeam;	     // 组队申请自动接受
	public UIToggle m_AutoFightReqTeam; //申请入队自动接受
	public UIToggle m_AutoActivity;			// 活动自动接受

    public UISprite m_AutoFightInfoHpIndex;
    public UISprite m_AutoFightInfoMpIndex;
    public UISprite m_NilAutoFightInfoHp;
    public UISprite m_NilAutoFightInfoMp;
    public UISprite m_AutoFightMpSprite;
    //public UILabel m_AutoBeiginName;

    public UISprite m_AutoFightInfoEquipIndex;
    public UISprite m_NilAutoFightInfoEquip;
    public UISprite m_AutoFightInfoEquipQuality;
    // 新手指引
    public int m_NewPlayerGuide_Step = 0;
    public UILabel m_PickUpInfo;
    public GameObject m_PickUpDisable;

	// 自动挂机用的药品和装备选择类型框类型
	public UILabel m_AutoEquipMedicionText ;

    public UISprite m_AutoEnhanceRemindPoint;
    public UISprite m_AutoEnhanceRemindItemPoint;

   
    //public GameObject SelNormalSkillParent;
   // public GameObject SelSpecialSkillParent;

    private int m_viplimit = GlobeVar.USE_AUTOFIGHT_VIPLEVEL;
	private bool   m_IsAutoFight = false ;
    void Awake()
    {
        m_Instance = this;
    }

	
    //普通技能
    private int skillId0 = GlobeVar.INVALID_ID ;
    private int skillId1 = GlobeVar.INVALID_ID;
    private int skillId2 = GlobeVar.INVALID_ID;
    private int skillId3 = GlobeVar.INVALID_ID;

    // 一阶变身
    private int skillId4 = GlobeVar.INVALID_ID;
    private int skillId5 = GlobeVar.INVALID_ID;

    // 二阶变身
    private int skillId6 = GlobeVar.INVALID_ID;
    private int skillId7 = GlobeVar.INVALID_ID;

    // 三阶变身
    //private int skillId7 = GlobeVar.INVALID_ID;
   // private int skillId8 = GlobeVar.INVALID_ID;

	private void initSkillFirst()
	{
		Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
		if( _mainPlayer == null)
			return ;
		
		int publicSkillIndex       = 0;
		int xp1SkillChange         = 4;
		int xp1SkillIndex          = 5;
		int xp2SkillChange         = 6;
		int xp2SkillIndex          = 7;
		
		for (int i = 0; i < m_skillGameObj.Length; ++i)
		{
			m_skillGameObj[i].SetActive(false);
		}
		
		int skillId = GlobeVar.INVALID_ID;
		for (int i = 0; i < _mainPlayer.OwnSkillInfo.Length; ++i)
		{
			skillId = _mainPlayer.OwnSkillInfo[i].SkillId;
			if (skillId == GlobeVar.INVALID_ID)
				continue;
			
			Tab_SkillEx skillEx = TableManager.GetSkillExByID(skillId, 0);
			if (skillEx == null)
				continue;
			
			Tab_SkillBase skillBase = TableManager.GetSkillBaseByID(skillEx.BaseId, 0);  // skillEx.BaseId
			if (skillBase == null)
				continue;
			
			// 4个 普通技能
			if ((skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) == 0 &&
			    (skillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE) == 0 &&
			    (skillBase.SkillClass & (int)SKILLCLASS.XP) == 0 &&
			    (skillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) == 0
			    )
			{
				
				if (publicSkillIndex < 4)
				{
					if (publicSkillIndex == 0)
					{
						skillId0 = skillId ;
					}
					
					else if (publicSkillIndex == 1)
					{
						skillId1 = skillId;
					}
					
					else if (publicSkillIndex == 2)
					{
						skillId2 = skillId;
					}
					
					else if (publicSkillIndex == 3)
					{
						skillId3 = skillId;
					}
					m_skillSprite[publicSkillIndex].spriteName = _getSkillBaseIconName(skillId);
					m_skillGameObj[publicSkillIndex].SetActive(true);
					++publicSkillIndex;
				}
			}
			
			//// 一二变区分
			// first
			if (skillBase.LevelUpIndex != GlobeVar.INVALID_ID && skillBase.LevelUpIndex / 10 >= 1 && skillBase.LevelUpIndex / 10 < 2)
			{
				//xp
				if ((skillBase.SkillClass & (int)SKILLCLASS.XP) > 0)
				{
					m_skillSprite[xp1SkillChange].spriteName = _getSkillBaseIconName(skillId);
					m_skillGameObj[xp1SkillChange].SetActive(true);
					skillId4 = skillId ;
					
				}
				else if ((skillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE)  > 0)
				{
					if( PlayerPreferenceData.PVESkillIdCurUsing ==  i) 
					{
						m_skillSprite[xp1SkillIndex].spriteName = _getSkillBaseIconName(skillId);
						m_skillGameObj[xp1SkillIndex].SetActive(true);
						
						skillId5 = skillId ;
					}
				}
			}
			
			//second
			else if (skillBase.LevelUpIndex != GlobeVar.INVALID_ID && skillBase.LevelUpIndex / 10 >= 2)
			{
				//xp
				if ((skillBase.SkillClass & (int)SKILLCLASS.XP) > 0)
				{
					m_skillSprite[xp2SkillChange].spriteName = _getSkillBaseIconName(skillId);
					m_skillGameObj[xp2SkillChange].SetActive(true);
					skillId6 = skillId ;
				}
				else if ((skillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE) > 0)
				{
					if( PlayerPreferenceData.PVPSkillIdCurUsing ==  i) 
					{
						m_skillSprite[xp2SkillIndex].spriteName = _getSkillBaseIconName(skillId);
						m_skillGameObj[xp2SkillIndex].SetActive(true);
						skillId7 = skillId ;
					}
				}
			}
		}
	}
	void Start ()
	{
        if (SystemAndAutoFightLogic.Instance().NewPlayerGuideFlag_Step == 0)
        {
            SystemAndAutoFightLogic.Instance().NewPlayerGuide(1);
        }
	}
	void OnEnable()
	{
		m_ChooseObj.SetActive (false);
		//这里如果没有MainPlayer的话就跳过了，不太对，后续应该修改
		Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
		if (User && User.Controller)
		{
			m_IsAutoFight = User.Controller.CombatFlag;
			
			m_AutoFightBaiSe.value = User.GetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP1);
			m_AutoFightYouXiu.value = User.GetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP2);
			m_AutoFightJingLiang.value = User.GetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP3);
			// m_AutoFightShiShi.value = User.GetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP4);
			// m_AutoFightChuanQi.value = User.GetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP5);
			// m_AutoFightZhengQi.value = User.GetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_STUFF);
			// m_AutoFightQiTa.value = User.GetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_OTHER);

            m_AutoFightTeam.value = User.AutoInviteTeamAccept;
            m_AutoFightReqTeam.value = User.AutoJoinTeamAccept;
			m_AutoActivity.value = User.AutoActivityAccept ;

            m_AutoFightInfoHpSlider.value = User.AutoHpPercent;
            m_AutoFightInfoMppSlider.value = User.AutoMpPercent;
            //m_AutoFightInfoSearchSlider.value = (float)User.AutoRadius / 100;
            //m_AutoFightDrug.value = User.AutoBuyDrug;

			initSkillFirst();
			_initSkill();

            UpdateDrug();
        }
		if (m_IsAutoFight == true)
        {
           // m_AutoBeiginName.text = StrDictionary.GetClientDictionaryString("#{1444}");
        }
        else
        {
           // m_AutoBeiginName.text = StrDictionary.GetClientDictionaryString("#{1194}");
        }

       // Utils.CleanGrid(SelNormalSkillParent); //清空常规技能列表
       // Utils.CleanGrid(SelSpecialSkillParent); //清空变身技能列表
        UIManager.LoadItem(UIInfo.AutoSelSkillItem, OnLoadSelSkillItem);
        // 新手指引
        Check_NewPlayerGuide();
        RefreshPickUp();

		onClickMedicineAndSkill ();
        updateRemindPoint();
    }

    public void updateRemindPoint()
    {
        if (m_AutoEnhanceRemindPoint == null || m_AutoEnhanceRemindItemPoint == null)
        {
            return;
        }
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        if (PlayerFrameLogic.Instance().GetSystemLogicTipCount() > 0)
        {
            m_AutoEnhanceRemindPoint.gameObject.SetActive(true);
            m_AutoEnhanceRemindItemPoint.gameObject.SetActive(true);
        }
        else
        {
            m_AutoEnhanceRemindPoint.gameObject.SetActive(false);
            m_AutoEnhanceRemindItemPoint.gameObject.SetActive(false);
        }
    }

    void OnDestroy()
    {
        m_Instance = null;
    }
    /*
    public void OpenWindow()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer.Controller)
        {
            m_AutoFightOpenToggle.value = Singleton<ObjManager>.GetInstance().MainPlayer.Controller.CombatFlag;
        }
    }
    */
    public void AutoFightOK()
    {
        //LogModule.DebugLog("AutoFightOK:"+m_AutoFightOpenToggle.value);
        Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
        if( User )  //更新信息
        {
            if (VipData.GetVipLv() >= m_viplimit && User.BaseAttr.Level >= GlobeVar.MAX_AUTOEQUIT_LIVE)
            {
                User.SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP1, m_AutoFightBaiSe.value);
                User.SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP2, m_AutoFightYouXiu.value);
                User.SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP3, m_AutoFightJingLiang.value);
               // User.SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP4, m_AutoFightShiShi.value);
              //  User.SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP5, m_AutoFightChuanQi.value);
              //  User.SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_STUFF, m_AutoFightZhengQi.value);
               // User.SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_OTHER, m_AutoFightQiTa.value);
            }         
            User.AutoInviteTeamAccept = m_AutoFightTeam.value;
			User.AutoActivityAccept = m_AutoActivity.value;
            User.AutoJoinTeamAccept = m_AutoFightReqTeam.value;
            User.AutoHpPercent = m_AutoFightInfoHpSlider.value;
            User.AutoMpPercent = m_AutoFightInfoMppSlider.value;
            //User.AutoRadius = (int)(m_AutoFightInfoSearchSlider.value * 100);
           // User.AutoBuyDrug = m_AutoFightDrug.value;

            User.ServerAutoInfo();

			if (m_IsAutoFight== true)
            {

                User.EnterAutoCombat();
            }
            else
            {
                User.LeveAutoCombat();
            }
           

            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateAutoFightBtnState();
            }
        }
        
    }

    void OnCloseClick()
    {
        AutoFightOK();
        UIManager.CloseUI(UIInfo.SystemAndAutoFight);
       
    }


    public void AutoFightInfoHpSlider()
    {
        m_AutoFightInfoHp.text = ((int)(m_AutoFightInfoHpSlider.value * 99 )).ToString();
    }
    public void AutoFightInfoMppSlider()
    {
        m_AutoFightInfoMp.text = ((int)(m_AutoFightInfoMppSlider.value * 99)).ToString();
    }
//     public void AutoFightInfoSearchSlider()
//     {
//         m_AutoFightInfoSearch.text = ((int)(m_AutoFightInfoSearchSlider.value * 100)).ToString();
//     }
    public void OnAutoFihtHpClick()
    {
       // AutoDrugLogic.OpenUI(1,this);
        //UIManager.CloseUI(UIInfo.AutoDrug);
        //UIManager.ShowUI(UIInfo.AutoDrug, OnOpenDrugWindowHp);        
        
		m_ChooseMedicineRoot.SetActive (true);
		m_AutoEquipMedicionText.text = "选择药水类型";
		CreateItem (1);
		m_ItemGrid.GetComponent<UIGrid>().Reposition();
		//OnOpenDrugWindowHp ();
        //AutoDrugLogic.Instance().transform.localPosition = new Vector3();
       
    }

    
    public void OnAutoFihtMpClick()
    {
        //AutoDrugLogic.OpenUI(2, this);
        //UIManager.CloseUI(UIInfo.AutoDrug);
        //UIManager.ShowUI(UIInfo.AutoDrug, OnOpenDrugWindowMp);
        //AutoDrugLogic.Instance().setData(2, this);
        //AutoDrugLogic.Instance().transform.localPosition = new Vector3();

		m_ChooseMedicineRoot.SetActive (true);
		m_AutoEquipMedicionText.text = "选择药水类型";
		CreateItem (2);
		m_ItemGrid.GetComponent<UIGrid>().Reposition();
    }
   
    void OnOpenDrugWindowHp(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            AutoDrugLogic.Instance().setData(1, this);
        }
        else
        {
            LogModule.ErrorLog("open drug window fail");
        }
    }

    void OnOpenDrugWindowMp(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            AutoDrugLogic.Instance().setData(2, this);
        }
        else
        {
            LogModule.ErrorLog("open drug window fail");
        }
    }
    public void OnAutoEquipClick()
    {
        int nlevel = 1;
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            nlevel = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level;
        }
        if (VipData.GetVipLv() >= m_viplimit && nlevel >= GlobeVar.MAX_AUTOEQUIT_LIVE)
        {
			
			m_ChooseMedicineRoot.SetActive(true);
           // UIManager.ShowUI(UIInfo.AutoDrug, OnOpenDrugWindowEquip);
			m_AutoEquipMedicionText.text = "选择武器类型";
			CreateItem(3);
			m_ItemGrid.GetComponent<UIGrid>().Reposition();
        }
    }
    void OnOpenDrugWindowEquip(bool bSuccess, object param)
    {
        int nlevel = 1;
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            nlevel = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level;
        }
        if (VipData.GetVipLv() >= m_viplimit && nlevel >= GlobeVar.MAX_AUTOEQUIT_LIVE)
        {
            if (bSuccess)
            {
                AutoDrugLogic.Instance().setData(3, this);
            }
            else
            {
                LogModule.ErrorLog("open drug window fail");
            }
        }
    }
    public void UpdateDrug()
    {
        m_AutoFightInfoHpIndex.spriteName = "";
        m_AutoFightInfoMpIndex.spriteName = "";
        m_NilAutoFightInfoHp.gameObject.SetActive(false);
        m_NilAutoFightInfoMp.gameObject.SetActive(false);
        m_AutoFightInfoEquipIndex.spriteName = "";
        m_NilAutoFightInfoEquip.gameObject.SetActive(false);
        GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
        Obj_MainPlayer User = Singleton<ObjManager>.Instance.MainPlayer;
        if( User )  //更新信息
        {
            if (User.AutoHpID != -1)
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(User.AutoHpID,0);
                if (curItem != null)
                {
                    m_AutoFightInfoHpIndex.spriteName = curItem.Icon;
                    if (BackPack.GetItemCountByDataId(User.AutoHpID) <= 0)
                    {
                        m_NilAutoFightInfoHp.gameObject.SetActive(true);
                    }
                }
                
            }
            if (User.AutoMpID != -1)
            {
                Tab_CommonItem curItem = TableManager.GetCommonItemByID(User.AutoMpID, 0);
                if (curItem != null)
                {
                    m_AutoFightInfoMpIndex.spriteName = curItem.Icon;
                    if (BackPack.GetItemCountByDataId(User.AutoMpID) <= 0)
                    {
                        m_NilAutoFightInfoMp.gameObject.SetActive(true);
                    }
                }
            }
            m_AutoFightInfoEquipIndex.transform.parent.FindChild("Label").GetComponent<UILabel>().text = "";
            if (User.AutoEquipGuid !=GlobeVar.INVALID_GUID)
            {
                 GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
                 if (EquipPack != null)
                {
                    for (int index = 0; index < EquipPack.ContainerSize; index++)
                     {
                         GameItem equip = EquipPack.GetItem(index);
                         if (equip != null && equip.IsValid() && equip.Guid == User.AutoEquipGuid)
                         {
                             Tab_CommonItem curItem = TableManager.GetCommonItemByID(equip.DataID, 0);
                             if (null != curItem)
                             {
                                 m_AutoFightInfoEquipIndex.spriteName = curItem.Icon;
                                 //m_NilAutoFightInfoEquip.gameObject.SetActive(true);
                                 m_AutoFightInfoEquipQuality.spriteName = equip.GetQualityFrame();
                                 m_AutoFightInfoEquipIndex.transform.parent.GetComponent<UISprite>().spriteName = equip.GetQualityFrame();
                                 m_AutoFightInfoEquipIndex.transform.parent.FindChild("Label").GetComponent<UILabel>().text = "+" + equip.EnchanceLevel.ToString();
                             }
                         }
                     }
                }
            }
        }
        if (PlayerFrameLogic.Instance())
        {
            PlayerFrameLogic.Instance().InitAutoFight();
        }
    }
    public void ToggleButtonClick()
    {
        if (m_NewPlayerGuide_Step == 1)
        {
            m_NewPlayerGuide_Step = 0;
            NewPlayerGuidLogic.CloseWindow();
        }
		if (m_IsAutoFight == true)
        {
          //  m_AutoBeiginName.text = StrDictionary.GetClientDictionaryString("#{1444}");
        }
        else
        {
          //  m_AutoBeiginName.text = StrDictionary.GetClientDictionaryString("#{1194}");
        }
        AutoFightOK();
        //UIManager.CloseUI(UIInfo.SystemAndAutoFight);
    }


    void Check_NewPlayerGuide()
    {
        if (FunctionButtonLogic.Instance() == null)
        {
            return;
        }

        int nIndex = FunctionButtonLogic.Instance().NewPlayerGuide_Step;
        if (nIndex == 7)
        {
            NewPlayerGuide(1);
            FunctionButtonLogic.Instance().NewPlayerGuide_Step = -1;
        }
    }

    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuide_Step = nIndex;
        switch (nIndex)
        {
            case 1:
                //NewPlayerGuidLogic.OpenWindow(m_AutoFightOpenToggle.gameObject, 300, 100, "请点此处", "left",0, true, true);
               // NewPlayerGuidLogic.OpenWindow(m_AutoFightOpenToggle.gameObject, 300, 100, StrDictionary.GetClientDictionaryString("#{2813}"), "left", 0, true, true);
                break;
        }
    }

    void RefreshPickUp()
    {
        int nlevel = 1;
        if (Singleton<ObjManager>.Instance.MainPlayer)
        {
            nlevel = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level;
        }
        if (VipData.GetVipLv() >= m_viplimit && nlevel >= GlobeVar.MAX_AUTOEQUIT_LIVE)
        {
            m_PickUpDisable.SetActive(false);
            m_PickUpInfo.text = StrDictionary.GetClientDictionaryString("#{3278}");// "自动强化设置";
            m_PickUpInfo.color = Color.white;

            m_AutoFightBaiSe.enabled = true;
            m_AutoFightYouXiu.enabled = true;
            m_AutoFightJingLiang.enabled = true;
            m_AutoFightBaiSeTip.enabled = false;
            m_AutoFightYouXiuTip.enabled = false;
            m_AutoFightJingLiangTip.enabled = false;
            m_CoverQuality.SetActive(false);
           // m_AutoFightShiShi.enabled = true;
           // m_AutoFightChuanQi.enabled = true;
           // m_AutoFightZhengQi.enabled = true;
           // m_AutoFightQiTa.enabled = true;
        }
        else
        {
            m_PickUpDisable.SetActive(true);
            m_PickUpInfo.text = StrDictionary.GetClientDictionaryString("#{3279}");// "VIP2开启自动强化功能";
            m_PickUpInfo.color = Color.red;

            m_AutoFightBaiSe.enabled = false;
            m_AutoFightYouXiu.enabled = false;
            m_AutoFightJingLiang.enabled = false;
            m_AutoFightBaiSeTip.enabled = true;
            m_AutoFightYouXiuTip.enabled = true;
            m_AutoFightJingLiangTip.enabled = true;
            m_CoverQuality.SetActive(true);
           // m_AutoFightShiShi.enabled = false;
          //  m_AutoFightChuanQi.enabled = false;
           // m_AutoFightZhengQi.enabled = false;
           // m_AutoFightQiTa.enabled = false;
        }
    }
    void OnLoadSelSkillItem(GameObject resItem, object param)
    {
       /* if (null == resItem)
        {
            LogModule.ErrorLog("OnLoadSelSkillItem resItem is null");
            return;
        }
        Obj_MainPlayer rUser = Singleton<ObjManager>.Instance.MainPlayer;
        if (rUser)
        {
            for (int skillIndex = 0; skillIndex < rUser.OwnSkillInfo.Length; skillIndex++)
            {
                int skillId = rUser.OwnSkillInfo[skillIndex].SkillId;
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(skillId, 0);
                if (_skillEx != null)
                {
                    Tab_SkillBase _skillBase = TableManager.GetSkillBaseByID(_skillEx.BaseId, 0);
                    if (_skillBase != null && _skillBase.PriorityAutoFight != -1                       
                        && (_skillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) == 0)
                    {
                        if (rUser.IsAutoSelSkillID(skillIndex) == 1)
                        {
                            CreateAutoSelSkillItem(_skillBase.SkillClass, resItem, skillIndex, skillId, true);
                        }
                        else if (rUser.IsAutoSelSkillID(skillIndex) == -1)
                        {
                            if (_skillBase.PriorityAutoFight > 0)
                            {
                                CreateAutoSelSkillItem(_skillBase.SkillClass, resItem, skillIndex, skillId, true);
                                rUser.SetAutoSelSkillID(skillIndex);
                            }
                            else
                            {
                                CreateAutoSelSkillItem(_skillBase.SkillClass, resItem, skillIndex, skillId, false);
                                rUser.DelAutoSelSkillID(skillIndex);
                            }
                        }
                        else if (rUser.IsAutoSelSkillID(skillIndex) == 0)
                        {
                            CreateAutoSelSkillItem(_skillBase.SkillClass, resItem, skillIndex, skillId, false);
                        }                      
                    }
                }  
            }
            //SelNormalSkillParent.GetComponent<UIGrid>().Reposition();
            //SelSpecialSkillParent.GetComponent<UIGrid>().Reposition();
            //SelSkllParent.GetComponent<UITopGrid>().Recenter(true);
        } */
    }

    private void CreateAutoSelSkillItem(int iSkillClass, GameObject resItem, int iSkillIndex, int iSkillId, bool IsToggle)
    {
        if (null != resItem)
        {
            if (0 == (iSkillClass & (int)SKILLCLASS.XP))
            {
                //AutoSelSkillItem.CreateItem(SelNormalSkillParent, resItem, this, iSkillIndex, iSkillId, IsToggle);
            }
            else
            {
                //AutoSelSkillItem.CreateItem(SelSpecialSkillParent, resItem, this, iSkillIndex, iSkillId, IsToggle);
            }
        }
    }
	//================================================================================
	public UIToggle[] m_skillToggle ;
	public UISprite[]  m_skillSprite ;
	public GameObject[] m_skillGameObj ;


	void _initSkill( )
	{
		Obj_MainPlayer rUser = Singleton<ObjManager>.Instance.MainPlayer;
		if (rUser == null)
			return;

		for (int i = 0; i <  rUser.OwnSkillInfo.Length; ++i) 
		{
			if( skillId0 != GlobeVar.INVALID_ID && skillId0 == rUser.OwnSkillInfo[i].SkillId)
			{
				m_skillGameObj[0].SetActive(true);

				if( rUser.IsAutoSelSkillID(i) == 1)
					m_skillToggle[0].value = true ;
				else
					m_skillToggle[0].value = false ;
			}

			else if( skillId1 != GlobeVar.INVALID_ID && skillId1 == rUser.OwnSkillInfo[i].SkillId)
			{
				m_skillGameObj[1].SetActive(true);

				if( rUser.IsAutoSelSkillID(i) == 1)
					m_skillToggle[1].value = true ;
				else
					m_skillToggle[1].value = false ;
			}
			else if(  skillId2 != GlobeVar.INVALID_ID && skillId2 == rUser.OwnSkillInfo[i].SkillId)
			{
				m_skillGameObj[2].SetActive(true);

				if( rUser.IsAutoSelSkillID(i) == 1)
					m_skillToggle[2].value = true ;
				else
					m_skillToggle[2].value = false ;
			}
			else if( skillId3 != GlobeVar.INVALID_ID && skillId3 == rUser.OwnSkillInfo[i].SkillId)
			{
				m_skillGameObj[3].SetActive(true);

				if( rUser.IsAutoSelSkillID(i) == 1)
					m_skillToggle[3].value = true ;
				else
					m_skillToggle[3].value = false ;
			}
			else if( skillId4 != GlobeVar.INVALID_ID && skillId4 == rUser.OwnSkillInfo[i].SkillId)
			{
				m_skillGameObj[4].SetActive(true);

				if( rUser.IsAutoSelSkillID(i) == 1)
					m_skillToggle[4].value = true ;
				else
					m_skillToggle[4].value = false ;
			}
			else if( skillId5 != GlobeVar.INVALID_ID && skillId5 == rUser.OwnSkillInfo[i].SkillId)
			{
				m_skillGameObj[5].SetActive(true);

				if( rUser.IsAutoSelSkillID(i) == 1)
					m_skillToggle[5].value = true ;
				else
					m_skillToggle[5].value = false ;
			}
			else if ( skillId6 != GlobeVar.INVALID_ID && skillId6 == rUser.OwnSkillInfo[i].SkillId)
            {
                m_skillGameObj[6].SetActive(true);

                if (rUser.IsAutoSelSkillID(i) == 1)
                    m_skillToggle[6].value = true;
                else
                    m_skillToggle[6].value = false;
            }
			else if ( skillId7 != GlobeVar.INVALID_ID && skillId7 == rUser.OwnSkillInfo[i].SkillId)
            {
                m_skillGameObj[7].SetActive(true);

                if (rUser.IsAutoSelSkillID(i) == 1)
                    m_skillToggle[7].value = true;
                else
                    m_skillToggle[7].value = false;
            }
		}
        
	}
	public void onClickSkillToggle0()
	{
		_doingWhat (0,skillId0);
	}
	public void onClickSkillToggle1()
	{
		_doingWhat (1,skillId1);
	}
	public void onClickSkillToggle2()
	{
		_doingWhat (2,skillId2);
	}
	public void onClickSkillToggle3()
	{
		_doingWhat (3,skillId3);
	}
	public void onClickSkillToggle4()
	{
		_doingWhat (4,skillId4);
	}
	public void onClickSkillToggle5()
	{
		_doingWhat (5,skillId5);
	}
	public void onClickSkillToggle6()
	{
		_doingWhat (6,skillId6);
	}
	public void onClickSkillToggle7()
	{
		_doingWhat (7,skillId7);
	}
	public void onClickSkillToggle8()
	{
		//_doingWhat (8,skillId8);
	}

	int _getSkillIndexIdByActivieyId(int id )
	{
        Tab_SkillEx skillEx = TableManager.GetSkillExByID(id, 0);
		if(skillEx == null)
			return -1 ;

		Tab_SkillBase skillBase = TableManager.GetSkillBaseByID(skillEx.BaseId,0);
		if(skillBase == null)
			return -1;

		Obj_MainPlayer rUser = Singleton<ObjManager>.Instance.MainPlayer;
		if (rUser == null)
			return -1;

		for (int skillIndex = 0; skillIndex < rUser.OwnSkillInfo.Length; skillIndex++)
		{
			if(rUser.OwnSkillInfo[skillIndex].SkillId == skillEx.SkillExID)
			{
				return skillIndex ;
			}
		}

		return -1;
	}

	private string _getSkillBaseIconName (int SkillActiveId)
	{
		//Tab_SkillActive skillActTab = TableManager.GetSkillActiveByID(SkillActiveId,0);
		//if(skillActTab == null )
		//	return "";

        Tab_SkillEx skillEx = TableManager.GetSkillExByID(SkillActiveId, 0);
		if(skillEx == null) 
			return "" ;

        Tab_SkillBase skillBase = TableManager.GetSkillBaseByID(skillEx.BaseId, 0);  // skillEx.BaseId
		if(skillBase == null)
			return "";
		
		return skillBase.Icon;
	}
	//===========================================================================
	public GameObject m_MedicineAndSkill ;
	public GameObject m_TeamAndStreng  ;
	public UISprite m_LeftHightLight ;
	public UISprite m_RightHightLight ;

	private void onClickMedicineAndSkill()
	{
		m_MedicineAndSkill.SetActive (true);
		m_TeamAndStreng.SetActive (false);
		m_LeftHightLight.gameObject.SetActive (true);
		m_RightHightLight.gameObject.SetActive (false);
	}

	private void onClickTeamAndStreng()
	{
		m_MedicineAndSkill.SetActive (false);
		m_TeamAndStreng.SetActive (true);
		m_LeftHightLight.gameObject.SetActive (false);
		m_RightHightLight.gameObject.SetActive (true);
        updateRemindPoint();
        if (SystemAndAutoFightLogic.Instance().NewPlayerGuideFlag_Step == 3)
        {
            SystemAndAutoFightLogic.Instance().NewPlayerGuide(4);
        }
	}
	//==============================================================================
	public void onAutoFightChange()
	{
		AutoFightOK();
	}
  public void ClickShowErrorTip()
  {
    GUIData.AddNotifyData2Client(false, "#{11326}");
  }
	//==============================================================================
	public GameObject m_ChooseMedicineRoot ;
	public GameObject m_ItemGrid ;
	public GameObject m_ResItem ;
	private AutoitemLogicEx  m_SelectItem ;
  public AutoitemLogicEx SelectItem
  {
    set { m_SelectItem = value; }
  }
	public void OnClickSelectItem (AutoitemLogicEx temSelectItem)
	{
		if (m_SelectItem != null)
		{
			m_SelectItem.OnCancelChoose();
		}
		m_SelectItem = temSelectItem;
	}
	public void OnCloseClickMedicine()
	{
		m_ChooseMedicineRoot.SetActive (false);
	}
	//======================================================
	void _doingWhat(int indexArray ,int skillId)
	{
		int index = _getSkillIndexIdByActivieyId(skillId);
		if(index == -1)
			return ;
		
		Obj_MainPlayer rUser = Singleton<ObjManager>.Instance.MainPlayer;
		if (rUser == null)
			return;

		if (indexArray < 0 || indexArray >= m_skillToggle.Length)
			return;

		if (m_skillToggle [indexArray].value) 
			rUser.SetAutoSelSkillID (index);
		else
			rUser.DelAutoSelSkillID(index);

		AutoFightOK();
	}
	//======================================================
	private void CreateItem(int curType )
	{
		Utils.CleanGrid (m_ItemGrid);
		GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
		if (Singleton<ObjManager>.Instance.MainPlayer)
		{
			if (curType == 1)
			{
				for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_HP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_HP; i++)
				{
					if (BackPack.GetItemCountByDataId(i) <= 0
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoHpID != i
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoMpID != i)
					{
						continue;
					}
					Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
					if (null != curItem)
					{
						AutoitemLogicEx.CreateItem(m_ItemGrid, m_ResItem, curType, curItem);
					}
					
				}
				for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_DYHP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_DYHP; i++)
				{
					if (BackPack.GetItemCountByDataId(i) <= 0
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoHpID != i
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoMpID != i)
					{
						continue;
					}
					Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
					if (null != curItem)
					{
						AutoitemLogicEx.CreateItem(m_ItemGrid, m_ResItem, curType, curItem);
					}
					
				}
			}
			else if (curType == 2)
			{
				for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_MP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_MP; i++)
				{
					if (BackPack.GetItemCountByDataId(i) <= 0
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoHpID != i
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoMpID != i)
					{
						continue;
					}
					Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
					if (null != curItem)
					{
						AutoitemLogicEx.CreateItem(m_ItemGrid, m_ResItem, curType, curItem);
					}
					
				}
				for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_DYMP; i <= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_DYMP; i++)
				{
					if (BackPack.GetItemCountByDataId(i) <= 0
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoHpID != i
					    && Singleton<ObjManager>.Instance.MainPlayer.AutoMpID != i)
					{
						continue;
					}
					Tab_CommonItem curItem = TableManager.GetCommonItemByID(i, 0);
					if (null != curItem)
					{
						AutoitemLogicEx.CreateItem(m_ItemGrid, m_ResItem, curType, curItem);
					}
					
				}
			}
			else if (curType == 3 )
			{
				GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
				if(EquipPack != null)
				{
					for (int index = 0; index < EquipPack.ContainerSize; index++)
					{
						GameItem equip = EquipPack.GetItem(index);
						if (equip != null && equip.IsValid() && equip.IsBelt() == false)
						{
							AutoitemLogicEx.CreateEquip(m_ItemGrid, m_ResItem, curType, equip);
						}
					}
				} 
			}
		}  
	}
	//=====================
	public GameObject m_ChooseObj ;
}