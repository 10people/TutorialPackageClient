#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebResponse
struct WebResponse_t7078;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Exception
struct Exception_t972;
// System.IO.Stream
struct Stream_t1038;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebResponse::.ctor()
 void WebResponse__ctor_m50383 (WebResponse_t7078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebResponse__ctor_m50384 (WebResponse_t7078 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.IDisposable.Dispose()
 void WebResponse_System_IDisposable_Dispose_m50385 (WebResponse_t7078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m50386 (WebResponse_t7078 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.WebResponse::get_Headers()
 WebHeaderCollection_t7157 * WebResponse_get_Headers_m50387 (WebResponse_t7078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Exception System.Net.WebResponse::GetMustImplement()
 Exception_t972 * WebResponse_GetMustImplement_m50388 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::Close()
 void WebResponse_Close_m50389 (WebResponse_t7078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.WebResponse::GetResponseStream()
 Stream_t1038 * WebResponse_GetResponseStream_m49302 (WebResponse_t7078 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebResponse_GetObjectData_m50390 (WebResponse_t7078 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
