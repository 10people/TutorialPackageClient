#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.WebProxy
struct WebProxy_t7219;
// System.Net.ICredentials
struct ICredentials_t7041;
// System.Uri
struct Uri_t6735;
// System.String[]
struct StringU5BU5D_t333;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.WebProxy::.ctor()
 void WebProxy__ctor_m50353 (WebProxy_t7219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Uri,System.Boolean,System.String[],System.Net.ICredentials)
 void WebProxy__ctor_m50354 (WebProxy_t7219 * __this, Uri_t6735 * ___address, bool ___bypassOnLocal, StringU5BU5D_t333* ___bypassList, Object_t * ___credentials, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy__ctor_m50355 (WebProxy_t7219 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_System_Runtime_Serialization_ISerializable_GetObjectData_m50356 (WebProxy_t7219 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.ICredentials System.Net.WebProxy::get_Credentials()
 Object_t * WebProxy_get_Credentials_m50357 (WebProxy_t7219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::get_UseDefaultCredentials()
 bool WebProxy_get_UseDefaultCredentials_m50358 (WebProxy_t7219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Uri System.Net.WebProxy::GetProxy(System.Uri)
 Uri_t6735 * WebProxy_GetProxy_m50359 (WebProxy_t7219 * __this, Uri_t6735 * ___destination, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean System.Net.WebProxy::IsBypassed(System.Uri)
 bool WebProxy_IsBypassed_m50360 (WebProxy_t7219 * __this, Uri_t6735 * ___host, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void WebProxy_GetObjectData_m50361 (WebProxy_t7219 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.WebProxy::CheckBypassList()
 void WebProxy_CheckBypassList_m50362 (WebProxy_t7219 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
