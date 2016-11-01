#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIFont
struct UIFont_t1286;
// BMFont
struct BMFont_t5342;
// System.Collections.Generic.List`1<BMSymbol>
struct List_1_t5413;
// UIAtlas
struct UIAtlas_t1593;
// UnityEngine.Material
struct Material_t133;
// UnityEngine.Texture2D
struct Texture2D_t1041;
// System.String
struct String_t;
// UISpriteData
struct UISpriteData_t5344;
// UnityEngine.Font
struct Font_t5414;
// UnityEngine.Texture
struct Texture_t937;
// System.Text.StringBuilder
struct StringBuilder_t1097;
// BetterList`1<UnityEngine.Vector3>
struct BetterList_1_t5196;
// BetterList`1<UnityEngine.Vector2>
struct BetterList_1_t5197;
// BetterList`1<UnityEngine.Color32>
struct BetterList_1_t5198;
// BMSymbol
struct BMSymbol_t5345;
// UnityEngine.Rect
#include "UnityEngine_UnityEngine_Rect.h"
// UnityEngine.FontStyle
#include "UnityEngine_UnityEngine_FontStyle.h"
// UnityEngine.Vector2
#include "UnityEngine_UnityEngine_Vector2.h"
// UIFont/SymbolStyle
#include "AssemblyU2DCSharp_UIFont_SymbolStyle.h"
// UIFont/Alignment
#include "AssemblyU2DCSharp_UIFont_Alignment.h"
// UnityEngine.Color32
#include "UnityEngine_UnityEngine_Color32.h"

// System.Void UIFont::.ctor()
 void UIFont__ctor_m38286 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMFont UIFont::get_bmFont()
 BMFont_t5342 * UIFont_get_bmFont_m38287 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texWidth()
 int32_t UIFont_get_texWidth_m38288 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_texHeight()
 int32_t UIFont_get_texHeight_m38289 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_hasSymbols()
 bool UIFont_get_hasSymbols_m38290 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<BMSymbol> UIFont::get_symbols()
 List_1_t5413 * UIFont_get_symbols_m38291 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIFont::get_atlas()
 UIAtlas_t1593 * UIFont_get_atlas_m38292 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_atlas(UIAtlas)
 void UIFont_set_atlas_m38293 (UIFont_t1286 * __this, UIAtlas_t1593 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIFont::get_material()
 Material_t133 * UIFont_get_material_m38294 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_material(UnityEngine.Material)
 void UIFont_set_material_m38295 (UIFont_t1286 * __this, Material_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIFont::get_pixelSize()
 float UIFont_get_pixelSize_m38296 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_pixelSize(System.Single)
 void UIFont_set_pixelSize_m38297 (UIFont_t1286 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_premultipliedAlpha()
 bool UIFont_get_premultipliedAlpha_m38298 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture2D UIFont::get_texture()
 Texture2D_t1041 * UIFont_get_texture_m38299 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect UIFont::get_uvRect()
 Rect_t5068  UIFont_get_uvRect_m38300 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_uvRect(UnityEngine.Rect)
 void UIFont_set_uvRect_m38301 (UIFont_t1286 * __this, Rect_t5068  ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::get_spriteName()
 String_t* UIFont_get_spriteName_m38302 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_spriteName(System.String)
 void UIFont_set_spriteName_m38303 (UIFont_t1286 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_horizontalSpacing()
 int32_t UIFont_get_horizontalSpacing_m38304 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_horizontalSpacing(System.Int32)
 void UIFont_set_horizontalSpacing_m38305 (UIFont_t1286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_verticalSpacing()
 int32_t UIFont_get_verticalSpacing_m38306 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_verticalSpacing(System.Int32)
 void UIFont_set_verticalSpacing_m38307 (UIFont_t1286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isValid()
 bool UIFont_get_isValid_m38308 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_size()
 int32_t UIFont_get_size_m38309 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIFont::get_sprite()
 UISpriteData_t5344 * UIFont_get_sprite_m38310 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIFont UIFont::get_replacement()
 UIFont_t1286 * UIFont_get_replacement_m38311 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_replacement(UIFont)
 void UIFont_set_replacement_m38312 (UIFont_t1286 * __this, UIFont_t1286 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::get_isDynamic()
 bool UIFont_get_isDynamic_m38313 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Font UIFont::get_dynamicFont()
 Font_t5414 * UIFont_get_dynamicFont_m38314 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFont(UnityEngine.Font)
 void UIFont_set_dynamicFont_m38315 (UIFont_t1286 * __this, Font_t5414 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIFont::get_dynamicFontSize()
 int32_t UIFont_get_dynamicFontSize_m38316 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontSize(System.Int32)
 void UIFont_set_dynamicFontSize_m38317 (UIFont_t1286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.FontStyle UIFont::get_dynamicFontStyle()
 int32_t UIFont_get_dynamicFontStyle_m38318 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::set_dynamicFontStyle(UnityEngine.FontStyle)
 void UIFont_set_dynamicFontStyle_m38319 (UIFont_t1286 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Trim()
 void UIFont_Trim_m38320 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::References(UIFont)
 bool UIFont_References_m38321 (UIFont_t1286 * __this, UIFont_t1286 * ___font, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::CheckIfRelated(UIFont,UIFont)
 bool UIFont_CheckIfRelated_m38322 (Object_t * __this/* static, unused */, UIFont_t1286 * ___a, UIFont_t1286 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIFont::get_dynamicTexture()
 Texture_t937 * UIFont_get_dynamicTexture_m38323 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::MarkAsDirty()
 void UIFont_MarkAsDirty_m38324 (UIFont_t1286 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Request(System.String)
 void UIFont_Request_m38325 (UIFont_t1286 * __this, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 UIFont::CalculatePrintedSize(System.String,System.Boolean,UIFont/SymbolStyle)
 Vector2_t12  UIFont_CalculatePrintedSize_m38326 (UIFont_t1286 * __this, String_t* ___text, bool ___encoding, int32_t ___symbolStyle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::EndLine(System.Text.StringBuilder&)
 void UIFont_EndLine_m38327 (Object_t * __this/* static, unused */, StringBuilder_t1097 ** ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UIFont::GetEndOfLineThatFits(System.String,System.Single,System.Boolean,UIFont/SymbolStyle)
 String_t* UIFont_GetEndOfLineThatFits_m38328 (UIFont_t1286 * __this, String_t* ___text, float ___maxWidth, bool ___encoding, int32_t ___symbolStyle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Int32,System.Int32,System.Int32,System.Boolean,UIFont/SymbolStyle)
 bool UIFont_WrapText_m38329 (UIFont_t1286 * __this, String_t* ___text, String_t** ___finalText, int32_t ___width, int32_t ___height, int32_t ___maxLines, bool ___encoding, int32_t ___symbolStyle, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Int32,System.Int32,System.Int32,System.Boolean)
 bool UIFont_WrapText_m38330 (UIFont_t1286 * __this, String_t* ___text, String_t** ___finalText, int32_t ___width, int32_t ___height, int32_t ___maxLines, bool ___encoding, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::WrapText(System.String,System.String&,System.Int32,System.Int32,System.Int32)
 bool UIFont_WrapText_m38331 (UIFont_t1286 * __this, String_t* ___text, String_t** ___finalText, int32_t ___width, int32_t ___height, int32_t ___maxLineCount, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Align(BetterList`1<UnityEngine.Vector3>,System.Int32,UIFont/Alignment,System.Int32,System.Int32)
 void UIFont_Align_m38332 (UIFont_t1286 * __this, BetterList_1_t5196 * ___verts, int32_t ___indexOffset, int32_t ___alignment, int32_t ___x, int32_t ___lineWidth, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::Print(System.String,UnityEngine.Color32,BetterList`1<UnityEngine.Vector3>,BetterList`1<UnityEngine.Vector2>,BetterList`1<UnityEngine.Color32>,System.Boolean,UIFont/SymbolStyle,UIFont/Alignment,System.Int32,System.Boolean)
 void UIFont_Print_m38333 (UIFont_t1286 * __this, String_t* ___text, Color32_t5416  ___color, BetterList_1_t5196 * ___verts, BetterList_1_t5197 * ___uvs, BetterList_1_t5198 * ___cols, bool ___encoding, int32_t ___symbolStyle, int32_t ___alignment, int32_t ___lineWidth, bool ___premultiply, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::GetSymbol(System.String,System.Boolean)
 BMSymbol_t5345 * UIFont_GetSymbol_m38334 (UIFont_t1286 * __this, String_t* ___sequence, bool ___createIfMissing, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BMSymbol UIFont::MatchSymbol(System.String,System.Int32,System.Int32)
 BMSymbol_t5345 * UIFont_MatchSymbol_m38335 (UIFont_t1286 * __this, String_t* ___text, int32_t ___offset, int32_t ___textLength, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::AddSymbol(System.String,System.String)
 void UIFont_AddSymbol_m38336 (UIFont_t1286 * __this, String_t* ___sequence, String_t* ___spriteName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RemoveSymbol(System.String)
 void UIFont_RemoveSymbol_m38337 (UIFont_t1286 * __this, String_t* ___sequence, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIFont::RenameSymbol(System.String,System.String)
 void UIFont_RenameSymbol_m38338 (UIFont_t1286 * __this, String_t* ___before, String_t* ___after, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIFont::UsesSprite(System.String)
 bool UIFont_UsesSprite_m38339 (UIFont_t1286 * __this, String_t* ___s, MethodInfo* method) IL2CPP_METHOD_ATTR;
