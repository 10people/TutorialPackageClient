#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>
struct ShimEnumerator_t8815;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Object,System.Object>
struct Dictionary_2_t8794;
// System.Collections.DictionaryEntry
#include "mscorlib_System_Collections_DictionaryEntry.h"

// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
 void ShimEnumerator__ctor_m59573_gshared (ShimEnumerator_t8815 * __this, Dictionary_2_t8794 * ___host, MethodInfo* method);
#define ShimEnumerator__ctor_m59573(__this, ___host, method) (void)ShimEnumerator__ctor_m59573_gshared((ShimEnumerator_t8815 *)__this, (Dictionary_2_t8794 *)___host, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::MoveNext()
 bool ShimEnumerator_MoveNext_m59574_gshared (ShimEnumerator_t8815 * __this, MethodInfo* method);
#define ShimEnumerator_MoveNext_m59574(__this, method) (bool)ShimEnumerator_MoveNext_m59574_gshared((ShimEnumerator_t8815 *)__this, method)
// System.Collections.DictionaryEntry System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Entry()
 DictionaryEntry_t1066  ShimEnumerator_get_Entry_m59575_gshared (ShimEnumerator_t8815 * __this, MethodInfo* method);
#define ShimEnumerator_get_Entry_m59575(__this, method) (DictionaryEntry_t1066 )ShimEnumerator_get_Entry_m59575_gshared((ShimEnumerator_t8815 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Key()
 Object_t * ShimEnumerator_get_Key_m59576_gshared (ShimEnumerator_t8815 * __this, MethodInfo* method);
#define ShimEnumerator_get_Key_m59576(__this, method) (Object_t *)ShimEnumerator_get_Key_m59576_gshared((ShimEnumerator_t8815 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Value()
 Object_t * ShimEnumerator_get_Value_m59577_gshared (ShimEnumerator_t8815 * __this, MethodInfo* method);
#define ShimEnumerator_get_Value_m59577(__this, method) (Object_t *)ShimEnumerator_get_Value_m59577_gshared((ShimEnumerator_t8815 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::get_Current()
 Object_t * ShimEnumerator_get_Current_m59578_gshared (ShimEnumerator_t8815 * __this, MethodInfo* method);
#define ShimEnumerator_get_Current_m59578(__this, method) (Object_t *)ShimEnumerator_get_Current_m59578_gshared((ShimEnumerator_t8815 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ShimEnumerator<System.Object,System.Object>::Reset()
 void ShimEnumerator_Reset_m59579_gshared (ShimEnumerator_t8815 * __this, MethodInfo* method);
#define ShimEnumerator_Reset_m59579(__this, method) (void)ShimEnumerator_Reset_m59579_gshared((ShimEnumerator_t8815 *)__this, method)
