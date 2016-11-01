#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Runtime.Serialization.ArrayFixupRecord
struct ArrayFixupRecord_t8100;
// System.Runtime.Serialization.ObjectRecord
struct ObjectRecord_t8098;
// System.Runtime.Serialization.ObjectManager
struct ObjectManager_t8090;

// System.Void System.Runtime.Serialization.ArrayFixupRecord::.ctor(System.Runtime.Serialization.ObjectRecord,System.Int32,System.Runtime.Serialization.ObjectRecord)
 void ArrayFixupRecord__ctor_m55674 (ArrayFixupRecord_t8100 * __this, ObjectRecord_t8098 * ___objectToBeFixed, int32_t ___index, ObjectRecord_t8098 * ___objectRequired, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.Serialization.ArrayFixupRecord::FixupImpl(System.Runtime.Serialization.ObjectManager)
 void ArrayFixupRecord_FixupImpl_m55675 (ArrayFixupRecord_t8100 * __this, ObjectManager_t8090 * ___manager, MethodInfo* method) IL2CPP_METHOD_ATTR;
