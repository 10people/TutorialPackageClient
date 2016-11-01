#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// HuaShanPVPData/OpponentViewInfo
struct OpponentViewInfo_t4890;
struct OpponentViewInfo_t4890_marshaled;
// System.String
struct String_t;
// Games.GlobeDefine.CharacterDefine/PROFESSION
#include "AssemblyU2DCSharp_Games_GlobeDefine_CharacterDefine_PROFESSI.h"

// System.Void HuaShanPVPData/OpponentViewInfo::.ctor(System.UInt64,System.String,Games.GlobeDefine.CharacterDefine/PROFESSION,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32,System.Int32)
 void OpponentViewInfo__ctor_m34691 (OpponentViewInfo_t4890 * __this, uint64_t ____guid, String_t* ____name, int32_t ____profession, int32_t ____level, int32_t ____combat, int32_t ____pos, int32_t ____hp, int32_t ____mp, int32_t ____atk, int32_t ____def, int32_t ____cri, int32_t ____spd, int32_t ____dge, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void HuaShanPVPData/OpponentViewInfo::Clean()
 void OpponentViewInfo_Clean_m34692 (OpponentViewInfo_t4890 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void OpponentViewInfo_t4890_marshal(const OpponentViewInfo_t4890& unmarshaled, OpponentViewInfo_t4890_marshaled& marshaled);
void OpponentViewInfo_t4890_marshal_back(const OpponentViewInfo_t4890_marshaled& marshaled, OpponentViewInfo_t4890& unmarshaled);
void OpponentViewInfo_t4890_marshal_cleanup(OpponentViewInfo_t4890_marshaled& marshaled);
