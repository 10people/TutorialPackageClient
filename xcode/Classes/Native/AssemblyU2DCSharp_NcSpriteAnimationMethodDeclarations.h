#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcSpriteAnimation
struct NcSpriteAnimation_t5095;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void NcSpriteAnimation::.ctor()
 void NcSpriteAnimation__ctor_m36289 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetAnimationState()
 int32_t NcSpriteAnimation_GetAnimationState_m36290 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcSpriteAnimation::GetDurationTime()
 float NcSpriteAnimation_GetDurationTime_m36291 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetShowIndex()
 int32_t NcSpriteAnimation_GetShowIndex_m36292 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetBreakLoop()
 void NcSpriteAnimation_SetBreakLoop_m36293 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::IsInPartLoop()
 bool NcSpriteAnimation_IsInPartLoop_m36294 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::ResetAnimation()
 void NcSpriteAnimation_ResetAnimation_m36295 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetSelectFrame(System.Int32)
 void NcSpriteAnimation_SetSelectFrame_m36296 (NcSpriteAnimation_t5095 * __this, int32_t ___nSelFrame, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::IsEmptyFrame()
 bool NcSpriteAnimation_IsEmptyFrame_m36297 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetMaxFrameCount()
 int32_t NcSpriteAnimation_GetMaxFrameCount_m36298 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetValidFrameCount()
 int32_t NcSpriteAnimation_GetValidFrameCount_m36299 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::Awake()
 void NcSpriteAnimation_Awake_m36300 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::ResetLocalValue()
 void NcSpriteAnimation_ResetLocalValue_m36301 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::Start()
 void NcSpriteAnimation_Start_m36302 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::Update()
 void NcSpriteAnimation_Update_m36303 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetSpriteFactoryIndex(System.Int32,System.Boolean)
 void NcSpriteAnimation_SetSpriteFactoryIndex_m36304 (NcSpriteAnimation_t5095 * __this, int32_t ___nSpriteFactoryIndex, bool ___bRunImmediate, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetPartLoopFrameIndex(System.Int32)
 int32_t NcSpriteAnimation_GetPartLoopFrameIndex_m36305 (NcSpriteAnimation_t5095 * __this, int32_t ___nSeqIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::GetPartLoopCount(System.Int32)
 int32_t NcSpriteAnimation_GetPartLoopCount_m36306 (NcSpriteAnimation_t5095 * __this, int32_t ___nSeqIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NcSpriteAnimation::CalcPartLoopInfo(System.Int32,System.Int32&)
 int32_t NcSpriteAnimation_CalcPartLoopInfo_m36307 (NcSpriteAnimation_t5095 * __this, int32_t ___nSeqIndex, int32_t* ___nLoopCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateEndAnimation()
 void NcSpriteAnimation_UpdateEndAnimation_m36308 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::SetIndex(System.Int32)
 void NcSpriteAnimation_SetIndex_m36309 (NcSpriteAnimation_t5095 * __this, int32_t ___nSeqIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateSpriteTexture(System.Int32,System.Boolean)
 void NcSpriteAnimation_UpdateSpriteTexture_m36310 (NcSpriteAnimation_t5095 * __this, int32_t ___nSelIndex, bool ___bShowEffect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateFactoryTexture(System.Int32,System.Boolean)
 void NcSpriteAnimation_UpdateFactoryTexture_m36311 (NcSpriteAnimation_t5095 * __this, int32_t ___nSelIndex, bool ___bShowEffect, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::UpdateFactoryMaterial()
 bool NcSpriteAnimation_UpdateFactoryMaterial_m36312 (NcSpriteAnimation_t5095 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::CreateBuiltInPlane(System.Int32)
 void NcSpriteAnimation_CreateBuiltInPlane_m36313 (NcSpriteAnimation_t5095 * __this, int32_t ___nSelIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::UpdateBuiltInPlane(System.Int32)
 void NcSpriteAnimation_UpdateBuiltInPlane_m36314 (NcSpriteAnimation_t5095 * __this, int32_t ___nSelIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcSpriteAnimation::UpdateMeshUVsByTileTexture(UnityEngine.Rect)
 bool NcSpriteAnimation_UpdateMeshUVsByTileTexture_m36315 (NcSpriteAnimation_t5095 * __this, Rect_t5068  ___uv, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcSpriteAnimation::OnUpdateEffectSpeed(System.Single,System.Boolean)
 void NcSpriteAnimation_OnUpdateEffectSpeed_m36316 (NcSpriteAnimation_t5095 * __this, float ___fSpeedRate, bool ___bRuntime, MethodInfo* method) IL2CPP_METHOD_ATTR;
