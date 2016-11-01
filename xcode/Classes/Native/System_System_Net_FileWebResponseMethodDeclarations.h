#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Net.FileWebResponse
struct FileWebResponse_t7177;
// System.Net.WebHeaderCollection
struct WebHeaderCollection_t7157;
// System.Uri
struct Uri_t6735;
// System.IO.FileStream
struct FileStream_t927;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t6402;
// System.IO.Stream
struct Stream_t1038;
// System.Runtime.Serialization.StreamingContext
#include "mscorlib_System_Runtime_Serialization_StreamingContext.h"

// System.Void System.Net.FileWebResponse::.ctor(System.Uri,System.IO.FileStream)
 void FileWebResponse__ctor_m49883 (FileWebResponse_t7177 * __this, Uri_t6735 * ___responseUri, FileStream_t927 * ___fileStream, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebResponse__ctor_m49884 (FileWebResponse_t7177 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.Runtime.Serialization.ISerializable.GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebResponse_System_Runtime_Serialization_ISerializable_GetObjectData_m49885 (FileWebResponse_t7177 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::System.IDisposable.Dispose()
 void FileWebResponse_System_IDisposable_Dispose_m49886 (FileWebResponse_t7177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Net.WebHeaderCollection System.Net.FileWebResponse::get_Headers()
 WebHeaderCollection_t7157 * FileWebResponse_get_Headers_m49887 (FileWebResponse_t7177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
 void FileWebResponse_GetObjectData_m49888 (FileWebResponse_t7177 * __this, SerializationInfo_t6402 * ___serializationInfo, StreamingContext_t6414  ___streamingContext, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.IO.Stream System.Net.FileWebResponse::GetResponseStream()
 Stream_t1038 * FileWebResponse_GetResponseStream_m49889 (FileWebResponse_t7177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Finalize()
 void FileWebResponse_Finalize_m49890 (FileWebResponse_t7177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Close()
 void FileWebResponse_Close_m49891 (FileWebResponse_t7177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::Dispose(System.Boolean)
 void FileWebResponse_Dispose_m49892 (FileWebResponse_t7177 * __this, bool ___disposing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void System.Net.FileWebResponse::CheckDisposed()
 void FileWebResponse_CheckDisposed_m49893 (FileWebResponse_t7177 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
