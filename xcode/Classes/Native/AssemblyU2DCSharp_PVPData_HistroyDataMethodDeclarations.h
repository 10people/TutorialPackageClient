#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// PVPData/HistroyData
struct HistroyData_t4925;
struct HistroyData_t4925_marshaled;
// System.String
struct String_t;

// System.Void PVPData/HistroyData::.ctor(System.UInt64,System.Int32,System.UInt32,System.Int32,System.Int32,System.String)
 void HistroyData__ctor_m34911 (HistroyData_t4925 * __this, uint64_t ____guid, int32_t ____pos, uint32_t ____occurTime, int32_t ____lose, int32_t ____active, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
void HistroyData_t4925_marshal(const HistroyData_t4925& unmarshaled, HistroyData_t4925_marshaled& marshaled);
void HistroyData_t4925_marshal_back(const HistroyData_t4925_marshaled& marshaled, HistroyData_t4925& unmarshaled);
void HistroyData_t4925_marshal_cleanup(HistroyData_t4925_marshaled& marshaled);
