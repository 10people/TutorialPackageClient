#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Font
struct Font_t5414;
// UnityEngine.Material
struct Material_t133;
// System.String[]
struct StringU5BU5D_t333;
// UnityEngine.Font/FontTextureRebuildCallback
struct FontTextureRebuildCallback_t5952;
// System.String
struct String_t;
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.CharacterInfo
#include "UnityEngine_UnityEngine_CharacterInfo.h"

// UnityEngine.Material UnityEngine.Font::get_material()
 Material_t133 * Font_get_material_m42230 (Font_t5414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::HasCharacter(System.Char)
 bool Font_HasCharacter_m43906 (Font_t5414 * __this, uint16_t ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String[] UnityEngine.Font::get_fontNames()
 StringU5BU5D_t333* Font_get_fontNames_m42235 (Font_t5414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::RequestCharactersInTexture(System.String,System.Int32,UnityEngine.FontStyle)
 void Font_RequestCharactersInTexture_m42236 (Font_t5414 * __this, String_t* ___characters, int32_t ___size, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::InvokeTextureRebuilt_Internal()
 void Font_InvokeTextureRebuilt_Internal_m52104 (Font_t5414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font/FontTextureRebuildCallback UnityEngine.Font::get_textureRebuildCallback()
 FontTextureRebuildCallback_t5952 * Font_get_textureRebuildCallback_m42246 (Font_t5414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Font::set_textureRebuildCallback(UnityEngine.Font/FontTextureRebuildCallback)
 void Font_set_textureRebuildCallback_m42248 (Font_t5414 * __this, FontTextureRebuildCallback_t5952 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::GetCharacterInfo(System.Char,UnityEngine.CharacterInfo&,System.Int32,UnityEngine.FontStyle)
 bool Font_GetCharacterInfo_m42237 (Font_t5414 * __this, uint16_t ___ch, CharacterInfo_t5415 * ___info, int32_t ___size, int32_t ___style, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.Font::get_dynamic()
 bool Font_get_dynamic_m44003 (Font_t5414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.Font::get_fontSize()
 int32_t Font_get_fontSize_m44005 (Font_t5414 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
