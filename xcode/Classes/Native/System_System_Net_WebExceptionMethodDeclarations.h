#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebException
struct WebException_t7216;
// System.String
struct String_t;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Exception
struct Exception_t972;
// System.Net.WebResponse
struct WebResponse_t7078;
// System.Net.WebExceptionStatus
#include "System_System_Net_WebExceptionStatus.h"
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebException::.ctor()
 void WebException__ctor_m50315 (WebException_t7216 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String)
 void WebException__ctor_m50316 (WebException_t7216 * __this, String_t* ___message, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebException__ctor_m50317 (WebException_t7216 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception)
 void WebException__ctor_m50318 (WebException_t7216 * __this, String_t* ___message, Exception_t972 * ___innerException, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Net.WebExceptionStatus)
 void WebException__ctor_m50319 (WebException_t7216 * __this, String_t* ___message, int32_t ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus)
 void WebException__ctor_m50320 (WebException_t7216 * __this, String_t* ___message, Exception_t972 * ___innerException, int32_t ___status, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::.ctor(System.String,System.Exception,System.Net.WebExceptionStatus,System.Net.WebResponse)
 void WebException__ctor_m50321 (WebException_t7216 * __this, String_t* ___message, Exception_t972 * ___innerException, int32_t ___status, WebResponse_t7078 * ___response, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebException_System_Runtime_Serialization_ISerializable_GetObjectData_m50322 (WebException_t7216 * __this, SerializationInfo_t6402 * ___info, StreamingContext_t6414  ___context, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebExceptionStatus System.Net.WebException::get_Status()
 int32_t WebException_get_Status_m50323 (WebException_t7216 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebException::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebException_GetObjectData_m50324 (WebException_t7216 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
