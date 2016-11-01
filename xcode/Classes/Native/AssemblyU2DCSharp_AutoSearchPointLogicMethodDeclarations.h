#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// AutoSearchPointLogic
struct AutoSearchPointLogic_t1224;
// GCGame.Table.Tab_AutoSearch
struct Tab_AutoSearch_t345;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void AutoSearchPointLogic::.ctor()
 void AutoSearchPointLogic__ctor_m7252 (AutoSearchPointLogic_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AutoSearchPointLogic::get_StartSceneId()
 int32_t AutoSearchPointLogic_get_StartSceneId_m7253 (AutoSearchPointLogic_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 AutoSearchPointLogic::get_EndSceneId()
 int32_t AutoSearchPointLogic_get_EndSceneId_m7254 (AutoSearchPointLogic_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPointLogic::set_EndSceneId(System.Int32)
 void AutoSearchPointLogic_set_EndSceneId_m7255 (AutoSearchPointLogic_t1224 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AutoSearchPointLogic::get_PosX()
 float AutoSearchPointLogic_get_PosX_m7256 (AutoSearchPointLogic_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single AutoSearchPointLogic::get_PosZ()
 float AutoSearchPointLogic_get_PosZ_m7257 (AutoSearchPointLogic_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPointLogic::CreateAutoSearchPointInfo(GCGame.Table.Tab_AutoSearch)
 void AutoSearchPointLogic_CreateAutoSearchPointInfo_m7258 (AutoSearchPointLogic_t1224 * __this, Tab_AutoSearch_t345 * ___autoSearchInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPointLogic::Start()
 void AutoSearchPointLogic_Start_m7259 (AutoSearchPointLogic_t1224 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPointLogic::SetLabelText(System.String,System.String,System.String)
 void AutoSearchPointLogic_SetLabelText_m7260 (AutoSearchPointLogic_t1224 * __this, String_t* ___labelLeft, String_t* ___labelRight, String_t* ___color, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void AutoSearchPointLogic::TransmitPointOnClicked(UnityEngine.GameObject)
 void AutoSearchPointLogic_TransmitPointOnClicked_m7261 (AutoSearchPointLogic_t1224 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
