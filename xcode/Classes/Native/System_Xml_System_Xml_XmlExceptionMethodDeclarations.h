#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Xml.XmlException
struct XmlException_t6940;
// System.String
struct String_t;
// System.Exception
struct Exception_t972;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Xml.IXmlLineInfo
struct IXmlLineInfo_t6649;
// System.Object
struct Object_t;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Xml.XmlException::.ctor()
 void XmlException__ctor_m48291 (XmlException_t6940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception)
 void XmlException__ctor_m48292 (XmlException_t6940 * __this, String_t* ___message, Exception_t972 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void XmlException__ctor_m48293 (XmlException_t6940 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String)
 void XmlException__ctor_m48294 (XmlException_t6940 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.String,System.String)
 void XmlException__ctor_m48295 (XmlException_t6940 * __this, Object_t * ___li, String_t* ___sourceUri, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.Xml.IXmlLineInfo,System.Exception,System.String,System.String)
 void XmlException__ctor_m48296 (XmlException_t6940 * __this, Object_t * ___li, Exception_t972 * ___innerException, String_t* ___sourceUri, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Exception,System.Int32,System.Int32)
 void XmlException__ctor_m48297 (XmlException_t6940 * __this, String_t* ___message, Exception_t972 * ___innerException, int32_t ___lineNumber, int32_t ___linePosition, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::.ctor(System.String,System.Int32,System.Int32,System.Object,System.String,System.Exception)
 void XmlException__ctor_m48298 (XmlException_t6940 * __this, String_t* ___message, int32_t ___lineNumber, int32_t ___linePosition, Object_t * ___sourceObject, String_t* ___sourceUri, Exception_t972 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::GetMessage(System.String,System.String,System.Int32,System.Int32,System.Object)
 String_t* XmlException_GetMessage_m48299 (Object_t * __this/* static, unused */, String_t* ___message, String_t* ___sourceUri, int32_t ___lineNumber, int32_t ___linePosition, Object_t * ___sourceObj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String System.Xml.XmlException::get_Message()
 String_t* XmlException_get_Message_m48300 (XmlException_t6940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Xml.XmlException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void XmlException_GetObjectData_m48301 (XmlException_t6940 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
