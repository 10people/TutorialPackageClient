#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Radar
struct Radar_t2033;
// System.Collections.Generic.List`1<UISprite>
struct List_1_t1305;
// UnityEngine.GameObject
struct GameObject_t9;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Radar::.ctor()
 void Radar__ctor_m13651 (Radar_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Radar::Start()
 void Radar_Start_m13652 (Radar_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Radar::UpdateMap()
 void Radar_UpdateMap_m13653 (Radar_t2033 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Radar::AddDotToList(System.Collections.Generic.List`1<UISprite>,System.Int32,UnityEngine.GameObject,UnityEngine.GameObject,UnityEngine.Color)
 void Radar_AddDotToList_m13654 (Radar_t2033 * __this, List_1_t1305 * ___curList, int32_t ___curIndex, GameObject_t9 * ___instanceObj, GameObject_t9 * ___curShowObj, Color_t939  ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Radar::GetMapPos(UnityEngine.Vector3)
 Vector3_t121  Radar_GetMapPos_m13655 (Radar_t2033 * __this, Vector3_t121  ___curPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 Radar::GetMapPos(System.Single,System.Single)
 Vector3_t121  Radar_GetMapPos_m13656 (Radar_t2033 * __this, float ___xPos, float ___zPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Radar::CreateRadarPoint(UnityEngine.GameObject,UnityEngine.Vector3)
 GameObject_t9 * Radar_CreateRadarPoint_m13657 (Radar_t2033 * __this, GameObject_t9 * ___obj, Vector3_t121  ___targetPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Radar::DeActiveList(System.Int32,System.Collections.Generic.List`1<UISprite>,UnityEngine.Vector3)
 void Radar_DeActiveList_m13658 (Radar_t2033 * __this, int32_t ___useCount, List_1_t1305 * ___curList, Vector3_t121  ___centerPos, MethodInfo* method) IL2CPP_METHOD_ATTR;
