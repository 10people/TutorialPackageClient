#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SimpleWater
struct SimpleWater_t1050;
// UnityEngine.Texture
struct Texture_t937;

// System.Void SimpleWater::.ctor()
 void SimpleWater__ctor_m6611 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::Awake()
 void SimpleWater_Awake_m6612 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::SetHeight(System.Single,System.Boolean,System.Boolean)
 void SimpleWater_SetHeight_m6613 (SimpleWater_t1050 * __this, float ___waterHeight, bool ___isRightNow, bool ___tweenAlpha, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::SetTexture(UnityEngine.Texture)
 void SimpleWater_SetTexture_m6614 (SimpleWater_t1050 * __this, Texture_t937 * ___tex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::TweenWater(System.Single,System.Single)
 void SimpleWater_TweenWater_m6615 (SimpleWater_t1050 * __this, float ___from, float ___to, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::onstart()
 void SimpleWater_onstart_m6616 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::onupdate(System.Single)
 void SimpleWater_onupdate_m6617 (SimpleWater_t1050 * __this, float ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::oncomplete()
 void SimpleWater_oncomplete_m6618 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::SetAlpha()
 void SimpleWater_SetAlpha_m6619 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::onstartalpha()
 void SimpleWater_onstartalpha_m6620 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::onupdatealpha(System.Int32)
 void SimpleWater_onupdatealpha_m6621 (SimpleWater_t1050 * __this, int32_t ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::oncompletealpha()
 void SimpleWater_oncompletealpha_m6622 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::CallBack()
 void SimpleWater_CallBack_m6623 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::CreateWaterPlane()
 void SimpleWater_CreateWaterPlane_m6624 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SimpleWater::DestroyWater()
 void SimpleWater_DestroyWater_m6625 (SimpleWater_t1050 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
