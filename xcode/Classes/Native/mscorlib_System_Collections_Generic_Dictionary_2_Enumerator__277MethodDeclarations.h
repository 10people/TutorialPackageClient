#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Enumerator_t23832;
// System.Object
struct Object_t;
// System.Type
struct Type_t;
// System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>
struct IDictionary_2_t6348;
// System.Collections.Generic.Dictionary`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
struct Dictionary_2_t6343;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_282.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__55MethodDeclarations.h"
#define Enumerator__ctor_m173244(__this, ___dictionary, method) (void)Enumerator__ctor_m59521_gshared((Enumerator_t8803 *)__this, (Dictionary_2_t8794 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m173245(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m59522_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m173246(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m59523_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m173247(__this, method) (DictionaryEntry_t1066 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59524_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m173248(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59525_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m173249(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59526_gshared((Enumerator_t8803 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::MoveNext()
#define Enumerator_MoveNext_m173250(__this, method) (bool)Enumerator_MoveNext_m59527_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_Current()
 KeyValuePair_2_t23742  Enumerator_get_Current_m173251 (Enumerator_t23832 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m173252(__this, method) (Type_t *)Enumerator_get_CurrentKey_m59529_gshared((Enumerator_t8803 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m173253(__this, method) (Object_t*)Enumerator_get_CurrentValue_m59530_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Reset()
#define Enumerator_Reset_m173254(__this, method) (void)Enumerator_Reset_m59531_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::VerifyState()
#define Enumerator_VerifyState_m173255(__this, method) (void)Enumerator_VerifyState_m59532_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m173256(__this, method) (void)Enumerator_VerifyCurrent_m59533_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Type,System.Collections.Generic.IDictionary`2<System.Type,LitJson.ImporterFunc>>::Dispose()
#define Enumerator_Dispose_m173257(__this, method) (void)Enumerator_Dispose_m59534_gshared((Enumerator_t8803 *)__this, method)
