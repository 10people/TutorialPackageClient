/********************************************************************
	日期:	2014/03/01
	文件: 	Obj_MainPlayer_Auto.cs
	路径:	D:\work\code\mldj\Version\Main\Project\Client\Assets\MLDJ\Script\Obj\Obj_MainPlayer_Auto.cs
	作者:	YangXin
	描述:	人物挂机
	修改:	
*********************************************************************/
using System;
using UnityEngine;
using Games.GlobeDefine;
using System.Collections.Generic;
using Games.Item;
using GCGame.Table;
using Games.SkillModle;
namespace Games.LogicObj
{
    public partial class Obj_MainPlayer : Obj_OtherPlayer
    {
        //是否在对话状态
        public bool IsInDialog
        {
            get { return m_IsInDialog; }
            set { m_IsInDialog = value; }
        }
        private bool m_IsInDialog = false;
        //是否开启Cabal挂机模式（自动接、交任务等）
        public bool IsOpenCabalAuto
        {
            get { return GameManager.gameManager.PlayerDataPool.IsOpenCabalAuto; }
            set { GameManager.gameManager.PlayerDataPool.IsOpenCabalAuto = value; }
        }

        //是否开启挂机模式
        public bool IsOpenAutoCombat
        {
            get { return GameManager.gameManager.PlayerDataPool.IsOpenAutoCombat; }
            set { GameManager.gameManager.PlayerDataPool.IsOpenAutoCombat = value; }
        }
        //最近一次打断 自动战斗的时间
        public float BreakAutoCombatTime
        {
            get { return GameManager.gameManager.PlayerDataPool.BreakAutoCombatTime; }
            set { GameManager.gameManager.PlayerDataPool.BreakAutoCombatTime = value; }
        }
        //是否开始自动战斗
        public bool AutoComabat
        {
            get { return GameManager.gameManager.PlayerDataPool.AutoComabat; }
            set
            {
				bool oldValue = GameManager.gameManager.PlayerDataPool.AutoComabat;
                GameManager.gameManager.PlayerDataPool.AutoComabat = value;
                if (GameManager.gameManager.PlayerDataPool.AutoComabat)
                {
                    m_AutoFightPointVec = Position;
                    //广播自动战斗开始消息
					if (oldValue != GameManager.gameManager.PlayerDataPool.AutoComabat)
					{
                    	Messenger.Broadcast(MessengerConst.OnAutoCombatBegin);
					}
                }
                else
                {
                    //广播自动战斗结束消息
					if (oldValue != GameManager.gameManager.PlayerDataPool.AutoComabat)
					{
                    	Messenger.Broadcast(MessengerConst.OnAutoCombatEnd);
					}
                }
            }
        }
        public void BreakAutoCombatState()
        {
            AutoComabat = false;
            BreakAutoCombatTime = Time.time;

        }
        public bool GetAutoCombatState()
        {
            if (Controller)
            {
                return Controller.CombatFlag;
            }
            return false;
        }
        public void EnterAutoCombat()
        {
            if (Controller)
            {
                Controller.EnterCombat();
                AutoComabat = true;
                IsOpenAutoCombat = true;
                UpdateSellItem();       //自动卖药
            }
        }

        public void LeveAutoCombat()
        {
            if (Controller)
            {
                Controller.LeaveCombat();
                AutoComabat = false;
                IsOpenAutoCombat = false;
            }
         
        }
        //拾取物品,按品质算的,以位记录AUTOCOMBAT_PICKUP_TYPE
      
        protected int m_nAutoPickUp = 0;
        public int AutoPickUp
        {
            get { return m_nAutoPickUp; }
            set { m_nAutoPickUp = value; }
        }
        public void SetAutoPickUpFlag(int nIdx, bool bFlag)
        {
            if (nIdx >= 0 && nIdx < 32)
            {
                if (bFlag == true)
                {
                    m_nAutoPickUp |= 0x01 << nIdx;
                }
                else
                {
                    m_nAutoPickUp &= ~(0x01 << nIdx);
                }
            }
        }
        public bool GetAutoPickUpFlag(int nIdx)
        {
            if (nIdx >= 0 && nIdx < 32)
            {
                return ((m_nAutoPickUp&(0x01 << nIdx)) > 0);     
            }
            return false;
        }
        //自动组队
        protected bool m_bAutoInviteTeamAccept = false;
        public bool AutoInviteTeamAccept
        {
            get { return m_bAutoInviteTeamAccept; }
            set { m_bAutoInviteTeamAccept = value; }
        }

        //自动组队
        protected bool m_bAutoJoinTeamAccept = false;
        public bool AutoJoinTeamAccept
        {
            get { return m_bAutoJoinTeamAccept; }
            set { m_bAutoJoinTeamAccept = value; }
        }

		//自动活动
		protected bool m_bAutoActivityAccept = false;
		public bool AutoActivityAccept
		{
			get { return m_bAutoActivityAccept; }
			set { m_bAutoActivityAccept = value; }
		}
        //自动回血回蓝 白百分比
        protected float m_fAutoHpPercent = 0.712f;
        public float AutoHpPercent
        {
            get { return m_fAutoHpPercent; }
            set { m_fAutoHpPercent = value; }
        }
        protected int m_nAutoHpID = -1;
        public int AutoHpID
        {
            get { return m_nAutoHpID; }
            set { m_nAutoHpID = value; }
        }

        protected float m_fAutoMpPercent = 0.712f;
        public float AutoMpPercent
        {
            get { return m_fAutoMpPercent; }
            set { m_fAutoMpPercent = value; }
        }
        protected int m_nAutoMpID = -1;
        public int AutoMpID
        {
            get { return m_nAutoMpID; }
            set { m_nAutoMpID = value; }
        }

        protected bool m_bAutoBuyDrug = false;
        public bool AutoBuyDrug
        {
            get { return m_bAutoBuyDrug; }
            set { m_bAutoBuyDrug = value; }
        }

        protected bool m_bIsSelectDrug = false;
        public bool AutoIsSelectDrug
        {
            get { return m_bIsSelectDrug; }
            set { m_bIsSelectDrug = value; }
        }

        protected UInt64 m_nAutoEquipGuid = GlobeVar.INVALID_GUID;
        public UInt64 AutoEquipGuid
        {
            get { return m_nAutoEquipGuid; }
            set { m_nAutoEquipGuid = value; }
        }
        //搜索范围
//         protected int m_nAutoRadius = 50;
//         public int AutoRadius
//         {
//             get { return m_nAutoRadius; }
//             set { m_nAutoRadius = value; }
//         }
         //公告控制
        protected int m_nAutoNotice = 0;
        public int AutoNotice
        {
            get { return m_nAutoNotice; }
            set { m_nAutoNotice = value; }
        }

        private int m_nAutoMovetoQGPointId =-1; //需要自动走到的轻功点ID
        public int AutoMovetoQGPointId
        {
            get { return m_nAutoMovetoQGPointId; }
            set { m_nAutoMovetoQGPointId = value; }
        }  
        public UInt64 HpDrugGUID
        {
            get { return GameManager.gameManager.PlayerDataPool.HpDrugGUID; }
            set { GameManager.gameManager.PlayerDataPool.HpDrugGUID = value; }
        }

//        private UInt64 m_nMpDrugGUID = GlobeVar.INVALID_GUID;       //魔药位置
        public UInt64 MpDrugGUID
        {
            get { return GameManager.gameManager.PlayerDataPool.MpDrugGUID; }
            set { GameManager.gameManager.PlayerDataPool.MpDrugGUID = value; }
        }

        private Vector3 m_AutoFightPointVec;
        public UnityEngine.Vector3 AutoFightPointVec
        {
            get { return m_AutoFightPointVec; }
            set { m_AutoFightPointVec = value; }
        }
        public void InitAutoInfo()
        {
            //先初始化
            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP1, false);
            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP2, false);
            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP3, false);
            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP4, false);
            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP5, false);
            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_STUFF, false);
            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_OTHER, false);

            AutoHpID = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_HP;
            AutoMpID = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_MP;
            ClearAutoSelSkillID();
            //读取注册表
            Dictionary<string, PlayerAuto> curPlayerAutoList = UserConfigData.GetPlayerAutoList();
            UInt64 PlayerGuid = PlayerPreferenceData.LastRoleGUID;
            if (curPlayerAutoList.ContainsKey(PlayerGuid.ToString()))
            {
                PlayerAuto oPlayerAuto = curPlayerAutoList[PlayerGuid.ToString()];
                if (oPlayerAuto != null)
                {
                    //AutoComabat = oPlayerAuto.AutoFightOpenToggle == 1? true : false; 
                    AutoPickUp = oPlayerAuto.AutoPickUp;

                    AutoInviteTeamAccept = oPlayerAuto.AutoInviteTeamAccept == 1? true : false;
                    AutoJoinTeamAccept = oPlayerAuto.AutoJoinTeamAccept == 1 ? true : false; 
					AutoActivityAccept = oPlayerAuto.AutoJoinActivity == 1 ? true : false; 

                    AutoHpPercent = (float)oPlayerAuto.AutoHpPercent/100;
                    AutoMpPercent = (float)oPlayerAuto.AutoMpPercent/100;
                    AutoBuyDrug = oPlayerAuto.AutoBuyDrug == 1 ? true : false; 
                    //AutoRadius = oPlayerAuto.AutoRadius; 
                    AutoNotice = oPlayerAuto.AutoNotice;

                    AutoHpID = oPlayerAuto.AutoHpID;
                    AutoMpID = oPlayerAuto.AutoMpID;
                    AutoIsSelectDrug = oPlayerAuto.AutoIsSelectDrug == 1 ? true : false;
                    AutoEquipGuid = oPlayerAuto.AutoEquipGuid;
					//m_AutoSelSkillID.Clear();

					/*for( int i = 0 ; i < oPlayerAuto.AutoSkillID.Length ; ++i)
					{
						m_AutoSelSkillID.Add( oPlayerAuto.AutoSkillID[i]);
					} */
                    m_AutoSelSkillID = oPlayerAuto.AutoSkillID;
                    UpdateSelectDrug();
                }               
            }
          
            if (PlayerFrameLogic.Instance())
            {
                PlayerFrameLogic.Instance().InitAutoFight();
            }
            if (null != FunctionButtonLogic.Instance())
            {
                FunctionButtonLogic.Instance().UpdateAutoFightBtnState();
            }
            m_nCopySceneExitTime = -1;
        }
        public void UpdateSelectDrug()
        {
            GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
            GameItem eItem = BackPack.GetItemByGuid(HpDrugGUID);
            //if (AutoIsSelectDrug == false) 永远可以自动选择药
            {
                //做自动选药处理
                bool isFind = false;
                if (eItem == null || (eItem != null && eItem.IsValid() == false) || AutoIsSelectDrug == false)
                {
                    //优先选择选择过的药品类型
                    if (AutoIsSelectDrug == true)
                    {
                        if (AutoIsSelectDrug == true)
                        {
                            if (BackPack.GetItemCountByDataId(AutoHpID) > 0)
                            {
                                HpDrugGUID = BackPack.GetItemGuidByDataID(AutoHpID);
                                isFind = true;
                            }
                        }
                    }
                    if (!isFind)
                    {
                        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_DYHP; i >= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_DYHP; --i)
                        {

                            Tab_CommonItem commonItem = TableManager.GetCommonItemByID(i, 0);
                            if (commonItem != null)
                            {
                                if (BaseAttr.Level >= commonItem.MinLevelRequire)
                                {
                                    for (int index = 0; index < BackPack.ContainerSize; ++index)
                                    {
                                        GameItem eItemEx = BackPack.GetItem(index);
                                        if (eItemEx != null && eItemEx.DataID == i) //身上有这个药
                                        {
                                            AutoHpID = i;
                                            HpDrugGUID = BackPack.GetItemGuidByDataID(AutoHpID);
                                            isFind = true;
                                            break;
                                        }
                                    }
                                    if (isFind)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    if (!isFind)
                    {
                        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_HP; i >= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_HP; --i)
                        {
                            Tab_CommonItem commonItem = TableManager.GetCommonItemByID(i, 0);
                            if (commonItem != null)
                            {
                                if (BaseAttr.Level >= commonItem.MinLevelRequire)
                                {
                                    for (int index = 0; index < BackPack.ContainerSize; ++index)
                                    {
                                        GameItem eItemEx = BackPack.GetItem(index);
                                        if (eItemEx != null && eItemEx.DataID == i) //身上有这个药
                                        {
                                            AutoHpID = i;
                                            HpDrugGUID = BackPack.GetItemGuidByDataID(AutoHpID);
                                            isFind = true;
                                            break;
                                        }
                                    }
                                    if (isFind)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
                eItem = BackPack.GetItemByGuid(MpDrugGUID);
                if (eItem == null || (eItem != null && eItem.IsValid() == false) || AutoIsSelectDrug == false)
                {
                    isFind = false;
                     //优先选择选择过的药品类型
                    if (AutoIsSelectDrug == true)
                    {
                        if (BackPack.GetItemCountByDataId(AutoMpID) > 0)
                        {
                            MpDrugGUID = BackPack.GetItemGuidByDataID(AutoMpID);
                            isFind = true;
                        }
                    }
                   
                    if (!isFind)
                    {
                        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_DYMP; i >= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_DYMP; --i)
                        {
                            Tab_CommonItem commonItem = TableManager.GetCommonItemByID(i, 0);
                            if (commonItem != null)
                            {
                                if (BaseAttr.Level >= commonItem.MinLevelRequire)
                                {
                                    for (int index = 0; index < BackPack.ContainerSize; ++index)
                                    {
                                        GameItem eItemEx = BackPack.GetItem(index);
                                        if (eItemEx != null && eItemEx.DataID == i) //身上有这个药
                                        {
                                            AutoMpID = i;
                                            MpDrugGUID = BackPack.GetItemGuidByDataID(AutoMpID);
                                            isFind = true;
                                            break;
                                        }
                                    }
                                    if (isFind)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    if (!isFind)
                    {
                        for (int i = (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_END_MP; i >= (int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_DRUG_ID.AUTO_DRUG_START_MP; --i)
                        {
                            Tab_CommonItem commonItem = TableManager.GetCommonItemByID(i, 0);
                            if (commonItem != null)
                            {
                                if (BaseAttr.Level >= commonItem.MinLevelRequire)
                                {
                                    for (int index = 0; index < BackPack.ContainerSize; ++index)
                                    {
                                        GameItem eItemEx = BackPack.GetItem(index);
                                        if (eItemEx != null && eItemEx.DataID == i) //身上有这个药
                                        {
                                            AutoMpID = i;
                                            MpDrugGUID = BackPack.GetItemGuidByDataID(AutoMpID);
                                            isFind = true;
                                            break;
                                        }
                                    }
                                    if (isFind)
                                    {
                                        break;
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        private int m_nCopySceneExitTime = -1;
        public int ExitTime
        {
            get { return m_nCopySceneExitTime; }
            set { m_nCopySceneExitTime = value; }
        }
        public static float m_fAutoTimeSecond = Time.realtimeSinceStartup;
        public void UpdateAuto()
        {
            float ftimeSec = Time.realtimeSinceStartup;
            int nTimeData = (int)(ftimeSec - m_fAutoTimeSecond);
            if (nTimeData > 0)
            {
                m_fAutoTimeSecond = ftimeSec;
                if (ExitTime > 0)
                {
                    ExitTime = ExitTime - nTimeData;

                    if (ExitTime <= 0)
                    {
                        if (GameManager.gameManager.PlayerDataPool.CopySceneChange) //正在传送中
                        {
                            return;
                        }
                        GameManager.gameManager.PlayerDataPool.CopySceneChange = true;
                        CG_LEAVE_COPYSCENE packet = (CG_LEAVE_COPYSCENE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_LEAVE_COPYSCENE);
                        packet.NoParam = 1;
                        packet.SendPacket();
                    }
                    else
                    {
                        SendNoticMsg(false, "#{2227}", ExitTime);
                    }                    
                }
                if (GameManager.gameManager.PlayerDataPool.CJGSweepCDTime > 0)
                {
                    GameManager.gameManager.PlayerDataPool.CJGSweepCDTime = GameManager.gameManager.PlayerDataPool.CJGSweepCDTime - nTimeData;
                    if (GameManager.gameManager.PlayerDataPool.CJGSweepCDTime < 0)
                    {
                        GameManager.gameManager.PlayerDataPool.CJGSweepCDTime = 0;
                    }        
                }
                if (GameManager.gameManager.PlayerDataPool.CopyeSceneSweepCDTime > 0)
                {
                    GameManager.gameManager.PlayerDataPool.CopyeSceneSweepCDTime = GameManager.gameManager.PlayerDataPool.CopyeSceneSweepCDTime - nTimeData;
                    if (GameManager.gameManager.PlayerDataPool.CopyeSceneSweepCDTime < 0)
                    {
                        GameManager.gameManager.PlayerDataPool.CopyeSceneSweepCDTime = 0;
                    }        
                }
                if (GameManager.gameManager.PlayerDataPool.HpItemCDTime > 0)
                {
                    GameManager.gameManager.PlayerDataPool.HpItemCDTime = GameManager.gameManager.PlayerDataPool.HpItemCDTime - nTimeData * 1000.0f;
                    if (GameManager.gameManager.PlayerDataPool.HpItemCDTime < 0) GameManager.gameManager.PlayerDataPool.HpItemCDTime = 0;
                }
                if (GameManager.gameManager.PlayerDataPool.MpItemCDTime > 0)
                {
                    GameManager.gameManager.PlayerDataPool.MpItemCDTime = GameManager.gameManager.PlayerDataPool.MpItemCDTime - nTimeData * 1000.0f;
                    if (GameManager.gameManager.PlayerDataPool.MpItemCDTime < 0) GameManager.gameManager.PlayerDataPool.MpItemCDTime = 0;
                }
            }
            //自动吃药
            if (IsDie() == false)
            {
                AutoUseHPMPDrug();
                //   OptMPChange();
            }

            //藏经阁扫荡CD时间

        }
       
        public void UpdateAutoCombatBreakState()
        {
            if (IsOpenAutoCombat && AutoComabat==false)
            {
                if (IsMoving || IsInDialog)
                {
                    BreakAutoCombatTime = Time.time;
                }
                //空闲配置指定时间后 自动进入挂机状态
                if ((Time.time -BreakAutoCombatTime)*1000 >= GlobalData.EnterAutoCombatTime)
                {
                    AutoComabat = true;
                  
                }
            }
            else
            {
                BreakAutoCombatTime = 0;
            }
        }
        public void ServerAutoInfo()
        {
            //List<LoginData.PlayerRoleData> curList = new List<LoginData.PlayerRoleData>();
            PlayerAuto AutoData = new PlayerAuto(AutoPickUp, 
                AutoInviteTeamAccept, 
                AutoJoinTeamAccept,
				 AutoActivityAccept,
                (int)(AutoHpPercent * 100), 
                (int)(AutoMpPercent * 100),
                AutoBuyDrug,
                AutoNotice, 
                AutoHpID,
                AutoMpID, 
                AutoIsSelectDrug, 
                AutoEquipGuid,
                m_AutoSelSkillID);
            UserConfigData.AddPlayerAuto(GUID.ToString(), AutoData);
        }
        // 自动吃药
        public bool AutoPercent(int nType)
        {
            bool bSucceed = false;
            if (nType != (int)MedicSubClass.HP && nType != (int)MedicSubClass.MP)
            {
                return false;
            }
            GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
            GameItem eItem = null;
            int nType2 = nType; 
            if (nType == (int)MedicSubClass.HP)
            {
                eItem = BackPack.GetItemByGuid(HpDrugGUID);
                nType2 = (int)MedicSubClass.HP_DY;
            }
            else if (nType == (int)MedicSubClass.MP)      
            {
                eItem = BackPack.GetItemByGuid(MpDrugGUID);
                nType2 = (int)MedicSubClass.MP_DY;
            }

            if (eItem != null && eItem.IsValid())
            {
                Tab_CommonItem line = TableManager.GetCommonItemByID(eItem.DataID, 0);
                if (null != line)
                {
                    if (line.ClassID == (int)ItemClass.MEDIC
                        && (line.SubClassID == nType || line.SubClassID == nType2)
                        && (AutoHpID == line.Id || AutoMpID == line.Id))
                    {
                        bSucceed = true;
                        AutoUseDrug(eItem);
                    }
                }
            }
            if (bSucceed == false)
            {
                for (int index = 0; index < BackPack.ContainerSize; ++index)
                {
                    GameItem eItemEx = BackPack.GetItem(index);
                    if (eItemEx != null && eItemEx.IsValid())
                    {
                        Tab_CommonItem line = TableManager.GetCommonItemByID(eItemEx.DataID, 0);
                        if (null != line)
                        {
                            if (line.ClassID == (int)ItemClass.MEDIC
                                && (line.SubClassID == nType || line.SubClassID == nType2)
                                 && (AutoHpID == line.Id || AutoMpID == line.Id))
                            {
                                bSucceed = true;
                                if (AutoUseDrug(eItemEx))
                                {
                                    //BackPackItemLogic.Instance().UseItem(eItemEx);
                                    if (nType == (int)MedicSubClass.HP)
                                    {
                                        HpDrugGUID = eItemEx.Guid;
                                    }
                                    else
                                    {
                                        MpDrugGUID = eItemEx.Guid;
                                    }
                                    break;
                                }
                            }
                        }
                    }
                }
            }
            return bSucceed;
        }        
        public bool AutoUseDrug(GameItem item)
        {
            if (null == item)
                return false;

            Tab_CommonItem tabItem = TableManager.GetCommonItemByID(item.DataID, 0);
            if (null != tabItem)
            {
                int canuse = tabItem.CanUse;
                if (canuse == 1)
                {
                    CG_USE_ITEM useitem = (CG_USE_ITEM)PacketDistributed.CreatePacket(MessageID.PACKET_CG_USE_ITEM);
                    useitem.SetItemguid(item.Guid);
                    useitem.SendPacket();
                    return true;
                }
            }
            return false;
        }
        // 自动买药
        public bool OnAutoBuyDrug(int nId)
        {
            bool IsBuy = false;
            int ShopId = 3;
            int itemIdex = -1;
            Tab_SystemShop curShop = TableManager.GetSystemShopByID(ShopId, 0);
            if (curShop != null)
            {
                for (int i = 0; i < curShop.Pnum; i++)
                {
                    if (nId == curShop.GetPidbyIndex(i))
                    {
                        IsBuy = true;
                        itemIdex = i;
                        break;
                    }

                }
                if (IsBuy)  //可以买
                {
                    CG_SYSTEMSHOP_BUY buyPacket = (CG_SYSTEMSHOP_BUY)PacketDistributed.CreatePacket(MessageID.PACKET_CG_SYSTEMSHOP_BUY);
                    buyPacket.SetBuyNum(1);
                    buyPacket.SetShopId(ShopId);
                    buyPacket.SetMercIndex(itemIdex);
                    buyPacket.SendPacket();

                }
            }
            return true;
        }
        //////////////////////////////////////////////////////////////////////////
        //系统设置
//         protected int m_nSystemNameBoard = 0;   //名字板
//         public int SystemNameBoard
//         {
//             get { return m_nSystemNameBoard; }
//             set { m_nSystemNameBoard = value; }
//         }
//         protected int m_nSystemMusic = 0;   //声音
//         public int SystemMusic
//         {
//             get { return m_nSystemMusic; }
//             set { m_nSystemMusic = value; }
//         }
//         protected int m_nSystemSoundEffect = 0;   //声效
//         public int SystemSoundEffect
//         {
//             get { return m_nSystemSoundEffect; }
//             set { m_nSystemSoundEffect = value; }
//         }
//         protected int m_nTableau = 0;   //图像
//         public int SystemTableau
//         {
//             get { return m_nTableau; }
//             set { m_nTableau = value; }
//         }
//         public void InitSystemInfo()
//         {
//             SystemNameBoard = PlayerPreferenceData.SystemNameBoard;
//             SystemMusic = PlayerPreferenceData.SystemMusic;
//             SystemSoundEffect = PlayerPreferenceData.SystemSoundEffect;
//             SystemTableau = PlayerPreferenceData.SystemTableau;
// 
//             GameManager.gameManager.SoundManager.EnableBGM = !(SystemMusic == 1 ? true : false);
//             GameManager.gameManager.SoundManager.EnableSFX = !(SystemSoundEffect == 1 ? true : false);
// 
//          
        public void AutoFightInYanziwu()
        {
            if (IsOpenAutoCombat == false
                /*|| GameManager.gameManager.RunningScene != (int) Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)*/
                )
            {
                return;
            }

            Vector3 targetPos = new Vector3();
            GameObject[] m_QinggongList = GameManager.gameManager.ActiveScene.QingGongPointList;
            if (m_QinggongList.Length < 0 || m_QinggongList.Length > 3)
            {
                return;
            }
            Vector2[] PointVector2 = new Vector2[3];
            PointVector2[0] = new Vector2(56.2f, 27.4f); //轻功点1 起跳点
            PointVector2[2] = new Vector2(41.5f, 50.9f);//轻功点2 起跳点
            PointVector2[1] = new Vector2(3.8f, 41.7f);//轻功点3 起跳点
            if (m_QinggongList[1].activeInHierarchy) //轻功点3开启表示 向区域四中心移动
            {
                targetPos.x = 18.5f;
                targetPos.z = 19.6f;
            }
            else if (m_QinggongList[2].activeInHierarchy) //轻功点2  向区域三中心移动
            {
                targetPos.x = 17.8f;
                targetPos.z = 51.2f;
            }
            else if (m_QinggongList[0].activeInHierarchy) //轻功点1  向区域二中心移动
            {
                targetPos.x = 54.5f;
                targetPos.z = 47.2f;
            }
            else //向区域一中心移动
            {
                targetPos.x = 55.0f;
                targetPos.z = 17.0f;
            }
            //Vector3 _vec3Tar = new Vector3(targetPos.x, Position.y, targetPos.z);
            //float fDis = Vector3.Distance(_vec3Tar, Position);
            //if (fDis > 16) //距离目标中心点过远 则改为向最近开启过的轻功点移动
            //{
            //    float fMinDis = 9999999.0f;
            //    int nSelePointId = -1;
            //    float fPointDis = -1;
            //    for (int i = 0; i < m_QinggongList.Length; i++)
            //    {
            //        if (m_QinggongList[i].activeInHierarchy)
            //        {
            //            if (Position.z > PointVector2[i].y)
            //            {
            //                continue; //不往回走
            //            }
            //            fPointDis = Vector3.Distance(new Vector3(PointVector2[i].x, Position.y, PointVector2[i].y), Position);
            //            if (fPointDis < fMinDis)
            //            {
            //                fMinDis = fPointDis;
            //                targetPos.x = PointVector2[i].x;
            //                targetPos.z = PointVector2[i].y;
            //            }
            //        }
            //    }
            //}
            AutoSearchPoint point = new AutoSearchPoint(GameManager.gameManager.RunningScene, targetPos.x, targetPos.z);

            if (GameManager.gameManager && GameManager.gameManager.AutoSearch)
            {
                BreakAutoCombatState();
                GameManager.gameManager.AutoSearch.ProcessAutoSearch(point);
            }
        }

        public void AutoFightInFourVillain()
        {
            if (IsOpenAutoCombat == false)
            {
                return;
            }
            /*if (GameManager.gameManager.RunningScene != (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_FOURVILLAIN)
            {
                return;
            }*/
            if (m_FourVillainAutoCombatTargetPos == null)
            {
                return;
            }
            AutoSearchPoint point = new AutoSearchPoint(GameManager.gameManager.RunningScene, m_FourVillainAutoCombatTargetPos.x, m_FourVillainAutoCombatTargetPos.y);

            if (GameManager.gameManager && GameManager.gameManager.AutoSearch)
            {
                BreakAutoCombatState();
                GameManager.gameManager.AutoSearch.ProcessAutoSearch(point);
            }
        }

        public void AutoFightFlyInYanZiWu()
        {
            if (IsOpenAutoCombat == false)
            {
                return;
            }
            /*if (GameManager.gameManager.RunningScene == (int)Games.GlobeDefine.GameDefine_Globe.SCENE_DEFINE.SCENE_YANZIWU)
            {
                GameObject[] m_QinggongList = GameManager.gameManager.ActiveScene.QingGongPointList;
                if (m_QinggongList.Length < 0 || m_QinggongList.Length >3)
                {
                    return;
                }
                Vector3 targetPos = new Vector3();
                if (m_QinggongList[1].activeInHierarchy)//轻功点3
                {
                    targetPos.x = 3.8f;
                    targetPos.z = 41.7f;
                }
                else if (m_QinggongList[2].activeInHierarchy)//轻功点2
                {
                    targetPos.x = 41.5f;
                    targetPos.z = 50.9f;
                }
                else if (m_QinggongList[0].activeInHierarchy)//轻功点1
                {
                    targetPos.x = 56.2f;
                    targetPos.z = 27.4f;
                }
                AutoSearchPoint point = new AutoSearchPoint(GameManager.gameManager.RunningScene, targetPos.x, targetPos.z);
                
                if (GameManager.gameManager && GameManager.gameManager.AutoSearch)
                {
                    GameManager.gameManager.AutoSearch.BuildPath(point);
                }
            }*/
        }
        public void UpdateSellItem()
        {
            if (BaseAttr.Level < GlobeVar.MAX_AUTOEQUIT_LIVE)
            {
                return;
            }
            if (IsOpenAutoCombat == false)
            {
                return;
            }
            GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
            List<ulong> selllist = new List<ulong>();
            List<int> sellCountList = new List<int>();
            
            for (int index = 0; index < BackPack.ContainerSize; ++index)
            {
                GameItem eItem = BackPack.GetItem(index);
                if (eItem!= null) //身上有这个药
                {
                    Tab_CommonItem line = TableManager.GetCommonItemByID(eItem.DataID, 0);
                    if (line != null)
                    {
                        //计算品级及拾取规则                           
                        if (line.ClassID == (int)ItemClass.EQUIP && GetAutoPickUpFlag(line.Quality)
                             /* && eItem.EnchanceLevel <= 0 && eItem.EnchanceExp <= 0 && eItem.StarLevel <= 0*/
                             && EquipStrengthenLogic.IsAutoEnchanceMaterial(eItem)
                            && AutoEquipGuid != GlobeVar.INVALID_GUID)
                        {
                            selllist.Add(eItem.Guid);
                            sellCountList.Add(eItem.StackCount);
                        }                       
                    }
                }                                                   
            }
            //做自动强化物品            
             if (selllist.Count > 0)
             {
                 //SysShopController.SellItem((int)GameItemContainer.Type.TYPE_BACKPACK, selllist);
                 CG_EQUIP_ENCHANCE equipEnchance = (CG_EQUIP_ENCHANCE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIP_ENCHANCE);
                 //发送消息包
                 equipEnchance.SetPacktype(1);
                 equipEnchance.SetEquipguid(AutoEquipGuid);
                 for (int i = 0; i < selllist.Count; ++i)
                 {
                     equipEnchance.AddMaterialguid(selllist[i]);
                     equipEnchance.AddMaterialcount(sellCountList[i]);
                 }                 
                 equipEnchance.SendPacket();
             }           
        }
        public void UpdateSellItem(int index)
        {
            if (BaseAttr.Level < GlobeVar.MAX_AUTOEQUIT_LIVE)
            {
                return;
            }    
            if (IsOpenAutoCombat == false)
            {
                return;
            }
            GameItemContainer BackPack = GameManager.gameManager.PlayerDataPool.BackPack;
            //List<ulong> selllist = new List<ulong>();
            //做自动强化物品
            GameItem eItem = BackPack.GetItem(index);
            if (eItem != null) //身上有这个药
            {
                Tab_CommonItem line = TableManager.GetCommonItemByID(eItem.DataID, 0);
                if (line != null)
                {
                    //计算品级及拾取规则                           
                    if (line.ClassID == (int)ItemClass.EQUIP && GetAutoPickUpFlag(line.Quality)
                       /* && eItem.EnchanceLevel <= 0 && eItem.EnchanceExp <= 0 && eItem.StarLevel <= 0*/
                         && EquipStrengthenLogic.IsAutoEnchanceMaterial(eItem)
                            && AutoEquipGuid != GlobeVar.INVALID_GUID)
                    {
                        //selllist.Add(eItem.Guid);
                        CG_EQUIP_ENCHANCE equipEnchance = (CG_EQUIP_ENCHANCE)PacketDistributed.CreatePacket(MessageID.PACKET_CG_EQUIP_ENCHANCE);
                        equipEnchance.SetPacktype(1);
                        equipEnchance.SetEquipguid(AutoEquipGuid);
                        equipEnchance.AddMaterialguid(eItem.Guid);
                        equipEnchance.AddMaterialcount(eItem.StackCount);
                        equipEnchance.SendPacket();
                    }
                }            
            }
//             if (selllist.Count > 0)
//             {
//                 SysShopController.SellItem((int)GameItemContainer.Type.TYPE_BACKPACK, selllist);
//             }
        }
        public void UpdateSelectEquip()
        {
            if (AutoEquipGuid == GlobeVar.INVALID_GUID)
            {
                GameItemContainer EquipPack = GameManager.gameManager.PlayerDataPool.EquipPack;
                if (EquipPack != null)
                {
                    for (int index = 0; index < EquipPack.ContainerSize; index++)
                    {
                        GameItem equip = EquipPack.GetItem(index);
                        if (equip != null && equip.IsValid() && equip.IsBelt() == false)
                        {
                            AutoEquipGuid = equip.Guid;
                            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP1, true);
                            SetAutoPickUpFlag((int)Games.GlobeDefine.GameDefine_Globe.AUTOCOMBAT_PICKUP_TYPE.PICKUP_EQUIP2, true);
                            ServerAutoInfo();
                            UpdateSellItem();
                            return;
                        }
                    }
                }                
            }           
        }
        public bool IsAutoSellItem(int nDataId)
        {
            if (IsOpenAutoCombat == false)
            {
                return false;
            }
            Tab_CommonItem line = TableManager.GetCommonItemByID(nDataId, 0);
            if (line != null)
            {
                //计算品级及拾取规则                           
                if ( line.ClassID == (int)ItemClass.EQUIP 
                    && GetAutoPickUpFlag(line.Quality) )
                {
                    return true;
                }
            }
            return false;
        }
        private int m_nAutoSceneId = -1;
        private Vector3 m_AutoPos = new Vector3(0, 0, 0);
        public void UpdateAutoAnteMortem()
        {
            if (IsOpenAutoCombat == false)
            {
                return ;
            }
            if (IsDie())
            {
                 m_nAutoSceneId = GameManager.gameManager.RunningScene;
                 m_AutoPos = m_ObjTransform.position;
            }
            else
            {
                if (m_nAutoSceneId == GameManager.gameManager.RunningScene)
                {
                    NavAgent.destination = m_AutoPos;
                    AutoSearchPoint point = new AutoSearchPoint(m_nAutoSceneId, m_AutoPos.x, m_AutoPos.z);
                    if (GameManager.gameManager && GameManager.gameManager.AutoSearch)
                    {
                        GameManager.gameManager.AutoSearch.ProcessAutoSearch(point);
                    }

                }
            }
        }


        private int[] m_AutoSelSkillID = new int[(int)SKILLDEFINE.MAX_SKILLNUM];
		//private List<int> m_AutoSelSkillID = new List<int>(SKILLDEFINE.MAX_SKILLNUM);
        public int[] AutoSelSkillID
        {
            get { return m_AutoSelSkillID; }
            set { m_AutoSelSkillID = value; }
        }
        public void SetAutoSelSkillID(int Index)
        {
            if (Index >= 0 && Index < (int)SKILLDEFINE.MAX_SKILLNUM)
            {
                m_AutoSelSkillID[Index] = 1;
            }
        }
        public void DelAutoSelSkillID(int Index)
        {
            if (Index >= 0 && Index < (int)SKILLDEFINE.MAX_SKILLNUM)
            {
                m_AutoSelSkillID[Index] = 0;
            }
        }
        public int IsAutoSelSkillID(int Index)
        {
            if (Index >= 0 && Index < (int)SKILLDEFINE.MAX_SKILLNUM)
            {
                return m_AutoSelSkillID[Index];
            }
            return -1;
        }
        public int GetAutoSelSkillIDCount()
        {
            int max = 0;

            for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
            {
                if (m_AutoSelSkillID[i] == 1 )
                {
                    max++;
                }
               
            }
            return max;
        }
        public void ClearAutoSelSkillID()
        {
            for (int i = 0; i < (int)SKILLDEFINE.MAX_SKILLNUM; i++)
            {
                m_AutoSelSkillID[i] = -1;
            }
        }
		//======================================================

		public bool IsCanAddAutoSkill(int skillId)
		{

            Tab_SkillEx SkillExinfo = TableManager.GetSkillExByID(skillId, 0);
            if (SkillExinfo == null)
            {

                return false;
            }
            Tab_SkillBase SkillBase = TableManager.GetSkillBaseByID(SkillExinfo.BaseId, 0);
            if (SkillBase == null)
            {
                return false;
            }

            // 4个 普通技能
            if ((SkillBase.SkillClass & (int)SKILLCLASS.AUTOREPEAT) == 0 &&
               (SkillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE) == 0 &&
               (SkillBase.SkillClass & (int)SKILLCLASS.XP) == 0 &&
               (SkillBase.SkillClass & (int)SKILLCLASS.PASSIVITY) == 0
               )
            {
                return true;
            }

            //// 一二变区分
            // first
            return false;
            if (SkillBase.LevelUpIndex != GlobeVar.INVALID_ID && SkillBase.LevelUpIndex / 10 >= 1 && SkillBase.LevelUpIndex / 10 < 2)
            {
                //xp
                if ((SkillBase.SkillClass & (int)SKILLCLASS.XP) > 0)
                {
                    return true;
                }
                else if ((SkillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE) > 0)
                {
                    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                    if (PlayerPreferenceData.PVESkillIdCurUsing >= 0 && PlayerPreferenceData.PVESkillIdCurUsing < _mainPlayer.OwnSkillInfo.Length)
                    {
                        if (_mainPlayer.OwnSkillInfo[PlayerPreferenceData.PVESkillIdCurUsing].SkillId == skillId)
                            return true;
                    }
                }
            }

               //second
            else if (SkillBase.LevelUpIndex != GlobeVar.INVALID_ID && SkillBase.LevelUpIndex / 10 >= 2)
            {
                //xp
                if ((SkillBase.SkillClass & (int)SKILLCLASS.XP) > 0)
                {
                    return true;
                }
                else if ((SkillBase.SkillClass & (int)SKILLCLASS.CHANGEMODE) > 0)
                {
                    Obj_MainPlayer _mainPlayer = Singleton<ObjManager>.GetInstance().MainPlayer;
                    if (PlayerPreferenceData.PVPSkillIdCurUsing >= 0 && PlayerPreferenceData.PVESkillIdCurUsing < _mainPlayer.OwnSkillInfo.Length)
                    {
                        if (_mainPlayer.OwnSkillInfo[PlayerPreferenceData.PVPSkillIdCurUsing].SkillId == skillId)
                            return true;
                    }
                }
            }
            return false;
		}
    }
}
