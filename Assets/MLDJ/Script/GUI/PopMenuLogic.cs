//********************************************************************
// 文件名: PopMenuLogic.cs
// 描述: 点击菜单脚本
// 作者: WangZhe
//********************************************************************

using UnityEngine;
using System.Collections;
using GCGame;
using System;
using Games.GlobeDefine;
using GCGame.Table;
using System.Collections.Generic;

public class PopMenuLogic : MonoBehaviour {

    private static PopMenuLogic m_Instance;
    public static PopMenuLogic Instance()
    {
        return m_Instance;
    }

    public GameObject m_PopMenuOffset;              // 菜单位移
    public GameObject m_MenuItemGrid;                // 菜单项格子
    private int m_MenuItemsNum;                           // 菜单项数量
    private UInt64 m_PopMenuSelectGuid;             //弹出菜单的目标GUID，菜单弹出时赋值，这样可以在一些通用接口中直接调用
    private string m_PopMenuSelectName;             //弹出菜单的目标姓名，菜单弹出时赋值，这样可以在一些通用接口中直接调用

    private GameObject m_resMenuItem = null;

    void Awake()
    {
        m_Instance = this;
        m_PopMenuSelectGuid = GlobeVar.INVALID_GUID;
        m_PopMenuSelectName = "";
    }
	// Use this for initialization
	void Start () {
        m_MenuItemsNum = 0;
	}


    void OnDestroy()
    {
        m_Instance = null;
    }

    /// <summary>
    /// 显示菜单
    /// </summary>
    /// <param name="strMenuName">菜单名 主要用于区分不同菜单的定制</param>
    /// <param name="vecPos">菜单位置</param>
    public static void ShowMenu(string strMenuName, GameObject destGameObject)
    {
        List<object> initParams = new List<object>();
        initParams.Add(strMenuName);
        initParams.Add(destGameObject);
        UIManager.ShowUI(UIInfo.PopMenuRoot, PopMenuLogic.ShowUIOver, initParams);
    }

    static void ShowUIOver(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            List<object> initParams = param as List<object>;
            if (PopMenuLogic.Instance() != null && initParams != null && initParams.Count > 1)
            {
                PopMenuLogic.Instance().ShowPopMenu((string)initParams[0], (GameObject)initParams[1]);
            }
        }
    }

    void ShowPopMenu(string strMenuName, GameObject destGameObject)
    {
        m_PopMenuOffset.transform.localPosition = transform.parent.InverseTransformPoint(destGameObject.transform.position);

        List<object> initParams = new List<object>();
        initParams.Add(strMenuName);
        UIManager.LoadItem(UIInfo.PopMenuItem, LoadItemOver, initParams); 
    }

    void LoadItemOver(GameObject resObj, object param)
    {
        if (resObj == null)
        {
            return;
        }

        m_resMenuItem = resObj;

        List<object> initParams = param as List<object>;
        if (initParams == null)
        {
            return;
        }
        m_MenuItemsNum = 0;
        string strMenuName = (string)initParams[0];

        if (strMenuName == "TargetFramePopMenu")
        {
            ShowTargetFramePopMenu();
        }
        if (strMenuName == "GuildMemberPopMenu")
        {
            ShowGuildMemberPopMenu();
        }

        if (m_MenuItemsNum > 0)
        {
            m_MenuItemGrid.GetComponent<UIGrid>().repositionNow = true;
        }
    }

    /// <summary>
    /// 增加菜单项
    /// </summary>
    /// <param name="ItemId">菜单项ID 主要用于区分命名GameObject 目前无其他作用</param>
    /// <param name="strLabel">菜单项文字</param>
    /// <param name="funcItemOnClicked">菜单项响应函数</param>
    void AddMenuItem(int ItemId, string strLabel, PopMenuItemLogic.MenuItemOnClicked funcItemOnClicked)
    {
        if (null == m_resMenuItem)
            return;

        GameObject newMenuItem = Utils.BindObjToParent(m_resMenuItem, m_MenuItemGrid, ItemId.ToString());
        if (null != newMenuItem && null != newMenuItem.GetComponent<PopMenuItemLogic>())
        {
            newMenuItem.GetComponent<PopMenuItemLogic>().InitMenuItem(strLabel, funcItemOnClicked);
            m_MenuItemsNum++;
        }
    }

    //////////////////////////////////////////////////////////////////////////
    //PopMenu下的一些通用方法，只要在弹出PopMenu的时候记录了弹出目标的Guid与Name即可
    //////////////////////////////////////////////////////////////////////////
    //加好友
    void PopMenuAddFriend()
    {
        //如果非玩家，则不显示
        if (GlobeVar.INVALID_GUID == m_PopMenuSelectGuid)
        {
            return;
        }

		if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
		{
			return;
		}

        //如果目标是自己也不发送加好友
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.FriendList.IsExist(m_PopMenuSelectGuid))
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2394}");
            return;
        }

       /* if (GameManager.gameManager.PlayerDataPool.BlackList.IsExist(m_PopMenuSelectGuid))
        {
            Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{4723}");
            return;
        }

*/

        CG_ADDFRIEND msg = (CG_ADDFRIEND)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ADDFRIEND);
        msg.Guid = m_PopMenuSelectGuid;
        msg.SendPacket();

        Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2906}");
    }

    //私聊
    void PopMenuChat()
    {
        //如果非玩家，则无效
        if (GlobeVar.INVALID_GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        //如果目标是自己也不发送加好友
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        //未打开过则创建
        if (null == ChatInfoLogic.Instance())
        {
            UIManager.ShowUI(UIInfo.ChatInfoRoot, ShowChatInfoRootOver);
        }
    }

    void ShowChatInfoRootOver(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            //发起私聊
            if (null != ChatInfoLogic.Instance())
            {
                ChatInfoLogic.Instance().BeginChat(m_PopMenuSelectGuid, m_PopMenuSelectName);
            }
        }
    }

    //邀请入队
    void PopMenuInviteTeam()
    {
        //如果非玩家，则无效
        if (GlobeVar.INVALID_GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        //如果目标是自己也不发送加好友
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        //如果有队伍，则判断下队伍是否已满,是否已在队伍中
        if (GameManager.gameManager.PlayerDataPool.TeamInfo != null && GlobeVar.INVALID_ID != GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            TeamMember[] members = GameManager.gameManager.PlayerDataPool.TeamInfo.teamMember;
            foreach (TeamMember tminfo in members)
            {
                if (tminfo != null && tminfo.Guid == m_PopMenuSelectGuid)
                {
                    GUIData.AddNotifyData2Client(false, "#{2410}");
                    return;
                }
            }
            if (GameManager.gameManager.PlayerDataPool.TeamInfo.IsFull())
            {
                return;
            }
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteTeam(m_PopMenuSelectGuid);
    }

    //申请加队
    void PopMeunJoinTeam()
    {
        //如果非玩家，则则无效
        if (GlobeVar.INVALID_GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        //如果目标是自己也不发送加好友
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }
        /*ReqJoinTeam会检查
        if (GlobeVar.INVALID_ID != GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            return;
        }*/

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqJoinTeam(m_PopMenuSelectGuid);
    }

    //切磋
    void PopMenuDuel()
    {
        //如果非玩家，则无效
        if (GlobeVar.INVALID_GUID == m_PopMenuSelectGuid)
        {
            return;
        }
        //如果目标是自己也不发送
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqDuel(m_PopMenuSelectGuid);
    }

    //查看属性
    void PopMenuView()
    {
        //如果非玩家，则无效
        if (GlobeVar.INVALID_GUID == m_PopMenuSelectGuid)
        {
            return;
        }
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        //如果目标是自己也不发送
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqViewOtherPlayer(m_PopMenuSelectGuid, OtherRoleViewLogic.OPEN_TYPE.OPEN_TYPE_POPMENU);
    }
    //查看寄售行信息
    void PopMenuConsignSaleInfo()
    {
        UIManager.ShowUI(UIInfo.ConsignSaleRoot, BuyItemOpenConsignSale);
    }

    //送花
    void PopMenuSendFlower()
    {
        FlowerEggWindow.ShowFlowerEgg(m_PopMenuSelectGuid, FlowerEggWindow.ShowType.FLOWER);
    }

      //砸蛋
    void PopMenuSendEgg()
    {
        FlowerEggWindow.ShowFlowerEgg(m_PopMenuSelectGuid, FlowerEggWindow.ShowType.EGG);
    }

    //邀请入帮
    void PopMenuInviteGuild()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        if (GlobeVar.INVALID_GUID == GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid)
        {
            //你当前未加入帮会，无法邀请。
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{2686}");
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqInviteGuild(m_PopMenuSelectGuid);
    }

    //申请加帮派
    void PopMeunJoinGuild()
    {
        //如果非玩家，则则无效
        if (GlobeVar.INVALID_GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        //如果目标是自己也不发送加帮派
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == m_PopMenuSelectGuid)
        {
            return;
        }

        if (GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid != GlobeVar.INVALID_GUID)
        {
            GuildMember mySelfGuildInfo = GameManager.gameManager.PlayerDataPool.GuildInfo.GetMainPlayerGuildInfo();
            if (null != mySelfGuildInfo)
            {
                if (mySelfGuildInfo.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
                {
                    //只能同时申请一个帮会，将替换原来的请求，是否继续？
                    string dicStr = StrDictionary.GetClientDictionaryString("#{1861}");
                    MessageBoxLogic.OpenOKCancelBox(dicStr, "", AgreeChangeJoinGuildRequest, null);
                    return;
                }
            }
            //你当前已经有帮会，无法申请。
            Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{3094}");
            return;
        }

        Singleton<ObjManager>.GetInstance().MainPlayer.ReqJoinOtherPlayerGuild(m_PopMenuSelectGuid, m_PopMenuSelectName);
    }

    void AgreeChangeJoinGuildRequest()
    {
        if (Singleton<ObjManager>.GetInstance().MainPlayer != null)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqJoinOtherPlayerGuild(m_PopMenuSelectGuid, m_PopMenuSelectName);
        }
    }

    void BuyItemOpenConsignSale(bool bSuccess, object param)
    {
        if (bSuccess)
        {
            if (ConsignSaleLogic.Instance() != null)
            {
                ConsignSaleLogic.Instance().SearchForAskBuy(m_PopMenuSelectName);
            }
        }
    }
 
    //////////////////////////////////////////////////////////////////////////
    //目标头像PopMenu点击相关函数以及其专属菜单项函数
    //////////////////////////////////////////////////////////////////////////
    void ShowTargetFramePopMenu()
    {
        //如果非玩家，则无效
        if (null == TargetFrameLogic.Instance() || GlobeVar.INVALID_GUID == TargetFrameLogic.Instance().TargetGuid)
        {
            return;
        }

        bool isteammate = false;//是否对友
        TeamMember[] member = GameManager.gameManager.PlayerDataPool.TeamInfo.teamMember;
        if (m_PopMenuSelectGuid != GlobeVar.INVALID_GUID)
        {
            for (int i = 0; i < member.Length; ++i)
            {
                //如果队员的GUID为非空，并且和主角不一样，则显示
                if (member[i].Guid == m_PopMenuSelectGuid)
                {
                    isteammate = true;
                    break;
                }
            }
        }
        //如果目标是自己也不发送加好友
        if (Singleton<ObjManager>.GetInstance().MainPlayer.GUID == TargetFrameLogic.Instance().TargetGuid)
        {
            return;
        }

        m_PopMenuSelectGuid = TargetFrameLogic.Instance().TargetGuid;
        m_PopMenuSelectName = TargetFrameLogic.Instance().StrTargetName;

        //添加菜单项.部分菜单暂时隐藏
        
        AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1299}"), PopMenuAddFriend);    //加好友
        //AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1300}"), PopMenuChat);         //私聊
        if (!isteammate)
        {
            AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1301}"), PopMenuInviteTeam);   //邀请入队
            AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1302}"), PopMeunJoinTeam);     //申请入队
        }
        //AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1657}"), PopMenuDuel);         //申请切磋
        AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{2181}"), PopMenuView);         //申请查看信息
        //AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{2554}"), PopMenuConsignSaleInfo);//申请查看寄售信息
        //AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1156}"), PopMenuInviteGuild);     //邀请入帮
        //AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{3093}"), PopMeunJoinGuild);     //申请入帮
        if (GlobalData.IsOpenCharmRankFlag)
        {
            //AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{5298}"), PopMenuSendFlower);     ////送花
            //AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{5299}"), PopMenuSendEgg);     //砸蛋
        }
        
    }
    
    //////////////////////////////////////////////////////////////////////////
    //帮会会员PopMenu以及其专属菜单项函数
    //////////////////////////////////////////////////////////////////////////
    void ShowGuildMemberPopMenu()
    {
        if (null == GuildWindow.Instance() || GlobeVar.INVALID_GUID == GuildWindow.Instance().SelectMemberGuid)
        {
            return;
        }

        if (!GameManager.gameManager.PlayerDataPool.IsHaveGuild())
        {
            return;
        }

        Guild info = GameManager.gameManager.PlayerDataPool.GuildInfo;

        //在帮会数据中找到该帮众
        GuildMember member;
        if (info.GuildMemberList.TryGetValue(GuildWindow.Instance().SelectMemberGuid, out member))
        {
            if (!member.IsValid())
            {
                return;
            }
        }
        else
        {
            return;
        }

        //在帮会数据中找到本人
        GuildMember mySelfGuildInfo;
        if (info.GuildMemberList.TryGetValue(Singleton<ObjManager>.GetInstance().MainPlayer.GUID, out mySelfGuildInfo))
        {
            if (!mySelfGuildInfo.IsValid())
            {
                return;
            }
        }
        else
        {
            return;
        }

        //如果本人为预备役会员,不弹出popmenu
        if (mySelfGuildInfo.Job == (int)Games.GlobeDefine.GameDefine_Globe.GUILD_JOB.RESERVE)
        {
            return;
        }

        m_PopMenuSelectGuid = member.Guid;
        m_PopMenuSelectName = member.MemberName;

        AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1299}"), PopMenuAddFriend);             //加好友
        AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1300}"), PopMenuChat);                  //私聊
        AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1766}"), PopMenuView);                  //查看信息
        AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1301}"), PopMenuInviteTeam);            //邀请入队
        AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1302}"), PopMeunJoinTeam);              //申请入队
        if (info.IsHaveAuthority(mySelfGuildInfo.Job, (int)Games.GlobeDefine.GameDefine_Globe.GUILD_ROUTINE.GUILD_ROUTINE_KICK))
        {
            AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{1770}"), GuildMemberExpel);             //逐出
        }
        if (GlobalData.IsOpenCharmRankFlag)
        {
            AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{5298}"), PopMenuSendFlower);     //送花
            AddMenuItem(m_MenuItemsNum, StrDictionary.GetClientDictionaryString("#{5299}"), PopMenuSendEgg);     //砸鸡蛋
        }
    }

    //逐出
    void GuildMemberExpel()
    {
        if (null != Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            Singleton<ObjManager>.GetInstance().MainPlayer.ReqKickGuildMember(m_PopMenuSelectGuid);
        }
    }

    void ClosePopMenu()
    {
        UIManager.CloseUI(UIInfo.PopMenuRoot);
    }
}
