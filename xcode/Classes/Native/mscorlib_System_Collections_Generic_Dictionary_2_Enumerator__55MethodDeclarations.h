#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
struct Enumerator_t8803;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t8794;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_64.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void Enumerator__ctor_m59521_gshared (Enumerator_t8803 * __this, Dictionary_2_t8794 * ___dictionary, MethodInfo* method);
#define Enumerator__ctor_m59521(__this, ___dictionary, method) (void)Enumerator__ctor_m59521_gshared((Enumerator_t8803 *)__this, (Dictionary_2_t8794 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.get_Current()
 Object_t * Enumerator_System_Collections_IEnumerator_get_Current_m59522_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_get_Current_m59522(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m59522_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IEnumerator.Reset()
 void Enumerator_System_Collections_IEnumerator_Reset_m59523_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IEnumerator_Reset_m59523(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m59523_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Entry()
 DictionaryEntry_t1066  Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59524_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59524(__this, method) (DictionaryEntry_t1066 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59524_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Key()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59525_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59525(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59525_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::System.Collections.IDictionaryEnumerator.get_Value()
 Object_t * Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59526_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59526(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59526_gshared((Enumerator_t8803 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::MoveNext()
 bool Enumerator_MoveNext_m59527_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_MoveNext_m59527(__this, method) (bool)Enumerator_MoveNext_m59527_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_Current()
 KeyValuePair_2_t8801  Enumerator_get_Current_m59528 (Enumerator_t8803 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentKey()
 Object_t * Enumerator_get_CurrentKey_m59529_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_get_CurrentKey_m59529(__this, method) (Object_t *)Enumerator_get_CurrentKey_m59529_gshared((Enumerator_t8803 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::get_CurrentValue()
 Object_t * Enumerator_get_CurrentValue_m59530_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_get_CurrentValue_m59530(__this, method) (Object_t *)Enumerator_get_CurrentValue_m59530_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Reset()
 void Enumerator_Reset_m59531_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_Reset_m59531(__this, method) (void)Enumerator_Reset_m59531_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyState()
 void Enumerator_VerifyState_m59532_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_VerifyState_m59532(__this, method) (void)Enumerator_VerifyState_m59532_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::VerifyCurrent()
 void Enumerator_VerifyCurrent_m59533_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_VerifyCurrent_m59533(__this, method) (void)Enumerator_VerifyCurrent_m59533_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>::Dispose()
 void Enumerator_Dispose_m59534_gshared (Enumerator_t8803 * __this, MethodInfo* method);
#define Enumerator_Dispose_m59534(__this, method) (void)Enumerator_Dispose_m59534_gshared((Enumerator_t8803 *)__this, method)
