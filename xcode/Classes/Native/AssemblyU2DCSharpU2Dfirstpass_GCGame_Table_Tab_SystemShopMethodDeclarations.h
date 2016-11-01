#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GCGame.Table.Tab_SystemShop
struct Tab_SystemShop_t679;
// System.String
struct String_t;
// System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>
struct Dictionary_2_t335;
// System.String[]
struct StringU5BU5D_t333;

// System.Void GCGame.Table.Tab_SystemShop::.ctor()
 void Tab_SystemShop__ctor_m3525 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_SystemShop::GetInstanceFile()
 String_t* Tab_SystemShop_GetInstanceFile_m3526 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::get_CanBuyBack()
 int32_t Tab_SystemShop_get_CanBuyBack_m3527 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::get_CanBuyMulty()
 int32_t Tab_SystemShop_get_CanBuyMulty_m3528 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::getDiscountCount()
 int32_t Tab_SystemShop_getDiscountCount_m3529 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::GetDiscountbyIndex(System.Int32)
 int32_t Tab_SystemShop_GetDiscountbyIndex_m3530 (Tab_SystemShop_t679 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::get_Id()
 int32_t Tab_SystemShop_get_Id_m3531 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::getIsBindCount()
 int32_t Tab_SystemShop_getIsBindCount_m3532 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::GetIsBindbyIndex(System.Int32)
 int32_t Tab_SystemShop_GetIsBindbyIndex_m3533 (Tab_SystemShop_t679 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::get_IsDynamic()
 int32_t Tab_SystemShop_get_IsDynamic_m3534 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::getMoneySubTypeCount()
 int32_t Tab_SystemShop_getMoneySubTypeCount_m3535 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::GetMoneySubTypebyIndex(System.Int32)
 int32_t Tab_SystemShop_GetMoneySubTypebyIndex_m3536 (Tab_SystemShop_t679 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::getMoneyTypeCount()
 int32_t Tab_SystemShop_getMoneyTypeCount_m3537 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::GetMoneyTypebyIndex(System.Int32)
 int32_t Tab_SystemShop_GetMoneyTypebyIndex_m3538 (Tab_SystemShop_t679 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String GCGame.Table.Tab_SystemShop::get_Name()
 String_t* Tab_SystemShop_get_Name_m3539 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::getNumPerGroupCount()
 int32_t Tab_SystemShop_getNumPerGroupCount_m3540 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::GetNumPerGroupbyIndex(System.Int32)
 int32_t Tab_SystemShop_GetNumPerGroupbyIndex_m3541 (Tab_SystemShop_t679 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::getPidCount()
 int32_t Tab_SystemShop_getPidCount_m3542 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::GetPidbyIndex(System.Int32)
 int32_t Tab_SystemShop_GetPidbyIndex_m3543 (Tab_SystemShop_t679 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::get_Pnum()
 int32_t Tab_SystemShop_get_Pnum_m3544 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::getPriceCount()
 int32_t Tab_SystemShop_getPriceCount_m3545 (Tab_SystemShop_t679 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GCGame.Table.Tab_SystemShop::GetPricebyIndex(System.Int32)
 int32_t Tab_SystemShop_GetPricebyIndex_m3546 (Tab_SystemShop_t679 * __this, int32_t ___idx, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GCGame.Table.Tab_SystemShop::LoadTable(System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 bool Tab_SystemShop_LoadTable_m3547 (Object_t * __this/* static, unused */, Dictionary_2_t335 * ____tab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GCGame.Table.Tab_SystemShop::SerializableTable(System.String[],System.Int32,System.Collections.Generic.Dictionary`2<System.Int32,System.Collections.Generic.List`1<System.Object>>)
 void Tab_SystemShop_SerializableTable_m3548 (Object_t * __this/* static, unused */, StringU5BU5D_t333* ___valuesList, int32_t ___skey, Dictionary_2_t335 * ____hash, MethodInfo* method) IL2CPP_METHOD_ATTR;
