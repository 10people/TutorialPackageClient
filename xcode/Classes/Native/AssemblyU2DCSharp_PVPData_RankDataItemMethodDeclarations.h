#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPData/RankDataItem
struct RankDataItem_t4927;
struct RankDataItem_t4927_marshaled;
// System.String
struct String_t;

// System.Void PVPData/RankDataItem::.ctor(System.UInt64,System.String,System.String,System.String,System.String,System.String,System.String)
 void RankDataItem__ctor_m34914 (RankDataItem_t4927 * __this, uint64_t ___Guid, String_t* ___s1, String_t* ___s2, String_t* ___s3, String_t* ___s4, String_t* ___s5, String_t* ___s6, MethodInfo* method) IL2CPP_METHOD_ATTR;
void RankDataItem_t4927_marshal(const RankDataItem_t4927& unmarshaled, RankDataItem_t4927_marshaled& marshaled);
void RankDataItem_t4927_marshal_back(const RankDataItem_t4927_marshaled& marshaled, RankDataItem_t4927& unmarshaled);
void RankDataItem_t4927_marshal_cleanup(RankDataItem_t4927_marshaled& marshaled);
