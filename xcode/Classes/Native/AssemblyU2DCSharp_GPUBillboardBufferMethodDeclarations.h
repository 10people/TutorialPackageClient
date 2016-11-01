#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GPUBillboardBuffer
struct GPUBillboardBuffer_t1417;
// UnityEngine.Texture
struct Texture_t937;
// System.String
struct String_t;
// DisplayNumerInputParam
struct DisplayNumerInputParam_t1416;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void GPUBillboardBuffer::.ctor()
 void GPUBillboardBuffer__ctor_m8693 (GPUBillboardBuffer_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::.cctor()
 void GPUBillboardBuffer__cctor_m8694 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GPUBillboardBuffer GPUBillboardBuffer::get_Instance()
 GPUBillboardBuffer_t1417 * GPUBillboardBuffer_get_Instance_m8695 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::OnLeaveStage()
 void GPUBillboardBuffer_OnLeaveStage_m8696 (GPUBillboardBuffer_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::Init()
 void GPUBillboardBuffer_Init_m8697 (GPUBillboardBuffer_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::GPUBillboardBufferInit()
 void GPUBillboardBuffer_GPUBillboardBufferInit_m8698 (GPUBillboardBuffer_t1417 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetDisappear(System.Single)
 void GPUBillboardBuffer_SetDisappear_m8699 (GPUBillboardBuffer_t1417 * __this, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetTexture(UnityEngine.Texture)
 void GPUBillboardBuffer_SetTexture_m8700 (GPUBillboardBuffer_t1417 * __this, Texture_t937 * ___tex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetLife(System.Single)
 void GPUBillboardBuffer_SetLife_m8701 (GPUBillboardBuffer_t1417 * __this, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetSpeed(System.Single)
 void GPUBillboardBuffer_SetSpeed_m8702 (GPUBillboardBuffer_t1417 * __this, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetAcce(System.Single)
 void GPUBillboardBuffer_SetAcce_m8703 (GPUBillboardBuffer_t1417 * __this, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetScaleTime(System.Single)
 void GPUBillboardBuffer_SetScaleTime_m8704 (GPUBillboardBuffer_t1417 * __this, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetScaleSize(System.Single)
 void GPUBillboardBuffer_SetScaleSize_m8705 (GPUBillboardBuffer_t1417 * __this, float ___d, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::SetupBillboard(System.UInt32)
 void GPUBillboardBuffer_SetupBillboard_m8706 (GPUBillboardBuffer_t1417 * __this, uint32_t ___maxBoardSize, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::DisplayNumber(System.String,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Color,System.Boolean)
 void GPUBillboardBuffer_DisplayNumber_m8707 (GPUBillboardBuffer_t1417 * __this, String_t* ___numString, Vector2_t12  ___size, Vector3_t121  ___center, Color_t939  ___clr, bool ___haveScale, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GPUBillboardBuffer::DisplayNumberRandom(System.String,UnityEngine.Vector2,UnityEngine.Vector3,UnityEngine.Color,System.Boolean,DisplayNumerInputParam)
 void GPUBillboardBuffer_DisplayNumberRandom_m8708 (GPUBillboardBuffer_t1417 * __this, String_t* ___numString, Vector2_t12  ___size, Vector3_t121  ___center, Color_t939  ___clr, bool ___haveScale, DisplayNumerInputParam_t1416 * ___inpuParam, MethodInfo* method) IL2CPP_METHOD_ATTR;
