﻿#pragma once
#include <stdint.h>
#include <assert.h>
#include <exception>
#include "codegen/il2cpp-codegen.h"

// System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>
struct ValueCollection_t20785;
// System.Object
struct Object_t;
// System.Collections.Generic.Dictionary`2<System.String,Obj_Init_Data>
struct Dictionary_2_t4459;
// Obj_Init_Data
struct Obj_Init_Data_t4391;
// System.Collections.Generic.IEnumerator`1<Obj_Init_Data>
struct IEnumerator_1_t20792;
// System.Array
struct Array_t;
// System.Collections.IEnumerator
struct IEnumerator_t67;
// Obj_Init_Data[]
struct Obj_Init_DataU5BU5D_t20781;
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<System.String,Obj_Init_Data>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_504.h"

// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::.ctor(System.Collections.Generic.Dictionary`2<TKey,TValue>)
// System.Collections.Generic.Dictionary`2/ValueCollection<System.Object,System.Object>
#include "mscorlib_System_Collections_Generic_Dictionary_2_ValueCollec_15MethodDeclarations.h"
#define ValueCollection__ctor_m151630(__this, ___dictionary, method) (void)ValueCollection__ctor_m59539_gshared((ValueCollection_t8800 *)__this, (Dictionary_2_t8794 *)___dictionary, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.Generic.ICollection<TValue>.Add(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m151631(__this, ___item, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Add_m59540_gshared((ValueCollection_t8800 *)__this, (Object_t *)___item, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.Generic.ICollection<TValue>.Clear()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m151632(__this, method) (void)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Clear_m59541_gshared((ValueCollection_t8800 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.Generic.ICollection<TValue>.Contains(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m151633(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Contains_m59542_gshared((ValueCollection_t8800 *)__this, (Object_t *)___item, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.Generic.ICollection<TValue>.Remove(TValue)
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m151634(__this, ___item, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_Remove_m59543_gshared((ValueCollection_t8800 *)__this, (Object_t *)___item, method)
// System.Collections.Generic.IEnumerator`1<TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.Generic.IEnumerable<TValue>.GetEnumerator()
#define ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m151635(__this, method) (Object_t*)ValueCollection_System_Collections_Generic_IEnumerableU3CTValueU3E_GetEnumerator_m59544_gshared((ValueCollection_t8800 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.ICollection.CopyTo(System.Array,System.Int32)
#define ValueCollection_System_Collections_ICollection_CopyTo_m151636(__this, ___array, ___index, method) (void)ValueCollection_System_Collections_ICollection_CopyTo_m59545_gshared((ValueCollection_t8800 *)__this, (Array_t *)___array, (int32_t)___index, method)
// System.Collections.IEnumerator System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.IEnumerable.GetEnumerator()
#define ValueCollection_System_Collections_IEnumerable_GetEnumerator_m151637(__this, method) (Object_t *)ValueCollection_System_Collections_IEnumerable_GetEnumerator_m59546_gshared((ValueCollection_t8800 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.Generic.ICollection<TValue>.get_IsReadOnly()
#define ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m151638(__this, method) (bool)ValueCollection_System_Collections_Generic_ICollectionU3CTValueU3E_get_IsReadOnly_m59547_gshared((ValueCollection_t8800 *)__this, method)
// System.Boolean System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.ICollection.get_IsSynchronized()
#define ValueCollection_System_Collections_ICollection_get_IsSynchronized_m151639(__this, method) (bool)ValueCollection_System_Collections_ICollection_get_IsSynchronized_m59548_gshared((ValueCollection_t8800 *)__this, method)
// System.Object System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::System.Collections.ICollection.get_SyncRoot()
#define ValueCollection_System_Collections_ICollection_get_SyncRoot_m151640(__this, method) (Object_t *)ValueCollection_System_Collections_ICollection_get_SyncRoot_m59549_gshared((ValueCollection_t8800 *)__this, method)
// System.Void System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::CopyTo(TValue[],System.Int32)
#define ValueCollection_CopyTo_m151641(__this, ___array, ___index, method) (void)ValueCollection_CopyTo_m59550_gshared((ValueCollection_t8800 *)__this, (ObjectU5BU5D_t142*)___array, (int32_t)___index, method)
// System.Collections.Generic.Dictionary`2/ValueCollection/Enumerator<TKey,TValue> System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::GetEnumerator()
 Enumerator_t20793  ValueCollection_GetEnumerator_m151642 (ValueCollection_t20785 * __this, MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 System.Collections.Generic.Dictionary`2/ValueCollection<System.String,Obj_Init_Data>::get_Count()
#define ValueCollection_get_Count_m151643(__this, method) (int32_t)ValueCollection_get_Count_m59552_gshared((ValueCollection_t8800 *)__this, method)
