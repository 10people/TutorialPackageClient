//********************************************************************
// 文件名: GuildWindow.cs
// 全路径：	\Script\GUI\UIWindow\GuildWindow.cs
// 描述: 帮会界面逻辑
// 作者: lijia
// 创建时间: 2014-04-23
//********************************************************************

using Games.LogicObj;
using UnityEngine;
using System.Collections;
using GCGame;
using Module.Log;
using Games.GlobeDefine;
using System.Collections.Generic;
using System;
using GCGame.Table;
using System.Text;

#if UNITY_WP8
using UnityPort;
#endif

public struct GuildShopMakeItem
{
    public GuildShopMakeItem(int ItemID, int Price, int MakeNum, int MaxHoldNum, int DictID, int DictInfo)
    {
        m_ItemID = ItemID;
        m_Price = Price;
        m_MakeNum = MakeNum;
        m_MaxHoldNum = MaxHoldNum;
        m_DictID = DictID;
        m_DictInfo = DictInfo;
    }

    public bool IsValid()
    {
        return m_ItemID != Games.GlobeDefine.GlobeVar.INVALID_ID;
    }

    public int m_ItemID;
    public int m_Price;
    public int m_MakeNum;
    public int m_MaxHoldNum;
    public int m_DictID;
    public int m_DictInfo;
}

public class GuildWindow : MonoBehaviour
{
    public GameObject[] m_CreateGuildNeedCloseOpenGO;
    public GameObject m_GuildList;
    public GameObject m_GuildListGrid;              //帮会列表Grid
    public GameObject m_GuildListItem;              //帮会列表项
    public GameObject m_GuildMemberListGrid;        //帮会正式成员列表Grid
    public GameObject m_GuildReserveMemberListGrid; //帮会待审批成员列表Grid
    public GameObject m_GuildMemberListItem;        //帮会列表项
    public TabController m_GuildTabController;      //帮会界面TabController
    public GameObject m_TabGrid;

    //帮会信息控件
    public UILabel m_GuildNameLabel;                //帮会名称
    public UILabel m_LevelLabel;                    //帮会等级
    public UILabel m_MemberNumLabel;                //帮会人数
    public UILabel m_GuildMemberPageLable;          //帮会成员页数
    public UILabel m_GuildExpLabel;                 //帮会繁荣度
    public UILabel m_GuildNoticeLabel;              //帮会公告
    public UIImageButton m_CreateGuildBtn;          //帮会创建按钮
    public UILabel m_GuildPageLable;                //帮会页数
    //public GameObject m_GuildReserveRemind;         //帮会新加入待审批人员提醒
    //public UILabel m_GuildReserveRemindNum;         //帮会新加入待审批人员人数提醒
    public UIImageButton m_guildRecruitBtn;         //招募成员按钮
    public GameObject m_GuildMailRoot;              //帮会邮件界面
    public GameUIInput m_GuildMailInput;            //帮会邮件输入框
    const int GUILDMAIL_COSTCOIN = 1000;             //发送帮会邮件花费金币
    public GameObject m_GuildCreateWindow;
    public GameObject m_GuildRuleWindow;
    public GameObject m_GuildLevelTipsWindow;
    public UISprite m_OpenReserveSprite;
    public UISprite m_CloseReserveSprite;
    public GameObject m_GuildReserveWindow;
    public GameObject m_TabContentWindow;
    public GameObject m_GuildPreInfoTabButton;  //帮会待审批分页的按钮
    public UILabel m_ReversePage_MemberNumLabel;
    public UILabel m_ReversePage_DeclarationLabel;
    public GameObject m_GuildAuthorityWindow;
    public GameObject m_GuildChangeNoticeWindow;
    public GameObject m_GuildChangeDeclarationWindow;
    public GameObject m_GuildHistoryWindow;
    public GameObject m_GuildInviteFriendWindow;

    //帮会商店相关
    public GameObject m_GuildShopGrid;              //帮会商店Grid
    public UILabel m_GuildContribute;               //本人当前帮贡

    //帮会加成
    public UILabel m_HPAdditionLable;               //帮会生命值加成
    public UILabel m_MPAdditionLable;               //帮会法力值加成
    public UILabel m_PAAdditionLable;               //帮会物攻值加成
    public UILabel m_MAAdditionLable;               //帮会魔攻值加成
    public UILabel m_PDAdditionLable;               //帮会物防值加成
    public UILabel m_MDAdditionLable;               //帮会魔防值加成
    public UILabel m_HitAdditionLable;              //帮会命中值加成
    public UILabel m_DodgeAdditionLable;            //帮会闪避值加成
    public UILabel m_CriAdditionLable;              //帮会暴击值加成
    public UILabel m_DeCriAdditionLable;            //帮会暴抗值加成
    public UILabel m_CurGuildAdditionLevel;         //当前属性加成的帮会等级
    public UILabel m_GuildAdditionPageLabel;
    public GameObject m_ChallenegWarRoot;           //约战选取界面
    public UIToggle m_IsOnlyShowEnemyToggle;      //是否只显示敌对帮会
    
    private TabButton m_GuildInfoTabButton;         //帮会信息分页的按钮
    private TabButton m_GuildWarInfoTabButton;      //帮战分页按钮
    private TabButton m_GuildShopTabButton;       //帮会福利分页按钮
    private TabButton m_JoinGuildTabButton;
    //private TabButton m_SearchGuildTabButton;
    private TabButton m_GuildActivityTabButton;

    private int m_nCurGuildAwardPageNum = 0;         //当先显示的帮会加成分页    

    private int m_nCurGuildListPage;                //帮会列表当前页码
    private int m_nMaxGuildListPage;                //帮会列表最大页
    private const int m_nGuildNumPerPage = 5;       //每页帮会列表数量

    private int m_nCurGuildMemberPage;              //帮会成员当前页码
    private int m_nMaxGuildMemberPage;              //帮会成员最大页
    private const int m_nGuildMemberNumPerPage = 6; //每页帮会成员数量

    #region 帮会商店
    public static int GuildWealthBak { set; get; }
    public static List<GuildShopItem> GuildShopItemList = new List<GuildShopItem>();
    public static List<GuildShopMakeItem> GuildShopItemMakeList = new List<GuildShopMakeItem>();
#endregion

    private UInt64 m_SelectMemberGuid = GlobeVar.INVALID_GUID;      //当前选中的帮会成员Guid
    public System.UInt64 SelectMemberGuid
    {
        get { return m_SelectMemberGuid; }
    }
    private static GuildWindow m_Instance = null;
    public static GuildWindow Instance()
    {
        return m_Instance;
    }

    private bool m_bIsOnlyShowEnemyGuild =false;
    private UInt64 m_curChallengeGuildGuid = GlobeVar.INVALID_GUID;//当前选择挑战的帮会
    public System.UInt64 CurChallengeGuildGuid
    {
        get { return m_curChallengeGuildGuid; }
        set { m_curChallengeGuildGuid = value; }
    }

    public GameObject m_PaoShangTip;

    private static bool m_bHasStartTab = false;     // 是否需要在初始化时显示一个指定Tab
    private static string m_strStartTabName = "";   // 初始化指定Tab名称
    public static void SetStartTab(string tabName)
    {
        m_bHasStartTab = true;
        m_strStartTabName = tabName;
    }

    public static void TestStartTab(TabController curTabController)
    {
        if (!m_bHasStartTab)
        {
            return;
        }
        m_bHasStartTab = false;
        if (null != curTabController)
        {
            curTabController.ChangeTab(m_strStartTabName);
        }
    }


    void Awake()
    {
        if (m_GuildTabController)
        {
            m_GuildTabController.delTabChanged = OnTabChanged;
        }
        m_Instance = this;
        m_nCurGuildAwardPageNum = 1;
    }

    void Start()
    {
        GUIData.delGuildDataUpdate += UpdateData;
        GUIData.delGuildMemberSelectChange += OnSelectMemberChange;
        m_IsOnlyShowEnemyToggle.value = m_bIsOnlyShowEnemyGuild;
        m_ChallenegWarRoot.SetActive(false);
        //在OnEnable中有可能无法读取分页按钮，这里重新进行一次赋值
        if (null != m_GuildTabController)
        {
            m_GuildInfoTabButton = m_GuildTabController.GetTabButton("03GuildInfoButton");
            m_GuildWarInfoTabButton = m_GuildTabController.GetTabButton("GuildWarButton");
            m_GuildShopTabButton = m_GuildTabController.GetTabButton("05GuildShopButton");
            m_JoinGuildTabButton = m_GuildTabController.GetTabButton("01JoinGuild");
            //m_SearchGuildTabButton = m_GuildTabController.GetTabButton("02SearchGuild");
            m_GuildActivityTabButton = m_GuildTabController.GetTabButton("04GuildActivityButton");
        }

        //如果无帮会则直接切换到帮会列表界面
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            if (null != m_GuildTabController)
            {
                if (null != m_GuildTabController)
                {
                    CloseOrOpenCreateGuildGO(false);
                    m_GuildTabController.ChangeTab("01JoinGuild");
                    //没有帮会的玩家，隐藏这两个选项
                    m_GuildPreInfoTabButton.SetActive(false);
                    m_GuildInfoTabButton.gameObject.SetActive(false);                        
                    m_GuildShopTabButton.gameObject.SetActive(false);           // 没帮会的玩家也可以看到福利内容但是按钮不可以点击
                    m_GuildWarInfoTabButton.gameObject.SetActive(false);
                    m_GuildActivityTabButton.gameObject.SetActive(false);
                    m_JoinGuildTabButton.gameObject.SetActive(true);
                    //m_SearchGuildTabButton.gameObject.SetActive(true);
                    m_GuildTabController.SortTabGrid();
                }

                // 尝试切换预设分页
                //TestStartTab(m_GuildTabController);
                return;
            }
        }
        else
        {
            if (null != m_GuildInfoTabButton)
            {
                m_GuildTabController.ChangeTab("03GuildInfoButton");

                m_GuildPreInfoTabButton.SetActive(true);
                m_GuildInfoTabButton.gameObject.SetActive(true);
                m_GuildWarInfoTabButton.gameObject.SetActive(false);
                m_GuildShopTabButton.gameObject.SetActive(true);
                m_GuildActivityTabButton.gameObject.SetActive(true);
                m_JoinGuildTabButton.gameObject.SetActive(false);
                //m_SearchGuildTabButton.gameObject.SetActive(false);
                m_GuildTabController.SortTabGrid();
            }
        }

        // 尝试切换预设分页
        //TestStartTab(m_GuildTabController);
    }
    void CloseOrOpenCreateGuildGO(bool vis)
    {
        foreach (GameObject go in m_CreateGuildNeedCloseOpenGO)
        {
            if (go != null)
            {
                go.SetActive(vis);
            }
        }
    }
    void OnDestroy()
    {
        m_Instance = null;

        GUIData.delGuildDataUpdate -= UpdateData;
        GUIData.delGuildMemberSelectChange -= OnSelectMemberChange;
        //GUIData.delGuildShopItemListShow -= UpdateGuildShopGoodsInfo;
    }
    
    void UpdateData()
    {
        if (m_GuildReserveWindow.activeInHierarchy)
        {
            ShowGuildReserveMemberList();
            return;
        }

        TabButton curTab = m_GuildTabController.GetHighlightTab();

        if (curTab == null)
        {
            return;
        }

        //如果点击帮会列表分页
        if (curTab.name == "01JoinGuild")
        {
            //显示帮会列表
            ShowGuildList();
        }

        //如果点击帮会信息分页
        if (curTab.name == "03GuildInfoButton")
        {
            //清理正式成员Grid
            Utils.CleanGrid(m_GuildMemberListGrid);

            //如果发现需要申请，则发送申请消息
            if (null != Singleton<ObjManager>.GetInstance().MainPlayer &&
                Singleton<ObjManager>.GetInstance().MainPlayer.NeedRequestGuildInfo)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.ReqGuildInfo();
            }
            else
            {
                //否则直接显示帮会信息
                ShowGuildInfo();
            }
        }
        
        //如果点击帮会预备成员分页
        if (curTab.name == "GuildReserveMemberButton")
        {
            //由于玩家打开帮会界面的时候会显示申请帮会信息，所以这里直接读取，而不申请
            //审批页面单独显示 不再是tabbutton了
            //ShowGuildReserveMemberList();
        }
        //如果点击的是帮战战况按钮
        if (curTab.name == "GuildWarButton")
        {
            //   ShowGuildWarPremilinaryInfo();
        }
        if (curTab.name.Equals("GuildReserveMemberButton"))
        {
            OnReserveClick();
        }
    }
#region 帮会商店
    
    void AskForGuildShopMakeItemList()
    {//可生产的商品列表

        //目前只有帮主可以执行功能
        if (!GameManager.gameManager.PlayerDataPool.IsGuildChief())
        {
           // MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{3109}"), "");
            return;
        }
        CG_GUILD_SHOP_ITEM_MAKE_LIST msg = (CG_GUILD_SHOP_ITEM_MAKE_LIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_SHOP_ITEM_MAKE_LIST);
        msg.Flag = 0;
        msg.SendPacket();
    }

#endregion


    //显示帮会加成数值
    void ShowGuildAttrAddition(int nLevel)
    {
        //int nGuildLevel = GameManager.gameManager.PlayerDataPool.GuildInfo.GuildLevel;
        m_nCurGuildAwardPageNum = nLevel;
        int nPlayerLevel = Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level;
        Tab_GuildAttrAddition addition = TableManager.GetGuildAttrAdditionByID(m_nCurGuildAwardPageNum, 0);
        if (null == addition)
        {
            return;
        }

        //更新页眉显示
        if (null != m_CurGuildAdditionLevel)
        {
            //XX级帮会加成
            m_CurGuildAdditionLevel.text = StrDictionary.GetClientDictionaryString("#{3022}", nLevel);
        }

        if (null != m_GuildAdditionPageLabel)
        {
            m_GuildAdditionPageLabel.text = nLevel.ToString() + "/" + GlobeVar.GUILD_MAX_MEMBER.Length.ToString();
        }

        //由于目前有10项属性加成，所以要判断数量
        if (addition.getBaseCount() == 10 && addition.getGrowthCount() == 10 && addition.getAddtionPercentCount() == 10)
        {
            if (null != m_HPAdditionLable)
            {
                int nHPRefix = (int)((addition.GetBasebyIndex(0) + nPlayerLevel * addition.GetGrowthbyIndex(0)) * addition.GetAddtionPercentbyIndex(0));
                m_HPAdditionLable.text = nHPRefix.ToString();
            }
            if (null != m_MPAdditionLable)
            {
                int nMPRefix = (int)((addition.GetBasebyIndex(1) + nPlayerLevel * addition.GetGrowthbyIndex(1)) * addition.GetAddtionPercentbyIndex(1));
                m_MPAdditionLable.text = nMPRefix.ToString();
            }
            if (null != m_PAAdditionLable)
            {
                int nPhyAtk = (int)((addition.GetBasebyIndex(2) + nPlayerLevel * addition.GetGrowthbyIndex(2)) * addition.GetAddtionPercentbyIndex(2));
                m_PAAdditionLable.text = nPhyAtk.ToString();
            }
            if (null != m_MAAdditionLable)
            {
                int nPhyAtk = (int)((addition.GetBasebyIndex(3) + nPlayerLevel * addition.GetGrowthbyIndex(3)) * addition.GetAddtionPercentbyIndex(3));
                m_MAAdditionLable.text = nPhyAtk.ToString();
            }
            if (null != m_PDAdditionLable)
            {
                int nPhyDef = (int)((addition.GetBasebyIndex(4) + nPlayerLevel * addition.GetGrowthbyIndex(4)) * addition.GetAddtionPercentbyIndex(4));
                m_PDAdditionLable.text = nPhyDef.ToString();
            }
            if (null != m_MDAdditionLable)
            {
                int nMagDef = (int)((addition.GetBasebyIndex(5) + nPlayerLevel * addition.GetGrowthbyIndex(5)) * addition.GetAddtionPercentbyIndex(5));
                m_MDAdditionLable.text = nMagDef.ToString();
            }
            if (null != m_HitAdditionLable)
            {
                int nHit = (int)((addition.GetBasebyIndex(6) + nPlayerLevel * addition.GetGrowthbyIndex(6)) * addition.GetAddtionPercentbyIndex(6));
                m_HitAdditionLable.text = nHit.ToString();
            }
            if (null != m_DodgeAdditionLable)
            {
                int nDodge = (int)((addition.GetBasebyIndex(7) + nPlayerLevel * addition.GetGrowthbyIndex(7)) * addition.GetAddtionPercentbyIndex(7));
                m_DodgeAdditionLable.text = nDodge.ToString();
            }
            if (null != m_CriAdditionLable)
            {
                int nCri = (int)((addition.GetBasebyIndex(8) + nPlayerLevel * addition.GetGrowthbyIndex(8)) * addition.GetAddtionPercentbyIndex(8));
                m_CriAdditionLable.text = nCri.ToString();
            }
            if (null != m_DeCriAdditionLable)
            {
                int nDecri = (int)((addition.GetBasebyIndex(9) + nPlayerLevel * addition.GetGrowthbyIndex(9)) * addition.GetAddtionPercentbyIndex(9));
                m_DeCriAdditionLable.text = nDecri.ToString();
            }
        }
    }
        
    // 切换标签页响应
    void OnTabChanged(TabButton curButton)
    {
//         if (m_GuildReserveWindow.activeInHierarchy)
//         {
//             m_GuildReserveWindow.SetActive(false);
//             m_TabContentWindow.SetActive(true);
//         }
        
        UpdateData();
    }
    
    //显示帮会列表，启动Bundle加载
    public void ShowGuildList()
    {
        //清空帮会列表
        Utils.CleanGrid(m_GuildListGrid);

        //根据等级处理创建帮会按钮
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer && null != m_CreateGuildBtn)
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level >= GlobeVar.CREATE_GUILD_LEVEL)
            {
                m_CreateGuildBtn.gameObject.SetActive(true);
            }
            else
            {
                m_CreateGuildBtn.gameObject.SetActive(false);
            }
        }

        // 不是帮主不显示招募按钮
        m_guildRecruitBtn.gameObject.SetActive(GameManager.gameManager.PlayerDataPool.IsGuildChief());
        //没有帮会不显示 显示敌对帮会选项
        if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid != GlobeVar.INVALID_GUID)
        {
            m_IsOnlyShowEnemyToggle.gameObject.SetActive(true);
        }
        else
        {
            m_IsOnlyShowEnemyToggle.gameObject.SetActive(false);
            m_bIsOnlyShowEnemyGuild = false;
        }
        //如果发现需要申请，则发送申请消息
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer &&
            Singleton<ObjManager>.GetInstance().MainPlayer.NeedRequestGuildList)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqGuildList();
            return;
        }

        //进入Bundle加载过程
        //UIManager.LoadItem(UIInfo.GuildListItem, OnLoadGuildListItem);
        OnLoadGuildListItem(m_GuildListItem, null);
    }

    //Bundle加载帮会列表结束
    void OnLoadGuildListItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load Guild List item fail");
            return;
        }

        Utils.CleanGrid(m_GuildListGrid);

        List<GuildPreviewInfo> list = GameManager.gameManager.PlayerDataPool.guildList.GuildInfoList;
        list = GuildList.GuildSort(list);
        if (null == list)
        {
            return;
        }

        //计算最大页数和当前页数
        m_nCurGuildListPage = 1;
        if (m_bIsOnlyShowEnemyGuild)
        {
            int nEnemyCount = 0;
            for (int i = 0; i < list.Count; ++i)
            {
                if (list[i].IsEnemyGuild)
                {
                    nEnemyCount++;
                }
            }
            m_nMaxGuildListPage = (int)(nEnemyCount/ m_nGuildNumPerPage) + 1;
        }
        else
        {
            m_nMaxGuildListPage = (int)(list.Count / m_nGuildNumPerPage) + 1;
        }
        m_GuildPageLable.text = string.Format("{0}/{1}", m_nCurGuildListPage, m_nMaxGuildListPage);

        //填充数据
        int nGuildListStartIndex = (m_nCurGuildListPage - 1) * m_nGuildNumPerPage;
        int nSelectCount =0;
        for (; nGuildListStartIndex < list.Count; ++nGuildListStartIndex)
        {
            if (nSelectCount>=m_nGuildNumPerPage)
            {
                break;
            }
            if (list.Count > nGuildListStartIndex)
            {
                GuildPreviewInfo info = list[nGuildListStartIndex];
                //如果需要筛选 敌对帮会 则跳过非敌对的帮会
                if (m_bIsOnlyShowEnemyGuild && info.IsEnemyGuild == false)
                {
                    continue;
                }
                if (info.GuildGuid != GlobeVar.INVALID_GUID)
                {
                    GameObject newGuildListItem = Utils.BindObjToParent(resItem, m_GuildListGrid, nGuildListStartIndex.ToString());
                    if (null != newGuildListItem && null != newGuildListItem.GetComponent<GuildListItemLogic>())
                        newGuildListItem.GetComponent<GuildListItemLogic>().Init(info);
                    nSelectCount++;
                }
            }
        }

        //Grid排序，防止列表异常
        if (m_GuildListGrid.GetComponent<UIGrid>() != null)
        {
            m_GuildListGrid.GetComponent<UIGrid>().Reposition();
        }
        if (m_GuildListGrid.GetComponent<UITopGrid>() != null)
        {
            //m_GuildListGrid.GetComponent<UITopGrid>().Recenter(true);
        }                        

        //根据等级处理创建帮会按钮
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer && null != m_CreateGuildBtn)
        {
            if (Singleton<ObjManager>.GetInstance().MainPlayer.BaseAttr.Level >= GlobeVar.CREATE_GUILD_LEVEL)
            {
                m_CreateGuildBtn.gameObject.SetActive(true);
            }
            else
            {
                m_CreateGuildBtn.gameObject.SetActive(false);
            }
        }
    }

    void ClickAskChallangeWarBt()
    {
        string dicStr = StrDictionary.GetClientDictionaryString("#{2592}");
        MessageBoxLogic.OpenOKCancelBox(dicStr, "", AgreeChallengeGuildWar, null);
    }
    void AgreeChallengeGuildWar()
    {
        //发帮战切磋请求包
        CG_ASK_CHALLENGEGUILDWAR Pak = (CG_ASK_CHALLENGEGUILDWAR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_CHALLENGEGUILDWAR);
        Pak.Guildguid = m_curChallengeGuildGuid;
        Pak.SendPacket();
    }
    void ClickAskWildWarBt()
    {
        string dicStr = StrDictionary.GetClientDictionaryString("#{3169}");
        MessageBoxLogic.OpenOKCancelBox(dicStr, "", AgreeWildGuildWar, null);
    }
    void AgreeWildGuildWar()
    {
        //发野外宣战请求包
        CG_ASK_GUILDWILDWAR Pak = (CG_ASK_GUILDWILDWAR)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_GUILDWILDWAR);
        Pak.TargetGuildGuid = m_curChallengeGuildGuid;
        Pak.SendPacket();
    }
    public void ShowChallengeRoot()
    {
        m_ChallenegWarRoot.SetActive(true);
    }
    void CloseChallengeRoot()
    {
        m_ChallenegWarRoot.SetActive(false);
    }
    void ClearGuildInfo()
    {
        if (null != m_LevelLabel)
        {
            m_LevelLabel.text = ""; 
        }
        if (null != m_MemberNumLabel)
        {
            m_MemberNumLabel.text = "";
        }

        if (null != m_GuildExpLabel)
        {
            m_GuildExpLabel.text = "";
        }

        if (null != m_GuildNoticeLabel)
        {
            m_GuildNoticeLabel.text = "";
        }

        Utils.CleanGrid(m_GuildMemberListGrid);
    }

    //显示帮会信息，帮会信息由于没有其他Prefab，所以无需Bundle加载，直接读取数据
    public void ShowGuildInfo()
    {
        ClearGuildInfo();
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;
        if (null != m_GuildNameLabel)
        {
            m_GuildNameLabel.text = info.GuildName;
        }
        if (null != m_LevelLabel)
        {
            //帮会等级:XX
            m_LevelLabel.text = StrDictionary.GetClientDictionaryString("#{1738}", info.GuildLevel);     
        }
        if (null != m_MemberNumLabel)
        {
            //帮会成员XX/XX
            m_MemberNumLabel.text = StrDictionary.GetClientDictionaryString("#{1739}", info.GetGuildFormalMemberCount(), GlobeVar.GetGuildMemberMax(info.GuildLevel));  
        }

        if (null != m_GuildExpLabel)
        {
            //繁荣度 XX/XX
            m_GuildExpLabel.text = StrDictionary.GetClientDictionaryString("#{1855}", info.GuildExp.ToString(), GlobeVar.GetGuildExpMax(info.GuildLevel).ToString());
        }

        if (null != m_GuildNoticeLabel)
        {
            m_GuildNoticeLabel.text = info.GuildNotice;
        }

        if (null != m_GuildContribute)
        {
            GuildMember mainPlayerGuildInfo = GameManager.gameManager.PlayerDataPool.GuildInfo.GetMainPlayerGuildInfo();
            if (null != mainPlayerGuildInfo)
            {
                m_GuildContribute.text = mainPlayerGuildInfo.Contribute.ToString();
            }
        }

        //由于玩家打开帮会界面的时候会显示申请帮会信息，所以这里直接读取，而不申请
        ShowGuildMemberList();

        //UpdateGuildReserveRemindNum();
    }

    public void UpdateGuildNotice()
    {
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        if (null != m_GuildNoticeLabel)
        {
            m_GuildNoticeLabel.text = info.GuildNotice;
        }
    }
    
    //显示帮会正式成员列表，启动Bundle加载
    void ShowGuildMemberList()
    {
        //清理正式成员Grid
        Utils.CleanGrid(m_GuildMemberListGrid);

        //进入Bundle加载过程
        //UIManager.LoadItem(UIInfo.GuildMemberListItem, OnLoadGuildMemberItem);
        OnLoadGuildMemberItem(m_GuildMemberListItem, 1);
    }
    private void OnLoadGuildMemberItem(GameObject resItem, int nPage)
    {
        if (null == resItem)
        {
            return;
        }
        
        m_nCurGuildMemberPage = nPage;
        
        //获取正式会员数量
        int nMemberCount = 0;
        foreach (KeyValuePair<UInt64, GuildMember> memberPair in GameManager.gameManager.PlayerDataPool.GuildInfo.GuildMemberList)
        {
            GuildMember member = memberPair.Value;
            if (member.Guid != GlobeVar.INVALID_GUID && member.Job != (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
            {
                nMemberCount++;
            }
        }

        //计算最大页数和当前页数
        m_nMaxGuildMemberPage = (int)((nMemberCount - 1) / m_nGuildMemberNumPerPage) + 1;

        m_GuildMemberPageLable.text = string.Format("{0}/{1}", m_nCurGuildMemberPage, m_nMaxGuildMemberPage);

        Utils.CleanGrid(m_GuildMemberListGrid);

        int nGuildMemberStartIndex = (m_nCurGuildMemberPage - 1) * m_nGuildMemberNumPerPage;
        //填充数据
        int nIndex = 0;
        foreach (KeyValuePair<UInt64, GuildMember> memberPair in GameManager.gameManager.PlayerDataPool.GuildInfo.GuildMemberList)
        {
            //从nGuildMemberStartIndex开始显示，之前的全部过滤掉
            if (nIndex < nGuildMemberStartIndex)
            {
                nIndex++;
                continue;
            }

            //显示玩家内容
            GuildMember member = memberPair.Value;
            if (member.Guid != GlobeVar.INVALID_GUID && member.Job != (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
            {
                GameObject newGuildListItem = Utils.BindObjToParent(resItem, m_GuildMemberListGrid, nIndex.ToString());
                if (null != newGuildListItem && null != newGuildListItem.GetComponent<GuildMemberListItemLogic>())
                {
                    newGuildListItem.GetComponent<GuildMemberListItemLogic>().Init(member, false);
                    nIndex++;
                }
            }

            //如果此时已经显示够了一页，则退出遍历
            if (nIndex >= nGuildMemberStartIndex + m_nGuildMemberNumPerPage)
                break;
        }

        if (m_GuildMemberListGrid.GetComponent<UIGrid>() != null)
        {
            m_GuildMemberListGrid.GetComponent<UIGrid>().Reposition();
        }
        if (m_GuildMemberListGrid.GetComponent<UITopGrid>() != null)
        {
            //m_GuildMemberListGrid.GetComponent<UITopGrid>().Recenter(true);
        }
    }

    //显示帮会待审批成员列表，启动Bundle加载
    void ShowGuildReserveMemberList()
    {
        //清理待审批成员Grid
        Utils.CleanGrid(m_GuildReserveMemberListGrid);

        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        if (null != m_ReversePage_MemberNumLabel)
        {
            //帮会成员XX/XX
            m_ReversePage_MemberNumLabel.text = StrDictionary.GetClientDictionaryString("#{1739}", info.GetGuildFormalMemberCount(), GlobeVar.GetGuildMemberMax(info.GuildLevel));
        }

        if (null != m_ReversePage_DeclarationLabel)
        {
            m_ReversePage_DeclarationLabel.text = info.GuildDeclaration;
        }
        

        //进入Bundle加载过程
        //UIManager.LoadItem(UIInfo.GuildMemberListItem, OnLoadGuildReserveMemberItem);
        OnLoadGuildReserveMemberItem(m_GuildMemberListItem, null);
    }

    public void UpdateGuildDeclaration()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        if (null != m_ReversePage_DeclarationLabel)
        {
            m_ReversePage_DeclarationLabel.text = info.GuildDeclaration;
        }
    }

    //帮会成员信息Bundle加载结束
    void OnLoadGuildReserveMemberItem(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            LogModule.ErrorLog("load Guild Info item fail");
            return;
        }

        Utils.CleanGrid(m_GuildMemberListGrid);

        //填充数据
        int nGuildMemberListItemIndex = 0;
        foreach (KeyValuePair<UInt64, GuildMember> memberPair in GameManager.gameManager.PlayerDataPool.GuildInfo.GuildMemberList)
        {
            GuildMember member = memberPair.Value;
            if (member.Guid != GlobeVar.INVALID_GUID && member.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
            {
                GameObject newGuildListItem = Utils.BindObjToParent(resItem, m_GuildReserveMemberListGrid, nGuildMemberListItemIndex.ToString());
                if (null != newGuildListItem && null != newGuildListItem.GetComponent<GuildMemberListItemLogic>())
                {
                    newGuildListItem.GetComponent<GuildMemberListItemLogic>().Init(member, true);
                    nGuildMemberListItemIndex++;
                }
            }
        }

        //Grid排序，防止列表异常
        if (m_GuildReserveMemberListGrid.GetComponent<UIGrid>() != null)
        {
            m_GuildReserveMemberListGrid.GetComponent<UIGrid>().Reposition();
        }
        if (m_GuildReserveMemberListGrid.GetComponent<UITopGrid>() != null)
        {
            //m_GuildReserveMemberListGrid.GetComponent<UITopGrid>().Recenter(true);
        }                       

        //更新待审批标记相关函数调用
        //设置主菜单帮会待审批成员标记位
        if (MenuBarLogic.Instance() != null)
        {
            MenuBarLogic.Instance().UpdateGuildAndMasterReserveMember();
        }

        //更新帮会界面待审批标记
        //UpdateGuildReserveRemindNum();

        //更新待审批成员标记为
        if (GameManager.gameManager.PlayerDataPool.GuildInfo.GetGuildReserveMemberCount() > 0)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ShowGuildNewReserveFlag = true;
        }
        else
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ShowGuildNewReserveFlag = false;
        }
    }

    //修改帮会公告
    void OnBtnClickChangeNotice()
    {
        m_GuildChangeNoticeWindow.SetActive(true);
    }

    void OnChangeDeclarationClick()
    {
        m_GuildChangeDeclarationWindow.SetActive(true);
    }

    //创建帮会按钮
    void OnBtnClickCreate()
    {
        //如果有帮会则无法创建帮会
        if (GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        m_GuildCreateWindow.SetActive(true);
    }

    //帮会列表翻页按钮
    void OnBtnClickGuildListPgUp()
    {
        GuildListPageChanged(m_nCurGuildListPage + 1);
    }
    void OnBtnClickGuildListPgDown()
    {
        GuildListPageChanged(m_nCurGuildListPage - 1);
    }

    //帮会成员翻页按钮
    void OnBtnClickGuildMemberPgUp()
    {
        GuildMemberPageChanged(m_nCurGuildMemberPage + 1);
    }
    void OnBtnClickGuildMemberPgDown()
    {
        GuildMemberPageChanged(m_nCurGuildMemberPage - 1);
    }

    //帮会成员列表翻页逻辑
    void GuildMemberPageChanged(int nPage)
    {
        //判断页码下限
        if (nPage < 1)
        {
            nPage = 1;
        }

        //判断页码上限
        if (nPage > m_nMaxGuildMemberPage)
        {
            nPage = m_nMaxGuildMemberPage;
        }

        //页码和当前页一致，不进行操作
        if (nPage == m_nCurGuildMemberPage)
        {
            return;
        }

        m_nCurGuildMemberPage = nPage;

        //进入Bundle加载过程
        //UIManager.LoadItem(UIInfo.GuildMemberListItem, LoadGuildMemberItemPageChange);
        OnLoadGuildMemberItem(m_GuildMemberListItem, nPage);
    }
    
    public  void OnlyShowEnemyToggle()
    {
        m_bIsOnlyShowEnemyGuild = m_IsOnlyShowEnemyToggle.value;
        ShowGuildList();
    }
    //帮会列表翻页逻辑
    void GuildListPageChanged(int nPage)
    {
        //判断页码下限
        if (nPage < 1)
        {
            nPage = 1;
        }

        //判断页码上限
        if (nPage > m_nMaxGuildListPage)
        {
            nPage = m_nMaxGuildListPage;
        }

        //页码和当前页一致，不进行操作
        if (nPage == m_nCurGuildListPage)
        {
            return;
        }

        m_nCurGuildListPage = nPage;

        //进入Bundle加载过程
        //UIManager.LoadItem(UIInfo.GuildListItem, LoadGuildListItemPageChange);
        LoadGuildListItemPageChange(m_GuildListItem, null);
    }
    
    private void LoadGuildListItemPageChange(GameObject resItem, object param)
    {
        if (null == resItem)
        {
            return;
        }

        m_GuildPageLable.text = string.Format("{0}/{1}", m_nCurGuildListPage, m_nMaxGuildListPage);

        Utils.CleanGrid(m_GuildListGrid);

        List<GuildPreviewInfo> list = GameManager.gameManager.PlayerDataPool.guildList.GuildInfoList;
        if (null == list)
        {
            return;
        }

        //填充数据
        int nGuildListStartIndex = (m_nCurGuildListPage - 1) * m_nGuildNumPerPage;
        int nSelectCount = 0;
        for (; nGuildListStartIndex < list.Count; ++nGuildListStartIndex)
        {
            if (nSelectCount>=m_nGuildNumPerPage)
            {
                break;
            }
            if (list.Count > nGuildListStartIndex)
            {
                GuildPreviewInfo info = list[nGuildListStartIndex];
                //如果需要筛选 敌对帮会 则跳过非敌对的帮会
                if (m_bIsOnlyShowEnemyGuild && info.IsEnemyGuild == false)
                {
                    continue;
                }
                if (info.GuildGuid != GlobeVar.INVALID_GUID)
                {
                    GameObject newGuildListItem = Utils.BindObjToParent(resItem, m_GuildListGrid, nGuildListStartIndex.ToString());
                    if (null != newGuildListItem && null != newGuildListItem.GetComponent<GuildListItemLogic>())
                        newGuildListItem.GetComponent<GuildListItemLogic>().Init(info);
                    nSelectCount++;
                }
            }
        }

        m_GuildListGrid.GetComponent<UIGrid>().Reposition();
        //m_GuildListGrid.GetComponent<UITopGrid>().Recenter(true);
    }

    //所选玩家变化
    public void OnSelectMemberChange(UInt64 selectGuid)
    {
        m_SelectMemberGuid = selectGuid;
    }

    void OnGuildLevelTipsClick()
    {
        m_GuildLevelTipsWindow.SetActive(true);

        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            ShowGuildAttrAddition(1);
        }
        else
        {
            ShowGuildAttrAddition(GameManager.gameManager.PlayerDataPool.GuildInfo.GuildLevel);
        }
    }

    void OnGuildLevelTipsCloseClick()
    {
        m_GuildLevelTipsWindow.SetActive(false);
    }

    //帮会属性加成翻页按钮
    void OnBtnClickGuildRewardPgDown()
    {
        //已经到达最低等级，不执行翻页
        if (m_nCurGuildAwardPageNum == 1)
            return;

        int nLevel = m_nCurGuildAwardPageNum - 1;
        if (nLevel <= 0)
        {
            nLevel = 1;
        }

        ShowGuildAttrAddition(nLevel);
    }

    void OnBtnClickGuildRewardPgUp()
    {
        //已经到达最高等级，不执行翻页
        if (m_nCurGuildAwardPageNum >= GlobeVar.GUILD_MAX_MEMBER.Length)
            return;

        int nLevel = m_nCurGuildAwardPageNum + 1;
        if (nLevel > GlobeVar.GUILD_MAX_MEMBER.Length)
        {
            nLevel = GlobeVar.GUILD_MAX_MEMBER.Length;
        }

        ShowGuildAttrAddition(nLevel);
    }

    /*public void UpdateGuildReserveRemindNum()
    {
        if (null == m_GuildReserveRemind || null == m_GuildReserveRemindNum)
        {
            return;
        }

        if (Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            UInt64 myGuid = Singleton<ObjManager>.GetInstance().MainPlayer.GUID;
            if ( ! GameManager.gameManager.PlayerDataPool.IsGuildChief() &&
                 ! GameManager.gameManager.PlayerDataPool.IsGuildViceChief(myGuid))
            {
                m_GuildReserveRemind.SetActive(false);
                return;
            }
        }

        if (GameManager.gameManager.PlayerDataPool.GuildInfo.GetGuildReserveMemberCount() > 0)
        {
            m_GuildReserveRemind.SetActive(true);
            m_GuildReserveRemindNum.text = GameManager.gameManager.PlayerDataPool.GuildInfo.GetGuildReserveMemberCount().ToString();
        }
        else
        {
            m_GuildReserveRemind.SetActive(false);
        }
    }*/

    public void OnClickRecruitment()
    {
        //目前只有帮主可以执行招募功能
        if (!GameManager.gameManager.PlayerDataPool.IsGuildChief())
        {
            MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{3109}"), "");
            return;
        }

        // 发世界聊天消息
        if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid != GlobeVar.INVALID_GUID)
        {
            ShareTargetChooseLogic.InitGuildShare(GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid);
        }
        
    }

    void ShowGuildMail()
    {
        m_GuildMailRoot.SetActive(true);
    }

    void HideGuildMail()
    {
        m_GuildMailRoot.SetActive(false);
        m_GuildMailInput.value = "";
    }

    void SendGuildMail()
    {
        if (Singleton<ObjManager>.Instance.MainPlayer == null)
        {
            return;
        }

        if (m_GuildMailInput.value == "")
        {
            return;
        }

        int nGuildJob = GameManager.gameManager.PlayerDataPool.GuildInfo.GetMemberJob(Singleton<ObjManager>.Instance.MainPlayer.GUID);
        if (nGuildJob != (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.CHIEF &&
            nGuildJob != (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.VICE_CHIEF)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{3554}");
            return;
        }

        int nPlayerCoin = GameManager.gameManager.PlayerDataPool.Money.GetMoney_Coin();
        if (nPlayerCoin < GUILDMAIL_COSTCOIN)
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{3552}");
            return;
        }

        if (Encoding.UTF8.GetBytes(m_GuildMailInput.value).Length > 180)
        {
            // 邮件正文不能超过60个字符。
            MessageBoxLogic.OpenOKBox(1259, 1000);
            return;
        }

        if (null != Utils.GetStrFilter(m_GuildMailInput.value, (int)Games.GlobeDefine.GameDefine_Globe.STRFILTER_TYPE.STRFILTER_CHAT))
        {
            // 邮件包含非法字符
            MessageBoxLogic.OpenOKBox(1278, 1000);
            return;
        }

        CG_SEND_GUILDMAIL pak = (CG_SEND_GUILDMAIL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SEND_GUILDMAIL);
        pak.TextContent = m_GuildMailInput.value;
        pak.SendPacket();

        m_GuildMailInput.value = "";
    }

    public void UpdatePaoShangTip()
    {
        if (m_PaoShangTip)
        {
            bool bFlag = false;
            if (Singleton<ObjManager>.GetInstance().MainPlayer)
            {
                bFlag = Singleton<ObjManager>.GetInstance().MainPlayer.IsPSCanAccept();
            }

            m_PaoShangTip.SetActive(bFlag);
        }
    }

    void OnGuildRulesClick()
    {
        if (m_GuildRuleWindow.GetComponent<GuildRuleWindow>() != null)
        {
            m_GuildRuleWindow.GetComponent<GuildRuleWindow>().Show(GuildRuleWindow.GUILDRULE_TYPE.TYPE_GUILD);
        }
    }

    void OnOpenReserveClick()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }

        if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ))
        {
            GUIData.AddNotifyData("#{2513}");
            return;
        }

        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{10386}"), "", OpenReserveOK);
    }

    void OpenReserveOK()
    {
        CG_GUILD_JOINREQ pak = (CG_GUILD_JOINREQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_JOINREQ);
        pak.NeedReserve = 1;
        pak.SendPacket();
    }

    void OnCloseReserveClick()
    {
        if (false == GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }

        if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_CHANGE_JOINREQ))
        {
            GUIData.AddNotifyData("#{2513}");
            return;
        }

        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{10385}"), "", CloseReserveOK);
    }

    void CloseReserveOK()
    {
        CG_GUILD_JOINREQ pak = (CG_GUILD_JOINREQ)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_JOINREQ);
        pak.NeedReserve = 0;
        pak.SendPacket();
    }

    public void HandleNeedReserve()
    {
        if (m_GuildReserveWindow.activeInHierarchy)
        {
            UpdateReserveSprite();
        }
    }

    void UpdateReserveSprite()
    {
        //m_OpenReserveSprite.alpha = GameManager.gameManager.PlayerDataPool.GuildInfo.NeedReserve ? 1 : 0.3f;
        //m_CloseReserveSprite.alpha = GameManager.gameManager.PlayerDataPool.GuildInfo.NeedReserve ? 0.3f : 1;
        if (m_OpenReserveSprite != null && m_OpenReserveSprite.transform.parent != null)
        {
            m_OpenReserveSprite.transform.parent.gameObject.SetActive(GameManager.gameManager.PlayerDataPool.GuildInfo.NeedReserve);
        }
        if (m_CloseReserveSprite != null && m_CloseReserveSprite.transform.parent != null)
        {
            m_CloseReserveSprite.transform.parent.gameObject.SetActive(!GameManager.gameManager.PlayerDataPool.GuildInfo.NeedReserve);
        }
    }

    public void HandleGuildCreate()
    {
        CloseOrOpenCreateGuildGO(true);
        m_GuildPreInfoTabButton.SetActive(true);
        m_GuildInfoTabButton.gameObject.SetActive(true);
        m_GuildWarInfoTabButton.gameObject.SetActive(false);
        m_GuildShopTabButton.gameObject.SetActive(true);
        m_GuildActivityTabButton.gameObject.SetActive(true);
        m_JoinGuildTabButton.gameObject.SetActive(false);
        //m_SearchGuildTabButton.gameObject.SetActive(false);
        m_GuildTabController.SortTabGrid();

        //向服务器申请更新好友列表
        if (null != m_GuildTabController)
        {
            m_GuildTabController.ChangeTab("03GuildInfoButton");
        }

        m_GuildMailRoot.SetActive(false);

        UpdatePaoShangTip(); // 更新下 跑商提示
    }

    void OnReserveClick()
    {
        //m_GuildTabController.ClearTabChoose();
        //m_GuildReserveWindow.SetActive(true);
        //m_TabContentWindow.SetActive(false);
        ShowGuildReserveMemberList();
        UpdateReserveSprite();
    }

    void OnCloseClick()
    {
        UIManager.CloseUI(UIInfo.GuildRoot);
    }

    public void UpdateGuildListCurPage()
    {
        GuildListItemLogic[] aItem = m_GuildListGrid.GetComponentsInChildren<GuildListItemLogic>();
        for (int i = 0; i < aItem.Length; i++ )
        {
            aItem[i].UpdateGuildJoinButton();
        }
    }

    void OnGuildAuthorityClick()
    {
        m_GuildAuthorityWindow.SetActive(true);
    }

    void OnGuildHistoryClick()
    {
        m_GuildHistoryWindow.SetActive(true);
    }

    void OnGuildInviteClick()
    {
        m_GuildInviteFriendWindow.SetActive(true);
    }
    void AKeyToJoin()
    {
        CG_GUILD_JOIN msg = (CG_GUILD_JOIN)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_JOIN);
        msg.GuildGuid = GlobeVar.INVALID_GUID;
        msg.SendPacket();
    }
}
