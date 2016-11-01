#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GuideDirectionSign
struct GuideDirectionSign_t5171;
// UnityEngine.Vector4[]
struct Vector4U5BU5D_t1420;

// System.Void GuideDirectionSign::.ctor()
 void GuideDirectionSign__ctor_m36989 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::.cctor()
 void GuideDirectionSign__cctor_m36990 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GuideDirectionSign::get_HasDest()
 bool GuideDirectionSign_get_HasDest_m36991 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::Init()
 void GuideDirectionSign_Init_m36992 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::Start()
 void GuideDirectionSign_Start_m36993 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GuideDirectionSign::LoadDestEffect()
 bool GuideDirectionSign_LoadDestEffect_m36994 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GuideDirectionSign::LoadArrowEffect()
 bool GuideDirectionSign_LoadArrowEffect_m36995 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::Update()
 void GuideDirectionSign_Update_m36996 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GuideDirectionSign::CalculatePath()
 bool GuideDirectionSign_CalculatePath_m36997 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GuideDirectionSign::CheckReachNextCorner()
 bool GuideDirectionSign_CheckReachNextCorner_m36998 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector4[] GuideDirectionSign::GetPathPoints(System.Single,System.Int32,System.Int32)
 Vector4U5BU5D_t1420* GuideDirectionSign_GetPathPoints_m36999 (GuideDirectionSign_t5171 * __this, float ___internalDist, int32_t ___startIdx, int32_t ___count, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::SetDest(System.Int32,System.Single,System.Single,System.Int32)
 void GuideDirectionSign_SetDest_m37000 (GuideDirectionSign_t5171 * __this, int32_t ___sceneId, float ___posX, float ___posZ, int32_t ___showDestEffect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::ReTrySetDest()
 void GuideDirectionSign_ReTrySetDest_m37001 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::CancelGuide()
 void GuideDirectionSign_CancelGuide_m37002 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::ShowGuideArrow()
 void GuideDirectionSign_ShowGuideArrow_m37003 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::HideGuideArrow()
 void GuideDirectionSign_HideGuideArrow_m37004 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::ShowDestEffect()
 void GuideDirectionSign_ShowDestEffect_m37005 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::HideDestEffect()
 void GuideDirectionSign_HideDestEffect_m37006 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::ShowArrawEffect()
 void GuideDirectionSign_ShowArrawEffect_m37007 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::HideArrawEffect()
 void GuideDirectionSign_HideArrawEffect_m37008 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::SetGuideEffectScale(System.Single)
 void GuideDirectionSign_SetGuideEffectScale_m37009 (GuideDirectionSign_t5171 * __this, float ___scale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GuideDirectionSign::OnDrawGizmos()
 void GuideDirectionSign_OnDrawGizmos_m37010 (GuideDirectionSign_t5171 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
