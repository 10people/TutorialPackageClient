#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.RenderTexture
struct RenderTexture_t940;
// UnityEngine.RenderTextureFormat
#include "UnityEngine_UnityEngine_RenderTextureFormat.h"
// UnityEngine.RenderTextureReadWrite
#include "UnityEngine_UnityEngine_RenderTextureReadWrite.h"

// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
 void RenderTexture__ctor_m6555 (RenderTexture_t940 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::.ctor(System.Int32,System.Int32,System.Int32)
 void RenderTexture__ctor_m38654 (RenderTexture_t940 * __this, int32_t ___width, int32_t ___height, int32_t ___depth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_CreateRenderTexture(UnityEngine.RenderTexture)
 void RenderTexture_Internal_CreateRenderTexture_m52085 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___rt, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat,UnityEngine.RenderTextureReadWrite,System.Int32)
 RenderTexture_t940 * RenderTexture_GetTemporary_m52086 (Object_t * __this/* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, int32_t ___readWrite, int32_t ___antiAliasing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32,UnityEngine.RenderTextureFormat)
 RenderTexture_t940 * RenderTexture_GetTemporary_m41048 (Object_t * __this/* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, int32_t ___format, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTexture UnityEngine.RenderTexture::GetTemporary(System.Int32,System.Int32,System.Int32)
 RenderTexture_t940 * RenderTexture_GetTemporary_m38656 (Object_t * __this/* static, unused */, int32_t ___width, int32_t ___height, int32_t ___depthBuffer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::ReleaseTemporary(UnityEngine.RenderTexture)
 void RenderTexture_ReleaseTemporary_m38658 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___temp, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetWidth(UnityEngine.RenderTexture)
 int32_t RenderTexture_Internal_GetWidth_m52087 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetWidth(UnityEngine.RenderTexture,System.Int32)
 void RenderTexture_Internal_SetWidth_m52088 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___mono, int32_t ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::Internal_GetHeight(UnityEngine.RenderTexture)
 int32_t RenderTexture_Internal_GetHeight_m52089 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___mono, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetHeight(UnityEngine.RenderTexture,System.Int32)
 void RenderTexture_Internal_SetHeight_m52090 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___mono, int32_t ___width, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Internal_SetSRGBReadWrite(UnityEngine.RenderTexture,System.Boolean)
 void RenderTexture_Internal_SetSRGBReadWrite_m52091 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___mono, bool ___sRGB, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_width()
 int32_t RenderTexture_get_width_m38652 (RenderTexture_t940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_width(System.Int32)
 void RenderTexture_set_width_m52092 (RenderTexture_t940 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.RenderTexture::get_height()
 int32_t RenderTexture_get_height_m38653 (RenderTexture_t940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_height(System.Int32)
 void RenderTexture_set_height_m52093 (RenderTexture_t940 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_depth(System.Int32)
 void RenderTexture_set_depth_m52094 (RenderTexture_t940 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_isPowerOfTwo(System.Boolean)
 void RenderTexture_set_isPowerOfTwo_m41730 (RenderTexture_t940 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.RenderTextureFormat UnityEngine.RenderTexture::get_format()
 int32_t RenderTexture_get_format_m41047 (RenderTexture_t940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_format(UnityEngine.RenderTextureFormat)
 void RenderTexture_set_format_m52095 (RenderTexture_t940 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_antiAliasing(System.Int32)
 void RenderTexture_set_antiAliasing_m40176 (RenderTexture_t940 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::Release()
 void RenderTexture_Release_m41051 (RenderTexture_t940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_Release(UnityEngine.RenderTexture)
 void RenderTexture_INTERNAL_CALL_Release_m52096 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::DiscardContents()
 void RenderTexture_DiscardContents_m41052 (RenderTexture_t940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_DiscardContents(UnityEngine.RenderTexture)
 void RenderTexture_INTERNAL_CALL_DiscardContents_m52097 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::MarkRestoreExpected()
 void RenderTexture_MarkRestoreExpected_m38657 (RenderTexture_t940 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::INTERNAL_CALL_MarkRestoreExpected(UnityEngine.RenderTexture)
 void RenderTexture_INTERNAL_CALL_MarkRestoreExpected_m52098 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___self, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.RenderTexture::set_active(UnityEngine.RenderTexture)
 void RenderTexture_set_active_m42361 (Object_t * __this/* static, unused */, RenderTexture_t940 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
