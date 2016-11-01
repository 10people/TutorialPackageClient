#pragma once
#include <stdint.h>
// System.Collections.Generic.Dictionary`2<System.String,Games.LogicObj.Obj>
struct Dictionary_2_t4457;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject>
struct Dictionary_2_t1530;
// System.Collections.Generic.Dictionary`2<System.String,System.Single>
struct Dictionary_2_t4458;
// System.Collections.Generic.Dictionary`2<System.String,Obj_Init_Data>
struct Dictionary_2_t4459;
// System.Collections.Generic.List`1<Obj_HidePlayerData>
struct List_1_t4460;
// Singleton`1<ObjManager>
#include "AssemblyU2DCSharp_Singleton_1_gen_0.h"
// ObjManager
struct ObjManager_t4461  : public Singleton_1_t4462
{
	// System.Collections.Generic.Dictionary`2<System.String,Games.LogicObj.Obj> ObjManager::m_ObjPools
	Dictionary_2_t4457 * ___m_ObjPools;
	// Games.LogicObj.Obj_MainPlayer ObjManager::m_MainPlayer
	Obj_MainPlayer_t1732 * ___m_MainPlayer;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ObjManager::m_OtherGameObjPools
	Dictionary_2_t1530 * ___m_OtherGameObjPools;
	// System.Collections.Generic.Dictionary`2<System.String,UnityEngine.GameObject> ObjManager::m_NPCGameObjectList
	Dictionary_2_t1530 * ___m_NPCGameObjectList;
	// System.Collections.Generic.Dictionary`2<System.String,System.Single> ObjManager::m_DeleteNPCList
	Dictionary_2_t4458 * ___m_DeleteNPCList;
	// System.Boolean ObjManager::m_bBeginAsycCreateMainPlayer
	bool ___m_bBeginAsycCreateMainPlayer;
	// System.Collections.Generic.Dictionary`2<System.String,Obj_Init_Data> ObjManager::m_ShowingNPCList
	Dictionary_2_t4459 * ___m_ShowingNPCList;
	// System.Collections.Generic.List`1<Obj_HidePlayerData> ObjManager::<m_ObjOtherPlayerHideList>k__BackingField
	List_1_t4460 * ___U3Cm_ObjOtherPlayerHideListU3Ek__BackingField;
	// System.Collections.Generic.List`1<Obj_HidePlayerData> ObjManager::<m_ObjOtherPlayerShowList>k__BackingField
	List_1_t4460 * ___U3Cm_ObjOtherPlayerShowListU3Ek__BackingField;
};
