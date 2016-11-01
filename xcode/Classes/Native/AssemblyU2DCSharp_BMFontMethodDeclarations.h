#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// BMFont
struct BMFont_t5342;
// System.String
struct String_t;
// BMGlyph
struct BMGlyph_t5343;

// System.Void BMFont::.ctor()
 void BMFont__ctor_m37784 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean BMFont::get_isValid()
 bool BMFont_get_isValid_m37785 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_charSize()
 int32_t BMFont_get_charSize_m37786 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_charSize(System.Int32)
 void BMFont_set_charSize_m37787 (BMFont_t5342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_baseOffset()
 int32_t BMFont_get_baseOffset_m37788 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_baseOffset(System.Int32)
 void BMFont_set_baseOffset_m37789 (BMFont_t5342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texWidth()
 int32_t BMFont_get_texWidth_m37790 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texWidth(System.Int32)
 void BMFont_set_texWidth_m37791 (BMFont_t5342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_texHeight()
 int32_t BMFont_get_texHeight_m37792 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_texHeight(System.Int32)
 void BMFont_set_texHeight_m37793 (BMFont_t5342 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 BMFont::get_glyphCount()
 int32_t BMFont_get_glyphCount_m37794 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String BMFont::get_spriteName()
 String_t* BMFont_get_spriteName_m37795 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::set_spriteName(System.String)
 void BMFont_set_spriteName_m37796 (BMFont_t5342 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32,System.Boolean)
 BMGlyph_t5343 * BMFont_GetGlyph_m37797 (BMFont_t5342 * __this, int32_t ___index, bool ___createIfMissing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMGlyph BMFont::GetGlyph(System.Int32)
 BMGlyph_t5343 * BMFont_GetGlyph_m37798 (BMFont_t5342 * __this, int32_t ___index, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Clear()
 void BMFont_Clear_m37799 (BMFont_t5342 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void BMFont::Trim(System.Int32,System.Int32,System.Int32,System.Int32)
 void BMFont_Trim_m37800 (BMFont_t5342 * __this, int32_t ___xMin, int32_t ___yMin, int32_t ___xMax, int32_t ___yMax, MethodInfo* method) IL2CPP_METHOD_ATTR;
