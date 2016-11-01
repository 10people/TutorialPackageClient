/********************************************************************************
 *	文件名：	Obj_MainPlayer.cs
 *	全路径：	\Script\Obj\Obj_MainPlayer.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：游戏主角Obj逻辑类
 *	修改记录：
*********************************************************************************/

using GameRes;
using Games.AI_Logic;
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using Games.GlobeDefine;
using Games.Events;
using Games.Scene;
using GCGame;
using Module.Log;
using GCGame.Table;
using Games.SkillModle;
using Games.Animation_Modle;
using Games.Item;
using System;
using Games.Fellow;
using Games.MountModule;

namespace Games.LogicObj
{

    public partial class Obj_MainPlayer : Obj_OtherPlayer
    {

       
        //public bool IsChangingMainPlayer = false; //主角是否处在变身状态
       
        // 加载模型相关
        private static int m_originalModelID = -1;
        public static int OriginalModelID { set { m_originalModelID = value; } get { return m_originalModelID; } }
        private static int m_changeModelID = -1;
        public static int ChangeModelID { set { m_changeModelID = value; } get { return m_changeModelID; } }

        private int m_BeforeChangeModeAnimId = -1;
        public int BeforeChangeModeAnimId
        {
            set { m_BeforeChangeModeAnimId = value; }
            get { return m_BeforeChangeModeAnimId; }
        }
        public Obj_MainPlayer()
        {
            m_ObjType = Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER;
            m_BaseAttr = new BaseAttr();
            m_BeforeChangeModeAnimId = -1;
        }

        public override bool Init(Obj_Init_Data initData)
        {
            //主角进行Init的时候调用一次Unload方法
            Resources.UnloadUnusedAssets();
            LastHeartBeatTime = -1;
            return true;
        }
        void Awake()
        {
            if (null == m_ObjTransform)
            {
                m_ObjTransform = transform;
            }
        }

        ThirdPersonController m_Thirdcontroller = null;
        public ThirdPersonController Thirdcontroller
        {
            get { return m_Thirdcontroller; }
        }

        public override int Profession
        {
            get { return GameManager.gameManager.PlayerDataPool.Profession; }
            set { GameManager.gameManager.PlayerDataPool.Profession = value; }
        }
        public override System.UInt64 GuildGUID
        {
            get { return GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid; }
            set { GameManager.gameManager.PlayerDataPool.GuildInfo.GuildGuid = value; }
        }
        public System.UInt64 LoverGUID
        {
            get { return GameManager.gameManager.PlayerDataPool.LoverGUID; }
            set { GameManager.gameManager.PlayerDataPool.LoverGUID = value; }
        }
        private UInt64 m_CurUseMountItemGuid;

//        private bool isJoyMoving = false;//主玩家本次Update中移动是否用Joy引起
        public float LastHeartBeatTime = -1;
        public float SendNetTime = -1;
        private float m_NetDelayTime = 250f;//服务器250ms一次网络包处理
        private float m_IntervalTime = 1f;//网速检测间隔时间
        /// <summary>
        /// 网速
        /// </summary>
        public float NetSpeed = 0;


        private bool isFirstUseCrash;
        public bool IsFirstUseCrash
        {
            set { isFirstUseCrash = value; }
            get { return GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO && 
                         isFirstUseCrash && null != this.SkillCore && this.SkillCore.IsUsingCrashSkill(); } 
        }
        void Start()
        {
            if (GameManager.gameManager.OnLineState == false)
            {
                InitAutoInfo();
                InitNameBoard();
                InitSkillInfo();
            }

            if ((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_LOGIN != GameManager.gameManager.RunningScene)
            {
                InitAutoInfo();
                InitNameBoard();
                //更新人物头像显示
                OptHPChange();
                OptMPChange();
                OptXPChange();
                OptLevelChange();
                OptForceChange();
                OptStealthLevChange();
                OptNameChange();
                OptChangPKModle();
                OnExpChange();
                OnOffLineExpChange();
                ShowPlayerTitleInvestitive();
                InitSkillInfo();
                InitCangJingGeInfo();

				GameManager.gameManager.FlyWingMananger.ReLoadFlyWing();
                GameManager.gameManager.PlayerDataPool.ShoppingCart.ReadShoppingCartInfo();
                //在监狱的话 打开PK界面 放在更新公告之前
                if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JIANYU)
                {
                    UIManager.ShowUI(UIInfo.PKSetInfo);
				}
                //NoticeLogic.TryOpen();   

                //显示帮战的推送
                if (GameManager.gameManager.PlayerDataPool.WarPushMessaeg.Count > 0)
                {
                    if (GuildWarPushMessageLogic.Instance() == null)
                    {
                        UIManager.ShowUI(UIInfo.GuilWarPushMessage);
                    }
                }

                if (NewFunctionLogic.Instance() != null)
                {
                    NewFunctionLogic.Instance().SetPkLabel(PkModle == (int)CharacterDefine.PKMODLE.KILL);
                }
            }

            if (null != GameManager.gameManager)
            {
                m_playDataTool = GameManager.gameManager.PlayerDataPool;
            }


            //开始每秒一次的循环
            StartCoroutine(UpdatePerSceond());

            //开始每分钟一次的循环
            StartCoroutine(UpdatePerMinute());

#if UNITY_ANDROID
            //开始每十分钟一次的循环
            if (PlatformHelper.IsChannelTW())
            {
                StartCoroutine(UpdateTenMinute());
            }
#endif
            //每20s一次网络检测
            StartCoroutine(MainPlayerNetSpeed());

            if (PlayerPreferenceData.LeftTabChoose == 1)
            {
                if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID >= 0)
                {
                    if (null != TeamList.Instance())
                    {
                        TeamList.Instance().UpdateTeamMember();
                    }
                }
                if (MissionDialogAndLeftTabsLogic.Instance() != null)
                {
                    MissionDialogAndLeftTabsLogic.Instance().UpdateTeamInfo();
                }
            }


            if (null != PlayerFrameLogic.Instance())
            {
                PlayerFrameLogic.Instance().SetTeamCaptain(IsTeamLeader());
            }
            if (m_ObjTransform != null)
            {
                m_fLastSyncPos = m_ObjTransform.position;
            }
#if UNITY_ANDROID
            PlayerFrameLogic.Instance().m_FirstChild.SetActive(true);
            SkillBarLogic.Instance().m_FirstChild.SetActive(true);
#endif
            LastHeartBeatTime = -1;

            CurChangeState = 0;

            GameManager.gameManager.FlyWingMananger.ReLoadFlyWing();
        }

        /// <summary>
        /// 由于服务器发包修时间，所以也同步给客户端记录的时间
        /// </summary>
        public void SynServerDateTime()
        {
            GlobalData.CurerntLocalDateTime = Utils.GetServerDateTime();
        }

        /// <summary>
        /// 维护本地时间. 秒为单位
        /// </summary>
        /// <param name="updateTag"></param>
        private void UpdateLocalDateTime(float updateTag = 1)
        {
            if (GlobalData.CurerntLocalDateTime != null)
            {
                GlobalData.CurerntLocalDateTime = GlobalData.CurerntLocalDateTime.AddSeconds(updateTag);
            }
        }


        //开始每秒一次的循环
        IEnumerator UpdatePerSceond()
        {
            while (true)
            {
                yield return new WaitForSeconds(1);

                UpdateLocalDateTime();

                UpdateReliveEntryTime();

                //体能恢复倒计时
                StaminaTimerFunc();

                //更新自动打怪
                UpdateAuto();

                //当前选中目标距离检测
                UpdateSelectTarget();
            }
        }

        //开始每分钟一次循环
        IEnumerator UpdatePerMinute()
        {
            while (true)
            {
                yield return new WaitForSeconds(60);

                //针对挂机崩溃的情况，如果是挂机状态，则进行一分钟一次的系统回收
                if (IsOpenAutoCombat)
                {
                    Resources.UnloadUnusedAssets();
                }
            }
        }

        //开始每十分钟一次循环
        IEnumerator UpdateTenMinute()
        {
            while (true)
            {
                yield return new WaitForSeconds(60 * 10);
#if UNITY_ANDROID
                if (PlatformHelper.IsChannelTW())
                {
                    // 台湾安卓渠道，更新fellow相关的成就
                    FellowContainer container = GameManager.gameManager.PlayerDataPool.FellowContainer;
                    if (container != null)
                    {
                        int maxCombatValue = 0;
                        bool isHasOrange = false;
                        for (int i = 0; i < container.ContainerSize; i++)
                        {
                            Fellow.Fellow f = container.GetFellowByIndex(i);
                            if (f != null)
                            {
                                maxCombatValue = (f.GetCombatValue() > maxCombatValue) ? f.GetCombatValue() : maxCombatValue;
                                if (f.Quality == (int)Fellow.FELLOWQUALITY.ORANGE)
                                {
                                    isHasOrange = true;
                                }
                            }
                        }
                        if (maxCombatValue >= 200000)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.FELLOW_COMBAT_VALUE_20);
                        }
                        else if (maxCombatValue >= 150000)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.FELLOW_COMBAT_VALUE_15);
                        }
                        else if (maxCombatValue >= 100000)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.FELLOW_COMBAT_VALUE_10);
                        }
                        else if (maxCombatValue >= 50000)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.FELLOW_COMBAT_VALUE_5);
                        }
                        else if (maxCombatValue >= 20000)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.FELLOW_COMBAT_VALUE_2);
                        }
                        if (isHasOrange)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.GET_ORANGE_FELLOW);
                        }
                    }

                    // 台湾安卓渠道，更新swordman相关的成就
                    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                    if (null != _mainPlayer)
                    {
                        int totalSwordsManCombat = _mainPlayer.GetTotalSwordsManCombat();
                        if (totalSwordsManCombat >= 50000)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.SWORDMAN_COMBAT_VALUE_5);
                        }
                        else if (totalSwordsManCombat >= 10000)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.SWORDMAN_COMBAT_VALUE_1);
                        }
                    }                    
                }
#endif
            }
        }

        /// <summary>
        /// 主玩家网络状态
        /// </summary>
        /// <returns></returns>
        IEnumerator MainPlayerNetSpeed()
        {
            while (true)
            {
                yield return new WaitForSeconds(m_IntervalTime);

                //检查当前网络是否可用
                if (NetWorkLogic.GetMe().GetConnectStautus() == NetWorkLogic.ConnectStatus.DISCONNECTED
                    || Application.internetReachability == NetworkReachability.NotReachable) //网络不可达
                {
                    NetSpeed = -1;
                    SetNetSpeed();
                    continue;
                }

                //说明网络延迟已经超过基本通信时间，直接网络差
                if (SendNetTime > 0)
                {
                    NetSpeed = 10000;
                    SendNetTime = -1;
                    SetNetSpeed();
                    continue;
                }

                SendNetTime = Time.time;
                //向服务器发包
                CG_PING cgPing = (CG_PING)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PING);
                cgPing.SetNoparam(0);
                cgPing.SendPacket();
            }
        }

        public void SetMainPlayerNetSpeed()
        {
            //计算网络延迟时间
            if (SendNetTime > 0)
            {
                NetSpeed = (Time.time - SendNetTime) * 1000 - m_NetDelayTime;
                if (NetSpeed < 0)
                {
                    NetSpeed = 0;
                }

                SendNetTime = -1;
            }

            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().GetWifiInfo(NetSpeed);
            }
        }

        private void SetNetSpeed()
        {
            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().GetWifiInfo(NetSpeed);
            }
        }

//        private float tempTime = 0;
//        private Vector3 tempVector3 = Vector3.zero;
        //更新Obj_MainPlayer逻辑数据
        void Update()
        {
//#if UNITY_ANDROID
//            isJoyMoving = false;
            if (m_Thirdcontroller != null)
            {
                m_Thirdcontroller.UpdateSmoothedMovementDirection();
//                isJoyMoving = m_Thirdcontroller.m_IsJoyMoving;
            }

//            if (!isJoyMoving)
//            {
//                UpdateTargetMove();
//            }
//#else
            UpdateTargetMove();
//#endif
            if (false == Cutscene.CutsceneActionPlayAnim.m_bIsPlayingMainPlayerAnim)
            {
                UpdateAnimation();
            }
            //UpdateCameraController();

            UpdateQingGong();       //由于轻功可能改变玩家坐标，所以放在UpdateTargetMove之后进行   
            UpdateLightSkill();     //更新玩家自己的轻功技能
            CrashMove();

        }

        PlayerData m_playDataTool = null;
        void FixedUpdate()
        {
            // 活动添加
            if (null != m_playDataTool)
            {
                m_playDataTool.Tick_Award();
                m_playDataTool.Tick_MoneyTreeAward();
                m_playDataTool.DailyLuckyDrawData.Tick_FreeCDTime();
                m_playDataTool.Tick_FellowGainCD();
                m_playDataTool.Tick_ProcreateTime();
                m_playDataTool.Tick_PVP();
            }

            //涉及逻辑更新函数
            UpdateStep();
            UpdateTeamFollow();
            UpdateTeamFormation();// 组队跟随

            //同步位置给Server其他玩家
            if (GameManager.gameManager.OnLineState)
            {
                //有父节点的时候，跟随父节点移动，不需要发送同步包
                if (BindParent < 0)
                {
                    SyncPosToServer();
                }
            }

            UpdateSkillCDTime();

            //多次冒血的
            UpdateShowMultiShowDamageBoard();
            //技能结束检测
            if (m_SkillCore != null)
            {
                m_SkillCore.CheckSkillShouldFinish();
            }
            //自动战斗 中断状态检测
            UpdateAutoCombatBreakState();

            //防止客户端一直点击地面发包，加个时间限制
            if (HasSendpos)
            {
                if (Time.time - LastForceSynPosTime >= 2.0f)
                {
                    HasSendpos = false;
                }
            }
        }

        //更新玩家脚步声
        void UpdateStep()
        {
            //轻功技能状态玩家无脚步声
            if (IsLightState)
            {
                return;
            }
            //骑坐骑停留时
           /* if (!IsMoving && GetEquipMountID() > 0)
            {
                Tab_MountBase MountBase = TableManager.GetMountBaseByID(GetEquipMountID(), 0);
                if (null != MountBase)
                {
                    Tab_CharMount MountTab = TableManager.GetCharMountByID(MountBase.ModelID, 0);
                    if (null != MountTab)
                    {
                        GameManager.gameManager.SoundManager.StopSoundEffect(MountTab.MoveSoundID);

						if( !GameManager.gameManager.SoundManager. IsSoundsPlayer(MountTab.StopSoundID))
                             GameManager.gameManager.SoundManager.PlaySoundEffect(MountTab.StopSoundID);
                    }
                }
            }  */
            if (IsMoving && null != m_Objanimation)
            {
                if (m_Objanimation.IsPlaying("Skill_Mohewuliang") == false && m_Objanimation.IsPlaying("Skill_Zhurongzhang_Loop") == false)
                {
                    if (GetEquipMountID() > 0) //有坐骑播放坐骑声音
                    {
                        Tab_MountBase MountBase = TableManager.GetMountBaseByID(GetEquipMountID(), 0);
                        if (null != MountBase)
                        {
                            Tab_CharMount MountTab = TableManager.GetCharMountByID(MountBase.ModelID, 0);
                            if (null != MountTab)
                            {
                                GameManager.gameManager.SoundManager.StopSoundEffect(MountTab.StopSoundID);
                                m_curMountMoveId = MountTab.MoveSoundID;
                                GameManager.gameManager.SoundManager.PlaySoundEffect(MountTab.MoveSoundID);
                            }
                        } 
                    }
                    else //播放玩家跑步声音
                    {
						//GameManager.gameManager.SoundManager.StopSoundEffect(MountTab.StopSoundID);

                        if (Profession == (int)CharacterDefine.PROFESSION.TIANSHAN) //天山特殊化
                        {
                            GameManager.gameManager.SoundManager.PlaySoundEffect(24);   //footsteps_tianshan
                        }
                        else
                        {
                            GameManager.gameManager.SoundManager.PlaySoundEffect(22);   //footsteps
                        }
                    }
                }
            }

        }

        public static float m_fTimeSecond = Time.realtimeSinceStartup;
        void UpdateReliveEntryTime()
        {
            float ftimeSec = Time.realtimeSinceStartup;
            int nTimeData = (int)(ftimeSec - m_fTimeSecond);
            if (nTimeData > 0)
            {
                if (ReliveEntryTime > 0 && IsDie())
                {
                    ReliveEntryTime = ReliveEntryTime - nTimeData;
                    if (ReliveEntryTime < 0)
                    {
                        ReliveEntryTime = 0;
                    }
                }
                m_fTimeSecond = ftimeSec;
            }
        }
        //////////////////////////////////////////////////////////////////////////
        //向服务器同步相关
        //////////////////////////////////////////////////////////////////////////
        //同步位置信息间隔
        const float m_fSyncPosTimeInterval = 0.2f;
        float m_fLastSyncPosTime = 0.0f;
        Vector3 m_fLastSyncPos = new Vector3(0.0f, 0.0f, 0.0f);
        public UnityEngine.Vector3 LastSyncPos
        {
            get { return m_fLastSyncPos; }
            set { m_fLastSyncPos = value; }
        }
        //同步位置信息给Server
        public void SyncPosToServer(bool bForce = false)
        {
            //轻功状态下不同步
            if (true == QingGongState)
            {
                return;
            }

            //场景动画的部分情况下不同步
            if (Cutscene.CutsceneManager.Instance.CloseSyncPos)
            {
                return;
            }

            if (Time.time - m_fLastSyncPosTime > m_fSyncPosTimeInterval)
            {
                m_fLastSyncPosTime = Time.time;

                //检查上一次同步的坐标和当前坐标是否有差距
                if (Vector3.Distance(m_fLastSyncPos, m_ObjTransform.position) < 0.1f)
                {
                    return;
                }
                else
                {
                    m_fLastSyncPos = m_ObjTransform.position;
                }
                DoSynPosToServer();                            
            }

            if ( bForce )
            {
                DoSynPosToServer();
            }
        }

        void DoSynPosToServer()
        {
            //新Obj同步机制修改，改用CG_MOVE包
            CG_MOVE movPacket = (CG_MOVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MOVE);
            movPacket.Poscount = 1;
            movPacket.AddPosx((int)(m_ObjTransform.position.x * 100));
            movPacket.AddPosz((int)(m_ObjTransform.position.z * 100));
            float d = (m_ObjTransform.position.x - 72f) * (m_ObjTransform.position.x - 72f) + (m_ObjTransform.position.z - 53.4f) * (m_ObjTransform.position.z - 53.4f);
            if (d < 3f && GuideDirectionSign.HasDest)
            {
                LogModule.WarningLog(string.Format("{0}  Send SysnPos", Time.realtimeSinceStartup));
            }
            if (IsMoving)
            {
                movPacket.Ismoving = 1;
            }
            else
            {
                movPacket.Ismoving = 0;
            }
            movPacket.SendPacket();

            if (m_SkillCore.UsingSkillStartAni != GlobeVar.INVALID_ID && m_SkillCore.UsingSkillBaseInfo == null)
            {
                m_SkillCore.UsingSkillStartAni = GlobeVar.INVALID_ID;
            }
        }

        //强制同步位置标志
        private bool hasSendPos = false;
        public bool HasSendpos
        {
            get { return hasSendPos; }
            set { hasSendPos = value; }
        }

        private float m_flastforceSynPosTime = 0.0f;
        public float LastForceSynPosTime
        {
            get { return m_flastforceSynPosTime; }
            set { m_flastforceSynPosTime = value; }
        }

        //强制同步一个可移动包告诉服务器客户端有移动的倾向（只发一次）
        public void SynCleanCacheSkillToServer()
        {
            CG_CLEAN_CACHE_SKILL cleanPacket = (CG_CLEAN_CACHE_SKILL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_CLEAN_CACHE_SKILL);
            cleanPacket.IsClean = 1;
            cleanPacket.SendPacket();
        }
        public void ShowChangedMainPlayer()
        {
            StartCoroutine("DelayShowChangedMainPlayer");
        }

        private IEnumerator DelayShowChangedMainPlayer()
        {
            yield return new WaitForSeconds(1.30f);

            ObjManager.Instance.ShowOthersInfo();

            //得到变身后的动作ID
            int nAfterAnimId = GetAnimIdByState(Profession, CurChangeState, 1);

            if (GlobeVar.INVALID_ID != nAfterAnimId)
            {
                AnimLogic.Play(nAfterAnimId);

                Tab_Animation tab_anim = TableManager.GetAnimationByID(nAfterAnimId, 0);
                if (null != tab_anim)
                {
                    PlayEffect(tab_anim.GetStartEffectbyIndex(0));
                }
            }
  
            if (NormalGameObject != null)
            {
                Destroy(NormalGameObject);
                ResourcesManager.Instance.ReduceCachedRef(m_lastMainObjUrl,EResourceType.CharacterModel,ObjType);
                NormalGameObject = null;
            }

            //变身后音乐更改机制，暂时屏蔽
            //if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            //{
            //    Utils.PlaySceneMusic(208);
            //}
        }

        public void ShowNormalMainPlayer()
        {
            if (ChangeGameObject != null)
            {
                Destroy(ChangeGameObject);
                ResourcesManager.Instance.ReduceCachedRef(m_lastMainObjUrl, EResourceType.CharacterModel, ObjType);
                ChangeGameObject = null;
            }
        }
        public override void OnAnimationFinish(int animationID)
        {
            base.OnAnimationFinish(animationID);

            if (animationID != -1 && animationID == m_BeforeChangeModeAnimId)
            {
                ObjManager.Instance.ShowChangedUIInfo();
            }
        }

        public override BaseAttr BaseAttr
        {
            //屏蔽掉自己的 m_BaseAttr，而从GameManager中读取，保证切场景依然存在
            get { return GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr; }
            set { GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr = value; }
        }

        void InitNameBoard()
        {
            ResourceManager.LoadHeadInfoPrefab(UIInfo.PlayerHeadInfo, gameObject, "PlayerHeadInfo", OnLoadNameBoard);

        }

        void OnLoadNameBoard(GameObject objNameBoard)
        {
            m_HeadInfoBoard = objNameBoard;
            if (null != m_HeadInfoBoard)
            {
                m_playerHeadInfo = m_HeadInfoBoard.GetComponent<PlayerHeadInfo>();

                if (null != m_playerHeadInfo)
                {   
					m_NameBoard = m_playerHeadInfo.m_LabelName;
					m_playerHeadInfo.Init(this);
                }
                /*
                m_OriginalHeadInfo = m_HeadInfoBoard.transform.FindChild("NameBoardOffset").FindChild("OriginalHeadInfo").gameObject;
                m_NameBoard = m_OriginalHeadInfo.transform.FindChild("NameBoard").GetComponent<UILabel>();
                //m_DamageBoard = m_HeadInfoBoard.transform.FindChild("DamageBoard").GetComponent<DamageBoardManager>();
                m_TitleInvestitiveBoard = m_OriginalHeadInfo.transform.FindChild("TitleInvestitiveBoard").gameObject;
                //if (null != m_DamageBoard)
                //{
                //    m_DamageBoard.gameObject.SetActive(false);
                //}
                m_VipInfo = m_OriginalHeadInfo.transform.FindChild("VipSprite").GetComponent<UISprite>();
                m_ChatBubble = m_HeadInfoBoard.transform.FindChild("NameBoardOffset").FindChild("ChatBubble").gameObject;
                m_ChatBubble.SetActive(false);
                */
                ShowNameBoard();
                ShowPlayerTitleInvestitive();
                UpdateVipInfo();
//                if (m_playerHeadInfo)
//                {
//                    m_playerHeadInfo.UpdatePaoShangIcon(PaoShangState);
//                }
            }
        }
        public override void UpdateVipInfo()
        {
            base.UpdateVipInfo();
            OnVipCostChange();
        }
        public void ShowPlayerTitleInvestitive()
        {
            if (null != m_playerHeadInfo)
            {
                m_playerHeadInfo.ShowTitleInvestitive(GameManager.gameManager.PlayerDataPool.TitleInvestitive.GetCurrentTitle());
            }
        }

        //玩家登陆接口
        public void OnPlayerLogin()
        {
        }

        //切换场景调用接口
        public void OnPlayerEnterScene()
        {
            //设置初始位置
            //这个之后会改为读取PlayerDataPool中的位置
            if (GameManager.gameManager.OnLineState)
            {
                Position = ActiveScene.GetTerrainPosition(GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterScenePos);
            }
            else
            {
                Position = DefaultPosition();
            }

            //关闭没有用的场景 
            //if (Position.z > 0 && SceneControl.Instance() != null)
            //{
            //    SceneControl.Instance().OneSceneGameObject.SetActive(false);
            //}

            //做个藏经阁特例,用于做轻功. add by Yx
            /*if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI)
            {
                Vector3 pos = Position;
                pos.y = 6;
                Position = pos;
            }*/

            // Cabal Demo 特殊处理
            if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            {
                Rotation = Quaternion.Euler(0, 210, 0);
            }
            //add pinch

            //if(gameObject.GetComponent<PinchRecognizer>() == null)
            //{
            //gameObject.AddComponent<PinchRecognizer>();
            //}

            //添加主角摇杆控制组件
            if (m_Thirdcontroller == null)
            {
                m_Thirdcontroller = gameObject.AddComponent<ThirdPersonController>();
            }
            //m_Thirdcontroller = gameObject.GetComponent<ThirdPersonController>();

            // 改为使用CameraManager管理摄像机
            //添加主角摄像机控制组件
            //if (m_CameraController == null)
            //{
            //    m_CameraController = gameObject.AddComponent<CameraController>();
            //}
            //m_CameraController = gameObject.GetComponent<CameraController>();
            CameraManager.Instance.LookTarget(this, null, 0);

            TeleportPoint[] Teleports = GameObject.FindObjectsOfType<TeleportPoint>();
            for (int i = 0; i < Teleports.Length; i++ )
            {
                Teleports[i].InitNameBoard();
            }

            //if (gameObject.GetComponent<AudioListener>() == null)
            //{
            //gameObject.AddComponent<AudioListener>();
            //}
            //添加主角UI组件
            //if (gameObject.GetComponent<UIPanel>() == null)
            //{
            //    gameObject.AddComponent<UIPanel>();
            //}

            //添加主角AI组件
            if (Controller == null)
            {
                Controller = gameObject.AddComponent<AIController>();
            }
            //Controller = gameObject.GetComponent<AIController>();

            if (gameObject.GetComponent<AI_PlayerCombat>() == null)
            {
                gameObject.AddComponent<AI_PlayerCombat>();
            }

            //初始化寻路代理
            InitNavAgent();

            if (AnimLogic == null)
            {
                AnimLogic = gameObject.AddComponent<AnimationLogic>();
            }
            //AnimLogic = gameObject.GetComponent<AnimationLogic>();

            // 引导圈
            GameManager.gameManager.ActiveScene.ShowGuideDirSign();

            if (ObjEffectController == null)
            {
                ObjEffectController = gameObject.AddComponent<CharacterEffectBehaviourController>();
            }

            Controller.SwitchCurrentAI(Controller.NormalAI);

            //初始化RoleBaseID
            BaseAttr.RoleBaseID = GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterSceneRoleBaseID;

            //初始化ServerID
            ServerID = GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterSceneServerID;


            ReliveEntryTime = GameManager.gameManager.PlayerDataPool.ReliveEntryTime;

            Cutscene.CutsceneManager.Instance.CloseSyncPos = false;

        }
        public override void UpdateAttrBroadcastPackt(GC_BROADCAST_ATTR packet)
        {
            base.UpdateAttrBroadcastPackt(packet);
            if (packet.HasModelVisualID || packet.HasWeaponDataID || packet.HasWeaponEffectGem)
            {
                if (RoleViewLogic.Instance() != null)
                {
                    RoleViewLogic.Instance().UpdateFashionView();
                }
                if (BackPackLogic.Instance() != null)
                {
                    BackPackLogic.Instance().UpdatePlayerEquipView();
                }
                if (FashionLogic.Instance() != null && FashionLogic.Instance().gameObject.activeInHierarchy)
                {
                    FashionLogic.Instance().HandleUpdateAttr();
                    FashionLogic.Instance().UpdateFashionView();
                }
            }
            if (packet.HasModelVisualID)
            {
                for (int i = 0; i < LoginData.loginRoleList.Count; i++)
                {
                    if (LoginData.loginRoleList[i].guid == GUID)
                    {
                        LoginData.loginRoleList[i].ModelVisualID = packet.ModelVisualID;
                        break;
                    }
                }
                if (ModelVisualID != GlobeVar.INVALID_ID)
                {
                    PlayEffect(225);
                }
            }
            if (packet.HasWeaponDataID)
            {
                for (int i = 0; i < LoginData.loginRoleList.Count; i++)
                {
                    if (LoginData.loginRoleList[i].guid == GUID)
                    {
                        LoginData.loginRoleList[i].WeaponID = packet.WeaponDataID;
                        break;
                    }
                }
            }
            if (packet.HasWeaponEffectGem)
            {
                for (int i = 0; i < LoginData.loginRoleList.Count; i++)
                {
                    if (LoginData.loginRoleList[i].guid == GUID)
                    {
                        LoginData.loginRoleList[i].WeaponEffectGem = packet.WeaponEffectGem;
                        break;
                    }
                }
            }
			 //GameManager.gameManager.FlyWingMananger.ReLoadFlyWing();  // 重新加载翅膀 
        }
        public void ChangeHeadPic()
        {
            Tab_RoleBaseAttr roleBaseTab = TableManager.GetRoleBaseAttrByID(BaseAttr.RoleBaseID, 0);
            Tab_CharModel charModel = TableManager.GetCharModelByID(ModelID, 0);
            if (null == charModel && null != roleBaseTab)
            {
                charModel = TableManager.GetCharModelByID(roleBaseTab.CharModelID, 0);
            }
            if (null != charModel)
            {
                BaseAttr.HeadPic = charModel.HeadPic;
                OptHeadPicChange();
            }

            DeltaHeight = charModel.HeadInfoHeight;
        }

        public void OnPlayerLeaveScene()
        {
            Cutscene.CutsceneManager.Instance.BlockAutoBattle = false;
        }

        //////////////////////////////////////////////////////////////////////////
        //摄像机相关
        //////////////////////////////////////////////////////////////////////////
        //private CameraController m_CameraController = null;
        //public CameraController CameraController
        //{
        //    get { return m_CameraController; }
        //}


        //void UpdateCameraController()
        //{
        //    if (m_CameraController)
        //    {
        //        m_CameraController.UpdateCamera();
        //    }
        //}
        //////////////////////////////////////////////////////////////////////////
        /// 移动和动画相关
        //////////////////////////////////////////////////////////////////////////
        protected override void OnMoveOver()
        {
            //移动结束，如果发现存在目标NPC，则进行移动结束后的操作
            //目前暂定两种：
            //1.友方NPC开始对话操作
            //2.敌方NPC开始攻击操作
            if (null != MoveTarget)
            {
                Obj_NPC objNpc = MoveTarget.GetComponent<Obj_NPC>();
                if (objNpc)
                {
                    if (Reputation.IsEnemy(objNpc) || Reputation.IsNeutral(objNpc))
                    {
                        //如果是地方NPC，则开始攻击
                        if (m_SkillCore != null && m_SkillCore.IsUsingSkill == false)
                        {
                            // 不攻击了,只移动过去
                            OnEnterCombat(MoveTarget.GetComponent<Obj_Character>());
                        }
                    }
                    else
                    {
                        //如果是友方NPC，则开始对话
                        Singleton<DialogCore>.GetInstance().Show(objNpc);
                        objNpc.FaceTo(m_ObjTransform.position);
                    }
                    //	UpdateTargetFrame(objNpc);
                }

                MoveTarget = null;
            }

            //处理移动后事件
            if (m_MoveOverEvent.EventID != Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_INVALID)
            {
                Singleton<EventSystem>.GetInstance().PushEvent(m_MoveOverEvent);
            }

            //移动圈消失
            //if (null != GameManager.gameManager.ActiveScene)
            //{
            //    GameManager.gameManager.ActiveScene.DeactiveMovingCircle();
            //}
        }


        //////////////////////////////////////////////////////////////////////////
        //目标选择逻辑
        //////////////////////////////////////////////////////////////////////////
        private Obj_Character m_selectTarget = null;      //选择的目标
        public Obj_Character SelectTarget
        {
            get { return m_selectTarget; }
            set { m_selectTarget = value; }
        }
        public void OnSelectTarget(GameObject targetObj, bool isMoveAgainSelect = true)
        {
            //如果targetObj为空，则进行取消选择逻辑
            //如果之前已经选择，则移动过去
            if (null != m_selectTarget && m_selectTarget.gameObject == targetObj)
            {
				if (isMoveAgainSelect && IsCanOperate_Move())
                {
                    MoveTo(targetObj.transform.position, targetObj, 1.0f);
					FaceTo(targetObj.transform.position);
                }
                return;
            }
            //如果选择的目标在播放技能范围的特效 切换目标时得 修改特效播放的对象
            if (CurPressSkillId != -1)
            {
                Tab_SkillEx _skillEx = TableManager.GetSkillExByID(CurPressSkillId, 0);
                if (_skillEx != null)
                {
                    if (_skillEx.RangeEffectType != -1 && _skillEx.RangeEffectTarType == (int)SKILLRANGEEFFECTTAR.SELECTTARGET)
                    {
                        m_selectTarget.StopSkillRangeEffect();
                    }
                }
            }
            //发包给服务器
            int SelObjId = -1;
            if (targetObj != null)
            {
                Obj npcScript = targetObj.GetComponent<Obj>();
                if (npcScript)
                {
                    SelObjId = npcScript.ServerID;
                }
            }

            CG_ASK_SELOBJ_INFO selPacket = (CG_ASK_SELOBJ_INFO)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_SELOBJ_INFO);
            selPacket.SetObjId(ServerID);
            selPacket.SetSeleobjId(SelObjId);
            selPacket.SendPacket();
        }

        public void UpdateSelectTarget()
        {
            //更新目标选取策略
            //距离为11
            if (null == m_selectTarget)
            {
                return;
            }

            float fMaxViewDis = 12.0f;
            //判断目标类型改变fMaxViewDis
            //如果是远程职业，距离为8，近战为4
            //if (Profession == (int)CharacterDefine.PROFESSION.XIAOYAO ||
            //    Profession == (int)CharacterDefine.PROFESSION.DALI)
            //{
            //    fMaxViewDis = 8.0f;
            //}
            //else
            //{
            //    fMaxViewDis = 4.0f;
            //}

            //再次根据目标选择，是否为其他玩家
            if (m_selectTarget.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                fMaxViewDis = 14.0f;
            }

            float distance = Vector3.Distance(m_selectTarget.gameObject.transform.position, m_ObjTransform.position);
            //按照之前的估计，一个屏幕的宽度大概为场景宽度的1/3~1/2，所以当玩家离NPC的距离为场景宽度的1/6的时候，进行取消选择逻辑
            if (distance > fMaxViewDis || IsDie())
            {
                OnSelectTarget(null);
                return;
            }
        }

        //////////////////////////////////////////////////////////////////////////
        // 坐骑相关
        //////////////////////////////////////////////////////////////////////////
        public override int MountID
        {
            get { return GameManager.gameManager.PlayerDataPool.m_objMountParam.MountID; }
            set { GameManager.gameManager.PlayerDataPool.m_objMountParam.MountID = value; }
        }

        public override void RideOrUnMount(int nMountID)
        {
            ShowRideOnEffect = true;
            base.RideOrUnMount(nMountID);
            GameManager.gameManager.PlayerDataPool.m_objMountParam.MountID = nMountID;
            
            if ( MountAndFellowLogic.Instance() != null )
            {
                MountAndFellowLogic.Instance().RefreshInfo();
            } 
        }
        // 是否装备坐骑
        public int GetEquipMountID()
        {
            return GameManager.gameManager.PlayerDataPool.m_objMountParam.MountID;
        }

        //////////////////////////////////////////////////////////////////////////
        // 伙伴相关
        //////////////////////////////////////////////////////////////////////////
        //当前召出伙伴服务器objid
        private int m_nCurFellowObjId = -1;
        public int CurFellowObjId
        {
            get { return m_nCurFellowObjId; }
            set { m_nCurFellowObjId = value; }
        }

        private UInt64 m_nCurrFellowGuid = GlobeVar.INVALID_GUID;
        public UInt64 CurFellowObjGuid
        {
            get { return m_nCurrFellowGuid; }
            set { m_nCurrFellowGuid = value; }
        }
        //当前召出伙伴
        public Obj_Fellow GetCurFellow()
        {
            if (m_nCurFellowObjId >= 0)
            {
                Obj_Character charobj = Singleton<ObjManager>.GetInstance().FindObjCharacterInScene(m_nCurFellowObjId);
                if (charobj != null && charobj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW)
                {
                    return charobj as Obj_Fellow;
                }
            }
            return null;
        }

        //private float m_fAutoHPDrugSecond = -16.0f;
        //private float m_fBuyHPDrugSecond = Time.realtimeSinceStartup;
        //private float m_fAutoMPDrugSecond = -16.0f;
        //private float m_fBuyMPDrugSecond = Time.realtimeSinceStartup;
        public void AutoUseHPMPDrug()
        {
            //设置挂机,自动吃药 tt198507不挂机也可以自动吃药
            if (/*GetAutoCombatState() &&*/ /*InCombat &&*/ AutoHpPercent * 0.99f * BaseAttr.MaxHP > BaseAttr.HP && IsDie() == false
                /* && !((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WUDAOZHIDIAN == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUASHANLUNJIAN == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_RICHANGJUEDOU == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_GUILDWAR == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_RICHANGJUEDOU == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WORLDBOSS == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WULINDAHUI == GameManager.gameManager.RunningScene)*/
               )
            {
                if (GameManager.gameManager.PlayerDataPool.HpItemCDTime <= 0)    //不可以连续发包
                {
                    if (AutoPercent((int)MedicSubClass.HP) == false)
                    {
                        //没药了.]
                        //                         if (GetAutoCombatState() && Time.realtimeSinceStartup - m_fBuyHPDrugSecond > 5 && AutoBuyDrug == true)
                        //                         {
                        //                             m_fBuyHPDrugSecond = Time.realtimeSinceStartup;
                        //                             OnAutoBuyDrug(AutoHpID);
                        //                         }
                        UpdateSelectDrug(); //重新选择药
                        AutoPercent((int)MedicSubClass.HP);

                    }

                }
            }

            //设置挂机,自动吃药 tt198507不挂机也可以自动吃药
            if (/*GetAutoCombatState() &&*/ /*InCombat &&*/ AutoMpPercent * 0.99f * BaseAttr.MaxMP > BaseAttr.MP && IsDie() == false
               /* && !((int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WUDAOZHIDIAN == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_HUASHANLUNJIAN == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_RICHANGJUEDOU == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_GUILDWAR == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_RICHANGJUEDOU == GameManager.gameManager.RunningScene
                    || (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_WORLDBOSS == GameManager.gameManager.RunningScene)*/
               )
            {
                if (GameManager.gameManager.PlayerDataPool.MpItemCDTime <= 0)    //不可以连续发包
                {
                    if (AutoPercent((int)MedicSubClass.MP) == false)
                    {
                        //没药了.
                        //                         if ( GetAutoCombatState() && Time.realtimeSinceStartup - m_fBuyMPDrugSecond > 5 && AutoBuyDrug == true )
                        //                         {
                        //                             m_fBuyMPDrugSecond = Time.realtimeSinceStartup;
                        //                             OnAutoBuyDrug(AutoMpID);
                        //                         }
                        UpdateSelectDrug(); //重新选择药
                        AutoPercent((int)MedicSubClass.MP);
                    }
                }
            }
        }

        public override void OptHPChange() //血量变化后的操作
        {
            //更新血条
            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().ChangeHP(BaseAttr.HP, BaseAttr.MaxHP);
            }
        }

        public override void OptMPChange()//法力变化后的操作
        {
            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().ChangeMP(BaseAttr.MP, BaseAttr.MaxMP);
            }
        }
        public override void OptXPChange()//XP变化后的操作
        {
            //             if (SkillBarLogic.Instance() != null)
            //             {
            //                 SkillBarLogic.Instance().ChangeXPEnergy(BaseAttr.XP, BaseAttr.MaxXP);
            //             }
            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().ChangeXPEnergy(BaseAttr.XP, BaseAttr.MaxXP);
            }

        }

        public void OnVipCostChange()
        {
            if (PlayerFrameLogic.Instance() != null)
            {
                PlayerFrameLogic.Instance().OnVipCostChange(VipCost);
            }
            if (RechargeBarLogic.Instance() != null)
            {
                RechargeBarLogic.Instance().OnVipCostChange(VipCost);
            }
            if (DungeonWindow.Instance() != null)
            {
                DungeonWindow.Instance().UpdateTabInfo();
            }
            //             if (VipData.GetVipLv() == GlobeVar.USE_AUTOFIGHT_VIPLEVEL)
            //             {
            //                 //vip2的时候选择自动强化
            //                 UpdateSelectEquip();
            //             }
            if (FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }
        }

        private int m_lastLevel = -1;
        public override void OptLevelChange()//等级变化后的操作
        {
            if (m_lastLevel > 0)
            {
                if (m_lastLevel != BaseAttr.Level)
                {
					PlayEffect(GlobeVar.PLAYERLEVELUPEFFECTID);
                    LevelUpController.ShowTipByID(1433);
                    GameManager.gameManager.SoundManager.PlaySoundEffect(240);
                    m_lastLevel = BaseAttr.Level;
                    //如果背包界面开着 刷新下背包物品显示（根据是否满足级别会有标红）
                    if (BackPackLogic.Instance())
                    {
                        BackPackLogic.Instance().UpdateBackPack();
                    }
                    //LevelUpButtonActive();
                    if (m_lastLevel >= GlobeVar.MAX_AUTOEQUIT_LIVE && VipData.GetVipLv() >= GlobeVar.USE_AUTOFIGHT_VIPLEVEL)
                    {
                        //vip2的时候选择自动强化
                        UpdateSelectEquip();
                    }
                    // 台湾安卓渠道特有
                    if (PlatformHelper.IsChannelTW())
                    {
                        // 提交等级排行榜数据
                        PlatformHelper.SubmitRankScore(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_RANK_TYPE.LEVEL, m_lastLevel);
                        // 解锁等级成就
                        if (m_lastLevel >= 100)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.LEVELUP_100);
                        }
                        else if (m_lastLevel >= 80)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.LEVELUP_80);
                        }
                        else if (m_lastLevel >= 70)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.LEVELUP_70);
                        }
                        else if (m_lastLevel >= 60)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.LEVELUP_60);
                        }
                        else if (m_lastLevel >= 50)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.LEVELUP_50);
                        }
                        else if (m_lastLevel >= 40)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.LEVELUP_40);
                        }
                        else if (m_lastLevel >= 20)
                        {
                            PlatformHelper.UnlockAchievement(Games.GlobeDefine.GameDefine_Globe.GOOGLEPLAY_ACHIEVEMENT_TYPE.LEVELUP_20);
                        }
                    }
                }
            }
            else
            {
                m_lastLevel = BaseAttr.Level;
                //InitLevelButtonActive();
            }
            if (null != PlayerFrameLogic.Instance())
            {
                PlayerFrameLogic.Instance().ChangeLev(BaseAttr.Level);
            }
            if (ExpLogic.Instance() != null)
            {
                ExpLogic.Instance().OnLevelChange();
            }
            if (FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateActionButtonTip();
                FunctionButtonLogic.Instance().UpdateDaliyLuckNum();
                FunctionButtonLogic.Instance().UpdateButtonAwardTips();
            }
            if (MoneyTreeButtonLogic.Instance())
            {
                MoneyTreeButtonLogic.Instance().UpdateTimerText();
            }

			if (NewFunctionLogic.Instance ())
			{
				NewFunctionLogic.Instance ().updateMoneyTreeTime();
			}
            if (SkillBarLogic.Instance() != null)
            {
                if (GetCurrentChangeState() == 0 )
                SkillBarLogic.Instance().UpdateTransformBtnShow(BaseAttr.Level >= GetSkillXp1LearnLevel());
            }            

            // 升级的时候给SDK同步一下当前角色信息
            LoginData.PlayerRoleData curData = LoginData.GetPlayerRoleData(PlayerPreferenceData.LastRoleGUID);
            if (null != curData)
            {
                PlatformHelper.RoleEnterGame(curData.guid.ToString(), curData.type.ToString(), curData.name, curData.level);
            }

        }

        public override void OptHeadPicChange()//头像变化后的操作
        {
            if (null != PlayerFrameLogic.Instance())
            {
                PlayerFrameLogic.Instance().ChangeHeadPic(BaseAttr.HeadPic);
            }

        }

        public override void OptNameChange()//名字变化后的操作
        {
            if (null != PlayerFrameLogic.Instance())
            {
                PlayerFrameLogic.Instance().ChangeName(BaseAttr.RoleName);
            }

            ShowNameBoard();

            //更新登陆界面信息
            for (int i = 0; i < LoginData.loginRoleList.Count; i++)
            {
                if (LoginData.loginRoleList[i].guid == GUID)
                {
                    LoginData.loginRoleList[i].name = BaseAttr.RoleName;
                    UserConfigData.AddRoleInfo();
                    break;
                }
            }
        }

        public override void OnExpChange()
        {
            if (ExpLogic.Instance() != null)
            {
                ExpLogic.Instance().UpdateExp();
            }
            if (TrainingLogic.Instance() != null)
            {
                TrainingLogic.Instance().InitCurrentExp();
            }
        }

        public void OnOffLineExpChange()
        {
            if (ExpLogic.Instance() != null)
            {
                ExpLogic.Instance().UpdateOffLineExp();
            }
        }

        public override void OptForceChange()//势力变化后的操作
        {
            base.OptForceChange();
            //重置周围玩家名字颜色
            Dictionary<string, Obj> targets = Singleton<ObjManager>.GetInstance().ObjPools;
            foreach (Obj targetObj in targets.Values)
            {
                if (targetObj != null && targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    Obj_OtherPlayer _Player = targetObj as Obj_OtherPlayer;
                    if (_Player)
                    {
                        _Player.SetNameBoardColor();
                    }
                }
            }
        }

        public void AskCombatValue(bool bPowerRemind)
        {
            CG_COMBATVALUE_ASK packet = (CG_COMBATVALUE_ASK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_COMBATVALUE_ASK);
            packet.ShowPowerRemind = bPowerRemind ? 1 : 0;
            packet.SendPacket();
        }

        //死亡相关
        private int m_nReliveEntryTime = 0;//记录复活剩余秒
        public int ReliveEntryTime
        {
            get { return m_nReliveEntryTime; }
            set { m_nReliveEntryTime = value; }
        }
        public override bool OnCorpse()
        {
            base.OnCorpse();
            //BaseAttr.Die = true;
            // 死亡 弹出复活UI
            UIManager.ShowUI(UIInfo.Relive);
            //切换到死亡状态
            //CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_DEATH;
            return true;
        }
        //Obj死亡时候调用
        public override bool OnDie()
        {
            if (IsDie())
            {
                return false;
            }
            base.OnDie();
            //BaseAttr.Die = true;
            // 死亡 弹出复活UI

            // 玩家死亡停止自动寻路
            if (null != GameManager.gameManager.AutoSearch)
            {
                GameManager.gameManager.AutoSearch.Stop();
            }

            if (null != NavAgent)
            {
                Destroy(NavAgent);
            }

            if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            {
                Cutscene.CutsceneManager.Instance.OnPlayerDieInDunHuang();
            }
            else
            {
                UIManager.ShowUI(UIInfo.Relive);
            }
            JoyStickLogic.Instance().ReleaseJoyStick();
            ProcessInput.Instance().SceneTouchFingerID = -1;
            //JoyStickLogic.Instance().CloseWindow();
            UpdateAutoAnteMortem();
            return true;
        }
        public override bool OnRelife()
        {
            base.OnRelife();
            //BaseAttr.Die = false;
            // 复活 关闭复活UI
            UIManager.CloseUI(UIInfo.Relive);
            //JoyStickLogic.Instance().OpenWindow();
            //CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
            UpdateAutoAnteMortem();
            return true;
        }
        public override void OptChangPKModle()
        {
            base.OptChangPKModle();
            //重置周围玩家名字颜色
            Dictionary<string, Obj> targets = Singleton<ObjManager>.GetInstance().ObjPools;
            foreach (Obj targetObj in targets.Values)
            {
                if (targetObj != null && targetObj.ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
                {
                    Obj_OtherPlayer _Player = targetObj as Obj_OtherPlayer;
                    if (_Player)
                    {
                        _Player.SetNameBoardColor();
                    }
                }
            }
            //显示不同状态的按钮
            //if (FunctionButtonLogic.Instance() != null)
            //{
            //    FunctionButtonLogic.Instance().m_PKKillBt.SetActive(false);
            //    FunctionButtonLogic.Instance().m_PKNormalBt.SetActive(false);
            //    if (PkModle == (int)CharacterDefine.PKMODLE.NORMAL)
            //    {
            //        FunctionButtonLogic.Instance().m_PKNormalBt.SetActive(true);
            //    }
            //    else if (PkModle == (int)CharacterDefine.PKMODLE.KILL)
            //    {
            //        FunctionButtonLogic.Instance().m_PKKillBt.SetActive(true);
            //    }
            //}
        }

        public override Color GetNameBoardColor()
        {
            string strColor = "FFFFFF";

            if (IsCanPKLegal)
            {
                strColor = "003300";
            }
            else if (PkModle == (int)CharacterDefine.PKMODLE.KILL)
            {
                strColor = "FF00FF";
            }
            else
            {
                strColor = "06FBED";
            }

            return GCGame.Utils.GetColorByString(strColor);
        }

        private bool m_bIsInModelStory = false;
        public bool IsInModelStory
        {
            get { return m_bIsInModelStory; }
            set { m_bIsInModelStory = value; }
        }

        private bool m_bIsNoMove = false;
        public bool IsNoMove
        {
            get { return m_bIsNoMove; }
            set
            {
                m_bIsNoMove = value;
            }
        }

        public void SendNoticMsg(bool IsFilterRepeat, string strMsg, params object[] args)
        {
            GUIData.AddNotifyData2Client(IsFilterRepeat, strMsg, args);
        }

        //玩家是否接受外部移动指令
        public bool IsCanOperate_Move()
        {
            if (IsLightState)
            {
                return false;
            }

            if (QingGongState)
            {
                return false;
            }
            if (IsDie())
            {
                return false;
            }
            if (CurObjAnimState == Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_ATTACKDOWN)
            {
                return false;
            }

            if (AcceleratedMotion != null && AcceleratedMotion.Going == true)
            {
                return false;
            }

            if (m_SkillCore != null &&
                m_SkillCore.IsUsingSkill &&
                m_SkillCore.UsingSkillBaseInfo != null &&
                m_SkillCore.UsingSkillExInfo != null)
            {

                //使用的技能中 不能移动释放且不能被移动打断 则不让移动
                if (m_SkillCore.UsingSkillBaseInfo.IsMove == 0 &&
                    m_SkillCore.UsingSkillBaseInfo.IsMoveBreak == 0)
                {
                    
                    return false;
                }

                if ((m_SkillCore.UsingSkillBaseInfo.SkillClass & (int)SKILLCLASS.AUTOREPEAT) != 0)
                {
                    float _ElapseTime = Time.time - m_fLastClickAttackBtTime;
                    if (_ElapseTime < 1.5f)
                    {
                        return false;
                    }
                }

            }
            //有绑定父节点
            if (BindParent > 0)
            {
                return false;
            }
            if (m_bIsInModelStory)
            {
                return false;
            }
            if (m_bIsNoMove)
            {
                return false;
            }
            if (IsHaveNoMoveBuff()) //有禁止移动的BUFF
            {
                return false;
            }

            if(IsFirstUseCrash)
            {
                return false;
            }
            return true;
        }

        //玩家轻功部分处理
        public override void BeginQingGong(GameEvent _event)
        {
            ReqHideFellow();
            base.BeginQingGong(_event);
            ProcessQingGongStart();
        }

        public override void EndQingGong()
        {
            base.EndQingGong();
            ProcessQingGongOver();
            ReqShowFellow();
        }

        //玩家轻功开始之后，强制更新一下轻功点给服务器
        public void SycQingGongPos(Vector3 pos)
        {
            //新Obj同步机制修改，改用CG_MOVE包
            CG_MOVE movPacket = (CG_MOVE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_MOVE);
            movPacket.Poscount = 1;
            movPacket.AddPosx((int)(pos.x * 100));
            movPacket.AddPosz((int)(pos.z * 100));
            if (IsMoving)
            {
                movPacket.Ismoving = 1;
            }
            else
            {
                movPacket.Ismoving = 0;
            }
            movPacket.SendPacket();
        }

        private int m_ModelStoryID = GlobeVar.INVALID_ID;
        public int ModelStoryID
        {
            get { return m_ModelStoryID; }
            set { m_ModelStoryID = value; }
        }
        void ProcessQingGongStart()
        {
            /*if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_CANGJINGGE)
            {
                IsInModelStory = true;
            }*/
        }
        void ProcessQingGongOver()
        {
            // 对雁门关的特殊处理，注掉
            //if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO &&
            //    QingGongPointID == GlobeVar.YanmMenGuan_QingGongID_Over)
            //{
            //    if (m_ModelStoryID == GlobeVar.YanMenGuan_ModelStoryID)
            //    {
            //        StoryDialogLogic.ShowStory(GlobeVar.YanMenGuan_BossStory1ID);
            //    }
            //}
            /*if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_CANGJINGGE)
            {
                IsInModelStory = false;
            }*/
        }

        //切磋
        public UInt64 DuelTargetGuid { set; get; }
        //
        public void ReqDuel(UInt64 targetGuid)
        {
            //向服务器发送邀请某人加入队伍消息
            CG_DUEL_REQUEST msg = (CG_DUEL_REQUEST)PacketDistributed.CreatePacket(MessageID.PACKET_CG_DUEL_REQUEST);
            msg.Guid = targetGuid;
            msg.SendPacket();
        }

        public void DuelWithMe(UInt64 targetGuid, string name)
        {
            DuelTargetGuid = targetGuid;
            string text = StrDictionary.GetClientDictionaryString("{#1666}", name);
            string title = Utils.GetDicByID(1657);
            MessageBoxLogic.OpenOKCancelBox(text, title, AgreeDuelWithOther, RefuseDuelWithOther);
        }

        public void AgreeDuelWithOther() { DecideDuelWithOrNot(1); }
        public void RefuseDuelWithOther() { DecideDuelWithOrNot(0); }

        public void DecideDuelWithOrNot(int agree)
        {
            CG_DUEL_RESPONSE msg = (CG_DUEL_RESPONSE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_DUEL_RESPONSE);
            msg.Guid = DuelTargetGuid;
            msg.Agree = agree;
            msg.SendPacket();
        }

        //----
        private int m_SpcialAnimationID = -1;
        private Obj_Client m_SpcicalClient1;
        private Obj_Client m_SpcicalClient2;

        public void OnStartPlayStory(int storyID)
        {
            switch (storyID)
            {
                case 16:
                    CreateObjFunction.CreateModelStoryObj(170, "JXZFastMove1", ProcessCharFastMoveToMainPlayerAsycLoadOver);
                    break;
                case 17:
                    CreateObjFunction.CreateModelStoryObj(171, "JXZFastMove1", ProcessCharFastMoveToMainPlayerAsycLoadOver);
                    CreateObjFunction.CreateModelStoryObj(172, "JXZFastMove1", ProcessCharFastMoveToMainPlayerAsycLoadOver);
                    break;
                case 18: // 45 ,45
                    CreateObjFunction.CreateModelStoryObj(173, "JXZFastMove1", ProcessCharFastMoveToMainPlayerAsycLoadOver);
                    break;
                case 19: // 36
                    m_SpcialAnimationID = 2;
                    CreateObjFunction.CreateModelStoryObj(174, "JXZPlaySPAni1", ProcessCharFastMoveToMainPlayerAsycLoadOver);
                    break;
                case 20: // 37
                    m_SpcialAnimationID = 2;
                    CreateObjFunction.CreateModelStoryObj(175, "JXZPlaySPAni2", ProcessCharFastMoveToMainPlayerAsycLoadOver);
                    break;
            }
        }

        public void RemoveAllSpicalClient()
        {
            RemoveSpicalClient(1);
            RemoveSpicalClient(2);
        }

        public void OnPlayStoryOver(int storyID)
        {
            switch (storyID)
            {
                case 16:
                    RemoveSpicalClient(1);
                    break;
                case 17: // 45 ,45
                    RemoveSpicalClient(1);
                    RemoveSpicalClient(2);
                    break;
                case 18: // 36
                    RemoveSpicalClient(1);
                    break;
                case 19: // 37
                    RemoveSpicalClient(1);
                    break;
                case 20: // 46
                    RemoveSpicalClient(1);
                    break;
//                case GlobeVar.YanMenGuan_BeforeQingGongStoryID:
//                    m_bIsInModelStory = true;
//                    break;
                case GlobeVar.Demo_RideIntorStoryID:
                    //UIManager.ShowUI(UIInfo.PicGuideRoot);
                    //PicGuideLogic.m_NewPlayerGuideIndex = 0;
                    break;
                //case GlobeVar.YanMenGuan_BossStory1ID:
                //    if (!m_bIsInModelStory)
                //    {
                //        m_bIsInModelStory = true;
                //    }
                //    Singleton<ObjManager>.Instance.CreateModelStoryObj(363, "play-effect", ProcessQingGongCharAsycLoadOver);
                //    Singleton<ObjManager>.Instance.CreateModelStoryObj(362, "non-effect", ProcessQingGongBossAsycLoadOver);
                //    break;

            }

            if (Cutscene.CutsceneActionStoryDialog.IsNeedSilentMode(storyID))
            {
                m_bIsInModelStory = false;
            }
        }

        private void RemoveSpicalClient(int idx)
        {
            if (idx == 1 && null != m_SpcicalClient1)
            {
                Singleton<ObjManager>.Instance.ReomoveObjInScene(m_SpcicalClient1.gameObject);
                m_SpcicalClient1 = null;
            }
            else if (idx == 2 && null != m_SpcicalClient2)
            {
                Singleton<ObjManager>.Instance.ReomoveObjInScene(m_SpcicalClient2.gameObject);
                m_SpcicalClient2 = null;
            }
        }

        public void ProcessQingGongCharAsycLoadOver(object param1, object param2)
        {
            if (null == param1)
            {
                return;
            }

            Obj_Client curCharacter = (Obj_Client)param1;
            if (null == curCharacter)
                return;

            Transform transShadow = curCharacter.gameObject.transform.FindChild("Shadow");
            if (transShadow != null)
            {
                transShadow.gameObject.SetActive(false);
            }

            Vector3 charPosition = new Vector3(9.1f, 0, 55.6f);
            curCharacter.Position = ActiveScene.GetTerrainPosition(charPosition);
            curCharacter.Rotation = Quaternion.Euler(new Vector3(0, 90, 0));

            if (null != curCharacter.AnimLogic)
                curCharacter.AnimLogic.Play(GlobeVar.YanMenGuan_QiaoFengAni);

            if (null != GameManager.gameManager.SoundManager)
                GameManager.gameManager.SoundManager.PlaySoundEffect(107);   //ymgw_hyr
        }

        public void ProcessQingGongBossAsycLoadOver(object param1, object param2)
        {
            if (null == param1)
            {
                return;
            }

            Obj_Client curBoss = (Obj_Client)param1;
            if (null == curBoss)
                return;

            Transform transShadow = curBoss.gameObject.transform.FindChild("Shadow");
            if (transShadow != null)
            {
                transShadow.gameObject.SetActive(false);
            }

            Vector3 bossPosition = new Vector3(9.2f, 0, 55.5f);
            curBoss.Position = ActiveScene.GetTerrainPosition(bossPosition);
            curBoss.Rotation = Quaternion.Euler(new Vector3(0, 90, 0));

            if (null != curBoss.AnimLogic)
                curBoss.AnimLogic.Play(GlobeVar.YanMenGuan_BossAni);
        }

        public void ProcessCharFastMoveToMainPlayerAsycLoadOver(object param1, object param2)
        {
            if (null == param1)
            {
                return;
            }
            if (null == m_SpcicalClient1)
            {
                m_SpcicalClient1 = (Obj_Client)param1;

                if (null != m_SpcicalClient1)
                    FastMoveToMainPlayer(m_SpcicalClient1, 8.0f);
            }
            else if (null == m_SpcicalClient2)
            {
                m_SpcicalClient2 = (Obj_Client)param1;

                if (null != m_SpcicalClient2)
                    FastMoveToMainPlayer(m_SpcicalClient2, -8.0f);
            }

        }
        public void FastMoveToMainPlayer(Obj_Client oclient, float diffZ)
        {
            Vector3 pos = new Vector3(Position.x, Position.y, Position.z + diffZ);
            float fastMoveSpeed = Vector3.Distance(pos, Position) / 0.1f;
            oclient.Position = pos;
            oclient.FaceTo(Position);
            oclient.BaseAttr.MoveSpeed = fastMoveSpeed;
            oclient.MoveTo(Position);
        }

        public void ProcessCharPlayAnimationAsycLoadOver(object param1, object param2)
        {
            if (null == param1)
            {
                return;
            }
            if (null == m_SpcicalClient1)
            {
                m_SpcicalClient1 = (Obj_Client)param1;
                m_SpcicalClient1.Position = Position;
                if (m_SpcialAnimationID >= 0)
                {
                    m_SpcicalClient1.PlayEffect(m_SpcialAnimationID);
                    m_SpcialAnimationID = -1;
                }
            }
        }

        public int CurFashionID
        {
            get { return GameManager.gameManager.PlayerDataPool.CurFashionID; }
            set { GameManager.gameManager.PlayerDataPool.CurFashionID = value; }
        }

        public override int ModelVisualID
        {
            get { return GameManager.gameManager.PlayerDataPool.ModelVisualID; }
            set { GameManager.gameManager.PlayerDataPool.ModelVisualID = value; }
        }
        /// <summary>
        /// 硬编码玩家装备
        /// </summary>
        public void InitYanMenGuanWaiVisual()
        {
            ModelVisualID = 18;
            CurWeaponDataID = 52188;
            WeaponEffectGem = 8909;
        }

        /// <summary>
        /// added by mawenbin
        /// 拼接组队藏经阁队长开启副本的描述
        /// </summary>
        private string SpliceTeamLeadCJGInviteDescription()
        {
            string sDescription = string.Empty;
            if (null != GameManager.gameManager.PlayerDataPool.TeamInfo)
            {
                for (int ii = 0; ii < GlobeVar.MAX_TEAM_MEMBER; ++ii)
                {
                    TeamMember rMember = GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(ii);
                    if (null != rMember && rMember.IsValid())
                    {
                        sDescription += StrDictionary.GetClientDictionaryString("#{10825}", rMember.MemberName, rMember.TeamCJGTier);
                    }
                }
            }
            sDescription += StrDictionary.GetClientDictionaryString("#{10826}");
            return sDescription;
        }

        /// <summary>
        /// added by mawenbin
        /// 拼接组队藏经阁邀请队员进入副本的描述
        /// <param name="sInviterName">邀请者（队长）名字</param>
        /// </summary>
        public string SpliceTeamMemberCJGInviteDescription(string sInviterName)
        {
            string sDescription = string.Empty;
            if (null != GameManager.gameManager.PlayerDataPool.TeamInfo)
            {
                for (int ii = 0; ii < GlobeVar.MAX_TEAM_MEMBER; ++ii)
                {
                    TeamMember rMember = GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMember(ii);
                    if (null != rMember && rMember.IsValid())
                    {
                        sDescription += StrDictionary.GetClientDictionaryString("#{10825}", rMember.MemberName, rMember.TeamCJGTier);
                    }
                }
            }
            sDescription += StrDictionary.GetClientDictionaryString("#{10827}", sInviterName);
            return sDescription;
        }

        private int m_nCopySceneId = -1;
        private int m_nCopySceneSingle = -1;
        private int m_nCopySceneDifficult = -1;
        public void SendOpenScene(int nSceneId, int nSingle, int nDifficult)
        {
            if (ExitTime > 0 && GameManager.gameManager.PlayerDataPool.CopySceneChange)   //正在副本倒计时,不能进入其他副本,有可能会导致离开和进入副本同时发包,造成逻辑bug
            {
                SendNoticMsg(false, "#{3277}");
            }

			if (nDifficult <= 0)
				return;

            m_nCopySceneId = nSceneId;
            m_nCopySceneSingle = nSingle;
            m_nCopySceneDifficult = nDifficult;
            string dicStr = "";
            if (GameManager.gameManager.ActiveScene.IsCopyScene())
            {
                dicStr = StrDictionary.GetClientDictionaryString("#{1853}");
            }
            else
            {
                //added by mawenbin
                //藏经阁进入副本特殊处理
                if ((int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI == nSceneId)
                {
                    //单人
                    if ((int)GameDefine_Globe.CopyScene_PlayType.SINGLE == nSingle)
                    {
                        if (GameDefine_Globe.MAX_COPYSCENE_CJGTIER < nDifficult)
                        {
                            nDifficult = GameDefine_Globe.MAX_COPYSCENE_CJGTIER;
                        }
                        
                        dicStr = StrDictionary.GetClientDictionaryString("#{10829}", nDifficult);
                    }
                    //组队
                    else if ((int)GameDefine_Globe.CopyScene_PlayType.MULTIPLE == nSingle)
                    {
                        if (GameManager.gameManager.PlayerDataPool.IsHaveTeam())
                        {
                            //不是队长
                            if (!IsTeamLeader())
                            {
                                SendNoticMsg(false, "#{1530}");
                                return;
                            }
                            else
                            {
                                dicStr = SpliceTeamLeadCJGInviteDescription();
                            }
                        }
                        else
                        {
                            SendNoticMsg(false, "#{1530}");
                            return;
                        }
                    }
                }
                else
                {
                    dicStr = StrDictionary.GetClientDictionaryString("#{1854}");
                }
            }
            MessageBoxLogic.OpenOKCancelBox(dicStr, "", OnOpenCopySceneOK, OnOpenCopySceneNO);
        }
        public void OnOpenCopySceneOK()
        {
            // 组队副本 又有队伍 还不是队长
            if (m_nCopySceneSingle == 2 &&
                GameManager.gameManager.PlayerDataPool.IsHaveTeam() &&
                !IsTeamLeader())
            {
                SendNoticMsg(false, "#{1530}");
                return;
            }
            CG_OPEN_COPYSCENE packet = (CG_OPEN_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_OPEN_COPYSCENE);
            packet.SceneID = m_nCopySceneId;
            packet.Type = m_nCopySceneSingle;
            //modified by mawenbin
            //进入藏经阁副本时m_nCopySceneDifficult为当前挑战藏经阁的层数；
            //服务器要求packet.Difficult的区间为[1,3]，否则Assert失败，直接将玩家踢下线；
            //进入藏经阁副本时，服务器不需要客户端发送packet.Difficult
            if ((int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_HUNDUNZHIDI != m_nCopySceneId)
            {
                packet.Difficult = m_nCopySceneDifficult;
            }
            packet.SendPacket();
        }
        public void OnOpenCopySceneNO()
        {

        }

        // 随玩家等级开放按钮，貌似已弃用
        //void LevelUpButtonActive()
        //{
        //    if (MenuBarLogic.Instance() != null)
        //    {
        //        MenuBarLogic.Instance().LevelUpButtonActive();
        //    }
        //    if (FunctionButtonLogic.Instance() != null)
        //    {
        //        FunctionButtonLogic.Instance().LevelUpButtonActive();
        //    }
        //}

        void InitLevelButtonActive()
        {
            if (MenuBarLogic.Instance() != null)
            {
                MenuBarLogic.Instance().InitButtonActive();
            }
            if (FunctionButtonLogic.Instance() != null)
            {
                FunctionButtonLogic.Instance().InitButtonActive();
            }
        }

        // 体能恢复倒计时
        private float m_StaminaCoutDownTimer = GlobeVar.INVALID_ID;

        public int GetStaminaFull()
        {
            return (int)GlobeVar.MAX_STAMINA + BaseAttr.Level;
        }

        void StaminaTimerFunc()
        {
            if (m_StaminaCoutDownTimer != GlobeVar.INVALID_ID)
            {
                // 计时中
                if (GameManager.gameManager.PlayerDataPool.StaminaCountDown == GlobeVar.INVALID_ID)
                {
                    m_StaminaCoutDownTimer = GlobeVar.INVALID_ID;
                }
                if (Time.fixedTime - m_StaminaCoutDownTimer >= 1)
                {
                    if (GameManager.gameManager.PlayerDataPool.StaminaCountDown > 0)
                    {
                        GameManager.gameManager.PlayerDataPool.StaminaCountDown -= 1;

                        if (LivingSkillLogic.Instance() != null)
                        {
                            LivingSkillLogic.Instance().UpdateCountDownLabel();
                        }
                    }
                    m_StaminaCoutDownTimer = Time.fixedTime;
                }
            }
            else
            {
                // 未计时
                if (GameManager.gameManager.PlayerDataPool.StaminaCountDown != GlobeVar.INVALID_ID)
                {
                    m_StaminaCoutDownTimer = Time.fixedTime;
                }
            }
        }

        public void ReqViewOtherPlayer(UInt64 targetGuid, OtherRoleViewLogic.OPEN_TYPE oPenType)
        {
            //向服务器发送查看属性消息
            CG_ASK_OTHERROLE_DATA askPak = (CG_ASK_OTHERROLE_DATA)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_OTHERROLE_DATA);
            askPak.SetGuid(targetGuid);
            askPak.SendPacket();
            OtherRoleViewLogic.SetOpenType(oPenType);
        }

        public void ReqHideFellow()
        {
            //请求隐藏伙伴
            if (CurFellowObjId == -1)
            {
                return;
            }
            CG_ASK_HIDE_FELLOW askPak = (CG_ASK_HIDE_FELLOW)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_HIDE_FELLOW);
            askPak.SetType(1);
            askPak.SendPacket();
        }

        public void ReqShowFellow()
        {
            //请求显示伙伴
            CG_ASK_SHOW_FELLOW askPak = (CG_ASK_SHOW_FELLOW)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_SHOW_FELLOW);
            askPak.SetPosx((int)(this.Position.x * 100));
            askPak.SetPosz((int)(this.Position.z * 100));
            askPak.SetType(1);
            askPak.SendPacket();
        }

        public bool IsInJianYu()
        {
            /*return GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_JIANYU;*/
            return false;
        }

        public void UseItem(GameItem item)
        {
            if (false == item.IsMountItem())
            {
                CG_USE_ITEM useitem = (CG_USE_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_ITEM);
                useitem.SetItemguid(item.Guid);
                useitem.SendPacket();
                return;
            }
            UseMountItem(item);
        }

        void UseMountItem(GameItem item)
        {
            int nMountID = item.GetMountId();
            if (nMountID < 0 || nMountID >= GameManager.gameManager.PlayerDataPool.m_objMountParam.MountCollect.Length)
            {
                CG_USE_ITEM useitem = (CG_USE_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_ITEM);
                useitem.SetItemguid(item.Guid);
                useitem.SendPacket();
                return;
            }

            if (0 == GameManager.gameManager.PlayerDataPool.m_objMountParam.MountCollect[nMountID])
            {
                CG_USE_ITEM useitem = (CG_USE_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_ITEM);
                useitem.SetItemguid(item.Guid);
                useitem.SendPacket();
                return;
            }

            m_CurUseMountItemGuid = item.Guid;
            string strTip = "";
            if (GameManager.gameManager.PlayerDataPool.m_objMountParam.GetMoountLeftTime(nMountID) < 0)
            {
                //已经拥有永久坐骑
                strTip = StrDictionary.GetClientDictionaryString("#{2969}", item.GetName());
            }
            else
            {
                if (item.IsTimeLimitItem())
                {
                    float fItemLeftDays = (float)item.GetLeftTime() / (float)86400;
                    int nLeftDays = Mathf.RoundToInt(fItemLeftDays);
                    strTip = StrDictionary.GetClientDictionaryString("#{2967}", item.GetName(), nLeftDays);
                }
                else
                {
                    strTip = StrDictionary.GetClientDictionaryString("#{2968}");
                }
            }
            string strTitle = StrDictionary.GetClientDictionaryString("#{1000}");
            MessageBoxLogic.OpenOKCancelBox(strTip, strTitle, OnUseMountItemOk, null);
        }

        void OnUseMountItemOk()
        {
            CG_USE_ITEM useitem = (CG_USE_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_ITEM);
            useitem.SetItemguid(m_CurUseMountItemGuid);
            useitem.SendPacket();
            m_CurUseMountItemGuid = GlobeVar.INVALID_GUID;
        }

        public bool CheckUseItem(GameItem item)
        {
            Tab_CommonItem ci = TableManager.GetCommonItemByID(item.DataID, 0);
            if (ci != null)
            {
                bool professionCheck = false;
                if (ci.ProfessionRequire == -1 || Profession == ci.ProfessionRequire)
                {
                    professionCheck = true;
                }
                else
                {
                    GUIData.AddNotifyData2Client(false, "#{11459}");
                }
                int canuse = ci.CanUse;
                if (canuse == 1 && professionCheck)
                {
                    return true;
                }
            }
            return false;
        }

        public void EquipItem(GameItem item)
        {
            CG_EQUIP_ITEM equipitem = (CG_EQUIP_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIP_ITEM);
            equipitem.SetEquipguid(item.Guid);
            equipitem.SendPacket();

            if (EquipRemindLogic.Instance() != null && EquipRemindLogic.Instance().m_EquipRemind.activeInHierarchy)
            {
                if (EquipRemindLogic.Instance().GetCurEquipGuid() == item.Guid)
                {
                    EquipRemindLogic.Instance().CloseCurEquip();
                }
            }
        }

        public bool CheckEquipItem(GameItem item)
        {
            return true;
        }

        public void UnEquipItem(GameItem item)
        {
            //背包是否还有空间
            if (GameManager.gameManager.PlayerDataPool.BackPack.GetCanContainerSize() <= 0)
            {
                Singleton<ObjManager>.Instance.MainPlayer.SendNoticMsg(false, "#{2102}");
                return;
            }

            CG_UNEQUIP_ITEM equipitem = (CG_UNEQUIP_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_UNEQUIP_ITEM);
            equipitem.SetEquipguid(item.Guid);
            equipitem.SendPacket();

            if (BackPackLogic.Instance() != null)
            {
                BackPackLogic.Instance().TakeOffGuid = item.Guid;
            }

            if (RoleViewLogic.Instance() != null)
            {
                RoleViewLogic.Instance().TakeOffGuid = item.Guid;
            }
        }

        public bool CheckUnEquipItem(GameItem item)
        {
            return true;
        }

        public void ThrowItem(GameItem item)
        {
            CG_THROW_ITEM equipitem = (CG_THROW_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_THROW_ITEM);
            equipitem.SetItemguid(item.Guid);
            equipitem.SendPacket();
        }

        public bool CheckThrowItem(GameItem item)
        {
            return true;
        }

        //宝石孔是否满足级别需求
        public bool CheckLevelForGemSlot(int slotindex)
        {
            Tab_GemOpenLimit line = TableManager.GetGemOpenLimitByID(slotindex + 1, 0);
            if (line != null)
            {
                if (line.OpenLevel > BaseAttr.Level)
                {
                    return false;
                }
            }
            return true;
        }

        //此装备位是否已有相同属性宝石
        public bool IsSameGemForEquipSlot(int gemId, int equipSlot)
        {
            Tab_GemAttr gemLine = TableManager.GetGemAttrByID(gemId, 0);
            if (gemLine == null)
            {
                return false;
            }

            for (int i = 0; i < (int)GemSlot.OPEN_NUM; i++)
            {
                int otherGemId = GameManager.gameManager.PlayerDataPool.GemData.GetGemId(equipSlot, i);
                if (otherGemId > 0)
                {
                    Tab_GemAttr otherGemLine = TableManager.GetGemAttrByID(otherGemId, 0);
                    if (otherGemLine != null)
                    {
                        if (gemLine.AttrClass == otherGemLine.AttrClass)
                        {
                            return true;
                        }
                    }
                }
            }

            return false;
        }
        public void InitCangJingGeInfo()
        {
            GameManager.gameManager.PlayerDataPool.StartSweep = false;
            GameManager.gameManager.PlayerDataPool.CangJIngGeTier = 0;
            GameManager.gameManager.PlayerDataPool.CangJIngGeSecond = Time.realtimeSinceStartup;
        }

        public void CangKuPutIn(GameItem item)
        {
            CG_PUT_ITEM_STORAGEPACK pak = (CG_PUT_ITEM_STORAGEPACK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_PUT_ITEM_STORAGEPACK);
            pak.SetGuid(item.Guid);
            pak.SetPage(0);
            pak.SendPacket();
        }

        public void CangKuTakeOut(GameItem item)
        {
            CG_TAKE_ITEM_STORAGEPACK pak = (CG_TAKE_ITEM_STORAGEPACK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_TAKE_ITEM_STORAGEPACK);
            pak.SetGuid(item.Guid);
            pak.SetPage(0);
            pak.SendPacket();
        }

        public int GetTotalEquipCombatValue()
        {
            int totalCombatValue = 0;
            GameItemContainer itempack = GameManager.gameManager.PlayerDataPool.EquipPack;
            for (int index = 0; index < itempack.ContainerSize; index++)
            {
                GameItem equip = itempack.GetItem(index);
                if (equip != null && equip.IsValid())
                {
                    totalCombatValue += equip.GetCombatValue();
                }
            }
            return totalCombatValue;
        }

        public int GetTotalGemCombatValue()
        {
            int totalCombatValue = 0;
            for (int i = 0; i < (int)EquipPackSlot.Slot_NUM; i++)
            {
                for (int index = 0; index < (int)GemSlot.OPEN_NUM; index++)
                {
                    int gemId = GameManager.gameManager.PlayerDataPool.GemData.GetGemId(i, index);
                    if (gemId > 0)
                    {
                        totalCombatValue += GemData.GetGemCombatValue(gemId);
                    }
                }
            }
            return totalCombatValue;
        }

        public int GetTotalFellowCombatValue()
        {
            int totalCombatValue = 0;
            FellowContainer fellowpack = GameManager.gameManager.PlayerDataPool.FellowContainer;
            for (int index = 0; index < fellowpack.ContainerSize; index++)
            {
                Fellow.Fellow fellow = fellowpack.GetFellowByIndex(index);
                if (fellow != null && fellow.IsValid())
                {
                    if (fellow.Called)
                    {
                        totalCombatValue += fellow.GetCombatValue();
                    }
                }
            }
            return totalCombatValue;
        }
        public bool IsNameWithCombineServerSign()
        {
            if (!Singleton<ObjManager>.Instance.MainPlayer)
            {
                return false;
            }
            if (Singleton<ObjManager>.Instance.MainPlayer.BaseAttr.RoleName.Contains("*"))
            {
                return true;
            }
            return false;
        }

        //发起轻功操作
        public void UseLightSkill()
        {
            //判断轻功功能是否开启
            if (false == GameManager.gameManager.PlayerDataPool.IsServerFlagOpen(SERVER_FLAGS_ENUM.FLAG_LIGHTSKILL))
                return;

            //如果已经在轻功状态并且还未激活二段跳，则无法使用技能
            //if (IsLightState && !m_bIsLightSecondStepState)
            //    return;

            ////如果已经是在轻功状态并且激活了二段跳，则不使用轻功技能
            //if (IsLightState && m_bIsLightSecondStepActived)
            //    return;


            //是否正在使用技能
            //if (null != m_SkillCore && m_SkillCore.IsUsingSkill)
            //{
            //    //当前状态无法使用轻功
            //    SendNoticMsg(false, "#{4582}");
            //    return;
            //}

            //是否为骑乘状态
            //if (MountID > 0)
            //{
            //    //当前状态无法使用轻功
            //    SendNoticMsg(false, "#{4582}");
            //    return;
            //}

            // 跟随 不让使用
            if (true == IsInTeamFollow)
            {
                //当前状态无法使用轻功
                SendNoticMsg(false, "#{4582}");
                return;
            }

            //判断该场景是否可以使用轻功
            Tab_SceneClass sceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
            if (null != sceneClass)
            {
                if (sceneClass.IsCanUseLight != 1)
                {
                    //该场景无法使用轻功
                    SendNoticMsg(true, "#{4581}");
                    return;
                }
            }

            int nStep = 1;
            //默认想服务器申请使用一段跳，如果正在轻功状态并且二段跳已经可以使用并且未激活，则申请发起二段跳
            //if (IsLightState && m_bIsLightSecondStepState && !m_bIsLightSecondStepActived)
            //{
            //    nStep = 2;
            //}

            if (nStep > GameManager.gameManager.PlayerDataPool.MainPlayerBaseAttr.LightSkillLevel)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{4014}");    //未学会轻功，无法使用
                return;
            }

            //判断XP值是否够用
            //一次消耗20%的战意
            if (BaseAttr.XP < BaseAttr.MaxXP / 5)
            {
                Singleton<ObjManager>.GetInstance().MainPlayer.SendNoticMsg(false, "#{4015}");    //XP不足，无法使用
                return;
            }

            if (null != ObjTransform)
            {
                CG_USE_LIGHT_SKILL msg = (CG_USE_LIGHT_SKILL)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_LIGHT_SKILL);
                msg.Step = nStep;
                msg.Dir = (Int32)(Utils.DirClientToServer(ObjTransform.rotation) * 100);
                msg.SendPacket();

            }
        }

        //是否需要请求月度活动安排
        private bool m_bNeedRequestMonthMultiple = true;
        public bool NeedRequestMonthMultiple
        {
            get { return m_bNeedRequestMonthMultiple; }
            set { m_bNeedRequestMonthMultiple = value; }
        }

        private const int c_MultipleRequestCoolDown = 30;

        public void ReqMonthMultiple()
        {
            CG_REQ_MONTHMULTIPLE msg = (CG_REQ_MONTHMULTIPLE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_REQ_MONTHMULTIPLE);
            msg.NoParam = 1;
            msg.SendPacket();

            m_bNeedRequestMasterInfo = false;
            StartCoroutine(ResetRequestMonthMultipleFlag());
        }

        IEnumerator ResetRequestMonthMultipleFlag()
        {
            yield return new WaitForSeconds(c_MultipleRequestCoolDown);

            m_bNeedRequestMonthMultiple = true;
        }

        public void UseFlowerItem(GameItem item, int num)
        {
            if (FriendChooseLogic.RoseDataId1 == item.DataID)//送花
            {
                //如果非玩家，则无效
                if (null == TargetFrameLogic.Instance() || GlobeVar.INVALID_GUID == TargetFrameLogic.Instance().TargetGuid)
                {
                    MessageBoxLogic.OpenOKBox(StrDictionary.GetClientDictionaryString("#{5087}"));
                    return;
                }
                CG_ASK_USEROSE useitem = (CG_ASK_USEROSE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_USEROSE);
                useitem.SetType(2);
                useitem.SetSendGuild(TargetFrameLogic.Instance().TargetGuid);
                useitem.SetNumber(num);
                useitem.SetDataid(item.Guid);
                useitem.SendPacket();
            }
            else//定情
            {
                if (GameManager.gameManager.PlayerDataPool.TeamInfo.TeamID >= 0)
                {
                    if (GameManager.gameManager.PlayerDataPool.TeamInfo.GetTeamMemberCount() == 2)
                    {
                        CG_ASK_USEKEEPSAKE useitem = (CG_ASK_USEKEEPSAKE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_USEKEEPSAKE);
                        useitem.SetNumber(num);
                        useitem.SetDataid(item.Guid);
                        useitem.SendPacket();
                    }
                }
            }
        }
        private Vector2 m_FourVillainAutoCombatTargetPos = new Vector2(9.0f, 10.0f);
        public void SetFourVillainAutoCombatTargetPos(float PosX, float PosZ)
        {
            if (m_FourVillainAutoCombatTargetPos != null)
            {
                m_FourVillainAutoCombatTargetPos.Set(PosX, PosZ);
            }
        }

        public void SendCharmItem(UInt64 targetGuid, int ItemID, int nItemCount)
        {
            //向服务器发送查看属性消息
            CG_GIVE_CHARMITEM giveitemPak = (CG_GIVE_CHARMITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_GIVE_CHARMITEM);
            giveitemPak.SetUserguid(targetGuid);
            giveitemPak.SetItemid(ItemID);
            giveitemPak.SetItemcount(nItemCount);
            giveitemPak.SendPacket();
        }

        //变身技能的判断函数
        public bool IsChangeMode()
        {
            bool bHasChangeMode = false;

            for (int i = 0; i < ClientImpactInfo.Count; i++)
            {
                if (ClientImpactInfo[i].ImpactId >= GlobeVar.XP_IMPACT_MIN_ID &&
                    ClientImpactInfo[i].ImpactId <= GlobeVar.XP_IMPACT_MAX_ID)
                {
                    bHasChangeMode = true;
                    break;
                }
            }

            return bHasChangeMode;
        }

        //获取当前是第几次变身。
        public int GetCurrentChangeState()
        {
            int nChangeState = 0;

            for (int i = 0; i < ClientImpactInfo.Count; i++)
            {
                if (ClientImpactInfo[i].ImpactId >= GlobeVar.XP_IMPACT_MIN_ID && ClientImpactInfo[i].ImpactId <= GlobeVar.XP_IMPACT_MAX_ID)
                {
                    nChangeState = (ClientImpactInfo[i].ImpactId / 1000) % 10;

                    //////临时测试代码
                    if (nChangeState == 3) nChangeState--;
                    return nChangeState;
                }
            }
            return nChangeState;
        }

        public  int GetSkillXp1LearnLevel()
        {
            int res = -1;
            Dictionary<int, List<Tab_SkillActive>> dicTab_SkillActive = TableManager.GetSkillActive();

            foreach (KeyValuePair<int, List<Tab_SkillActive>> kv in dicTab_SkillActive)
            {
                Tab_SkillActive _skillActive = kv.Value[0];
                if (_skillActive != null && _skillActive.Profession == this.Profession && _skillActive.IsXpIndex == 1)
                {
                    return _skillActive.Level;
                }   
            }

            return res;
        }
        public int GetSkillXpLearnLevelByXpIndex(int nIndex)
        {
            int res = -1;
            Dictionary<int, List<Tab_SkillActive>> dicTab_SkillActive = TableManager.GetSkillActive();

            foreach (KeyValuePair<int, List<Tab_SkillActive>> kv in dicTab_SkillActive)
            {
                Tab_SkillActive _skillActive = kv.Value[0];
                if (_skillActive != null && _skillActive.Profession == this.Profession && _skillActive.IsXpIndex == nIndex)
                {
                    return _skillActive.Level;
                }
            }

            return res;
        }
        //add by mawenbin 
        //comment code for building begin
//        public void ReqViewOtherPlayer(UInt64 targetGuid, OtherRoleViewLogic.OPEN_TYPE oPenType)
//        {
//            //向服务器发送查看属性消息
//            CG_ASK_OTHERROLE_DATA askPak = (CG_ASK_OTHERROLE_DATA)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ASK_OTHERROLE_DATA);
//            askPak.SetGuid(targetGuid);
//            askPak.SendPacket();
//            OtherRoleViewLogic.SetOpenType(oPenType);
//        }
        //comment code for building end

		//private float beforeAngularSpeed = -1.0f ;
		public override  void MoveTo( Vector3 targetPos, GameObject targetObj = null, float fStopRange = 2.0f, bool bIsAutoSearch = false)
		{
			if (MountID != -1) 
			{
				if( NavAgent != null)
				{
					NavAgent.angularSpeed = 500.0f;
				}
			} 

			else
			{
				if( NavAgent != null)
				{
					NavAgent.angularSpeed = 30000.0f ;
				}
			} 
			base.MoveTo (targetPos,targetObj,fStopRange,bIsAutoSearch);
			Singleton<CameraManager>.Instance.IsDuangCamera = true;

            //移动打断
            if (CollectItemSliderLogic.Instance())
            {
                UIManager.CloseUI(UIInfo.CollectItemSlider);

                Games.LogicObj.Obj_MainPlayer pMainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                if (pMainPlayer != null && pMainPlayer.IsMoving) {
                    DoSynPosToServer();
                }
            }

			Games.LogicObj.Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
			if( mainPlayer != null)
			{
				mainPlayer.NoPlayerStopMountSound();
				mainPlayer.PlayerMountStartMoveSound();
			}
		}
		//===============================================
		private int m_curMountSoundId = -1 ;
        int m_curMountMoveId = -1;
		public void NoPlayerStopMountSound()
		{
			if (m_curMountSoundId != -1) 
			{
				GameManager.gameManager.SoundManager.StopSoundEffect(m_curMountSoundId);
				m_curMountSoundId = -1 ;
			}
		}

        public void StopMountMoveSound()
        {
            if (m_curMountMoveId != -1)
            {
                GameManager.gameManager.SoundManager.StopSoundEffect(m_curMountMoveId);
                m_curMountMoveId = -1;
            }
        }

		public void PlayerStopMountSound()
		{
			// 先停止上一次的
			NoPlayerStopMountSound ();
			//骑坐骑停留时
			if (!IsMoving && GetEquipMountID() > 0)
			{
				Tab_MountBase MountBase = TableManager.GetMountBaseByID(GetEquipMountID(), 0);
				if (null != MountBase)
				{
					Tab_CharMount MountTab = TableManager.GetCharMountByID(MountBase.ModelID, 0);
					if (null != MountTab)
					{
                        m_curMountMoveId = -1;
						GameManager.gameManager.SoundManager.StopSoundEffect(MountTab.MoveSoundID);

						m_curMountSoundId = MountTab.StopSoundID ; 
						GameManager.gameManager.SoundManager.PlaySoundEffect(MountTab.StopSoundID);
					}
				}
			}
		}
		// 坐骑启动时的音效
		private bool m_isPlayerMountStartMoveSound = false ;

		public bool IsCanPlayerMountStartMoveSound
		{
			get { return m_isPlayerMountStartMoveSound; }
			set { m_isPlayerMountStartMoveSound = value; }
		}

		public void PlayerMountStartMoveSound()
		{
			if (GetEquipMountID () > 0 && IsCanPlayerMountStartMoveSound == false ) 
			{
				Tab_MountBase MountBase = TableManager.GetMountBaseByID(GetEquipMountID(), 0);
				if (null != MountBase)
				{
					Tab_CharMount MountTab = TableManager.GetCharMountByID(MountBase.ModelID, 0);
					if (null != MountTab)
					{
						GameManager.gameManager.SoundManager.PlaySoundEffect(194);
						IsCanPlayerMountStartMoveSound = true ;
					}
				}
			}
		}
		// 坐骑停止时的音效
		public void PlayerMountStopMoveSound()
		{  
			if (GetEquipMountID () > 0) 
			{
				Tab_MountBase MountBase = TableManager.GetMountBaseByID(GetEquipMountID(), 0);
				if (null != MountBase)
				{
					Tab_CharMount MountTab = TableManager.GetCharMountByID(MountBase.ModelID, 0);
					if (null != MountTab)
					{
						GameManager.gameManager.SoundManager.PlaySoundEffect(MountTab.StopMoveSoundID);
						IsCanPlayerMountStartMoveSound = false ;
					}
				}
			}
		}


        // 骑乘检测
        public bool CheckCanMount()
        {
            // 没有骑乘
            bool bHasMout = false;
            for (int i = 0; i < MountParam.Max_MountCollect_Count; i++)
            {
                bool bCollectRlag = GameManager.gameManager.PlayerDataPool.m_objMountParam.GetMountCollectFlag(i);
                if (bCollectRlag)
                {
                    bHasMout = true;
                    break;
                }
            }
            if (!bHasMout)
            {
                return false;
            }

            //场景是否允许
            Tab_SceneClass pSceneClass = TableManager.GetSceneClassByID(GameManager.gameManager.RunningScene, 0);
            if (null != pSceneClass && pSceneClass.IsCanRide != 1)
            {
                return false;
            }

            //是否在特殊状态

            //死亡状态
            if (IsDie())
            {
                return false;
            }
            //跑商
            if (IsInPaoShang())
            {
                return false;
            }
            //正在使用技能
            if (null != m_SkillCore && m_SkillCore.IsUsingSkill)
            {
                return false;
            }
            //轻功状态
            if (IsLightState)
            {
                return false;
            }
            //战斗状态
            if (InCombat || (null != m_SkillCore && m_SkillCore.IsUsingSkill))
            {
                return false;
            }
            //脱战后5秒
            if (!InCombat && LastLeaveCombatTime > 0.0f)
            {
                int period = (int)(Time.time - LastLeaveCombatTime);
                if (period < 5.0f && GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
                {
                    return false;
                }
            }
            //隐身状态
            if (IsHaveStealthBuff())
            {
               //新手场景特殊处理，隐身也可以上骑乘
                if( GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
                {
                    return true;
                }
                return false;
            }
            return true;
        }

//         public void UpdateBelleShow()
//         {
//           Invoke("UpdateBelleShowDelay", 1f);
//         }
        public override void UpdateBelleShowDelay()
        {
          int CombatAllValue = 0;
          Dictionary<int, Belle> OwnedBelleDic = BelleData.OwnedBelleMap;
          foreach (KeyValuePair<int, Belle> pair in OwnedBelleDic) {
            Belle curBelleData = pair.Value;
            curBelleData.UpdateAttrMap();
            CombatAllValue += BelleData.GetPowerNum(curBelleData.attrMap);
          }
          Tab_BelleFightShow nowshow = null;
          Dictionary<int, List<Tab_BelleFightShow>> bfss = TableManager.GetBelleFightShow();
          foreach (KeyValuePair<int, List<Tab_BelleFightShow>> pair in bfss) {
            if (pair.Value != null && pair.Value.Count > 0) {
              if (pair.Value[0].CombatForce < CombatAllValue) {
                nowshow = pair.Value[0];
              }
            }
          }
          if (nowshow != null) {
            if (nowshow.Id == LastBellShowEffectId && !IsCreatePlayerEffect && BelleShowEffect != null && BelleShowEffect.activeInHierarchy) {
              return;
            } else {
              LastBellShowEffectId = nowshow.Id;
              if (BelleShowEffect != null) {
                BelleShowEffect.SetActive(false);
              }
            }
          }
          Transform tf = transform;
          if (tf != null) {
            CharacterEffectBehaviourController uebc = tf.GetComponent<CharacterEffectBehaviourController>();
            if (uebc == null) {
              uebc = tf.gameObject.AddComponent<CharacterEffectBehaviourController>();
            }
            if (nowshow != null && uebc != null) {
              uebc.InitEffect(uebc.gameObject);
              uebc.PlayEffect(nowshow.Effect3dId, PlayEffectOver);
            }
          }
        }
        //记录是否打开七天,七天主界面小红点
        public static bool IsFirstOpenSevenDay = true;
//         private void PlayEffectOver(GameObject effectObj, object param)
//         {
//           if (effectObj != null && effectObj.transform.parent != null) {
//             BelleShowEffect = effectObj.transform.parent.gameObject;
//           }
//         }
    }
}