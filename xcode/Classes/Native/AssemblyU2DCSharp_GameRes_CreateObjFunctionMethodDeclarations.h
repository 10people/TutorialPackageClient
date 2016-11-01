#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GameRes.CreateObjFunction
struct CreateObjFunction_t4389;
// System.String
struct String_t;
// GameRes.DelAsycModelOver
struct DelAsycModelOver_t4390;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// ObjSnare_Init_Data
struct ObjSnare_Init_Data_t4392;
// ObjYanHua_Init_Data
struct ObjYanHua_Init_Data_t4393;
// Games.LogicObj.Obj_OtherPlayer
struct Obj_OtherPlayer_t1655;
// Obj_HidePlayerData
struct Obj_HidePlayerData_t4394;
// Games.LogicObj.Obj_MainPlayer
struct Obj_MainPlayer_t1732;
// Games.LogicObj.Obj_Character
struct Obj_Character_t1772;
// GameRes.LoadFinishCallback
struct LoadFinishCallback_t2169;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// Obj_Mount
struct Obj_Mount_t4395;
// GameRes.EResourceType
#include "AssemblyU2DCSharp_GameRes_EResourceType.h"
// GameRes.LoadedObjData
#include "AssemblyU2DCSharp_GameRes_LoadedObjData.h"
// GameRes.LoadCompleteCallBackParameter
#include "AssemblyU2DCSharp_GameRes_LoadCompleteCallBackParameter.h"

// System.Void GameRes.CreateObjFunction::.ctor()
 void CreateObjFunction__ctor_m31091 (CreateObjFunction_t4389 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateModelStoryObj(System.Int32,System.String,GameRes.DelAsycModelOver)
 void CreateObjFunction_CreateModelStoryObj_m31092 (Object_t * __this/* static, unused */, int32_t ___nCharModelID, String_t* ___strName, DelAsycModelOver_t4390 * ___delAsycStroyModel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateModelNpcObj(System.Int32,Obj_Init_Data,GameRes.DelAsycModelOver)
 void CreateObjFunction_CreateModelNpcObj_m31093 (Object_t * __this/* static, unused */, int32_t ___nCharModelID, Obj_Init_Data_t4391 * ___initData, DelAsycModelOver_t4390 * ___delAsycStroyModel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateModelSnareObj(ObjSnare_Init_Data)
 void CreateObjFunction_CreateModelSnareObj_m31094 (Object_t * __this/* static, unused */, ObjSnare_Init_Data_t4392 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateModelYanhuaObj(ObjYanHua_Init_Data)
 void CreateObjFunction_CreateModelYanhuaObj_m31095 (Object_t * __this/* static, unused */, ObjYanHua_Init_Data_t4393 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateOtherPlayerHided(Games.LogicObj.Obj_OtherPlayer,Obj_HidePlayerData)
 void CreateObjFunction_CreateOtherPlayerHided_m31096 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___obj, Obj_HidePlayerData_t4394 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateOtherPlayer(Obj_Init_Data)
 void CreateObjFunction_CreateOtherPlayer_m31097 (Object_t * __this/* static, unused */, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateZombieUser(Obj_Init_Data)
 void CreateObjFunction_CreateZombieUser_m31098 (Object_t * __this/* static, unused */, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::CreateFellowModel(Obj_Init_Data)
 void CreateObjFunction_CreateFellowModel_m31099 (Object_t * __this/* static, unused */, Obj_Init_Data_t4391 * ___initData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.LogicObj.Obj_MainPlayer GameRes.CreateObjFunction::CreateMainPlayerObj()
 Obj_MainPlayer_t1732 * CreateObjFunction_CreateMainPlayerObj_m31100 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::ChangeMainPLayerObj(System.Int32)
 void CreateObjFunction_ChangeMainPLayerObj_m31101 (Object_t * __this/* static, unused */, int32_t ___nCharmodelID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::ChangeOtherPLayerObjToChangeModel(System.Int32,Games.LogicObj.Obj_Character)
 void CreateObjFunction_ChangeOtherPLayerObjToChangeModel_m31102 (Object_t * __this/* static, unused */, int32_t ___nCharmodelID, Obj_Character_t1772 * ___otherPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::ChangeMainPLayerObjToNormal()
 void CreateObjFunction_ChangeMainPLayerObjToNormal_m31103 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::ChangeOtherPLayerObjToNormal(Games.LogicObj.Obj_OtherPlayer)
 void CreateObjFunction_ChangeOtherPLayerObjToNormal_m31104 (Object_t * __this/* static, unused */, Obj_OtherPlayer_t1655 * ___otherPlayer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.CreateObjFunction::LoadModelToRoot(System.Int32,GameRes.EResourceType,GameRes.LoadFinishCallback,UnityEngine.GameObject,System.Object,System.Object)
 bool CreateObjFunction_LoadModelToRoot_m31105 (Object_t * __this/* static, unused */, int32_t ___id, int32_t ___type, LoadFinishCallback_t2169 * ___callback, GameObject_t9 * ___root, Object_t * ___parameter2, Object_t * ___parameter3, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::LoadModelComplete(GameRes.LoadedObjData,GameRes.LoadCompleteCallBackParameter)
 void CreateObjFunction_LoadModelComplete_m31106 (Object_t * __this/* static, unused */, LoadedObjData_t2119  ___data, LoadCompleteCallBackParameter_t2120  ___parameter, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GameRes.CreateObjFunction::SetPlayerShader(UnityEngine.GameObject)
 void CreateObjFunction_SetPlayerShader_m31107 (Object_t * __this/* static, unused */, GameObject_t9 * ___gObject, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GameRes.CreateObjFunction::ReloadModel(UnityEngine.GameObject,UnityEngine.GameObject,System.String,Obj_Mount,System.Boolean)
 bool CreateObjFunction_ReloadModel_m31108 (Object_t * __this/* static, unused */, GameObject_t9 * ___objRoot, GameObject_t9 * ___objModel, String_t* ___animationPath, Obj_Mount_t4395 * ___MountObj, bool ___isChangeing, MethodInfo* method) IL2CPP_METHOD_ATTR;
