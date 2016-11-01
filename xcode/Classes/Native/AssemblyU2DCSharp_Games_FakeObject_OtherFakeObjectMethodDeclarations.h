#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.FakeObject.OtherFakeObject
struct OtherFakeObject_t1619;
// Games.ObjAnimModule.ObjAnimModel
struct ObjAnimModel_t4799;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_ItemVisual
struct Tab_ItemVisual_t509;
// GCGame.Table.Tab_FakeObject
struct Tab_FakeObject_t451;
// System.String
struct String_t;
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void Games.FakeObject.OtherFakeObject::.ctor()
 void OtherFakeObject__ctor_m34120 (OtherFakeObject_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.ObjAnimModule.ObjAnimModel Games.FakeObject.OtherFakeObject::get_ObjAnim()
 ObjAnimModel_t4799 * OtherFakeObject_get_ObjAnim_m34121 (OtherFakeObject_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.OtherFakeObject::set_ObjAnim(Games.ObjAnimModule.ObjAnimModel)
 void OtherFakeObject_set_ObjAnim_m34122 (OtherFakeObject_t1619 * __this, ObjAnimModel_t4799 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Games.FakeObject.OtherFakeObject::get_FakeObjNode()
 GameObject_t9 * OtherFakeObject_get_FakeObjNode_m34123 (OtherFakeObject_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.OtherFakeObject::set_FakeObjNode(UnityEngine.GameObject)
 void OtherFakeObject_set_FakeObjNode_m34124 (OtherFakeObject_t1619 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.FakeObject.OtherFakeObject::initFakeObject(System.Int32,UnityEngine.GameObject)
 bool OtherFakeObject_initFakeObject_m34125 (OtherFakeObject_t1619 * __this, int32_t ___nFakeObjID, GameObject_t9 * ___fakeObjNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.FakeObject.OtherFakeObject::initFakeObject(System.Int32,UnityEngine.GameObject,UnityEngine.GameObject&)
 bool OtherFakeObject_initFakeObject_m34126 (OtherFakeObject_t1619 * __this, int32_t ___nFakeObjID, GameObject_t9 * ___fakeObjNode, GameObject_t9 ** ___FakeObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.OtherFakeObject::Destroy()
 void OtherFakeObject_Destroy_m34127 (OtherFakeObject_t1619 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.OtherFakeObject::PlayAnim(System.Int32)
 void OtherFakeObject_PlayAnim_m34128 (OtherFakeObject_t1619 * __this, int32_t ___nAnimID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.FakeObject.OtherFakeObject::GetCharModelID(GCGame.Table.Tab_ItemVisual,System.Int32)
 int32_t OtherFakeObject_GetCharModelID_m34129 (OtherFakeObject_t1619 * __this, Tab_ItemVisual_t509 * ___tabItemVisual, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.OtherFakeObject::InitFashionFakeObj(UnityEngine.GameObject,System.Int32,GCGame.Table.Tab_FakeObject)
 void OtherFakeObject_InitFashionFakeObj_m34130 (OtherFakeObject_t1619 * __this, GameObject_t9 * ___Obj, int32_t ___nModelVisualID, Tab_FakeObject_t451 * ___FakeObjTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.FakeObject.OtherFakeObject::GetWeaponModelID(GCGame.Table.Tab_ItemVisual,System.Int32)
 int32_t OtherFakeObject_GetWeaponModelID_m34131 (OtherFakeObject_t1619 * __this, Tab_ItemVisual_t509 * ___tabItemVisual, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.OtherFakeObject::InitFakeObjWeapon(UnityEngine.GameObject,System.Int32,GCGame.Table.Tab_FakeObject)
 void OtherFakeObject_InitFakeObjWeapon_m34132 (OtherFakeObject_t1619 * __this, GameObject_t9 * ___Obj, int32_t ___nCurWeaponID, Tab_FakeObject_t451 * ___FakeObjTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.OtherFakeObject::LoadOtherViewWapon(UnityEngine.GameObject,System.String,System.String,UnityEngine.Vector3)
 void OtherFakeObject_LoadOtherViewWapon_m34133 (OtherFakeObject_t1619 * __this, GameObject_t9 * ___Obj, String_t* ___szBindPt, String_t* ___szResPath, Vector3_t121  ___weaponRotation, MethodInfo* method) IL2CPP_METHOD_ATTR;
