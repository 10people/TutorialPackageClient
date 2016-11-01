#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NcTransformTool
struct NcTransformTool_t5030;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Quaternion
#include "UnityEngine_UnityEngine_Quaternion.h"

// System.Void NcTransformTool::.ctor()
 void NcTransformTool__ctor_m36008 (NcTransformTool_t5030 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::.ctor(UnityEngine.Transform)
 void NcTransformTool__ctor_m36009 (NcTransformTool_t5030 * __this, Transform_t78 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NcTransformTool::GetZeroVector()
 Vector3_t121  NcTransformTool_GetZeroVector_m36010 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NcTransformTool::GetUnitVector()
 Vector3_t121  NcTransformTool_GetUnitVector_m36011 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Quaternion NcTransformTool::GetIdenQuaternion()
 Quaternion_t120  NcTransformTool_GetIdenQuaternion_m36012 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::InitLocalTransform(UnityEngine.Transform)
 void NcTransformTool_InitLocalTransform_m36013 (Object_t * __this/* static, unused */, Transform_t78 * ___dst, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::InitWorldTransform(UnityEngine.Transform)
 void NcTransformTool_InitWorldTransform_m36014 (Object_t * __this/* static, unused */, Transform_t78 * ___dst, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::InitWorldScale(UnityEngine.Transform)
 void NcTransformTool_InitWorldScale_m36015 (Object_t * __this/* static, unused */, Transform_t78 * ___dst, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyLocalTransform(UnityEngine.Transform,UnityEngine.Transform)
 void NcTransformTool_CopyLocalTransform_m36016 (Object_t * __this/* static, unused */, Transform_t78 * ___src, Transform_t78 * ___dst, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyLossyToLocalScale(UnityEngine.Vector3,UnityEngine.Transform)
 void NcTransformTool_CopyLossyToLocalScale_m36017 (Object_t * __this/* static, unused */, Vector3_t121  ___srcLossyScale, Transform_t78 * ___dst, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyToLocalTransform(UnityEngine.Transform)
 void NcTransformTool_CopyToLocalTransform_m36018 (NcTransformTool_t5030 * __this, Transform_t78 * ___dst, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::CopyToTransform(UnityEngine.Transform)
 void NcTransformTool_CopyToTransform_m36019 (NcTransformTool_t5030 * __this, Transform_t78 * ___dst, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::AddLocalTransform(UnityEngine.Transform)
 void NcTransformTool_AddLocalTransform_m36020 (NcTransformTool_t5030 * __this, Transform_t78 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::SetLocalTransform(UnityEngine.Transform)
 void NcTransformTool_SetLocalTransform_m36021 (NcTransformTool_t5030 * __this, Transform_t78 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTransformTool::IsLocalEquals(UnityEngine.Transform)
 bool NcTransformTool_IsLocalEquals_m36022 (NcTransformTool_t5030 * __this, Transform_t78 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::AddTransform(UnityEngine.Transform)
 void NcTransformTool_AddTransform_m36023 (NcTransformTool_t5030 * __this, Transform_t78 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::SetTransform(UnityEngine.Transform)
 void NcTransformTool_SetTransform_m36024 (NcTransformTool_t5030 * __this, Transform_t78 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NcTransformTool::IsEquals(UnityEngine.Transform)
 bool NcTransformTool_IsEquals_m36025 (NcTransformTool_t5030 * __this, Transform_t78 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NcTransformTool::SetTransform(NcTransformTool)
 void NcTransformTool_SetTransform_m36026 (NcTransformTool_t5030 * __this, NcTransformTool_t5030 * ___val, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NcTransformTool::GetTransformScaleMeanValue(UnityEngine.Transform)
 float NcTransformTool_GetTransformScaleMeanValue_m36027 (Object_t * __this/* static, unused */, Transform_t78 * ___srcTrans, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NcTransformTool::GetTransformScaleMeanVector(UnityEngine.Transform)
 Vector3_t121  NcTransformTool_GetTransformScaleMeanVector_m36028 (Object_t * __this/* static, unused */, Transform_t78 * ___srcTrans, MethodInfo* method) IL2CPP_METHOD_ATTR;
