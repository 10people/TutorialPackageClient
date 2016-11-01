#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// ObjManager
struct ObjManager_t4461;
// System.Collections.Generic.Dictionary`2<System.String,Games.LogicObj.Obj>
struct Dictionary_2_t4457;
// System.Collections.Generic.List`1<Obj_HidePlayerData>
struct List_1_t4460;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1530;
// System.String
struct String_t;
// Games.LogicObj.Obj
struct Obj_t2130;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_CharModel
struct Tab_CharModel_t391;
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// Obj_DroopItemData
struct Obj_DroopItemData_t4455;
// GCGame.Table.Tab_CollectItem
struct Tab_CollectItem_t405;
// GCGame.Table.Tab_DynamicObstacle
struct Tab_DynamicObstacle_t431;
// System.Object
struct Object_t;
// BundleManager/LoadSingleFinish
struct LoadSingleFinish_t2144;
// Obj_Mount
struct Obj_Mount_t4395;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_OBJ_TYP.h"

// System.Void ObjManager::.ctor()
 void ObjManager__ctor_m31301 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,Games.LogicObj.Obj> ObjManager::get_ObjPools()
 Dictionary_2_t4457 * ObjManager_get_ObjPools_m31302 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::set_ObjPools(System.Collections.Generic.Dictionary`2<System.String,Games.LogicObj.Obj>)
 void ObjManager_set_ObjPools_m31303 (ObjManager_t4461 * __this, Dictionary_2_t4457 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::set_m_ObjOtherPlayerHideList(System.Collections.Generic.List`1<Obj_HidePlayerData>)
 void ObjManager_set_m_ObjOtherPlayerHideList_m31304 (ObjManager_t4461 * __this, List_1_t4460 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Obj_HidePlayerData> ObjManager::get_m_ObjOtherPlayerHideList()
 List_1_t4460 * ObjManager_get_m_ObjOtherPlayerHideList_m31305 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::set_m_ObjOtherPlayerShowList(System.Collections.Generic.List`1<Obj_HidePlayerData>)
 void ObjManager_set_m_ObjOtherPlayerShowList_m31306 (ObjManager_t4461 * __this, List_1_t4460 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<Obj_HidePlayerData> ObjManager::get_m_ObjOtherPlayerShowList()
 List_1_t4460 * ObjManager_get_m_ObjOtherPlayerShowList_m31307 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_MainPlayer ObjManager::get_MainPlayer()
 Obj_MainPlayer_t1732 * ObjManager_get_MainPlayer_m31308 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ObjManager::get_OtherGameObjPools()
 Dictionary_2_t1530 * ObjManager_get_OtherGameObjPools_m31309 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::set_OtherGameObjPools(System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>)
 void ObjManager_set_OtherGameObjPools_m31310 (ObjManager_t4461 * __this, Dictionary_2_t1530 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AddPoolObj(System.String,Games.LogicObj.Obj)
 void ObjManager_AddPoolObj_m31311 (ObjManager_t4461 * __this, String_t* ___name, Obj_t2130 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::Init()
 bool ObjManager_Init_m31312 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::OnEnterScene()
 void ObjManager_OnEnterScene_m31313 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::CleanSceneObj()
 void ObjManager_CleanSceneObj_m31314 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::DeleteNPCPool()
 void ObjManager_DeleteNPCPool_m31315 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjManager::GetNPCNum()
 int32_t ObjManager_GetNPCNum_m31316 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjManager::GetOtherPlayerNum()
 int32_t ObjManager_GetOtherPlayerNum_m31317 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::CreateNPC(Obj_Init_Data)
 void ObjManager_CreateNPC_m31318 (ObjManager_t4461 * __this, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::CachedNpc(System.String,UnityEngine.GameObject,System.Boolean)
 void ObjManager_CachedNpc_m31319 (ObjManager_t4461 * __this, String_t* ___objName, GameObject_t9 * ___go, bool ___condition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::CheckOhterPlayerVisibleState(Obj_Init_Data,GCGame.Table.Tab_CharModel,Games.LogicObj.Obj_OtherPlayer)
 bool ObjManager_CheckOhterPlayerVisibleState_m31320 (ObjManager_t4461 * __this, Obj_Init_Data_t4391 * ___initData, Tab_CharModel_t391 * ___model, Obj_OtherPlayer_t1655 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::ShowOthersInfo()
 void ObjManager_ShowOthersInfo_m31321 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::ShowChangedUIInfo()
 void ObjManager_ShowChangedUIInfo_m31322 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::ChangeMainPlayer()
 void ObjManager_ChangeMainPlayer_m31323 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::ChangeMainPlayerToNormal()
 void ObjManager_ChangeMainPlayerToNormal_m31324 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::CreateMainPlayer()
 void ObjManager_CreateMainPlayer_m31325 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::CreateDropItem(Obj_DroopItemData)
 void ObjManager_CreateDropItem_m31326 (ObjManager_t4461 * __this, Obj_DroopItemData_t4455 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::CreateCollectItem(GCGame.Table.Tab_CollectItem,System.String,System.Int32)
 void ObjManager_CreateCollectItem_m31327 (ObjManager_t4461 * __this, Tab_CollectItem_t405 * ___CollectItem, String_t* ___szName, int32_t ___nItemIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::CreateDyncObstacle(GCGame.Table.Tab_DynamicObstacle,System.String)
 void ObjManager_CreateDyncObstacle_m31328 (ObjManager_t4461 * __this, Tab_DynamicObstacle_t431 * ___tab, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::OnCreateDropItem(UnityEngine.GameObject,System.Object)
 void ObjManager_OnCreateDropItem_m31329 (ObjManager_t4461 * __this, GameObject_t9 * ___resObj, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AsycCreateCollectItemOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_AsycCreateCollectItemOver_m31330 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::ReloadModel(UnityEngine.GameObject,System.String,BundleManager/LoadSingleFinish,System.Object,System.Object,System.String)
 bool ObjManager_ReloadModel_m31331 (ObjManager_t4461 * __this, GameObject_t9 * ___objRoot, String_t* ___modelPath, LoadSingleFinish_t2144 * ___delFinish, Object_t * ___param2, Object_t * ___param3, String_t* ___animationPath, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AsycReloadModelOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_AsycReloadModelOver_m31332 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AsycReloadMountModelOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_AsycReloadMountModelOver_m31333 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AsycLoadFakeObjOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_AsycLoadFakeObjOver_m31334 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::OtherView_AsycLoadFakeObjOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_OtherView_AsycLoadFakeObjOver_m31335 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AsycLoadFitOnObjOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_AsycLoadFitOnObjOver_m31336 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AsycLoadRoleViewFitOnObjOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_AsycLoadRoleViewFitOnObjOver_m31337 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::ReloadWeapon(UnityEngine.GameObject,System.String,BundleManager/LoadSingleFinish,System.Object,System.Object)
 bool ObjManager_ReloadWeapon_m31338 (ObjManager_t4461 * __this, GameObject_t9 * ___objRoot, String_t* ___modelPath, LoadSingleFinish_t2144 * ___delFinish, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AsycReloadWeaponOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_AsycReloadWeaponOver_m31339 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::OtherView_AsycReloadWeaponOver(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void ObjManager_OtherView_AsycReloadWeaponOver_m31340 (ObjManager_t4461 * __this, String_t* ___modelName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::ReloadChangeModel(UnityEngine.GameObject,UnityEngine.GameObject,System.String,Obj_Mount)
 bool ObjManager_ReloadChangeModel_m31341 (ObjManager_t4461 * __this, GameObject_t9 * ___objRoot, GameObject_t9 * ___objModel, String_t* ___animationPath, Obj_Mount_t4395 * ___MountObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::ReloadModel(UnityEngine.GameObject,UnityEngine.GameObject,System.String,Obj_Mount)
 bool ObjManager_ReloadModel_m31342 (ObjManager_t4461 * __this, GameObject_t9 * ___objRoot, GameObject_t9 * ___objModel, String_t* ___animationPath, Obj_Mount_t4395 * ___MountObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::ShowingNPCList(Obj_Init_Data)
 void ObjManager_ShowingNPCList_m31343 (ObjManager_t4461 * __this, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::ShowNPC()
 void ObjManager_ShowNPC_m31344 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::NewCharacterObj(Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE,Obj_Init_Data)
 void ObjManager_NewCharacterObj_m31345 (ObjManager_t4461 * __this, int32_t ___type, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::NewDropObj(Games.GlobeDefine.GameDefine_Globe/OBJ_TYPE,Obj_DroopItemData)
 void ObjManager_NewDropObj_m31346 (ObjManager_t4461 * __this, int32_t ___type, Obj_DroopItemData_t4455 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj ObjManager::FindObjInScene(System.Int32)
 Obj_t2130 * ObjManager_FindObjInScene_m31347 (ObjManager_t4461 * __this, int32_t ___nServerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_Character ObjManager::FindObjCharacterInScene(System.Int32)
 Obj_Character_t1772 * ObjManager_FindObjCharacterInScene_m31348 (ObjManager_t4461 * __this, int32_t ___nServerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_Character ObjManager::FindObjCharacterInSceneByName(System.String,System.Boolean,System.Single)
 Obj_Character_t1772 * ObjManager_FindObjCharacterInSceneByName_m31349 (ObjManager_t4461 * __this, String_t* ___szBaseAttrName, bool ___bIsAlive, float ___nMinDistance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_OtherPlayer ObjManager::FindOtherPlayerInScene(System.UInt64)
 Obj_OtherPlayer_t1655 * ObjManager_FindOtherPlayerInScene_m31350 (ObjManager_t4461 * __this, uint64_t ___guid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::IsObjExist(System.Int32)
 bool ObjManager_IsObjExist_m31351 (ObjManager_t4461 * __this, int32_t ___nServerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::RemoveObj(System.Int32)
 bool ObjManager_RemoveObj_m31352 (ObjManager_t4461 * __this, int32_t ___nServerID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::DeleteNPCGameObject()
 void ObjManager_DeleteNPCGameObject_m31353 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::ReomoveObjInScene(UnityEngine.GameObject,System.Boolean)
 bool ObjManager_ReomoveObjInScene_m31354 (ObjManager_t4461 * __this, GameObject_t9 * ___removeObject, bool ___isDelete, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::SyncObjectPosition(System.Int32,System.Int32,System.Int32)
 void ObjManager_SyncObjectPosition_m31355 (ObjManager_t4461 * __this, int32_t ___nServerId, int32_t ___nPosX, int32_t ___nPosZ, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AddPoolOtherGameObj(System.String,UnityEngine.GameObject)
 void ObjManager_AddPoolOtherGameObj_m31356 (ObjManager_t4461 * __this, String_t* ___name, GameObject_t9 * ___gObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 ObjManager::GetVisibleValue(Games.LogicObj.Obj_Character)
 int32_t ObjManager_GetVisibleValue_m31357 (Object_t * __this/* static, unused */, Obj_Character_t1772 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject ObjManager::FindOtherGameObj(System.String)
 GameObject_t9 * ObjManager_FindOtherGameObj_m31358 (ObjManager_t4461 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean ObjManager::RemoveOtherGameObj(System.String)
 bool ObjManager_RemoveOtherGameObj_m31359 (ObjManager_t4461 * __this, String_t* ___strName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::UpdateHidePlayers()
 void ObjManager_UpdateHidePlayers_m31360 (ObjManager_t4461 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::TestOtherPlayerVisible(Games.LogicObj.Obj_OtherPlayer)
 void ObjManager_TestOtherPlayerVisible_m31361 (ObjManager_t4461 * __this, Obj_OtherPlayer_t1655 * ___curPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::AddOutLineMaterial(UnityEngine.GameObject)
 void ObjManager_AddOutLineMaterial_m31362 (Object_t * __this/* static, unused */, GameObject_t9 * ___parentObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void ObjManager::RemoveOutLineMaerial(UnityEngine.GameObject)
 void ObjManager_RemoveOutLineMaerial_m31363 (Object_t * __this/* static, unused */, GameObject_t9 * ___parentObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
