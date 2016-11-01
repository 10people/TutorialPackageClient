#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UIAtlas
struct UIAtlas_t1593;
// UnityEngine.Material
struct Material_t133;
// System.Collections.Generic.List`1<UISpriteData>
struct List_1_t5394;
// UnityEngine.Texture
struct Texture_t937;
// UISpriteData
struct UISpriteData_t5344;
// System.String
struct String_t;
// BetterList`1<System.String>
struct BetterList_1_t5397;

// System.Void UIAtlas::.ctor()
 void UIAtlas__ctor_m38221 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Material UIAtlas::get_spriteMaterial()
 Material_t133 * UIAtlas_get_spriteMaterial_m38222 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteMaterial(UnityEngine.Material)
 void UIAtlas_set_spriteMaterial_m38223 (UIAtlas_t1593 * __this, Material_t133 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::get_premultipliedAlpha()
 bool UIAtlas_get_premultipliedAlpha_m38224 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<UISpriteData> UIAtlas::get_spriteList()
 List_1_t5394 * UIAtlas_get_spriteList_m38225 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_spriteList(System.Collections.Generic.List`1<UISpriteData>)
 void UIAtlas_set_spriteList_m38226 (UIAtlas_t1593 * __this, List_1_t5394 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Texture UIAtlas::get_texture()
 Texture_t937 * UIAtlas_get_texture_m38227 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_pixelSize()
 float UIAtlas_get_pixelSize_m38228 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_pixelSize(System.Single)
 void UIAtlas_set_pixelSize_m38229 (UIAtlas_t1593 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UIAtlas::get_scale()
 float UIAtlas_get_scale_m38230 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_scale(System.Single)
 void UIAtlas_set_scale_m38231 (UIAtlas_t1593 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UIAtlas UIAtlas::get_replacement()
 UIAtlas_t1593 * UIAtlas_get_replacement_m38232 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::set_replacement(UIAtlas)
 void UIAtlas_set_replacement_m38233 (UIAtlas_t1593 * __this, UIAtlas_t1593 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISpriteData UIAtlas::GetSprite(System.String)
 UISpriteData_t5344 * UIAtlas_GetSprite_m38234 (UIAtlas_t1593 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::SortAlphabetically()
 void UIAtlas_SortAlphabetically_m38235 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites()
 BetterList_1_t5397 * UIAtlas_GetListOfSprites_m38236 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// BetterList`1<System.String> UIAtlas::GetListOfSprites(System.String)
 BetterList_1_t5397 * UIAtlas_GetListOfSprites_m38237 (UIAtlas_t1593 * __this, String_t* ___match, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::References(UIAtlas)
 bool UIAtlas_References_m38238 (UIAtlas_t1593 * __this, UIAtlas_t1593 * ___atlas, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::CheckIfRelated(UIAtlas,UIAtlas)
 bool UIAtlas_CheckIfRelated_m38239 (Object_t * __this/* static, unused */, UIAtlas_t1593 * ___a, UIAtlas_t1593 * ___b, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UIAtlas::MarkAsDirty()
 void UIAtlas_MarkAsDirty_m38240 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UIAtlas::Upgrade()
 bool UIAtlas_Upgrade_m38241 (UIAtlas_t1593 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UIAtlas::<SortAlphabetically>m__32(UISpriteData,UISpriteData)
 int32_t UIAtlas_U3CSortAlphabeticallyU3Em__32_m38242 (Object_t * __this/* static, unused */, UISpriteData_t5344 * ___s1, UISpriteData_t5344 * ___s2, MethodInfo* method) IL2CPP_METHOD_ATTR;
