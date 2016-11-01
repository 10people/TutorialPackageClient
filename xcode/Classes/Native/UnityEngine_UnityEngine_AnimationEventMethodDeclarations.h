#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// UnityEngine.AnimationEvent
struct AnimationEvent_t7535;
struct AnimationEvent_t7535_marshaled;
// System.String
struct String_t;
// UnityEngine.Object
struct Object_t982;
struct Object_t982_marshaled;
// UnityEngine.AnimationState
struct AnimationState_t4530;
// UnityEngine.SendMessageOptions
#include "UnityEngine_UnityEngine_SendMessageOptions.h"

// System.Void UnityEngine.AnimationEvent::.ctor()
 void AnimationEvent__ctor_m51769 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::Create()
 void AnimationEvent_Create_m51770 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::Finalize()
 void AnimationEvent_Finalize_m51771 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::Destroy()
 void AnimationEvent_Destroy_m51772 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_data()
 String_t* AnimationEvent_get_data_m51773 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_data(System.String)
 void AnimationEvent_set_data_m51774 (AnimationEvent_t7535 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_stringParameter()
 String_t* AnimationEvent_get_stringParameter_m51775 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_stringParameter(System.String)
 void AnimationEvent_set_stringParameter_m51776 (AnimationEvent_t7535 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_floatParameter()
 float AnimationEvent_get_floatParameter_m51777 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_floatParameter(System.Single)
 void AnimationEvent_set_floatParameter_m51778 (AnimationEvent_t7535 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 UnityEngine.AnimationEvent::get_intParameter()
 int32_t AnimationEvent_get_intParameter_m51779 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_intParameter(System.Int32)
 void AnimationEvent_set_intParameter_m51780 (AnimationEvent_t7535 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Object UnityEngine.AnimationEvent::get_objectReferenceParameter()
 Object_t982 * AnimationEvent_get_objectReferenceParameter_m51781 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_objectReferenceParameter(UnityEngine.Object)
 void AnimationEvent_set_objectReferenceParameter_m51782 (AnimationEvent_t7535 * __this, Object_t982 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String UnityEngine.AnimationEvent::get_functionName()
 String_t* AnimationEvent_get_functionName_m51783 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_functionName(System.String)
 void AnimationEvent_set_functionName_m51784 (AnimationEvent_t7535 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single UnityEngine.AnimationEvent::get_time()
 float AnimationEvent_get_time_m51785 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_time(System.Single)
 void AnimationEvent_set_time_m51786 (AnimationEvent_t7535 * __this, float ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.SendMessageOptions UnityEngine.AnimationEvent::get_messageOptions()
 int32_t AnimationEvent_get_messageOptions_m51787 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void UnityEngine.AnimationEvent::set_messageOptions(UnityEngine.SendMessageOptions)
 void AnimationEvent_set_messageOptions_m51788 (AnimationEvent_t7535 * __this, int32_t ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.AnimationState UnityEngine.AnimationEvent::get_animationState()
 AnimationState_t4530 * AnimationEvent_get_animationState_m51789 (AnimationEvent_t7535 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
void AnimationEvent_t7535_marshal(const AnimationEvent_t7535& unmarshaled, AnimationEvent_t7535_marshaled& marshaled);
void AnimationEvent_t7535_marshal_back(const AnimationEvent_t7535_marshaled& marshaled, AnimationEvent_t7535& unmarshaled);
void AnimationEvent_t7535_marshal_cleanup(AnimationEvent_t7535_marshaled& marshaled);
