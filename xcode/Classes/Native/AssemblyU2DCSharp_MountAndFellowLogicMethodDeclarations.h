#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// MountAndFellowLogic
struct MountAndFellowLogic_t1586;
// Games.FakeObject.FakeObject
struct FakeObject_t1241;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Object
struct Object_t;
// GCGame.Table.Tab_MountBase
struct Tab_MountBase_t561;
// System.String
struct String_t;

// System.Void MountAndFellowLogic::.ctor()
 void MountAndFellowLogic__ctor_m9849 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::.cctor()
 void MountAndFellowLogic__cctor_m9850 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// MountAndFellowLogic MountAndFellowLogic::Instance()
 MountAndFellowLogic_t1586 * MountAndFellowLogic_Instance_m9851 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 MountAndFellowLogic::get_CurMountID()
 int32_t MountAndFellowLogic_get_CurMountID_m9852 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// Games.FakeObject.FakeObject MountAndFellowLogic::get_MountFakeObj()
 FakeObject_t1241 * MountAndFellowLogic_get_MountFakeObj_m9853 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::set_MountFakeObj(Games.FakeObject.FakeObject)
 void MountAndFellowLogic_set_MountFakeObj_m9854 (MountAndFellowLogic_t1586 * __this, FakeObject_t1241 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::Start()
 void MountAndFellowLogic_Start_m9855 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::Awake()
 void MountAndFellowLogic_Awake_m9856 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::OnDestroy()
 void MountAndFellowLogic_OnDestroy_m9857 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::OnEnable()
 void MountAndFellowLogic_OnEnable_m9858 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::OnDisable()
 void MountAndFellowLogic_OnDisable_m9859 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::RefreshMountLeftTime()
 void MountAndFellowLogic_RefreshMountLeftTime_m9860 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::UpdateMountLeftTime()
 void MountAndFellowLogic_UpdateMountLeftTime_m9861 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::CleanUp()
 void MountAndFellowLogic_CleanUp_m9862 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::InitMountList()
 void MountAndFellowLogic_InitMountList_m9863 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::OnLoadMountItem(UnityEngine.GameObject,System.Object)
 void MountAndFellowLogic_OnLoadMountItem_m9864 (MountAndFellowLogic_t1586 * __this, GameObject_t9 * ___resItem, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::CreateChildForGrid(UnityEngine.GameObject,UnityEngine.GameObject,System.Boolean,System.Int32,GCGame.Table.Tab_MountBase)
 void MountAndFellowLogic_CreateChildForGrid_m9865 (MountAndFellowLogic_t1586 * __this, GameObject_t9 * ___resItem, GameObject_t9 * ___gParentObj, bool ___bCollectFlag, int32_t ___i, Tab_MountBase_t561 * ___mountTab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::initMountFakeObj()
 void MountAndFellowLogic_initMountFakeObj_m9866 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::AutoFlagClick(System.Int32)
 void MountAndFellowLogic_AutoFlagClick_m9867 (MountAndFellowLogic_t1586 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::MountItemClick(System.Int32)
 void MountAndFellowLogic_MountItemClick_m9868 (MountAndFellowLogic_t1586 * __this, int32_t ___nMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String MountAndFellowLogic::GetSpeedPlus(System.Int32)
 String_t* MountAndFellowLogic_GetSpeedPlus_m9869 (MountAndFellowLogic_t1586 * __this, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::RefreshInfo()
 void MountAndFellowLogic_RefreshInfo_m9870 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::RidingButton(UnityEngine.GameObject)
 void MountAndFellowLogic_RidingButton_m9871 (MountAndFellowLogic_t1586 * __this, GameObject_t9 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean MountAndFellowLogic::CreateMountFakeObj(System.Int32)
 bool MountAndFellowLogic_CreateMountFakeObj_m9872 (MountAndFellowLogic_t1586 * __this, int32_t ___nCurMountID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void MountAndFellowLogic::DestroyMountFakeObj()
 void MountAndFellowLogic_DestroyMountFakeObj_m9873 (MountAndFellowLogic_t1586 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
