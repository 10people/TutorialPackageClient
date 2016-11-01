#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VipRootLogic
struct VipRootLogic_t2090;
// UnityEngine.GameObject
struct GameObject_t9;
// System.String
struct String_t;

// System.Void VipRootLogic::.ctor()
 void VipRootLogic__ctor_m14177 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::Awake()
 void VipRootLogic_Awake_m14178 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::Start()
 void VipRootLogic_Start_m14179 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnDestroy()
 void VipRootLogic_OnDestroy_m14180 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnCloseClick()
 void VipRootLogic_OnCloseClick_m14181 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnClickItem()
 void VipRootLogic_OnClickItem_m14182 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnClickAdd()
 void VipRootLogic_OnClickAdd_m14183 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnNewClickAdd(UnityEngine.GameObject)
 void VipRootLogic_OnNewClickAdd_m14184 (VipRootLogic_t2090 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::RefreshVIPTips()
 void VipRootLogic_RefreshVIPTips_m14185 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::UpdateVipInfo()
 void VipRootLogic_UpdateVipInfo_m14186 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipRootLogic::GetMaxCostByLevel(System.Int32)
 int32_t VipRootLogic_GetMaxCostByLevel_m14187 (VipRootLogic_t2090 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipRootLogic::GetBonusItemByLevel(System.Int32,System.Int32)
 int32_t VipRootLogic_GetBonusItemByLevel_m14188 (VipRootLogic_t2090 * __this, int32_t ___nLevel, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipRootLogic::GetBonusAddItemByLevel(System.Int32,System.Int32)
 int32_t VipRootLogic_GetBonusAddItemByLevel_m14189 (VipRootLogic_t2090 * __this, int32_t ___nLevel, int32_t ___nProfession, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipRootLogic::GetNewBonusAddItemByLevel(System.Int32,System.Int32,System.Int32)
 int32_t VipRootLogic_GetNewBonusAddItemByLevel_m14190 (VipRootLogic_t2090 * __this, int32_t ___nLevel, int32_t ___nProfession, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipRootLogic::GetNewAddCount(System.Int32,System.Int32,System.Int32)
 int32_t VipRootLogic_GetNewAddCount_m14191 (VipRootLogic_t2090 * __this, int32_t ___nLevel, int32_t ___nProfession, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VipRootLogic::GetItemNameById(System.Int32)
 String_t* VipRootLogic_GetItemNameById_m14192 (VipRootLogic_t2090 * __this, int32_t ___nItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VipRootLogic::GetItemIconById(System.Int32)
 String_t* VipRootLogic_GetItemIconById_m14193 (VipRootLogic_t2090 * __this, int32_t ___nItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VipRootLogic::GetItemQualityById(System.Int32)
 String_t* VipRootLogic_GetItemQualityById_m14194 (VipRootLogic_t2090 * __this, int32_t ___nItemId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::SetArrowLabel(System.Int32)
 void VipRootLogic_SetArrowLabel_m14195 (VipRootLogic_t2090 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::RefreshVIPIntro(System.Int32)
 void VipRootLogic_RefreshVIPIntro_m14196 (VipRootLogic_t2090 * __this, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnClickCharge()
 void VipRootLogic_OnClickCharge_m14197 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnShowPreVipInfo()
 void VipRootLogic_OnShowPreVipInfo_m14198 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipRootLogic::OnShowNextVipInfo()
 void VipRootLogic_OnShowNextVipInfo_m14199 (VipRootLogic_t2090 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
