#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Interpolate
struct Interpolate_t5122;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.IEnumerable`1<System.Single>
struct IEnumerable_1_t5037;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// Interpolate/Function
struct Function_t5116;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3>
struct IEnumerable_1_t5043;
// UnityEngine.Transform[]
struct TransformU5BU5D_t77;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t1262;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// Interpolate/EaseType
#include "AssemblyU2DCSharp_Interpolate_EaseType.h"

// System.Void Interpolate::.ctor()
 void Interpolate__ctor_m36463 (Interpolate_t5122 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::Identity(UnityEngine.Vector3)
 Vector3_t121  Interpolate_Identity_m36464 (Object_t * __this/* static, unused */, Vector3_t121  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::TransformDotPosition(UnityEngine.Transform)
 Vector3_t121  Interpolate_TransformDotPosition_m36465 (Object_t * __this/* static, unused */, Transform_t78 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> Interpolate::NewTimer(System.Single)
 Object_t* Interpolate_NewTimer_m36466 (Object_t * __this/* static, unused */, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<System.Single> Interpolate::NewCounter(System.Int32,System.Int32,System.Int32)
 Object_t* Interpolate_NewCounter_m36467 (Object_t * __this/* static, unused */, int32_t ___start, int32_t ___end, int32_t ___step, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Interpolate::NewEase(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single)
 Object_t * Interpolate_NewEase_m36468 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, Vector3_t121  ___start, Vector3_t121  ___end, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Interpolate::NewEase(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Int32)
 Object_t * Interpolate_NewEase_m36469 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, Vector3_t121  ___start, Vector3_t121  ___end, int32_t ___slices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator Interpolate::NewEase(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Collections.Generic.IEnumerable`1<System.Single>)
 Object_t * Interpolate_NewEase_m36470 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, Vector3_t121  ___start, Vector3_t121  ___end, float ___total, Object_t* ___driver, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::Ease(Interpolate/Function,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
 Vector3_t121  Interpolate_Ease_m36471 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, Vector3_t121  ___start, Vector3_t121  ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Interpolate/Function Interpolate::Ease(Interpolate/EaseType)
 Function_t5116 * Interpolate_Ease_m36472 (Object_t * __this/* static, unused */, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Transform[],System.Single)
 Object_t* Interpolate_NewBezier_m36473 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, TransformU5BU5D_t77* ___nodes, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Transform[],System.Int32)
 Object_t* Interpolate_NewBezier_m36474 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, TransformU5BU5D_t77* ___nodes, int32_t ___slices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Vector3[],System.Single)
 Object_t* Interpolate_NewBezier_m36475 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, Vector3U5BU5D_t1262* ___points, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewBezier(Interpolate/Function,UnityEngine.Vector3[],System.Int32)
 Object_t* Interpolate_NewBezier_m36476 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, Vector3U5BU5D_t1262* ___points, int32_t ___slices, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::Bezier(Interpolate/Function,UnityEngine.Vector3[],System.Single,System.Single)
 Vector3_t121  Interpolate_Bezier_m36477 (Object_t * __this/* static, unused */, Function_t5116 * ___ease, Vector3U5BU5D_t1262* ___points, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewCatmullRom(UnityEngine.Transform[],System.Int32,System.Boolean)
 Object_t* Interpolate_NewCatmullRom_m36478 (Object_t * __this/* static, unused */, TransformU5BU5D_t77* ___nodes, int32_t ___slices, bool ___loop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerable`1<UnityEngine.Vector3> Interpolate::NewCatmullRom(UnityEngine.Vector3[],System.Int32,System.Boolean)
 Object_t* Interpolate_NewCatmullRom_m36479 (Object_t * __this/* static, unused */, Vector3U5BU5D_t1262* ___points, int32_t ___slices, bool ___loop, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Interpolate::CatmullRom(UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Single)
 Vector3_t121  Interpolate_CatmullRom_m36480 (Object_t * __this/* static, unused */, Vector3_t121  ___previous, Vector3_t121  ___start, Vector3_t121  ___end, Vector3_t121  ___next, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::Linear(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_Linear_m36481 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInQuad(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInQuad_m36482 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutQuad(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseOutQuad_m36483 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutQuad(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInOutQuad_m36484 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInCubic(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInCubic_m36485 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutCubic(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseOutCubic_m36486 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutCubic(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInOutCubic_m36487 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInQuart(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInQuart_m36488 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutQuart(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseOutQuart_m36489 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutQuart(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInOutQuart_m36490 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInQuint(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInQuint_m36491 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutQuint(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseOutQuint_m36492 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutQuint(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInOutQuint_m36493 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInSine(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInSine_m36494 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutSine(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseOutSine_m36495 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutSine(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInOutSine_m36496 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInExpo(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInExpo_m36497 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutExpo(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseOutExpo_m36498 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutExpo(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInOutExpo_m36499 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInCirc(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInCirc_m36500 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseOutCirc(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseOutCirc_m36501 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single Interpolate::EaseInOutCirc(System.Single,System.Single,System.Single,System.Single)
 float Interpolate_EaseInOutCirc_m36502 (Object_t * __this/* static, unused */, float ___start, float ___distance, float ___elapsedTime, float ___duration, MethodInfo* method) IL2CPP_METHOD_ATTR;
