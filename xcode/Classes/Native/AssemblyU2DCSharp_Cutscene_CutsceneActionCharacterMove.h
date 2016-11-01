#pragma once
#include <stdint.h>
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// Cutscene.CutsceneActionBase
#include "AssemblyU2DCSharp_Cutscene_CutsceneActionBase.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Cutscene.CutsceneActionCharacterMove
struct CutsceneActionCharacterMove_t4605  : public CutsceneActionBase_t4589
{
	// System.Int32 Cutscene.CutsceneActionCharacterMove::m_nTargetID
	int32_t ___m_nTargetID;
	// UnityEngine.Vector3 Cutscene.CutsceneActionCharacterMove::m_TargetPos
	Vector3_t121  ___m_TargetPos;
	// System.Single Cutscene.CutsceneActionCharacterMove::m_fDir
	float ___m_fDir;
	// System.Single Cutscene.CutsceneActionCharacterMove::m_fDuration
	float ___m_fDuration;
	// System.Single Cutscene.CutsceneActionCharacterMove::m_fTimer
	float ___m_fTimer;
	// UnityEngine.Vector3 Cutscene.CutsceneActionCharacterMove::m_StartPos
	Vector3_t121  ___m_StartPos;
	// Games.LogicObj.Obj_Character Cutscene.CutsceneActionCharacterMove::m_TargetCharacter
	Obj_Character_t1772 * ___m_TargetCharacter;
	// System.Boolean Cutscene.CutsceneActionCharacterMove::m_TargetCharacterNavAgentOrigState
	bool ___m_TargetCharacterNavAgentOrigState;
};
