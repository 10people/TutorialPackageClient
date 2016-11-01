#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>
struct Enumerator_t23719;
// System.Object
struct Object_t;
// System.String
struct String_t;
// LitJson.JsonData
struct JsonData_t1031;
// System.Collections.Generic.Dictionary`2<System.String,LitJson.JsonData>
struct Dictionary_2_t6328;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"
// System.Collections.Generic.KeyValuePair`2<System.String,LitJson.JsonData>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_61.h"

// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/Enumerator<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_Enumerator__55MethodDeclarations.h"
#define Enumerator__ctor_m172298(__this, ___dictionary, method) (void)Enumerator__ctor_m59521_gshared((Enumerator_t8803 *)__this, (Dictionary_2_t8794 *)___dictionary, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::System.Collections.IEnumerator.get_Current()
#define Enumerator_System_Collections_IEnumerator_get_Current_m172299(__this, method) (Object_t *)Enumerator_System_Collections_IEnumerator_get_Current_m59522_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::System.Collections.IEnumerator.Reset()
#define Enumerator_System_Collections_IEnumerator_Reset_m172300(__this, method) (void)Enumerator_System_Collections_IEnumerator_Reset_m59523_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::System.Collections.IDictionaryEnumerator.get_Entry()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m172301(__this, method) (DictionaryEntry_t1066 )Enumerator_System_Collections_IDictionaryEnumerator_get_Entry_m59524_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::System.Collections.IDictionaryEnumerator.get_Key()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m172302(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Key_m59525_gshared((Enumerator_t8803 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::System.Collections.IDictionaryEnumerator.get_Value()
#define Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m172303(__this, method) (Object_t *)Enumerator_System_Collections_IDictionaryEnumerator_get_Value_m59526_gshared((Enumerator_t8803 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::MoveNext()
#define Enumerator_MoveNext_m172304(__this, method) (bool)Enumerator_MoveNext_m59527_gshared((Enumerator_t8803 *)__this, method)
// System.Collections.Generic.KeyValuePair`2<TKey,TValue> System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::get_Current()
 KeyValuePair_2_t6324  Enumerator_get_Current_m172305 (Enumerator_t23719 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// TKey System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::get_CurrentKey()
#define Enumerator_get_CurrentKey_m172306(__this, method) (String_t*)Enumerator_get_CurrentKey_m59529_gshared((Enumerator_t8803 *)__this, method)
// TValue System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::get_CurrentValue()
#define Enumerator_get_CurrentValue_m172307(__this, method) (JsonData_t1031 *)Enumerator_get_CurrentValue_m59530_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::Reset()
#define Enumerator_Reset_m172308(__this, method) (void)Enumerator_Reset_m59531_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::VerifyState()
#define Enumerator_VerifyState_m172309(__this, method) (void)Enumerator_VerifyState_m59532_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::VerifyCurrent()
#define Enumerator_VerifyCurrent_m172310(__this, method) (void)Enumerator_VerifyCurrent_m59533_gshared((Enumerator_t8803 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/Enumerator<System.String,LitJson.JsonData>::Dispose()
#define Enumerator_Dispose_m172311(__this, method) (void)Enumerator_Dispose_m59534_gshared((Enumerator_t8803 *)__this, method)
