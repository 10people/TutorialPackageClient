
//********************************************************************
// 文件名: MenuBarLogic.cs
// 描述: 菜单按钮脚本
// 作者: WangZhe
//********************************************************************

using UnityEngine;
using System.Collections;
using System;
using Module.Log;
using Games.GlobeDefine;
using Games.UserCommonData;
using Games.LogicObj;
using GCGame.Table;
using GCGame;
#if BOBJOYSTICK
using Engine.JoyUI;
#endif

public class MenuBarLogic : MonoBehaviour 
{
    public BoxCollider m_BackgroundBox;
    private static MenuBarLogic m_Instance = null;
    public static MenuBarLogic Instance()
    {
        return m_Instance;
    }

    // 新手指引相关
    private int m_NewPlayerGuideIndex = -1;
    public int NewPlayerGuideIndex
    {
        get { return m_NewPlayerGuideIndex; }
        set
        {
            m_NewPlayerGuideIndex = value;
        }
    }
    public GameObject m_BackButton;

    private bool m_bFold = false;
    public bool Fold
    {
        get { return m_bFold; }
        set { m_bFold = value; }
    }

    public GameObject m_Role;
    public GameObject m_EquipEnchance;
    public GameObject m_Belle;
    public GameObject m_Fellow;
    public GameObject m_BackPack;
    public GameObject m_XiaKe;
    public GameObject m_Guild;
    public GameObject m_GuildNewReserveFlag;        //帮会待审批成员标记
    public GameObject m_Farm;
    public GameObject m_Skill;
    public GameObject m_SysShop;
    public GameObject m_Notice;
    public GameObject m_Mission;
    public GameObject m_Wing;
    public GameObject m_Make;
    public GameObject m_SetUp;
    public UILabel m_BelleCountTip;
    public UIGrid m_TopGrid;
    public GameObject m_RestaurantCountTip;
    public Transform m_OffsetTrans;
    public UISprite m_PartnerCountTip;
    public UISprite m_SkillCountTip;
    //public UIGrid m_LeftGrid;
    public UISprite m_SystemCountTip;

    public UISprite m_RoleCountTip;

    //added by mawenbin
    //坐骑红点提示
    public UISprite m_MountRemindPoint;

    private GameObject m_NewButton = null;
    private bool m_bShowScaleAni = false;
    private bool m_bScaleAniDir = true;

    //30分钟版本，部分功能屏蔽
    private const bool m_Demo30 =false;

    public TweenAlpha bgTween;
    int initFrameIndex = 0;

    void Awake()
    {
        m_Instance = this;
    }

	void Start () 
    {
        m_BackgroundBox.enabled = false;
        InitButtonActive();
        UpdateBelleTip();
        UpdateRestaurantTips();
        UpdatePartnerTip();
        UpdateSkillTip();
        UpdateGuildAndMasterReserveMember();
        gameObject.GetComponent<UIPanel>().alpha = 0f;

#if BOBJOYSTICK
        MapMenuBarUI();
#endif
	}
#if BOBJOYSTICK

    void MapMenuBarUI()
    {
        System.Collections.Generic.List<GameObject> uiItems = new System.Collections.Generic.List<GameObject>();

		if(null != JoyControllerLogic.FindChild(transform, "Close Button"))
        	uiItems.Add(JoyControllerLogic.FindChild(transform, "Close Button").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button09-partner"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button09-partner").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button11-make"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button11-make").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button13-guild"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button13-guild").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button14-QianKunDai"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button14-QianKunDai").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button15-paihangbang"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button15-paihangbang").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button08-belle"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button08-belle").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button10-xiake"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button10-xiake").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button01-social"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button01-social").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button02-mission"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button02-mission").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button04-jishou"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button04-jishou").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button05-shangdian"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button05-shangdian").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button12-farm"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button12-farm").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button16-Biography"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button16-Biography").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button20-setup"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button20-setup").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button21-gonggao"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button21-gonggao").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button00-role"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button00-role").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button03-skill"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button03-skill").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button06-pack"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button06-pack").gameObject);

		if(null != JoyControllerLogic.FindChild(transform, "Button07-stren"))
	        uiItems.Add(JoyControllerLogic.FindChild(transform, "Button07-stren").gameObject);

        Engine.JoyUI.BobJoyUINavigator.CollectUIItems(gameObject, uiItems);

    }
#endif
    void Update()
    {
        if (initFrameIndex < 3)
        {
            initFrameIndex++;
            if (initFrameIndex == 2)
            {
                gameObject.GetComponent<UIPanel>().alpha = 1f;
                gameObject.SetActive(false);
                m_OffsetTrans.localScale = Vector3.zero;
            }
        }
        
        UpdateScaleAni();
    }

    void OnEnable()
    {
        if (bgTween != null)
        {
//			bgTween.enabled = true;
//			bgTween.from = 0f;
//			bgTween.to = 1f;
            bgTween.Play();
        }
        RestaurantData.StatisticsRestaurantWaitBilling();
        UpdateBelleTip();
        UpdateRestaurantTips();
        UpdateFellowRedTip();
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    void UpdateScaleAni()
    {
        if (m_bShowScaleAni)
        {
            if (m_bScaleAniDir)
            {
                m_OffsetTrans.localScale += new Vector3(0.1f, 0.1f, 0.1f);
                if (m_OffsetTrans.localScale.x >= 1 || m_OffsetTrans.localScale.y >= 1)
                {
                    m_bShowScaleAni = false;
                    m_OffsetTrans.localScale = Vector3.one;
                    AfterPlayTweenPosition();
                }
            }
            else
            {
                m_OffsetTrans.localScale -= new Vector3(0.1f, 0.1f, 0.1f);
                if (m_OffsetTrans.localScale.x <= 0 || m_OffsetTrans.localScale.y <= 0)
                {
                    m_bShowScaleAni = false;
                    m_OffsetTrans.localScale = Vector3.zero;
                    AfterPlayTweenPosition();
                }
            }
        }
    }

    public void PlayTween(bool nDirection)
    {
//         m_LeftMenuBarTween.Play(nDirection);
        //         m_TopMenuBarTween.Play(nDirection);
        gameObject.SetActive(true);
        PlayScaleAni(nDirection);
        m_BackgroundBox.enabled = nDirection;
        m_bFold = nDirection;

        m_TopGrid.Reposition();

        UpdateGuildAndMasterReserveMember();
    }

    void PlayScaleAni(bool bDirection)
    {
        m_bShowScaleAni = true;
        m_bScaleAniDir = bDirection;
		if (bDirection) {//放大
			if (bgTween != null) {
				bgTween.from = 0f;
				bgTween.to = 1f;
				bgTween.Play ();
			}
		} else {
			if (bgTween != null) {
				bgTween.from = 1f;
				bgTween.to = 0f;
				bgTween.Play ();
			}
		}
	}

    void ReturnTween()
    {
        if (PlayerFrameLogic.Instance() != null)
        {
            PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
        }
    }

    /// <summary>
    /// Tween动画播放完毕后
    /// </summary>
    void AfterPlayTweenPosition()
    {
        if (true == m_bFold)
        {
            ShowNewPlayerGuide();
            UpdateGuildAndMasterReserveMember();
        }
        else
        {
            //收起的时候，隐藏
            gameObject.SetActive(false);
#if BOBJOYSTICK
            UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.NONE);
#endif
        }
    }

    // 新手指引
    void ShowNewPlayerGuide()
    {
        if (m_NewPlayerGuideIndex < 0)
        {
            return;
        }
        switch (m_NewPlayerGuideIndex)
        {
            case 0: // 装备强化
            case 18: // 装备打星
                NewPlayerGuidLogic.OpenWindow_Circle(m_EquipEnchance, 110, Utils.GetDicByID(11489), "left", 0, true, true);
                break;
            case 1: // 美人亲密
            case 4: // 美人阵法
                NewPlayerGuidLogic.OpenWindow_Circle(m_Belle, 110, Utils.GetDicByID(10424), "right", 0, true, true);
                break;
            case 2: // 召唤伙伴
            case 6: // 伙伴抽取
            case 12:// 伙伴天赋技能
            case 14:// 伙伴升星
                NewPlayerGuidLogic.OpenWindow_Circle(m_Fellow, 110, Utils.GetDicByID(10416), "right", 0, true, true);
                break;
            case 3: // 毒烟使用 背包
                int nPoisonForgCount = GameManager.gameManager.PlayerDataPool.BackPack.GetItemCountByDataId(GlobeVar.PosionForgDataID);
                if (nPoisonForgCount > 0)
                {
                    //NewPlayerGuidLogic.OpenWindow(m_BackPack, 110, 110, "点这儿", "right", 0, true, true);
                    NewPlayerGuidLogic.OpenWindow_Circle(m_BackPack, 110, StrDictionary.GetClientDictionaryString("#{2867}"), "left", 0, true, true);
                }
                break;
            case 5: // 科技苑
                NewPlayerGuidLogic.OpenWindow_Circle(m_Farm, 110, "", "right", 0, true, true);
                break;
            case 7: // 技能升级
            case 17: // 技能升级 (变身)
                NewPlayerGuidLogic.OpenWindow_Circle(m_Skill, 110, Utils.GetDicByID(11408), "left", 0, true, true);
                break;
            case 8: // 帮会
                NewPlayerGuidLogic.OpenWindow_Circle(m_Guild, 110, "", "right", 0, true, true);
                break;
            case 9: // 宝石
                NewPlayerGuidLogic.OpenWindow_Circle(m_EquipEnchance, 110, Utils.GetDicByID(10412), "left", 0, true, true);
                break;
            case 10: // 买药
                NewPlayerGuidLogic.OpenWindow_Circle(m_SysShop, 110, "", "right", 0, true, true);
                break;
            case 11://1级宝石引导
                NewPlayerGuidLogic.OpenWindow_Circle(m_Role, 110, "", "right", 0, true, true);
                break;
            case 13://每日成就任务引导
                NewPlayerGuidLogic.OpenWindow(m_Mission, 230, 106, "", "right", 0, true, true);
                break;
            case 19://翅膀引导
                NewPlayerGuidLogic.OpenWindow(m_Wing, 230, 106, "", "right", 0, true, true);
                break;
            case 99://魂器升级
                NewPlayerGuidLogic.OpenWindow(m_Belle, 230, 106, "", "right", 0, true, true);
                break;
            case 20://装备打造
                NewPlayerGuidLogic.OpenWindow(m_Make, 230, 106, "", "right", 0, true, true);
                break;
            case 21://设置引导
                NewPlayerGuidLogic.OpenWindow(m_SetUp, 230, 106, Utils.GetDicByID(11539), "top", 0, true, true);
                break;
            case 22://仓库指引
                break;
        }
    }
    public void NewPlayerGuide(int nIndex)
    {
        m_NewPlayerGuideIndex = nIndex;
        switch (nIndex)
        {
            case 101:// 返回按钮
                //NewPlayerGuidLogic.OpenWindow_Circle(m_BackButton, 100, "", "right", 0, true, true);
                CloseWindow();
                break;
        }
    }

    //弹出公告
    public void OnNoticeClick()
    {
         LoginUpdateInfo.OpenUI();
    }

    public void OnBackPackClick()
    {
        NewPlayerGuidLogic.CloseWindow();
        BackPackLogic.m_OpenWay = BackPackLogic.OPEN_WAY.MENU_BACKPACK;
        UIManager.ShowUI(UIInfo.BackPackRoot, BackPackLogic.SwitchEquipPackView);
        if (m_NewPlayerGuideIndex == 3 && BackPackLogic.Instance())
        {
            NewPlayerGuidLogic.CloseWindow();
        }
    }

    public void OnFellowClick(GameObject value)
    {
        NewPlayerGuidLogic.CloseWindow();
        if (m_NewButton != null && m_NewButton == value)
        {
            StopNewButtonEffect();
        }
        UIManager.ShowUI(UIInfo.PartnerFrameRoot);
    }

    void OnSocialClick()
    {
        RelationLogic.m_OpenWay = RelationLogic.OPEN_WAY.MENU_RELATION;
        UIManager.ShowUI(UIInfo.RelationRoot);
#if BOBJOYSTICK
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.SOCIAL_UI);
#endif

    }
    void OnSkillClick()
    {
        NewPlayerGuidLogic.CloseWindow();
        UIManager.ShowUI(UIInfo.SkillInfo);
    }
    void OnBelleClick(GameObject value)
    {
        NewPlayerGuidLogic.CloseWindow();
        if (m_NewButton != null && m_NewButton == value)
        {
            StopNewButtonEffect();
        }
        UIManager.ShowUI(UIInfo.Belle);
    }

    void OnStrenClick(GameObject value)
    {
        if (m_NewPlayerGuideIndex == 0)
        {
            NewPlayerGuidLogic.CloseWindow();
        }
        if (m_NewButton != null && m_NewButton == value)
        {
            StopNewButtonEffect();
        }
        UIManager.ShowUI(UIInfo.EquipStren);
    }

    void OnConsignSaleClick()
    {
        if (!m_Demo30) UIManager.ShowUI(UIInfo.ConsignSaleRoot);
    }

    public void OnMissionLogClick()
    {
        UIManager.ShowUI(UIInfo.MissionLogRoot);
    }
    public void OnRoleClick()
    {
        UIManager.ShowUI(UIInfo.RoleView);
    }

    void OnSetupClick()
    {
        UIManager.ShowUI(UIInfo.SystemAndAutoFight);
    }

    void OnBiographyClick()
    {
        GUIData.AddNotifyData("#{10830}");
        return;

        //if (!m_Demo30) UIManager.ShowUI(UIInfo.Biography);
    }

    void OnRestaurantClick(GameObject value)
    {
         if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_KEJIYUAN))
         {
             GUIData.AddNotifyData("#{10830}");
             return;
         }
         bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_RESTAURANTFUNCTION_OPENFLAG);
         if (bRet == false)
         {
             GUIData.AddNotifyData("#{10830}");
             return;
         }
//         if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level < (int)GameDefine_Globe.NEWBUTTON_LEVEL.FARM)
//         {
//             GUIData.AddNotifyData("#{10830}");
//             return;
//         }
       NewPlayerGuidLogic.CloseWindow();
       if (m_NewButton != null && m_NewButton == value)
       {
           StopNewButtonEffect();
       }
       RestaurantController.OpenWindow(true);
    }
    void OnGuildClick()
    {
        //七天版本屏蔽功能
//         GUIData.AddNotifyData("#{10830}");
//         return;

        if (m_NewPlayerGuideIndex == 8)
        {
            NewPlayerGuidLogic.CloseWindow();
            m_NewPlayerGuideIndex = -1;
        }

        UIManager.ShowUI(UIInfo.GuildRoot);
    }

    void OnSysShopClick()
    {
        UIManager.ShowUI(UIInfo.SysShop);
    }

    public void OpenFunction(int nType)
    {
        switch(nType)
        {
            case (int)USER_COMMONFLAG.CF_FELLOWFUNCTION_OPENFLAG:
                {
                    if (!m_Fellow.activeSelf)
                    {
                        string strItemName = "";
                        Transform ItemTrans = m_Fellow.transform.FindChild("label");
                        if (ItemTrans)
                        {
                            UILabel ItemLabel = ItemTrans.GetComponent<UILabel>();
                            if (ItemLabel)
                            {
                                strItemName = ItemLabel.text;
                            }
                        }
                        NewItemGetLogic.InitItemInfo(m_Fellow.GetComponent<UIImageButton>().target.spriteName,
                            PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                            NewItemGetLogic.NEWITEMTYPE.TYPE_FELLOW3DSHOW, nType, null, strItemName, Utils.GetDicByID(10418), Utils.GetDicByID(10419));
                        m_NewButton = m_Fellow;
                    }  
                }
                break;
            case (int)USER_COMMONFLAG.CF_BELLEFUNCTION_OPENFLAG:
                {
                    if (!m_Belle.activeSelf)
                    {
                        string strItemName = "";
                        Transform ItemTrans = m_Belle.transform.FindChild("label");
                        if (ItemTrans)
                        {
                            UILabel ItemLabel = ItemTrans.GetComponent<UILabel>();
                            if (ItemLabel)
                            {
                                strItemName = ItemLabel.text;
                            }
                        }
                        NewItemGetLogic.InitItemInfo(m_Belle.GetComponent<UIImageButton>().target.spriteName,
                            PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                            NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR, nType, null, strItemName, Utils.GetDicByID(10429), Utils.GetDicByID(10430));
                        m_NewButton = m_Belle;
                    }  
                }
                break;
            case (int)USER_COMMONFLAG.CF_STRENGTHENFUNCTION_OPENFLAG:
                {
                    if (!m_EquipEnchance.activeSelf)
                    {
                        string strItemName = "";
                        Transform ItemTrans = m_EquipEnchance.transform.FindChild("label");
                        if (ItemTrans)
                        {
                            UILabel ItemLabel = ItemTrans.GetComponent<UILabel>();
                            if (ItemLabel)
                            {
                                strItemName = ItemLabel.text;
                            }
                        }
                        NewItemGetLogic.InitItemInfo(m_EquipEnchance.GetComponent<UIImageButton>().target.spriteName,
                            PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                            NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR, nType, null, strItemName,Utils.GetDicByID(10431), Utils.GetDicByID(10432));
                        m_NewButton = m_EquipEnchance;
                    }     
                }
                break;
            case (int)USER_COMMONFLAG.CF_RESTAURANTFUNCTION_OPENFLAG:
                {
                    if (!m_Farm.activeSelf)
                    {
                        m_Farm.SetActive(true);
                        NewItemGetLogic.InitItemInfo(m_Farm.GetComponent<UIImageButton>().target.spriteName,
                            PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                            NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR, nType);
                        m_NewButton = m_Farm;
                    }   
                }
                break;
//             case (int)USER_COMMONFLAG.CF_GUILDFUNCTION_OPENFLAG:
//                 {
//                     if (!m_Guild.activeSelf)
//                     {
//                         NewItemGetLogic.InitItemInfo(m_Guild.GetComponent<UIImageButton>().target.spriteName,
//                             PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                             NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR, nType);
//                         m_NewButton = m_Guild;
//                     }  
//                 }
//                 break;
            case (int)USER_COMMONFLAG.CF_XIAKEFUNCTION_OPENFLAG:
                {
//                     if (!m_XiaKe.activeSelf)
//                     {
//                         NewItemGetLogic.InitItemInfo(m_XiaKe.GetComponent<UIImageButton>().target.spriteName,
//                             PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                             NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR, nType);
//                         m_NewButton = m_XiaKe;
//                     }
                }
                break;
            case (int)USER_COMMONFLAG.CF_OPEN_FLYWING:
                {
                   NewItemGetLogic.InitItemInfo(m_Fellow.GetComponent<UIImageButton>().target.spriteName,
                            PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                            NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR, nType, null, Utils.GetDicByID(10248), Utils.GetDicByID(11200), Utils.GetDicByID(11201));
                }
                break ;
        }
        InitButtonActive();
    }
    public void LevelUpButtonActive()
    {
        int nPlayerLevel = Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level;
        if (nPlayerLevel >= (int)GameDefine_Globe.NEWBUTTON_LEVEL.XIAKE)
        {
            if (!m_XiaKe.activeSelf && null != m_NewButton)
            {
                NewItemGetLogic.InitItemInfo(m_XiaKe.GetComponent<UIImageButton>().target.spriteName,
                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
                m_NewButton = m_XiaKe;
            }
        }
        else if (nPlayerLevel >= (int)GameDefine_Globe.NEWBUTTON_LEVEL.GUILD)
        {
            if (!m_Guild.activeSelf && null != m_NewButton)
            {
                NewItemGetLogic.InitItemInfo(m_Guild.GetComponent<UIImageButton>().target.spriteName,
                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
                m_NewButton = m_Guild;
            }            
        }
        else if (nPlayerLevel >= (int)GameDefine_Globe.NEWBUTTON_LEVEL.FARM)
        {
            if (!m_Farm.activeSelf && null != m_NewButton)
            {
                NewItemGetLogic.InitItemInfo(m_Farm.GetComponent<UIImageButton>().target.spriteName,
                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
                m_NewButton = m_Farm;
            }           
        }
        else if (nPlayerLevel >= (int)GameDefine_Globe.NEWBUTTON_LEVEL.EQUIPSTREN)
        {
            if (!m_EquipEnchance.activeSelf && null != m_NewButton)
            {
                NewItemGetLogic.InitItemInfo(m_EquipEnchance.GetComponent<UIImageButton>().target.spriteName,
                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
                m_NewButton = m_EquipEnchance;
            }            
        }
        else if (nPlayerLevel >= (int)GameDefine_Globe.NEWBUTTON_LEVEL.BELLE)
        {
            if (!m_Belle.activeSelf && null != m_NewButton)
            {
                NewItemGetLogic.InitItemInfo(m_Belle.GetComponent<UIImageButton>().target.spriteName,
                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
                m_NewButton = m_Belle;
            }            
        }
        else if (nPlayerLevel >= (int)GameDefine_Globe.NEWBUTTON_LEVEL.PARTNER)
        {
            if (!m_Fellow.activeSelf && null != m_NewButton)
            {
                NewItemGetLogic.InitItemInfo(m_Fellow.GetComponent<UIImageButton>().target.spriteName,
                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
                m_NewButton = m_Fellow;
            }           
        }
//        if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.XIAKE)
//        {
//            if (!m_XiaKe.activeSelf && null != m_NewButton)
//            {
//                NewItemGetLogic.InitItemInfo(m_XiaKe.GetComponent<UIImageButton>().target.spriteName,
//                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
//                m_NewButton = m_XiaKe;
//            }
//        }
//        else if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.GUILD)
//        {
//            if (!m_Guild.activeSelf && null != m_NewButton)
//            {
//                NewItemGetLogic.InitItemInfo(m_Guild.GetComponent<UIImageButton>().target.spriteName,
//                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
//                m_NewButton = m_Guild;
//            }            
//        }
//        else if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.FARM)
//        {
//            if (!m_Farm.activeSelf && null != m_NewButton)
//            {
//                NewItemGetLogic.InitItemInfo(m_Farm.GetComponent<UIImageButton>().target.spriteName,
//                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
//                m_NewButton = m_Farm;
//            }           
//        }
//        else if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.EQUIPSTREN)
//        {
//            if (!m_EquipEnchance.activeSelf && null != m_NewButton)
//            {
//                NewItemGetLogic.InitItemInfo(m_EquipEnchance.GetComponent<UIImageButton>().target.spriteName,
//                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
//                m_NewButton = m_EquipEnchance;
//            }            
//        }
//        else if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.BELLE)
//        {
//            if (!m_Belle.activeSelf && null != m_NewButton)
//            {
//                NewItemGetLogic.InitItemInfo(m_Belle.GetComponent<UIImageButton>().target.spriteName,
//                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
//                m_NewButton = m_Belle;
//            }            
//        }
//        else if (nPlayerLevel >= (int)Games.GlobeDefine.GameDefine_Globe.NEWBUTTON_LEVEL.PARTNER)
//        {
//            if (!m_Fellow.activeSelf && null != m_NewButton)
//            {
//                NewItemGetLogic.InitItemInfo(m_Fellow.GetComponent<UIImageButton>().target.spriteName,
//                    PlayerFrameLogic.Instance().m_PlayerHeadButton.gameObject,
//                    NewItemGetLogic.NEWITEMTYPE.TYPE_MENUBAR);
//                m_NewButton = m_Fellow;
//            }           
//        }
    }

    public void InitButtonActive()
    {
        if (m_Fellow == null || m_Belle == null || m_EquipEnchance == null
            || m_Farm == null || m_Guild == null || m_XiaKe == null)
        {
            return;
        }
        m_Fellow.SetActive(false);
        m_Belle.SetActive(false);
        m_EquipEnchance.SetActive(false);
        //m_Farm.SetActive(false);
        //m_Guild.SetActive(false);
        m_XiaKe.SetActive(false);

        bool bRet = false;
//         bool bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_XIAKEFUNCTION_OPENFLAG);
//         if (bRet == true)
//         {
//             if (!m_Demo30) m_XiaKe.SetActive(true);
//         }
//         bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_GUILDFUNCTION_OPENFLAG);
//         if (bRet == true)
//         {
//             m_Guild.SetActive(true);
//         }
        bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_RESTAURANTFUNCTION_OPENFLAG);
        if (bRet == true)
        {
            m_Farm.SetActive(true);
        }
        bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_STRENGTHENFUNCTION_OPENFLAG);
        if (bRet == true)
        {
            m_EquipEnchance.SetActive(true);
        }
        bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_BELLEFUNCTION_OPENFLAG);
        if (bRet == true)
        {
            m_Belle.SetActive(true);
        }
        bRet = GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_FELLOWFUNCTION_OPENFLAG);
        if (bRet == true)
        {
            m_Fellow.SetActive(true);
        }
        m_TopGrid.Reposition();
        //m_LeftGrid.Reposition();
    }

    private bool m_NewButtonEffectFlag = false;
    public bool NewButtonEffectFlag
    {
        get { return m_NewButtonEffectFlag; }
        set { m_NewButtonEffectFlag = value; }
    }
    public void StopNewButtonEffect()
    {
        if (m_NewButtonEffectFlag == false)
        {
            return;
        }
        m_NewButtonEffectFlag = false;

        if (null == m_NewButton)
            return;

        Transform effectTrans = m_NewButton.transform.FindChild("EffectPoint");
        if (effectTrans == null)
        {
            return;
        }

        Transform spriteAniTrans = effectTrans.FindChild("SpriteAni");
        if (spriteAniTrans == null)
        {
            return;
        }

        spriteAniTrans.gameObject.SetActive(false);

        m_NewButton = null;
    }

    public void PlayNewButtonEffect()
    {
        if (m_NewButton == null)
        {
            return;
        }

        m_NewButtonEffectFlag = true;

        Transform effectTrans = m_NewButton.transform.FindChild("EffectPoint");
        if (effectTrans == null)
        {
            return;
        }

        Transform spriteAniTrans = effectTrans.FindChild("SpriteAni");
        if (spriteAniTrans == null)
        {
            return;
        }

        spriteAniTrans.gameObject.SetActive(true);
    }

    public void UpdateBelleTip()
    {
        if (m_BelleCountTip == null || !gameObject.activeInHierarchy)
        {
            return;
        }
        if (BelleData.CalculateActiveMatrixIds().Count == 0 && BelleData.CalculateCreateNewBelle().Count == 0) {
          m_BelleCountTip.gameObject.SetActive(false);
        } else {
          m_BelleCountTip.gameObject.SetActive(true);
        }
//         if (BelleData.GetBelleTipCount() > 0)
//         {
//             m_BelleCountTip.gameObject.SetActive(true);
//         }
//         else
//         {
//             m_BelleCountTip.gameObject.SetActive(false);
//         }
    }
    public void UpdateRestaurantTips()
    {
        if (null == m_RestaurantCountTip)
        {
            return;
        }
        if (RestaurantData.m_restaurantTipsCount > 0)
        {
            m_RestaurantCountTip.SetActive(true);
        }
        else
        {
            m_RestaurantCountTip.SetActive(false);
        }
    }

    void OnLivingSkillClick()
    {
        UIManager.ShowUI(UIInfo.LivingSkill);
    }

    void OnVipClick()
    {
        Obj_MainPlayer obj = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (obj != null)
        {
            if (obj.VipCost >= 0 && GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_VIP))
            {
                UIManager.ShowUI(UIInfo.VipRoot);
            }
        }
    }

    void OnQianKunDaiClick()
    {
        BackPackLogic.m_OpenWay = BackPackLogic.OPEN_WAY.MENU_QIANKUNDAI;
        UIManager.ShowUI(UIInfo.BackPackRoot, BackPackLogic.SwitchQianKunDaiView);
    }

	void OnSNSClick()
	{
        if (!m_Demo30) UIManager.ShowUI(UIInfo.SNSRoot);
	}

    void OnRankClick()
    {
       // UIManager.ShowUI(UIInfo.RankRoot, OnShowRankWindow);
        //CG_ASK_RANK scoreRankPak = (CG_ASK_RANK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RANK);
        //scoreRankPak.NType = (int)GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK;
        //scoreRankPak.NType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK;
        //scoreRankPak.NPage = 0;
        //scoreRankPak.SendPacket();
          RankWindow.ShowRankWindow((int)GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK);
        //  RankWindow.ShowRankWindow((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK);
    }

    public void OnShowRankWindow(bool bSuccess, object param)
    {
        //if (RankWindow.Instance() != null)
        //    RankWindow.Instance().m_TabController.ChangeTab("Tab1");
    }

    void OnClickXiake(GameObject value)
    {
//        if (m_NewButton != null && m_NewButton == value)
//        {
//            StopNewButtonEffect();
//        }
//        UIManager.ShowUI(UIInfo.SwordsManRoot);
    }
    
    public void UpdateGuildAndMasterReserveMember()
    {
//        if (null != m_GuildNewReserveFlag && null != Singleton<ObjManager>.GetInstance().MainPlayer)
//        {
//            bool bFlag = false;
//            if (Singleton<ObjManager>.GetInstance().MainPlayer.ShowGuildNewReserveFlag)
//            {
//                UInt64 myGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
//                if (GameManager.gameManager.PlayerDataPool.IsGuildChief() || 
//                    GameManager.gameManager.PlayerDataPool.IsGuildViceChief(myGuid))
//                {
//                    bFlag = true;
//                }
//            }
//            if ( MasterWindow.GetMasterRemainNum() > 0 )
//            {
//                bFlag = true;
//            }
//
//            if (Singleton<ObjManager>.GetInstance().MainPlayer.IsPSCanAccept())
//            {
//                bFlag = true;
//            }
//
//            m_GuildNewReserveFlag.SetActive(bFlag);
//        }
    }
    public void UpdatePartnerTip()
    {
        if (m_PartnerCountTip == null)
        {
            return;
        }
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        if (PlayerFrameLogic.Instance().GetPartnerSkillCanLevelUpCount() > 0)
        {
            m_PartnerCountTip.gameObject.SetActive(true);
        }
        else
        {
            m_PartnerCountTip.gameObject.SetActive(false);
        }
    }

    public void UpdateSkillTip()
    {
        if (null == m_SkillCountTip)
        {
            return;
        }
        if (SkillRootLogic.GetCanLevUpSkillCount() > 0)
        {
            m_SkillCountTip.gameObject.SetActive(true);
          //  m_SkillCountTip.text = SkillRootLogic.GetCanLevUpSkillCount().ToString();
        }
        else
        {
            m_SkillCountTip.gameObject.SetActive(false);
        }
    }

    public void CloseWindow()
    {
        if (m_NewPlayerGuideIndex == 101)
        {
            m_NewPlayerGuideIndex = -1;
            NewPlayerGuidLogic.CloseWindow();
        }
        if (PlayerFrameLogic.Instance() != null)
        {
			bgTween.Reset();
			PlayerFrameLogic.Instance().PlayerFrameHeadOnClick();
        }
    }

    void OnClickWing()
    {
        if (!GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_FLYWING)
            || !GameManager.gameManager.PlayerDataPool.CommonData.GetCommondFlag((int)USER_COMMONFLAG.CF_OPEN_FLYWING))
        {
            GUIData.AddNotifyData("#{10830}");
            return;
        }
        UIManager.ShowUI(UIInfo.FlyWingRoot);
    }

    /// <summary>
    /// 时装入口
    /// </summary>
    void OnClickSuperWeapon()
    {
        UIManager.ShowUI(UIInfo.FashionRoot);
    }

    void OnClickRide()
    {
        UIManager.ShowUI(UIInfo.MountFrameRoot);
    }

    public void UpdateSystemCountTip()
    {
        if ( m_SystemCountTip == null )
        {
            return;
        }
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        if (PlayerFrameLogic.Instance().GetSystemLogicTipCount() > 0)
        {
            m_SystemCountTip.gameObject.SetActive(true);
        }
        else
        {
            m_SystemCountTip.gameObject.SetActive(false);
        }
    }

    public void UpdateRoleCountTip()
    {
        if (m_RoleCountTip == null)
        {
            return;
        }
        if (null == PlayerFrameLogic.Instance())
        {
            return;
        }
        if (PlayerFrameLogic.Instance().GetGemHoleCanOpenCount(1) > 0 ||
            PlayerFrameLogic.Instance().GetGemHoleCanOpenCount(2) > 0 ||
            PlayerFrameLogic.Instance().GetGemHoleCanOpenCount(3) > 0)
        {
            m_RoleCountTip.gameObject.SetActive(true);
        }
        else
        {
            m_RoleCountTip.gameObject.SetActive(false);
        }
    }

    //added by mawenbin
    //坐骑红点提示
    public void UpdateMountRemindPoint()
    {
        if (null != GameManager.gameManager.PlayerDataPool)
        {
            bool bActive = (GameManager.gameManager.PlayerDataPool.m_objMountParam.MountRemindFlagCount() > 0);
            m_MountRemindPoint.gameObject.SetActive(bActive);
        }
    }
    //宠物红点提示
    public void UpdateFellowRedTip()
    {
        PlayerData playerdata = GameManager.gameManager.PlayerDataPool;
        Games.Fellow.FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
        if (playerdata != null && m_PartnerCountTip != null && container != null)
        {
            if (container.GetPartnerCanLearnSkill().Count > 0 || container.GetPartnerCanUpdateSkill().Count > 0
                || (playerdata.IsProcreateGoing() && playerdata.IsProcreateWaitReceive()))
            {
                m_PartnerCountTip.gameObject.SetActive(true);
            }
            else
            {
                m_PartnerCountTip.gameObject.SetActive(false);
            }
        }
    }
}