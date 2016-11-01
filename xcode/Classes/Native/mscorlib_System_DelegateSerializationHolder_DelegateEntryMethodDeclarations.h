#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.DelegateSerializationHolder/DelegateEntry
struct DelegateEntry_t8231;
// System.Delegate
struct Delegate_t959;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;

// System.Void System.DelegateSerializationHolder/DelegateEntry::.ctor(System.Delegate,System.String)
 void DelegateEntry__ctor_m56781 (DelegateEntry_t8231 * __this, Delegate_t959 * ___del, String_t* ___targetLabel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Delegate System.DelegateSerializationHolder/DelegateEntry::DeserializeDelegate(System.Runtime.Serialization.SerializationInfo)
 Delegate_t959 * DelegateEntry_DeserializeDelegate_m56782 (DelegateEntry_t8231 * __this, SerializationInfo_t6402 * ___info, MethodInfo* method) IL2CPP_METHOD_ATTR;
