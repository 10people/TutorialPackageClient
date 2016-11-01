#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.WWW
struct WWW_t1517;
// System.Collections.Generic.Dictionary`2<System.String,System.String>
struct Dictionary_2_t908;
// System.String
struct String_t;
// System.Text.Encoding
struct Encoding_t1037;
// System.Byte[]
struct ByteU5BU5D_t1033;
// UnityEngine.Texture2D
struct Texture2D_t1041;
// UnityEngine.AssetBundle
struct AssetBundle_t2010;
// UnityEngine.WWWForm
struct WWWForm_t5357;
// System.String[]
struct StringU5BU5D_t333;
// System.Collections.Hashtable
struct Hashtable_t4372;

// System.Void UnityEngine.WWW::.ctor(System.String)
 void WWW__ctor_m39450 (WWW_t1517 * __this, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,UnityEngine.WWWForm)
 void WWW__ctor_m42094 (WWW_t1517 * __this, String_t* ___url, WWWForm_t5357 * ___form, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Byte[])
 void WWW__ctor_m40682 (WWW_t1517 * __this, String_t* ___url, ByteU5BU5D_t1033* ___postData, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::.ctor(System.String,System.Int32,System.UInt32)
 void WWW__ctor_m51681 (WWW_t1517 * __this, String_t* ___url, int32_t ___version, uint32_t ___crc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.WWW::FlattenedHeadersFrom(System.Collections.Hashtable)
 StringU5BU5D_t333* WWW_FlattenedHeadersFrom_m51682 (Object_t * __this/* static, unused */, Hashtable_t4372 * ___headers, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::ParseHTTPHeaderString(System.String)
 Dictionary_2_t908 * WWW_ParseHTTPHeaderString_m51683 (Object_t * __this/* static, unused */, String_t* ___input, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Dispose()
 void WWW_Dispose_m40222 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::Finalize()
 void WWW_Finalize_m51684 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::DestroyWWW(System.Boolean)
 void WWW_DestroyWWW_m51685 (WWW_t1517 * __this, bool ___cancel, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.WWW::InitWWW(System.String,System.Byte[],System.String[])
 void WWW_InitWWW_m51686 (WWW_t1517 * __this, String_t* ___url, ByteU5BU5D_t1033* ___postData, StringU5BU5D_t333* ___iHeaders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.Dictionary`2<System.String,System.String> UnityEngine.WWW::get_responseHeaders()
 Dictionary_2_t908 * WWW_get_responseHeaders_m51687 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_responseHeadersString()
 String_t* WWW_get_responseHeadersString_m51688 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_text()
 String_t* WWW_get_text_m39454 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::get_DefaultEncoding()
 Encoding_t1037 * WWW_get_DefaultEncoding_m51689 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.Encoding UnityEngine.WWW::GetTextEncoder()
 Encoding_t1037 * WWW_GetTextEncoder_m51690 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] UnityEngine.WWW::get_bytes()
 ByteU5BU5D_t1033* WWW_get_bytes_m40249 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.WWW::get_error()
 String_t* WWW_get_error_m39451 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::GetTexture(System.Boolean)
 Texture2D_t1041 * WWW_GetTexture_m51691 (WWW_t1517 * __this, bool ___markNonReadable, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UnityEngine.WWW::get_texture()
 Texture2D_t1041 * WWW_get_texture_m41939 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.WWW::get_isDone()
 bool WWW_get_isDone_m40475 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.WWW::get_bytesDownloaded()
 int32_t WWW_get_bytesDownloaded_m40699 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AssetBundle UnityEngine.WWW::get_assetBundle()
 AssetBundle_t2010 * WWW_get_assetBundle_m40219 (WWW_t1517 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32)
 WWW_t1517 * WWW_LoadFromCacheOrDownload_m40218 (Object_t * __this/* static, unused */, String_t* ___url, int32_t ___version, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW UnityEngine.WWW::LoadFromCacheOrDownload(System.String,System.Int32,System.UInt32)
 WWW_t1517 * WWW_LoadFromCacheOrDownload_m51692 (Object_t * __this/* static, unused */, String_t* ___url, int32_t ___version, uint32_t ___crc, MethodInfo* method) IL2CPP_METHOD_ATTR;
