#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BonusItemGetLogic
struct BonusItemGetLogic_t1263;
// System.Object
struct Object_t;
// BonusItemGetLogic/BonusDataInfo
struct BonusDataInfo_t1251;
// System.String
struct String_t;
// BonusItemGetLogic/BONUSTYPE
#include "AssemblyU2DCSharp_BonusItemGetLogic_BONUSTYPE.h"

// System.Void BonusItemGetLogic::.ctor()
 void BonusItemGetLogic__ctor_m7408 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BonusItemGetLogic::get_ShowItemObj()
 bool BonusItemGetLogic_get_ShowItemObj_m7409 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::set_ShowItemObj(System.Boolean)
 void BonusItemGetLogic_set_ShowItemObj_m7410 (BonusItemGetLogic_t1263 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::OnEnable()
 void BonusItemGetLogic_OnEnable_m7411 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::OnDisable()
 void BonusItemGetLogic_OnDisable_m7412 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::Update()
 void BonusItemGetLogic_Update_m7413 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::InitBonusInfo(BonusItemGetLogic/BONUSTYPE)
 void BonusItemGetLogic_InitBonusInfo_m7414 (Object_t * __this/* static, unused */, int32_t ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::OnLoadBonusItemGetRoot(System.Boolean,System.Object)
 void BonusItemGetLogic_OnLoadBonusItemGetRoot_m7415 (Object_t * __this/* static, unused */, bool ___bSucess, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::Init(BonusItemGetLogic/BonusDataInfo)
 void BonusItemGetLogic_Init_m7416 (BonusItemGetLogic_t1263 * __this, BonusDataInfo_t1251 * ___curInfo, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::InitBonusData()
 void BonusItemGetLogic_InitBonusData_m7417 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::InitItemButtonPosition()
 void BonusItemGetLogic_InitItemButtonPosition_m7418 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ResetAllItemObj()
 void BonusItemGetLogic_ResetAllItemObj_m7419 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ResetAllItemObjTween()
 void BonusItemGetLogic_ResetAllItemObjTween_m7420 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ResetAllItemObjPosition()
 void BonusItemGetLogic_ResetAllItemObjPosition_m7421 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::HideAllItemObj()
 void BonusItemGetLogic_HideAllItemObj_m7422 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::InitBoxAnimation()
 void BonusItemGetLogic_InitBoxAnimation_m7423 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowItemObjTween(System.Int32)
 void BonusItemGetLogic_ShowItemObjTween_m7424 (BonusItemGetLogic_t1263 * __this, int32_t ___nIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowBoxObjTween()
 void BonusItemGetLogic_ShowBoxObjTween_m7425 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowOpenBoxAnimation()
 void BonusItemGetLogic_ShowOpenBoxAnimation_m7426 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowOpenBoxSprite()
 void BonusItemGetLogic_ShowOpenBoxSprite_m7427 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowFlyStars()
 void BonusItemGetLogic_ShowFlyStars_m7428 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::HideAllFlyStar()
 void BonusItemGetLogic_HideAllFlyStar_m7429 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::StarFlyTweenFinish()
 void BonusItemGetLogic_StarFlyTweenFinish_m7430 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowStars()
 void BonusItemGetLogic_ShowStars_m7431 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::HideStars()
 void BonusItemGetLogic_HideStars_m7432 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::BoxObjTweenFinish()
 void BonusItemGetLogic_BoxObjTweenFinish_m7433 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::OnTweenPositionFinished()
 void BonusItemGetLogic_OnTweenPositionFinished_m7434 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowItemName()
 void BonusItemGetLogic_ShowItemName_m7435 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowItemIcon()
 void BonusItemGetLogic_ShowItemIcon_m7436 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowButtonAfterAllTween()
 void BonusItemGetLogic_ShowButtonAfterAllTween_m7437 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::CancleButtonClick()
 void BonusItemGetLogic_CancleButtonClick_m7438 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::CotinueButtonClick()
 void BonusItemGetLogic_CotinueButtonClick_m7439 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::HideAllButton()
 void BonusItemGetLogic_HideAllButton_m7440 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::SetItemButtonImage(BonusItemGetLogic/BONUSTYPE)
 void BonusItemGetLogic_SetItemButtonImage_m7441 (BonusItemGetLogic_t1263 * __this, int32_t ___BonusType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::AddItemInfo(System.String,System.String,System.String,System.Boolean)
 void BonusItemGetLogic_AddItemInfo_m7442 (BonusItemGetLogic_t1263 * __this, String_t* ___ImageName, String_t* ___ItemName, String_t* ___ItemQuality, bool ___ShowImpact, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ProcessAfterAllTween()
 void BonusItemGetLogic_ProcessAfterAllTween_m7443 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::SetItemButtonImage_DailyLukcyDraw()
 void BonusItemGetLogic_SetItemButtonImage_DailyLukcyDraw_m7444 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ProcessAfterAllTween_DailyLukcyDraw()
 void BonusItemGetLogic_ProcessAfterAllTween_DailyLukcyDraw_m7445 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::ShowButtonAfterAllTween_DailyLukcyDraw()
 void BonusItemGetLogic_ShowButtonAfterAllTween_DailyLukcyDraw_m7446 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BonusItemGetLogic::CotinueButtonClick_DailyLukcyDraw()
 void BonusItemGetLogic_CotinueButtonClick_DailyLukcyDraw_m7447 (BonusItemGetLogic_t1263 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
