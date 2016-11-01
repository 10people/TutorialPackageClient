#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Graphics
struct Graphics_t7572;
// UnityEngine.Texture
struct Texture_t937;
// UnityEngine.RenderTexture
struct RenderTexture_t940;
// UnityEngine.Material
struct Material_t133;

// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture)
 void Graphics_Blit_m38655 (Object_t * __this/* static, unused */, Texture_t937 * ___source, RenderTexture_t940 * ___dest, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material)
 void Graphics_Blit_m38660 (Object_t * __this/* static, unused */, Texture_t937 * ___source, RenderTexture_t940 * ___dest, Material_t133 * ___mat, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Blit(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32)
 void Graphics_Blit_m41049 (Object_t * __this/* static, unused */, Texture_t937 * ___source, RenderTexture_t940 * ___dest, Material_t133 * ___mat, int32_t ___pass, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Graphics::Internal_BlitMaterial(UnityEngine.Texture,UnityEngine.RenderTexture,UnityEngine.Material,System.Int32,System.Boolean)
 void Graphics_Internal_BlitMaterial_m52065 (Object_t * __this/* static, unused */, Texture_t937 * ___source, RenderTexture_t940 * ___dest, Material_t133 * ___mat, int32_t ___pass, bool ___setRT, MethodInfo* method) IL2CPP_METHOD_ATTR;
