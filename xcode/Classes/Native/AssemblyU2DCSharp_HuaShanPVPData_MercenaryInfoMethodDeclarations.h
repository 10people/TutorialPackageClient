#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HuaShanPVPData/MercenaryInfo
struct MercenaryInfo_t1904;
struct MercenaryInfo_t1904_marshaled;
// System.String
struct String_t;

// System.Void HuaShanPVPData/MercenaryInfo::.ctor(System.UInt64,System.String,System.Int32,System.Int32,System.Int32,System.Int32)
 void MercenaryInfo__ctor_m34694 (MercenaryInfo_t1904 * __this, uint64_t ____guid, String_t* ____name, int32_t ____relationship, int32_t ____cost, int32_t ___pro, int32_t ___com, MethodInfo* method) IL2CPP_METHOD_ATTR;
void MercenaryInfo_t1904_marshal(const MercenaryInfo_t1904& unmarshaled, MercenaryInfo_t1904_marshaled& marshaled);
void MercenaryInfo_t1904_marshal_back(const MercenaryInfo_t1904_marshaled& marshaled, MercenaryInfo_t1904& unmarshaled);
void MercenaryInfo_t1904_marshal_cleanup(MercenaryInfo_t1904_marshaled& marshaled);
