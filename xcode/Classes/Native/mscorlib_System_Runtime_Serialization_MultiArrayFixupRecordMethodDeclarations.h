#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.MultiArrayFixupRecord
struct MultiArrayFixupRecord_t8101;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t8098;
// System.Int32[]
struct Int32U5BU5D_t116;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t8090;

// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32[],System.Runtime.Serialization.ObjectRecord)
 void MultiArrayFixupRecord__ctor_m55676 (MultiArrayFixupRecord_t8101 * __this, ObjectRecord_t8098 * ___objectToBeFixed, Int32U5BU5D_t116* ___indices, ObjectRecord_t8098 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.MultiArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void MultiArrayFixupRecord_FixupImpl_m55677 (MultiArrayFixupRecord_t8101 * __this, ObjectManager_t8090 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
