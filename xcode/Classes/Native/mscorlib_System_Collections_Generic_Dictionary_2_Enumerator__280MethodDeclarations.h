#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Enumerator_t23902;
// System.Object
struct Object_t;
// Boo.Lang.Runtime.DynamicDispatching.DispatcherKey
struct DispatcherKey_t6366;
// Boo.Lang.Runtime.DynamicDispatching.Dispatcher
struct Dispatcher_t6362;
// System.Collections.Generic.Dictionary`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
struct Dictionary_2_t6364;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_287.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__55MethodDeclarations.h"
#define Enumerator__ctor_m173865(__this, ___dictionary, method) (void)Enumerator__ctor_m59521_gshared((Enumerator_t8803 *)__this, (Dictionary_2_t8794 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m173866(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m59522_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m173867(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m59523_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m173868(__this, method) (DictionaryEntry_t1066 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59524_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m173869(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59525_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m173870(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59526_gshared((Enumerator_t8803 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::MoveNext()
#define Enumerator_MoveNext_m173871(__this, method) (bool)Enumerator_MoveNext_m59527_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_Current()
 KeyValuePair_2_t23900  Enumerator_get_Current_m173872 (Enumerator_t23902 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m173873(__this, method) (DispatcherKey_t6366 *)Enumerator_get_CurrentKey_m59529_gshared((Enumerator_t8803 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m173874(__this, method) (Dispatcher_t6362 *)Enumerator_get_CurrentValue_m59530_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Reset()
#define Enumerator_Reset_m173875(__this, method) (void)Enumerator_Reset_m59531_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::VerifyState()
#define Enumerator_VerifyState_m173876(__this, method) (void)Enumerator_VerifyState_m59532_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m173877(__this, method) (void)Enumerator_VerifyCurrent_m59533_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<Boo.Lang.Runtime.DynamicDispatching.DispatcherKey,Boo.Lang.Runtime.DynamicDispatching.Dispatcher>::Dispose()
#define Enumerator_Dispose_m173878(__this, method) (void)Enumerator_Dispose_m59534_gshared((Enumerator_t8803 *)__this, method)
