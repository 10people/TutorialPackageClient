#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TrainingLogic
struct TrainingLogic_t1781;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void TrainingLogic::.ctor()
 void TrainingLogic__ctor_m11828 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::.cctor()
 void TrainingLogic__cctor_m11829 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TrainingLogic TrainingLogic::Instance()
 TrainingLogic_t1781 * TrainingLogic_Instance_m11830 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::Awake()
 void TrainingLogic_Awake_m11831 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::Start()
 void TrainingLogic_Start_m11832 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::Update()
 void TrainingLogic_Update_m11833 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::UpdateTrainingProgress()
 void TrainingLogic_UpdateTrainingProgress_m11834 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::OnEnable()
 void TrainingLogic_OnEnable_m11835 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::OnDisable()
 void TrainingLogic_OnDisable_m11836 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::OnDestroy()
 void TrainingLogic_OnDestroy_m11837 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::Init()
 void TrainingLogic_Init_m11838 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::InitTrainingEffect()
 void TrainingLogic_InitTrainingEffect_m11839 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 TrainingLogic::GetAddCombatValue()
 int32_t TrainingLogic_GetAddCombatValue_m11840 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::InitCurrentExp()
 void TrainingLogic_InitCurrentExp_m11841 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::InitTrainingStage()
 void TrainingLogic_InitTrainingStage_m11842 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::InitDefaultTips()
 void TrainingLogic_InitDefaultTips_m11843 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::AddTrainingStart()
 void TrainingLogic_AddTrainingStart_m11844 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::AddTrainingEnd()
 void TrainingLogic_AddTrainingEnd_m11845 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::MinusTrainingStart()
 void TrainingLogic_MinusTrainingStart_m11846 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::MinusTrainingEnd()
 void TrainingLogic_MinusTrainingEnd_m11847 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::ShowTrainingTips(UnityEngine.GameObject,System.Int32,System.Boolean)
 void TrainingLogic_ShowTrainingTips_m11848 (TrainingLogic_t1781 * __this, GameObject_t9 * ___destGameObject, int32_t ___nChooseLevel, bool ___isDefaultBranch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::WriteTrainingTips(System.Int32,System.String&,System.Boolean,System.String)
 void TrainingLogic_WriteTrainingTips_m11849 (TrainingLogic_t1781 * __this, int32_t ___nTrainingLevel, String_t** ___str, bool ___bNewLine, String_t* ___choice, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::TrainingStageOnPress(System.Boolean)
 void TrainingLogic_TrainingStageOnPress_m11850 (TrainingLogic_t1781 * __this, bool ___pressed, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::TrainingStageOnDrag(UnityEngine.Vector2)
 void TrainingLogic_TrainingStageOnDrag_m11851 (TrainingLogic_t1781 * __this, Vector2_t12  ___delta, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::ChangeStageTurning()
 void TrainingLogic_ChangeStageTurning_m11852 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::TrainingSubmitClick()
 void TrainingLogic_TrainingSubmitClick_m11853 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::TrainingOK()
 void TrainingLogic_TrainingOK_m11854 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::ClearData()
 void TrainingLogic_ClearData_m11855 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::HandleUpdateTrainingLevel()
 void TrainingLogic_HandleUpdateTrainingLevel_m11856 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::HandleUpdateTrainingExp()
 void TrainingLogic_HandleUpdateTrainingExp_m11857 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::ShowEffectClick()
 void TrainingLogic_ShowEffectClick_m11858 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TrainingLogic::ResetClick()
 void TrainingLogic_ResetClick_m11859 (TrainingLogic_t1781 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
