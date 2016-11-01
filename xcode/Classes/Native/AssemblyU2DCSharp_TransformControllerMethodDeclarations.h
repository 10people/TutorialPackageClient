#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// TransformController
struct TransformController_t1729;
// SkillBarLogic
struct SkillBarLogic_t1726;
// UISprite
struct UISprite_t1202;
// UILabel
struct UILabel_t1176;

// System.Void TransformController::.ctor(SkillBarLogic)
 void TransformController__ctor_m11871 (TransformController_t1729 * __this, SkillBarLogic_t1726 * ___root, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::PlayTweenInGroup(System.Int32,System.Boolean)
 void TransformController_PlayTweenInGroup_m11872 (TransformController_t1729 * __this, int32_t ___groupId, bool ___forward, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::StopAllTween()
 void TransformController_StopAllTween_m11873 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ClearData()
 void TransformController_ClearData_m11874 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ClearData_Sec()
 void TransformController_ClearData_Sec_m11875 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ShowChoosePanel()
 void TransformController_ShowChoosePanel_m11876 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::Update()
 void TransformController_Update_m11877 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ChooseDone(System.Boolean)
 void TransformController_ChooseDone_m11878 (TransformController_t1729 * __this, bool ___choosedPVE, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::HideObjWhenTween(System.Boolean)
 void TransformController_HideObjWhenTween_m11879 (TransformController_t1729 * __this, bool ___show, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ResetTransformUI()
 void TransformController_ResetTransformUI_m11880 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ChangeSpriteAlpha(UISprite,System.Single)
 void TransformController_ChangeSpriteAlpha_m11881 (TransformController_t1729 * __this, UISprite_t1202 * ___sprite, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ChangeLabelAlpha(UILabel,System.Single)
 void TransformController_ChangeLabelAlpha_m11882 (TransformController_t1729 * __this, UILabel_t1176 * ___label, float ___alpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::TakeEffect()
 void TransformController_TakeEffect_m11883 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::UpdateChooseEffect()
 void TransformController_UpdateChooseEffect_m11884 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::UpdateEffectTime()
 void TransformController_UpdateEffectTime_m11885 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ChooseTimeOut()
 void TransformController_ChooseTimeOut_m11886 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::CloseChoosePanel()
 void TransformController_CloseChoosePanel_m11887 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::End()
 void TransformController_End_m11888 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::BreakTransform()
 void TransformController_BreakTransform_m11889 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void TransformController::ShowNearEndEffect()
 void TransformController_ShowNearEndEffect_m11890 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TransformController::CanUpdateChooseTime()
 bool TransformController_CanUpdateChooseTime_m11891 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean TransformController::InFirstScene()
 bool TransformController_InFirstScene_m11892 (TransformController_t1729 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
