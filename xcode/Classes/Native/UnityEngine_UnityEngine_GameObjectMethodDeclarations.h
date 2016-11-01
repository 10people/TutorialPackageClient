#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.GameObject
struct GameObject_t9;
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
// UnityEngine.ParticleEmitter
struct ParticleEmitter_t5081;
// UnityEngine.ParticleSystem
struct ParticleSystem_t929;
// System.String
struct String_t;
// System.Type[]
struct TypeU5BU5D_t1042;
// UnityEngine.Component
struct Component_t955;
// System.Type
struct Type_t;
// UnityEngine.Component[]
struct ComponentU5BU5D_t5864;
// System.Object
struct Object_t;
// UnityEngine.GameObject[]
struct GameObjectU5BU5D_t1200;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.GameObject::.ctor(System.String)
 void GameObject__ctor_m4265 (GameObject_t9 * __this, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor()
 void GameObject__ctor_m6503 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::.ctor(System.String,System.Type[])
 void GameObject__ctor_m6545 (GameObject_t9 * __this, String_t* ___name, TypeU5BU5D_t1042* ___components, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.Type)
 Component_t955 * GameObject_GetComponent_m6546 (GameObject_t9 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponent(System.String)
 Component_t955 * GameObject_GetComponent_m39701 (GameObject_t9 * __this, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentByName(System.String)
 Component_t955 * GameObject_GetComponentByName_m51812 (GameObject_t9 * __this, String_t* ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInChildren(System.Type)
 Component_t955 * GameObject_GetComponentInChildren_m51813 (GameObject_t9 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::GetComponentInParent(System.Type)
 Component_t955 * GameObject_GetComponentInParent_m51814 (GameObject_t9 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_isStatic(System.Boolean)
 void GameObject_set_isStatic_m51815 (GameObject_t9 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_isStaticBatchable()
 bool GameObject_get_isStaticBatchable_m51816 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponents(System.Type)
 ComponentU5BU5D_t5864* GameObject_GetComponents_m41772 (GameObject_t9 * __this, Type_t * ___type, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::GetComponentsForListInternal(System.Type,System.Type,System.Boolean,System.Boolean,System.Boolean,System.Object)
 void GameObject_GetComponentsForListInternal_m51817 (GameObject_t9 * __this, Type_t * ___searchType, Type_t * ___listElementType, bool ___recursive, bool ___includeInactive, bool ___reverse, Object_t * ___resultList, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component[] UnityEngine.GameObject::GetComponentsInternal(System.Type,System.Boolean,System.Boolean,System.Boolean,System.Boolean)
 ComponentU5BU5D_t5864* GameObject_GetComponentsInternal_m51818 (GameObject_t9 * __this, Type_t * ___type, bool ___isGenericTypeArray, bool ___recursive, bool ___includeInactive, bool ___reverse, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Transform UnityEngine.GameObject::get_transform()
 Transform_t78 * GameObject_get_transform_m4266 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rigidbody UnityEngine.GameObject::get_rigidbody()
 Rigidbody_t1004 * GameObject_get_rigidbody_m41767 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Camera UnityEngine.GameObject::get_camera()
 Camera_t38 * GameObject_get_camera_m6548 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Light UnityEngine.GameObject::get_light()
 Light_t5379 * GameObject_get_light_m41741 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Animation UnityEngine.GameObject::get_animation()
 Animation_t1252 * GameObject_get_animation_m40756 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Renderer UnityEngine.GameObject::get_renderer()
 Renderer_t1008 * GameObject_get_renderer_m41591 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AudioSource UnityEngine.GameObject::get_audio()
 AudioSource_t4416 * GameObject_get_audio_m41746 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUIText UnityEngine.GameObject::get_guiText()
 GUIText_t5893 * GameObject_get_guiText_m41738 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GUITexture UnityEngine.GameObject::get_guiTexture()
 GUITexture_t5892 * GameObject_get_guiTexture_m41736 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleEmitter UnityEngine.GameObject::get_particleEmitter()
 ParticleEmitter_t5081 * GameObject_get_particleEmitter_m41436 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.ParticleSystem UnityEngine.GameObject::get_particleSystem()
 ParticleSystem_t929 * GameObject_get_particleSystem_m41787 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.GameObject::get_layer()
 int32_t GameObject_get_layer_m6595 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_layer(System.Int32)
 void GameObject_set_layer_m38950 (GameObject_t9 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_active(System.Boolean)
 void GameObject_set_active_m40056 (GameObject_t9 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SetActive(System.Boolean)
 void GameObject_SetActive_m6508 (GameObject_t9 * __this, bool ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeSelf()
 bool GameObject_get_activeSelf_m39030 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::get_activeInHierarchy()
 bool GameObject_get_activeInHierarchy_m39067 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::set_tag(System.String)
 void GameObject_set_tag_m40615 (GameObject_t9 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean UnityEngine.GameObject::CompareTag(System.String)
 bool GameObject_CompareTag_m40854 (GameObject_t9 * __this, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject[] UnityEngine.GameObject::FindGameObjectsWithTag(System.String)
 GameObjectU5BU5D_t1200* GameObject_FindGameObjectsWithTag_m41817 (Object_t * __this/* static, unused */, String_t* ___tag, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,System.Object,UnityEngine.SendMessageOptions)
 void GameObject_SendMessage_m4091 (GameObject_t9 * __this, String_t* ___methodName, Object_t * ___value, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::SendMessage(System.String,UnityEngine.SendMessageOptions)
 void GameObject_SendMessage_m39795 (GameObject_t9 * __this, String_t* ___methodName, int32_t ___options, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.String)
 Component_t955 * GameObject_AddComponent_m6504 (GameObject_t9 * __this, String_t* ___className, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::AddComponent(System.Type)
 Component_t955 * GameObject_AddComponent_m6547 (GameObject_t9 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Component UnityEngine.GameObject::Internal_AddComponentWithType(System.Type)
 Component_t955 * GameObject_Internal_AddComponentWithType_m51819 (GameObject_t9 * __this, Type_t * ___componentType, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.GameObject::Internal_CreateGameObject(UnityEngine.GameObject,System.String)
 void GameObject_Internal_CreateGameObject_m51820 (Object_t * __this/* static, unused */, GameObject_t9 * ___mono, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::Find(System.String)
 GameObject_t9 * GameObject_Find_m6502 (Object_t * __this/* static, unused */, String_t* ___name, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.GameObject UnityEngine.GameObject::get_gameObject()
 GameObject_t9 * GameObject_get_gameObject_m39068 (GameObject_t9 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
