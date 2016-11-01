#region
/*************************************************************************************
   * filename:          CreateObjFunction
   * date:              5/20/2015 3:14:23 PM
   * author:            ake

    * 修改时间:
    * 修 改 人:
    * 
    ************************************************************************************/
#endregion

using Games.Animation_Modle;
using Games.GlobeDefine;
using Games.LogicObj;
using GCGame;
using GCGame.Table;
using Module.Log;
using UnityEngine;


namespace GameRes
{
    public delegate void DelAsycModelOver(object param1, object param2);
    public class CreateObjFunction
    {
        #region  创建剧情 人物
        public static void CreateModelStoryObj(int nCharModelID, string strName, DelAsycModelOver delAsycStroyModel)
        {
            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharModelID, 0);
            if (null == charModel)
            {
                LogModule.WarningLog("can not find char model id in table :" + nCharModelID);
                return;
            }

            GameObject charObj = ResourceManager.InstantiateResource("Prefab/Model/PlayerRoot", strName) as GameObject;
            if (null == charObj)
            {
                LogModule.WarningLog("can not load PlayerRoot :" + nCharModelID);
                return;
            }
            Obj_Client curCharacter = charObj.GetComponent<Obj_Client>();
            if (null == curCharacter)
            {
                charObj.AddComponent<Obj_Client>();
            }

            LoadModelToRoot(nCharModelID, EResourceType.CharacterModel, LoadModelComplete, charObj, charModel, delAsycStroyModel);
        }
        #endregion

        #region  创建npc

        public static void CreateModelNpcObj(int nCharModelID, Obj_Init_Data initData, DelAsycModelOver delAsycStroyModel)
        {
            if (initData == null)
            {
                LogModule.ErrorLog("CreateModelNpcObj called but initData == null is null!");
            }
            //NPC创建的时候统一用RoleBase中的ID，而不用Obj_Init_Data结构中的CharModelID
            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharModelID, 0);
            if (null == charModel)
            {
                return;
            }

            GameObject npc = ResourceManager.InstantiateResource("Prefab/Model/NPCRoot", initData.m_ServerID.ToString()) as GameObject;
            //GameObject npc = CreateGameObjectByResource(initData);
            if (null != npc)
            {
                //加载逻辑体，同时异步加载渲染体
                Obj_NPC objNPC = (Obj_NPC)npc.GetComponent<Obj_NPC>();
                if (!objNPC)
                {
                    objNPC = (Obj_NPC)npc.AddComponent<Obj_NPC>();
                }

                if (objNPC && objNPC.Init(initData))
                {
                    objNPC.CanLogic = true;
                    Singleton<ObjManager>.Instance.AddPoolObj(objNPC.ServerID.ToString(), objNPC);
                }
                LoadModelToRoot(nCharModelID, EResourceType.CharacterModel, LoadModelComplete, npc, charModel, null);
                Singleton<ObjManager>.Instance.CachedNpc(npc.name, npc, objNPC.IsNeedBecameVisible());
            }
        }

        #endregion

        #region 陷阱 烟花
        /// <summary>
        /// 创建陷阱
        /// </summary>
        /// <param name="nCharModelID"></param>
        /// <param name="initData"></param>
        public static void CreateModelSnareObj(ObjSnare_Init_Data initData)
        {
            if (null == initData)
                return;

            //根据RoleBase的ID获得路径
            Tab_SnareObjInfo SnareObjInfo = TableManager.GetSnareObjInfoByID(initData.m_SnareID, 0);
            if (null == SnareObjInfo)
            {
                return;
            }
            int nCharModelID = SnareObjInfo.CharModelId;

            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharModelID, 0);
            if (charModel == null)
            {
                LogModule.WarningLog("can not find char model id in table :{0}", nCharModelID);
                return;
            }
            GameObject SnareObj = ResourceManager.InstantiateResource("Prefab/Model/SnareRoot", initData.m_ServerID.ToString()) as GameObject;
            if (null != SnareObj)
            {
                //加载逻辑体，同时异步加载渲染体
                Obj_Snare objSnare = SnareObj.AddComponent<Obj_Snare>(); ;

                if (objSnare.Init(initData))
                {
                    objSnare.CanLogic = true;
                    Singleton<ObjManager>.Instance.AddPoolObj(objSnare.ServerID.ToString(), objSnare);
                }
                //ReloadModel(SnareObj, charModel.ResPath, AsycSnareObjOver, initData);
                LoadModelToRoot(nCharModelID, EResourceType.CharacterModel, LoadModelComplete, SnareObj, charModel, null);
            }
        }

        public static void CreateModelYanhuaObj(ObjYanHua_Init_Data initData)
        {
            if (null == initData)
                return;

            //根据RoleBase的ID获得路径
            Tab_YanHua YanHuaInfo = TableManager.GetYanHuaByID(initData.m_nYanHuaID, 0);
            if (null == YanHuaInfo)
            {
                return;
            }

            Tab_CharModel charModel = TableManager.GetCharModelByID(YanHuaInfo.CharModelId, 0);
            if (null == charModel)
            {
                return;
            }

            GameObject yanhuaGo = ResourceManager.InstantiateResource("Prefab/Model/SnareRoot", initData.m_ServerID.ToString()) as GameObject;
            if (null != yanhuaGo)
            {
                Obj_YanHua objYanhua = yanhuaGo.AddComponent<Obj_YanHua>();

                if (objYanhua.Init(initData))
                {
                    objYanhua.CanLogic = true;
                    Singleton<ObjManager>.Instance.AddPoolObj(objYanhua.ServerID.ToString(), objYanhua);
                }
                LoadModelToRoot(YanHuaInfo.CharModelId, EResourceType.CharacterModel, LoadModelComplete, yanhuaGo, charModel, null);
            }
        }

        #endregion

        #region otherPlayer  Zombie

        public static void CreateOtherPlayerHided(Obj_OtherPlayer obj, Obj_HidePlayerData data)
        {
            if (data == null || obj == null || obj.gameObject == null)
            {
                LogModule.ErrorLog("CreateOtherPlayerHided called but data == null || obj == null ||obj.gameObject == null");
                return;
            }
            Tab_CharModel charModel = TableManager.GetCharModelByID(data.CharModelId, 0);
            if (charModel == null)
            {
                return;
            }
            LoadModelToRoot(data.CharModelId, EResourceType.CharacterModel, LoadModelComplete, obj.gameObject, charModel, obj.CurChangeState == (int)GameDefine_Globe.ChangeModeState.CHANGE_2 || obj.CurChangeState == (int)GameDefine_Globe.ChangeModeState.CHANGE_1);
            //ReloadModel(curChar.gameObject, curObjData.ResPath, AsycCreateOtherPlayerOver, curObjData.InitData);
        }

        /// <summary>
        /// 创建其他玩家  这里可以优化一下  代码里获取 ModelId 的部分 可能是重复的 等具体功能应用后 替换成obj.ModelId 
        /// </summary>
        /// <param name="initData"></param>
        public static void CreateOtherPlayer(Obj_Init_Data initData)
        {
            if (null == initData)
                return;
            GameObject otherPlayer = ResourceManager.InstantiateResource("Prefab/Model/OtherPlayerRoot", initData.m_ServerID.ToString()) as GameObject;
            if (null != otherPlayer)
            {
                //加载逻辑体，同时异步加载渲染体
                Obj_OtherPlayer objOtherPlayer = otherPlayer.AddComponent<Obj_OtherPlayer>();

                ////////////////////////////////临时代码 写死玩家 装备  其他玩家跟主玩家相同
                //                 
                //                 initData.m_ModelVisualID = 18;
                //                 initData.m_WeaponDataID = 52188;
                //                 initData.m_WeaponEffectGem = 8909;

                ////////////////////////////////临时代码 写死玩家 装备

                if (objOtherPlayer.Init(initData))
                {
                    objOtherPlayer.CanLogic = true;
                }



                Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(objOtherPlayer.ModelVisualID, 0);
                if (tabItemVisual == null)
                {
                    tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                    if (tabItemVisual == null)
                    {
                        return;
                    }
                }
                int nCharmodelID = objOtherPlayer.GetCharModelID(tabItemVisual, objOtherPlayer.Profession);

                //变身的特殊处理
                int nChangeModelId = objOtherPlayer.GetCharModelIDByChangeState(objOtherPlayer.Profession, objOtherPlayer.CurChangeState);

                //如果在变身状态，就用变身状态的模型ID去创建
                if (nChangeModelId != GlobeVar.INVALID_ID)
                {
                    nCharmodelID = nChangeModelId;
                }

                Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
                if (charModel == null)
                {
                    return;
                }
                ObjManager cachedManager = Singleton<ObjManager>.Instance;
                if (cachedManager == null)
                {
                    return;
                }

                cachedManager.AddPoolObj(objOtherPlayer.ServerID.ToString(), objOtherPlayer);
                if (!cachedManager.CheckOhterPlayerVisibleState(initData, charModel, objOtherPlayer))
                {
                    return;
                }
                cachedManager.TestOtherPlayerVisible(objOtherPlayer);

                objOtherPlayer.IsLoadingModel = true;
                LoadModelToRoot(nCharmodelID, EResourceType.CharacterModel, LoadModelComplete, otherPlayer, charModel, objOtherPlayer.CurChangeState == (int)GameDefine_Globe.ChangeModeState.CHANGE_2 || objOtherPlayer.CurChangeState == (int)GameDefine_Globe.ChangeModeState.CHANGE_1);
            }
        }

        /// <summary>
        /// 后期可以 看情况 跟OtherPlayer的创建 合并
        /// </summary>
        /// <param name="initData"></param>
        public static void CreateZombieUser(Obj_Init_Data initData)
        {
            if (null == initData)
                return;

            //mwh 根据RoleBase的ID获得路径
            Tab_RoleBaseAttr roleBaseAttr = TableManager.GetRoleBaseAttrByID(initData.m_RoleBaseID, 0);
            if (null == roleBaseAttr)
            {
                return;
            }
            initData.m_CharModelID = roleBaseAttr.CharModelID;
            GameObject otherPlayer = ResourceManager.InstantiateResource("Prefab/Model/OtherPlayerRoot", initData.m_ServerID.ToString()) as GameObject;
            if (null != otherPlayer)
            {
                Obj_ZombieUser objZombiePlayer = otherPlayer.AddComponent<Obj_ZombieUser>();

                if (null != objZombiePlayer && objZombiePlayer.Init(initData))
                {
                    objZombiePlayer.CanLogic = true;
                }

                Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(objZombiePlayer.ModelVisualID, 0);
                if (tabItemVisual == null)
                {
                    tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                    if (tabItemVisual == null)
                    {
                        return;
                    }
                }
                int nCharmodelID = objZombiePlayer.GetCharModelID(tabItemVisual, objZombiePlayer.Profession);
                Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
                if (charModel == null)
                {
                    return;
                }
                Singleton<ObjManager>.Instance.AddPoolObj(objZombiePlayer.ServerID.ToString(), objZombiePlayer);
                LoadModelToRoot(nCharmodelID, EResourceType.CharacterModel, LoadModelComplete, otherPlayer, charModel,
                    null);
            }
        }


        #endregion

        #region 伙伴

        //创建伙伴
        public static void CreateFellowModel(Obj_Init_Data initData)
        {
            if (null == initData)
                return;

            Tab_CabalFellowAttr fellowAttr = TableManager.GetCabalFellowAttrByID(initData.m_RoleBaseID, 0);
            if (null == fellowAttr)
            {
                return;
            }
            //根据ModelId找到CharModel资源
            Tab_CharModel charModel = TableManager.GetCharModelByID(fellowAttr.ModelId, 0);
            if (null == charModel)
            {
                return;
            }
            GameObject fellow = ResourceManager.InstantiateResource("Prefab/Model/FellowRoot", initData.m_ServerID.ToString()) as GameObject;
            if (null != fellow)
            {
                //加载逻辑体，同时异步加载渲染体
                Obj_Fellow objFellow = fellow.AddComponent<Obj_Fellow>();

                if (objFellow && objFellow.Init(initData))
                {
                    objFellow.CanLogic = true;
                    Singleton<ObjManager>.Instance.AddPoolObj(objFellow.ServerID.ToString(), objFellow);
                }
                LoadModelToRoot(fellowAttr.ModelId, EResourceType.CharacterModel, LoadModelComplete, fellow, charModel,
                    null);
                //ReloadModel(fellow, charModel.ResPath, AsycCreateFellowOver, initData);
            }
        }

        #endregion

        #region create MainPlayer

        public static Obj_MainPlayer CreateMainPlayerObj()
        {
            Obj_MainPlayer mainPlayerObj;
            //所有的玩家都创建自固定的PlayerRoot的Prefab，具体模型在PlayerRoot下建立Model节点
            GameObject mainPlayer = ResourceManager.InstantiateResource("Prefab/Model/PlayerRoot", "MainPlayer") as GameObject;
            if (null == mainPlayer)
            {
                return null;
            }
            //先加载逻辑
            mainPlayerObj = mainPlayer.AddComponent<Obj_MainPlayer>();

            //赋值玩家guid和职业
            mainPlayerObj.Profession = GameManager.gameManager.PlayerDataPool.EnterSceneCache.Profession;
            mainPlayerObj.GUID = GameManager.gameManager.PlayerDataPool.EnterSceneCache.Guid;

            ///临时代码 写死玩家 装备
            if (GameManager.gameManager.RunningScene == (int)GameDefine_Globe.SCENE_DEFINE.SCENE_FB_CABALINTRO)
            {
                mainPlayerObj.InitYanMenGuanWaiVisual();
            }
            else
            {
                mainPlayerObj.ModelVisualID = GameManager.gameManager.PlayerDataPool.EnterSceneCache.ModelVisualID;
                mainPlayerObj.CurWeaponDataID = GameManager.gameManager.PlayerDataPool.EnterSceneCache.WeaponDataID;
                mainPlayerObj.WeaponEffectGem = GameManager.gameManager.PlayerDataPool.EnterSceneCache.WeaponEffectGem;
            }

            Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(mainPlayerObj.ModelVisualID, 0);
            if (tabItemVisual == null)
            {
                tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabItemVisual == null)
                {
                    return null;
                }
            }

            int nCharmodelID = mainPlayerObj.GetCharModelID(tabItemVisual, mainPlayerObj.Profession);

            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
            if (charModel == null)
            {
                return null;
            }

            //初始化动作资源路径
            mainPlayerObj.AnimationFilePath = charModel.AnimPath;
            mainPlayerObj.ModelID = nCharmodelID;
            //进行进场经处理
            mainPlayerObj.OnPlayerEnterScene();
            mainPlayerObj.ChangeHeadPic();

            ObjManager cachedManager = Singleton<ObjManager>.Instance;
            if (cachedManager == null)
            {
                return null;
            }

            cachedManager.AddPoolObj(mainPlayerObj.ServerID.ToString(), mainPlayerObj);

            //ObjMainPlayer初始化完成
            mainPlayerObj.CanLogic = true;
            mainPlayerObj.transform.localScale = Vector3.one;
            //朝向屏幕
            mainPlayerObj.FaceToScreen();

            //向服务器发送EnterSceneOK消息包
            CG_ENTER_SCENE_OK packet = (CG_ENTER_SCENE_OK)PacketDistributed.CreatePacket(MessageID.PACKET_CG_ENTER_SCENE_OK);
            packet.IsOK = 1;
            packet.SendPacket();

            //m_MainPlayer.MountID = GameManager.gameManager.PlayerDataPool.EnterSceneCache.EnterSceneMountID;
            if (mainPlayerObj.IsDie())
            {
                mainPlayerObj.OnCorpse();
            }

            mainPlayerObj.VipCost = GameManager.gameManager.PlayerDataPool.VipCost;
            mainPlayerObj.OtherCombatValue = GameManager.gameManager.PlayerDataPool.PoolCombatValue;
            mainPlayerObj.PaoShangState = GameManager.gameManager.PlayerDataPool.EnterSceneCache.PaoShangState;
            //如果主角已经创建，清理服务器数据，防止重复建立，并且准备下次切换场景使用
            GameManager.gameManager.PlayerDataPool.EnterSceneCache.ClearEnterSceneInfo();

            cachedManager.m_bBeginAsycCreateMainPlayer = true;

            mainPlayerObj.BindParent = GameManager.gameManager.PlayerDataPool.MainBindParent;
            mainPlayerObj.UpdateBindChildren(GameManager.gameManager.PlayerDataPool.MainBindChildren);

            LoadModelToRoot(nCharmodelID, EResourceType.CharacterModel,
                LoadModelComplete, mainPlayer, charModel, false);

            return mainPlayerObj;
        }

        public static void ChangeMainPLayerObj(int nCharmodelID)
        {
            Obj_MainPlayer main = Singleton<ObjManager>.Instance.MainPlayer;
            if (main == null)
            {
                LogModule.ErrorLog("ReloadMainPLayerObj called but Singleton<ObjManager>.Instance.MainPlayer is null!");
                return;
            }


            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
            if (charModel == null)
            {
                LogModule.ErrorLog("Tab_CharModel is null == " + nCharmodelID);
                return;
            }

            main.AnimationFilePath = charModel.AnimPath; //324
            main.ModelID = nCharmodelID;
            LoadModelToRoot(nCharmodelID, EResourceType.CharacterModel,
                LoadModelComplete, main.gameObject, charModel, true);
        }

        //将模型变成变身状态下
        public static void ChangeOtherPLayerObjToChangeModel(int nCharmodelID, Obj_Character otherPlayer)
        {
            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
            if (charModel == null)
            {
                LogModule.ErrorLog("Tab_CharModel is null == " + nCharmodelID);
                return;
            }
            otherPlayer.AnimationFilePath = charModel.AnimPath;
            otherPlayer.ModelID = nCharmodelID;
            LoadModelToRoot(nCharmodelID, EResourceType.CharacterModel,
                LoadModelComplete, otherPlayer.gameObject, charModel, true);
        }
        public static void ChangeMainPLayerObjToNormal()
        {
            Obj_MainPlayer main = Singleton<ObjManager>.Instance.MainPlayer;
            if (main == null)
            {
                LogModule.ErrorLog("ReloadMainPLayerObj called burt Singleton<ObjManager>.Instance.MainPlayer is null!");
                return;
            }
            Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(main.ModelVisualID, 0);
            if (tabItemVisual == null)
            {
                tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabItemVisual == null)
                {
                    return;
                }
            }

            int nCharmodelID = main.GetCharModelID(tabItemVisual, main.Profession);

            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
            if (charModel == null)
            {
                return;
            }

            main.AnimationFilePath = charModel.AnimPath;
            main.ModelID = nCharmodelID;
            LoadModelToRoot(nCharmodelID, EResourceType.CharacterModel,
                LoadModelComplete, main.gameObject, charModel, false);
        }
        public static void ChangeOtherPLayerObjToNormal(Obj_OtherPlayer otherPlayer)
        {
            Tab_ItemVisual tabItemVisual = TableManager.GetItemVisualByID(otherPlayer.ModelVisualID, 0);
            if (tabItemVisual == null)
            {
                tabItemVisual = TableManager.GetItemVisualByID(GlobeVar.DEFAULT_VISUAL_ID, 0);
                if (tabItemVisual == null)
                {
                    return;
                }
            }

            int nCharmodelID = otherPlayer.GetCharModelID(tabItemVisual, otherPlayer.Profession);

            Tab_CharModel charModel = TableManager.GetCharModelByID(nCharmodelID, 0);
            if (charModel == null)
            {
                return;
            }

            otherPlayer.AnimationFilePath = charModel.AnimPath;
            otherPlayer.ModelID = nCharmodelID;
            LoadModelToRoot(nCharmodelID, EResourceType.CharacterModel,
                LoadModelComplete, otherPlayer.gameObject, charModel, false);
        }
        #endregion

        #region common


        private static bool LoadModelToRoot(int id, EResourceType type, LoadFinishCallback callback, GameObject root, object parameter2, object parameter3)
        {
            if (callback == null)
            {
                LogModule.ErrorLog("LoadModelToRoot called but callback == null!");
                return false;
            }
            BundleManager.LoadModelInQueue(id, type, callback, root, parameter2, parameter3);
            return true;
        }

        private static void LoadModelComplete(LoadedObjData data, LoadCompleteCallBackParameter parameter)
        {
            GameObject resObj = data.LoadedObj as GameObject;
            object param1 = parameter.Parameter1;
            object param2 = parameter.Parameter2;
            object param3 = parameter.Parameter3;
            if (null == param1 || null == param2)
            {
                return;
            }

            GameObject rootObj = param1 as GameObject;
            if (null == rootObj)
            {
                return;
            }
            Tab_CharModel charModelTab = param2 as Tab_CharModel;

            Obj baseObj = rootObj.GetComponent<Obj>();
            if (baseObj == null)
            {
                return;
            }

            GameObject charModel = Object.Instantiate(resObj) as GameObject;
            if (null == charModel || charModelTab == null)
            {
                return;
            }
            else
            {
                charModel.name = "Model";
            }
            if (false == ReloadModel(rootObj, charModel))
            {
                return;
            }
            if(rootObj.GetComponent<Obj_NPC>())
            {
                if (rootObj.GetComponent<Obj_NPC>().isVisible)
                {
                    rootObj.GetComponent<Obj_NPC>().BecameVisible();
                }
            }
            string lastUrl = baseObj.MainModelUrl;
            baseObj.SetMainModelUrl(data.Url);
            ResourcesManager.Instance.AddCachedRef(data.Url, EResourceType.CharacterModel, baseObj.ObjType);
            baseObj.InitEffect();
            //特异化处理
            switch (baseObj.ObjType)
            {
                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_CLIENT:
                    {
                        Obj_Client curCharacter = baseObj as Obj_Client;
                        if (curCharacter == null)
                        {
                            LogModule.ErrorLog("charObj {0} loaded error！", rootObj.name);
                            break;
                        }
                        curCharacter.BaseAttr.RoleName = charModelTab.Name;

                        curCharacter.AnimationFilePath = charModelTab.AnimPath;

                        curCharacter.OnModelInitOk();
                        DelAsycModelOver delOverFunction = param3 as DelAsycModelOver;
                        if (null != delOverFunction)
                        {
                            delOverFunction(curCharacter, null);
                        }
                        break;
                    }
                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_NPC:
                    {
                        //由于InitAnimation中用到了Model，所以放在模型加载结束后初始化
                        Obj_NPC objNPC = baseObj as Obj_NPC;
                        if (objNPC == null)
                        {
                            LogModule.ErrorLog("charObj {0} loaded error！", rootObj.name);
                            break;
                        }


                        if (MobileHardwareInfo.Instance.HardwareLevel == Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH)
                        {
                            UpdateEdgeGlow edgeGlow = charModel.GetComponent<UpdateEdgeGlow>();
                            if (edgeGlow == null)
                            {
                                edgeGlow = charModel.AddComponent<UpdateEdgeGlow>();
                            }

                            objNPC.NpcEdgeGlow = edgeGlow;

                            if (objNPC.NpcType == GameDefine_Globe.NPC_TYPE.BOSS)
                            {
                                if (objNPC.NpcEdgeGlow != null)
                                {
                                  //  objNPC.NpcEdgeGlow.SetBossOutLineWidth(GlobeVar.BOSS_OUTLINE_WIDTH); 
                                    //add 用Cabal/Light Probes Rim Alpha Test 代替原来的Cabal/EdgeGlow shader.
                                   
                                }
                            }
                           
                        }

                        if (MobileHardwareInfo.Instance.HardwareLevel == Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_LOW)
                        {
                            Transform trans = objNPC.transform.FindChild("shadow");
                            if (trans != null)
                            {
                                trans.gameObject.SetActive(false);
                            }
                        }

                        objNPC.OnModelInitOk();
                        break;
                    }

                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_OTHER_PLAYER:
                    {
                        Obj_OtherPlayer objOtherPlayer = baseObj as Obj_OtherPlayer;
                        if (null == objOtherPlayer)
                        {
                            return;
                        }

                        bool value = (bool)param3;
                        if (null != objOtherPlayer)
                        {
                            if (!value)
                            {
                                objOtherPlayer.NormalGameObject = charModel;
                            }
                            else
                            {
                                objOtherPlayer.ChangeGameObject = charModel;
                                Utils.SetActive(objOtherPlayer.ChangeGameObject, true);
                                objOtherPlayer.m_lastMainObjUrl = lastUrl;
                            }
                        }
                        objOtherPlayer.RealoadPlayerWeaponVisual();
                        objOtherPlayer.RealoadPlayerFlyWingModel();

                        //由于InitAnimation中用到了Model，所以放在模型加载结束后初始化
                        objOtherPlayer.UpdateCombatValue();
                        objOtherPlayer.OnModelInitOk();
                        objOtherPlayer.UpdateBelleShow();
                        //objOtherPlayer.RideOrUnMount(objOtherPlayer.MountID);
                        break;
                    }
                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_ZOMBIE_PLAYER:
                    {
                        Obj_ZombieUser zombieUser = baseObj as Obj_ZombieUser;
                        if (null == zombieUser)
                        {
                            return;
                        }
                        zombieUser.RealoadPlayerWeaponVisual();
                        zombieUser.OnModelInitOk();
                        break;
                    }
                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_FELLOW:
                    {
                        //由于InitAnimation中用到了Model，所以放在模型加载结束后初始化
                        Obj_Fellow objFellow = baseObj as Obj_Fellow;
                        if (null != objFellow)
                        {
                            objFellow.SetVisible(objFellow.IsVisibleChar());
                        }
                        break;
                    }
                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_MAIN_PLAYER:
                    {

                        Obj_MainPlayer main = baseObj as Obj_MainPlayer;
                        bool value = (bool)param3;
                        if (null != main)
                        {
                            if (!value)
                            {
                                main.NormalGameObject = charModel;
                            }
                            else
                            {
                                main.ChangeGameObject = charModel;
                                Utils.SetActive(main.ChangeGameObject, false);
                                main.m_lastMainObjUrl = lastUrl;
                            }
                            ObjManager.AddOutLineMaterial(charModel);
                            main.RealoadPlayerWeaponVisual();
                            main.UpdateCombatValue();
                            main.OnModelInitOk();
                            main.UpdateBelleShow();
                            //main.RideOrUnMount(main.MountID);
                        }
                        Singleton<ObjManager>.Instance.m_bBeginAsycCreateMainPlayer = false;
                        SetPlayerShader(charModel);
                        CameraManager.Instance.ResetCameraCullingMash();

						if(!value)
						{
							GameManager.gameManager.FlyWingMananger.ReLoadFlyWing();
						}
                        main.IsNoMove = false;

                        break;
                    }
                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_YANHUA:
                case Games.GlobeDefine.GameDefine_Globe.OBJ_TYPE.OBJ_SNARE:
                    {
                        //并没有特殊处理
                        break;
                    }
            }
        }

        /// <summary>
        /// 设置玩家Shader 等级
        /// </summary>
        /// <param name="gObject"></param>
        private static void SetPlayerShader(GameObject gObject)
        {
            //内存中会有以前的残留，通过GC可以回收
            if (gObject == null) return;

            Transform tempTransform;
            Shader tempShader;
            bool isChangeShader = false;
            bool isAddFlow = false;
            string shaderName = ""; //PlayerHighLightUV

            if (MobileHardwareInfo.Instance.HardwareLevel == Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_HIGH)
            {
                isAddFlow = true;
            }
            else if (MobileHardwareInfo.Instance.HardwareLevel == Games.GlobeDefine.GameDefine_Globe.HardwardLevel.LEVEL_MIDDLE)
            {
                shaderName = "Cabal/Player/PlayerHighLightUV";
                isChangeShader = true;
            }
            else
            {
                shaderName = "Cabal/Player/PlayerHighLight";
                isChangeShader = true;
            }

            for (int i = 0; i < gObject.transform.childCount; i++)
            {
                tempTransform = gObject.transform.GetChild(i);
                if (tempTransform.GetComponent<Renderer>() != null)
                {
                    if (tempTransform.GetComponent<Renderer>().materials != null && tempTransform.GetComponent<Renderer>().materials.Length > 0)
                    {
                        //修改Shader 级别
                        if (isChangeShader)
                        {
                            for (int j = 0; j < tempTransform.GetComponent<Renderer>().materials.Length; j++)
                            {
                                tempShader = tempTransform.GetComponent<Renderer>().materials[j].shader;
                                if (tempShader != null && tempShader.name.Contains("PlayerHigh"))
                                {
                                    tempShader = Shader.Find(shaderName);
                                    if (tempShader != null)
                                    {
                                        tempTransform.GetComponent<Renderer>().materials[j].shader = tempShader;
                                    }
                                }
                                tempShader = null;
                            }
                        }

                        //添加flow效果
                        if (isAddFlow)
                        {
                            RandomUVAnimation random = tempTransform.GetComponent<RandomUVAnimation>();
                            if (random == null)
                            {
                                random = tempTransform.gameObject.AddComponent<RandomUVAnimation>();

                                //这里可以设置相关参数

                                random = null;
                            }
                        }
                    }
                }
            }

            tempShader = null;
            tempTransform = null;
        }


        //将一个加载好的Model加入节点
        public static bool ReloadModel(GameObject objRoot, GameObject objModel, string animationPath = null, Obj_Mount MountObj = null, bool isChangeing = false)
        {
            //判断参数合法性
            if (null == objRoot)
            {
                return false;
            }
            GameObject playerGameObject = null;
            if (MountObj == null)
            {
                playerGameObject = objRoot;
            }
            else
            {
                if (null != MountObj.MountPlayer)
                {
                    playerGameObject = MountObj.MountPlayer.gameObject;
                }
                else
                {
                    return false;
                }
            }

            //如果发现已经有Model节点，则删除之
            Transform modelTransform = playerGameObject.transform.FindChild("Model");
            if (null != modelTransform)
            {
                GameObject.DestroyImmediate(modelTransform.gameObject);
            }

            //创建新的Model节点并挂到objRoot
            if (objModel)
            {
                objModel.transform.parent = playerGameObject.transform;
                objModel.transform.localPosition = Vector3.zero;
                objModel.transform.localRotation = Quaternion.identity;
                objModel.transform.localScale = Vector3.one;

                //设置模型layer的和root一致

                Games.GlobeDefine.GameDefine_Globe.ESceneLayer layer = (Games.GlobeDefine.GameDefine_Globe.ESceneLayer)playerGameObject.layer;
                Utils.SetLayerIncludeChild(objModel, layer);

                Obj_Character curChar = objRoot.GetComponent<Obj_Character>();
                if (null != curChar)
                {
                    if (MountObj == null)
                    {
                        if (null != animationPath)
                        {
                            curChar.AnimationFilePath = animationPath;
                        }

                        curChar.InitAnimation();
                    }
                    else
                    {
                        if (MountObj.MountPlayer)
                        {
                            MountObj.MountPlayer.AnimationFilePath = animationPath;
                            MountObj.MountPlayer.InitAnimation();
                        }
                    }

                    curChar.OnSwithObjAnimState(curChar.CurObjAnimState, false);
                    curChar.OnReloadModle();

                    if (MountObj == null)
                    {
                        //初始化缓存的材质信息 坐骑加载不需要重置
                        curChar.InitMaterialInfo();
                    }
                    curChar.ModelNode = objModel;
                    
                }
            }

            return true;
        }

        #endregion
    }

}