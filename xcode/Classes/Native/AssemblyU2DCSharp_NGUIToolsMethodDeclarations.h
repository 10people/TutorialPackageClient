#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// NGUITools
struct NGUITools_t5356;
// System.String
struct String_t;
// UnityEngine.AudioSource
struct AudioSource_t4416;
// UnityEngine.AudioClip
struct AudioClip_t2147;
// UnityEngine.WWW
struct WWW_t1517;
// UnityEngine.WWWForm
struct WWWForm_t5357;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Collections.Generic.List`1<UnityEngine.Color>
struct List_1_t5358;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.BoxCollider
struct BoxCollider_t128;
// UISprite
struct UISprite_t1202;
// UIAtlas
struct UIAtlas_t1593;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// System.Object
struct Object_t;
// UnityEngine.Transform
struct Transform_t78;
// System.Byte[]
struct ByteU5BU5D_t1033;
// System.Reflection.PropertyInfo
struct PropertyInfo_t5355;
// UnityEngine.Color
#include "UnityEngine_UnityEngine_Color.h"
// UnityEngine.Vector3
#include "UnityEngine_UnityEngine_Vector3.h"

// System.Void NGUITools::.cctor()
 void NGUITools__cctor_m37903 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single NGUITools::get_soundVolume()
 float NGUITools_get_soundVolume_m37904 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_soundVolume(System.Single)
 void NGUITools_set_soundVolume_m37905 (Object_t * __this/* static, unused */, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::get_fileAccess()
 bool NGUITools_get_fileAccess_m37906 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip)
 AudioSource_t4416 * NGUITools_PlaySound_m37907 (Object_t * __this/* static, unused */, AudioClip_t2147 * ___clip, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single)
 AudioSource_t4416 * NGUITools_PlaySound_m37908 (Object_t * __this/* static, unused */, AudioClip_t2147 * ___clip, float ___volume, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource NGUITools::PlaySound(UnityEngine.AudioClip,System.Single,System.Single)
 AudioSource_t4416 * NGUITools_PlaySound_m37909 (Object_t * __this/* static, unused */, AudioClip_t2147 * ___clip, float ___volume, float ___pitch, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW NGUITools::OpenURL(System.String)
 WWW_t1517 * NGUITools_OpenURL_m37910 (Object_t * __this/* static, unused */, String_t* ___url, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.WWW NGUITools::OpenURL(System.String,UnityEngine.WWWForm)
 WWW_t1517 * NGUITools_OpenURL_m37911 (Object_t * __this/* static, unused */, String_t* ___url, WWWForm_t5357 * ___form, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::RandomRange(System.Int32,System.Int32)
 int32_t NGUITools_RandomRange_m37912 (Object_t * __this/* static, unused */, int32_t ___min, int32_t ___max, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::GetHierarchy(UnityEngine.GameObject)
 String_t* NGUITools_GetHierarchy_m37913 (Object_t * __this/* static, unused */, GameObject_t9 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ParseColor(System.String,System.Int32)
 Color_t939  NGUITools_ParseColor_m37914 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___offset, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::EncodeColor(UnityEngine.Color)
 String_t* NGUITools_EncodeColor_m37915 (Object_t * __this/* static, unused */, Color_t939  ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::ParseSymbol(System.String,System.Int32,System.Collections.Generic.List`1<UnityEngine.Color>,System.Boolean)
 int32_t NGUITools_ParseSymbol_m37916 (Object_t * __this/* static, unused */, String_t* ___text, int32_t ___index, List_1_t5358 * ___colors, bool ___premultiply, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::StripSymbols(System.String)
 String_t* NGUITools_StripSymbols_m37917 (Object_t * __this/* static, unused */, String_t* ___text, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera NGUITools::FindCameraForLayer(System.Int32)
 Camera_t38 * NGUITools_FindCameraForLayer_m37918 (Object_t * __this/* static, unused */, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider NGUITools::AddWidgetCollider(UnityEngine.GameObject)
 BoxCollider_t128 * NGUITools_AddWidgetCollider_m37919 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.BoxCollider NGUITools::AddWidgetCollider(UnityEngine.GameObject,System.Boolean)
 BoxCollider_t128 * NGUITools_AddWidgetCollider_m37920 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___considerInactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject)
 void NGUITools_UpdateWidgetCollider_m37921 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.GameObject,System.Boolean)
 void NGUITools_UpdateWidgetCollider_m37922 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___considerInactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider)
 void NGUITools_UpdateWidgetCollider_m37923 (Object_t * __this/* static, unused */, BoxCollider_t128 * ___bc, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::UpdateWidgetCollider(UnityEngine.BoxCollider,System.Boolean)
 void NGUITools_UpdateWidgetCollider_m37924 (Object_t * __this/* static, unused */, BoxCollider_t128 * ___box, bool ___considerInactive, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject)
 GameObject_t9 * NGUITools_AddChild_m37925 (Object_t * __this/* static, unused */, GameObject_t9 * ___parent, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::AddChild(UnityEngine.GameObject,UnityEngine.GameObject)
 GameObject_t9 * NGUITools_AddChild_m37926 (Object_t * __this/* static, unused */, GameObject_t9 * ___parent, GameObject_t9 * ___prefab, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateRaycastDepth(UnityEngine.GameObject)
 int32_t NGUITools_CalculateRaycastDepth_m37927 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject)
 int32_t NGUITools_CalculateNextDepth_m37928 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::CalculateNextDepth(UnityEngine.GameObject,System.Boolean)
 int32_t NGUITools_CalculateNextDepth_m37929 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___ignoreChildrenWithColliders, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 NGUITools::AdjustDepth(UnityEngine.GameObject,System.Int32)
 int32_t NGUITools_AdjustDepth_m37930 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, int32_t ___adjustment, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::BringForward(UnityEngine.GameObject)
 void NGUITools_BringForward_m37931 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::PushBack(UnityEngine.GameObject)
 void NGUITools_PushBack_m37932 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeDepths()
 void NGUITools_NormalizeDepths_m37933 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizeWidgetDepths()
 void NGUITools_NormalizeWidgetDepths_m37934 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::NormalizePanelDepths()
 void NGUITools_NormalizePanelDepths_m37935 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UISprite NGUITools::AddSprite(UnityEngine.GameObject,UIAtlas,System.String)
 UISprite_t1202 * NGUITools_AddSprite_m37936 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, UIAtlas_t1593 * ___atlas, String_t* ___spriteName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject NGUITools::GetRoot(UnityEngine.GameObject)
 GameObject_t9 * NGUITools_GetRoot_m37937 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Destroy(UnityEngine.Object)
 void NGUITools_Destroy_m37938 (Object_t * __this/* static, unused */, Object_t982 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::DestroyImmediate(UnityEngine.Object)
 void NGUITools_DestroyImmediate_m37939 (Object_t * __this/* static, unused */, Object_t982 * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String)
 void NGUITools_Broadcast_m37940 (Object_t * __this/* static, unused */, String_t* ___funcName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Broadcast(System.String,System.Object)
 void NGUITools_Broadcast_m37941 (Object_t * __this/* static, unused */, String_t* ___funcName, Object_t * ___param, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::IsChild(UnityEngine.Transform,UnityEngine.Transform)
 bool NGUITools_IsChild_m37942 (Object_t * __this/* static, unused */, Transform_t78 * ___parent, Transform_t78 * ___child, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Activate(UnityEngine.Transform)
 void NGUITools_Activate_m37943 (Object_t * __this/* static, unused */, Transform_t78 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::Deactivate(UnityEngine.Transform)
 void NGUITools_Deactivate_m37944 (Object_t * __this/* static, unused */, Transform_t78 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActive(UnityEngine.GameObject,System.Boolean)
 void NGUITools_SetActive_m37945 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveChildren(UnityEngine.GameObject,System.Boolean)
 void NGUITools_SetActiveChildren_m37946 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::GetActive(UnityEngine.GameObject)
 bool NGUITools_GetActive_m37947 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetActiveSelf(UnityEngine.GameObject,System.Boolean)
 void NGUITools_SetActiveSelf_m37948 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, bool ___state, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::SetLayer(UnityEngine.GameObject,System.Int32)
 void NGUITools_SetLayer_m37949 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, int32_t ___layer, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 NGUITools::Round(UnityEngine.Vector3)
 Vector3_t121  NGUITools_Round_m37950 (Object_t * __this/* static, unused */, Vector3_t121  ___v, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MakePixelPerfect(UnityEngine.Transform)
 void NGUITools_MakePixelPerfect_m37951 (Object_t * __this/* static, unused */, Transform_t78 * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean NGUITools::Save(System.String,System.Byte[])
 bool NGUITools_Save_m37952 (Object_t * __this/* static, unused */, String_t* ___fileName, ByteU5BU5D_t1033* ___bytes, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Byte[] NGUITools::Load(System.String)
 ByteU5BU5D_t1033* NGUITools_Load_m37953 (Object_t * __this/* static, unused */, String_t* ___fileName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color NGUITools::ApplyPMA(UnityEngine.Color)
 Color_t939  NGUITools_ApplyPMA_m37954 (Object_t * __this/* static, unused */, Color_t939  ___c, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::MarkParentAsChanged(UnityEngine.GameObject)
 void NGUITools_MarkParentAsChanged_m37955 (Object_t * __this/* static, unused */, GameObject_t9 * ___go, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Reflection.PropertyInfo NGUITools::GetSystemCopyBufferProperty()
 PropertyInfo_t5355 * NGUITools_GetSystemCopyBufferProperty_m37956 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String NGUITools::get_clipboard()
 String_t* NGUITools_get_clipboard_m37957 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void NGUITools::set_clipboard(System.String)
 void NGUITools_set_clipboard_m37958 (Object_t * __this/* static, unused */, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
