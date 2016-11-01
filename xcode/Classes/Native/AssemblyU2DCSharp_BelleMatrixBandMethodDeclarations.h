#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BelleMatrixBand
struct BelleMatrixBand_t1873;
// SelectBelleData
struct SelectBelleData_t1874;
// System.Collections.Generic.List`1<System.Int32>
struct List_1_t90;
// System.String
struct String_t;
// System.Collections.Generic.List`1<RecommondBelleData>
struct List_1_t1871;
// System.Collections.Generic.List`1<SelectBelleData>
struct List_1_t1872;

// System.Void BelleMatrixBand::.ctor()
 void BelleMatrixBand__ctor_m12345 (BelleMatrixBand_t1873 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixBand::.cctor()
 void BelleMatrixBand__cctor_m12346 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BelleMatrixBand BelleMatrixBand::Instance()
 BelleMatrixBand_t1873 * BelleMatrixBand_Instance_m12347 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// SelectBelleData BelleMatrixBand::get_SelectBelleData()
 SelectBelleData_t1874 * BelleMatrixBand_get_SelectBelleData_m12348 (BelleMatrixBand_t1873 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixBand::set_SelectBelleData(SelectBelleData)
 void BelleMatrixBand_set_SelectBelleData_m12349 (BelleMatrixBand_t1873 * __this, SelectBelleData_t1874 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixBand::Start()
 void BelleMatrixBand_Start_m12350 (BelleMatrixBand_t1873 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BelleMatrixBand::SetMatrixInfo(System.Int32)
 bool BelleMatrixBand_SetMatrixInfo_m12351 (BelleMatrixBand_t1873 * __this, int32_t ___matrixID, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<System.Int32> BelleMatrixBand::GetLayOutByMatrixLayout(System.String)
 List_1_t90 * BelleMatrixBand_GetLayOutByMatrixLayout_m12352 (BelleMatrixBand_t1873 * __this, String_t* ___layOut, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<RecommondBelleData> BelleMatrixBand::GetRecommondBellesByBelleId(System.Collections.Generic.List`1<System.Int32>)
 List_1_t1871 * BelleMatrixBand_GetRecommondBellesByBelleId_m12353 (BelleMatrixBand_t1873 * __this, List_1_t90 * ___belleIds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SelectBelleData> BelleMatrixBand::GetSelectBellelistByBelleIds(System.Collections.Generic.List`1<System.Int32>)
 List_1_t1872 * BelleMatrixBand_GetSelectBellelistByBelleIds_m12354 (BelleMatrixBand_t1873 * __this, List_1_t90 * ___belleIds, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<SelectBelleData> BelleMatrixBand::GetSelectBelleListByBelleId()
 List_1_t1872 * BelleMatrixBand_GetSelectBelleListByBelleId_m12355 (BelleMatrixBand_t1873 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixBand::OnMatrixButtonClick(System.Int32)
 void BelleMatrixBand_OnMatrixButtonClick_m12356 (BelleMatrixBand_t1873 * __this, int32_t ___matrixIndex, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BelleMatrixBand::SelectRoleToMatrix(System.Int32,System.Boolean)
 void BelleMatrixBand_SelectRoleToMatrix_m12357 (BelleMatrixBand_t1873 * __this, int32_t ___belleID, bool ___isMatrix, MethodInfo* method) IL2CPP_METHOD_ATTR;
