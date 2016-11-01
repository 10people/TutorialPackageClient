#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// Games.LogicObj.Obj_Character
#include "AssemblyU2DCSharp_Games_LogicObj_Obj_Character.h"
// Games.GlobeDefine.GameDefine_Globe/NPC_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_NPC_TYP.h"
// Games.LogicObj.Obj_NPC
struct Obj_NPC_t1569  : public Obj_Character_t1772
{
	// UnityEngine.GameObject Games.LogicObj.Obj_NPC::m_MissionBoard
	GameObject_t9 * ___m_MissionBoard;
	// System.Boolean Games.LogicObj.Obj_NPC::m_bIsBornCreate
	bool ___m_bIsBornCreate;
	// System.Boolean Games.LogicObj.Obj_NPC::m_IsNameBoard
	bool ___m_IsNameBoard;
	// Games.GlobeDefine.GameDefine_Globe/NPC_TYPE Games.LogicObj.Obj_NPC::m_NpcType
	int32_t ___m_NpcType;
	// System.Single Games.LogicObj.Obj_NPC::m_fBornPosX
	float ___m_fBornPosX;
	// System.Single Games.LogicObj.Obj_NPC::m_fBornPosY
	float ___m_fBornPosY;
	// System.Single Games.LogicObj.Obj_NPC::m_fBornPosZ
	float ___m_fBornPosZ;
	// System.Int32 Games.LogicObj.Obj_NPC::m_nProfession
	int32_t ___m_nProfession;
	// System.Int32 Games.LogicObj.Obj_NPC::m_WeaponDataID
	int32_t ___m_WeaponDataID;
	// System.Int32 Games.LogicObj.Obj_NPC::m_ModelVisualID
	int32_t ___m_ModelVisualID;
	// System.Int32 Games.LogicObj.Obj_NPC::m_WeaponEffectGem
	int32_t ___m_WeaponEffectGem;
	// System.Single Games.LogicObj.Obj_NPC::m_fLastDis2MainPlayer
	float ___m_fLastDis2MainPlayer;
	// Games.LogicObj.Obj_MainPlayer Games.LogicObj.Obj_NPC::m_mainPlayer
	Obj_MainPlayer_t1732 * ___m_mainPlayer;
	// System.Int32 Games.LogicObj.Obj_NPC::m_nDefaultDialogID
	int32_t ___m_nDefaultDialogID;
	// System.Collections.Generic.List`1<System.Int32> Games.LogicObj.Obj_NPC::m_listMissionID
	List_1_t90 * ___m_listMissionID;
	// System.Int32 Games.LogicObj.Obj_NPC::m_BelongTeamID
	int32_t ___m_BelongTeamID;
	// System.Int32 Games.LogicObj.Obj_NPC::m_BelongObjID
	int32_t ___m_BelongObjID;
	// System.Boolean Games.LogicObj.Obj_NPC::m_bIsGuildActivityBoss
	bool ___m_bIsGuildActivityBoss;
	// System.Int32 Games.LogicObj.Obj_NPC::m_SceneNpcId
	int32_t ___m_SceneNpcId;
};
