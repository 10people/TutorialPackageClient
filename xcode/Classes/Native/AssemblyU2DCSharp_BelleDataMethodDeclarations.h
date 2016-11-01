#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleData
struct BelleData_t4862;
// GC_BELLE_DATA
struct GC_BELLE_DATA_t2988;
// GC_BELLE_CLOSE_RET
struct GC_BELLE_CLOSE_RET_t2990;
// GC_BELLE_EVOLUTION_RET
struct GC_BELLE_EVOLUTION_RET_t2992;
// GC_BELLE_EVOLUTIONRAPID_RET
struct GC_BELLE_EVOLUTIONRAPID_RET_t2994;
// GC_RET_GET_BELLE
struct GC_RET_GET_BELLE_t3582;
// GC_BELLE_BATTLE_RET
struct GC_BELLE_BATTLE_RET_t2996;
// GC_BELLE_REST_RET
struct GC_BELLE_REST_RET_t2998;
// GC_BELLE_ACTIVEMATRIX_RET
struct GC_BELLE_ACTIVEMATRIX_RET_t3000;
// System.String
struct String_t;
// GCGame.Table.Tab_Belle
struct Tab_Belle_t351;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>
struct Dictionary_2_t1116;
// UILabel
struct UILabel_t1176;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"

// System.Void BelleData::.ctor()
 void BelleData__ctor_m34528 (BelleData_t4862 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::.cctor()
 void BelleData__cctor_m34529 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateBelleData(GC_BELLE_DATA)
 void BelleData_UpdateBelleData_m34530 (Object_t * __this/* static, unused */, GC_BELLE_DATA_t2988 * ___data, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateCloseData(GC_BELLE_CLOSE_RET)
 void BelleData_UpdateCloseData_m34531 (Object_t * __this/* static, unused */, GC_BELLE_CLOSE_RET_t2990 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateEvolutionData(GC_BELLE_EVOLUTION_RET)
 void BelleData_UpdateEvolutionData_m34532 (Object_t * __this/* static, unused */, GC_BELLE_EVOLUTION_RET_t2992 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateEvolutionRapidData(GC_BELLE_EVOLUTIONRAPID_RET)
 void BelleData_UpdateEvolutionRapidData_m34533 (Object_t * __this/* static, unused */, GC_BELLE_EVOLUTIONRAPID_RET_t2994 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateGetBelle(GC_RET_GET_BELLE)
 void BelleData_UpdateGetBelle_m34534 (Object_t * __this/* static, unused */, GC_RET_GET_BELLE_t3582 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateBattleData(GC_BELLE_BATTLE_RET)
 void BelleData_UpdateBattleData_m34535 (Object_t * __this/* static, unused */, GC_BELLE_BATTLE_RET_t2996 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateRestData(GC_BELLE_REST_RET)
 void BelleData_UpdateRestData_m34536 (Object_t * __this/* static, unused */, GC_BELLE_REST_RET_t2998 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateActiveMatrixData(GC_BELLE_ACTIVEMATRIX_RET)
 void BelleData_UpdateActiveMatrixData_m34537 (Object_t * __this/* static, unused */, GC_BELLE_ACTIVEMATRIX_RET_t3000 * ___packet, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::AddBelle(System.Int32)
 void BelleData_AddBelle_m34538 (Object_t * __this/* static, unused */, int32_t ___belleID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::CleanBelleTip()
 void BelleData_CleanBelleTip_m34539 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BelleData::GetBelleBigTextureName(GCGame.Table.Tab_Belle)
 String_t* BelleData_GetBelleBigTextureName_m34540 (Object_t * __this/* static, unused */, Tab_Belle_t351 * ___curTabBelle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color BelleData::GetBelleColorByColorLevel(System.Int32)
 Color_t939  BelleData_GetBelleColorByColorLevel_m34541 (Object_t * __this/* static, unused */, int32_t ___colorLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BelleData::GetBelleColorNameByColorLevel(System.Int32)
 String_t* BelleData_GetBelleColorNameByColorLevel_m34542 (Object_t * __this/* static, unused */, int32_t ___colorLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BelleData::GetBelleDescByColorLevel(System.Int32)
 String_t* BelleData_GetBelleDescByColorLevel_m34543 (Object_t * __this/* static, unused */, int32_t ___colorLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BelleData::GetBelleColorPicByColorLevel(System.Int32)
 String_t* BelleData_GetBelleColorPicByColorLevel_m34544 (Object_t * __this/* static, unused */, int32_t ___colorLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BelleData::GetPowerNum(System.Collections.Generic.Dictionary`2<System.Int32,System.Int32>)
 int32_t BelleData_GetPowerNum_m34545 (Object_t * __this/* static, unused */, Dictionary_2_t1116 * ___attrMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BelleData::GetBelleCloseTimeDiff()
 int32_t BelleData_GetBelleCloseTimeDiff_m34546 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BelleData::GetBelleTipCount()
 int32_t BelleData_GetBelleTipCount_m34547 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BelleData::IsAddNewMatrix()
 bool BelleData_IsAddNewMatrix_m34548 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BelleData::IsCanCloseFree()
 bool BelleData_IsCanCloseFree_m34549 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BelleData::GetCanCreateBelleCount()
 int32_t BelleData_GetCanCreateBelleCount_m34550 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BelleData::GetActiveMatrixPowerNum()
 int32_t BelleData_GetActiveMatrixPowerNum_m34551 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::SetLabelNature(UILabel,System.Int32)
 void BelleData_SetLabelNature_m34552 (Object_t * __this/* static, unused */, UILabel_t1176 * ___curLabel, int32_t ___natureValue, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateBelleItemTip(System.Int32,System.Int32)
 void BelleData_UpdateBelleItemTip_m34553 (Object_t * __this/* static, unused */, int32_t ___itemId, int32_t ___itemCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleData::UpdateBelleEvoCountTip(System.Int32,System.Int32)
 void BelleData_UpdateBelleEvoCountTip_m34554 (Object_t * __this/* static, unused */, int32_t ___itemId, int32_t ___itemCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
