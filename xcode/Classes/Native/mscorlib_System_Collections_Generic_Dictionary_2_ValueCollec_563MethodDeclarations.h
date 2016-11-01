#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>
struct ValueCollection_t23869;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.Type,LitJson.ImporterFunc>
struct Dictionary_2_t6349;
// LitJson.ImporterFunc
struct ImporterFunc_t6300;
// System.Collections.Generic.IEnumerator`1<LitJson.ImporterFunc>
struct IEnumerator_1_t23875;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// LitJson.ImporterFunc[]
struct ImporterFuncU5BU5D_t23865;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.Type,LitJson.ImporterFunc>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_564.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15MethodDeclarations.h"
#define ValueCollection__ctor_m173674(__this, ___dictionary, method) (void)ValueCollection__ctor_m59539_gshared((ValueCollection_t8800 *)__this, (Dictionary_2_t8794 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m173675(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m59540_gshared((ValueCollection_t8800 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m173676(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m59541_gshared((ValueCollection_t8800 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m173677(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m59542_gshared((ValueCollection_t8800 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m173678(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m59543_gshared((ValueCollection_t8800 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m173679(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m59544_gshared((ValueCollection_t8800 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m173680(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m59545_gshared((ValueCollection_t8800 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m173681(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m59546_gshared((ValueCollection_t8800 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m173682(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m59547_gshared((ValueCollection_t8800 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m173683(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m59548_gshared((ValueCollection_t8800 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m173684(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m59549_gshared((ValueCollection_t8800 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m173685(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m59550_gshared((ValueCollection_t8800 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::GetEnumerator()
 Enumerator_t23876  ValueCollection_GetEnumerator_m173686 (ValueCollection_t23869 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.Type,LitJson.ImporterFunc>::get_Count()
#define ValueCollection_get_Count_m173687(__this, method) (int32_t)ValueCollection_get_Count_m59552_gshared((ValueCollection_t8800 *)__this, method)
