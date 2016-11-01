#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// VipData
struct VipData_t4985;
// System.String
struct String_t;

// System.Void VipData::.ctor()
 void VipData__ctor_m35701 (VipData_t4985 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipData::.cctor()
 void VipData__cctor_m35702 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetVipLv()
 int32_t VipData_GetVipLv_m35703 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VipData::CanChallengeHigher()
 bool VipData_CanChallengeHigher_m35704 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void VipData::GetVipLevel(System.Int32,System.Int32&,System.Int32&)
 void VipData_GetVipLevel_m35705 (Object_t * __this/* static, unused */, int32_t ___nCost, int32_t* ___rLevel, int32_t* ___rLeft, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VipData::GetStarIconByLevel(System.Int32)
 String_t* VipData_GetStarIconByLevel_m35706 (Object_t * __this/* static, unused */, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VipData::GetVipImage(System.Int32)
 String_t* VipData_GetVipImage_m35707 (Object_t * __this/* static, unused */, int32_t ___nCost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetVipStamina(System.Int32)
 int32_t VipData_GetVipStamina_m35708 (Object_t * __this/* static, unused */, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetDeskIndex(System.Int32)
 int32_t VipData_GetDeskIndex_m35709 (Object_t * __this/* static, unused */, int32_t ___nLevel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetVipCopySceneNum(System.Int32)
 int32_t VipData_GetVipCopySceneNum_m35710 (Object_t * __this/* static, unused */, int32_t ___sceneid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetVipMaxCopySceneNum(System.Int32,System.Int32)
 int32_t VipData_GetVipMaxCopySceneNum_m35711 (Object_t * __this/* static, unused */, int32_t ___sceneid, int32_t ___nCost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean VipData::IsCanSweepCopyScene(System.Int32)
 bool VipData_IsCanSweepCopyScene_m35712 (Object_t * __this/* static, unused */, int32_t ___sceneid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetVipMaxTeamCopySceneNum(System.Int32,System.Int32)
 int32_t VipData_GetVipMaxTeamCopySceneNum_m35713 (Object_t * __this/* static, unused */, int32_t ___sceneid, int32_t ___nCost, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetVipTeamCopySceneNum(System.Int32)
 int32_t VipData_GetVipTeamCopySceneNum_m35714 (Object_t * __this/* static, unused */, int32_t ___sceneid, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String VipData::MakeVipString(System.Int32,System.Int32)
 String_t* VipData_MakeVipString_m35715 (Object_t * __this/* static, unused */, int32_t ___nSceneID, int32_t ___nCopyMode, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 VipData::GetVipSweepYuanBao()
 int32_t VipData_GetVipSweepYuanBao_m35716 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
