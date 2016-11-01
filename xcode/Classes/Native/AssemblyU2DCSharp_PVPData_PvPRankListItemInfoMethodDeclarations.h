#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPData/PvPRankListItemInfo
struct PvPRankListItemInfo_t1917;
struct PvPRankListItemInfo_t1917_marshaled;
// System.String
struct String_t;

// System.Void PVPData/PvPRankListItemInfo::.ctor(System.UInt64,System.String,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void PvPRankListItemInfo__ctor_m34912 (PvPRankListItemInfo_t1917 * __this, uint64_t ____id, String_t* ____name, int32_t ____pos, int32_t ____com, int32_t ____level, int32_t ____profession, int32_t ____zhenqi, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData/PvPRankListItemInfo::Cleanup()
 void PvPRankListItemInfo_Cleanup_m34913 (PvPRankListItemInfo_t1917 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void PvPRankListItemInfo_t1917_marshal(const PvPRankListItemInfo_t1917& unmarshaled, PvPRankListItemInfo_t1917_marshaled& marshaled);
void PvPRankListItemInfo_t1917_marshal_back(const PvPRankListItemInfo_t1917_marshaled& marshaled, PvPRankListItemInfo_t1917& unmarshaled);
void PvPRankListItemInfo_t1917_marshal_cleanup(PvPRankListItemInfo_t1917_marshaled& marshaled);
