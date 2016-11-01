#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PartnerFrameLogic_Star
struct PartnerFrameLogic_Star_t1635;
// Games.Fellow.Fellow
struct Fellow_t1174;
// MaterialPartnerItemLogic
struct MaterialPartnerItemLogic_t1541;
// UnityEngine.GameObject
struct GameObject_t9;

// System.Void PartnerFrameLogic_Star::.ctor()
 void PartnerFrameLogic_Star__ctor_m10422 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::.cctor()
 void PartnerFrameLogic_Star__cctor_m10423 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PartnerFrameLogic_Star PartnerFrameLogic_Star::Instance()
 PartnerFrameLogic_Star_t1635 * PartnerFrameLogic_Star_Instance_m10424 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnEnable()
 void PartnerFrameLogic_Star_OnEnable_m10425 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnDisable()
 void PartnerFrameLogic_Star_OnDisable_m10426 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::UpdateFellowInfo(Games.Fellow.Fellow)
 void PartnerFrameLogic_Star_UpdateFellowInfo_m10427 (PartnerFrameLogic_Star_t1635 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::UpdateFellowInfo_CurStar(Games.Fellow.Fellow)
 void PartnerFrameLogic_Star_UpdateFellowInfo_CurStar_m10428 (PartnerFrameLogic_Star_t1635 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::UpdateFellowInfo_NextStar(Games.Fellow.Fellow,System.Int32)
 void PartnerFrameLogic_Star_UpdateFellowInfo_NextStar_m10429 (PartnerFrameLogic_Star_t1635 * __this, Fellow_t1174 * ___fellow, int32_t ___addExp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::UpdateFellowInfo_Material()
 void PartnerFrameLogic_Star_UpdateFellowInfo_Material_m10430 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnAddMaterialClick()
 void PartnerFrameLogic_Star_OnAddMaterialClick_m10431 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnChooseMaterialClick(MaterialPartnerItemLogic)
 void PartnerFrameLogic_Star_OnChooseMaterialClick_m10432 (PartnerFrameLogic_Star_t1635 * __this, MaterialPartnerItemLogic_t1541 * ___item, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::ShowFellowDetail(Games.Fellow.Fellow)
 void PartnerFrameLogic_Star_ShowFellowDetail_m10433 (PartnerFrameLogic_Star_t1635 * __this, Fellow_t1174 * ___fellow, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnChooseMaterialOKClick()
 void PartnerFrameLogic_Star_OnChooseMaterialOKClick_m10434 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnChooseMaterialCancelClick(UnityEngine.GameObject)
 void PartnerFrameLogic_Star_OnChooseMaterialCancelClick_m10435 (PartnerFrameLogic_Star_t1635 * __this, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::InitMaterialPartnerGrid()
 void PartnerFrameLogic_Star_InitMaterialPartnerGrid_m10436 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnAutoChooseMaterialClick()
 void PartnerFrameLogic_Star_OnAutoChooseMaterialClick_m10437 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::InitMaterialPartnerGrid_Auto(System.Int32)
 void PartnerFrameLogic_Star_InitMaterialPartnerGrid_Auto_m10438 (PartnerFrameLogic_Star_t1635 * __this, int32_t ___quality, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::AutoChooseMaterialPartner_Clear()
 void PartnerFrameLogic_Star_AutoChooseMaterialPartner_Clear_m10439 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::AutoChooseMaterialPartner_Green()
 void PartnerFrameLogic_Star_AutoChooseMaterialPartner_Green_m10440 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::AutoChooseMaterialPartner_Blue()
 void PartnerFrameLogic_Star_AutoChooseMaterialPartner_Blue_m10441 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::AutoChooseMaterialPartner_Purple()
 void PartnerFrameLogic_Star_AutoChooseMaterialPartner_Purple_m10442 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::AutoChooseMaterialPartner_Orange()
 void PartnerFrameLogic_Star_AutoChooseMaterialPartner_Orange_m10443 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::AutoChooseMaterialPartner_Red()
 void PartnerFrameLogic_Star_AutoChooseMaterialPartner_Red_m10444 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::AutoChooseMaterialPartner_All()
 void PartnerFrameLogic_Star_AutoChooseMaterialPartner_All_m10445 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::OnStarButtonClick()
 void PartnerFrameLogic_Star_OnStarButtonClick_m10446 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::HandleFellowStarRet()
 void PartnerFrameLogic_Star_HandleFellowStarRet_m10447 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PartnerFrameLogic_Star::CloseChooseWindow()
 void PartnerFrameLogic_Star_CloseChooseWindow_m10448 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PartnerFrameLogic_Star::CreateAddMaterialBtn()
 bool PartnerFrameLogic_Star_CreateAddMaterialBtn_m10449 (PartnerFrameLogic_Star_t1635 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
