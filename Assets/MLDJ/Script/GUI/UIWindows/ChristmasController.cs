using UnityEngine;
using System.Collections;
using Module.Log;
using Games.SwordsMan;
using System.Collections.Generic;
using GCGame;
using GCGame.Table;
using Games.GlobeDefine;
using System;
/********************************************************************
    created:	2014-10-24
    filename: 	ChristmasController.cs
    author:		grx
    purpose:	圣诞活动界面
*********************************************************************/
public class ChristmasController : MonoBehaviour {

    static private ChristmasController m_Instance = null;

    public enum CHRISTMASTREE_QUALITY
    {
        WHITE = 1,      //白色
        GREEN = 2,      //绿色
        BLUE = 3,       //蓝色
        PURPLE = 4,     //紫色
        ORANGE = 5,     //橙色
    }

    public enum Tab_Index
    {
        TREE_Tab_Index = 1,      //圣诞树
        SOCKS_Tab_Index = 2,      //圣诞袜子
    }
    public static Tab_Index m_nTab = Tab_Index.SOCKS_Tab_Index;

    public TabController m_TabController;
    public GameObject m_RewardDescWindow;
    public GameObject m_TreeWindow;
    public GameObject m_SocksWindow;
    public GameObject m_SpringWindow;
    public UILabel m_LabelActivityTime;
    public UILabel m_LabelActivityDesc;

    public UILabel m_LableTreeExp;
    public UILabel m_LableTreeLevel;
    public UILabel m_LableTreeLevelTitle;

    public UILabel m_LablePlayerDecoration;
    public UILabel m_LablePlayerDecorationRank;

    public UISlider m_SliderExp;

    public UITexture m_TreeTexture;


    private Color m_WhiteColor = new Color(1.0f, 1.0f, 1.0f, 1.0f);
    private Color m_GreenColor = new Color(0.0f / 255.0f, 153.0f / 255.0f, 68.0f / 255.0f, 1.0f);
    private Color m_BlueColor = new Color(29.0f / 255.0f, 32.0f / 255.0f, 136.0f / 255.0f, 1.0f);
    private Color m_PurpleColor = new Color(146.0f / 255.0f, 7.0f / 255.0f, 131.0f / 255.0f, 1.0f);
    private Color m_OrangeColor = new Color(243.0f / 255.0f, 152.0f / 255.0f, 0.0f / 255.0f, 1.0f);

    public static ChristmasController Instance()
    {
        return m_Instance;
    }

     void Awake()
    {
        m_TabController.delTabChanged = OnTabTableau;
        UpdateActivityTime();
    }

    void OnEnable()
    {
        m_Instance = this;
        ChristmasTreeData.delUpdateChristmasTree = UpdateTree;
        if (Tab_Index.SOCKS_Tab_Index == m_nTab)
        {
            m_TabController.ChangeTab("Tab2");
        }
        else if (Tab_Index.TREE_Tab_Index == m_nTab)
        {
            m_TabController.ChangeTab("Tab1");
        }
    }

    void OnDisable()
    {
        m_Instance = null;
        ChristmasTreeData.delUpdateChristmasTree = null;
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.ChristmasController);
    }

    public void OnTabTableau(TabButton button)
    {
        if (null == button)
        {
            LogModule.ErrorLog("OnTabTableau::button is null");
            return;
        }
        if (button.name == "Tab1")
        {
            m_nTab = Tab_Index.TREE_Tab_Index;
            OnTreeWindowShow();
            m_TreeWindow.SetActive(true);
            m_SocksWindow.SetActive(false);
           
        }
        else if (button.name == "Tab2")
        {
            m_nTab = Tab_Index.SOCKS_Tab_Index;
            m_TreeWindow.SetActive(false);
            m_SocksWindow.SetActive(true);
        }
    }

    void OnTreeWindowShow()
    {
        CG_ASK_CHRISTMASTREE packet = (CG_ASK_CHRISTMASTREE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_CHRISTMASTREE);
        packet.Nodata = 1;
        packet.SendPacket();

        UpdateTree();
        UpdatePlayerDecorationInfo();
    }

    /// <summary>
    /// 副本
    /// </summary>
    void OnCopySceneClick()
    {
        UIManager.ShowUI(UIInfo.Activity, ChangeToCopyScene);
    }
    /// <summary>
    /// 
    /// </summary>
    /// <param name="bSuccess"></param>
    /// <param name="param"></param>
    void ChangeToCopyScene(bool bSuccess, object param)
    {
        if (ActivityController.Instance())
        {          
            ActivityController.Instance().m_TabDungeon.ChangeTab("Tab8");            
        }
    }
    /// <summary>
    /// 乾坤袋
    /// </summary>
    void OnQianKunDaiClick()
    {
        BackPackLogic.m_OpenWay = BackPackLogic.OPEN_WAY.MENU_BACKPACK;
        UIManager.ShowUI(UIInfo.BackPackRoot, BackPackLogic.SwitchQianKunDaiViewFromChristmas);
    }
    /// <summary>
    /// 商城
    /// </summary>
    void OnShopClick()
    {
        CG_ASK_YUANBAOSHOP_OPEN packet = (CG_ASK_YUANBAOSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_YUANBAOSHOP_OPEN);
        packet.NoParam = (int)YuanBaoShopLogic.OPEN_TYPE.OPEN_CHRISTMAS;
        packet.SendPacket();
    }

    /// <summary>
    /// 装扮圣诞树
    /// </summary>
    void OnDecorateTree()
    {
        CG_ASK_DECORATE_TREE packet = (CG_ASK_DECORATE_TREE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_DECORATE_TREE);
        packet.Nodata = 1;
        packet.SendPacket();
    }

    /// <summary>
    /// 购买材料
    /// </summary>
    void OnClickBuyMeterial()
    {
        CG_ASK_YUANBAOSHOP_OPEN packet = (CG_ASK_YUANBAOSHOP_OPEN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_YUANBAOSHOP_OPEN);
        packet.NoParam = (int)YuanBaoShopLogic.OPEN_TYPE.OPEN_CHRISTMAS;
        packet.SendPacket();
    }

    /// <summary>
    /// 个人排行
    /// </summary>
    void OnClickPlayerRank()
    {
        //CG_ASK_RANK scoreRankPak = (CG_ASK_RANK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RANK);
        //scoreRankPak.NType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION;
        //scoreRankPak.NPage = 0;
        //scoreRankPak.SendPacket();

        RankWindow.ShowRankWindow((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_PLAYER_DECORATION);
    }
    /// <summary>
    /// 帮会排行
    /// </summary>
    void OnClickGuildRank()
    {
        //CG_ASK_RANK scoreRankPak = (CG_ASK_RANK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RANK);
        //scoreRankPak.NType = (int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION;
        //scoreRankPak.NPage = 0;
        //scoreRankPak.SendPacket();

        RankWindow.ShowRankWindow((int)Games.GlobeDefine.GameDefine_Globe.RANKTYPE.TYPE_GUILD_DECORATION);
    }

    /// <summary>
    /// 奖励描述
    /// </summary>
    void OnClickRewardDesc()
    {
        m_RewardDescWindow.SetActive(true);
    }

    /// <summary>
    /// 奖励描述返回
    /// </summary>
    void OnClickBack()
    {
        m_RewardDescWindow.SetActive(false);
    }

    /// <summary>
    /// 
    /// </summary>
    public void UpdateTree()
    {
        if (null == ChristmasTreeData.m_ChristmasTreeInfo)
        {
            LogModule.ErrorLog("UpdateTree ChristmasTreeData.m_ChristmasTreeInfo is null ");
            return;
        }
        switch ((CHRISTMASTREE_QUALITY)ChristmasTreeData.m_ChristmasTreeInfo.m_TreeQuality)
        {
            case CHRISTMASTREE_QUALITY.WHITE:
                {
                    m_LableTreeLevel.color = m_WhiteColor;
                    m_LableTreeLevelTitle.color = m_WhiteColor;
                }
                break;
             case CHRISTMASTREE_QUALITY.GREEN:
                {
                    m_LableTreeLevel.color = m_GreenColor;
                    m_LableTreeLevelTitle.color = m_GreenColor;
                }
                break;
             case CHRISTMASTREE_QUALITY.BLUE:
                {
                    m_LableTreeLevel.color = m_BlueColor;
                    m_LableTreeLevelTitle.color = m_BlueColor;
                }
                break;
             case CHRISTMASTREE_QUALITY.PURPLE:
                {
                    m_LableTreeLevel.color = m_PurpleColor;
                    m_LableTreeLevelTitle.color = m_PurpleColor;
                }
                break;
             case CHRISTMASTREE_QUALITY.ORANGE:
                {
                    m_LableTreeLevel.color = m_OrangeColor;
                    m_LableTreeLevelTitle.color = m_OrangeColor;
                }
                break;
        }
       
        m_LableTreeLevel.text = StrDictionary.GetClientDictionaryString("#{3362}", ChristmasTreeData.m_ChristmasTreeInfo.m_TreeLevel);
        Tab_ChristmasTreeLevelUp pLevelUpTab = TableManager.GetChristmasTreeLevelUpByID(ChristmasTreeData.m_ChristmasTreeInfo.m_TreeLevel, 0);
        if (null == pLevelUpTab)
        {
            LogModule.ErrorLog("UpdateTree pLevelUpTab is null ");
            m_LableTreeExp.text = StrDictionary.GetClientDictionaryString("#{3478}", ChristmasTreeData.m_ChristmasTreeInfo.m_TreeExp,
                ChristmasTreeData.m_ChristmasTreeInfo.m_TreeExp);
            m_SliderExp.value = 1.0f;
            return;
        }

        m_LableTreeExp.text = StrDictionary.GetClientDictionaryString("#{3478}", ChristmasTreeData.m_ChristmasTreeInfo.m_TreeExp,
            pLevelUpTab.ExpNeed);

        float fSliderValue = 0.0f;
        if (pLevelUpTab.ExpNeed > 0)
        {
            fSliderValue = (float)ChristmasTreeData.m_ChristmasTreeInfo.m_TreeExp / (float)pLevelUpTab.ExpNeed;
        }
        m_SliderExp.value = fSliderValue;

        Tab_ChristmasTreeLevelUp LevelUpTab = TableManager.GetChristmasTreeLevelUpByID(ChristmasTreeData.m_ChristmasTreeInfo.m_TreeLevel, 0);
        if (LevelUpTab != null)
        {
            Texture curTexture = ResourceManager.LoadResource(LevelUpTab.TexturePath, typeof(Texture)) as Texture;
            if (null != curTexture)
            {
                m_TreeTexture.mainTexture = curTexture;
                m_TreeTexture.MakePixelPerfect();
                m_TreeWindow.SetActive(m_TreeWindow.activeSelf);
            }
        }
    }

    public void UpdatePlayerDecorationInfo()
    {
        m_LablePlayerDecoration.text = StrDictionary.GetClientDictionaryString("#{3480}", ChristmasTreeData.m_nPlayerDecoration);
        if (ChristmasTreeData.m_nMeDecorationRank >= 0)
        {
            m_LablePlayerDecorationRank.text = StrDictionary.GetClientDictionaryString("#{3479}", ChristmasTreeData.m_nMeDecorationRank+1);

        }
        else
        {
            m_LablePlayerDecorationRank.text = StrDictionary.GetClientDictionaryString("#{3356}");
        }
    }

    public void UpdateActivityTime()
    {
        DateTime startTime = new DateTime(1970, 1, 1, 0, 0, 0);
        //开始时间
        DateTime BeginTime = new DateTime(startTime.Ticks + (long)GlobalData.ChristmasStartTime * 10000000L, DateTimeKind.Unspecified);
        BeginTime = BeginTime.ToLocalTime();
        //结束时间
        DateTime EndTime = new DateTime(startTime.Ticks + (long)GlobalData.ChristmasEndTime * 10000000L, DateTimeKind.Unspecified);
        EndTime = EndTime.ToLocalTime();

        string StrTime = StrDictionary.GetClientDictionaryString("#{3967}", BeginTime.ToString("yyyy/MM/dd"), EndTime.ToString("yyyy/MM/dd"));

        if (m_LabelActivityTime != null)
        {
            m_LabelActivityTime.text = StrTime;
        }
    }

}
