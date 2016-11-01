using UnityEngine;
using System.Collections;
using GCGame.Table;
using Module.Log;
using Games.LogicObj;
using Games.GlobeDefine;
using System;
using GCGame;
using System.Collections.Generic;
public class VillainWindow : MonoBehaviour {

    public UILabel m_LableTime;
    public UILabel m_LableLevel;

    public UILabel m_LableNormal;
    public UILabel m_LableSuper;
    public UISprite m_ItemSprite;
    public UILabel m_ButtonAutoTeamLabel;

    public UILabel m_localTimeLabel;

    private static int RewardItemID = 59252;
    private static int m_nMaxNormalSceneNum = 3;
    private  string m_NormalScene1 = "";
    private  string m_NormalScene2 = "";
    private  string m_NormalScene3 = "";
    private  string m_SuperScene = "";

    public GameObject m_ChangSceneUI;
    public UILabel[] m_SceneLabel = new UILabel[m_nMaxNormalSceneNum];


    void Start()
    {
        InvokeRepeating("AutoRefresh", 10.0f, 10.0f);
    }


    void OnEnable()
    {
        VillainData.delUpdateVillain += UpdateVillainState;
        Init();
        
        ShowCurrentTime(true);
        StartCoroutine(ShowServerTime());
    }

    void OnDisable()
    {
        VillainData.delUpdateVillain -= UpdateVillainState;
    }

    /// <summary>
    /// 
    /// </summary>
    void Init()
    {
        m_ChangSceneUI.SetActive(false);
        m_LableNormal.text = "";
        m_LableSuper.text = "";
        m_LableLevel.text = StrDictionary.GetClientDictionaryString("#{4975}", VillainData.m_nLevelLimit);
        UpdateActivityTime();
        Tab_CommonItem commonItem = TableManager.GetCommonItemByID(RewardItemID, 0);
        if (commonItem != null)
        {
            m_ItemSprite.spriteName = commonItem.Icon.ToString(); 
        }
        OnButtonAutoTeamLabel();
        AskVillainInfo(true);
    }

    IEnumerator ShowServerTime()
    {
        while (true)
        {
            yield return new WaitForSeconds(1);
            ShowCurrentTime();
        }
    }

    /// <summary>
    /// 显示当前时间
    /// </summary>
    private void ShowCurrentTime(bool isUpdate = false)
    {
        if (isUpdate)
        {
            m_localTimeLabel.text = string.Empty;
        }

        if (m_localTimeLabel != null && GlobalData.CurerntLocalDateTime != null)
        {
            m_localTimeLabel.text = GlobalData.CurerntLocalDateTime.ToString("HH:mm:ss");
        }
    }

    public void UpdateActivityTime()
    {
        DateTime curTime = Utils.GetServerDateTime();
        //开始时间
        DateTime BeginTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainStartTimeOne % 10000) / 100, GlobalData.VillainStartTimeOne % 100, 0);
       
        //结束时间
        DateTime EndTimeOne = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainEndTimeOne % 10000) / 100, GlobalData.VillainEndTimeOne % 100, 0);
        

        DateTime BeginTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainStartTimeTwo % 10000) / 100, GlobalData.VillainStartTimeTwo % 100, 0);
        
        //结束时间
        DateTime EndTimeTwo = new DateTime(curTime.Year, curTime.Month, curTime.Day, (GlobalData.VillainEndTimeTwo % 10000) / 100, GlobalData.VillainEndTimeTwo % 100, 0);
       

        string StrTime = StrDictionary.GetClientDictionaryString("#{4839}", BeginTimeOne.ToString("HH:mm"), EndTimeOne.ToString("HH:mm"),
            BeginTimeTwo.ToString("HH:mm"), EndTimeTwo.ToString("HH:mm"));

        if (m_LableTime != null)
        {
            m_LableTime.text = StrTime;
        }
    }

    /// <summary>
    /// 
    /// </summary>
    public void UpdateVillainState()
    {
        if (VillainData.m_VillainInfo == null)
        {
            LogModule.ErrorLog("UpdateVillainState VillainData.m_VillainInfo  is null");
            return;
        }
        if (-1 == VillainData.m_VillainInfo.Round)
        {
            m_LableNormal.text = "";
            m_LableSuper.text = "";
            return;
        }
        m_NormalScene1 = "";
        m_NormalScene2 = "";
        m_NormalScene3 = "";
        for (int i = 0; i < m_nMaxNormalSceneNum; i++ )
        {
            if (m_SceneLabel.Length > i)
            {
                m_SceneLabel[i].text = "";
            }
        }
        for (int i = 0; i < VillainData.m_VillainInfo.m_NormalSceneClassList.Count && i < m_nMaxNormalSceneNum; i++)
        {
            Tab_SceneClass TabScene = TableManager.GetSceneClassByID(VillainData.m_VillainInfo.m_NormalSceneClassList[i], 0);
            if (null == TabScene)
            {
                continue;
            }
            if (1 == i)
            {
                m_NormalScene1 = TabScene.Name;
            }
            else if (2 == i)
            {
                m_NormalScene2 = TabScene.Name;
            }
            else
            {
                m_NormalScene3 = TabScene.Name;
            }

            // 传送场景文字
            m_SceneLabel[i].text = TabScene.Name;     
        }
      
        if ( VillainData.m_VillainInfo.NormalVillainCount <= 0)
        {
            m_LableNormal.text = StrDictionary.GetClientDictionaryString("#{4976}");
        }
        else
        {
            m_LableNormal.text = StrDictionary.GetClientDictionaryString("#{4941}",m_NormalScene1, m_NormalScene2, m_NormalScene3);
        }

        if ( VillainData.m_VillainInfo.SuperVillainCount <= 0)
        {
            m_LableSuper.text = StrDictionary.GetClientDictionaryString("#{4977}");
        }
        else
        {
            m_SuperScene = "";
            if (VillainData.m_VillainInfo.m_SuperSceneClassList != null && VillainData.m_VillainInfo.m_SuperSceneClassList.Count > 0)
            {
                 Tab_SceneClass TabScene = TableManager.GetSceneClassByID(VillainData.m_VillainInfo.m_SuperSceneClassList[0], 0);
                if (TabScene != null)
                {
                    m_SuperScene  = TabScene.Name;
                }
            }
            m_LableSuper.text = StrDictionary.GetClientDictionaryString("#{4942}", m_SuperScene);
        }
    }

    void AutoRefresh()
    {
        AskVillainInfo(false);
    }

    public void AskVillainInfo(bool bFristAskOpenWindow)
   {
       if (bFristAskOpenWindow)
        {
            CG_ASK_VILLAIN_INFO packet = (CG_ASK_VILLAIN_INFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_VILLAIN_INFO);
            packet.Ndata = 1;
            packet.SendPacket();
        }
       else
       {
           if (GlobalData.IsOpenVillain)
           {
               CG_ASK_VILLAIN_INFO packet = (CG_ASK_VILLAIN_INFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_VILLAIN_INFO);
               packet.Ndata = 1;
               packet.SendPacket();
           }
       }
   }

    //召唤队友
    void OnClickZhaoHuan()
   {
       Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
       if (mainPlayer != null)
       {
           if (false == mainPlayer.IsTeamLeader())
           {
               mainPlayer.SendNoticMsg(false, "#{4725}");
               return;
           }
           mainPlayer.ReqCallMember();
       }
   }

    void OnClickGenSui()
    {
        //Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        //if (mainPlayer == null)
        //{
        //    return;
        //}

        //// 没队伍
        //if (GlobeVar.INVALID_ID == GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        //{
        //    return;
        //}

        //if (mainPlayer.IsTeamLeader())  // 队长
        //{
        //    // 组队跟随状态
        //    if (false == mainPlayer.IsInTeamFollow)
        //    {
        //        mainPlayer.ReqTeamFollow();// 请求跟随
        //    }
        //    else
        //    {
        //        // 解散
        //        mainPlayer.AskLeaveTeamFollow();
        //    }
        //}
        //else// 队员
        //{
        //    // 离开跟随
        //    mainPlayer.AskLeaveTeamFollow();
        //}
    }

    void OnClickZuiDui()
    {
        if (GameManager.gameManager.PlayerDataPool.AutoTeamState == true)
        {
            CG_ASK_AUTOTEAM packet = (CG_ASK_AUTOTEAM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_AUTOTEAM);
            packet.SetSceneClassID(-1);
            packet.SetDifficulty(-1);
            packet.SendPacket();
        }
        else
        {
            CG_ASK_AUTOTEAM packet = (CG_ASK_AUTOTEAM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_AUTOTEAM);
            //packet.SetSceneClassID(CopySceneId);
            //packet.SetDifficulty(Diffcult);
            packet.SetSceneClassID((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FOURVILLAIN);
            packet.SetDifficulty(1);
            packet.SendPacket();
        }
    }

    public void OnButtonAutoTeamLabel()
    {
        string text = StrDictionary.GetClientDictionaryString("#{2956}");
        if (GameManager.gameManager.PlayerDataPool.AutoTeamState == true)
        {
            text = StrDictionary.GetClientDictionaryString("#{2957}");
        }
        m_ButtonAutoTeamLabel.text = text;
    }

    void OnTeamFollowChangSceneButton()
    {
        // 隐藏下 就不判断了
        if (m_ChangSceneUI.activeInHierarchy == true)
        {
            m_ChangSceneUI.SetActive(false);
            return;
        }


        if (Singleton<ObjManager>.Instance == null)
        {
            return;
        }

        Obj_MainPlayer mainPlayer = Singleton<ObjManager>.Instance.MainPlayer;
        if (mainPlayer == null)
        {
            return;
        }

        // 简单的条件判断
        if (false == GlobalData.IsVillainOpen())
        {
            // 提示
            mainPlayer.SendNoticMsg(false, "#{5242}");
            return;
        }

        // 没队伍
        if (GlobeVar.INVALID_ID == GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID)
        {
            // 提示
            mainPlayer.SendNoticMsg(false, "#{5244}");
            return;
        }

        if (false == mainPlayer.IsTeamLeader())  // 队长
        {
            // 提示
            mainPlayer.SendNoticMsg(false, "#{5244}");
            return;
        }

        // 组队跟随状态
//         if (false == mainPlayer.IsInTeamFollow)
//         {
//             // 提示
//             mainPlayer.SendNoticMsg(false, "#{5242}");
//             return;
//         }

        m_ChangSceneUI.SetActive(true);
    }

    void OnTeamChangeScene(GameObject value)
    {
        int nSceneClassID = GlobeVar.INVALID_ID;
        List<int> SceneList = VillainData.m_VillainInfo.m_NormalSceneClassList;
        if (SceneList == null || SceneList.Count <= 0)
        {
            return;
        }

        if (value.name == "1_sence")
        {
            nSceneClassID = SceneList[0];
        }
        else if (value.name == "2_sence")
        {

            nSceneClassID = SceneList[1];
        }
        else if (value.name == "3_sence")
        {
            nSceneClassID = SceneList[2];
        }

        if (nSceneClassID <= GlobeVar.INVALID_ID)
        {
            return;
        }

        // 此类型慎用吧哈
        SceneData.RequestChangeScene((int)CG_REQ_CHANGE_SCENE.CHANGETYPE.TEAMFOLLOW, 0, nSceneClassID, 0, 0, 0);

        UIManager.CloseUI(UIInfo.Activity);
    }

}
