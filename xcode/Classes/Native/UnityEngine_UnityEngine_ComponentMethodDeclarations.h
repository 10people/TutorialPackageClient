#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.Component
struct Component_t955;
// UnityEngine.Transform
struct Transform_t78;
// UnityEngine.Rigidbody
struct Rigidbody_t1004;
// UnityEngine.Camera
struct Camera_t38;
// UnityEngine.Light
struct Light_t5379;
// UnityEngine.Animation
struct Animation_t1252;
// UnityEngine.Renderer
struct Renderer_t1008;
// UnityEngine.AudioSource
struct AudioSource_t4416;
// UnityEngine.GUIText
struct GUIText_t5893;
// UnityEngine.GUITexture
struct GUITexture_t5892;
// UnityEngine.Collider
struct Collider_t62;
// UnityEngine.ParticleEmitter
struct ParticleEmitter_t5081;
// UnityEngine.ParticleSystem
struct ParticleSystem_t929;
// UnityEngine.GameObject
struct GameObject_t9;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t5864;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<UnityEngine.Component>
struct List_1_t5044;
// System.String
struct String_t;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// UnityEngine.Transform UnityEngine.Component::get_transform()
 Transform_t78 * Component_get_transform_m4259 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.Component::InternalGetTransform()
 Transform_t78 * Component_InternalGetTransform_m52601 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.Component::get_rigidbody()
 Rigidbody_t1004 * Component_get_rigidbody_m4483 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.Component::get_camera()
 Camera_t38 * Component_get_camera_m4503 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Light UnityEngine.Component::get_light()
 Light_t5379 * Component_get_light_m41753 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animation UnityEngine.Component::get_animation()
 Animation_t1252 * Component_get_animation_m39086 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer UnityEngine.Component::get_renderer()
 Renderer_t1008 * Component_get_renderer_m4523 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityEngine.Component::get_audio()
 AudioSource_t4416 * Component_get_audio_m41756 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIText UnityEngine.Component::get_guiText()
 GUIText_t5893 * Component_get_guiText_m41752 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUITexture UnityEngine.Component::get_guiTexture()
 GUITexture_t5892 * Component_get_guiTexture_m41751 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Collider UnityEngine.Component::get_collider()
 Collider_t62 * Component_get_collider_m38676 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleEmitter UnityEngine.Component::get_particleEmitter()
 ParticleEmitter_t5081 * Component_get_particleEmitter_m41529 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem UnityEngine.Component::get_particleSystem()
 ParticleSystem_t929 * Component_get_particleSystem_m41531 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::get_gameObject()
 GameObject_t9 * Component_get_gameObject_m4089 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.Component::InternalGetGameObject()
 GameObject_t9 * Component_InternalGetGameObject_m52602 (Component_t955 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponent(System.Type)
 Component_t955 * Component_GetComponent_m41723 (Component_t955 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInChildren(System.Type)
 Component_t955 * Component_GetComponentInChildren_m52603 (Component_t955 * __this, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.Component::GetComponentInParent(System.Type)
 Component_t955 * Component_GetComponentInParent_m52604 (Component_t955 * __this, Type_t * ___t, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponents(System.Type)
 ComponentU5BU5D_t5864* Component_GetComponents_m41784 (Component_t955 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.Component::GetComponentsWithCorrectReturnType(System.Type)
 ComponentU5BU5D_t5864* Component_GetComponentsWithCorrectReturnType_m52605 (Component_t955 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Object)
 void Component_GetComponentsForListInternal_m52606 (Component_t955 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::GetComponents(System.Type,System.Collections.Generic.List`1<UnityEngine.Component>)
 void Component_GetComponents_m43777 (Component_t955 * __this, Type_t * ___type, List_1_t5044 * ___results, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::set_active(System.Boolean)
 void Component_set_active_m39064 (Component_t955 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void Component_SendMessage_m39050 (Component_t955 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String)
 void Component_SendMessage_m39820 (Component_t955 * __this, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::SendMessage(System.String,UnityEngine.SendMessageOptions)
 void Component_SendMessage_m41977 (Component_t955 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void Component_BroadcastMessage_m42290 (Component_t955 * __this, String_t* ___methodName, Object_t * ___parameter, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.Component::BroadcastMessage(System.String,UnityEngine.SendMessageOptions)
 void Component_BroadcastMessage_m42289 (Component_t955 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
