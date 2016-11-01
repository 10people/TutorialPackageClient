#pragma once
#include <stdint.h>
// UnityEngine.GameObject
struct GameObject_t9;
// Cutscene.CutsceneActionBase
#include "AssemblyU2DCSharp_Cutscene_CutsceneActionBase.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Cutscene.CutsceneActionPlayEffect
struct CutsceneActionPlayEffect_t4610  : public CutsceneActionBase_t4589
{
	// System.Int32 Cutscene.CutsceneActionPlayEffect::m_nEffectID
	int32_t ___m_nEffectID;
	// UnityEngine.Vector3 Cutscene.CutsceneActionPlayEffect::m_EffectPos
	Vector3_t121  ___m_EffectPos;
	// UnityEngine.GameObject Cutscene.CutsceneActionPlayEffect::m_EffectObj
	GameObject_t9 * ___m_EffectObj;
	// System.Single Cutscene.CutsceneActionPlayEffect::m_fTime
	float ___m_fTime;
	// System.Single Cutscene.CutsceneActionPlayEffect::m_fTimer
	float ___m_fTimer;
};
