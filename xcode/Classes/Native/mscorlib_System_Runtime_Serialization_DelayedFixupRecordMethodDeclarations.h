#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.DelayedFixupRecord
struct DelayedFixupRecord_t8103;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t8098;
// System.String
struct String_t;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t8090;

// System.Void System.Runtime.Serialization.DelayedFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.String,System.Runtime.Serialization.ObjectRecord)
 void DelayedFixupRecord__ctor_m55680 (DelayedFixupRecord_t8103 * __this, ObjectRecord_t8098 * ___objectToBeFixed, String_t* ___memberName, ObjectRecord_t8098 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.DelayedFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void DelayedFixupRecord_FixupImpl_m55681 (DelayedFixupRecord_t8103 * __this, ObjectManager_t8090 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
