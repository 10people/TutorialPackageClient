#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// Games.ObjAnimModule.ObjAnimModel
struct ObjAnimModel_t4799;
// UnityEngine.GameObject
struct GameObject_t9;
// GCGame.Table.Tab_FakeObject
struct Tab_FakeObject_t451;
// System.String
struct String_t;
// GCGame.Table.Tab_WeaponModel
struct Tab_WeaponModel_t707;
// GCGame.Table.Tab_ItemVisual
struct Tab_ItemVisual_t509;
// System.Object
struct Object_t;

// System.Void Games.FakeObject.FakeObject::.ctor()
 void FakeObject__ctor_m34061 (FakeObject_t1241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.ObjAnimModule.ObjAnimModel Games.FakeObject.FakeObject::get_ObjAnim()
 ObjAnimModel_t4799 * FakeObject_get_ObjAnim_m34062 (FakeObject_t1241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::set_ObjAnim(Games.ObjAnimModule.ObjAnimModel)
 void FakeObject_set_ObjAnim_m34063 (FakeObject_t1241 * __this, ObjAnimModel_t4799 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject Games.FakeObject.FakeObject::get_FakeObjNode()
 GameObject_t9 * FakeObject_get_FakeObjNode_m34064 (FakeObject_t1241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::set_FakeObjNode(UnityEngine.GameObject)
 void FakeObject_set_FakeObjNode_m34065 (FakeObject_t1241 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.FakeObject.FakeObject::initFakeObject(System.Int32,UnityEngine.GameObject)
 bool FakeObject_initFakeObject_m34066 (FakeObject_t1241 * __this, int32_t ___nFakeObjID, GameObject_t9 * ___fakeObjNode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean Games.FakeObject.FakeObject::initFakeObject(System.Int32,UnityEngine.GameObject,UnityEngine.GameObject&,System.Int32,System.Int32)
 bool FakeObject_initFakeObject_m34067 (FakeObject_t1241 * __this, int32_t ___nFakeObjID, GameObject_t9 * ___fakeObjNode, GameObject_t9 ** ___FakeObj, int32_t ___modeVisualID, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::Destroy()
 void FakeObject_Destroy_m34068 (FakeObject_t1241 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::PlayAnim(System.Int32)
 void FakeObject_PlayAnim_m34069 (FakeObject_t1241 * __this, int32_t ___nAnimID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::InitFashionFakeObj(UnityEngine.GameObject,System.Int32,GCGame.Table.Tab_FakeObject,System.Int32)
 void FakeObject_InitFashionFakeObj_m34070 (FakeObject_t1241 * __this, GameObject_t9 * ___Obj, int32_t ___nModelVisualID, Tab_FakeObject_t451 * ___FakeObjTable, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::InitFakeObjWeapon(UnityEngine.GameObject,System.Int32,GCGame.Table.Tab_FakeObject)
 void FakeObject_InitFakeObjWeapon_m34071 (FakeObject_t1241 * __this, GameObject_t9 * ___Obj, int32_t ___nCurWeaponID, Tab_FakeObject_t451 * ___FakeObjTable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::LoadWeapon(UnityEngine.GameObject,System.String,System.String,GCGame.Table.Tab_WeaponModel)
 void FakeObject_LoadWeapon_m34072 (FakeObject_t1241 * __this, GameObject_t9 * ___Obj, String_t* ___szBindPoint, String_t* ___szResName, Tab_WeaponModel_t707 * ___tabWeaponModel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 Games.FakeObject.FakeObject::GetCharModelID(GCGame.Table.Tab_ItemVisual,System.Int32)
 int32_t FakeObject_GetCharModelID_m34073 (FakeObject_t1241 * __this, Tab_ItemVisual_t509 * ___tabItemVisual, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::InitFakeObjFlyWing(System.Int32,UnityEngine.GameObject)
 void FakeObject_InitFakeObjFlyWing_m34074 (FakeObject_t1241 * __this, int32_t ___id, GameObject_t9 * ___Obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void Games.FakeObject.FakeObject::onAsyLoadFlyWing(System.String,UnityEngine.GameObject,System.Object,System.Object,System.Object)
 void FakeObject_onAsyLoadFlyWing_m34075 (Object_t * __this/* static, unused */, String_t* ___modeName, GameObject_t9 * ___resObj, Object_t * ___param1, Object_t * ___param2, Object_t * ___param3, MethodInfo* method) IL2CPP_METHOD_ATTR;
