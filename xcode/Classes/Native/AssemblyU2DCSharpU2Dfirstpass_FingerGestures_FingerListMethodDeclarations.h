#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// FingerGestures/FingerList
struct FingerList_t26;
// FingerGestures/Finger
struct Finger_t8;
// System.Collections.Generic.List`1<FingerGestures/Finger>
struct List_1_t66;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// System.Collections.Generic.IEnumerator`1<FingerGestures/Finger>
struct IEnumerator_1_t68;
// System.Collections.Generic.IEnumerable`1<FingerGestures/Finger>
struct IEnumerable_1_t69;
// FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>
struct FingerPropertyGetterDelegate_1_t70;
// FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>
struct FingerPropertyGetterDelegate_1_t71;
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"

// System.Void FingerGestures/FingerList::.ctor()
 void FingerList__ctor_m145 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::.ctor(System.Collections.Generic.List`1<FingerGestures/Finger>)
 void FingerList__ctor_m146 (FingerList_t26 * __this, List_1_t66 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.IEnumerator FingerGestures/FingerList::System.Collections.IEnumerable.GetEnumerator()
 Object_t * FingerList_System_Collections_IEnumerable_GetEnumerator_m147 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerGestures/FingerList::get_Item(System.Int32)
 Finger_t8 * FingerList_get_Item_m148 (FingerList_t26 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 FingerGestures/FingerList::get_Count()
 int32_t FingerList_get_Count_m149 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IEnumerator`1<FingerGestures/Finger> FingerGestures/FingerList::GetEnumerator()
 Object_t* FingerList_GetEnumerator_m150 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::Add(FingerGestures/Finger)
 void FingerList_Add_m151 (FingerList_t26 * __this, Finger_t8 * ___touch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::Remove(FingerGestures/Finger)
 bool FingerList_Remove_m152 (FingerList_t26 * __this, Finger_t8 * ___touch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::Contains(FingerGestures/Finger)
 bool FingerList_Contains_m153 (FingerList_t26 * __this, Finger_t8 * ___touch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::AddRange(System.Collections.Generic.IEnumerable`1<FingerGestures/Finger>)
 void FingerList_AddRange_m154 (FingerList_t26 * __this, Object_t* ___touches, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void FingerGestures/FingerList::Clear()
 void FingerList_Clear_m155 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::AverageVector(FingerGestures/FingerList/FingerPropertyGetterDelegate`1<UnityEngine.Vector2>)
 Vector2_t12  FingerList_AverageVector_m156 (FingerList_t26 * __this, FingerPropertyGetterDelegate_1_t70 * ___getProperty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/FingerList::AverageFloat(FingerGestures/FingerList/FingerPropertyGetterDelegate`1<System.Single>)
 float FingerList_AverageFloat_m157 (FingerList_t26 * __this, FingerPropertyGetterDelegate_1_t71 * ___getProperty, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetFingerStartPosition(FingerGestures/Finger)
 Vector2_t12  FingerList_GetFingerStartPosition_m158 (Object_t * __this/* static, unused */, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetFingerPosition(FingerGestures/Finger)
 Vector2_t12  FingerList_GetFingerPosition_m159 (Object_t * __this/* static, unused */, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetFingerPreviousPosition(FingerGestures/Finger)
 Vector2_t12  FingerList_GetFingerPreviousPosition_m160 (Object_t * __this/* static, unused */, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/FingerList::GetFingerDistanceFromStart(FingerGestures/Finger)
 float FingerList_GetFingerDistanceFromStart_m161 (Object_t * __this/* static, unused */, Finger_t8 * ___finger, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetAverageStartPosition()
 Vector2_t12  FingerList_GetAverageStartPosition_m162 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetAveragePosition()
 Vector2_t12  FingerList_GetAveragePosition_m163 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 FingerGestures/FingerList::GetAveragePreviousPosition()
 Vector2_t12  FingerList_GetAveragePreviousPosition_m164 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single FingerGestures/FingerList::GetAverageDistanceFromStart()
 float FingerList_GetAverageDistanceFromStart_m165 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// FingerGestures/Finger FingerGestures/FingerList::GetOldest()
 Finger_t8 * FingerList_GetOldest_m166 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::MovingInSameDirection(System.Single)
 bool FingerList_MovingInSameDirection_m167 (FingerList_t26 * __this, float ___tolerance, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean FingerGestures/FingerList::AllMoving()
 bool FingerList_AllMoving_m168 (FingerList_t26 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
