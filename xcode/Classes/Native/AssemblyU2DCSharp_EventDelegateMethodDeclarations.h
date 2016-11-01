#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// EventDelegate
struct EventDelegate_t5350;
// UnityEngine.MonoBehaviour
struct MonoBehaviour_t18;
// System.String
struct String_t;
// EventDelegate/Callback
struct Callback_t5349;
// System.Object
struct Object_t;
// System.Collections.Generic.List`1<EventDelegate>
struct List_1_t1193;

// System.Void EventDelegate::.ctor()
 void EventDelegate__ctor_m37825 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(EventDelegate/Callback)
 void EventDelegate__ctor_m37826 (EventDelegate_t5350 * __this, Callback_t5349 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.ctor(UnityEngine.MonoBehaviour,System.String)
 void EventDelegate__ctor_m37827 (EventDelegate_t5350 * __this, MonoBehaviour_t18 * ___target, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::.cctor()
 void EventDelegate__cctor_m37828 (Object_t * __this/* static, unused */, MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.MonoBehaviour EventDelegate::get_target()
 MonoBehaviour_t18 * EventDelegate_get_target_m37829 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_target(UnityEngine.MonoBehaviour)
 void EventDelegate_set_target_m37830 (EventDelegate_t5350 * __this, MonoBehaviour_t18 * ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::get_methodName()
 String_t* EventDelegate_get_methodName_m37831 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::set_methodName(System.String)
 void EventDelegate_set_methodName_m37832 (EventDelegate_t5350 * __this, String_t* ___value, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isValid()
 bool EventDelegate_get_isValid_m37833 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::get_isEnabled()
 bool EventDelegate_get_isEnabled_m37834 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Equals(System.Object)
 bool EventDelegate_Equals_m37835 (EventDelegate_t5350 * __this, Object_t * ___obj, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 EventDelegate::GetHashCode()
 int32_t EventDelegate_GetHashCode_m37836 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// EventDelegate/Callback EventDelegate::Get()
 Callback_t5349 * EventDelegate_Get_m37837 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(EventDelegate/Callback)
 void EventDelegate_Set_m37838 (EventDelegate_t5350 * __this, Callback_t5349 * ___call, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(UnityEngine.MonoBehaviour,System.String)
 void EventDelegate_Set_m37839 (EventDelegate_t5350 * __this, MonoBehaviour_t18 * ___target, String_t* ___methodName, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Execute()
 bool EventDelegate_Execute_m37840 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String EventDelegate::ToString()
 String_t* EventDelegate_ToString_m37841 (EventDelegate_t5350 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Execute(System.Collections.Generic.List`1<EventDelegate>)
 void EventDelegate_Execute_m37842 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::IsValid(System.Collections.Generic.List`1<EventDelegate>)
 bool EventDelegate_IsValid_m37843 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Set(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
 void EventDelegate_Set_m37844 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, Callback_t5349 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
 void EventDelegate_Add_m37845 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, Callback_t5349 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback,System.Boolean)
 void EventDelegate_Add_m37846 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, Callback_t5349 * ___callback, bool ___oneShot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate)
 void EventDelegate_Add_m37847 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, EventDelegate_t5350 * ___ev, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void EventDelegate::Add(System.Collections.Generic.List`1<EventDelegate>,EventDelegate,System.Boolean)
 void EventDelegate_Add_m37848 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, EventDelegate_t5350 * ___ev, bool ___oneShot, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean EventDelegate::Remove(System.Collections.Generic.List`1<EventDelegate>,EventDelegate/Callback)
 bool EventDelegate_Remove_m37849 (Object_t * __this/* static, unused */, List_1_t1193 * ___list, Callback_t5349 * ___callback, MethodInfo* method) IL2CPP_METHOD_ATTR;
