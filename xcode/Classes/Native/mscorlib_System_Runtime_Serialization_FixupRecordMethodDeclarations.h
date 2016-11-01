#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.FixupRecord
struct FixupRecord_t8102;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t8098;
// System.Reflection.MemberInfo
struct MemberInfo_t1069;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t8090;

// System.Void System.Runtime.Serialization.FixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Reflection.MemberInfo,System.Runtime.Serialization.ObjectRecord)
 void FixupRecord__ctor_m55678 (FixupRecord_t8102 * __this, ObjectRecord_t8098 * ___objectToBeFixed, MemberInfo_t1069 * ___member, ObjectRecord_t8098 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.FixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void FixupRecord_FixupImpl_m55679 (FixupRecord_t8102 * __this, ObjectManager_t8090 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
