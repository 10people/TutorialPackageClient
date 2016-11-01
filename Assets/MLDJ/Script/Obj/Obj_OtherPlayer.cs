/********************************************************************************
 *	文件名：	Obj_OtherPlayer.cs
 *	全路径：	\Script\Obj\Obj_OtherPlayer.cs
 *	创建人：	李嘉
 *	创建时间：2013-10-25
 *
 *	功能说明：游戏其他玩家Obj逻辑类
 *	修改记录：
*********************************************************************************/
using UnityEngine;
using System.Collections;
using Games.GlobeDefine;
using GCGame;
using GCGame.Table;
using Games.Animation_Modle;
using Games.ObjAnimModule;
using System;
using Module.Log;
using Games.Item;
using Games.Scene;
using System.Collections.Generic;
using Games.Events;
using Games.ChatHistory;
using GameRes;

namespace Games.LogicObj
{
    public class Obj_OtherPlayer : Obj_Character
    {
        public Obj_OtherPlayer()
        {
            m_ObjType = Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER;
        }

        /// <summary>
        /// 左武器 引用对象
        /// </summary>
        public GameObject LWeaponObject = null;

        /// <summary>
        /// 右武器 引用对象
        /// </summary>
        public GameObject RWeaponObject = null;

#if UNITY_ANDROID
        public string OtherPlayerMoveTag = string.Empty;
#endif

        //GUID
        private UInt64 m_GUID = GlobeVar.INVALID_GUID;
        public UInt64 GUID
        {
            get { return m_GUID; }
            set { m_GUID = value; }
        }

        private UInt64 m_GuildGUID = GlobeVar.INVALID_GUID;
        public virtual System.UInt64 GuildGUID
        {
            get { return m_GuildGUID; }
            set { m_GuildGUID = value; }
        }

        private int m_fellowID;
        public int FellowID
        {
            get { return m_fellowID; }
            set { m_fellowID = value; }
        }

        private bool m_bIsWildEnemyForMainPlayer =false;
        public bool IsWildEnemyForMainPlayer
        {
            get { return m_bIsWildEnemyForMainPlayer; }
            set { m_bIsWildEnemyForMainPlayer = value; }
        }
        public override bool Init(Obj_Init_Data initData)
        {
            if (null == m_ObjTransform)
            {
                m_ObjTransform = transform;
            }

            m_ObjTransform.position = ActiveScene.GetTerrainPosition(new Vector3(initData.m_fX, 0, initData.m_fZ));
            ServerID = initData.m_ServerID;
            
            BaseAttr.RoleBaseID = initData.m_RoleBaseID;
            BaseAttr.MoveSpeed = initData.m_MoveSpeed;
            Profession = initData.m_nProfession;

            Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(initData.m_ModelVisualID, 0);
            if (tabItemVisual == null)
            {
                tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabItemVisual == null)
                {
                    return false;
                }
            }
            int nCharmodelID = GetCharModelID(tabItemVisual, m_nProfession);

            nCurChangeState = initData.m_changeState;

            //看看是不是变身
            int nTempCharmodelID = GetCharModelIDByChangeState(m_nProfession,nCurChangeState);

            if (nTempCharmodelID != GlobeVar.INVALID_ID)
            {
                nCharmodelID = nTempCharmodelID;
            }
            //如果tabItemVisual取出来charModel为空，则给默认charModel
            //这个问题会出现在无职业的ZombiePlayer上
            if (nCharmodelID < 0)
            {
                nCharmodelID = initData.m_CharModelID;
            }
            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
            if (charModel == null)
            {
                return false;
            }
            ModelID = nCharmodelID;

            if (null != charModel)
			{
				//初始化动作路径
                AnimationFilePath = charModel.AnimPath;
				BaseAttr.RoleBaseID = initData.m_RoleBaseID;
                BaseAttr.HeadPic = charModel.HeadPic;
			}

			BaseAttr.RoleName = initData.m_StrName;
			GUID = initData.m_Guid;
            DeltaHeight = charModel.HeadInfoHeight;
            BaseAttr.Die = initData.m_IsDie;
            BaseAttr.Force = initData.m_Force;
            PkModle = initData.m_PkModel;
            
			VipCost = initData.m_nOtherVipCost;
            GuildGUID = initData.m_GuildGuid;
            OtherCombatValue = initData.m_nOtherCombatValue;
            IsWildEnemyForMainPlayer = initData.m_bIsWildEnemyForMainPlayer;
			//初始化动作特效
            if (AnimLogic == null)
            {
                AnimLogic = gameObject.AddComponent<AnimationLogic>();

#if UNITY_ANDROID
                if (AnimLogic != null)
                {
                    AnimLogic.IsOtherPlayer = true;
                    AnimLogic.OtherPlayer = this;
                }
#endif
            }
            //AnimLogic = gameObject.AddComponent<AnimationLogic>();

            //初始化特效
            if (ObjEffectController == null)
            {
                ObjEffectController = gameObject.AddComponent<CharacterEffectBehaviourController>();
            }
            //初始化寻路代理
            InitNavAgent();

            //初始化AutoMove功能模块
            //if (gameObject.GetComponent<AutoMove>() == null)
            //{
            gameObject.AddComponent<AutoMove>();
            //}

            if (IsDie())
            {
                OnCorpse();
            }
            else
            {
                if (Objanimation != null)
                {
                    Objanimation.Stop();
                }
                CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_NORMOR;
            }

            m_strTitleInvestitive = initData.m_strTitleName;
            m_CurTitleID = initData.m_CurTitleID;
            m_bIsInMainPlayerPKList = initData.m_isInMainPlayerPKList;
            PkModle = initData.m_PkModel;
            OptChangPKModle();
            StealthLev = initData.m_StealthLev;
            OptStealthLevChange();
            MountID = initData.m_MountID;

            m_ObjTransform.localScale = Vector3.one;
            m_ObjTransform.localRotation = Utils.DirServerToClient(initData.m_fDir);
            ModelVisualID = initData.m_ModelVisualID;
            CurWeaponDataID = initData.m_WeaponDataID;
            WeaponEffectGem = initData.m_WeaponEffectGem;
            m_nPaoShangState = initData.m_nPaoShangState;
            InitNameBoard();

            //init bind(no base.init)
            InitBindFromData(initData);
            m_bIsInTeamFollow = initData.m_bIsInTeamFollow;

            // 加个翅膀 的 说 
            m_OtherPlayerFlyWingModelId = initData.m_FlyWingId;
            return true;
        }
        // 重载模型回调
        public override void OnReloadModle()
        {
            base.OnReloadModle();
            if (m_nPaoShangState != -1)
            {
                UpdatePaoShangStateEffect(m_nPaoShangState);
            }
        }
        //进入可视区域
        void OnBecameVisible()
        {
            //设置是否在视口内标记位，为其他系统优化判断标识
            ModelInViewPort = true;
            
            //显示名字版
            if (null != m_HeadInfoBoard)
            {
                m_HeadInfoBoard.SetActive(true);
            }

            //显示模型
            if (null != ModelNode && IsVisibleChar())
            {
                ModelNode.SetActive(true);
                OnSwithObjAnimState(CurObjAnimState);
            }

            //如果已经死亡，则切换到死亡状态
            if (IsDie())
            {
                OnCorpse();
            }
        }

        //离开可视区域
        void OnBecameInvisible()
        {
            //设置是否在视口内标记位，为其他系统优化判断标识
            ModelInViewPort = false;

            //隐藏名字版
            if (null != m_HeadInfoBoard)
            {
                m_HeadInfoBoard.SetActive(false);
            }

            // 隐藏模型
            if (null != ModelNode)
            {
                ModelNode.SetActive(false);
            }
        }

        void Update()
        {
            UpdateTargetMove();
            UpdateAnimation();
            UpdateQingGong();       //由于轻功可能改变玩家坐标，所以放在UpdateTargetMove之后进行
            UpdateLightSkill();
        }

        void FixedUpdate()
        {
#if UNITY_ANDROID

            OtherPlayerMoveTag = string.Empty;
#endif
            //多次冒血的
            UpdateShowMultiShowDamageBoard();
            //技能结束检测
            if (m_SkillCore != null)
            {
                m_SkillCore.CheckSkillShouldFinish();
            }

            UpdateTeamFormation(); // 组队跟随
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

                ShowNameBoard();
                ShowTitleInvestitive();
                UpdateVipInfo();
//                if (m_playerHeadInfo)
//                {
//                    m_playerHeadInfo.UpdatePaoShangIcon(m_nPaoShangState);
//                }
            }
        }

        public virtual void UpdateCombatValue()
        {
            int nNeedEffect = -1;
            if (m_nOtherCombatValue >= GlobeVar.COMBAT_LEVEL_5)
            {
                nNeedEffect = GlobeVar.COMBAT_EFFECT_5;
            }
            else if (m_nOtherCombatValue >= GlobeVar.COMBAT_LEVEL_4)
            {
                nNeedEffect = GlobeVar.COMBAT_EFFECT_4;
            }
            else if (m_nOtherCombatValue >= GlobeVar.COMBAT_LEVEL_3)
            {
                nNeedEffect = GlobeVar.COMBAT_EFFECT_3;
            }
            else if (m_nOtherCombatValue >= GlobeVar.COMBAT_LEVEL_2)
            {
                nNeedEffect = GlobeVar.COMBAT_EFFECT_2;
            }
            else if (m_nOtherCombatValue >= GlobeVar.COMBAT_LEVEL_1)
            {
                nNeedEffect = GlobeVar.COMBAT_EFFECT_1;
            }
            if ( nNeedEffect > 0 )
            {
                Tab_Effect EffectInfo = TableManager.GetEffectByID(nNeedEffect, 0);
                if (EffectInfo != null && IsHaveBindPoint(EffectInfo.ParentName) && GetEffectCountById(nNeedEffect) < 1)
                {
                    StopEffect(GlobeVar.COMBAT_EFFECT_5);
                    StopEffect(GlobeVar.COMBAT_EFFECT_4);
                    StopEffect(GlobeVar.COMBAT_EFFECT_3);
                    StopEffect(GlobeVar.COMBAT_EFFECT_2);
                    StopEffect(GlobeVar.COMBAT_EFFECT_1);
                    PlayEffect(nNeedEffect);
                }
            }
            else
            {
                StopEffect(GlobeVar.COMBAT_EFFECT_5);
                StopEffect(GlobeVar.COMBAT_EFFECT_4);
                StopEffect(GlobeVar.COMBAT_EFFECT_3);
                StopEffect(GlobeVar.COMBAT_EFFECT_2);
                StopEffect(GlobeVar.COMBAT_EFFECT_1);
            }
        }
        public virtual void UpdateVipInfo()
        {
            if (null != m_playerHeadInfo)
            {
                m_playerHeadInfo.UpdateVipInfo(m_nVipCost);
            } 
        }

        public PlayerHeadInfo m_playerHeadInfo;
        
        private string m_strTitleInvestitive;
        public string StrTitleInvestitive
        {
            get { return m_strTitleInvestitive; }
            set { m_strTitleInvestitive = value; }
        }

        private int m_CurTitleID;
        public int CurTitleID
        {
            get { return m_CurTitleID; }
            set { m_CurTitleID = value; }
        }

        public void ShowTitleInvestitive()
        {
            if (null != m_playerHeadInfo)
            {
                m_playerHeadInfo.ShowTitleInvestitiveByTable(m_CurTitleID, m_strTitleInvestitive);
            }      
        }

        //职业
        private int m_nProfession = -1;
        public virtual int Profession
        {
            get { return m_nProfession; }
            set { m_nProfession = value; }
        }
        //VIP
        private int m_nVipCost = -1;
        public virtual int VipCost
        {
            get { return m_nVipCost; }
            set { m_nVipCost = value; UpdateVipInfo(); }
        }
        private int m_nOtherCombatValue = -1;
        public virtual int OtherCombatValue
        {
            get { return m_nOtherCombatValue; }
            set { m_nOtherCombatValue = value;}
        }
        //PK模式
        private int m_nPkModle =-1;
        public virtual int PkModle
        {
            get { return m_nPkModle; }
            set { m_nPkModle = value; }
        }
        //是否在主角的反击列表中
        private bool m_bIsInMainPlayerPKList =false;
        public bool IsInMainPlayerPKList
        {
            get { return m_bIsInMainPlayerPKList; }
            set { m_bIsInMainPlayerPKList = value; }
        }
        
        public override Color GetNameBoardColor()
        {
            string strColor = "FFFFFF";
            CharacterDefine.REPUTATION_TYPE type = Reputation.GetObjReputionType(this);
            if (type == CharacterDefine.REPUTATION_TYPE.REPUTATION_FRIEND)
            {
                //陌生人
                strColor = "FFFFFF";
            }
            else if (type == CharacterDefine.REPUTATION_TYPE.REPUTATION_NEUTRAL)
            {
                strColor = "3C00FF";
            }
            else if (type == CharacterDefine.REPUTATION_TYPE.REPUTATION_HOSTILE)
            {
                strColor = "FF0000";
            }

            //对方开了杀戮模式 且尚未攻击过主角 紫名
            if (type == CharacterDefine.REPUTATION_TYPE.REPUTATION_FRIEND &&
                PkModle == (int)CharacterDefine.PKMODLE.KILL && 
                IsInMainPlayerPKList == false)
            {
                //同队伍和同帮会 不能互相PK 不受PK模式影响 不是同一个帮会且不是同一个队伍的 才受此影响
                if ((GameManager.gameManager.PlayerDataPool.IsHaveGuild()==false||GameManager.gameManager.PlayerDataPool.IsGuildMember(this)==false) && 
                    (GameManager.gameManager.PlayerDataPool.IsHaveTeam()==false||GameManager.gameManager.PlayerDataPool.IsTeamMem(GUID)==false) &&
                    GUID != GameManager.gameManager.PlayerDataPool.LoverGUID && //是伴侣
                    GameManager.gameManager.ActiveScene.IsCopyScene() == false //不是副本
                    )
                {
                    strColor = "FF00FF";
                }
            }
           
            return GCGame.Utils.GetColorByString(strColor);
        }

        public virtual  void OptChangPKModle()
        {
            SetNameBoardColor();
        }

		// 此消息只能玩家自己接收
        public override void UpdateAttrBroadcastPackt(GC_BROADCAST_ATTR packet)
        {
            base.UpdateAttrBroadcastPackt(packet);
            if (packet.HasCurProfession)
            {
        
                Profession = packet.CurProfession;
            }
            if (packet.HasModelVisualID)
            {
                ModelVisualID = packet.ModelVisualID;
            }
            if (packet.HasWeaponDataID)
            {
                CurWeaponDataID = packet.WeaponDataID;
            }
            if (packet.HasWeaponEffectGem)
            {
                WeaponEffectGem = packet.WeaponEffectGem;
            }
            if (packet.HasModelVisualID)
            {
                if (SkillCore.IsUsingSkill)
                {
                    m_UpdateModelWait = true;
                }
                else
                {
                    if (nCurChangeState != (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2 &&
                        nCurChangeState != (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1)
                    {
                        ReloadPlayerModelVisual();
                    }
                }
            }
            else if (packet.HasWeaponDataID)
            {
                if (SkillCore.IsUsingSkill)
                {
                    m_UpdateWeaponWait = true;
                }
                else
                {
                    if (nCurChangeState != (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2 &&
                        nCurChangeState != (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1)
                    {
                        RealoadPlayerWeaponVisual();
                    }                    
                }
            }
            else if (packet.HasWeaponEffectGem)
            {
                if (SkillCore.IsUsingSkill)
                {
                    m_UpdateWeaponGemWait = true;
                }
                else
                {
                    ReloadWeaponEffectGem();
                }
            }
        }

        //////////////////////////////////////////////////////////////////////////
        // 坐骑相关
        //////////////////////////////////////////////////////////////////////////
        private bool m_bShowRideOnEffect = false;
        public bool ShowRideOnEffect
        {
            get { return m_bShowRideOnEffect; }
            set { m_bShowRideOnEffect = value; }
        }
        private Obj_Mount m_MountObj = null;
        public Obj_Mount MountObj
        {
            get { return m_MountObj; }
            set { m_MountObj = value; }
        }

        private int m_MountID = -1;
        virtual public int MountID
        {
            get { return m_MountID; }
            set { 
                m_MountID = value;
                //RideOrUnMount(m_MountID);
            }
        }

        private bool m_bIsNeedUnMount = false;
        public bool IsNeedUnMount
        {
            get { return m_bIsNeedUnMount; }
            set { m_bIsNeedUnMount = value; }
        }
        public float GetMountNameBoardHeight()
        {
            if (MountID == -1)
            {
                return 0;
            }

            Tab_MountBase MountBase = TableManager.GetMountBaseByID(MountID, 0);
            if (null == MountBase)
            {
                return 0;
            }
            Tab_CharMount MountTable = TableManager.GetCharMountByID(MountBase.ModelID, 0);
            if (MountTable == null)
            {
                return 0;
            }

            float fFixHeight = 0;
            if (Profession >= 0 && Profession < MountTable.getHeadInfoAddHeightCount())
            {
                fFixHeight = MountTable.GetHeadInfoAddHeightbyIndex(Profession);
            }
            return fFixHeight;
        }

        // 上马下马 统一接口
        public virtual void RideOrUnMount(int nMountID)
        {
            //当前其他玩家处于不可见状态时，记录 MountID
            if (!m_bVisible && m_ObjType == Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER)
            {
                MountID = nMountID;
                return;
            }

            if (nMountID > 0)
            {
                RideMount(nMountID);
            }
            else
            {
                m_IsLoadingModel = false;
                if (m_WaitChangeState != GlobeVar.INVALID_ID)
                {
                    int nChangeState = m_WaitChangeState;
                    m_WaitChangeState = GlobeVar.INVALID_ID;
                    UpdateOtherPlayerChangeState(nChangeState);
                }

                if (m_MountObj == null)
                {
                    return;
                }
                UnMount();
            }
        }
        // 骑马
        private void RideMount(int nMountID)
        {
            m_AnimLogic.Stop();

            MountID = nMountID;
            Obj_Mount.RideMount(this, nMountID);

			Games.LogicObj.Obj_MainPlayer mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
			if( mainPlayer != null)
			{
				mainPlayer.PlayerStopMountSound();
			}
            //RideMountWeapon();
        }

        /// <summary>
        /// 骑马武器绑定状态修改
        /// </summary>
        public void RideMountWeapon()
        {
            //更改角色武器在骑乘时表现方法

            GameObject leftBind = ObjEffectController.GetBindPointObj(GetWeaponPointName_PutOff("left"));
            RideMountWeapon_L(leftBind);

            GameObject rightBind = ObjEffectController.GetBindPointObj(GetWeaponPointName_PutOff("right"));
            RideMountWeapon_R(rightBind);
        }

        public void RideMountWeapon_L(GameObject bindPoint = null)
        {
            if (bindPoint == null)
            {
                bindPoint = ObjEffectController.GetBindPointObj(GetWeaponPointName_PutOff("left"));
            }

            if (bindPoint == null)
            {
                return;
            }

            if (LWeaponObject != null && bindPoint != null)
            {
                LWeaponObject.transform.parent = bindPoint.transform;
                Tab_WeaponModel tabWeaponModel = GetTabWeaponModel();
                if (tabWeaponModel != null)
                {
                    LWeaponObject.transform.localPosition = new Vector3(tabWeaponModel.LeftPosXPutOff, tabWeaponModel.LeftPosYPutOff, tabWeaponModel.LeftPosZPutOff);
                    LWeaponObject.transform.localEulerAngles = new Vector3(tabWeaponModel.LeftRotXPutOff, tabWeaponModel.LeftRotYPutOff, tabWeaponModel.LeftRotZPutOff);
                }
            }
        }

        public void RideMountWeapon_R(GameObject bindPoint = null)
        {
            if (bindPoint == null)
            {
                bindPoint = ObjEffectController.GetBindPointObj(GetWeaponPointName_PutOff("right"));
            }

            if (bindPoint == null)
            {
                return;
            }

            if (RWeaponObject != null && bindPoint != null)
            {
                RWeaponObject.transform.parent = bindPoint.transform;
                Tab_WeaponModel tabWeaponModel = GetTabWeaponModel();
                if (tabWeaponModel != null)
                {
                    RWeaponObject.transform.localPosition = new Vector3(tabWeaponModel.RightPosXPutOff, tabWeaponModel.RightPosYPutOff, tabWeaponModel.RightPosZPutOff);
                    RWeaponObject.transform.localEulerAngles = new Vector3(tabWeaponModel.RightRotXPutOff, tabWeaponModel.RightRotYPutOff, tabWeaponModel.RightRotZPutOff);
                }
            }
        }

        public void ClearRideMountWeapon()
        {
            GameObject leftBind = ObjEffectController.GetBindPointObj(GetWeaponPointName_PutOff("left"));
            if (leftBind != null && leftBind.transform != null)
            {
                for (int i = 0; i < leftBind.transform.childCount; ++i)
                {
                    Transform child = leftBind.transform.GetChild(i);
                    if (null != child &&
                        null != child.gameObject &&
                        !child.gameObject.name.Contains("Bip")
                        && !child.gameObject.name.Contains("FlyWing"))
                    {
                        GameObject.Destroy(child.gameObject);
                    }
                }
            }
            LWeaponObject = null;

            GameObject rightBind = ObjEffectController.GetBindPointObj(GetWeaponPointName_PutOff("right"));
            if (rightBind != null && rightBind.transform != null)
            {
                for (int i = 0; i < rightBind.transform.childCount; ++i)
                {
					Transform child = rightBind.transform.GetChild(i);
                    if (null != child &&
                        null != child.gameObject &&
                        !child.gameObject.name.Contains("Bip")
                        && !child.gameObject.name.Contains("FlyWing"))
                    {
                        GameObject.Destroy(child.gameObject);
                    }
                }
            }
            RWeaponObject = null;
        }

        public void ClearUnMountWeapon()
        {
            if (LWeaponObject != null)
            {
                GameObject.Destroy(LWeaponObject);
                LWeaponObject = null;
            }
            if (RWeaponObject != null)
            {
                GameObject.Destroy(RWeaponObject);
                RWeaponObject = null;
            }
        }

        public Tab_WeaponModel GetTabWeaponModel()
        {
            bool defaultVisual = false;
            Tab_ItemVisual tabItemVisual = null;

            Tab_EquipAttr tabEquipAttr = TableManager.GetEquipAttrByID(m_CurWeaponDataID, 0);
            if (tabEquipAttr == null)
            {
                defaultVisual = true;
            }
            else
            {
                tabItemVisual = TableManager.GetItemVisualByID(tabEquipAttr.ModelId, 0);
                if (tabItemVisual == null)
                {
                    defaultVisual = true;
                }
            }

            if (defaultVisual)
            {
                tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabItemVisual == null)
                {
                    return null;
                }
            }

            int nWeaponModelID = GetWeaponModelID(tabItemVisual, m_nProfession);

            if (nCurChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2
                || nCurChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1)
            {
                int nStateWeaponId = GetWeaponModelIDByCurState(nCurChangeState, m_nProfession);
                if (nStateWeaponId != GlobeVar.INVALID_ID)
                {
                    nWeaponModelID = nStateWeaponId;
                }
            }

            return TableManager.GetWeaponModelByID(nWeaponModelID, 0);
        }

        public string GetWeaponPointName_PutOff(string hand, Tab_WeaponModel tabWeaponModel = null)
        {
            if (tabWeaponModel == null)
            {
                tabWeaponModel = GetTabWeaponModel();
            }

            if (tabWeaponModel == null)
            {
                return "";
            }

            if (hand == "left")
            {
                return tabWeaponModel.BindPointLPutOff;
            }
            if (hand == "right")
            {
                return tabWeaponModel.BindPointRPutOff;
            }

            return "";
        }

        public string GetWeaponPointPath_PutOn(string hand, Tab_WeaponModel tabWeaponModel = null)
        {
            if (tabWeaponModel == null)
            {
                tabWeaponModel = GetTabWeaponModel();
            }

            if (tabWeaponModel == null)
            {
                return "";
            }

            if (hand == "left")
            {
                if (tabWeaponModel.BindPointLPutOn == "Weapon_L")
                {
                    return tabWeaponModel.BindPointLPutOn;
                }
                else
                {
                    return ObjEffectController.GetBindPathByName((int)GameDefine_Globe.MODELTYPE.HUMAN, tabWeaponModel.BindPointLPutOn).Replace("Model/all/", "");
                }
            }
            if (hand == "right")
            {
                if (tabWeaponModel.BindPointRPutOn == "Weapon_R")
                {
                    return tabWeaponModel.BindPointRPutOn;
                }
                else
                {
                    return ObjEffectController.GetBindPathByName((int)GameDefine_Globe.MODELTYPE.HUMAN, tabWeaponModel.BindPointRPutOn).Replace("Model/all/", "");
                }
            }

            return "";
        }

        /// <summary>
        /// 下马武器回复原始绑定
        /// </summary>
        public void UnMountWeapon()
        {

            //Demo 临时添加；需要对玩家上身所有可绑定节点进行统一管理
            Transform modelallTrans = this.transform.FindChild("Model");
            if (modelallTrans == null)
            {
                return;
            }

            modelallTrans = modelallTrans.FindChild("all");
            if (modelallTrans == null)
            {
                return;
            }

            Transform weaponParent = modelallTrans.Find(GetWeaponPointPath_PutOn("left"));
            if (weaponParent == null)
            {
                return;
            }

            Tab_WeaponModel tabWeaponModel = GetTabWeaponModel();
            if (tabWeaponModel == null)
            {
                return;
            }

            if (LWeaponObject != null)
            {
                LWeaponObject.transform.parent = weaponParent;
                LWeaponObject.transform.localPosition = Vector3.zero;
                LWeaponObject.transform.localEulerAngles = new Vector3(tabWeaponModel.LeftRotX, tabWeaponModel.LeftRotY, tabWeaponModel.LeftRotZ);
            }

            weaponParent = modelallTrans.Find(GetWeaponPointPath_PutOn("right"));
            if (weaponParent == null)
            {
                return;
            }
            if (RWeaponObject != null)
            {
                RWeaponObject.transform.parent = weaponParent;
                RWeaponObject.transform.localPosition = Vector3.zero;
                RWeaponObject.transform.localEulerAngles = new Vector3(tabWeaponModel.RightRotX, tabWeaponModel.RightRotY, tabWeaponModel.RightRotZ);
            }
        }

        // 下马
        private void UnMount()
        {
            Obj_MainPlayer user = this as Obj_MainPlayer;
            if (user != null)
            {
                user.NoPlayerStopMountSound();
                user.StopMountMoveSound();
            }
			
            m_bIsNeedUnMount = true;
            Obj_Mount.UnMount(this);
            //UnMountWeapon();
        }

        public override void OptNameChange()//名字变化后的操作
        {
            ShowNameBoard();
        }

        public override void OptForceChange()//势力变化后的操作
        {
           base.OptForceChange();
        }
        public override bool OnCorpse()
        {
            base.OnCorpse();
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
            return true;
        }
        public override bool OnRelife()
        {
            base.OnRelife();
            
            return true;
        }

        // 纸娃娃系统换装
        private int m_ModelVisualID = GlobeVar.INVALID_ID;
        public virtual int ModelVisualID
        {
            get { return m_ModelVisualID; }
            set { m_ModelVisualID = value; }
        }

        private int m_CurWeaponDataID = GlobeVar.INVALID_ID;
        public virtual int CurWeaponDataID
        {
            get { return m_CurWeaponDataID; }
            set { m_CurWeaponDataID = value; }
        }

        private int m_WeaponEffectGem = GlobeVar.INVALID_ID;
        public int WeaponEffectGem
        {
            get { return m_WeaponEffectGem; }
            set { m_WeaponEffectGem = value; }
        }

        public void ReloadWeaponEffectGem()
        {
            List<string> strWeaponPointList = new List<string>();
            if (Profession == (int)CharacterDefine.PROFESSION.TIANSHAN)
            {
                strWeaponPointList.Add("Weapon_L");
                strWeaponPointList.Add("Weapon_R");
            }
            else if (Profession == (int)CharacterDefine.PROFESSION.XIAOYAO)
            {
                strWeaponPointList.Add("Weapon_L");
            }
            else
            {
                strWeaponPointList.Add("Weapon_R");
            }

            for (int i = 0; i < strWeaponPointList.Count; ++i)
            {
                GameObject playerGameObject = null;
                if (MountObj == null)
                {
                    playerGameObject = gameObject;
                }
                else
                {
                    if (MountObj.MountPlayer == null)
                    {
                        return;
                    }
                    playerGameObject = MountObj.MountPlayer.gameObject;
                }

                if (playerGameObject == null)
                {
                    continue;
                }

                Transform modelTrans = playerGameObject.transform.FindChild("Model");
                if (modelTrans == null)
                {
                    return;
                }

                Transform modelallTrans = modelTrans.FindChild("all");
                if (modelallTrans == null)
                {
                    return;
                }

                Transform weaponParent = modelallTrans.FindChild(strWeaponPointList[i]);
                if (weaponParent == null)
                {
                    return;
                }

                Transform effectParent;
                if (Profession == (int)CharacterDefine.PROFESSION.XIAOYAO)
                {
                    effectParent = weaponParent.FindChild("Weapon_R");
                    if (effectParent == null)
                    {
                        return;
                    }
                }
                else
                {
                    effectParent = weaponParent;
                }

                CharacterEffectBehaviourController effectLogic = effectParent.gameObject.GetComponent<CharacterEffectBehaviourController>();
                if (null == effectLogic)
                {
                    effectLogic = effectParent.gameObject.AddComponent<CharacterEffectBehaviourController>();
                    effectLogic.InitEffect(effectParent.gameObject);
                }
                if (null != effectLogic)
                {
                    effectLogic.ClearEffect();
                    Tab_GemAttr tabGemAttr = TableManager.GetGemAttrByID(WeaponEffectGem, 0);
                    if (tabGemAttr != null)
                    {
                        Tab_Effect tabEffect = TableManager.GetEffectByID(tabGemAttr.EffectID, 0);
                        if (tabEffect != null)
                        {
                            //effectLogic.PlayEffect(tabGemAttr.EffectID);
                        }
                    }
                    //加载神器特效
                    Tab_CommonItem _ItemInfo = TableManager.GetCommonItemByID(CurWeaponDataID, 0);
                    if (_ItemInfo != null &&
                        _ItemInfo.ClassID == (int)ItemClass.EQUIP &&
                        _ItemInfo.SubClassID == (int)EquipSubClass.WEAPON &&
                        _ItemInfo.ThirdClassID == (int)EquipThirdClass.SHENQI)
                    {
                        Tab_ShenQiInfo _shenQiInfo = TableManager.GetShenQiInfoByID(CurWeaponDataID, 0);
                        if (_shenQiInfo != null)
                        {
                            effectLogic.PlayEffect(_shenQiInfo.ShenQiEffctId);
                        }
                    }
                }
            }
        }

        // 放技能时换装需要等待
        private bool m_UpdateModelWait = false;
        private bool m_UpdateWeaponWait = false;
        private bool m_UpdateWeaponGemWait = false;

        public void UpdateVisualAfterSkill()
        {
            if (m_UpdateModelWait)
            {
                ReloadPlayerModelVisual();
            }

            if (m_UpdateWeaponWait)
            {
                RealoadPlayerWeaponVisual();
            }

            if (m_UpdateWeaponGemWait)
            {
                ReloadWeaponEffectGem();
            }

            m_UpdateModelWait = false;
            m_UpdateWeaponWait = false;
            m_UpdateWeaponGemWait = false;
        }

        //玩家轻功部分处理
        private bool m_bQingGongState = false;
        public bool QingGongState
        {
            get { return m_bQingGongState; }
            set { m_bQingGongState = value; }
        }

        private float m_DistanceValue = 0f;
        private Vector3 m_QingGongSrc = Vector3.zero;
        private Vector3 m_QingGongDst = Vector3.zero;
        private int m_nQingGongType = GlobeVar.INVALID_ID;
        private int m_nQingGongPointID = GlobeVar.INVALID_ID;
        public int QingGongPointID
        {
            get { return m_nQingGongPointID; }
        }
        private float m_fQingGongMaxHeight = 0;
        private float m_fQingGongTime = 0;
        private float m_fQingGongBeginTime = 0;



        public virtual void BeginQingGong(GameEvent _event)
        {
            if (_event.EventID != Games.GlobeDefine.GameDefine_Globe.EVENT_DEFINE.EVENT_QINGGONG)
            {
                return;
            }

            //得到目标点坐标
            Vector3 dstPos = new Vector3(_event.GetFloatParam(0), _event.GetFloatParam(1), _event.GetFloatParam(2));
            //dstPos.y = Terrain.activeTerrain.SampleHeight(dstPos);

            if (m_ObjTransform == null)
            {
                m_ObjTransform = transform;
            }

            m_bQingGongState = true;
            m_QingGongDst = dstPos;
            m_QingGongSrc = m_ObjTransform.position;

            //忽略阻挡前进
            if (null != NavAgent && NavAgent.enabled)
            {
                NavAgent.enabled = false;
            }

            m_fMoveSpeed = _event.GetFloatParam(3);
            m_nQingGongType = _event.GetIntParam(0);
            m_fQingGongMaxHeight = _event.GetFloatParam(4);

            m_nQingGongPointID = _event.GetIntParam(1);

            //记录朝向，注意抛物线轨迹由UpdateQingGong进行位移操作，不使用系统MoveTo
            FaceTo(m_QingGongDst);
            
            //根据不同类型模拟线路和调整玩家角度
            if (m_nQingGongType == (int)Games.GlobeDefine.GameDefine_Globe.QINGGONG_TRAIL_TYPE.PARABOLA)
            {
                //如果是抛物线移动
                CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_JUMP;

                //根据起始点和目标点计算本次轻功运动时间
                float fTreckDistance = Vector3.Distance(m_QingGongSrc, m_QingGongDst);
                if (m_fMoveSpeed > 0)
                {
                    m_fQingGongTime = fTreckDistance / m_fMoveSpeed;
                }

                //本次允许最大浮动值
                m_DistanceValue = (fTreckDistance + Mathf.Abs(m_fQingGongMaxHeight)) * 1.5f;

                //记录轻功开始时间
                m_fQingGongBeginTime = Time.time;
            }
            else if (m_nQingGongType == (int)Games.GlobeDefine.GameDefine_Globe.QINGGONG_TRAIL_TYPE.TURN_LEFT)
            {
                //如果是线性移动
                CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_FASTRUN_LEFT;

                //直线移动，使用底层MoveTo即可
                MoveTo(m_QingGongDst, null, 0.0f);
            }
            else if (m_nQingGongType == (int)Games.GlobeDefine.GameDefine_Globe.QINGGONG_TRAIL_TYPE.TURN_RIGHT)
            {
                //如果是线性移动
                CurObjAnimState = Games.GlobeDefine.GameDefine_Globe.OBJ_ANIMSTATE.STATE_FASTRUN_RIGHT;

                //直线移动，使用底层MoveTo即可
                MoveTo(m_QingGongDst, null, 0.0f);
            }

            //播放轻功特效
            if (null != ObjEffectController)
            {
                ObjEffectController.PlayEffect(GlobeVar.QINGGONG_EFFECT);
            }
        }

        public virtual void EndQingGong()
        {
            StopMove();
            m_bQingGongState = false;

            //恢复数据
            if (NavAgent)
            {
                NavAgent.enabled = true;
            }

            m_fMoveSpeed = BaseAttr.MoveSpeed;

            //重置参数
            m_fQingGongMaxHeight = 0;
            m_fQingGongTime = 0;
            m_fQingGongBeginTime = 0;

            m_DistanceValue = 0f;
            m_QingGongSrc = Vector3.zero;
            m_QingGongDst = Vector3.zero;
        }

        public virtual void UpdateQingGong()
        {
            if (false == m_bQingGongState)
            {
                return;
            }

            //计算从轻功开始到结束的流逝时间
            float fElapseTime = Time.time - m_fQingGongBeginTime;

            //到达目的地，轻功结束
            if (Vector3.Distance(m_ObjTransform.position, m_QingGongDst) < 0.4f
                || fElapseTime > m_fQingGongTime * 2) //添加时间限制。如果时间超出正常时间2倍后，结束轻功
            {
                m_ObjTransform.position = m_QingGongDst;
                EndQingGong();
                return;
            }

            //如果是抛物线轨迹，根据最大高度进行抛物线轨迹更新
            if (m_nQingGongType == (int)Games.GlobeDefine.GameDefine_Globe.QINGGONG_TRAIL_TYPE.PARABOLA)
            {
                //更新运动轨迹
                Vector3 fMoveDirection = (m_QingGongDst - m_QingGongSrc).normalized;

                //当前点
                Vector3 curPos = m_QingGongSrc + fMoveDirection * m_fMoveSpeed * fElapseTime;

                if (m_fQingGongMaxHeight > 0 && m_fQingGongTime > 0)
                {
                    //获得当前时间在轻功总行程中的路径比例
                    float fRate = fElapseTime / m_fQingGongTime;

                    float fHeightRefix = 0.0f;
                    //抛物线分前半段和后半段，分别处于上升和下降
                    if (fRate < 0.5f)
                    {
                        fHeightRefix = m_fQingGongMaxHeight * (fRate / 0.5f);
                    }
                    else
                    {
                        fHeightRefix = m_fQingGongMaxHeight * ((1 - fRate) / 0.5f);
                    }

                    //修正MainPlayer的高度
                    //Vector3 pos = transform.position;
                    curPos.y = curPos.y + fHeightRefix;
                    
                    //对位置进行验证。如果发现位置计算失败，直接到目的位置，结束本次轻功
                    float difValue = Vector3.Distance(m_QingGongSrc, curPos);
                    if (difValue > m_DistanceValue)
                    {
                        m_ObjTransform.position = m_QingGongDst;
                        EndQingGong();
                        return;
                    }

                    m_ObjTransform.position = curPos;
                }
                else
                {
                    //数据出错
                    m_ObjTransform.position = m_QingGongDst;
                    EndQingGong();
                }
            }
        }

        public void ShowChatBubble(ChatHistoryItem history)
        {
            if (null != m_playerHeadInfo)
            {
                m_playerHeadInfo.ShowChatBubble(history);
            }
        }

        public virtual void SetVisible(bool bVisible)
        {
            base.SetVisible(bVisible);
            OnSwithObjAnimState(CurObjAnimState);

            Obj_Character curFellow = Singleton<ObjManager>.Instance.FindObjInScene(m_fellowID) as Obj_Character;
            if (null == curFellow)
            {
                return;
            }

            curFellow.SetVisible(bVisible);
        }
        //跑商
        private int m_nPaoShangState = -1;
        public int PaoShangState
        {
            get { return m_nPaoShangState; }
            set { m_nPaoShangState = value; }
        }
        public void UpdatePaoShangStateEffect(int nState)
        {
            //名字图标
            if (m_playerHeadInfo)
            {
                m_playerHeadInfo.UpdatePaoShangIcon(nState);
            }
            //特效
            switch (nState)
            {
                case (int)GC_BROADCASTPSSTATE.PSSTATE.REMOVE:
                    StopEffect(GlobeVar.PAOSHANG_EFFECT_CANROB);
                    StopEffect(GlobeVar.PAOSHANG_EFFECT_NOTCANROB);
                    break;
                case (int)GC_BROADCASTPSSTATE.PSSTATE.CANROB:
                    StopEffect(GlobeVar.PAOSHANG_EFFECT_NOTCANROB);
                    PlayEffect(GlobeVar.PAOSHANG_EFFECT_CANROB);
                    break;
                case (int)GC_BROADCASTPSSTATE.PSSTATE.NOTCANROB:
                    StopEffect(GlobeVar.PAOSHANG_EFFECT_CANROB);
                    PlayEffect(GlobeVar.PAOSHANG_EFFECT_NOTCANROB);
                    break;
            }
        }

        // 组队跟随
        private bool m_bIsInTeamFollow;
        public virtual bool IsInTeamFollow
        {
            get { return m_bIsInTeamFollow; }
            set { m_bIsInTeamFollow = value; }
        }

        // 组队跟随，组队队形
        public void UpdateTeamFormation()
        {
            if (IsInTeamFollow == false)
            {
                return;
            }

            if (GlobeVar.INVALID_ID == BindParent)
            {
                return;
            }

            Obj TeamLeaderObj = Singleton<ObjManager>.Instance.FindObjInScene(BindParent);
            Obj_OtherPlayer TeamLeader = TeamLeaderObj as Obj_OtherPlayer;
            if (null != TeamLeader)
            {
                // 设置当前速度为 队长速度
                BaseAttr.MoveSpeed = TeamLeader.BaseAttr.MoveSpeed;
                
                // 当前 父节点的绑定索引
                int nBdChildIndex = TeamLeader.GetBindChildIndex(ServerID);
                float fDis2Leader = (nBdChildIndex + 1) * 1.0f; // 人之间 间隔1码

                // 坐骑上 再加个单位
                if (TeamLeader.MountID > 0)
                {
                    fDis2Leader += 1.0f;
                }

                // 查一下 队员 坐骑状态
                for (int i = 0; i < TeamLeader.BindChildren.Count; i++ )
                {
                    if (TeamLeader.BindChildren[i] == GlobeVar.INVALID_ID)
                    {
                        continue;
                    }
                    Obj obj = Singleton<ObjManager>.Instance.FindObjInScene(TeamLeader.BindChildren[i]);
                    Obj_OtherPlayer otherPlayer = obj as Obj_OtherPlayer;
                    if (otherPlayer && otherPlayer.MountID > 0)
                    {
                        fDis2Leader += 1.0f;
                    }
                }

                // 距离太远 加速
                float fDis = Vector2.Distance(transform.position, TeamLeader.transform.position);
                if (fDis - fDis2Leader > 0.5f)
                {
                    BaseAttr.MoveSpeed += (fDis-fDis2Leader)/0.5f; // 距离过远，加速追吧
                }

                if (NavAgent != null && NavAgent.speed != BaseAttr.MoveSpeed)
                {
                    NavAgent.speed = BaseAttr.MoveSpeed;
                }

                // 移动
                MoveTo(TeamLeader.transform.position, null, fDis2Leader);
            }
        }
        //父节点：绑定子节点的操作内容
        public override void OnBindOpt(Obj_Character obj)
        {
            // 不在 跟随下的话 
            if (false == IsInTeamFollow)
            {
                base.OnBindOpt(obj);
            }
        }
        //子节点：与父节点解绑的操作内容
        public override void OnUnBindOpt(Vector3 parentPos)
        {
            if (false == IsInTeamFollow)
            {
                base.OnUnBindOpt(parentPos);
            }
        }
        public static bool IsPhysicsProfession(int nProfessionType)//外功职业
        {
            if (nProfessionType == (int)CharacterDefine.PROFESSION.SHAOLIN ||
                nProfessionType == (int)CharacterDefine.PROFESSION.TIANSHAN ||
                nProfessionType == (int)CharacterDefine.PROFESSION.DALI)
            {
                return true;
            }
            return false;
        }
        public static bool IsMagicAttackProfession(int nProfessionType) //内功职业
        {
            if (nProfessionType == (int)CharacterDefine.PROFESSION.XIAOYAO ||
                nProfessionType == (int)CharacterDefine.PROFESSION.GAIBANG)
            {
                return true;
            }
            return false;
        }

        #region 变身相关
        public string m_lastMainObjUrl;

        private int nCurChangeState = (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.NORMAL;
        public int CurChangeState
        {
            get { return nCurChangeState; }
            set { nCurChangeState = value; }
        }

        public GameObject NormalGameObject; //正常状态
        public GameObject ChangeGameObject; //变身状态

        private bool m_IsLoadingModel = false;
        public bool IsLoadingModel
        {
            get { return m_IsLoadingModel; }
            set { m_IsLoadingModel = value; }
        }

        private int m_WaitChangeState = (int)GlobeVar.INVALID_ID;
        public int WaitChangeState
        {
            get { return m_WaitChangeState; }
            set { m_WaitChangeState = value; }
        }

        public virtual void ChangeModeVisual(int nChangeState)
        {
            if (nChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.NORMAL)
            {
                //变回正常模型
               ChangeOtherPlayerModelToNormal();
            }
            else if (nChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_2
                || nChangeState == (int)Games.GlobeDefine.GameDefine_Globe.ChangeModeState.CHANGE_1)
            {
               //变成变身状态模型
                ChangeOtherPlayerModel();
            }
        }
        public virtual void ChangeOtherPlayerModel()
        {
            Transform modelTransform = this.transform.Find("Model");
            modelTransform.name = "ModelChange";
            this.NormalGameObject = modelTransform.gameObject;
            //暂时写死 玩家变身后id 为 461
            int nCharmodelID = GetCharModelIDByChangeState(Profession,CurChangeState);

            if (NormalGameObject != null)
            {
                Destroy(NormalGameObject);
                ResourcesManager.Instance.ReduceCachedRef(m_lastMainObjUrl, EResourceType.CharacterModel, ObjType);
                NormalGameObject = null;
            }
            CreateObjFunction.ChangeOtherPLayerObjToChangeModel(nCharmodelID, this);
        }
        public virtual void ChangeOtherPlayerModelToNormal()
        {
            if (ChangeGameObject != null)
            {
                Destroy(ChangeGameObject);
                ResourcesManager.Instance.ReduceCachedRef(m_lastMainObjUrl, EResourceType.CharacterModel, ObjType);
                ChangeGameObject = null;
            }

            CreateObjFunction.ChangeOtherPLayerObjToNormal(this);
        }
		//======================================================
		private Obj_FlyWing m_Obj_FlyWing = null;
		public Obj_FlyWing  FlyWingObj
		{
			get { return m_Obj_FlyWing ;}
			set { m_Obj_FlyWing = value ;}
		}

		// 隐藏显示翅膀
		public void ShowHideFlyWing(int flyWingId ,bool isShow)
		{
			Obj_FlyWing.ShowHideFlyWing (this,flyWingId,isShow);
		}

		// 装备翅膀
		public void EquipFlyWing(int id)
		{
			Obj_FlyWing.EquipFlyWing (this,id);
		}

		// 卸下翅膀
		public void CancelEquipFlyWing()
		{
			Obj_FlyWing.CancelEquipFlyWing (this);
		}

        //====================其他玩家使用=======================
        private int m_OtherPlayerFlyWingModelId =  GlobeVar.INVALID_ID;
        public int OtherPlayerFlyWingModelId
        {
			set{ m_OtherPlayerFlyWingModelId = value; }
            get { return m_OtherPlayerFlyWingModelId; }
        }
        #endregion

      //魂器显示特效
        public GameObject BelleShowEffect = null;
        public int LastBellShowEffectId = -1;
        public bool IsCreatePlayerEffect = false;
        public void UpdateBelleShow()
        {
          Invoke("UpdateBelleShowDelay", 1f);
          IsCreatePlayerEffect = true;
        }
        public virtual void UpdateBelleShowDelay()
        {
          int CombatAllValue = 0;
          Dictionary<int, Belle> OwnedBelleDic;
          if (!BelleData.AllOtherPlayerBelleMap.TryGetValue(this.GUID, out OwnedBelleDic)) {
            return;
          }
          foreach (KeyValuePair<int, Belle> pair in OwnedBelleDic) {
            Belle curBelleData = pair.Value;
            curBelleData.UpdateAttrMapForOther();
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
          IsCreatePlayerEffect = false;
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
        protected void PlayEffectOver(GameObject effectObj, object param)
        {
          if (effectObj != null && effectObj.transform.parent != null) {
            BelleShowEffect = effectObj.transform.parent.gameObject;
          }
        }
    }
}
