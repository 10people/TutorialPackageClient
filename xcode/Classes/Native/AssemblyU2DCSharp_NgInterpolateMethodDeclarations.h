#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NgInterpolate
struct NgInterpolate_t5042;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t5037;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// NgInterpolate/Function
struct Function_t5033;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5043;
// UnityEngine.Transform[]
struct TransformU5BU5D_t77;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// NgInterpolate/EaseType
#include "AssemblyU2DCSharp_NgInterpolate_EaseType.h"

// System.Void NgInterpolate::.ctor()
 void NgInterpolate__ctor_m36055 (NgInterpolate_t5042 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::Identity(UnityEngine.Vector3)
 Vector3_t121  NgInterpolate_Identity_m36056 (Object_t * __this/* static, unused */, Vector3_t121  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::TransformDotPosition(UnityEngine.Transform)
 Vector3_t121  NgInterpolate_TransformDotPosition_m36057 (Object_t * __this/* static, unused */, Transform_t78 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> NgInterpolate::NewTimer(System.Single)
 Object_t* NgInterpolate_NewTimer_m36058 (Object_t * __this/* static, unused */, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> NgInterpolate::NewCounter(System.Int32,System.Int32,System.Int32)
 Object_t* NgInterpolate_NewCounter_m36059 (Object_t * __this/* static, unused */, int32_t ___start, int32_t ___end, int32_t ___step, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NgInterpolate::NewEase(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Object_t * NgInterpolate_NewEase_m36060 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, Vector3_t121  ___start, Vector3_t121  ___end, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NgInterpolate::NewEase(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
 Object_t * NgInterpolate_NewEase_m36061 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, Vector3_t121  ___start, Vector3_t121  ___end, int32_t ___slices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator NgInterpolate::NewEase(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Collections.Generic.IEnumerable`1<System.Single>)
 Object_t * NgInterpolate_NewEase_m36062 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, Vector3_t121  ___start, Vector3_t121  ___end, float ___total, Object_t* ___driver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::Ease(NgInterpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
 Vector3_t121  NgInterpolate_Ease_m36063 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, Vector3_t121  ___start, Vector3_t121  ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// NgInterpolate/Function NgInterpolate::Ease(NgInterpolate/EaseType)
 Function_t5033 * NgInterpolate_Ease_m36064 (Object_t * __this/* static, unused */, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Transform[],System.Single)
 Object_t* NgInterpolate_NewBezier_m36065 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, TransformU5BU5D_t77* ___nodes, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Transform[],System.Int32)
 Object_t* NgInterpolate_NewBezier_m36066 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, TransformU5BU5D_t77* ___nodes, int32_t ___slices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Vector3[],System.Single)
 Object_t* NgInterpolate_NewBezier_m36067 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, Vector3U5BU5D_t1262* ___points, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewBezier(NgInterpolate/Function,UnityEngine.Vector3[],System.Int32)
 Object_t* NgInterpolate_NewBezier_m36068 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, Vector3U5BU5D_t1262* ___points, int32_t ___slices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::Bezier(NgInterpolate/Function,UnityEngine.Vector3[],System.Single,System.Single)
 Vector3_t121  NgInterpolate_Bezier_m36069 (Object_t * __this/* static, unused */, Function_t5033 * ___ease, Vector3U5BU5D_t1262* ___points, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewCatmullRom(UnityEngine.Transform[],System.Int32,System.Boolean)
 Object_t* NgInterpolate_NewCatmullRom_m36070 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___nodes, int32_t ___slices, bool ___loop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> NgInterpolate::NewCatmullRom(UnityEngine.Vector3[],System.Int32,System.Boolean)
 Object_t* NgInterpolate_NewCatmullRom_m36071 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___points, int32_t ___slices, bool ___loop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NgInterpolate::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
 Vector3_t121  NgInterpolate_CatmullRom_m36072 (Object_t * __this/* static, unused */, Vector3_t121  ___previous, Vector3_t121  ___start, Vector3_t121  ___end, Vector3_t121  ___next, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::Linear(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_Linear_m36073 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInQuad(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInQuad_m36074 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutQuad(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseOutQuad_m36075 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutQuad(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInOutQuad_m36076 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInCubic(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInCubic_m36077 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutCubic(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseOutCubic_m36078 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutCubic(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInOutCubic_m36079 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInQuart(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInQuart_m36080 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutQuart(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseOutQuart_m36081 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutQuart(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInOutQuart_m36082 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInQuint(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInQuint_m36083 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutQuint(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseOutQuint_m36084 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutQuint(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInOutQuint_m36085 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInSine(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInSine_m36086 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutSine(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseOutSine_m36087 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutSine(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInOutSine_m36088 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInExpo(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInExpo_m36089 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutExpo(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseOutExpo_m36090 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutExpo(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInOutExpo_m36091 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInCirc(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInCirc_m36092 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseOutCirc(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseOutCirc_m36093 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NgInterpolate::EaseInOutCirc(System.Single,System.Single,System.Single,System.Single)
 float NgInterpolate_EaseInOutCirc_m36094 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
