#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Rect
struct Rect_t5068;
// System.String
struct String_t;
// System.Object
struct Object_t;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"

// System.Void UnityEngine.Rect::.ctor(System.Single,System.Single,System.Single,System.Single)
 void Rect__ctor_m41351 (Rect_t5068 * __this, float ___left, float ___top, float ___width, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::Set(System.Single,System.Single,System.Single,System.Single)
 void Rect_Set_m42291 (Rect_t5068 * __this, float ___left, float ___top, float ___width, float ___height, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_x()
 float Rect_get_x_m41593 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_x(System.Single)
 void Rect_set_x_m41706 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_y()
 float Rect_get_y_m41594 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_y(System.Single)
 void Rect_set_y_m41759 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_position()
 Vector2_t12  Rect_get_position_m43857 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_center()
 Vector2_t12  Rect_get_center_m43948 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_center(UnityEngine.Vector2)
 void Rect_set_center_m41608 (Rect_t5068 * __this, Vector2_t12  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_width()
 float Rect_get_width_m41487 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_width(System.Single)
 void Rect_set_width_m41760 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_height()
 float Rect_get_height_m41489 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_height(System.Single)
 void Rect_set_height_m41761 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UnityEngine.Rect::get_size()
 Vector2_t12  Rect_get_size_m43848 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMin()
 float Rect_get_xMin_m41486 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMin(System.Single)
 void Rect_set_xMin_m41484 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMin()
 float Rect_get_yMin_m41479 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMin(System.Single)
 void Rect_set_yMin_m41481 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_xMax()
 float Rect_get_xMax_m41488 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_xMax(System.Single)
 void Rect_set_xMax_m41485 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.Rect::get_yMax()
 float Rect_get_yMax_m41482 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Rect::set_yMax(System.Single)
 void Rect_set_yMax_m41483 (Rect_t5068 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.Rect::ToString()
 String_t* Rect_ToString_m52419 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector2)
 bool Rect_Contains_m52420 (Rect_t5068 * __this, Vector2_t12  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Contains(UnityEngine.Vector3)
 bool Rect_Contains_m52421 (Rect_t5068 * __this, Vector3_t121  ___point, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Rect::GetHashCode()
 int32_t Rect_GetHashCode_m52422 (Rect_t5068 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::Equals(System.Object)
 bool Rect_Equals_m52423 (Rect_t5068 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Inequality(UnityEngine.Rect,UnityEngine.Rect)
 bool Rect_op_Inequality_m42231 (Object_t * __this/* static, unused */, Rect_t5068  ___lhs, Rect_t5068  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Rect::op_Equality(UnityEngine.Rect,UnityEngine.Rect)
 bool Rect_op_Equality_m43938 (Object_t * __this/* static, unused */, Rect_t5068  ___lhs, Rect_t5068  ___rhs, MethodInfo* method) IL2CPP_METHOD_ATTR;
