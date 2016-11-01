#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo
struct CallbackInfo_t6901;
// System.Xml.Serialization.XmlSerializationWriterInterpreter
struct XmlSerializationWriterInterpreter_t6900;
// System.Xml.Serialization.XmlTypeMapping
struct XmlTypeMapping_t6835;
// System.Object
struct Object_t;

// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::.ctor(System.Xml.Serialization.XmlSerializationWriterInterpreter,System.Xml.Serialization.XmlTypeMapping)
 void CallbackInfo__ctor_m47451 (CallbackInfo_t6901 * __this, XmlSerializationWriterInterpreter_t6900 * ___swi, XmlTypeMapping_t6835 * ___typeMap, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::WriteObject(System.Object)
 void CallbackInfo_WriteObject_m47452 (CallbackInfo_t6901 * __this, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.Serialization.XmlSerializationWriterInterpreter/CallbackInfo::WriteEnum(System.Object)
 void CallbackInfo_WriteEnum_m47453 (CallbackInfo_t6901 * __this, Object_t * ___ob, MethodInfo* method) IL2CPP_METHOD_ATTR;
