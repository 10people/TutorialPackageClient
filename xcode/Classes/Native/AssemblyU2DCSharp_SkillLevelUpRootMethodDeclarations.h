#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// SkillLevelUpRoot
struct SkillLevelUpRoot_t1740;
// GCGame.Table.Tab_SkillEx
struct Tab_SkillEx_t639;
// System.String
struct String_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UnityEngine.GameObject
struct GameObject_t9;
// SKILLDELANDGAINTYPE
#include "AssemblyU2DCSharp_SKILLDELANDGAINTYPE.h"

// System.Void SkillLevelUpRoot::.ctor()
 void SkillLevelUpRoot__ctor_m11332 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::.cctor()
 void SkillLevelUpRoot__cctor_m11333 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SkillLevelUpRoot SkillLevelUpRoot::Instance()
 SkillLevelUpRoot_t1740 * SkillLevelUpRoot_Instance_m11334 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::get_CurHighIndex()
 int32_t SkillLevelUpRoot_get_CurHighIndex_m11335 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::set_CurHighIndex(System.Int32)
 void SkillLevelUpRoot_set_CurHighIndex_m11336 (SkillLevelUpRoot_t1740 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::get_CurNormalIndex()
 int32_t SkillLevelUpRoot_get_CurNormalIndex_m11337 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::set_CurNormalIndex(System.Int32)
 void SkillLevelUpRoot_set_CurNormalIndex_m11338 (SkillLevelUpRoot_t1740 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::get_CurPVEIndex()
 int32_t SkillLevelUpRoot_get_CurPVEIndex_m11339 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::set_CurPVEIndex(System.Int32)
 void SkillLevelUpRoot_set_CurPVEIndex_m11340 (SkillLevelUpRoot_t1740 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::get_CurPVPIndex()
 int32_t SkillLevelUpRoot_get_CurPVPIndex_m11341 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::set_CurPVPIndex(System.Int32)
 void SkillLevelUpRoot_set_CurPVPIndex_m11342 (SkillLevelUpRoot_t1740 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// GCGame.Table.Tab_SkillEx SkillLevelUpRoot::get_SelectSkillEx()
 Tab_SkillEx_t639 * SkillLevelUpRoot_get_SelectSkillEx_m11343 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::set_SelectSkillEx(GCGame.Table.Tab_SkillEx)
 void SkillLevelUpRoot_set_SelectSkillEx_m11344 (SkillLevelUpRoot_t1740 * __this, Tab_SkillEx_t639 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::get_CurSelectSkillState()
 int32_t SkillLevelUpRoot_get_CurSelectSkillState_m11345 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::set_CurSelectSkillState(System.Int32)
 void SkillLevelUpRoot_set_CurSelectSkillState_m11346 (SkillLevelUpRoot_t1740 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::Awake()
 void SkillLevelUpRoot_Awake_m11347 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::Start()
 void SkillLevelUpRoot_Start_m11348 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnEnable()
 void SkillLevelUpRoot_OnEnable_m11349 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::Update()
 void SkillLevelUpRoot_Update_m11350 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::FillNormalSkillList()
 void SkillLevelUpRoot_FillNormalSkillList_m11351 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::FillPVESkillList()
 void SkillLevelUpRoot_FillPVESkillList_m11352 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::FillPVPSkillList()
 void SkillLevelUpRoot_FillPVPSkillList_m11353 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::FillCommonInfo()
 void SkillLevelUpRoot_FillCommonInfo_m11354 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdateTabState()
 void SkillLevelUpRoot_UpdateTabState_m11355 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::GetIndexByObjName(System.String,UnityEngine.GameObject[])
 int32_t SkillLevelUpRoot_GetIndexByObjName_m11356 (SkillLevelUpRoot_t1740 * __this, String_t* ___objName, GameObjectU5BU5D_t1200* ___objList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdateNormalSelectState()
 void SkillLevelUpRoot_UpdateNormalSelectState_m11357 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdatePVESelectState()
 void SkillLevelUpRoot_UpdatePVESelectState_m11358 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdatePVPSelectState()
 void SkillLevelUpRoot_UpdatePVPSelectState_m11359 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::InitSkillInfo()
 void SkillLevelUpRoot_InitSkillInfo_m11360 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdateSkillDetailByState(System.Int32,System.Int32)
 void SkillLevelUpRoot_UpdateSkillDetailByState_m11361 (SkillLevelUpRoot_t1740 * __this, int32_t ___nState, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::SetSkillDetailInfoBySkillEx(GCGame.Table.Tab_SkillEx)
 void SkillLevelUpRoot_SetSkillDetailInfoBySkillEx_m11362 (SkillLevelUpRoot_t1740 * __this, Tab_SkillEx_t639 * ____skillEx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::GetSkillExpBySkillId(System.Int32)
 int32_t SkillLevelUpRoot_GetSkillExpBySkillId_m11363 (SkillLevelUpRoot_t1740 * __this, int32_t ___nSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String SkillLevelUpRoot::GetTypeDesc(SKILLDELANDGAINTYPE,System.Int32)
 String_t* SkillLevelUpRoot_GetTypeDesc_m11364 (SkillLevelUpRoot_t1740 * __this, int32_t ___nType, int32_t ___nValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillLevelUpRoot::IsCanLevelUpSkill(System.Int32)
 bool SkillLevelUpRoot_IsCanLevelUpSkill_m11365 (Object_t * __this/* static, unused */, int32_t ___nCurSkillId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::PlaySkillLevelUpEffect()
 void SkillLevelUpRoot_PlaySkillLevelUpEffect_m11366 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdateSkillInfo()
 void SkillLevelUpRoot_UpdateSkillInfo_m11367 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdateTime()
 void SkillLevelUpRoot_UpdateTime_m11368 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::DelUpdateNormalSkillInfo()
 void SkillLevelUpRoot_DelUpdateNormalSkillInfo_m11369 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::DelUpdatePVESkillInfo()
 void SkillLevelUpRoot_DelUpdatePVESkillInfo_m11370 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::DelUpdatePVPSkillInfo()
 void SkillLevelUpRoot_DelUpdatePVPSkillInfo_m11371 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 SkillLevelUpRoot::GetItemCountByItemId(System.Int32)
 int32_t SkillLevelUpRoot_GetItemCountByItemId_m11372 (SkillLevelUpRoot_t1740 * __this, int32_t ___nItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::SetNextLevelData()
 void SkillLevelUpRoot_SetNextLevelData_m11373 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::SetPreLevelData()
 void SkillLevelUpRoot_SetPreLevelData_m11374 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::SetInitItemMenuData()
 void SkillLevelUpRoot_SetInitItemMenuData_m11375 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::UpdateItemExpValue(System.Int32)
 void SkillLevelUpRoot_UpdateItemExpValue_m11376 (SkillLevelUpRoot_t1740 * __this, int32_t ___nMaxValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SkillLevelUpRoot::CheckCanLevelUp(System.Int32)
 bool SkillLevelUpRoot_CheckCanLevelUp_m11377 (SkillLevelUpRoot_t1740 * __this, int32_t ___nMaxValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::SendUseItemPacket()
 void SkillLevelUpRoot_SendUseItemPacket_m11378 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickTab(UnityEngine.GameObject)
 void SkillLevelUpRoot_OnClickTab_m11379 (SkillLevelUpRoot_t1740 * __this, GameObject_t9 * ___tabObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickNormalSkillBtn(UnityEngine.GameObject)
 void SkillLevelUpRoot_OnClickNormalSkillBtn_m11380 (SkillLevelUpRoot_t1740 * __this, GameObject_t9 * ___skillObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickPVEBtn(UnityEngine.GameObject)
 void SkillLevelUpRoot_OnClickPVEBtn_m11381 (SkillLevelUpRoot_t1740 * __this, GameObject_t9 * ___skillObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickPVPBtn(UnityEngine.GameObject)
 void SkillLevelUpRoot_OnClickPVPBtn_m11382 (SkillLevelUpRoot_t1740 * __this, GameObject_t9 * ___skillObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnCloseClick()
 void SkillLevelUpRoot_OnCloseClick_m11383 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnCloseClickSkillMenu()
 void SkillLevelUpRoot_OnCloseClickSkillMenu_m11384 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickSkillIntro()
 void SkillLevelUpRoot_OnClickSkillIntro_m11385 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickSkillLevelUp()
 void SkillLevelUpRoot_OnClickSkillLevelUp_m11386 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickGetItem()
 void SkillLevelUpRoot_OnClickGetItem_m11387 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickStudySkill()
 void SkillLevelUpRoot_OnClickStudySkill_m11388 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickUseSkill()
 void SkillLevelUpRoot_OnClickUseSkill_m11389 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnClickItemLevelUp()
 void SkillLevelUpRoot_OnClickItemLevelUp_m11390 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnCloseItemLevelUp()
 void SkillLevelUpRoot_OnCloseItemLevelUp_m11391 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnConfirmItemLevelUp()
 void SkillLevelUpRoot_OnConfirmItemLevelUp_m11392 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnPreLevel()
 void SkillLevelUpRoot_OnPreLevel_m11393 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnNextLevel()
 void SkillLevelUpRoot_OnNextLevel_m11394 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SkillLevelUpRoot::OnShowGetItemWayWin()
 void SkillLevelUpRoot_OnShowGetItemWayWin_m11395 (SkillLevelUpRoot_t1740 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
