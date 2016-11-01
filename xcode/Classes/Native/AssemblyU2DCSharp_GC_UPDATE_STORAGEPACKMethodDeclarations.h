#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// GC_UPDATE_STORAGEPACK
struct GC_UPDATE_STORAGEPACK_t3384;
// System.Collections.Generic.IList`1<System.Int32>
struct IList_1_t2927;
// System.Collections.Generic.IList`1<System.UInt64>
struct IList_1_t2926;
// System.Collections.Generic.IList`1<System.Int64>
struct IList_1_t3200;
// Google.ProtocolBuffers.CodedOutputStream
struct CodedOutputStream_t2918;
// PacketDistributed
struct PacketDistributed_t2209;
// Google.ProtocolBuffers.CodedInputStream
struct CodedInputStream_t2919;

// System.Void GC_UPDATE_STORAGEPACK::.ctor()
 void GC_UPDATE_STORAGEPACK__ctor_m24452 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_packtypeList()
 Object_t* GC_UPDATE_STORAGEPACK_get_packtypeList_m24453 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_packtypeCount()
 int32_t GC_UPDATE_STORAGEPACK_get_packtypeCount_m24454 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetPacktype(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetPacktype_m24455 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddPacktype(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddPacktype_m24456 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_packindexList()
 Object_t* GC_UPDATE_STORAGEPACK_get_packindexList_m24457 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_packindexCount()
 int32_t GC_UPDATE_STORAGEPACK_get_packindexCount_m24458 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetPackindex(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetPackindex_m24459 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddPackindex(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddPackindex_m24460 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dataidList()
 Object_t* GC_UPDATE_STORAGEPACK_get_dataidList_m24461 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dataidCount()
 int32_t GC_UPDATE_STORAGEPACK_get_dataidCount_m24462 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDataid(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDataid_m24463 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDataid(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDataid_m24464 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.UInt64> GC_UPDATE_STORAGEPACK::get_guidList()
 Object_t* GC_UPDATE_STORAGEPACK_get_guidList_m24465 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_guidCount()
 int32_t GC_UPDATE_STORAGEPACK_get_guidCount_m24466 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt64 GC_UPDATE_STORAGEPACK::GetGuid(System.Int32)
 uint64_t GC_UPDATE_STORAGEPACK_GetGuid_m24467 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddGuid(System.UInt64)
 void GC_UPDATE_STORAGEPACK_AddGuid_m24468 (GC_UPDATE_STORAGEPACK_t3384 * __this, uint64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_bindflagList()
 Object_t* GC_UPDATE_STORAGEPACK_get_bindflagList_m24469 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_bindflagCount()
 int32_t GC_UPDATE_STORAGEPACK_get_bindflagCount_m24470 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetBindflag(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetBindflag_m24471 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddBindflag(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddBindflag_m24472 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_stackcountList()
 Object_t* GC_UPDATE_STORAGEPACK_get_stackcountList_m24473 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_stackcountCount()
 int32_t GC_UPDATE_STORAGEPACK_get_stackcountCount_m24474 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetStackcount(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetStackcount_m24475 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddStackcount(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddStackcount_m24476 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_enchancelevelList()
 Object_t* GC_UPDATE_STORAGEPACK_get_enchancelevelList_m24477 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_enchancelevelCount()
 int32_t GC_UPDATE_STORAGEPACK_get_enchancelevelCount_m24478 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetEnchancelevel(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetEnchancelevel_m24479 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddEnchancelevel(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddEnchancelevel_m24480 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_starlevelList()
 Object_t* GC_UPDATE_STORAGEPACK_get_starlevelList_m24481 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_starlevelCount()
 int32_t GC_UPDATE_STORAGEPACK_get_starlevelCount_m24482 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetStarlevel(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetStarlevel_m24483 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddStarlevel(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddStarlevel_m24484 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata1List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata1List_m24485 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata1Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata1Count_m24486 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata1(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata1_m24487 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata1(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata1_m24488 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata2List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata2List_m24489 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata2Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata2Count_m24490 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata2(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata2_m24491 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata2(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata2_m24492 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata3List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata3List_m24493 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata3Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata3Count_m24494 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata3(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata3_m24495 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata3(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata3_m24496 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata4List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata4List_m24497 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata4Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata4Count_m24498 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata4(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata4_m24499 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata4(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata4_m24500 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_createtimeList()
 Object_t* GC_UPDATE_STORAGEPACK_get_createtimeList_m24501 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_createtimeCount()
 int32_t GC_UPDATE_STORAGEPACK_get_createtimeCount_m24502 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetCreatetime(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetCreatetime_m24503 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddCreatetime(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddCreatetime_m24504 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_enchanceexpList()
 Object_t* GC_UPDATE_STORAGEPACK_get_enchanceexpList_m24505 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_enchanceexpCount()
 int32_t GC_UPDATE_STORAGEPACK_get_enchanceexpCount_m24506 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetEnchanceexp(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetEnchanceexp_m24507 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddEnchanceexp(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddEnchanceexp_m24508 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int64> GC_UPDATE_STORAGEPACK::get_enchancetotalexpList()
 Object_t* GC_UPDATE_STORAGEPACK_get_enchancetotalexpList_m24509 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_enchancetotalexpCount()
 int32_t GC_UPDATE_STORAGEPACK_get_enchancetotalexpCount_m24510 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 GC_UPDATE_STORAGEPACK::GetEnchancetotalexp(System.Int32)
 int64_t GC_UPDATE_STORAGEPACK_GetEnchancetotalexp_m24511 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddEnchancetotalexp(System.Int64)
 void GC_UPDATE_STORAGEPACK_AddEnchancetotalexp_m24512 (GC_UPDATE_STORAGEPACK_t3384 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_startimesList()
 Object_t* GC_UPDATE_STORAGEPACK_get_startimesList_m24513 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_startimesCount()
 int32_t GC_UPDATE_STORAGEPACK_get_startimesCount_m24514 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetStartimes(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetStartimes_m24515 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddStartimes(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddStartimes_m24516 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata5List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata5List_m24517 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata5Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata5Count_m24518 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata5(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata5_m24519 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata5(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata5_m24520 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata6List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata6List_m24521 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata6Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata6Count_m24522 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata6(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata6_m24523 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata6(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata6_m24524 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata7List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata7List_m24525 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata7Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata7Count_m24526 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata7(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata7_m24527 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata7(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata7_m24528 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.IList`1<System.Int32> GC_UPDATE_STORAGEPACK::get_dynamicdata8List()
 Object_t* GC_UPDATE_STORAGEPACK_get_dynamicdata8List_m24529 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::get_dynamicdata8Count()
 int32_t GC_UPDATE_STORAGEPACK_get_dynamicdata8Count_m24530 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::GetDynamicdata8(System.Int32)
 int32_t GC_UPDATE_STORAGEPACK_GetDynamicdata8_m24531 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::AddDynamicdata8(System.Int32)
 void GC_UPDATE_STORAGEPACK_AddDynamicdata8_m24532 (GC_UPDATE_STORAGEPACK_t3384 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 GC_UPDATE_STORAGEPACK::SerializedSize()
 int32_t GC_UPDATE_STORAGEPACK_SerializedSize_m24533 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void GC_UPDATE_STORAGEPACK::WriteTo(Google.ProtocolBuffers.CodedOutputStream)
 void GC_UPDATE_STORAGEPACK_WriteTo_m24534 (GC_UPDATE_STORAGEPACK_t3384 * __this, CodedOutputStream_t2918 * ___output, MethodInfo* method) IL2CPP_METHOD_ATTR;
// PacketDistributed GC_UPDATE_STORAGEPACK::MergeFrom(Google.ProtocolBuffers.CodedInputStream,PacketDistributed)
 PacketDistributed_t2209 * GC_UPDATE_STORAGEPACK_MergeFrom_m24535 (GC_UPDATE_STORAGEPACK_t3384 * __this, CodedInputStream_t2919 * ___input, PacketDistributed_t2209 * ____base, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean GC_UPDATE_STORAGEPACK::IsInitialized()
 bool GC_UPDATE_STORAGEPACK_IsInitialized_m24536 (GC_UPDATE_STORAGEPACK_t3384 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
