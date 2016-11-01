/********************************************************************
	日期:	2014/02/20
	文件: 	D:\work\code\mldj\Version\Main\Project\Client\Assets\MLDJ\Script\GUI\ReliveLogic.cs
	作者:	YangXin
	描述:	复活UI
	
	修改:	
*********************************************************************/
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using GCGame.Table;
using Games.LogicObj;

public class ReliveLogic : MonoBehaviour
{
    public UILabel m_ReliveEntryTitle;
    public UILabel m_ReliveYuanBao;
    private int m_nTimeData = 0;
    public GameObject m_NewPlayerRelive;
    public GameObject m_Relive;
    public GameObject m_MiniPanel;
    public GameObject m_MiniAnchorPoint;
    public GameObject m_NormalPanel;
    public GameObject m_NormalAnchorPoint;
    public GameObject m_ButtonPanel;
    // Use this for initialization
    private static ReliveLogic m_Instance = null;
    public static ReliveLogic Instance()
    {
        return m_Instance;
    }
    // Use this for initialization
    void Awake()
    {
        m_Instance = this;
    }
    void OnDestroy()
    {
        m_Instance = null;
    }
    void Start()
    {
        if (m_MiniAnchorPoint.activeInHierarchy)
        {
            m_ButtonPanel.transform.parent = m_MiniAnchorPoint.transform;
            m_ButtonPanel.transform.localPosition = new Vector3(0, 0, 0);
        }

        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer ==null)
        {
            return;
        }
        m_NewPlayerRelive.SetActive(false);
        m_Relive.SetActive(false);
        if (GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.Level < 30 &&
            GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_GUILDWAR) //帮战副本不出现新手复活
        {
            m_NewPlayerRelive.SetActive(true);
            m_ReliveYuanBao.text = "";
        }
        else
        {
            m_Relive.SetActive(true);
            int _OriginalReliveNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_ORIGINAL_NUMBER) + 1;
            //int _YuanBao = 10 + _OriginalReliveNum * 5;
            int _YuanBao = (int)Mathf.Min(100.0f, 10.0f * Mathf.Ceil((float)_OriginalReliveNum * 0.5f));
            //if (_OriginalReliveNum > 8)
            //{
            //    _YuanBao = 50;
            //}
            int nPSFuhuoTimes = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_PAOSHANG_FUHUOTIMES);
            if (_mainPlayer.IsInPaoShang() &&
                 nPSFuhuoTimes < 3) //跑商下 显示 跑商免费复活
            {
                m_ReliveYuanBao.text = StrDictionary.GetClientDictionaryString("#{3950}", 3 - nPSFuhuoTimes, 3);
            }
            else
            {
                m_ReliveYuanBao.text = StrDictionary.GetClientDictionaryString("#{1034}", _YuanBao);
            }
        }
        InvokeRepeating("DoSomeThing", 0, 1);
    }

    public void ChangeShowInfoPaoShangChange()
    {
        Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        int _OriginalReliveNum = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int)Games.UserCommonData.USER_COMMONDATA.CD_ORIGINAL_NUMBER) + 1;
        //int _YuanBao = 10 + _OriginalReliveNum * 5;
        //if (_OriginalReliveNum > 8)
        //{
        //    _YuanBao = 50;
        //}
        int _YuanBao = (int)Mathf.Min(100.0f, 10.0f * Mathf.Ceil((float)_OriginalReliveNum * 0.5f));
        int nPSFuhuoTimes = GameManager.gameManager.PlayerDataPool.CommonData.GetCommonData((int) Games.UserCommonData.USER_COMMONDATA.CD_PAOSHANG_FUHUOTIMES);
        if (_mainPlayer.IsInPaoShang() &&
             nPSFuhuoTimes < 3) //跑商下 显示 跑商免费复活
        {
            m_ReliveYuanBao.text = StrDictionary.GetClientDictionaryString("#{3950}", 3 - nPSFuhuoTimes, 3);
        }
        else
        {
            m_ReliveYuanBao.text = StrDictionary.GetClientDictionaryString("#{1034}", _YuanBao);
        }
    }
    private float ReliveSend = 0;
    // Update is called once per frame
    void DoSomeThing()
    {
        if (null == Singleton<ObjManager>.GetInstance().MainPlayer)
        {
            return;
        }

        //string str = StrDictionary.GetClientDictionaryString("#{1035}");
        string str = "";
        m_nTimeData = Singleton<ObjManager>.GetInstance().MainPlayer.ReliveEntryTime;
        if (m_nTimeData < 0)
        {
            m_nTimeData = 0;
        }
        if (m_nTimeData / 60 > 0)
        {
             //str += (m_nTimeData / 60).ToString() + "分";
            str = StrDictionary.GetClientDictionaryString("#{2873}", (m_nTimeData / 60), (m_nTimeData % 60));
        }
        else
        {
            str = StrDictionary.GetClientDictionaryString("#{2872}", (m_nTimeData % 60));
        }

        //str += (m_nTimeData%60).ToString() + "秒";
        m_ReliveEntryTitle.text = str;
        
        if (Time.realtimeSinceStartup - ReliveSend > 5)
        {
            ReliveSend = Time.realtimeSinceStartup;
            //去掉挂机判断.
            if (Singleton<ObjManager>.Instance.MainPlayer.GetAutoCombatState()) //挂机 中自动复活
            {
                Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
                if (pSceneClass != null)
                {                   
                    if (pSceneClass.GetReliveTypebyIndex(0) == 1 && Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level <= 30)  //原地复活
                    {
                        RliveOriginalButton();
                    }
                    else if (pSceneClass.GetReliveTypebyIndex(1) == 1 )    //入口复活
                    {
                        if (m_nTimeData <= 0)
                        {
                             //可以复活
                            CG_ASK_RELIVE packet = (CG_ASK_RELIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RELIVE);
                            packet.SetType((int)Games.GlobeDefine.GameDefine_Globe.RELIVE_TYPE.RELIVE_ENTRY);
                            packet.SendPacket();
                        }
                    }
                    else if (pSceneClass.GetReliveTypebyIndex(2) == 1)  //回主城
                    {
                        RliveCityButton();
                    }
                }
            }
            else 
            {
               Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
               if (pSceneClass != null) 
               {
                    if (pSceneClass.GetReliveTypebyIndex(1) == 1 )    //入口复活
                    {
                        if (m_nTimeData <= 0)
                        {
                            if( Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.Level <= 30 ) {
                                //RliveOriginalButton();
                            }
                            else {
                                //可以复活
                                CG_ASK_RELIVE packet = (CG_ASK_RELIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RELIVE);
                                packet.SetType((int)Games.GlobeDefine.GameDefine_Globe.RELIVE_TYPE.RELIVE_ENTRY);
                                packet.SendPacket();
                            }
                        }
                    }
               }
            }
        }
    }

    public void CloseWindow()
    {
        UIManager.CloseUI(UIInfo.Relive);
    }
    public void RliveCityButton()
    {
        MessageBoxLogic.OpenOKCancelBox(StrDictionary.GetClientDictionaryString("#{3218}"), "", RliveCityOK, RliveCityNO);        
    }
    public void RliveCityOK()
    {
        //如果角色Dead&&在幅本中.打开失败界面
         Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
        if (_mainPlayer == null)
        {
            return;
        }
        if( _mainPlayer.IsDie() && GameManager.gameManager.ActiveScene.IsStoryCopyScene() ) {
            UIManager.CloseUI(UIInfo.Relive);
            UIManager.ShowUI(UIInfo.StoryCopySceneResultRoot, OnShowStoryCopySceneResultWindow);
            return;
        }
        if( _mainPlayer.IsDie() && GameManager.gameManager.ActiveScene.IsCopyScene() )
        {
            UIManager.CloseUI(UIInfo.Relive);
            UIManager.ShowUI(UIInfo.FailRoot, OnShowFailRootWindow);
        }
        else 
        {
            CG_ASK_RELIVE packet = (CG_ASK_RELIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RELIVE);
            packet.SetType((int)Games.GlobeDefine.GameDefine_Globe.RELIVE_TYPE.RELIVE_CITY);
            packet.SendPacket();
        } 
    }
    void OnShowStoryCopySceneResultWindow( bool bSuccess, object param )
    {
        if (StoryCopySceneResultLogic.Instance() != null) {
            StoryCopySceneResultLogic.Instance().SetNeedSendLevelCopyScene(false);
        }
    }
    void OnShowFailRootWindow(bool bSuccess, object param)
    {
        if (FailRoot.Instance() != null) {
            //设置勾选当前装备
            FailRoot.Instance().SetNeedSendLevelCopyScene(false);
        }
    }
    public void RliveCityNO()
    {

    }
    public void ReliveEntryButton()
    {
        if (m_nTimeData <= 0)
        {
            //可以复活
            CG_ASK_RELIVE packet = (CG_ASK_RELIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RELIVE);
            packet.SetType((int)Games.GlobeDefine.GameDefine_Globe.RELIVE_TYPE.RELIVE_ENTRY);
            packet.SendPacket();
        }
        else
        {
            Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
            if (_mainPlayer != null)
            {
                //提示CD未到
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{1027}");
            }           
        }
    }
    public void RliveOriginalButton()
    {
        CG_ASK_RELIVE packet = (CG_ASK_RELIVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_RELIVE);
        packet.SetType((int)Games.GlobeDefine.GameDefine_Globe.RELIVE_TYPE.RELIVE_ORIGINAL);
        packet.SendPacket();
    }

    public void Powerbutton()
    {
        if (m_MiniPanel.activeSelf && !m_NormalPanel.activeSelf)
        {
            m_MiniPanel.SetActive(false);
            m_NormalPanel.SetActive(true);
            m_ButtonPanel.transform.parent = m_NormalAnchorPoint.transform;
            m_ButtonPanel.transform.localPosition = new Vector3(0, 0, 0);
            BePowerData.ShowBePowerItemList();
        }
    }
    void OnEnable()
    {
      if (SkillBarLogic.Instance() != null) {
        SkillBarLogic.Instance().ShowSkillChangeStateEffect(false);
      }
    }
    void OnDisable()
    {
      if (SkillBarLogic.Instance() != null) {
        SkillBarLogic.Instance().ShowSkillChangeStateEffect(true);
      }
    }
}
