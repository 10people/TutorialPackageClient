#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.IPv6Address
struct IPv6Address_t7205;
// System.UInt16[]
struct UInt16U5BU5D_t7204;
// System.String
struct String_t;
// System.Object
struct Object_t;

// System.Void System.Net.IPv6Address::.ctor(System.UInt16[])
 void IPv6Address__ctor_m50119 (IPv6Address_t7205 * __this, UInt16U5BU5D_t7204* ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32)
 void IPv6Address__ctor_m50120 (IPv6Address_t7205 * __this, UInt16U5BU5D_t7204* ___addr, int32_t ___prefixLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.ctor(System.UInt16[],System.Int32,System.Int32)
 void IPv6Address__ctor_m50121 (IPv6Address_t7205 * __this, UInt16U5BU5D_t7204* ___addr, int32_t ___prefixLength, int32_t ___scopeId, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::.cctor()
 void IPv6Address__cctor_m50122 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.IPv6Address System.Net.IPv6Address::Parse(System.String)
 IPv6Address_t7205 * IPv6Address_Parse_m50123 (Object_t * __this/* static, unused */, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Fill(System.UInt16[],System.String)
 int32_t IPv6Address_Fill_m50124 (Object_t * __this/* static, unused */, UInt16U5BU5D_t7204* ___addr, String_t* ___ipString, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Int32&)
 bool IPv6Address_TryParse_m50125 (Object_t * __this/* static, unused */, String_t* ___prefix, int32_t* ___res, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::TryParse(System.String,System.Net.IPv6Address&)
 bool IPv6Address_TryParse_m50126 (Object_t * __this/* static, unused */, String_t* ___ipString, IPv6Address_t7205 ** ___result, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16[] System.Net.IPv6Address::get_Address()
 UInt16U5BU5D_t7204* IPv6Address_get_Address_m50127 (IPv6Address_t7205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 System.Net.IPv6Address::get_ScopeId()
 int64_t IPv6Address_get_ScopeId_m50128 (IPv6Address_t7205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.IPv6Address::set_ScopeId(System.Int64)
 void IPv6Address_set_ScopeId_m50129 (IPv6Address_t7205 * __this, int64_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsLoopback(System.Net.IPv6Address)
 bool IPv6Address_IsLoopback_m50130 (Object_t * __this/* static, unused */, IPv6Address_t7205 * ___addr, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt16 System.Net.IPv6Address::SwapUShort(System.UInt16)
 uint16_t IPv6Address_SwapUShort_m50131 (Object_t * __this/* static, unused */, uint16_t ___number, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::AsIPv4Int()
 int32_t IPv6Address_AsIPv4Int_m50132 (IPv6Address_t7205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Compatible()
 bool IPv6Address_IsIPv4Compatible_m50133 (IPv6Address_t7205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::IsIPv4Mapped()
 bool IPv6Address_IsIPv4Mapped_m50134 (IPv6Address_t7205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString()
 String_t* IPv6Address_ToString_m50135 (IPv6Address_t7205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Net.IPv6Address::ToString(System.Boolean)
 String_t* IPv6Address_ToString_m50136 (IPv6Address_t7205 * __this, bool ___fullLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.IPv6Address::Equals(System.Object)
 bool IPv6Address_Equals_m50137 (IPv6Address_t7205 * __this, Object_t * ___other, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::GetHashCode()
 int32_t IPv6Address_GetHashCode_m50138 (IPv6Address_t7205 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Net.IPv6Address::Hash(System.Int32,System.Int32,System.Int32,System.Int32)
 int32_t IPv6Address_Hash_m50139 (Object_t * __this/* static, unused */, int32_t ___i, int32_t ___j, int32_t ___k, int32_t ___l, MethodInfo* method) IL2CPP_METHOD_ATTR;
