using Games.GlobeDefine;
using UnityEngine;
using System.Collections;
using Module.Log;
using GCGame;
using System;
using GCGame.Table;
using System.Collections.Generic;

public class RankWindow : MonoBehaviour {
   
    // ...
    public RankItem[] m_RankItem;

    public UILabel[] m_RankItemTitle;
   
    // .. 我的排名数值
    public UILabel m_MeRank;
    public UILabel m_MeRankDesc;
    //..
    public UIImageButton NextImageButton;
    public UIImageButton PrevImageButton;

    // ..
    public UILabel m_Page;
    private int m_nPage = 0;
    private bool m_IsPage = true;
    private int m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_INVALID;

    private int m_nTipWaitWindow = 0;
    public bool isRankDataReturn { set; get; }

    //..
   // public TabController m_ProfessionReputationController;

    //...
    public UIGrid m_TitleGrid;
    public UITopGrid m_ItemTopGrid;

    public UILabel m_ChongZhiTime;
  
    //..
    public GameObject m_RepRootObject;
    public UILabel m_RepValue;

    //..
    public GameObject m_RankRewardDescRootObject;
    public UILabel m_RankRewardDescLabel;
    public GameObject m_RankRewardDescBtn;

    public RankItemMenu m_MenuWindow;

    private RankItem m_CurSelectItem = null;

    public GameObject m_SubActivityGrid;
    public UIGrid m_SubActivityUIGrid;
    public GameObject m_SubHaoXiaGrid;
    public UIGrid m_SubHaoXiaUIGrid;
    public GameObject m_SubJunJieGrid;
    public UIGrid m_SubJunJieUIGrid;
    public GameObject m_SubZhiZunGrid;
    public UIGrid m_SubZhiZunUIGrid;
    public GameObject m_SubJuYiGrid;
    public UIGrid m_SubJuYiUIGrid;

    public Transform m_ActivityGridTrans;

    public GameObject m_prefClassItem;
    public GameObject m_prefSubClassItem;
    public GameObject m_RankClass;
    public GameObject m_RankInfo;
    public UILabel m_CaoZuoLabel;
    private GameObject m_SubActivityBt = null;

    private List<GameObject> m_ClickSprite = new List<GameObject>();
   // private List<GameObject> m_NormalSprite = new List<GameObject>();
    private List<RankSubClassItem> m_RankSubClassList = new List<RankSubClassItem>();
    private List<RankClassItem> m_RankClassList = new List<RankClassItem>();

    private static RankWindow m_Instance = null;
    public static RankWindow Instance()
    {
        return m_Instance;
    }

    public static void ShowRankWindow(int nRankType)
    {
        UIManager.ShowUI(UIInfo.RankRoot, OnOpenRankWindow, nRankType);
    }

    static void OnOpenRankWindow(bool bSuccess, object param)
    {
        if (!bSuccess)
        {
            LogModule.ErrorLog("load RankRoot error");
            return;
        }
        int nRankType = (int)param;
        if (RankWindow.Instance() != null)
        {
            RankWindow.Instance().Init(nRankType);
        }
    }

    //..
    void Awake()
    {
        m_Instance = this;
        UIDraggablePanel rankinfoDragPanel = m_RankInfo.GetComponent<UIDraggablePanel>();
        rankinfoDragPanel.onDragFinished += RankInfoDragFinished;
        //UIGrid titleGrid = m_TitleGrid.GetComponent<UIGrid>();
        //titleGrid.onReposition += OnRankItemReposition;
    }

    void RankInfoDragFinished()
    {
        SpringPanel rankInfoSpringPanel = m_RankInfo.GetComponent<SpringPanel>();
        if (rankInfoSpringPanel.enabled == true)
        {
            if (Math.Abs(m_RankInfo.transform.localPosition.y - rankInfoSpringPanel.target.y) > 0)
            {
                if (m_RankInfo.transform.localPosition.y - rankInfoSpringPanel.target.y >= 50)
                {
                    OnDownClick();
                }
                else
                {
                    if ((m_nPage + 1) >= TotalPage)
                    {
                        if (rankInfoSpringPanel.target.y - m_RankInfo.transform.localPosition.y >= 10)
                        {
                            OnUpClick();
                        }
                    }
                    else
                    {
                        if (rankInfoSpringPanel.target.y - m_RankInfo.transform.localPosition.y >= 50)
                        {
                            OnUpClick();
                        }
                    }

                }
            }
        }
    }

    void Init(int nRankType)
    {
		if(nRankType==(int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE)
		{
			m_TypeTabController.ChangeTab("zhizun");
		}
		m_nRankType = nRankType;
        //m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_INVALID;
        m_nTipWaitWindow = 0;       
        m_nPage = 0;
        SetPageText();
        m_MeRank.text = "？";
      //  m_ProfessionReputationController.delTabChanged = OnTabProfession;
       // m_ProfessionReputationController.gameObject.SetActive(false);
        m_ChongZhiTime.gameObject.SetActive(false);
        for (int i = 0; i < m_ClickSprite.Count; i++)
        {
            m_ClickSprite[i].SetActive(false);
        }

        //for (int i = 0; i < m_NormalSprite.Count; i++)
        //{
        //    m_NormalSprite[i].SetActive(false);
        //}
        if (m_RankRewardDescRootObject != null)
        {
            m_RankRewardDescRootObject.SetActive(false);
        }
        SelfReputationControl(false);
        ClearRankData();
        CleanTitle();
                     
        //CreateRankClassItem();

		_Init();
        UpdateRankSubClass();


        for (int i = 0; i < m_RankSubClassList.Count; i++)
        {
            if (null == m_RankSubClassList[i])
            {
                continue;
            }
            if (m_RankSubClassList[i].gameObject != null && false == m_RankSubClassList[i].gameObject.activeInHierarchy)
            {
                continue;
            }
            if (m_RankSubClassList[i].RanType == nRankType)
            {
                m_RankSubClassList[i].ClickSubClassBt();         
            }
        }

	
    }

    void UpdateRankSubClass()
    {
        for (int i = 0; i < m_RankSubClassList.Count; i++)
        {
            if (null == m_RankSubClassList[i])
            {
                continue;
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsOpenChongZhiRank);
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsOpenSpChongZhiRank);
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsOpenConsumeRank);
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsChristmasOpen());
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsChristmasOpen());
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsHongBaoRankOpen());
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsOpenLoudSpeakerRankFlag);
            }
            if (m_RankSubClassList[i].RanType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM && m_RankSubClassList[i].gameObject != null)
            {
                m_RankSubClassList[i].gameObject.SetActive(GlobalData.IsOpenCharmRankFlag);
            }
        }
        bool bHaveActivityRankOpen = false;     
        if (m_ActivityGridTrans != null)
        {
            for (int i = 0; i < m_ActivityGridTrans.childCount; i++)
            {
                if (m_ActivityGridTrans.GetChild(i) != null)
                {
                    RankSubClassItem subitem = m_ActivityGridTrans.GetChild(i).GetComponent<RankSubClassItem>();
                    if (subitem != null && subitem.gameObject != null && subitem.gameObject.activeInHierarchy)
                    {
                        bHaveActivityRankOpen = true;
                        break;
                    }
                }
            }
        }
        //活动榜一个都没有开启
        if (!bHaveActivityRankOpen)
        {
            if (m_SubActivityBt != null)
            {
                m_SubActivityBt.SetActive(false);
                m_SubActivityGrid.SetActive(false);
            }          
        }
        else
        {
            if (m_SubActivityBt != null)
            {
                m_SubActivityBt.SetActive(true);
                m_SubActivityGrid.SetActive(true);
            }       
        }
        m_SubActivityUIGrid.hideInactive = true;
        m_SubActivityUIGrid.repositionNow = true;
        
        m_SubHaoXiaUIGrid.hideInactive = true;
        m_SubHaoXiaUIGrid.repositionNow = true;
        
        m_SubJunJieUIGrid.hideInactive = true;
        m_SubJunJieUIGrid.repositionNow = true;
        
        m_SubZhiZunUIGrid.hideInactive = true;
        m_SubZhiZunUIGrid.repositionNow = true;
        
        m_SubJuYiUIGrid.hideInactive = true;
        m_SubJuYiUIGrid.repositionNow = true;


        if (m_RankClass.GetComponent<UITable>() != null)
        {
            m_RankClass.GetComponent<UITable>().repositionNow = true;
        }
    }
    /// <summary>
    /// 
    /// </summary>
    void CreateRankClassItem()
    {
		return;


//        if (null == m_prefClassItem)
//        {
//            LogModule.ErrorLog("load CreateRankClassItem m_prefClassItem = null error");
//            return;
//        }
//        //
//        RankClassItem ClassItem = RankClassItem.CreateItem(m_RankClass, m_prefClassItem, "00ActivityBt", m_SubActivityGrid);
//        if (ClassItem != null)
//        {
//            m_SubActivityBt = ClassItem.gameObject;
//            ClassItem.SetData(GetRankClassName(PVPData.Rank_Class.ACTIVITY), (int)PVPData.Rank_Class.ACTIVITY);
//            m_SubActivityGrid.SetActive(true);
//            m_ClickSprite.Add(ClassItem.m_ClickSprite);
//            if (m_RankClassList != null)
//            {
//                m_RankClassList.Add(ClassItem);
//            }
//        }
//        ClassItem = RankClassItem.CreateItem(m_RankClass, m_prefClassItem, "10HaoxiaBt", m_SubHaoXiaGrid);
//        if (ClassItem != null)
//        {
//            ClassItem.SetData(GetRankClassName(PVPData.Rank_Class.HAOXIA), (int)PVPData.Rank_Class.HAOXIA);
//            m_SubHaoXiaGrid.SetActive(true);
//            m_ClickSprite.Add(ClassItem.m_ClickSprite);
//            if (m_RankClassList != null)
//            {
//                m_RankClassList.Add(ClassItem);
//            }
//        }
//        ClassItem = RankClassItem.CreateItem(m_RankClass, m_prefClassItem, "20JunJieBt", m_SubJunJieGrid);
//        if (ClassItem != null)
//        {
//            ClassItem.SetData(GetRankClassName(PVPData.Rank_Class.JUNJIE), (int)PVPData.Rank_Class.JUNJIE);
//            m_SubJunJieGrid.SetActive(true);
//            m_ClickSprite.Add(ClassItem.m_ClickSprite);
//            if (m_RankClassList != null)
//            {
//                m_RankClassList.Add(ClassItem);
//            }
//        }
//        ClassItem = RankClassItem.CreateItem(m_RankClass, m_prefClassItem, "30ZhiZunBt", m_SubZhiZunGrid);
//        if (ClassItem != null)
//        {
//            ClassItem.SetData(GetRankClassName(PVPData.Rank_Class.ZHIZUN), (int)PVPData.Rank_Class.ZHIZUN);
//            m_SubZhiZunGrid.SetActive(true);
//            m_ClickSprite.Add(ClassItem.m_ClickSprite);
//            if (m_RankClassList != null)
//            {
//                m_RankClassList.Add(ClassItem);
//            }
//        }
//        ClassItem = RankClassItem.CreateItem(m_RankClass, m_prefClassItem, "40JuYiBt", m_SubJuYiGrid);
//        if (ClassItem != null)
//        {
//            ClassItem.SetData(GetRankClassName(PVPData.Rank_Class.JUYI), (int)PVPData.Rank_Class.JUYI);
//            m_SubJuYiGrid.SetActive(true);
//            m_ClickSprite.Add(ClassItem.m_ClickSprite);
//            if (m_RankClassList != null)
//            {
//                m_RankClassList.Add(ClassItem);
//            }
//        }
//        CreateRankSubClassItem(PVPData.Rank_Class.ACTIVITY);
//        CreateRankSubClassItem(PVPData.Rank_Class.HAOXIA);
//        CreateRankSubClassItem(PVPData.Rank_Class.JUNJIE);
//        CreateRankSubClassItem(PVPData.Rank_Class.ZHIZUN);
//        CreateRankSubClassItem(PVPData.Rank_Class.JUYI);
//
//        if (m_RankClass.GetComponent<UITable>() != null)
//        {
//            m_RankClass.GetComponent<UITable>().repositionNow = true;
//        }
//#if BOBJOYSTICK
//        //Invoke("AttachToRank",0.3f);
//        Invoke("MapRankToJoy",0.3f);
//#endif
    }
    public static string GetRankClassName(PVPData.Rank_Class nClass)
    {
        switch ((PVPData.Rank_Class)nClass)
        {
            case PVPData.Rank_Class.ACTIVITY:
                {
                    return StrDictionary.GetClientDictionaryString("#{5443}");
                }
                break;
            case PVPData.Rank_Class.HAOXIA:
                {
                    return StrDictionary.GetClientDictionaryString("#{5444}");
                }
                break;
            case PVPData.Rank_Class.JUNJIE:
                {
                    return StrDictionary.GetClientDictionaryString("#{5445}");
                }
                break;
            case PVPData.Rank_Class.ZHIZUN:
                {
                    return StrDictionary.GetClientDictionaryString("#{5446}");
                }
                break;
            case PVPData.Rank_Class.JUYI:
                {
                    return StrDictionary.GetClientDictionaryString("#{5447}");
                }
                break;
            default:
                {
                    return "";
                }
        }
        return "";
    }

    /// <summary>
    /// 
    /// </summary>
    void CreateRankSubClassItem(PVPData.Rank_Class rankClass)
    {
        if (null == m_prefSubClassItem)
        {
            LogModule.ErrorLog("CreateRankSubClassItem fail m_prefSubClassItem = null");
            return;
        }
        RankSubClassItem SubClassItem = null;
        switch (rankClass)
        {
            case PVPData.Rank_Class.ACTIVITY:
                {
					SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "000");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                        
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "001");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
     
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "002");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                     
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
                    m_SubActivityUIGrid.hideInactive = true;
                    m_SubActivityUIGrid.sorted = true;
                    m_SubActivityUIGrid.repositionNow = true;
                }
                break;
            case PVPData.Rank_Class.HAOXIA:
                {
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "000");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                      
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "001");
                    if (SubClassItem != null)
                    {                    
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                   
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "002");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
               
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "003");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                        //m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "004");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                       // m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "005");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                       // m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "006");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                       // m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "007");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                       // m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "008");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                       // m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "009");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                        //m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
                    m_SubHaoXiaUIGrid.hideInactive = true;
                    m_SubHaoXiaUIGrid.sorted = true;
                    m_SubHaoXiaUIGrid.repositionNow = true;
                }
                break;

            case PVPData.Rank_Class.JUNJIE:
                {
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "000");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "001");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
            //        m_SubJunJieUIGrid.hideInactive = true;
            //        m_SubJunJieUIGrid.sorted = true;
            //        m_SubJunJieUIGrid.repositionNow = true;
                }
                break;
            case PVPData.Rank_Class.ZHIZUN:
                {
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "000");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "001");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "002");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "000");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                       // m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                     
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "004");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }

            //        m_SubZhiZunUIGrid.hideInactive = true;
            //        m_SubZhiZunUIGrid.sorted = true;
            //        m_SubZhiZunUIGrid.repositionNow = true;
                }
                break;
            case PVPData.Rank_Class.JUYI:
                {
			SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "000");
                    if (SubClassItem != null)
                    {
                        SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT);
                        m_ClickSprite.Add(SubClassItem.m_ClickSprite);
                       // m_NormalSprite.Add(SubClassItem.m_NornalSprite);
                      
                        if (m_RankSubClassList != null)
                        {
                            m_RankSubClassList.Add(SubClassItem);
                        }
                    }
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "001");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "002");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
            //SubClassItem = RankSubClassItem.CreateItem(m_prefSubClassItem, m_LeftPublicGrid, "003");
            //        if (SubClassItem != null)
            //        {
            //            SubClassItem.SetData(GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT), (int)rankClass, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT);
            //            m_ClickSprite.Add(SubClassItem.m_ClickSprite);
            //            if (m_RankSubClassList != null)
            //            {
            //                m_RankSubClassList.Add(SubClassItem);
            //            }
            //        }
                    m_SubJuYiUIGrid.hideInactive = true;
                    m_SubJuYiUIGrid.sorted = true;
                    m_SubJuYiUIGrid.repositionNow = true;
                }
                break;
        }
        if (SubClassItem != null)
        {
            m_CaoZuoLabel.enabled = true;
        }
    }

    public static string GetRankTypeName(Games.GlobeDefine.GameDefine_Globe.RANKTYPE nClass)
    {
        switch ((Games.GlobeDefine.GameDefine_Globe.RANKTYPE)nClass)
        {
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE:
                {
                    return StrDictionary.GetClientDictionaryString("#{4275}");
                }
               // break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI:
                {
                    return StrDictionary.GetClientDictionaryString("#{4274}");
                }
              //  break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI:
                {
                    return StrDictionary.GetClientDictionaryString("#{4273}");
                }
             //   break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK:
                {
                    return StrDictionary.GetClientDictionaryString("#{10906}");
                }
             //   break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK:
                {
                    return StrDictionary.GetClientDictionaryString("#{10907}");
                }
             //   break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK:
                {
                    return StrDictionary.GetClientDictionaryString("#{10908}");
                }
            //    break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT:
                {
                    return StrDictionary.GetClientDictionaryString("#{10911}");
                }
            //    break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS:
                {
                    return StrDictionary.GetClientDictionaryString("#{4272}");
                }
            //    break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION:
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TIANSHANREPUTATION:
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_DALIREPUTATION:
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_XIAOYAOREPUTATION:
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GAIBANGREPUTATION:
                {
                    return StrDictionary.GetClientDictionaryString("#{4278}");
                }
               // break;
           case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN:
                {
                    return StrDictionary.GetClientDictionaryString("#{4269}");
                }
               // break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER:
                {
                    return StrDictionary.GetClientDictionaryString("#{4277}");
                }
               // break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO:
                {
                    return StrDictionary.GetClientDictionaryString("#{10912}");
                }
               // break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK:
                {
                    return StrDictionary.GetClientDictionaryString("#{10910}");
                }
               // break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI:
                {
                    return StrDictionary.GetClientDictionaryString("#{4270}");
                }
              //  break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT:
                {
                    return StrDictionary.GetClientDictionaryString("#{4279}");
                }
               // break;
            case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN:
                {
                    return StrDictionary.GetClientDictionaryString("#{4280}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME:
                {
                    return StrDictionary.GetClientDictionaryString("#{10916}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION:
                {
                    return StrDictionary.GetClientDictionaryString("#{4282}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION:
                {
                    return StrDictionary.GetClientDictionaryString("#{4283}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE:
                {
                    return StrDictionary.GetClientDictionaryString("#{10917}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO:
                {
                    return StrDictionary.GetClientDictionaryString("#{4874}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER:
                {
                    return StrDictionary.GetClientDictionaryString("#{5305}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM:
                {
                    return StrDictionary.GetClientDictionaryString("#{5304}");
                }
              //  break;
             case Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI:
                {
                    return StrDictionary.GetClientDictionaryString("#{10914}");
                }
               // break;
            default:
                {
                    return "";
                }
        }
        return "";
    }
	#if BOBJOYSTICK
    void MapRankToJoy()
    {
        UIPanel badpanel = Engine.JoyUI.JoyControllerLogic.FindChild(transform, "RankInfo").GetComponent<UIPanel>();
        Vector4 cliprange = badpanel.clipRange;
        cliprange.z = 2000;
        badpanel.clipRange = cliprange;
        UIDragPanelContents[] uidragcontents = GetComponentsInChildren<UIDragPanelContents>(true);
        List<GameObject> uiItemObjs = new List<GameObject>();
        for (int i = 0; i < uidragcontents.Length; i++)
        {
            uiItemObjs.Add(uidragcontents[i].gameObject);
        }
        Engine.JoyUI.BobJoyUINavigator.CollectUIItems(gameObject, uiItemObjs);
        UIRootJoyControllerHelper.Instance.setState(UIRootJoyControllerHelper.JoyUIState.RANK_TAB_UI);
    }
	#endif
    void SetPageText()
    {
        m_Page.text = (m_nPage + 1).ToString() + "/" + m_nTotalPage.ToString();
    }

    void OnDestroy()
    {
        m_Instance = null;
    }

    //..
    public void OnRankRewardButtonClick()
    {
        if (m_RankRewardDescRootObject != null)
        {
            m_RankRewardDescRootObject.SetActive(true);
        }

        if (m_RankRewardDescLabel != null)
        {
            m_RankRewardDescLabel.text = "";

            switch (m_nRankType)
            {
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE://1//藏经阁副本
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3198);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARRANK: //2,//帮战海选排行
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3199);

                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARKILLRANK: //3,//帮战海选 击杀人数排行
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3200);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI: // 4,//华山-战绩
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3201);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI: // 5,//华山-金腰带
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3202);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK: // 6, //等级
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3203);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK: // 7, //战斗力
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3204);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK: //8,//血量
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3205);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT: //9,//帮会战斗力
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3206);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS: //10,//华山-排名
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3207);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION: //11, //少林大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TIANSHANREPUTATION: // 12,//天山大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_DALIREPUTATION: // 13,//大理大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_XIAOYAOREPUTATION: // 14,//逍遥大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GAIBANGREPUTATION: // 30,//逍遥大弟子
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3208);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN: // 15,//金币
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3209);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER: // 16,//宗师
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3210);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO: // 17,//消费排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3211);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK: //18,//攻击力排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3212);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI: // 19,//充值排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3213);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT: // 20,//师门战力排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3214);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN: // 21,//少室山排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3215);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME: // 22,//在线时间排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3216);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION: // 23，//个人圣诞节排行
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3931);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION: // 24,//帮会圣诞节排行
                    m_RankRewardDescLabel.text = Utils.GetDicByID(3932);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE: // 25 防御力排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(5045);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER: // 31 喇叭排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(5307);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM: // 32 魅力排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(5306);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI: // 33,//充值排行榜
                    m_RankRewardDescLabel.text = Utils.GetDicByID(5407);
                    break;
                default:
                    break;
            }
        }
    }
    public void OnRankRewardHideButtonClick()
    {
        if (m_RankRewardDescRootObject != null)
        {
            m_RankRewardDescRootObject.SetActive(false);
        }
    }
    //..
    public int GetRankType()
    {
        return m_nRankType;
    }

    //..
     public void OnTabProfession(TabButton button)
    {
        if (button.name == "Tab1")//少林大弟子
        {
            m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION;
        }
        else if (button.name == "Tab2") // 天山大弟子
        {
            m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TIANSHANREPUTATION;
        }
        else if (button.name == "Tab3") // 大理大弟子
        {
            m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_DALIREPUTATION;
        }
        else if (button.name == "Tab4") // 逍遥大弟子
        {
            m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_XIAOYAOREPUTATION;
        } 
        else if (button.name == "Tab5") // 丐帮大弟子
        {
            m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GAIBANGREPUTATION;
        }
       
        m_nPage = 0;
        //if (isRankDataReturn == false)
        //{
            SendRankPack();
        //}
        PVPData.ClearRankData();
        ClearRankData();
        SelfReputationControl(true);   
    }

    public void SelfReputationControl(bool show)
    {
        if (m_RepRootObject != null)
        {
            m_RepRootObject.SetActive(show);
        }

        if (m_RepValue != null && show)
        {
            PlayerData playerDataPool = GameManager.gameManager.PlayerDataPool;
            if (playerDataPool != null)
            {
                m_RepValue.text = playerDataPool.Reputation.ToString();
            }
        }
    }

    public void OnTabTableau(TabButton button)
    {
        return;
        //m_ProfessionReputationController.gameObject.SetActive(false);
        //m_ChongZhiTime.gameObject.SetActive(false);
        //if (m_RankRewardDescRootObject != null)
        //{
        //    m_RankRewardDescRootObject.SetActive(false);
        //}

        //SelfReputationControl(false);

        //if (button.name == "Tab01") 
        //{
        //    // 帮会圣诞节排行
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION;
        //}
        //else if (button.name == "Tab02")
        //{
        //    // 个人圣诞节排行
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION;         
        //}
        //else if (button.name == "Tab03")
        //{
        //    // 充值
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI;
        //    m_ChongZhiTime.gameObject.SetActive(true);          
        //}
        //else if (button.name == "Tab003")
        //{
        //    // 充值
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI;
        //    m_ChongZhiTime.gameObject.SetActive(true);
        //}
        //else if (button.name == "Tab04") 
        //{
        //    // 战力
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK;
        //}
        //else if (button.name == "Tab05") 
        //{
        //    //等级
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK;           
        //}
        //else if (button.name == "Tab06") 
        //{
        //    //帮会实力排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT;
        //}
        //else if (button.name == "Tab07") 
        //{
        //    //藏经阁排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE;       
        //}
        //else if (button.name == "Tab08") 
        //{         
        //    //大弟子排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION;
        //    m_ProfessionReputationController.gameObject.SetActive(true);
        //    m_ProfessionReputationController.ChangeTab("Tab1");
        //}
        //else if (button.name == "Tab09") 
        //{
        //    // 华山-排名
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS;
          
        //}
        //else if (button.name == "Tab10") 
        //{
        //    //金腰带
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI;
            
        //}
        //else if (button.name == "Tab11") 
        //{
        //    //战绩排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI;
          
        //}
        //else if (button.name == "Tab12") 
        //{
        //    //宗师排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER;
        //}
        //else if (button.name == "Tab13")
        //{ 
        //    // 师门战斗力
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT;
        //}
        //else if (button.name == "Tab14") 
        //{
        //    // 消费
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO;
        //}
        //else if (button.name == "Tab15")
        //{
        //    // 攻击
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK;
        //}
        //else if (button.name == "Tab16")
        //{
        //    // 血量
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK;      
        //}
        //else if (button.name == "Tab17") 
        //{
        //    //防御力排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE;          
        //}
        //else if (button.name == "Tab18") 
        //{
        //    // 金币
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN;          
        //}
        //else if (button.name == "Tab19")
        //{
        //    // 少室山排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN;
        //}
        //else if (button.name == "Tab20")
        //{
        //    // 在线时间排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME;
        //}
        //else if (button.name == "Tab001")
        //{
        //    // 红包积分排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO;
        //}
        //else if (button.name == "Tab21")
        //{
        //    // 喇叭排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER;
        //}
        //else if (button.name == "Tab22")
        //{
        //    // 鲜花排行榜
        //    m_nRankType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM;
        //}

        //m_nPage = 0;
        //if (isRankDataReturn == false)
        //{
        //    SendRankPack();
        //}      
        ////SetRankItemTitleOnChangeTable(button.name);
        //SetRewardBtnShow();
    }

    void SetRewardBtnShow( )
    {
        if (m_RankRewardDescBtn != null)
        {

            switch (m_nRankType)
            {
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE://1//藏经阁副本
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARRANK: //2,//帮战海选排行
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PRELIMINARYGUILDWARKILLRANK: //3,//帮战海选 击杀人数排行
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI: // 4,//华山-战绩
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI: // 5,//华山-金腰带
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT: //9,//帮会战斗力
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT: // 20,//师门战力排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN: // 21,//少室山排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO: // 29,//红包排行榜
                    m_RankRewardDescBtn.SetActive(false);
                    break;
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK: // 6, //等级
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK: // 7, //战斗力
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK: //8,//血量
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS: //10,//华山-排名
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION: //11, //少林大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TIANSHANREPUTATION: // 12,//天山大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_DALIREPUTATION: // 13,//大理大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_XIAOYAOREPUTATION: // 14,//逍遥大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GAIBANGREPUTATION: // 30,//逍遥大弟子
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN: // 15,//金币
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER: // 16,//宗师
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO: // 17,//消费排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK: //18,//攻击力排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI: // 19,//充值排行榜            
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME: // 22,//在线时间排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION: // 23,//个人圣诞节排行
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION: // 24,//帮会圣诞节排行
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE: // 25,//防御力排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER: // 31,//喇叭排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM: // 32,//魅力排行榜
                case (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI: // 33,//魅力排行榜
                    m_RankRewardDescBtn.SetActive(true);
                    break;
                default:
                    break;
            }
        }
    }

    public void SetTitleNum(int n)
    {
        if (m_TitleGrid != null && n != 0)
        {
            //m_TitleGrid.cellWidth = 500 / n;
          
            m_TitleGrid.cellWidth = 660 / n;
            m_TitleGrid.repositionNow = true;
        }
    }


    public void SetRankItemTitleOnChangeTable( int nRankType)
    {
        CleanTitle();
        ClearRankData();
        m_MeRankDesc.text = Utils.GetDicByID(2049);
        
        if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION == nRankType)
        {     
            //帮会圣诞节排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 1065);
            SetItemTitleTxt(2, 3933);
       
            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION == nRankType)
        {      
            // 个人圣诞节排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 3933);

            SetTitleNum(3);
            SetItemLabelNum(3);
                    
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI == nRankType)
        {      
            //充值排行帮
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2766);
      
            SetTitleNum(3);
            SetItemLabelNum(3);
            SetSpChongZhiTime();

        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI == nRankType)
        {
            //充值排行帮
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2766);

            SetTitleNum(3);
            SetItemLabelNum(3);
            SetChongZhiTime();

        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOMBATRANK == nRankType)
        {         
            //战力排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2048);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERLEVELRANK == nRankType)
        {          
            //等级
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 10918);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILDCOMBAT == nRankType)
        {           
            //帮会实力榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 1065);
            SetItemTitleTxt(2, 2048);
     
            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CANGJINGGE == nRankType)
        {           
            //藏经阁排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 10918);
            SetItemTitleTxt(3, 2045);
            SetItemTitleTxt(4, 2046);

            SetTitleNum(5);
            SetItemLabelNum(5);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION == nRankType
            || (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TIANSHANREPUTATION == nRankType
            || (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_DALIREPUTATION == nRankType
            || (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_XIAOYAOREPUTATION == nRankType
            || (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GAIBANGREPUTATION == nRankType)
        {
            //门派大弟子
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2473);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANPOS == nRankType)
        {
            
            // 华山-排名
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
   
            SetTitleNum(2);
            SetItemLabelNum(2);
      
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANJINYAODAI == nRankType)
        {          
            //金腰带排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2057);

            SetTitleNum(3);
            SetItemLabelNum(3);

        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HUASHANZHANJI == nRankType)
        {
           
            //战绩排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2056);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTER == nRankType)
        {          
            //宗师排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2510);
            SetItemTitleTxt(3, 2511);

            SetTitleNum(4);
            SetItemLabelNum(4);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_MASTERAVTIVECOMBAT == nRankType)
		{
            // 师门战斗力
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 1464);
            SetItemTitleTxt(2, 2048);

            SetTitleNum(3);
            SetItemLabelNum(3);
		}
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO == nRankType)
        {         
            // 消费排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2528);
            SetTitleNum(3);
            SetItemLabelNum(3);
           
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_ATTACK == nRankType)
        {
            //攻击排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 10919);

            SetTitleNum(3);
            SetItemLabelNum(3);         
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERHPRANK == nRankType)
        {        
            //  血量排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2058);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERDEFENSE == nRankType)
        {         
            //防御力排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);   //1065
            SetItemTitleTxt(2, 4607);
            SetItemTitleTxt(3, 4608);
            //SetItemTitleTxt(4, 4609);
            SetItemTitleTxt(4, 4609);

            SetTitleNum(5);
            SetItemLabelNum(5);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOIN == nRankType) 
        {
            // 金币排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 1324);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOSHISHAN == nRankType) 
        {
            //少室山排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2044);
            SetItemTitleTxt(3, 3040);
            SetItemTitleTxt(4, 2046);

            SetTitleNum(5);
            SetItemLabelNum(5);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TOTALONLINETIME == nRankType) 
        {
            //累计在线时间排行榜
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 3185);
  
            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_HONGBAO == nRankType) 
        {
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 5073);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_LOUDSPEAKER == nRankType) 
        {
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2043);
            SetItemTitleTxt(3, 5311);

            SetTitleNum(4);
            SetItemLabelNum(4);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCHARM == nRankType) 
        {
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 2043);
            SetItemTitleTxt(3, 5312);

            SetTitleNum(4);
            SetItemLabelNum(4);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_USERCOSTYUANBAO == nRankType)
        {
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 10930);
            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI == nRankType)
        {
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 10931);

            SetTitleNum(3);
            SetItemLabelNum(3);
        }
        else if ((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SPECIALTIMECHONGZHI == nRankType)
        {
            SetItemTitleTxt(0, 2041);
            SetItemTitleTxt(1, 2042);
            SetItemTitleTxt(2, 10931);
    
            SetTitleNum(3);
            SetItemLabelNum(3);
        }
    }

    public void SetItemTitleTxt(int idx, int dict)
    {
        if (idx < m_RankItemTitle.Length && idx >= 0)
        {
            m_RankItemTitle[idx].text = Utils.GetDicByID(dict);
        }
    }

    public void CleanTitle()
    {
        for (int i = 0; i < m_RankItemTitle.Length; ++i)
        {
            m_RankItemTitle[i].text = "";
        }
    }
    public void SetItemLabelNum(int n)
    {
        for (int i = 0; i < m_RankItem.Length; ++i)
        {
            m_RankItem[i].SetMaxLabel(n);
        }
    }

    public void ClearRankData()
    {
        for (int i = 0; i < m_RankItem.Length; ++i)
        {
            m_RankItem[i].Cleanup();
            m_RankItem[i].gameObject.SetActive(false);
        }
        m_MeRank.text = Utils.GetDicByID(2059);
        if (m_CurSelectItem != null)
        {
            m_CurSelectItem.OnCancelSelectItem();
            m_CurSelectItem = null;
        }
        if (m_MenuWindow != null)
         {
             m_MenuWindow.gameObject.SetActive(false);
         }
         
    }
    //..
    public void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.RankRoot);

        // 红包标记下 打开 节日界面吧
        if (GameManager.gameManager.PlayerDataPool.HongBaoRankFlag == true)
        {
            UIManager.ShowUI(UIInfo.FestivalController);
        }
        
    }
    public int GetPage()
    {
        return m_nPage;
    }



    private int m_nTotalPage = 1;
    public void SetTotalPage( int total, int curPage )
    {
        m_nPage = curPage;
        m_nTotalPage = total;
        if (PrevImageButton != null)
        {
            PrevImageButton.isEnabled = ((m_nPage > 0));
        }
        if (NextImageButton != null)
        {
            NextImageButton.isEnabled = ((m_nPage + 1) < m_nTotalPage);
        }
        SetPageText();
    }

    public int TotalPage
    {
        get { return m_nTotalPage; }
    }

    public void SetIsPage(bool IsPage)
    {
        m_IsPage = IsPage;
    }
    public void OnUpClick()
    {
        if (m_nPage > 0)
        {
            m_nPage--;
            SetPageText();
            ClearRankData();
            PVPData.ClearRankData();
            SendRankPack();
        }
    }
    public void OnDownClick()
    {
        if ((m_nPage+1) < TotalPage)
        {
            m_nPage++;
            if (m_nPage >= 25)
            {
                m_nPage = 24;
            }
            SetPageText();
            ClearRankData();
            PVPData.ClearRankData();
            SendRankPack();
        }
    }

    //..
    public void SendRankPack()
    {
        CG_ASK_RANK packet = (CG_ASK_RANK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RANK);
        packet.NType = m_nRankType;
        packet.NPage = m_nPage;
        packet.SendPacket();
        if (m_nTipWaitWindow != 0)
        {
            MessageBoxLogic.OpenWaitBox(1290, 1, 0); 
        }
        m_nTipWaitWindow = m_nTipWaitWindow + 1;
    }

    void SetChongZhiTime()
    {
        DateTime startTime = new DateTime(1970, 1, 1, 0, 0, 0);
        //开始时间
        DateTime BeginTime = new DateTime(startTime.Ticks + (long)GlobalData.ChongZhiStartTime * 10000000L, DateTimeKind.Unspecified);
        BeginTime = BeginTime.ToLocalTime();
        //结束时间
        DateTime EndTime = new DateTime(startTime.Ticks + (long)GlobalData.ChongZhiEndTime * 10000000L, DateTimeKind.Unspecified);
        EndTime = EndTime.ToLocalTime();

        string StrTime = StrDictionary.GetClientDictionaryString("#{3076}", BeginTime.ToString("yyyy/MM/dd HH:mm:ss"), EndTime.ToString("yyyy/MM/dd HH:mm:ss"));

        if (m_ChongZhiTime != null)
        {
            m_ChongZhiTime.text = StrTime;
        }
    }

    void SetSpChongZhiTime()
    {

    }

    public void OnClickItem(RankItem oItem)
    {
        if (null == m_MenuWindow)
        {
            LogModule.ErrorLog("OnClickItem::m_MenuWindow is NULL");
            return;
        }
        if (null == oItem)
        {
            LogModule.ErrorLog("OnClickItem::oItem is NULL");
            return;
        }
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            LogModule.ErrorLog("OnClickItem::Singleton<ObjManager>.GetInstance().MainPlayer is NULL");
            return;
        }

         if (m_CurSelectItem != null)
        {
            m_CurSelectItem.OnCancelSelectItem();
        }
        m_CurSelectItem = oItem;
        m_CurSelectItem.OnSelectItem();

        if (oItem.Guid != Singleton<ObjManager>.GetInstance().MainPlayer.GUID && oItem.Guid != GlobeVar.INVALID_GUID)
        {
            m_MenuWindow.Guid   = oItem.Guid;
			m_MenuWindow.Name = oItem.Name;
            m_MenuWindow.OnShowRankMenu();

        }
    }

    public void OnClickRankClassBt(int nClass, int nRankType)
    {
        for (int i = 0; i < m_ClickSprite.Count; i++)
        {
            m_ClickSprite[i].SetActive(false);
        }

        for (int i = 0; i < m_RankSubClassList.Count; ++i )
        {
            m_RankSubClassList[i].EnabledNormalSprit();
        }
        //for (int i = 0; i < m_NormalSprite.Count; i++)
        //{
        //    m_NormalSprite[i].SetActive(true);
        //}

       // m_ProfessionReputationController.gameObject.SetActive(false);
        m_ChongZhiTime.gameObject.SetActive(false);

        if (m_RankRewardDescRootObject != null)
        {
            m_RankRewardDescRootObject.SetActive(false);
        }
        SelfReputationControl(false);
        m_nRankType = nRankType;

        if (m_nRankType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_CHONGZHI)
        {
            m_ChongZhiTime.gameObject.SetActive(true);
        }
        else if (m_nRankType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_SHAOLINREPUTATION
            || m_nRankType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_TIANSHANREPUTATION
            || m_nRankType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_DALIREPUTATION
            || m_nRankType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_XIAOYAOREPUTATION
            || m_nRankType == (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GAIBANGREPUTATION)
        {
            //大弟子排行榜         
          //  m_ProfessionReputationController.gameObject.SetActive(true);
          //  m_ProfessionReputationController.ChangeTab("Tab1");
        }
     
        m_nPage = 0;
        //if (isRankDataReturn == false)
        //{
            SendRankPack();
        //}
        PVPData.ClearRankData();
        ClearRankData();
        SetRankItemTitleOnChangeTable(m_nRankType);
        SetRewardBtnShow();
    }

    public void OnRankOpenFlagChange()
    {
        UpdateRankSubClass();
        bool CurSelectRankNotOpen = false;
        for (int i = 0; i < m_RankSubClassList.Count; i++)
        {
            if (null == m_RankSubClassList[i])
            {
                continue;
            }
            if (m_RankSubClassList[i].RanType == (int)m_nRankType 
                && m_RankSubClassList[i].gameObject != null
                && false == m_RankSubClassList[i].gameObject.activeInHierarchy)
            {
                CurSelectRankNotOpen = true;
                break;
            }
        }

        if (CurSelectRankNotOpen)
        {
            OnClickRankClassBt((int)PVPData.Rank_Class.HAOXIA, (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_INVALID);
        }
    }

	//=====================================================================
	public GameObject m_LeftPublicGrid; 
	public TabController m_TypeTabController ;

	private 	void _Init()
	{
		if (m_TypeTabController != null)
		{
			m_TypeTabController.delTabChanged = onTypeTabClick ;

			if( m_TypeTabController.GetHighlightTab() != null)
			{
				onTypeTabClick( m_TypeTabController.GetHighlightTab() );

				if( m_RankSubClassList.Count > 0)
				{
					m_RankSubClassList[0].ClickSubClassBt();
				}
			}
		}
	}

	public void onTypeTabClick(TabButton button)
	{
		//CreateRankSubClassItem(PVPData.Rank_Class.ACTIVITY);
		
		Utils.CleanGrid(m_LeftPublicGrid);
		m_ClickSprite.Clear ();
        for (int i = 0; i < m_RankSubClassList.Count; i++)
        {
            m_RankSubClassList[i].EnabledNormalSprit();
        }
        m_CaoZuoLabel.enabled = false;
        //m_NormalSprite.Clear();
        //int nFirstSubClass = m_RankSubClassList.Count;
        SetRankItemTitleOnChangeTable((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_INVALID);
        m_RankSubClassList.Clear();
		if (button.name == "haoxia")
		{
			CreateRankSubClassItem(PVPData.Rank_Class.HAOXIA);
		}

		else if( button.name == "juyi")
		{
			CreateRankSubClassItem(PVPData.Rank_Class.JUYI);
		}

		else if( button.name == "zhizun")
		{
			CreateRankSubClassItem(PVPData.Rank_Class.ZHIZUN);
		}

		else if(button.name ==  "junjie")
		{
			CreateRankSubClassItem(PVPData.Rank_Class.JUNJIE);
		}

        if (m_RankClass.GetComponent<UICabalDraggablePanel>() != null)
		{
            m_RankClass.GetComponent<UICabalDraggablePanel>().RepositionEx();
		}

        if (m_LeftPublicGrid != null)
        {
            if (m_LeftPublicGrid.GetComponent<UIGrid>() != null)
            {
               // m_LeftPublicGrid.GetComponent<UIGrid>().Reposition();
                m_LeftPublicGrid.GetComponent<UIGrid>().repositionNow = true;
            }
        }
        //if (m_RankSubClassList.Count > nFirstSubClass)
        //{
        //    m_RankSubClassList[nFirstSubClass].ClickSubClassBt();
        //}
        if (m_RankSubClassList.Count > 0)
        {
            m_RankSubClassList[0].ClickSubClassBt();
        }
	}
}
