#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPData/OpponentInfo
struct OpponentInfo_t1910;
struct OpponentInfo_t1910_marshaled;
// System.String
struct String_t;
// Games.GlobeDefine.CharacterDefine/PROFESSION
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_PROFESSI.h"

// System.Void PVPData/OpponentInfo::.ctor(System.UInt64,System.String,Games.GlobeDefine.CharacterDefine/PROFESSION,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void OpponentInfo__ctor_m34908 (OpponentInfo_t1910 * __this, uint64_t ____guid, String_t* ____name, int32_t ____profession, int32_t ____level, int32_t ____power, int32_t ____range, int32_t ____winSpirit, int32_t ____loseSpirit, int32_t ____winReputation, int32_t ____loseReputation, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean PVPData/OpponentInfo::IsValid()
 bool OpponentInfo_IsValid_m34909 (OpponentInfo_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void PVPData/OpponentInfo::Clear()
 void OpponentInfo_Clear_m34910 (OpponentInfo_t1910 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void OpponentInfo_t1910_marshal(const OpponentInfo_t1910& unmarshaled, OpponentInfo_t1910_marshaled& marshaled);
void OpponentInfo_t1910_marshal_back(const OpponentInfo_t1910_marshaled& marshaled, OpponentInfo_t1910& unmarshaled);
void OpponentInfo_t1910_marshal_cleanup(OpponentInfo_t1910_marshaled& marshaled);
