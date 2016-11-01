using System.Runtime.InteropServices;
using UnityEngine;
using System.Collections;
using GCGame.Table;
using Games.LogicObj;
using Games.GlobeDefine;
using Module.Log;

public class GuildPaoShang : MonoBehaviour {

    public const int MaxNumJobInfo = 6; // 抢劫信息数量上限
    
    public UILabel[] m_RobInfo = new UILabel[MaxNumJobInfo]; // 抢劫信息 
    public UILabel m_AssignInfo;    //帮主可开启总次数
    public UILabel m_AcceptInfo;     // 帮会成员可接取次数
    //public UIToggle m_AutoOpenFlag; // 帮主自动开启开关
    public UILabel m_GuildWealth;   // 帮会财富
    public GameObject m_OpenBt;         //开启帮会按钮
    public UILabel m_RobPercentumText;  // 劫持百分比
    public UILabel m_MemTimesOneDayText;    // 个人接取次数显示
    
    public GameObject m_MakeWindowRoot;
    public GameObject m_MakeWindowButton;
   
    private static GuildPaoShang m_Instance = null;
    public static GuildPaoShang Instance()
    {
        return m_Instance;
    }
	// Use this for initialization
	void Start ()
	{
        CleanUp();
        ShowMakeGuildItemButton();
        m_OpenBt.SetActive(IsGuildChief());
        //m_AutoOpenFlag.gameObject.SetActive(IsGuildChief());
        UpdateMemTimesOneDay();
	}

    private void Awake()
    {
        m_Instance = this;
    }

    void OnEnable()
    {
        // 发个包 请求跑商相关数据
        AskGuildPaoShangInfo();
    }

    public void SetAutoOpen()
    {
        /*if (GameManager.gameManager.PlayerDataPool == null)
        {
            return;
        }
        if (GameManager.gameManager.PlayerDataPool.GuildInfo == null)
        {
            return;
        }
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (_mainPlayer ==null)
        {
            return;
        }
        int nJobLevel = GameManager.gameManager.PlayerDataPool.GuildInfo.GetMemberJob(_mainPlayer.GUID);
        int nGuildLevel = GameManager.gameManager.PlayerDataPool.GuildInfo.GuildLevel;
        if (nJobLevel != (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.CHIEF)
        {
            //m_AutoOpenFlag.value = false;
            _mainPlayer.SendNoticMsg(false, "#{3939}");
           return ;
        }
        if (nGuildLevel<2)
        {
            //m_AutoOpenFlag.value = false;
            _mainPlayer.SendNoticMsg(false, "#{3938}");
            return ;
        }
       
        CG_ASK_SETAUTOASSIGNPSTIMES setpak = (CG_ASK_SETAUTOASSIGNPSTIMES)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_SETAUTOASSIGNPSTIMES);
        if (m_AutoOpenFlag.value)
        {
            setpak.IsAutoAssign = 1;
        }
        else
        {
            setpak.IsAutoAssign = 0;
        }
        setpak.SendPacket();   */     
    }
    void AskGuildPaoShangInfo()
    {
        CG_ASK_PAOSHANGINFO askpak =(CG_ASK_PAOSHANGINFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_PAOSHANGINFO);
        askpak.Noparam = 0;
        askpak.SendPacket();
    }
    void OnDisable()
    {
    
    }
    void OnDestroy()
    {
        m_Instance = null;
    }
    void CleanUp()
    {
        CleanUpRobInfo();
        m_RobPercentumText.text = "0/0";
        m_AssignInfo.text = "0/0";
        m_AcceptInfo.text = "0";
        //m_AutoOpenFlag.value = false;
        m_GuildWealth.text = "0";
        m_MemTimesOneDayText.text = "0/0";
    }
    void CleanUpRobInfo()
    {
        for (int i = 0; i < m_RobInfo.Length; i++)
        {
            if (m_RobInfo[i])
            {
                m_RobInfo[i].text = "";
            }
        }
    }

    // 更新界面
    public  void UpdatePaoShangInfo(GC_RET_PAOSHANGINFO retPak)
    {
        //个人劫持信息
        m_RobPercentumText.text = retPak.CurRobCoin.ToString() + "/" + retPak.MaxRobCoin.ToString();

        //跑商信息
        CleanUpRobInfo();
        int vaildIndex = 0;
        for (int i = retPak.robberNameCount-1; i >=0; i--)
        {
            if (retPak.robberGuildNameCount <= i)
            {
                continue;
            }
            string RobberName = retPak.GetRobberName(i);
            string RobberGuildName = retPak.GetRobberGuildName(i);
            if (RobberName == "")
            {
                continue;
            }
            if (vaildIndex>=m_RobInfo.Length)
            {
                continue;
            }
            if (m_RobInfo[vaildIndex] == null)
            {
                continue;
            }
            if (RobberGuildName == "")
            {
                //玩家{0}截杀本帮跑商成员
                m_RobInfo[vaildIndex++].text = StrDictionary.GetClientDictionaryString("#{3952}", RobberName);
            }
            else
            {
                //{0}帮会的玩家{1}截杀本帮跑商成员
                m_RobInfo[vaildIndex++].text = StrDictionary.GetClientDictionaryString("#{3951}", RobberGuildName, RobberName);
            }
        }
        //可以分配信息
        m_AssignInfo.text = retPak.CurAssignTimes.ToString()+"/"+retPak.MaxAssignTimes.ToString();
        //可以接取的次数
        m_AcceptInfo.text = retPak.CurCanAcceptTimes.ToString();
        //m_AutoOpenFlag.value = (retPak.IsAutoAssign==1);
        m_GuildWealth.text = retPak.WealthNum.ToString();
    }

    // 帮主开启按钮
    void ButtonOpen()
    {
        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        GuildMember mainPlayerGuildInfo = info.GetMainPlayerGuildInfo();
        if (false == mainPlayerGuildInfo.IsValid())
        {
            return;
        }

        if (false == info.IsHaveAuthority(mainPlayerGuildInfo.Job, (int)GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_OPEN_ACTIVITY))
        {
            return;
        }
        if (info.GuildLevel < 2)
        {
            GUIData.AddNotifyData("#{3938}");
            return;
        }

        CG_ASSIGN_PAOSHANG_TIME assignpak = (CG_ASSIGN_PAOSHANG_TIME)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASSIGN_PAOSHANG_TIME);
        assignpak.Nopara = 0;
        assignpak.SendPacket();
    }

    // 立即前往
    void ButtonGo()
    {
        Tab_MissionDictionary DicTab = TableManager.GetMissionDictionaryByID(GlobeVar.PAOSHANG_MISSIONID_H, 0);
        if (DicTab == null)
        {
			LogModule.ErrorLog("Can not find missionDictionary {0}", GlobeVar.PAOSHANG_MISSIONID_H);
            return;
        }

        // 自动寻路
        AutoSearchPoint point = new AutoSearchPoint(DicTab.AccepteNpcSceneID, DicTab.AccepteNpcPosX, DicTab.AccepteNpcPosZ);
        if (GameManager.gameManager && GameManager.gameManager.AutoSearch)
        {
            string sAutoSearchTargetName = string.Empty;
            Tab_RoleBaseAttr RoleBase = TableManager.GetRoleBaseAttrByID(DicTab.AcceptNpcDataID, 0);
            if (null != RoleBase)
            {
                sAutoSearchTargetName = RoleBase.Name;
            }
			else
			{
				LogModule.ErrorLog("Can not find roleBaseAttr {0}", DicTab.AcceptNpcDataID);
			}            
			GameManager.gameManager.AutoSearch.ProcessAutoSearch(point, sAutoSearchTargetName, false);
        }
    }

    void ShowMakeGuildItemButton()
    {
        //..
        /*bool isChief = IsGuildChief();
        if (m_MakeWindowButton != null)
        {
            m_MakeWindowButton.SetActive(isChief);
        }*/
    }

    bool IsGuildChief()
    {
        if (GameManager.gameManager.PlayerDataPool != null)
        {
            if (GameManager.gameManager.PlayerDataPool.GuildInfo != null)
            {
                if (Singleton<ObjManager>.Instance.MainPlayer != null)
                {
                    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
                    int nJobLevel = GameManager.gameManager.PlayerDataPool.GuildInfo.GetMemberJob(_mainPlayer.GUID);
                    return (nJobLevel == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.CHIEF);
                }
            }
        }

        return false;
    }

    // 生产腰带
    void ButtonProduces()
    {
        /*if (m_MakeWindowRoot != null && IsGuildChief())
        {
            GUIData.delGuildShopItemMakeListShow += ShowProcdueUI;
            CG_GUILD_SHOP_ITEM_MAKE_LIST packet = (CG_GUILD_SHOP_ITEM_MAKE_LIST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GUILD_SHOP_ITEM_MAKE_LIST);
            packet.Flag = 0;
            packet.SendPacket();
        }*/
    }

    public void OnMakeSucSetWealth(int val)
    {
        if (m_GuildWealth != null)
        {
            m_GuildWealth.text = val.ToString();
        }
    }

    void ShowProcdueUI()
    {
        if (m_MakeWindowRoot != null)
        {
            m_MakeWindowRoot.SetActive(true);
        }
    }

    void OnProduceClose()
    {
        if (m_MakeWindowRoot != null )
        {
            m_MakeWindowRoot.SetActive(false);
        }
    }

    public void UpdateMemTimesOneDay()
    {
        if (GameManager.gameManager.PlayerDataPool.GuildInfo != null)
        {
            int nGuildLvl = GameManager.gameManager.PlayerDataPool.GuildInfo.GuildLevel;
            Tab_GuildPaoShang PSTab = TableManager.GetGuildPaoShangByID(nGuildLvl, 0);
			if (PSTab == null)
			{
				LogModule.ErrorLog("Can not find guidPaoShang {0}", nGuildLvl);
			}
            else if (m_MemTimesOneDayText)
            {
                int nPSCount = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_PAOSHANG_GOTTEN_NUM);
                int nLeftCount = PSTab.MemMaxTimesOneDay - nPSCount;
                if (nLeftCount < 0)
                {
                    nLeftCount = 0;
                }
                m_MemTimesOneDayText.text = (nLeftCount) + "/" + PSTab.MemMaxTimesOneDay;
            }
        }
    }
}
