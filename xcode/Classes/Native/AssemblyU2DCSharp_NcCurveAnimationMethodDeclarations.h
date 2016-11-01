#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcCurveAnimation
struct NcCurveAnimation_t5056;
// UnityEngine.MeshFilter
struct MeshFilter_t1418;
// NcCurveAnimation/NcInfoCurve
struct NcInfoCurve_t5066;
// System.String
struct String_t;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void NcCurveAnimation::.ctor()
 void NcCurveAnimation__ctor_m36180 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::GetAnimationState()
 int32_t NcCurveAnimation_GetAnimationState_m36181 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::ResetAnimation()
 void NcCurveAnimation_ResetAnimation_m36182 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetRepeatedRate()
 float NcCurveAnimation_GetRepeatedRate_m36183 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::Awake()
 void NcCurveAnimation_Awake_m36184 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::Start()
 void NcCurveAnimation_Start_m36185 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::LateUpdate()
 void NcCurveAnimation_LateUpdate_m36186 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::InitAnimation()
 void NcCurveAnimation_InitAnimation_m36187 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::UpdateAnimation(System.Single)
 void NcCurveAnimation_UpdateAnimation_m36188 (NcCurveAnimation_t5056 * __this, float ___fElapsedRate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::ChangeMeshColor(UnityEngine.MeshFilter,UnityEngine.Color)
 void NcCurveAnimation_ChangeMeshColor_m36189 (NcCurveAnimation_t5056 * __this, MeshFilter_t1418 * ___mFilter, Color_t939  ___tarColor, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::SetChildMaterialColor(NcCurveAnimation/NcInfoCurve,System.Single,System.Int32)
 void NcCurveAnimation_SetChildMaterialColor_m36190 (NcCurveAnimation_t5056 * __this, NcInfoCurve_t5066 * ___curveInfo, float ___fValue, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetChildNextColorValue(NcCurveAnimation/NcInfoCurve,System.Int32,System.Single,System.Int32)
 float NcCurveAnimation_GetChildNextColorValue_m36191 (NcCurveAnimation_t5056 * __this, NcInfoCurve_t5066 * ___curveInfo, int32_t ___nIndex, float ___fValue, int32_t ___arrayIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetNextValue(NcCurveAnimation/NcInfoCurve,System.Int32,System.Single)
 float NcCurveAnimation_GetNextValue_m36192 (NcCurveAnimation_t5056 * __this, NcInfoCurve_t5066 * ___curveInfo, int32_t ___nIndex, float ___fValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetNextScale(NcCurveAnimation/NcInfoCurve,System.Int32,System.Single)
 float NcCurveAnimation_GetNextScale_m36193 (NcCurveAnimation_t5056 * __this, NcInfoCurve_t5066 * ___curveInfo, int32_t ___nIndex, float ___fValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcCurveAnimation::GetElapsedRate()
 float NcCurveAnimation_GetElapsedRate_m36194 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::CopyTo(NcCurveAnimation,System.Boolean)
 void NcCurveAnimation_CopyTo_m36195 (NcCurveAnimation_t5056 * __this, NcCurveAnimation_t5056 * ___target, bool ___bCurveOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::AppendTo(NcCurveAnimation,System.Boolean)
 void NcCurveAnimation_AppendTo_m36196 (NcCurveAnimation_t5056 * __this, NcCurveAnimation_t5056 * ___target, bool ___bCurveOnly, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcCurveAnimation/NcInfoCurve NcCurveAnimation::GetCurveInfo(System.Int32)
 NcInfoCurve_t5066 * NcCurveAnimation_GetCurveInfo_m36197 (NcCurveAnimation_t5056 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcCurveAnimation/NcInfoCurve NcCurveAnimation::GetCurveInfo(System.String)
 NcInfoCurve_t5066 * NcCurveAnimation_GetCurveInfo_m36198 (NcCurveAnimation_t5056 * __this, String_t* ___curveName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NcCurveAnimation/NcInfoCurve NcCurveAnimation::SetCurveInfo(System.Int32,NcCurveAnimation/NcInfoCurve)
 NcInfoCurve_t5066 * NcCurveAnimation_SetCurveInfo_m36199 (NcCurveAnimation_t5056 * __this, int32_t ___nIndex, NcInfoCurve_t5066 * ___newInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::AddCurveInfo()
 int32_t NcCurveAnimation_AddCurveInfo_m36200 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::AddCurveInfo(NcCurveAnimation/NcInfoCurve)
 int32_t NcCurveAnimation_AddCurveInfo_m36201 (NcCurveAnimation_t5056 * __this, NcInfoCurve_t5066 * ___addCurveInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::DeleteCurveInfo(System.Int32)
 void NcCurveAnimation_DeleteCurveInfo_m36202 (NcCurveAnimation_t5056 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::ClearAllCurveInfo()
 void NcCurveAnimation_ClearAllCurveInfo_m36203 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcCurveAnimation::GetCurveInfoCount()
 int32_t NcCurveAnimation_GetCurveInfoCount_m36204 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::SortCurveInfo()
 void NcCurveAnimation_SortCurveInfo_m36205 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcCurveAnimation::CheckInvalidOption()
 bool NcCurveAnimation_CheckInvalidOption_m36206 (NcCurveAnimation_t5056 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcCurveAnimation::CheckInvalidOption(System.Int32)
 bool NcCurveAnimation_CheckInvalidOption_m36207 (NcCurveAnimation_t5056 * __this, int32_t ___nSrcIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcCurveAnimation::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcCurveAnimation_OnUpdateEffectSpeed_m36208 (NcCurveAnimation_t5056 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NcCurveAnimation::Ng_GetMaterialColorName(UnityEngine.Material)
 String_t* NcCurveAnimation_Ng_GetMaterialColorName_m36209 (Object_t * __this/* static, unused */, Material_t133 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
