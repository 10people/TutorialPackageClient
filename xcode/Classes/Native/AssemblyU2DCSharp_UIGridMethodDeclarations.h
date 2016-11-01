#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIGrid
struct UIGrid_t1199;
// UnityEngine.Transform
struct Transform_t78;
// System.Collections.Generic.List`1<UnityEngine.Transform>
struct List_1_t1711;

// System.Void UIGrid::.ctor()
 void UIGrid__ctor_m37593 (UIGrid_t1199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Start()
 void UIGrid_Start_m37594 (UIGrid_t1199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Update()
 void UIGrid_Update_m37595 (UIGrid_t1199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortByName(UnityEngine.Transform,UnityEngine.Transform)
 int32_t UIGrid_SortByName_m37596 (Object_t * __this/* static, unused */, Transform_t78 * ___a, Transform_t78 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIGrid::SortByNum(UnityEngine.Transform,UnityEngine.Transform)
 int32_t UIGrid_SortByNum_m37597 (Object_t * __this/* static, unused */, Transform_t78 * ___a, Transform_t78 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UnityEngine.Transform> UIGrid::GetChildList()
 List_1_t1711 * UIGrid_GetChildList_m37598 (UIGrid_t1199 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::Reposition(System.Boolean)
 void UIGrid_Reposition_m37599 (UIGrid_t1199 * __this, bool ___isByNum, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIGrid::RepositionEx(System.Boolean,System.Single)
 void UIGrid_RepositionEx_m37600 (UIGrid_t1199 * __this, bool ___isByNum, float ___inter, MethodInfo* method) IL2CPP_METHOD_ATTR;
