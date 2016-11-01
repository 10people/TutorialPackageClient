#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1479.h"
#include <cstring>
#include <string.h>
#include <stdio.h>
#ifndef _MSC_VER
#include <alloca.h>
#else
#include <malloc.h>
#endif
#include <cmath>
#include <limits>
#include <assert.h>
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1479MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// SpeechEngine/SpeechEventType
#include "AssemblyU2DCSharp_SpeechEngine_SpeechEventType.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Void
#include "mscorlib_System_Void.h"
// System.Array
#include "mscorlib_System_Array.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern TypeInfo SpeechEventType_t1758_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m137406_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpeechEventType_t1758_m203224_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<SpeechEngine/SpeechEventType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SpeechEngine/SpeechEventType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSpeechEventType_t1758_m203224 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSpeechEventType_t1758_m203224_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m137401_MethodInfo;
 void InternalEnumerator_1__ctor_m137401 (InternalEnumerator_1_t18682 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137402_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137402 (InternalEnumerator_1_t18682 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403 (InternalEnumerator_1_t18682 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m137406(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m137406_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SpeechEventType_t1758_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m137404_MethodInfo;
 void InternalEnumerator_1_Dispose_m137404 (InternalEnumerator_1_t18682 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m137405_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m137405 (InternalEnumerator_1_t18682 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m42374(L_1, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m137406_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m137406 (InternalEnumerator_1_t18682 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5468 * L_1 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_1, (String_t*) &_stringLiteral6626, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5468 * L_3 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_3, (String_t*) &_stringLiteral6627, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m42374(L_5, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisSpeechEventType_t1758_m203224(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSpeechEventType_t1758_m203224_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18682____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18682, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18682____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18682, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18682_FieldInfos[] =
{
	&InternalEnumerator_1_t18682____array_FieldInfo,
	&InternalEnumerator_1_t18682____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18682____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18682_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137406_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18682____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18682_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137406_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18682_PropertyInfos[] =
{
	&InternalEnumerator_1_t18682____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18682____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18682_InternalEnumerator_1__ctor_m137401_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137401_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m137401/* method */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18682_InternalEnumerator_1__ctor_m137401_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137402_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137402/* method */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403/* method */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137404_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m137404/* method */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137405_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m137405/* method */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern Il2CppType SpeechEventType_t1758_0_0_0;
extern void* RuntimeInvoker_SpeechEventType_t1758 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SpeechEngine/SpeechEventType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137406_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m137406/* method */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* declaring_type */
	, &SpeechEventType_t1758_0_0_0/* return_type */
	, RuntimeInvoker_SpeechEventType_t1758/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18682_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137401_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137402_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403_MethodInfo,
	&InternalEnumerator_1_Dispose_m137404_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137405_MethodInfo,
	&InternalEnumerator_1_get_Current_m137406_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137405_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137402_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137404_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137406_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18682_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137403_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137405_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137402_MethodInfo,
	&InternalEnumerator_1_Dispose_m137404_MethodInfo,
	&InternalEnumerator_1_get_Current_m137406_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27841_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18682_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27841_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27841_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18682_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27841_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18682_0_0_0;
extern Il2CppType InternalEnumerator_1_t18682_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18682_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18682_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18682_MethodInfos/* methods */
	, InternalEnumerator_1_t18682_PropertyInfos/* properties */
	, InternalEnumerator_1_t18682_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18682_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18682_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18682_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18682_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18682_1_0_0/* this_arg */
	, InternalEnumerator_1_t18682_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18682_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18682)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>
extern MethodInfo ICollection_1_get_Count_m249180_MethodInfo;
static PropertyInfo ICollection_1_t32724____Count_PropertyInfo = 
{
	&ICollection_1_t32724_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249180_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249181_MethodInfo;
static PropertyInfo ICollection_1_t32724____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32724_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249181_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32724_PropertyInfos[] =
{
	&ICollection_1_t32724____Count_PropertyInfo,
	&ICollection_1_t32724____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::get_Count()
MethodInfo ICollection_1_get_Count_m249180_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249181_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechEventType_t1758_0_0_0;
static ParameterInfo ICollection_1_t32724_ICollection_1_Add_m249182_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechEventType_t1758_0_0_0},
};
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Add(T)
MethodInfo ICollection_1_Add_m249182_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32724_ICollection_1_Add_m249182_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Clear()
MethodInfo ICollection_1_Clear_m249183_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechEventType_t1758_0_0_0;
static ParameterInfo ICollection_1_t32724_ICollection_1_Contains_m249184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechEventType_t1758_0_0_0},
};
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Contains(T)
MethodInfo ICollection_1_Contains_m249184_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32724_ICollection_1_Contains_m249184_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechEventTypeU5BU5D_t25872_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32724_ICollection_1_CopyTo_m249185_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpeechEventTypeU5BU5D_t25872_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249185_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32724_ICollection_1_CopyTo_m249185_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechEventType_t1758_0_0_0;
static ParameterInfo ICollection_1_t32724_ICollection_1_Remove_m249186_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechEventType_t1758_0_0_0},
};
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechEventType>::Remove(T)
MethodInfo ICollection_1_Remove_m249186_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32724_ICollection_1_Remove_m249186_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32724_MethodInfos[] =
{
	&ICollection_1_get_Count_m249180_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249181_MethodInfo,
	&ICollection_1_Add_m249182_MethodInfo,
	&ICollection_1_Clear_m249183_MethodInfo,
	&ICollection_1_Contains_m249184_MethodInfo,
	&ICollection_1_CopyTo_m249185_MethodInfo,
	&ICollection_1_Remove_m249186_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32726_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32724_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32726_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32724_0_0_0;
extern Il2CppType ICollection_1_t32724_1_0_0;
struct ICollection_1_t32724;
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32724_GenericClass;
TypeInfo ICollection_1_t32724_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32724_MethodInfos/* methods */
	, ICollection_1_t32724_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32724_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32724_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32724_0_0_0/* byval_arg */
	, &ICollection_1_t32724_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32724_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32726_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SpeechEngine/SpeechEventType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SpeechEngine/SpeechEventType>
extern TypeInfo IEnumerable_1_t32726_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27841_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SpeechEngine/SpeechEventType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249187_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32726_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27841_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32726_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249187_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32726_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32726_0_0_0;
extern Il2CppType IEnumerable_1_t32726_1_0_0;
struct IEnumerable_1_t32726;
extern TypeInfo IEnumerable_1_t32726_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32726_GenericClass;
TypeInfo IEnumerable_1_t32726_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32726_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32726_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32726_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32726_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32726_0_0_0/* byval_arg */
	, &IEnumerable_1_t32726_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32726_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32725_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>
extern MethodInfo IList_1_get_Item_m249188_MethodInfo;
extern MethodInfo IList_1_set_Item_m249189_MethodInfo;
static PropertyInfo IList_1_t32725____Item_PropertyInfo = 
{
	&IList_1_t32725_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249188_MethodInfo/* get */
	, &IList_1_set_Item_m249189_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32725_PropertyInfos[] =
{
	&IList_1_t32725____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpeechEventType_t1758_0_0_0;
static ParameterInfo IList_1_t32725_IList_1_IndexOf_m249190_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechEventType_t1758_0_0_0},
};
extern TypeInfo IList_1_t32725_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249190_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32725_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32725_IList_1_IndexOf_m249190_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SpeechEventType_t1758_0_0_0;
static ParameterInfo IList_1_t32725_IList_1_Insert_m249191_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpeechEventType_t1758_0_0_0},
};
extern TypeInfo IList_1_t32725_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249191_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32725_IList_1_Insert_m249191_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32725_IList_1_RemoveAt_m249192_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32725_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249192_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32725_IList_1_RemoveAt_m249192_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32725_IList_1_get_Item_m249188_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32725_il2cpp_TypeInfo;
extern Il2CppType SpeechEventType_t1758_0_0_0;
extern void* RuntimeInvoker_SpeechEventType_t1758_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249188_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32725_il2cpp_TypeInfo/* declaring_type */
	, &SpeechEventType_t1758_0_0_0/* return_type */
	, RuntimeInvoker_SpeechEventType_t1758_Int32_t73/* invoker_method */
	, IList_1_t32725_IList_1_get_Item_m249188_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SpeechEventType_t1758_0_0_0;
static ParameterInfo IList_1_t32725_IList_1_set_Item_m249189_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpeechEventType_t1758_0_0_0},
};
extern TypeInfo IList_1_t32725_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechEventType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249189_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32725_IList_1_set_Item_m249189_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32725_MethodInfos[] =
{
	&IList_1_IndexOf_m249190_MethodInfo,
	&IList_1_Insert_m249191_MethodInfo,
	&IList_1_RemoveAt_m249192_MethodInfo,
	&IList_1_get_Item_m249188_MethodInfo,
	&IList_1_set_Item_m249189_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32724_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32726_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32725_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32724_il2cpp_TypeInfo,
	&IEnumerable_1_t32726_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32725_0_0_0;
extern Il2CppType IList_1_t32725_1_0_0;
struct IList_1_t32725;
extern TypeInfo IList_1_t32725_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32725_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32725_MethodInfos/* methods */
	, IList_1_t32725_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32725_il2cpp_TypeInfo/* element_class */
	, IList_1_t32725_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32725_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32725_0_0_0/* byval_arg */
	, &IList_1_t32725_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32725_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27842_il2cpp_TypeInfo;

// SpeechEngine/SpeechStatus
#include "AssemblyU2DCSharp_SpeechEngine_SpeechStatus.h"


// T System.Collections.Generic.IEnumerator`1<SpeechEngine/SpeechStatus>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SpeechEngine/SpeechStatus>
extern MethodInfo IEnumerator_1_get_Current_m249193_MethodInfo;
static PropertyInfo IEnumerator_1_t27842____Current_PropertyInfo = 
{
	&IEnumerator_1_t27842_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249193_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27842_PropertyInfos[] =
{
	&IEnumerator_1_t27842____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27842_il2cpp_TypeInfo;
extern Il2CppType SpeechStatus_t1757_0_0_0;
extern void* RuntimeInvoker_SpeechStatus_t1757 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SpeechEngine/SpeechStatus>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249193_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27842_il2cpp_TypeInfo/* declaring_type */
	, &SpeechStatus_t1757_0_0_0/* return_type */
	, RuntimeInvoker_SpeechStatus_t1757/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27842_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249193_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27842_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27842_0_0_0;
extern Il2CppType IEnumerator_1_t27842_1_0_0;
struct IEnumerator_1_t27842;
extern TypeInfo IEnumerator_1_t27842_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27842_GenericClass;
TypeInfo IEnumerator_1_t27842_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27842_MethodInfos/* methods */
	, IEnumerator_1_t27842_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27842_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27842_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27842_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27842_0_0_0/* byval_arg */
	, &IEnumerator_1_t27842_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27842_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1480.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1480MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern TypeInfo SpeechStatus_t1757_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137412_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpeechStatus_t1757_m203235_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SpeechEngine/SpeechStatus>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SpeechEngine/SpeechStatus>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSpeechStatus_t1757_m203235 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSpeechStatus_t1757_m203235_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m137407_MethodInfo;
 void InternalEnumerator_1__ctor_m137407 (InternalEnumerator_1_t18683 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137408_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137408 (InternalEnumerator_1_t18683 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409 (InternalEnumerator_1_t18683 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m137412(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m137412_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SpeechStatus_t1757_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m137410_MethodInfo;
 void InternalEnumerator_1_Dispose_m137410 (InternalEnumerator_1_t18683 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m137411_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m137411 (InternalEnumerator_1_t18683 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m42374(L_1, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m137412_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m137412 (InternalEnumerator_1_t18683 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5468 * L_1 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_1, (String_t*) &_stringLiteral6626, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5468 * L_3 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_3, (String_t*) &_stringLiteral6627, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m42374(L_5, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisSpeechStatus_t1757_m203235(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSpeechStatus_t1757_m203235_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18683____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18683, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18683____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18683, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18683_FieldInfos[] =
{
	&InternalEnumerator_1_t18683____array_FieldInfo,
	&InternalEnumerator_1_t18683____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18683____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18683_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137412_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18683____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18683_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137412_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18683_PropertyInfos[] =
{
	&InternalEnumerator_1_t18683____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18683____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18683_InternalEnumerator_1__ctor_m137407_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137407_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m137407/* method */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18683_InternalEnumerator_1__ctor_m137407_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137408_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137408/* method */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409/* method */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137410_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m137410/* method */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137411_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m137411/* method */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern Il2CppType SpeechStatus_t1757_0_0_0;
extern void* RuntimeInvoker_SpeechStatus_t1757 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SpeechEngine/SpeechStatus>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137412_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m137412/* method */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* declaring_type */
	, &SpeechStatus_t1757_0_0_0/* return_type */
	, RuntimeInvoker_SpeechStatus_t1757/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18683_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137407_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137408_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409_MethodInfo,
	&InternalEnumerator_1_Dispose_m137410_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137411_MethodInfo,
	&InternalEnumerator_1_get_Current_m137412_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137411_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137408_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137410_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137412_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18683_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137409_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137411_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137408_MethodInfo,
	&InternalEnumerator_1_Dispose_m137410_MethodInfo,
	&InternalEnumerator_1_get_Current_m137412_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27842_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18683_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27842_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27842_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18683_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27842_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18683_0_0_0;
extern Il2CppType InternalEnumerator_1_t18683_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18683_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18683_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18683_MethodInfos/* methods */
	, InternalEnumerator_1_t18683_PropertyInfos/* properties */
	, InternalEnumerator_1_t18683_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18683_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18683_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18683_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18683_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18683_1_0_0/* this_arg */
	, InternalEnumerator_1_t18683_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18683_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18683)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>
extern MethodInfo ICollection_1_get_Count_m249194_MethodInfo;
static PropertyInfo ICollection_1_t32727____Count_PropertyInfo = 
{
	&ICollection_1_t32727_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249194_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249195_MethodInfo;
static PropertyInfo ICollection_1_t32727____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32727_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249195_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32727_PropertyInfos[] =
{
	&ICollection_1_t32727____Count_PropertyInfo,
	&ICollection_1_t32727____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::get_Count()
MethodInfo ICollection_1_get_Count_m249194_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249195_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechStatus_t1757_0_0_0;
static ParameterInfo ICollection_1_t32727_ICollection_1_Add_m249196_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechStatus_t1757_0_0_0},
};
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Add(T)
MethodInfo ICollection_1_Add_m249196_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32727_ICollection_1_Add_m249196_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Clear()
MethodInfo ICollection_1_Clear_m249197_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechStatus_t1757_0_0_0;
static ParameterInfo ICollection_1_t32727_ICollection_1_Contains_m249198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechStatus_t1757_0_0_0},
};
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Contains(T)
MethodInfo ICollection_1_Contains_m249198_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32727_ICollection_1_Contains_m249198_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechStatusU5BU5D_t25873_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32727_ICollection_1_CopyTo_m249199_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpeechStatusU5BU5D_t25873_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249199_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32727_ICollection_1_CopyTo_m249199_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechStatus_t1757_0_0_0;
static ParameterInfo ICollection_1_t32727_ICollection_1_Remove_m249200_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechStatus_t1757_0_0_0},
};
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechEngine/SpeechStatus>::Remove(T)
MethodInfo ICollection_1_Remove_m249200_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32727_ICollection_1_Remove_m249200_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32727_MethodInfos[] =
{
	&ICollection_1_get_Count_m249194_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249195_MethodInfo,
	&ICollection_1_Add_m249196_MethodInfo,
	&ICollection_1_Clear_m249197_MethodInfo,
	&ICollection_1_Contains_m249198_MethodInfo,
	&ICollection_1_CopyTo_m249199_MethodInfo,
	&ICollection_1_Remove_m249200_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32729_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32727_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32729_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32727_0_0_0;
extern Il2CppType ICollection_1_t32727_1_0_0;
struct ICollection_1_t32727;
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32727_GenericClass;
TypeInfo ICollection_1_t32727_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32727_MethodInfos/* methods */
	, ICollection_1_t32727_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32727_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32727_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32727_0_0_0/* byval_arg */
	, &ICollection_1_t32727_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32727_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32729_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SpeechEngine/SpeechStatus>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SpeechEngine/SpeechStatus>
extern TypeInfo IEnumerable_1_t32729_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27842_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SpeechEngine/SpeechStatus>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249201_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32729_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27842_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32729_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249201_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32729_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32729_0_0_0;
extern Il2CppType IEnumerable_1_t32729_1_0_0;
struct IEnumerable_1_t32729;
extern TypeInfo IEnumerable_1_t32729_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32729_GenericClass;
TypeInfo IEnumerable_1_t32729_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32729_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32729_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32729_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32729_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32729_0_0_0/* byval_arg */
	, &IEnumerable_1_t32729_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32729_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32728_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>
extern MethodInfo IList_1_get_Item_m249202_MethodInfo;
extern MethodInfo IList_1_set_Item_m249203_MethodInfo;
static PropertyInfo IList_1_t32728____Item_PropertyInfo = 
{
	&IList_1_t32728_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249202_MethodInfo/* get */
	, &IList_1_set_Item_m249203_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32728_PropertyInfos[] =
{
	&IList_1_t32728____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpeechStatus_t1757_0_0_0;
static ParameterInfo IList_1_t32728_IList_1_IndexOf_m249204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechStatus_t1757_0_0_0},
};
extern TypeInfo IList_1_t32728_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249204_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32728_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32728_IList_1_IndexOf_m249204_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SpeechStatus_t1757_0_0_0;
static ParameterInfo IList_1_t32728_IList_1_Insert_m249205_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpeechStatus_t1757_0_0_0},
};
extern TypeInfo IList_1_t32728_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249205_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32728_IList_1_Insert_m249205_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32728_IList_1_RemoveAt_m249206_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32728_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249206_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32728_IList_1_RemoveAt_m249206_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32728_IList_1_get_Item_m249202_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32728_il2cpp_TypeInfo;
extern Il2CppType SpeechStatus_t1757_0_0_0;
extern void* RuntimeInvoker_SpeechStatus_t1757_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249202_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32728_il2cpp_TypeInfo/* declaring_type */
	, &SpeechStatus_t1757_0_0_0/* return_type */
	, RuntimeInvoker_SpeechStatus_t1757_Int32_t73/* invoker_method */
	, IList_1_t32728_IList_1_get_Item_m249202_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SpeechStatus_t1757_0_0_0;
static ParameterInfo IList_1_t32728_IList_1_set_Item_m249203_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpeechStatus_t1757_0_0_0},
};
extern TypeInfo IList_1_t32728_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechEngine/SpeechStatus>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249203_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32728_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32728_IList_1_set_Item_m249203_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32728_MethodInfos[] =
{
	&IList_1_IndexOf_m249204_MethodInfo,
	&IList_1_Insert_m249205_MethodInfo,
	&IList_1_RemoveAt_m249206_MethodInfo,
	&IList_1_get_Item_m249202_MethodInfo,
	&IList_1_set_Item_m249203_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32727_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32729_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32728_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32727_il2cpp_TypeInfo,
	&IEnumerable_1_t32729_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32728_0_0_0;
extern Il2CppType IList_1_t32728_1_0_0;
struct IList_1_t32728;
extern TypeInfo IList_1_t32728_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32728_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32728_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32728_MethodInfos/* methods */
	, IList_1_t32728_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32728_il2cpp_TypeInfo/* element_class */
	, IList_1_t32728_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32728_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32728_0_0_0/* byval_arg */
	, &IList_1_t32728_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32728_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27843_il2cpp_TypeInfo;

// SpeechLogic
#include "AssemblyU2DCSharp_SpeechLogic.h"


// T System.Collections.Generic.IEnumerator`1<SpeechLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SpeechLogic>
extern MethodInfo IEnumerator_1_get_Current_m249207_MethodInfo;
static PropertyInfo IEnumerator_1_t27843____Current_PropertyInfo = 
{
	&IEnumerator_1_t27843_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249207_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27843_PropertyInfos[] =
{
	&IEnumerator_1_t27843____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27843_il2cpp_TypeInfo;
extern Il2CppType SpeechLogic_t1291_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SpeechLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249207_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27843_il2cpp_TypeInfo/* declaring_type */
	, &SpeechLogic_t1291_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27843_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249207_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27843_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27843_0_0_0;
extern Il2CppType IEnumerator_1_t27843_1_0_0;
struct IEnumerator_1_t27843;
extern TypeInfo IEnumerator_1_t27843_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27843_GenericClass;
TypeInfo IEnumerator_1_t27843_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27843_MethodInfos/* methods */
	, IEnumerator_1_t27843_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27843_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27843_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27843_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27843_0_0_0/* byval_arg */
	, &IEnumerator_1_t27843_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27843_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<SpeechLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1481.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SpeechLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1481MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern TypeInfo SpeechLogic_t1291_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137418_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpeechLogic_t1291_m203246_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<SpeechLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SpeechLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisSpeechLogic_t1291_m203246(__this, p0, method) (SpeechLogic_t1291 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSpeechLogic_t1291_m203246_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SpeechLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SpeechLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SpeechLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SpeechLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SpeechLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<SpeechLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SpeechLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18684____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18684, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18684____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18684, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18684_FieldInfos[] =
{
	&InternalEnumerator_1_t18684____array_FieldInfo,
	&InternalEnumerator_1_t18684____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137415_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18684____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18684_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137415_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137418_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18684____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18684_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137418_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18684_PropertyInfos[] =
{
	&InternalEnumerator_1_t18684____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18684____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18684_InternalEnumerator_1__ctor_m137413_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137413_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18684_InternalEnumerator_1__ctor_m137413_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137414_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SpeechLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137415_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SpeechLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137416_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SpeechLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137417_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern Il2CppType SpeechLogic_t1291_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SpeechLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137418_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* declaring_type */
	, &SpeechLogic_t1291_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18684_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137413_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137414_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137415_MethodInfo,
	&InternalEnumerator_1_Dispose_m137416_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137417_MethodInfo,
	&InternalEnumerator_1_get_Current_m137418_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137415_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137417_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137414_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137416_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137418_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18684_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137415_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137417_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137414_MethodInfo,
	&InternalEnumerator_1_Dispose_m137416_MethodInfo,
	&InternalEnumerator_1_get_Current_m137418_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27843_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18684_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27843_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27843_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18684_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27843_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137418_MethodInfo;
extern TypeInfo SpeechLogic_t1291_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpeechLogic_t1291_m203246_MethodInfo;
static void* InternalEnumerator_1_t18684_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137418_MethodInfo,
	&SpeechLogic_t1291_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSpeechLogic_t1291_m203246_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18684_0_0_0;
extern Il2CppType InternalEnumerator_1_t18684_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18684_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18684_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18684_MethodInfos/* methods */
	, InternalEnumerator_1_t18684_PropertyInfos/* properties */
	, InternalEnumerator_1_t18684_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18684_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18684_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18684_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18684_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18684_1_0_0/* this_arg */
	, InternalEnumerator_1_t18684_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18684_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18684_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18684)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SpeechLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SpeechLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SpeechLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SpeechLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SpeechLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SpeechLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SpeechLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SpeechLogic>
extern MethodInfo ICollection_1_get_Count_m249208_MethodInfo;
static PropertyInfo ICollection_1_t32730____Count_PropertyInfo = 
{
	&ICollection_1_t32730_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249208_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249209_MethodInfo;
static PropertyInfo ICollection_1_t32730____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32730_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249209_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32730_PropertyInfos[] =
{
	&ICollection_1_t32730____Count_PropertyInfo,
	&ICollection_1_t32730____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SpeechLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249208_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249209_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo ICollection_1_t32730_ICollection_1_Add_m249210_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechLogic>::Add(T)
MethodInfo ICollection_1_Add_m249210_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32730_ICollection_1_Add_m249210_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechLogic>::Clear()
MethodInfo ICollection_1_Clear_m249211_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo ICollection_1_t32730_ICollection_1_Contains_m249212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249212_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32730_ICollection_1_Contains_m249212_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechLogicU5BU5D_t25874_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32730_ICollection_1_CopyTo_m249213_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpeechLogicU5BU5D_t25874_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SpeechLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249213_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32730_ICollection_1_CopyTo_m249213_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo ICollection_1_t32730_ICollection_1_Remove_m249214_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SpeechLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249214_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32730_ICollection_1_Remove_m249214_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32730_MethodInfos[] =
{
	&ICollection_1_get_Count_m249208_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249209_MethodInfo,
	&ICollection_1_Add_m249210_MethodInfo,
	&ICollection_1_Clear_m249211_MethodInfo,
	&ICollection_1_Contains_m249212_MethodInfo,
	&ICollection_1_CopyTo_m249213_MethodInfo,
	&ICollection_1_Remove_m249214_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32732_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32730_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32732_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32730_0_0_0;
extern Il2CppType ICollection_1_t32730_1_0_0;
struct ICollection_1_t32730;
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32730_GenericClass;
TypeInfo ICollection_1_t32730_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32730_MethodInfos/* methods */
	, ICollection_1_t32730_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32730_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32730_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32730_0_0_0/* byval_arg */
	, &ICollection_1_t32730_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32730_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32732_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SpeechLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SpeechLogic>
extern TypeInfo IEnumerable_1_t32732_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27843_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SpeechLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249215_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32732_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27843_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32732_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249215_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32732_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32732_0_0_0;
extern Il2CppType IEnumerable_1_t32732_1_0_0;
struct IEnumerable_1_t32732;
extern TypeInfo IEnumerable_1_t32732_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32732_GenericClass;
TypeInfo IEnumerable_1_t32732_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32732_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32732_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32732_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32732_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32732_0_0_0/* byval_arg */
	, &IEnumerable_1_t32732_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32732_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32731_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SpeechLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SpeechLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SpeechLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SpeechLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SpeechLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SpeechLogic>
extern MethodInfo IList_1_get_Item_m249216_MethodInfo;
extern MethodInfo IList_1_set_Item_m249217_MethodInfo;
static PropertyInfo IList_1_t32731____Item_PropertyInfo = 
{
	&IList_1_t32731_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249216_MethodInfo/* get */
	, &IList_1_set_Item_m249217_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32731_PropertyInfos[] =
{
	&IList_1_t32731____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo IList_1_t32731_IList_1_IndexOf_m249218_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo IList_1_t32731_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SpeechLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249218_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32731_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32731_IList_1_IndexOf_m249218_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo IList_1_t32731_IList_1_Insert_m249219_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo IList_1_t32731_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249219_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32731_IList_1_Insert_m249219_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32731_IList_1_RemoveAt_m249220_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32731_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249220_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32731_IList_1_RemoveAt_m249220_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32731_IList_1_get_Item_m249216_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32731_il2cpp_TypeInfo;
extern Il2CppType SpeechLogic_t1291_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SpeechLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249216_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32731_il2cpp_TypeInfo/* declaring_type */
	, &SpeechLogic_t1291_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32731_IList_1_get_Item_m249216_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo IList_1_t32731_IList_1_set_Item_m249217_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo IList_1_t32731_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SpeechLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249217_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32731_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32731_IList_1_set_Item_m249217_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32731_MethodInfos[] =
{
	&IList_1_IndexOf_m249218_MethodInfo,
	&IList_1_Insert_m249219_MethodInfo,
	&IList_1_RemoveAt_m249220_MethodInfo,
	&IList_1_get_Item_m249216_MethodInfo,
	&IList_1_set_Item_m249217_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32730_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32732_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32731_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32730_il2cpp_TypeInfo,
	&IEnumerable_1_t32732_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32731_0_0_0;
extern Il2CppType IList_1_t32731_1_0_0;
struct IList_1_t32731;
extern TypeInfo IList_1_t32731_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32731_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32731_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32731_MethodInfos/* methods */
	, IList_1_t32731_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32731_il2cpp_TypeInfo/* element_class */
	, IList_1_t32731_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32731_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32731_0_0_0/* byval_arg */
	, &IList_1_t32731_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32731_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<SpeechLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_320.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18685_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SpeechLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_320MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.InvokableCall`1<SpeechLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_316.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18685_il2cpp_TypeInfo;
extern TypeInfo SpeechLogic_t1291_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SpeechLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_316MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137421_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137423_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SpeechLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SpeechLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SpeechLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18685____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18685_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18685, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18685_FieldInfos[] =
{
	&CachedInvokableCall_1_t18685____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18685_CachedInvokableCall_1__ctor_m137419_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18685_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SpeechLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137419_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18685_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18685_CachedInvokableCall_1__ctor_m137419_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18685_CachedInvokableCall_1_Invoke_m137420_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18685_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SpeechLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137420_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18685_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18685_CachedInvokableCall_1_Invoke_m137420_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18685_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137419_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137420_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137420_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137424_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18685_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137420_MethodInfo,
	&InvokableCall_1_Find_m137424_MethodInfo,
};
extern Il2CppType UnityAction_1_t18687_0_0_0;
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSpeechLogic_t1291_m203256_MethodInfo;
extern TypeInfo SpeechLogic_t1291_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137426_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137421_MethodInfo;
extern TypeInfo SpeechLogic_t1291_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137423_MethodInfo;
static void* CachedInvokableCall_1_t18685_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18687_0_0_0,
	&UnityAction_1_t18687_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSpeechLogic_t1291_m203256_MethodInfo,
	&SpeechLogic_t1291_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137426_MethodInfo,
	&InvokableCall_1__ctor_m137421_MethodInfo,
	&SpeechLogic_t1291_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137423_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18685_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18685_1_0_0;
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18685;
extern TypeInfo CachedInvokableCall_1_t18685_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18685_GenericClass;
TypeInfo CachedInvokableCall_1_t18685_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18685_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18685_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18685_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18685_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18685_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18685_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18685_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18685_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18685_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18685)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SpeechLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_323.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SpeechLogic_t1291_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<SpeechLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_323MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18687_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSpeechLogic_t1291_m203256_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137426_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCall.h"
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<System.Object>(System.Object)
 void BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared (Object_t * __this/* static, unused */, Object_t * p0, MethodInfo* method);
#define BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SpeechLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SpeechLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSpeechLogic_t1291_m203256(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSpeechLogic_t1291_m203256_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SpeechLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SpeechLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SpeechLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SpeechLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SpeechLogic>
extern Il2CppType UnityAction_1_t18687_0_0_1;
FieldInfo InvokableCall_1_t18686____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18687_0_0_1/* type */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18686, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18686_FieldInfos[] =
{
	&InvokableCall_1_t18686____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18686_InvokableCall_1__ctor_m137421_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SpeechLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137421_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18686_InvokableCall_1__ctor_m137421_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18687_0_0_0;
static ParameterInfo InvokableCall_1_t18686_InvokableCall_1__ctor_m137422_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18687_0_0_0},
};
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SpeechLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137422_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18686_InvokableCall_1__ctor_m137422_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18686_InvokableCall_1_Invoke_m137423_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SpeechLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137423_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18686_InvokableCall_1_Invoke_m137423_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18686_InvokableCall_1_Find_m137424_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SpeechLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137424_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18686_InvokableCall_1_Find_m137424_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18686_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137421_MethodInfo,
	&InvokableCall_1__ctor_m137422_MethodInfo,
	&InvokableCall_1_Invoke_m137423_MethodInfo,
	&InvokableCall_1_Find_m137424_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137423_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137424_MethodInfo;
static MethodInfo* InvokableCall_1_t18686_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137423_MethodInfo,
	&InvokableCall_1_Find_m137424_MethodInfo,
};
extern Il2CppType UnityAction_1_t18687_0_0_0;
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSpeechLogic_t1291_m203256_MethodInfo;
extern TypeInfo SpeechLogic_t1291_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137426_MethodInfo;
static void* InvokableCall_1_t18686_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18687_0_0_0,
	&UnityAction_1_t18687_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSpeechLogic_t1291_m203256_MethodInfo,
	&SpeechLogic_t1291_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137426_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18686_0_0_0;
extern Il2CppType InvokableCall_1_t18686_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18686;
extern TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18686_GenericClass;
TypeInfo InvokableCall_1_t18686_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18686_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18686_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18686_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18686_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18686_0_0_0/* byval_arg */
	, &InvokableCall_1_t18686_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18686_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18686_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18686)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<SpeechLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SpeechLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SpeechLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SpeechLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SpeechLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18687_UnityAction_1__ctor_m137425_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SpeechLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137425_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18687_UnityAction_1__ctor_m137425_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechLogic_t1291_0_0_0;
static ParameterInfo UnityAction_1_t18687_UnityAction_1_Invoke_m137426_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
};
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SpeechLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137426_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18687_UnityAction_1_Invoke_m137426_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SpeechLogic_t1291_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18687_UnityAction_1_BeginInvoke_m137427_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SpeechLogic_t1291_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SpeechLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137427_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18687_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18687_UnityAction_1_BeginInvoke_m137427_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18687_UnityAction_1_EndInvoke_m137428_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SpeechLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137428_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18687_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18687_UnityAction_1_EndInvoke_m137428_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18687_MethodInfos[] =
{
	&UnityAction_1__ctor_m137425_MethodInfo,
	&UnityAction_1_Invoke_m137426_MethodInfo,
	&UnityAction_1_BeginInvoke_m137427_MethodInfo,
	&UnityAction_1_EndInvoke_m137428_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137426_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137427_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137428_MethodInfo;
static MethodInfo* UnityAction_1_t18687_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137426_MethodInfo,
	&UnityAction_1_BeginInvoke_m137427_MethodInfo,
	&UnityAction_1_EndInvoke_m137428_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18687_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18687_0_0_0;
extern Il2CppType UnityAction_1_t18687_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18687;
extern TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18687_GenericClass;
TypeInfo UnityAction_1_t18687_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18687_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18687_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18687_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18687_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18687_0_0_0/* byval_arg */
	, &UnityAction_1_t18687_1_0_0/* this_arg */
	, UnityAction_1_t18687_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18687_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18687)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27844_il2cpp_TypeInfo;

// StoryDialogLogic
#include "AssemblyU2DCSharp_StoryDialogLogic.h"


// T System.Collections.Generic.IEnumerator`1<StoryDialogLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<StoryDialogLogic>
extern MethodInfo IEnumerator_1_get_Current_m249221_MethodInfo;
static PropertyInfo IEnumerator_1_t27844____Current_PropertyInfo = 
{
	&IEnumerator_1_t27844_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249221_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27844_PropertyInfos[] =
{
	&IEnumerator_1_t27844____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27844_il2cpp_TypeInfo;
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<StoryDialogLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249221_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27844_il2cpp_TypeInfo/* declaring_type */
	, &StoryDialogLogic_t1764_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27844_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249221_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27844_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27844_0_0_0;
extern Il2CppType IEnumerator_1_t27844_1_0_0;
struct IEnumerator_1_t27844;
extern TypeInfo IEnumerator_1_t27844_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27844_GenericClass;
TypeInfo IEnumerator_1_t27844_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27844_MethodInfos/* methods */
	, IEnumerator_1_t27844_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27844_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27844_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27844_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27844_0_0_0/* byval_arg */
	, &IEnumerator_1_t27844_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27844_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<StoryDialogLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1482.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<StoryDialogLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1482MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern TypeInfo StoryDialogLogic_t1764_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137434_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStoryDialogLogic_t1764_m203258_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<StoryDialogLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<StoryDialogLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisStoryDialogLogic_t1764_m203258(__this, p0, method) (StoryDialogLogic_t1764 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisStoryDialogLogic_t1764_m203258_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<StoryDialogLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<StoryDialogLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<StoryDialogLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<StoryDialogLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<StoryDialogLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<StoryDialogLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<StoryDialogLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18688____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18688, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18688____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18688, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18688_FieldInfos[] =
{
	&InternalEnumerator_1_t18688____array_FieldInfo,
	&InternalEnumerator_1_t18688____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137431_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18688____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18688_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137431_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137434_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18688____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18688_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137434_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18688_PropertyInfos[] =
{
	&InternalEnumerator_1_t18688____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18688____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18688_InternalEnumerator_1__ctor_m137429_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<StoryDialogLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137429_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18688_InternalEnumerator_1__ctor_m137429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<StoryDialogLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137430_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<StoryDialogLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137431_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<StoryDialogLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137432_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<StoryDialogLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137433_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<StoryDialogLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137434_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* declaring_type */
	, &StoryDialogLogic_t1764_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18688_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137429_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137430_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137431_MethodInfo,
	&InternalEnumerator_1_Dispose_m137432_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137433_MethodInfo,
	&InternalEnumerator_1_get_Current_m137434_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137431_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137433_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137430_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137432_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137434_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18688_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137431_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137433_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137430_MethodInfo,
	&InternalEnumerator_1_Dispose_m137432_MethodInfo,
	&InternalEnumerator_1_get_Current_m137434_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27844_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18688_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27844_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27844_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18688_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27844_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137434_MethodInfo;
extern TypeInfo StoryDialogLogic_t1764_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStoryDialogLogic_t1764_m203258_MethodInfo;
static void* InternalEnumerator_1_t18688_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137434_MethodInfo,
	&StoryDialogLogic_t1764_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisStoryDialogLogic_t1764_m203258_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18688_0_0_0;
extern Il2CppType InternalEnumerator_1_t18688_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18688_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18688_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18688_MethodInfos/* methods */
	, InternalEnumerator_1_t18688_PropertyInfos/* properties */
	, InternalEnumerator_1_t18688_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18688_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18688_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18688_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18688_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18688_1_0_0/* this_arg */
	, InternalEnumerator_1_t18688_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18688_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18688_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18688)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<StoryDialogLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<StoryDialogLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<StoryDialogLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<StoryDialogLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<StoryDialogLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<StoryDialogLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<StoryDialogLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<StoryDialogLogic>
extern MethodInfo ICollection_1_get_Count_m249222_MethodInfo;
static PropertyInfo ICollection_1_t32733____Count_PropertyInfo = 
{
	&ICollection_1_t32733_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249222_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249223_MethodInfo;
static PropertyInfo ICollection_1_t32733____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32733_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249223_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32733_PropertyInfos[] =
{
	&ICollection_1_t32733____Count_PropertyInfo,
	&ICollection_1_t32733____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<StoryDialogLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249222_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<StoryDialogLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249223_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo ICollection_1_t32733_ICollection_1_Add_m249224_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<StoryDialogLogic>::Add(T)
MethodInfo ICollection_1_Add_m249224_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32733_ICollection_1_Add_m249224_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<StoryDialogLogic>::Clear()
MethodInfo ICollection_1_Clear_m249225_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo ICollection_1_t32733_ICollection_1_Contains_m249226_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<StoryDialogLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249226_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32733_ICollection_1_Contains_m249226_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType StoryDialogLogicU5BU5D_t25875_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32733_ICollection_1_CopyTo_m249227_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogicU5BU5D_t25875_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<StoryDialogLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249227_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32733_ICollection_1_CopyTo_m249227_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo ICollection_1_t32733_ICollection_1_Remove_m249228_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<StoryDialogLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249228_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32733_ICollection_1_Remove_m249228_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32733_MethodInfos[] =
{
	&ICollection_1_get_Count_m249222_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249223_MethodInfo,
	&ICollection_1_Add_m249224_MethodInfo,
	&ICollection_1_Clear_m249225_MethodInfo,
	&ICollection_1_Contains_m249226_MethodInfo,
	&ICollection_1_CopyTo_m249227_MethodInfo,
	&ICollection_1_Remove_m249228_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32735_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32733_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32735_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32733_0_0_0;
extern Il2CppType ICollection_1_t32733_1_0_0;
struct ICollection_1_t32733;
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32733_GenericClass;
TypeInfo ICollection_1_t32733_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32733_MethodInfos/* methods */
	, ICollection_1_t32733_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32733_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32733_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32733_0_0_0/* byval_arg */
	, &ICollection_1_t32733_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32733_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32735_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<StoryDialogLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<StoryDialogLogic>
extern TypeInfo IEnumerable_1_t32735_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27844_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<StoryDialogLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249229_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32735_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27844_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32735_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249229_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32735_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32735_0_0_0;
extern Il2CppType IEnumerable_1_t32735_1_0_0;
struct IEnumerable_1_t32735;
extern TypeInfo IEnumerable_1_t32735_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32735_GenericClass;
TypeInfo IEnumerable_1_t32735_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32735_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32735_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32735_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32735_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32735_0_0_0/* byval_arg */
	, &IEnumerable_1_t32735_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32735_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32734_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<StoryDialogLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<StoryDialogLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<StoryDialogLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<StoryDialogLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<StoryDialogLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<StoryDialogLogic>
extern MethodInfo IList_1_get_Item_m249230_MethodInfo;
extern MethodInfo IList_1_set_Item_m249231_MethodInfo;
static PropertyInfo IList_1_t32734____Item_PropertyInfo = 
{
	&IList_1_t32734_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249230_MethodInfo/* get */
	, &IList_1_set_Item_m249231_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32734_PropertyInfos[] =
{
	&IList_1_t32734____Item_PropertyInfo,
	NULL
};
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo IList_1_t32734_IList_1_IndexOf_m249232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo IList_1_t32734_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<StoryDialogLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249232_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32734_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32734_IList_1_IndexOf_m249232_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo IList_1_t32734_IList_1_Insert_m249233_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo IList_1_t32734_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<StoryDialogLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249233_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32734_IList_1_Insert_m249233_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32734_IList_1_RemoveAt_m249234_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32734_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<StoryDialogLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249234_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32734_IList_1_RemoveAt_m249234_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32734_IList_1_get_Item_m249230_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32734_il2cpp_TypeInfo;
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<StoryDialogLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249230_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32734_il2cpp_TypeInfo/* declaring_type */
	, &StoryDialogLogic_t1764_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32734_IList_1_get_Item_m249230_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo IList_1_t32734_IList_1_set_Item_m249231_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo IList_1_t32734_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<StoryDialogLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249231_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32734_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32734_IList_1_set_Item_m249231_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32734_MethodInfos[] =
{
	&IList_1_IndexOf_m249232_MethodInfo,
	&IList_1_Insert_m249233_MethodInfo,
	&IList_1_RemoveAt_m249234_MethodInfo,
	&IList_1_get_Item_m249230_MethodInfo,
	&IList_1_set_Item_m249231_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32733_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32735_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32734_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32733_il2cpp_TypeInfo,
	&IEnumerable_1_t32735_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32734_0_0_0;
extern Il2CppType IList_1_t32734_1_0_0;
struct IList_1_t32734;
extern TypeInfo IList_1_t32734_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32734_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32734_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32734_MethodInfos/* methods */
	, IList_1_t32734_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32734_il2cpp_TypeInfo/* element_class */
	, IList_1_t32734_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32734_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32734_0_0_0/* byval_arg */
	, &IList_1_t32734_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32734_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<StoryDialogLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_321.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18689_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<StoryDialogLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_321MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<StoryDialogLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_317.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18689_il2cpp_TypeInfo;
extern TypeInfo StoryDialogLogic_t1764_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<StoryDialogLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_317MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137437_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137439_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<StoryDialogLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<StoryDialogLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<StoryDialogLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18689____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18689_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18689, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18689_FieldInfos[] =
{
	&CachedInvokableCall_1_t18689____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18689_CachedInvokableCall_1__ctor_m137435_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18689_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<StoryDialogLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137435_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18689_CachedInvokableCall_1__ctor_m137435_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18689_CachedInvokableCall_1_Invoke_m137436_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18689_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<StoryDialogLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137436_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18689_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18689_CachedInvokableCall_1_Invoke_m137436_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18689_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137435_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137436_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137436_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137440_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18689_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137436_MethodInfo,
	&InvokableCall_1_Find_m137440_MethodInfo,
};
extern Il2CppType UnityAction_1_t18691_0_0_0;
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisStoryDialogLogic_t1764_m203268_MethodInfo;
extern TypeInfo StoryDialogLogic_t1764_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137442_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137437_MethodInfo;
extern TypeInfo StoryDialogLogic_t1764_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137439_MethodInfo;
static void* CachedInvokableCall_1_t18689_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18691_0_0_0,
	&UnityAction_1_t18691_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisStoryDialogLogic_t1764_m203268_MethodInfo,
	&StoryDialogLogic_t1764_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137442_MethodInfo,
	&InvokableCall_1__ctor_m137437_MethodInfo,
	&StoryDialogLogic_t1764_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137439_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18689_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18689_1_0_0;
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18689;
extern TypeInfo CachedInvokableCall_1_t18689_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18689_GenericClass;
TypeInfo CachedInvokableCall_1_t18689_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18689_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18689_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18689_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18689_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18689_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18689_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18689_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18689_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18689_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18689)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<StoryDialogLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_324.h"
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo StoryDialogLogic_t1764_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<StoryDialogLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_324MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18691_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisStoryDialogLogic_t1764_m203268_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137442_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<StoryDialogLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<StoryDialogLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisStoryDialogLogic_t1764_m203268(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisStoryDialogLogic_t1764_m203268_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<StoryDialogLogic>
extern Il2CppType UnityAction_1_t18691_0_0_1;
FieldInfo InvokableCall_1_t18690____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18691_0_0_1/* type */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18690, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18690_FieldInfos[] =
{
	&InvokableCall_1_t18690____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18690_InvokableCall_1__ctor_m137437_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137437_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18690_InvokableCall_1__ctor_m137437_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18691_0_0_0;
static ParameterInfo InvokableCall_1_t18690_InvokableCall_1__ctor_m137438_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18691_0_0_0},
};
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137438_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18690_InvokableCall_1__ctor_m137438_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18690_InvokableCall_1_Invoke_m137439_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137439_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18690_InvokableCall_1_Invoke_m137439_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18690_InvokableCall_1_Find_m137440_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<StoryDialogLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137440_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18690_InvokableCall_1_Find_m137440_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18690_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137437_MethodInfo,
	&InvokableCall_1__ctor_m137438_MethodInfo,
	&InvokableCall_1_Invoke_m137439_MethodInfo,
	&InvokableCall_1_Find_m137440_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137439_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137440_MethodInfo;
static MethodInfo* InvokableCall_1_t18690_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137439_MethodInfo,
	&InvokableCall_1_Find_m137440_MethodInfo,
};
extern Il2CppType UnityAction_1_t18691_0_0_0;
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisStoryDialogLogic_t1764_m203268_MethodInfo;
extern TypeInfo StoryDialogLogic_t1764_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137442_MethodInfo;
static void* InvokableCall_1_t18690_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18691_0_0_0,
	&UnityAction_1_t18691_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisStoryDialogLogic_t1764_m203268_MethodInfo,
	&StoryDialogLogic_t1764_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137442_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18690_0_0_0;
extern Il2CppType InvokableCall_1_t18690_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18690;
extern TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18690_GenericClass;
TypeInfo InvokableCall_1_t18690_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18690_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18690_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18690_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18690_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18690_0_0_0/* byval_arg */
	, &InvokableCall_1_t18690_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18690_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18690_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18690)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<StoryDialogLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<StoryDialogLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<StoryDialogLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<StoryDialogLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<StoryDialogLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18691_UnityAction_1__ctor_m137441_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<StoryDialogLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137441_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18691_UnityAction_1__ctor_m137441_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
static ParameterInfo UnityAction_1_t18691_UnityAction_1_Invoke_m137442_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
};
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<StoryDialogLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137442_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18691_UnityAction_1_Invoke_m137442_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType StoryDialogLogic_t1764_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18691_UnityAction_1_BeginInvoke_m137443_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &StoryDialogLogic_t1764_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<StoryDialogLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137443_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18691_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18691_UnityAction_1_BeginInvoke_m137443_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18691_UnityAction_1_EndInvoke_m137444_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<StoryDialogLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137444_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18691_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18691_UnityAction_1_EndInvoke_m137444_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18691_MethodInfos[] =
{
	&UnityAction_1__ctor_m137441_MethodInfo,
	&UnityAction_1_Invoke_m137442_MethodInfo,
	&UnityAction_1_BeginInvoke_m137443_MethodInfo,
	&UnityAction_1_EndInvoke_m137444_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137442_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137443_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137444_MethodInfo;
static MethodInfo* UnityAction_1_t18691_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137442_MethodInfo,
	&UnityAction_1_BeginInvoke_m137443_MethodInfo,
	&UnityAction_1_EndInvoke_m137444_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18691_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18691_0_0_0;
extern Il2CppType UnityAction_1_t18691_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18691;
extern TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18691_GenericClass;
TypeInfo UnityAction_1_t18691_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18691_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18691_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18691_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18691_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18691_0_0_0/* byval_arg */
	, &UnityAction_1_t18691_1_0_0/* this_arg */
	, UnityAction_1_t18691_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18691_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18691)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// Callback`1<System.Boolean>
#include "AssemblyU2DCSharp_Callback_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Callback_1_t1765_il2cpp_TypeInfo;
// Callback`1<System.Boolean>
#include "AssemblyU2DCSharp_Callback_1_genMethodDeclarations.h"



// System.Void Callback`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
extern MethodInfo Callback_1__ctor_m40887_MethodInfo;
 void Callback_1__ctor_m40887 (Callback_1_t1765 * __this, Object_t * ___object, IntPtr_t24 ___method, MethodInfo* method){
	// runtime
	__this->___method_ptr = (methodPointerType)((MethodInfo*)___method.___m_value)->method;
	__this->___method = ___method;
	__this->___m_target = ___object;
}
// System.Void Callback`1<System.Boolean>::Invoke(T)
extern MethodInfo Callback_1_Invoke_m39699_MethodInfo;
 void Callback_1_Invoke_m39699 (Callback_1_t1765 * __this, bool ___arg1, MethodInfo* method){
	// runtime
	typedef  void (*FunctionPointerType) (Object_t * __this, bool ___arg1, MethodInfo* method);
	if (__this->___prev)
		Callback_1_Invoke_m39699((Callback_1_t1765 *)__this->___prev,  ___arg1, method);
	((FunctionPointerType)__this->___method_ptr)(__this->___m_target, ___arg1, (MethodInfo*)(__this->___method.___m_value));
}
// System.IAsyncResult Callback`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
extern MethodInfo Callback_1_BeginInvoke_m137445_MethodInfo;
 Object_t * Callback_1_BeginInvoke_m137445 (Callback_1_t1765 * __this, bool ___arg1, AsyncCallback_t15 * ___callback, Object_t * ___object, MethodInfo* method){
	// runtime
	void *__d_args[2] = {0};
	__d_args[0] = Box(InitializedTypeInfo(&Boolean_t956_il2cpp_TypeInfo), &___arg1);
	return (Object_t *)il2cpp_delegate_begin_invoke((Il2CppDelegate*)__this, __d_args, (Il2CppDelegate*)___callback, (Il2CppObject*)___object);
}
// System.Void Callback`1<System.Boolean>::EndInvoke(System.IAsyncResult)
extern MethodInfo Callback_1_EndInvoke_m137446_MethodInfo;
 void Callback_1_EndInvoke_m137446 (Callback_1_t1765 * __this, Object_t * ___result, MethodInfo* method){
	// runtime
	il2cpp_delegate_end_invoke((Il2CppAsyncResult*) ___result, 0);
}
// Metadata Definition Callback`1<System.Boolean>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo Callback_1_t1765_Callback_1__ctor_m40887_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo Callback_1_t1765_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void Callback`1<System.Boolean>::.ctor(System.Object,System.IntPtr)
MethodInfo Callback_1__ctor_m40887_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Callback_1__ctor_m40887/* method */
	, &Callback_1_t1765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, Callback_1_t1765_Callback_1__ctor_m40887_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Boolean_t956_0_0_0;
static ParameterInfo Callback_1_t1765_Callback_1_Invoke_m39699_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Boolean_t956_0_0_0},
};
extern TypeInfo Callback_1_t1765_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_SByte_t976 (MethodInfo* method, void* obj, void** args);
// System.Void Callback`1<System.Boolean>::Invoke(T)
MethodInfo Callback_1_Invoke_m39699_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&Callback_1_Invoke_m39699/* method */
	, &Callback_1_t1765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_SByte_t976/* invoker_method */
	, Callback_1_t1765_Callback_1_Invoke_m39699_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Boolean_t956_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Callback_1_t1765_Callback_1_BeginInvoke_m137445_ParameterInfos[] = 
{
	{"arg1", 0, 134217728, &EmptyCustomAttributesCache, &Boolean_t956_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Callback_1_t1765_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_SByte_t976_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult Callback`1<System.Boolean>::BeginInvoke(T,System.AsyncCallback,System.Object)
MethodInfo Callback_1_BeginInvoke_m137445_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&Callback_1_BeginInvoke_m137445/* method */
	, &Callback_1_t1765_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_SByte_t976_Object_t_Object_t/* invoker_method */
	, Callback_1_t1765_Callback_1_BeginInvoke_m137445_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo Callback_1_t1765_Callback_1_EndInvoke_m137446_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo Callback_1_t1765_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void Callback`1<System.Boolean>::EndInvoke(System.IAsyncResult)
MethodInfo Callback_1_EndInvoke_m137446_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&Callback_1_EndInvoke_m137446/* method */
	, &Callback_1_t1765_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, Callback_1_t1765_Callback_1_EndInvoke_m137446_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* Callback_1_t1765_MethodInfos[] =
{
	&Callback_1__ctor_m40887_MethodInfo,
	&Callback_1_Invoke_m39699_MethodInfo,
	&Callback_1_BeginInvoke_m137445_MethodInfo,
	&Callback_1_EndInvoke_m137446_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo Callback_1_Invoke_m39699_MethodInfo;
extern MethodInfo Callback_1_BeginInvoke_m137445_MethodInfo;
extern MethodInfo Callback_1_EndInvoke_m137446_MethodInfo;
static MethodInfo* Callback_1_t1765_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&Callback_1_Invoke_m39699_MethodInfo,
	&Callback_1_BeginInvoke_m137445_MethodInfo,
	&Callback_1_EndInvoke_m137446_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Callback_1_t1765_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_AssemblyU2DCSharp_dll_Image;
extern Il2CppType Callback_1_t1765_0_0_0;
extern Il2CppType Callback_1_t1765_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct Callback_1_t1765;
extern TypeInfo Callback_1_t1765_il2cpp_TypeInfo;
extern Il2CppGenericClass Callback_1_t1765_GenericClass;
TypeInfo Callback_1_t1765_il2cpp_TypeInfo = 
{
	&g_AssemblyU2DCSharp_dll_Image/* image */
	, NULL/* gc_desc */
	, "Callback`1"/* name */
	, ""/* namespaze */
	, Callback_1_t1765_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Callback_1_t1765_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Callback_1_t1765_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Callback_1_t1765_il2cpp_TypeInfo/* cast_class */
	, &Callback_1_t1765_0_0_0/* byval_arg */
	, &Callback_1_t1765_1_0_0/* this_arg */
	, Callback_1_t1765_InterfacesOffsets/* interface_offsets */
	, &Callback_1_t1765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Callback_1_t1765)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
// System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>
#include "mscorlib_System_Collections_Generic_KeyValuePair_2_gen_21MethodDeclarations.h"

extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern TypeInfo StringU5BU5D_t333_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo KeyValuePair_2_set_Key_m137448_MethodInfo;
extern MethodInfo KeyValuePair_2_set_Value_m137450_MethodInfo;
extern MethodInfo KeyValuePair_2_get_Key_m137447_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo KeyValuePair_2_get_Value_m137449_MethodInfo;
extern MethodInfo String_Concat_m39120_MethodInfo;


// System.Void System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::.ctor(TKey,TValue)
extern MethodInfo KeyValuePair_2__ctor_m39698_MethodInfo;
 void KeyValuePair_2__ctor_m39698 (KeyValuePair_2_t5612 * __this, bool ___key, String_t* ___value, MethodInfo* method){
	{
		KeyValuePair_2_set_Key_m137448(__this, ___key, /*hidden argument*/&KeyValuePair_2_set_Key_m137448_MethodInfo);
		KeyValuePair_2_set_Value_m137450(__this, ___value, /*hidden argument*/&KeyValuePair_2_set_Value_m137450_MethodInfo);
		return;
	}
}
// TKey System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::get_Key()
extern MethodInfo KeyValuePair_2_get_Key_m137447_MethodInfo;
 bool KeyValuePair_2_get_Key_m137447 (KeyValuePair_2_t5612 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___key);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::set_Key(TKey)
extern MethodInfo KeyValuePair_2_set_Key_m137448_MethodInfo;
 void KeyValuePair_2_set_Key_m137448 (KeyValuePair_2_t5612 * __this, bool ___value, MethodInfo* method){
	{
		__this->___key = ___value;
		return;
	}
}
// TValue System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::get_Value()
extern MethodInfo KeyValuePair_2_get_Value_m137449_MethodInfo;
 String_t* KeyValuePair_2_get_Value_m137449 (KeyValuePair_2_t5612 * __this, MethodInfo* method){
	{
		String_t* L_0 = (__this->___value);
		return L_0;
	}
}
// System.Void System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::set_Value(TValue)
extern MethodInfo KeyValuePair_2_set_Value_m137450_MethodInfo;
 void KeyValuePair_2_set_Value_m137450 (KeyValuePair_2_t5612 * __this, String_t* ___value, MethodInfo* method){
	{
		__this->___value = ___value;
		return;
	}
}
// System.String System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::ToString()
extern MethodInfo KeyValuePair_2_ToString_m137451_MethodInfo;
 String_t* KeyValuePair_2_ToString_m137451 (KeyValuePair_2_t5612 * __this, MethodInfo* method){
	bool V_0 = false;
	String_t* V_1 = {0};
	int32_t G_B2_0 = 0;
	StringU5BU5D_t333* G_B2_1 = {0};
	StringU5BU5D_t333* G_B2_2 = {0};
	int32_t G_B1_0 = 0;
	StringU5BU5D_t333* G_B1_1 = {0};
	StringU5BU5D_t333* G_B1_2 = {0};
	String_t* G_B3_0 = {0};
	int32_t G_B3_1 = 0;
	StringU5BU5D_t333* G_B3_2 = {0};
	StringU5BU5D_t333* G_B3_3 = {0};
	int32_t G_B5_0 = 0;
	StringU5BU5D_t333* G_B5_1 = {0};
	StringU5BU5D_t333* G_B5_2 = {0};
	int32_t G_B4_0 = 0;
	StringU5BU5D_t333* G_B4_1 = {0};
	StringU5BU5D_t333* G_B4_2 = {0};
	String_t* G_B6_0 = {0};
	int32_t G_B6_1 = 0;
	StringU5BU5D_t333* G_B6_2 = {0};
	StringU5BU5D_t333* G_B6_3 = {0};
	{
		StringU5BU5D_t333* L_0 = ((StringU5BU5D_t333*)SZArrayNew(InitializedTypeInfo(&StringU5BU5D_t333_il2cpp_TypeInfo), 5));
		NullCheck(L_0);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_0, 0);
		ArrayElementTypeCheck (L_0, (String_t*) &_stringLiteral369);
		*((String_t**)(String_t**)SZArrayLdElema(L_0, 0)) = (String_t*)(String_t*) &_stringLiteral369;
		StringU5BU5D_t333* L_1 = L_0;
		bool L_2 = KeyValuePair_2_get_Key_m137447(__this, /*hidden argument*/&KeyValuePair_2_get_Key_m137447_MethodInfo);
		bool L_3 = L_2;
		Object_t * L_4 = Box(InitializedTypeInfo(&Boolean_t956_il2cpp_TypeInfo), &L_3);
		G_B1_0 = 1;
		G_B1_1 = L_1;
		G_B1_2 = L_1;
		if (!L_4)
		{
			G_B2_0 = 1;
			G_B2_1 = L_1;
			G_B2_2 = L_1;
			goto IL_0033;
		}
	}
	{
		bool L_5 = KeyValuePair_2_get_Key_m137447(__this, /*hidden argument*/&KeyValuePair_2_get_Key_m137447_MethodInfo);
		V_0 = L_5;
		NullCheck(Box(InitializedTypeInfo(&Boolean_t956_il2cpp_TypeInfo), &(*(&V_0))));
		String_t* L_6 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m4065_MethodInfo, Box(InitializedTypeInfo(&Boolean_t956_il2cpp_TypeInfo), &(*(&V_0))));
		G_B3_0 = L_6;
		G_B3_1 = G_B1_0;
		G_B3_2 = G_B1_1;
		G_B3_3 = G_B1_2;
		goto IL_0038;
	}

IL_0033:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		G_B3_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty);
		G_B3_1 = G_B2_0;
		G_B3_2 = G_B2_1;
		G_B3_3 = G_B2_2;
	}

IL_0038:
	{
		NullCheck(G_B3_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B3_2, G_B3_1);
		ArrayElementTypeCheck (G_B3_2, G_B3_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B3_2, G_B3_1)) = (String_t*)G_B3_0;
		StringU5BU5D_t333* L_7 = G_B3_3;
		NullCheck(L_7);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_7, 2);
		ArrayElementTypeCheck (L_7, (String_t*) &_stringLiteral2377);
		*((String_t**)(String_t**)SZArrayLdElema(L_7, 2)) = (String_t*)(String_t*) &_stringLiteral2377;
		StringU5BU5D_t333* L_8 = L_7;
		String_t* L_9 = KeyValuePair_2_get_Value_m137449(__this, /*hidden argument*/&KeyValuePair_2_get_Value_m137449_MethodInfo);
		String_t* L_10 = L_9;
		G_B4_0 = 3;
		G_B4_1 = L_8;
		G_B4_2 = L_8;
		if (!((String_t*)L_10))
		{
			G_B5_0 = 3;
			G_B5_1 = L_8;
			G_B5_2 = L_8;
			goto IL_0066;
		}
	}
	{
		String_t* L_11 = KeyValuePair_2_get_Value_m137449(__this, /*hidden argument*/&KeyValuePair_2_get_Value_m137449_MethodInfo);
		V_1 = L_11;
		NullCheck((*(&V_1)));
		String_t* L_12 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&Object_ToString_m4065_MethodInfo, (*(&V_1)));
		G_B6_0 = L_12;
		G_B6_1 = G_B4_0;
		G_B6_2 = G_B4_1;
		G_B6_3 = G_B4_2;
		goto IL_006b;
	}

IL_0066:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		G_B6_0 = (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty);
		G_B6_1 = G_B5_0;
		G_B6_2 = G_B5_1;
		G_B6_3 = G_B5_2;
	}

IL_006b:
	{
		NullCheck(G_B6_2);
		IL2CPP_ARRAY_BOUNDS_CHECK(G_B6_2, G_B6_1);
		ArrayElementTypeCheck (G_B6_2, G_B6_0);
		*((String_t**)(String_t**)SZArrayLdElema(G_B6_2, G_B6_1)) = (String_t*)G_B6_0;
		StringU5BU5D_t333* L_13 = G_B6_3;
		NullCheck(L_13);
		IL2CPP_ARRAY_BOUNDS_CHECK(L_13, 4);
		ArrayElementTypeCheck (L_13, (String_t*) &_stringLiteral368);
		*((String_t**)(String_t**)SZArrayLdElema(L_13, 4)) = (String_t*)(String_t*) &_stringLiteral368;
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		String_t* L_14 = String_Concat_m39120(NULL /*static, unused*/, L_13, /*hidden argument*/&String_Concat_m39120_MethodInfo);
		return L_14;
	}
}
// Metadata Definition System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>
extern Il2CppType Boolean_t956_0_0_1;
FieldInfo KeyValuePair_2_t5612____key_FieldInfo = 
{
	"key"/* name */
	, &Boolean_t956_0_0_1/* type */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* parent */
	, offsetof(KeyValuePair_2_t5612, ___key) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType String_t_0_0_1;
FieldInfo KeyValuePair_2_t5612____value_FieldInfo = 
{
	"value"/* name */
	, &String_t_0_0_1/* type */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* parent */
	, offsetof(KeyValuePair_2_t5612, ___value) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* KeyValuePair_2_t5612_FieldInfos[] =
{
	&KeyValuePair_2_t5612____key_FieldInfo,
	&KeyValuePair_2_t5612____value_FieldInfo,
	NULL
};
extern MethodInfo KeyValuePair_2_get_Key_m137447_MethodInfo;
extern MethodInfo KeyValuePair_2_set_Key_m137448_MethodInfo;
static PropertyInfo KeyValuePair_2_t5612____Key_PropertyInfo = 
{
	&KeyValuePair_2_t5612_il2cpp_TypeInfo/* parent */
	, "Key"/* name */
	, &KeyValuePair_2_get_Key_m137447_MethodInfo/* get */
	, &KeyValuePair_2_set_Key_m137448_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo KeyValuePair_2_get_Value_m137449_MethodInfo;
extern MethodInfo KeyValuePair_2_set_Value_m137450_MethodInfo;
static PropertyInfo KeyValuePair_2_t5612____Value_PropertyInfo = 
{
	&KeyValuePair_2_t5612_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &KeyValuePair_2_get_Value_m137449_MethodInfo/* get */
	, &KeyValuePair_2_set_Value_m137450_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* KeyValuePair_2_t5612_PropertyInfos[] =
{
	&KeyValuePair_2_t5612____Key_PropertyInfo,
	&KeyValuePair_2_t5612____Value_PropertyInfo,
	NULL
};
extern Il2CppType Boolean_t956_0_0_0;
extern Il2CppType String_t_0_0_0;
static ParameterInfo KeyValuePair_2_t5612_KeyValuePair_2__ctor_m39698_ParameterInfos[] = 
{
	{"key", 0, 134217728, &EmptyCustomAttributesCache, &Boolean_t956_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_SByte_t976_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::.ctor(TKey,TValue)
MethodInfo KeyValuePair_2__ctor_m39698_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&KeyValuePair_2__ctor_m39698/* method */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_SByte_t976_Object_t/* invoker_method */
	, KeyValuePair_2_t5612_KeyValuePair_2__ctor_m39698_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// TKey System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::get_Key()
MethodInfo KeyValuePair_2_get_Key_m137447_MethodInfo = 
{
	"get_Key"/* name */
	, (methodPointerType)&KeyValuePair_2_get_Key_m137447/* method */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Boolean_t956_0_0_0;
static ParameterInfo KeyValuePair_2_t5612_KeyValuePair_2_set_Key_m137448_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &Boolean_t956_0_0_0},
};
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_SByte_t976 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::set_Key(TKey)
MethodInfo KeyValuePair_2_set_Key_m137448_MethodInfo = 
{
	"set_Key"/* name */
	, (methodPointerType)&KeyValuePair_2_set_Key_m137448/* method */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_SByte_t976/* invoker_method */
	, KeyValuePair_2_t5612_KeyValuePair_2_set_Key_m137448_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// TValue System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::get_Value()
MethodInfo KeyValuePair_2_get_Value_m137449_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&KeyValuePair_2_get_Value_m137449/* method */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2182/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType String_t_0_0_0;
static ParameterInfo KeyValuePair_2_t5612_KeyValuePair_2_set_Value_m137450_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &String_t_0_0_0},
};
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::set_Value(TValue)
MethodInfo KeyValuePair_2_set_Value_m137450_MethodInfo = 
{
	"set_Value"/* name */
	, (methodPointerType)&KeyValuePair_2_set_Value_m137450/* method */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, KeyValuePair_2_t5612_KeyValuePair_2_set_Value_m137450_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2177/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Collections.Generic.KeyValuePair`2<System.Boolean,System.String>::ToString()
MethodInfo KeyValuePair_2_ToString_m137451_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&KeyValuePair_2_ToString_m137451/* method */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* declaring_type */
	, &String_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* KeyValuePair_2_t5612_MethodInfos[] =
{
	&KeyValuePair_2__ctor_m39698_MethodInfo,
	&KeyValuePair_2_get_Key_m137447_MethodInfo,
	&KeyValuePair_2_set_Key_m137448_MethodInfo,
	&KeyValuePair_2_get_Value_m137449_MethodInfo,
	&KeyValuePair_2_set_Value_m137450_MethodInfo,
	&KeyValuePair_2_ToString_m137451_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo KeyValuePair_2_ToString_m137451_MethodInfo;
static MethodInfo* KeyValuePair_2_t5612_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&KeyValuePair_2_ToString_m137451_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType KeyValuePair_2_t5612_0_0_0;
extern Il2CppType KeyValuePair_2_t5612_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo;
extern Il2CppGenericClass KeyValuePair_2_t5612_GenericClass;
extern CustomAttributesCache KeyValuePair_2_t7853__CustomAttributeCache;
TypeInfo KeyValuePair_2_t5612_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "KeyValuePair`2"/* name */
	, "System.Collections.Generic"/* namespaze */
	, KeyValuePair_2_t5612_MethodInfos/* methods */
	, KeyValuePair_2_t5612_PropertyInfos/* properties */
	, KeyValuePair_2_t5612_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, KeyValuePair_2_t5612_VTable/* vtable */
	, &KeyValuePair_2_t7853__CustomAttributeCache/* custom_attributes_cache */
	, &KeyValuePair_2_t5612_il2cpp_TypeInfo/* cast_class */
	, &KeyValuePair_2_t5612_0_0_0/* byval_arg */
	, &KeyValuePair_2_t5612_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &KeyValuePair_2_t5612_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (KeyValuePair_2_t5612)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057033/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 4/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27845_il2cpp_TypeInfo;

// SwordsManToolTipsLogic
#include "AssemblyU2DCSharp_SwordsManToolTipsLogic.h"


// T System.Collections.Generic.IEnumerator`1<SwordsManToolTipsLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SwordsManToolTipsLogic>
extern MethodInfo IEnumerator_1_get_Current_m249235_MethodInfo;
static PropertyInfo IEnumerator_1_t27845____Current_PropertyInfo = 
{
	&IEnumerator_1_t27845_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249235_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27845_PropertyInfos[] =
{
	&IEnumerator_1_t27845____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27845_il2cpp_TypeInfo;
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SwordsManToolTipsLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249235_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27845_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManToolTipsLogic_t1767_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27845_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249235_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27845_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27845_0_0_0;
extern Il2CppType IEnumerator_1_t27845_1_0_0;
struct IEnumerator_1_t27845;
extern TypeInfo IEnumerator_1_t27845_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27845_GenericClass;
TypeInfo IEnumerator_1_t27845_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27845_MethodInfos/* methods */
	, IEnumerator_1_t27845_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27845_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27845_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27845_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27845_0_0_0/* byval_arg */
	, &IEnumerator_1_t27845_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27845_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1483.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1483MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern TypeInfo SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137457_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManToolTipsLogic_t1767_m203270_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SwordsManToolTipsLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SwordsManToolTipsLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisSwordsManToolTipsLogic_t1767_m203270(__this, p0, method) (SwordsManToolTipsLogic_t1767 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManToolTipsLogic_t1767_m203270_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18692____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18692, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18692____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18692, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18692_FieldInfos[] =
{
	&InternalEnumerator_1_t18692____array_FieldInfo,
	&InternalEnumerator_1_t18692____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137454_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18692____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18692_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137454_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137457_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18692____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18692_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137457_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18692_PropertyInfos[] =
{
	&InternalEnumerator_1_t18692____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18692____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18692_InternalEnumerator_1__ctor_m137452_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137452_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18692_InternalEnumerator_1__ctor_m137452_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137453_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137454_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137455_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137456_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SwordsManToolTipsLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137457_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManToolTipsLogic_t1767_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18692_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137452_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137453_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137454_MethodInfo,
	&InternalEnumerator_1_Dispose_m137455_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137456_MethodInfo,
	&InternalEnumerator_1_get_Current_m137457_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137454_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137456_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137453_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137455_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137457_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18692_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137454_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137456_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137453_MethodInfo,
	&InternalEnumerator_1_Dispose_m137455_MethodInfo,
	&InternalEnumerator_1_get_Current_m137457_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27845_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18692_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27845_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27845_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18692_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27845_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137457_MethodInfo;
extern TypeInfo SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManToolTipsLogic_t1767_m203270_MethodInfo;
static void* InternalEnumerator_1_t18692_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137457_MethodInfo,
	&SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSwordsManToolTipsLogic_t1767_m203270_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18692_0_0_0;
extern Il2CppType InternalEnumerator_1_t18692_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18692_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18692_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18692_MethodInfos/* methods */
	, InternalEnumerator_1_t18692_PropertyInfos/* properties */
	, InternalEnumerator_1_t18692_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18692_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18692_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18692_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18692_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18692_1_0_0/* this_arg */
	, InternalEnumerator_1_t18692_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18692_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18692_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18692)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>
extern MethodInfo ICollection_1_get_Count_m249236_MethodInfo;
static PropertyInfo ICollection_1_t32736____Count_PropertyInfo = 
{
	&ICollection_1_t32736_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249236_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249237_MethodInfo;
static PropertyInfo ICollection_1_t32736____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32736_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249237_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32736_PropertyInfos[] =
{
	&ICollection_1_t32736____Count_PropertyInfo,
	&ICollection_1_t32736____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249236_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249237_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo ICollection_1_t32736_ICollection_1_Add_m249238_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Add(T)
MethodInfo ICollection_1_Add_m249238_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32736_ICollection_1_Add_m249238_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Clear()
MethodInfo ICollection_1_Clear_m249239_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo ICollection_1_t32736_ICollection_1_Contains_m249240_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249240_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32736_ICollection_1_Contains_m249240_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsManToolTipsLogicU5BU5D_t25876_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32736_ICollection_1_CopyTo_m249241_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogicU5BU5D_t25876_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249241_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32736_ICollection_1_CopyTo_m249241_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo ICollection_1_t32736_ICollection_1_Remove_m249242_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249242_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32736_ICollection_1_Remove_m249242_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32736_MethodInfos[] =
{
	&ICollection_1_get_Count_m249236_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249237_MethodInfo,
	&ICollection_1_Add_m249238_MethodInfo,
	&ICollection_1_Clear_m249239_MethodInfo,
	&ICollection_1_Contains_m249240_MethodInfo,
	&ICollection_1_CopyTo_m249241_MethodInfo,
	&ICollection_1_Remove_m249242_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32738_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32736_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32738_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32736_0_0_0;
extern Il2CppType ICollection_1_t32736_1_0_0;
struct ICollection_1_t32736;
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32736_GenericClass;
TypeInfo ICollection_1_t32736_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32736_MethodInfos/* methods */
	, ICollection_1_t32736_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32736_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32736_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32736_0_0_0/* byval_arg */
	, &ICollection_1_t32736_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32736_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32738_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManToolTipsLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SwordsManToolTipsLogic>
extern TypeInfo IEnumerable_1_t32738_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27845_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManToolTipsLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249243_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32738_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27845_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32738_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249243_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32738_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32738_0_0_0;
extern Il2CppType IEnumerable_1_t32738_1_0_0;
struct IEnumerable_1_t32738;
extern TypeInfo IEnumerable_1_t32738_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32738_GenericClass;
TypeInfo IEnumerable_1_t32738_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32738_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32738_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32738_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32738_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32738_0_0_0/* byval_arg */
	, &IEnumerable_1_t32738_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32738_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32737_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SwordsManToolTipsLogic>
extern MethodInfo IList_1_get_Item_m249244_MethodInfo;
extern MethodInfo IList_1_set_Item_m249245_MethodInfo;
static PropertyInfo IList_1_t32737____Item_PropertyInfo = 
{
	&IList_1_t32737_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249244_MethodInfo/* get */
	, &IList_1_set_Item_m249245_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32737_PropertyInfos[] =
{
	&IList_1_t32737____Item_PropertyInfo,
	NULL
};
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo IList_1_t32737_IList_1_IndexOf_m249246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo IList_1_t32737_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249246_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32737_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32737_IList_1_IndexOf_m249246_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo IList_1_t32737_IList_1_Insert_m249247_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo IList_1_t32737_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249247_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32737_IList_1_Insert_m249247_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32737_IList_1_RemoveAt_m249248_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32737_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249248_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32737_IList_1_RemoveAt_m249248_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32737_IList_1_get_Item_m249244_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32737_il2cpp_TypeInfo;
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249244_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32737_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManToolTipsLogic_t1767_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32737_IList_1_get_Item_m249244_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo IList_1_t32737_IList_1_set_Item_m249245_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo IList_1_t32737_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249245_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32737_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32737_IList_1_set_Item_m249245_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32737_MethodInfos[] =
{
	&IList_1_IndexOf_m249246_MethodInfo,
	&IList_1_Insert_m249247_MethodInfo,
	&IList_1_RemoveAt_m249248_MethodInfo,
	&IList_1_get_Item_m249244_MethodInfo,
	&IList_1_set_Item_m249245_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32736_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32738_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32737_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32736_il2cpp_TypeInfo,
	&IEnumerable_1_t32738_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32737_0_0_0;
extern Il2CppType IList_1_t32737_1_0_0;
struct IList_1_t32737;
extern TypeInfo IList_1_t32737_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32737_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32737_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32737_MethodInfos/* methods */
	, IList_1_t32737_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32737_il2cpp_TypeInfo/* element_class */
	, IList_1_t32737_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32737_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32737_0_0_0/* byval_arg */
	, &IList_1_t32737_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32737_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<SwordsManToolTipsLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_322.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18693_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SwordsManToolTipsLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_322MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_318.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18693_il2cpp_TypeInfo;
extern TypeInfo SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_318MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137460_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137462_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManToolTipsLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManToolTipsLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SwordsManToolTipsLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18693____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18693_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18693, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18693_FieldInfos[] =
{
	&CachedInvokableCall_1_t18693____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18693_CachedInvokableCall_1__ctor_m137458_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18693_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManToolTipsLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137458_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18693_CachedInvokableCall_1__ctor_m137458_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18693_CachedInvokableCall_1_Invoke_m137459_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18693_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManToolTipsLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137459_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18693_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18693_CachedInvokableCall_1_Invoke_m137459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18693_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137458_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137459_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137459_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137463_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18693_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137459_MethodInfo,
	&InvokableCall_1_Find_m137463_MethodInfo,
};
extern Il2CppType UnityAction_1_t18695_0_0_0;
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManToolTipsLogic_t1767_m203280_MethodInfo;
extern TypeInfo SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137465_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137460_MethodInfo;
extern TypeInfo SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137462_MethodInfo;
static void* CachedInvokableCall_1_t18693_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18695_0_0_0,
	&UnityAction_1_t18695_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManToolTipsLogic_t1767_m203280_MethodInfo,
	&SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137465_MethodInfo,
	&InvokableCall_1__ctor_m137460_MethodInfo,
	&SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137462_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18693_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18693_1_0_0;
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18693;
extern TypeInfo CachedInvokableCall_1_t18693_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18693_GenericClass;
TypeInfo CachedInvokableCall_1_t18693_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18693_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18693_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18693_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18693_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18693_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18693_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18693_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18693_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18693_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18693)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_325.h"
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_325MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18695_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManToolTipsLogic_t1767_m203280_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137465_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SwordsManToolTipsLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SwordsManToolTipsLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManToolTipsLogic_t1767_m203280(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManToolTipsLogic_t1767_m203280_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>
extern Il2CppType UnityAction_1_t18695_0_0_1;
FieldInfo InvokableCall_1_t18694____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18695_0_0_1/* type */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18694, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18694_FieldInfos[] =
{
	&InvokableCall_1_t18694____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18694_InvokableCall_1__ctor_m137460_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137460_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18694_InvokableCall_1__ctor_m137460_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18695_0_0_0;
static ParameterInfo InvokableCall_1_t18694_InvokableCall_1__ctor_m137461_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18695_0_0_0},
};
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137461_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18694_InvokableCall_1__ctor_m137461_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18694_InvokableCall_1_Invoke_m137462_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137462_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18694_InvokableCall_1_Invoke_m137462_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18694_InvokableCall_1_Find_m137463_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SwordsManToolTipsLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137463_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18694_InvokableCall_1_Find_m137463_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18694_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137460_MethodInfo,
	&InvokableCall_1__ctor_m137461_MethodInfo,
	&InvokableCall_1_Invoke_m137462_MethodInfo,
	&InvokableCall_1_Find_m137463_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137462_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137463_MethodInfo;
static MethodInfo* InvokableCall_1_t18694_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137462_MethodInfo,
	&InvokableCall_1_Find_m137463_MethodInfo,
};
extern Il2CppType UnityAction_1_t18695_0_0_0;
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManToolTipsLogic_t1767_m203280_MethodInfo;
extern TypeInfo SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137465_MethodInfo;
static void* InvokableCall_1_t18694_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18695_0_0_0,
	&UnityAction_1_t18695_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManToolTipsLogic_t1767_m203280_MethodInfo,
	&SwordsManToolTipsLogic_t1767_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137465_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18694_0_0_0;
extern Il2CppType InvokableCall_1_t18694_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18694;
extern TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18694_GenericClass;
TypeInfo InvokableCall_1_t18694_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18694_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18694_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18694_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18694_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18694_0_0_0/* byval_arg */
	, &InvokableCall_1_t18694_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18694_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18694_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18694)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18695_UnityAction_1__ctor_m137464_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137464_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18695_UnityAction_1__ctor_m137464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
static ParameterInfo UnityAction_1_t18695_UnityAction_1_Invoke_m137465_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
};
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137465_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18695_UnityAction_1_Invoke_m137465_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsManToolTipsLogic_t1767_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18695_UnityAction_1_BeginInvoke_m137466_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManToolTipsLogic_t1767_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137466_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18695_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18695_UnityAction_1_BeginInvoke_m137466_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18695_UnityAction_1_EndInvoke_m137467_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManToolTipsLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137467_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18695_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18695_UnityAction_1_EndInvoke_m137467_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18695_MethodInfos[] =
{
	&UnityAction_1__ctor_m137464_MethodInfo,
	&UnityAction_1_Invoke_m137465_MethodInfo,
	&UnityAction_1_BeginInvoke_m137466_MethodInfo,
	&UnityAction_1_EndInvoke_m137467_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137465_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137466_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137467_MethodInfo;
static MethodInfo* UnityAction_1_t18695_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137465_MethodInfo,
	&UnityAction_1_BeginInvoke_m137466_MethodInfo,
	&UnityAction_1_EndInvoke_m137467_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18695_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18695_0_0_0;
extern Il2CppType UnityAction_1_t18695_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18695;
extern TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18695_GenericClass;
TypeInfo UnityAction_1_t18695_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18695_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18695_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18695_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18695_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18695_0_0_0/* byval_arg */
	, &UnityAction_1_t18695_1_0_0/* this_arg */
	, UnityAction_1_t18695_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18695_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18695)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27846_il2cpp_TypeInfo;

// SwordsManToolTipsLogic/SwordsMan_ShowType
#include "AssemblyU2DCSharp_SwordsManToolTipsLogic_SwordsMan_ShowType.h"


// T System.Collections.Generic.IEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>
extern MethodInfo IEnumerator_1_get_Current_m249249_MethodInfo;
static PropertyInfo IEnumerator_1_t27846____Current_PropertyInfo = 
{
	&IEnumerator_1_t27846_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249249_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27846_PropertyInfos[] =
{
	&IEnumerator_1_t27846____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27846_il2cpp_TypeInfo;
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
extern void* RuntimeInvoker_SwordsMan_ShowType_t1766 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249249_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27846_il2cpp_TypeInfo/* declaring_type */
	, &SwordsMan_ShowType_t1766_0_0_0/* return_type */
	, RuntimeInvoker_SwordsMan_ShowType_t1766/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27846_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249249_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27846_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27846_0_0_0;
extern Il2CppType IEnumerator_1_t27846_1_0_0;
struct IEnumerator_1_t27846;
extern TypeInfo IEnumerator_1_t27846_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27846_GenericClass;
TypeInfo IEnumerator_1_t27846_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27846_MethodInfos/* methods */
	, IEnumerator_1_t27846_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27846_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27846_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27846_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27846_0_0_0/* byval_arg */
	, &IEnumerator_1_t27846_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27846_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1484.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1484MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern TypeInfo SwordsMan_ShowType_t1766_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137473_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsMan_ShowType_t1766_m203282_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SwordsManToolTipsLogic/SwordsMan_ShowType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SwordsManToolTipsLogic/SwordsMan_ShowType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSwordsMan_ShowType_t1766_m203282 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsMan_ShowType_t1766_m203282_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m137468_MethodInfo;
 void InternalEnumerator_1__ctor_m137468 (InternalEnumerator_1_t18696 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137469_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137469 (InternalEnumerator_1_t18696 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470 (InternalEnumerator_1_t18696 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m137473(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m137473_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SwordsMan_ShowType_t1766_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m137471_MethodInfo;
 void InternalEnumerator_1_Dispose_m137471 (InternalEnumerator_1_t18696 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m137472_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m137472 (InternalEnumerator_1_t18696 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m42374(L_1, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m137473_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m137473 (InternalEnumerator_1_t18696 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5468 * L_1 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_1, (String_t*) &_stringLiteral6626, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5468 * L_3 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_3, (String_t*) &_stringLiteral6627, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m42374(L_5, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisSwordsMan_ShowType_t1766_m203282(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSwordsMan_ShowType_t1766_m203282_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18696____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18696, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18696____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18696, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18696_FieldInfos[] =
{
	&InternalEnumerator_1_t18696____array_FieldInfo,
	&InternalEnumerator_1_t18696____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18696____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18696_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137473_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18696____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18696_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137473_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18696_PropertyInfos[] =
{
	&InternalEnumerator_1_t18696____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18696____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18696_InternalEnumerator_1__ctor_m137468_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137468_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m137468/* method */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18696_InternalEnumerator_1__ctor_m137468_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137469_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137469/* method */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470/* method */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137471_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m137471/* method */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137472_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m137472/* method */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
extern void* RuntimeInvoker_SwordsMan_ShowType_t1766 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137473_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m137473/* method */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* declaring_type */
	, &SwordsMan_ShowType_t1766_0_0_0/* return_type */
	, RuntimeInvoker_SwordsMan_ShowType_t1766/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18696_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137468_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137469_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470_MethodInfo,
	&InternalEnumerator_1_Dispose_m137471_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137472_MethodInfo,
	&InternalEnumerator_1_get_Current_m137473_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137472_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137469_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137471_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137473_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18696_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137470_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137472_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137469_MethodInfo,
	&InternalEnumerator_1_Dispose_m137471_MethodInfo,
	&InternalEnumerator_1_get_Current_m137473_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27846_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18696_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27846_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27846_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18696_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27846_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18696_0_0_0;
extern Il2CppType InternalEnumerator_1_t18696_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18696_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18696_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18696_MethodInfos/* methods */
	, InternalEnumerator_1_t18696_PropertyInfos/* properties */
	, InternalEnumerator_1_t18696_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18696_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18696_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18696_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18696_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18696_1_0_0/* this_arg */
	, InternalEnumerator_1_t18696_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18696_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18696)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>
extern MethodInfo ICollection_1_get_Count_m249250_MethodInfo;
static PropertyInfo ICollection_1_t32739____Count_PropertyInfo = 
{
	&ICollection_1_t32739_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249250_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249251_MethodInfo;
static PropertyInfo ICollection_1_t32739____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32739_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249251_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32739_PropertyInfos[] =
{
	&ICollection_1_t32739____Count_PropertyInfo,
	&ICollection_1_t32739____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Count()
MethodInfo ICollection_1_get_Count_m249250_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249251_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
static ParameterInfo ICollection_1_t32739_ICollection_1_Add_m249252_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsMan_ShowType_t1766_0_0_0},
};
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Add(T)
MethodInfo ICollection_1_Add_m249252_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32739_ICollection_1_Add_m249252_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Clear()
MethodInfo ICollection_1_Clear_m249253_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
static ParameterInfo ICollection_1_t32739_ICollection_1_Contains_m249254_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsMan_ShowType_t1766_0_0_0},
};
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Contains(T)
MethodInfo ICollection_1_Contains_m249254_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32739_ICollection_1_Contains_m249254_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsMan_ShowTypeU5BU5D_t25877_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32739_ICollection_1_CopyTo_m249255_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SwordsMan_ShowTypeU5BU5D_t25877_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249255_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32739_ICollection_1_CopyTo_m249255_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
static ParameterInfo ICollection_1_t32739_ICollection_1_Remove_m249256_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsMan_ShowType_t1766_0_0_0},
};
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Remove(T)
MethodInfo ICollection_1_Remove_m249256_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32739_ICollection_1_Remove_m249256_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32739_MethodInfos[] =
{
	&ICollection_1_get_Count_m249250_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249251_MethodInfo,
	&ICollection_1_Add_m249252_MethodInfo,
	&ICollection_1_Clear_m249253_MethodInfo,
	&ICollection_1_Contains_m249254_MethodInfo,
	&ICollection_1_CopyTo_m249255_MethodInfo,
	&ICollection_1_Remove_m249256_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32741_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32739_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32741_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32739_0_0_0;
extern Il2CppType ICollection_1_t32739_1_0_0;
struct ICollection_1_t32739;
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32739_GenericClass;
TypeInfo ICollection_1_t32739_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32739_MethodInfos/* methods */
	, ICollection_1_t32739_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32739_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32739_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32739_0_0_0/* byval_arg */
	, &ICollection_1_t32739_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32739_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32741_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SwordsManToolTipsLogic/SwordsMan_ShowType>
extern TypeInfo IEnumerable_1_t32741_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27846_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249257_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32741_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27846_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32741_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249257_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32741_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32741_0_0_0;
extern Il2CppType IEnumerable_1_t32741_1_0_0;
struct IEnumerable_1_t32741;
extern TypeInfo IEnumerable_1_t32741_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32741_GenericClass;
TypeInfo IEnumerable_1_t32741_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32741_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32741_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32741_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32741_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32741_0_0_0/* byval_arg */
	, &IEnumerable_1_t32741_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32741_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32740_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>
extern MethodInfo IList_1_get_Item_m249258_MethodInfo;
extern MethodInfo IList_1_set_Item_m249259_MethodInfo;
static PropertyInfo IList_1_t32740____Item_PropertyInfo = 
{
	&IList_1_t32740_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249258_MethodInfo/* get */
	, &IList_1_set_Item_m249259_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32740_PropertyInfos[] =
{
	&IList_1_t32740____Item_PropertyInfo,
	NULL
};
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
static ParameterInfo IList_1_t32740_IList_1_IndexOf_m249260_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsMan_ShowType_t1766_0_0_0},
};
extern TypeInfo IList_1_t32740_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249260_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32740_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32740_IList_1_IndexOf_m249260_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
static ParameterInfo IList_1_t32740_IList_1_Insert_m249261_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SwordsMan_ShowType_t1766_0_0_0},
};
extern TypeInfo IList_1_t32740_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249261_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32740_IList_1_Insert_m249261_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32740_IList_1_RemoveAt_m249262_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32740_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249262_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32740_IList_1_RemoveAt_m249262_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32740_IList_1_get_Item_m249258_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32740_il2cpp_TypeInfo;
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
extern void* RuntimeInvoker_SwordsMan_ShowType_t1766_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249258_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32740_il2cpp_TypeInfo/* declaring_type */
	, &SwordsMan_ShowType_t1766_0_0_0/* return_type */
	, RuntimeInvoker_SwordsMan_ShowType_t1766_Int32_t73/* invoker_method */
	, IList_1_t32740_IList_1_get_Item_m249258_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SwordsMan_ShowType_t1766_0_0_0;
static ParameterInfo IList_1_t32740_IList_1_set_Item_m249259_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SwordsMan_ShowType_t1766_0_0_0},
};
extern TypeInfo IList_1_t32740_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManToolTipsLogic/SwordsMan_ShowType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249259_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32740_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t32740_IList_1_set_Item_m249259_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32740_MethodInfos[] =
{
	&IList_1_IndexOf_m249260_MethodInfo,
	&IList_1_Insert_m249261_MethodInfo,
	&IList_1_RemoveAt_m249262_MethodInfo,
	&IList_1_get_Item_m249258_MethodInfo,
	&IList_1_set_Item_m249259_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32739_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32741_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32740_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32739_il2cpp_TypeInfo,
	&IEnumerable_1_t32741_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32740_0_0_0;
extern Il2CppType IList_1_t32740_1_0_0;
struct IList_1_t32740;
extern TypeInfo IList_1_t32740_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32740_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32740_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32740_MethodInfos/* methods */
	, IList_1_t32740_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32740_il2cpp_TypeInfo/* element_class */
	, IList_1_t32740_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32740_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32740_0_0_0/* byval_arg */
	, &IList_1_t32740_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32740_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27847_il2cpp_TypeInfo;

// SystemAndAutoFightLogic
#include "AssemblyU2DCSharp_SystemAndAutoFightLogic.h"


// T System.Collections.Generic.IEnumerator`1<SystemAndAutoFightLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SystemAndAutoFightLogic>
extern MethodInfo IEnumerator_1_get_Current_m249263_MethodInfo;
static PropertyInfo IEnumerator_1_t27847____Current_PropertyInfo = 
{
	&IEnumerator_1_t27847_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249263_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27847_PropertyInfos[] =
{
	&IEnumerator_1_t27847____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27847_il2cpp_TypeInfo;
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SystemAndAutoFightLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249263_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27847_il2cpp_TypeInfo/* declaring_type */
	, &SystemAndAutoFightLogic_t1768_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27847_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249263_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27847_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27847_0_0_0;
extern Il2CppType IEnumerator_1_t27847_1_0_0;
struct IEnumerator_1_t27847;
extern TypeInfo IEnumerator_1_t27847_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27847_GenericClass;
TypeInfo IEnumerator_1_t27847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27847_MethodInfos/* methods */
	, IEnumerator_1_t27847_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27847_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27847_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27847_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27847_0_0_0/* byval_arg */
	, &IEnumerator_1_t27847_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27847_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1485.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1485MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137479_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSystemAndAutoFightLogic_t1768_m203293_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SystemAndAutoFightLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SystemAndAutoFightLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisSystemAndAutoFightLogic_t1768_m203293(__this, p0, method) (SystemAndAutoFightLogic_t1768 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSystemAndAutoFightLogic_t1768_m203293_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18697____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18697, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18697____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18697, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18697_FieldInfos[] =
{
	&InternalEnumerator_1_t18697____array_FieldInfo,
	&InternalEnumerator_1_t18697____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137476_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18697____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18697_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137476_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137479_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18697____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18697_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137479_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18697_PropertyInfos[] =
{
	&InternalEnumerator_1_t18697____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18697____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18697_InternalEnumerator_1__ctor_m137474_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137474_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18697_InternalEnumerator_1__ctor_m137474_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137475_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137476_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137477_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137478_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SystemAndAutoFightLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137479_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* declaring_type */
	, &SystemAndAutoFightLogic_t1768_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18697_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137475_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137476_MethodInfo,
	&InternalEnumerator_1_Dispose_m137477_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137478_MethodInfo,
	&InternalEnumerator_1_get_Current_m137479_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137476_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137478_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137475_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137477_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137479_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18697_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137476_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137478_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137475_MethodInfo,
	&InternalEnumerator_1_Dispose_m137477_MethodInfo,
	&InternalEnumerator_1_get_Current_m137479_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27847_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18697_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27847_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27847_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18697_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27847_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137479_MethodInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSystemAndAutoFightLogic_t1768_m203293_MethodInfo;
static void* InternalEnumerator_1_t18697_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137479_MethodInfo,
	&SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSystemAndAutoFightLogic_t1768_m203293_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18697_0_0_0;
extern Il2CppType InternalEnumerator_1_t18697_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18697_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18697_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18697_MethodInfos/* methods */
	, InternalEnumerator_1_t18697_PropertyInfos/* properties */
	, InternalEnumerator_1_t18697_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18697_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18697_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18697_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18697_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18697_1_0_0/* this_arg */
	, InternalEnumerator_1_t18697_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18697_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18697_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18697)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>
extern MethodInfo ICollection_1_get_Count_m249264_MethodInfo;
static PropertyInfo ICollection_1_t32742____Count_PropertyInfo = 
{
	&ICollection_1_t32742_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249264_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249265_MethodInfo;
static PropertyInfo ICollection_1_t32742____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32742_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249265_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32742_PropertyInfos[] =
{
	&ICollection_1_t32742____Count_PropertyInfo,
	&ICollection_1_t32742____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249264_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249265_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo ICollection_1_t32742_ICollection_1_Add_m249266_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Add(T)
MethodInfo ICollection_1_Add_m249266_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32742_ICollection_1_Add_m249266_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Clear()
MethodInfo ICollection_1_Clear_m249267_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo ICollection_1_t32742_ICollection_1_Contains_m249268_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249268_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32742_ICollection_1_Contains_m249268_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemAndAutoFightLogicU5BU5D_t25878_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32742_ICollection_1_CopyTo_m249269_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogicU5BU5D_t25878_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249269_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32742_ICollection_1_CopyTo_m249269_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo ICollection_1_t32742_ICollection_1_Remove_m249270_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SystemAndAutoFightLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249270_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32742_ICollection_1_Remove_m249270_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32742_MethodInfos[] =
{
	&ICollection_1_get_Count_m249264_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249265_MethodInfo,
	&ICollection_1_Add_m249266_MethodInfo,
	&ICollection_1_Clear_m249267_MethodInfo,
	&ICollection_1_Contains_m249268_MethodInfo,
	&ICollection_1_CopyTo_m249269_MethodInfo,
	&ICollection_1_Remove_m249270_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32744_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32742_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32744_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32742_0_0_0;
extern Il2CppType ICollection_1_t32742_1_0_0;
struct ICollection_1_t32742;
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32742_GenericClass;
TypeInfo ICollection_1_t32742_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32742_MethodInfos/* methods */
	, ICollection_1_t32742_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32742_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32742_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32742_0_0_0/* byval_arg */
	, &ICollection_1_t32742_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32742_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32744_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SystemAndAutoFightLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SystemAndAutoFightLogic>
extern TypeInfo IEnumerable_1_t32744_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27847_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SystemAndAutoFightLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249271_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32744_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27847_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32744_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249271_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32744_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32744_0_0_0;
extern Il2CppType IEnumerable_1_t32744_1_0_0;
struct IEnumerable_1_t32744;
extern TypeInfo IEnumerable_1_t32744_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32744_GenericClass;
TypeInfo IEnumerable_1_t32744_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32744_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32744_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32744_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32744_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32744_0_0_0/* byval_arg */
	, &IEnumerable_1_t32744_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32744_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32743_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SystemAndAutoFightLogic>
extern MethodInfo IList_1_get_Item_m249272_MethodInfo;
extern MethodInfo IList_1_set_Item_m249273_MethodInfo;
static PropertyInfo IList_1_t32743____Item_PropertyInfo = 
{
	&IList_1_t32743_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249272_MethodInfo/* get */
	, &IList_1_set_Item_m249273_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32743_PropertyInfos[] =
{
	&IList_1_t32743____Item_PropertyInfo,
	NULL
};
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo IList_1_t32743_IList_1_IndexOf_m249274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo IList_1_t32743_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249274_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32743_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32743_IList_1_IndexOf_m249274_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo IList_1_t32743_IList_1_Insert_m249275_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo IList_1_t32743_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249275_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32743_IList_1_Insert_m249275_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32743_IList_1_RemoveAt_m249276_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32743_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249276_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32743_IList_1_RemoveAt_m249276_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32743_IList_1_get_Item_m249272_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32743_il2cpp_TypeInfo;
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249272_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32743_il2cpp_TypeInfo/* declaring_type */
	, &SystemAndAutoFightLogic_t1768_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32743_IList_1_get_Item_m249272_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo IList_1_t32743_IList_1_set_Item_m249273_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo IList_1_t32743_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SystemAndAutoFightLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249273_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32743_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32743_IList_1_set_Item_m249273_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32743_MethodInfos[] =
{
	&IList_1_IndexOf_m249274_MethodInfo,
	&IList_1_Insert_m249275_MethodInfo,
	&IList_1_RemoveAt_m249276_MethodInfo,
	&IList_1_get_Item_m249272_MethodInfo,
	&IList_1_set_Item_m249273_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32742_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32744_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32743_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32742_il2cpp_TypeInfo,
	&IEnumerable_1_t32744_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32743_0_0_0;
extern Il2CppType IList_1_t32743_1_0_0;
struct IList_1_t32743;
extern TypeInfo IList_1_t32743_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32743_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32743_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32743_MethodInfos/* methods */
	, IList_1_t32743_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32743_il2cpp_TypeInfo/* element_class */
	, IList_1_t32743_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32743_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32743_0_0_0/* byval_arg */
	, &IList_1_t32743_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32743_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<SystemAndAutoFightLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_323.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18698_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SystemAndAutoFightLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_323MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_319.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18698_il2cpp_TypeInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_319MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137482_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137484_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemAndAutoFightLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemAndAutoFightLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SystemAndAutoFightLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18698____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18698_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18698, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18698_FieldInfos[] =
{
	&CachedInvokableCall_1_t18698____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18698_CachedInvokableCall_1__ctor_m137480_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18698_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemAndAutoFightLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137480_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18698_CachedInvokableCall_1__ctor_m137480_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18698_CachedInvokableCall_1_Invoke_m137481_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18698_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemAndAutoFightLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137481_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18698_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18698_CachedInvokableCall_1_Invoke_m137481_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18698_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137480_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137481_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137481_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137485_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18698_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137481_MethodInfo,
	&InvokableCall_1_Find_m137485_MethodInfo,
};
extern Il2CppType UnityAction_1_t18700_0_0_0;
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemAndAutoFightLogic_t1768_m203303_MethodInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137487_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137482_MethodInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137484_MethodInfo;
static void* CachedInvokableCall_1_t18698_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18700_0_0_0,
	&UnityAction_1_t18700_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSystemAndAutoFightLogic_t1768_m203303_MethodInfo,
	&SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137487_MethodInfo,
	&InvokableCall_1__ctor_m137482_MethodInfo,
	&SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137484_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18698_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18698_1_0_0;
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18698;
extern TypeInfo CachedInvokableCall_1_t18698_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18698_GenericClass;
TypeInfo CachedInvokableCall_1_t18698_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18698_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18698_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18698_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18698_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18698_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18698_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18698_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18698_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18698_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18698)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_326.h"
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_326MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18700_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemAndAutoFightLogic_t1768_m203303_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137487_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SystemAndAutoFightLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SystemAndAutoFightLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSystemAndAutoFightLogic_t1768_m203303(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemAndAutoFightLogic_t1768_m203303_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>
extern Il2CppType UnityAction_1_t18700_0_0_1;
FieldInfo InvokableCall_1_t18699____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18700_0_0_1/* type */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18699, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18699_FieldInfos[] =
{
	&InvokableCall_1_t18699____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18699_InvokableCall_1__ctor_m137482_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137482_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18699_InvokableCall_1__ctor_m137482_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18700_0_0_0;
static ParameterInfo InvokableCall_1_t18699_InvokableCall_1__ctor_m137483_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18700_0_0_0},
};
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137483_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18699_InvokableCall_1__ctor_m137483_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18699_InvokableCall_1_Invoke_m137484_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137484_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18699_InvokableCall_1_Invoke_m137484_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18699_InvokableCall_1_Find_m137485_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SystemAndAutoFightLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137485_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18699_InvokableCall_1_Find_m137485_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18699_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137482_MethodInfo,
	&InvokableCall_1__ctor_m137483_MethodInfo,
	&InvokableCall_1_Invoke_m137484_MethodInfo,
	&InvokableCall_1_Find_m137485_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137484_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137485_MethodInfo;
static MethodInfo* InvokableCall_1_t18699_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137484_MethodInfo,
	&InvokableCall_1_Find_m137485_MethodInfo,
};
extern Il2CppType UnityAction_1_t18700_0_0_0;
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemAndAutoFightLogic_t1768_m203303_MethodInfo;
extern TypeInfo SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137487_MethodInfo;
static void* InvokableCall_1_t18699_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18700_0_0_0,
	&UnityAction_1_t18700_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSystemAndAutoFightLogic_t1768_m203303_MethodInfo,
	&SystemAndAutoFightLogic_t1768_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137487_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18699_0_0_0;
extern Il2CppType InvokableCall_1_t18699_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18699;
extern TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18699_GenericClass;
TypeInfo InvokableCall_1_t18699_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18699_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18699_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18699_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18699_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18699_0_0_0/* byval_arg */
	, &InvokableCall_1_t18699_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18699_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18699_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18699)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18700_UnityAction_1__ctor_m137486_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137486_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18700_UnityAction_1__ctor_m137486_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
static ParameterInfo UnityAction_1_t18700_UnityAction_1_Invoke_m137487_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
};
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137487_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18700_UnityAction_1_Invoke_m137487_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemAndAutoFightLogic_t1768_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18700_UnityAction_1_BeginInvoke_m137488_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SystemAndAutoFightLogic_t1768_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137488_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18700_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18700_UnityAction_1_BeginInvoke_m137488_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18700_UnityAction_1_EndInvoke_m137489_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SystemAndAutoFightLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137489_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18700_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18700_UnityAction_1_EndInvoke_m137489_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18700_MethodInfos[] =
{
	&UnityAction_1__ctor_m137486_MethodInfo,
	&UnityAction_1_Invoke_m137487_MethodInfo,
	&UnityAction_1_BeginInvoke_m137488_MethodInfo,
	&UnityAction_1_EndInvoke_m137489_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137487_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137488_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137489_MethodInfo;
static MethodInfo* UnityAction_1_t18700_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137487_MethodInfo,
	&UnityAction_1_BeginInvoke_m137488_MethodInfo,
	&UnityAction_1_EndInvoke_m137489_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18700_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18700_0_0_0;
extern Il2CppType UnityAction_1_t18700_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18700;
extern TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18700_GenericClass;
TypeInfo UnityAction_1_t18700_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18700_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18700_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18700_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18700_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18700_0_0_0/* byval_arg */
	, &UnityAction_1_t18700_1_0_0/* this_arg */
	, UnityAction_1_t18700_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18700_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18700)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27848_il2cpp_TypeInfo;

// SystemLogic
#include "AssemblyU2DCSharp_SystemLogic.h"


// T System.Collections.Generic.IEnumerator`1<SystemLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SystemLogic>
extern MethodInfo IEnumerator_1_get_Current_m249277_MethodInfo;
static PropertyInfo IEnumerator_1_t27848____Current_PropertyInfo = 
{
	&IEnumerator_1_t27848_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249277_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27848_PropertyInfos[] =
{
	&IEnumerator_1_t27848____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27848_il2cpp_TypeInfo;
extern Il2CppType SystemLogic_t1769_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SystemLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249277_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27848_il2cpp_TypeInfo/* declaring_type */
	, &SystemLogic_t1769_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27848_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249277_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27848_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27848_0_0_0;
extern Il2CppType IEnumerator_1_t27848_1_0_0;
struct IEnumerator_1_t27848;
extern TypeInfo IEnumerator_1_t27848_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27848_GenericClass;
TypeInfo IEnumerator_1_t27848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27848_MethodInfos/* methods */
	, IEnumerator_1_t27848_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27848_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27848_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27848_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27848_0_0_0/* byval_arg */
	, &IEnumerator_1_t27848_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27848_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<SystemLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1486.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SystemLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1486MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern TypeInfo SystemLogic_t1769_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137495_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSystemLogic_t1769_m203305_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SystemLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SystemLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisSystemLogic_t1769_m203305(__this, p0, method) (SystemLogic_t1769 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSystemLogic_t1769_m203305_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SystemLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SystemLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SystemLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SystemLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SystemLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<SystemLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SystemLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18701____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18701, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18701____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18701, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18701_FieldInfos[] =
{
	&InternalEnumerator_1_t18701____array_FieldInfo,
	&InternalEnumerator_1_t18701____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137492_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18701____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18701_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137492_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137495_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18701____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18701_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137495_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18701_PropertyInfos[] =
{
	&InternalEnumerator_1_t18701____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18701____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18701_InternalEnumerator_1__ctor_m137490_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SystemLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137490_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18701_InternalEnumerator_1__ctor_m137490_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SystemLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137491_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SystemLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137492_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SystemLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137493_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SystemLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137494_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern Il2CppType SystemLogic_t1769_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SystemLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137495_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* declaring_type */
	, &SystemLogic_t1769_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18701_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137490_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137491_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137492_MethodInfo,
	&InternalEnumerator_1_Dispose_m137493_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137494_MethodInfo,
	&InternalEnumerator_1_get_Current_m137495_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137492_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137494_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137491_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137493_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137495_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18701_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137492_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137494_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137491_MethodInfo,
	&InternalEnumerator_1_Dispose_m137493_MethodInfo,
	&InternalEnumerator_1_get_Current_m137495_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27848_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18701_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27848_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27848_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18701_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27848_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137495_MethodInfo;
extern TypeInfo SystemLogic_t1769_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSystemLogic_t1769_m203305_MethodInfo;
static void* InternalEnumerator_1_t18701_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137495_MethodInfo,
	&SystemLogic_t1769_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSystemLogic_t1769_m203305_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18701_0_0_0;
extern Il2CppType InternalEnumerator_1_t18701_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18701_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18701_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18701_MethodInfos/* methods */
	, InternalEnumerator_1_t18701_PropertyInfos/* properties */
	, InternalEnumerator_1_t18701_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18701_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18701_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18701_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18701_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18701_1_0_0/* this_arg */
	, InternalEnumerator_1_t18701_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18701_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18701_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18701)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SystemLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SystemLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SystemLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SystemLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SystemLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SystemLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SystemLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SystemLogic>
extern MethodInfo ICollection_1_get_Count_m249278_MethodInfo;
static PropertyInfo ICollection_1_t32745____Count_PropertyInfo = 
{
	&ICollection_1_t32745_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249278_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249279_MethodInfo;
static PropertyInfo ICollection_1_t32745____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32745_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249279_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32745_PropertyInfos[] =
{
	&ICollection_1_t32745____Count_PropertyInfo,
	&ICollection_1_t32745____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SystemLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249278_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SystemLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249279_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo ICollection_1_t32745_ICollection_1_Add_m249280_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SystemLogic>::Add(T)
MethodInfo ICollection_1_Add_m249280_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32745_ICollection_1_Add_m249280_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SystemLogic>::Clear()
MethodInfo ICollection_1_Clear_m249281_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo ICollection_1_t32745_ICollection_1_Contains_m249282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SystemLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249282_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32745_ICollection_1_Contains_m249282_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemLogicU5BU5D_t25879_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32745_ICollection_1_CopyTo_m249283_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SystemLogicU5BU5D_t25879_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SystemLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249283_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32745_ICollection_1_CopyTo_m249283_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo ICollection_1_t32745_ICollection_1_Remove_m249284_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SystemLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249284_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32745_ICollection_1_Remove_m249284_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32745_MethodInfos[] =
{
	&ICollection_1_get_Count_m249278_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249279_MethodInfo,
	&ICollection_1_Add_m249280_MethodInfo,
	&ICollection_1_Clear_m249281_MethodInfo,
	&ICollection_1_Contains_m249282_MethodInfo,
	&ICollection_1_CopyTo_m249283_MethodInfo,
	&ICollection_1_Remove_m249284_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32747_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32745_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32747_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32745_0_0_0;
extern Il2CppType ICollection_1_t32745_1_0_0;
struct ICollection_1_t32745;
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32745_GenericClass;
TypeInfo ICollection_1_t32745_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32745_MethodInfos/* methods */
	, ICollection_1_t32745_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32745_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32745_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32745_0_0_0/* byval_arg */
	, &ICollection_1_t32745_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32745_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32747_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SystemLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SystemLogic>
extern TypeInfo IEnumerable_1_t32747_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27848_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SystemLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249285_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32747_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27848_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32747_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249285_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32747_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32747_0_0_0;
extern Il2CppType IEnumerable_1_t32747_1_0_0;
struct IEnumerable_1_t32747;
extern TypeInfo IEnumerable_1_t32747_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32747_GenericClass;
TypeInfo IEnumerable_1_t32747_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32747_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32747_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32747_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32747_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32747_0_0_0/* byval_arg */
	, &IEnumerable_1_t32747_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32747_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32746_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SystemLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SystemLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SystemLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SystemLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SystemLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SystemLogic>
extern MethodInfo IList_1_get_Item_m249286_MethodInfo;
extern MethodInfo IList_1_set_Item_m249287_MethodInfo;
static PropertyInfo IList_1_t32746____Item_PropertyInfo = 
{
	&IList_1_t32746_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249286_MethodInfo/* get */
	, &IList_1_set_Item_m249287_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32746_PropertyInfos[] =
{
	&IList_1_t32746____Item_PropertyInfo,
	NULL
};
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo IList_1_t32746_IList_1_IndexOf_m249288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo IList_1_t32746_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SystemLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249288_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32746_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32746_IList_1_IndexOf_m249288_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo IList_1_t32746_IList_1_Insert_m249289_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo IList_1_t32746_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SystemLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249289_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32746_IList_1_Insert_m249289_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32746_IList_1_RemoveAt_m249290_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32746_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SystemLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249290_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32746_IList_1_RemoveAt_m249290_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32746_IList_1_get_Item_m249286_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32746_il2cpp_TypeInfo;
extern Il2CppType SystemLogic_t1769_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SystemLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249286_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32746_il2cpp_TypeInfo/* declaring_type */
	, &SystemLogic_t1769_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32746_IList_1_get_Item_m249286_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo IList_1_t32746_IList_1_set_Item_m249287_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo IList_1_t32746_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SystemLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249287_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32746_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32746_IList_1_set_Item_m249287_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32746_MethodInfos[] =
{
	&IList_1_IndexOf_m249288_MethodInfo,
	&IList_1_Insert_m249289_MethodInfo,
	&IList_1_RemoveAt_m249290_MethodInfo,
	&IList_1_get_Item_m249286_MethodInfo,
	&IList_1_set_Item_m249287_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32745_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32747_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32746_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32745_il2cpp_TypeInfo,
	&IEnumerable_1_t32747_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32746_0_0_0;
extern Il2CppType IList_1_t32746_1_0_0;
struct IList_1_t32746;
extern TypeInfo IList_1_t32746_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32746_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32746_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32746_MethodInfos/* methods */
	, IList_1_t32746_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32746_il2cpp_TypeInfo/* element_class */
	, IList_1_t32746_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32746_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32746_0_0_0/* byval_arg */
	, &IList_1_t32746_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32746_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<SystemLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_324.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18702_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SystemLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_324MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SystemLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_320.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18702_il2cpp_TypeInfo;
extern TypeInfo SystemLogic_t1769_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SystemLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_320MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137498_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137500_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SystemLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18702____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18702_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18702, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18702_FieldInfos[] =
{
	&CachedInvokableCall_1_t18702____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18702_CachedInvokableCall_1__ctor_m137496_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18702_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137496_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18702_CachedInvokableCall_1__ctor_m137496_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18702_CachedInvokableCall_1_Invoke_m137497_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18702_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SystemLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137497_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18702_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18702_CachedInvokableCall_1_Invoke_m137497_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18702_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137496_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137497_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137497_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137501_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18702_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137497_MethodInfo,
	&InvokableCall_1_Find_m137501_MethodInfo,
};
extern Il2CppType UnityAction_1_t18704_0_0_0;
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemLogic_t1769_m203315_MethodInfo;
extern TypeInfo SystemLogic_t1769_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137503_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137498_MethodInfo;
extern TypeInfo SystemLogic_t1769_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137500_MethodInfo;
static void* CachedInvokableCall_1_t18702_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18704_0_0_0,
	&UnityAction_1_t18704_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSystemLogic_t1769_m203315_MethodInfo,
	&SystemLogic_t1769_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137503_MethodInfo,
	&InvokableCall_1__ctor_m137498_MethodInfo,
	&SystemLogic_t1769_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137500_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18702_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18702_1_0_0;
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18702;
extern TypeInfo CachedInvokableCall_1_t18702_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18702_GenericClass;
TypeInfo CachedInvokableCall_1_t18702_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18702_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18702_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18702_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18702_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18702_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18702_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18702_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18702_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18702_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18702)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SystemLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_327.h"
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SystemLogic_t1769_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SystemLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_327MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18704_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemLogic_t1769_m203315_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137503_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SystemLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SystemLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSystemLogic_t1769_m203315(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemLogic_t1769_m203315_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SystemLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SystemLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SystemLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SystemLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SystemLogic>
extern Il2CppType UnityAction_1_t18704_0_0_1;
FieldInfo InvokableCall_1_t18703____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18704_0_0_1/* type */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18703, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18703_FieldInfos[] =
{
	&InvokableCall_1_t18703____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18703_InvokableCall_1__ctor_m137498_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SystemLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137498_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18703_InvokableCall_1__ctor_m137498_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18704_0_0_0;
static ParameterInfo InvokableCall_1_t18703_InvokableCall_1__ctor_m137499_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18704_0_0_0},
};
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SystemLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137499_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18703_InvokableCall_1__ctor_m137499_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18703_InvokableCall_1_Invoke_m137500_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SystemLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137500_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18703_InvokableCall_1_Invoke_m137500_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18703_InvokableCall_1_Find_m137501_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SystemLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137501_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18703_InvokableCall_1_Find_m137501_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18703_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137498_MethodInfo,
	&InvokableCall_1__ctor_m137499_MethodInfo,
	&InvokableCall_1_Invoke_m137500_MethodInfo,
	&InvokableCall_1_Find_m137501_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137500_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137501_MethodInfo;
static MethodInfo* InvokableCall_1_t18703_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137500_MethodInfo,
	&InvokableCall_1_Find_m137501_MethodInfo,
};
extern Il2CppType UnityAction_1_t18704_0_0_0;
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSystemLogic_t1769_m203315_MethodInfo;
extern TypeInfo SystemLogic_t1769_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137503_MethodInfo;
static void* InvokableCall_1_t18703_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18704_0_0_0,
	&UnityAction_1_t18704_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSystemLogic_t1769_m203315_MethodInfo,
	&SystemLogic_t1769_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137503_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18703_0_0_0;
extern Il2CppType InvokableCall_1_t18703_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18703;
extern TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18703_GenericClass;
TypeInfo InvokableCall_1_t18703_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18703_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18703_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18703_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18703_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18703_0_0_0/* byval_arg */
	, &InvokableCall_1_t18703_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18703_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18703_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18703)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SystemLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SystemLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SystemLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SystemLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SystemLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18704_UnityAction_1__ctor_m137502_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SystemLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137502_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18704_UnityAction_1__ctor_m137502_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemLogic_t1769_0_0_0;
static ParameterInfo UnityAction_1_t18704_UnityAction_1_Invoke_m137503_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
};
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SystemLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137503_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18704_UnityAction_1_Invoke_m137503_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType SystemLogic_t1769_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18704_UnityAction_1_BeginInvoke_m137504_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SystemLogic_t1769_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SystemLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137504_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18704_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18704_UnityAction_1_BeginInvoke_m137504_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18704_UnityAction_1_EndInvoke_m137505_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SystemLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137505_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18704_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18704_UnityAction_1_EndInvoke_m137505_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18704_MethodInfos[] =
{
	&UnityAction_1__ctor_m137502_MethodInfo,
	&UnityAction_1_Invoke_m137503_MethodInfo,
	&UnityAction_1_BeginInvoke_m137504_MethodInfo,
	&UnityAction_1_EndInvoke_m137505_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137503_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137504_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137505_MethodInfo;
static MethodInfo* UnityAction_1_t18704_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137503_MethodInfo,
	&UnityAction_1_BeginInvoke_m137504_MethodInfo,
	&UnityAction_1_EndInvoke_m137505_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18704_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18704_0_0_0;
extern Il2CppType UnityAction_1_t18704_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18704;
extern TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18704_GenericClass;
TypeInfo UnityAction_1_t18704_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18704_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18704_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18704_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18704_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18704_0_0_0/* byval_arg */
	, &UnityAction_1_t18704_1_0_0/* this_arg */
	, UnityAction_1_t18704_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18704_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18704)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27849_il2cpp_TypeInfo;

// TargetFrameLogic
#include "AssemblyU2DCSharp_TargetFrameLogic.h"


// T System.Collections.Generic.IEnumerator`1<TargetFrameLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TargetFrameLogic>
extern MethodInfo IEnumerator_1_get_Current_m249291_MethodInfo;
static PropertyInfo IEnumerator_1_t27849____Current_PropertyInfo = 
{
	&IEnumerator_1_t27849_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249291_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27849_PropertyInfos[] =
{
	&IEnumerator_1_t27849____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27849_il2cpp_TypeInfo;
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TargetFrameLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249291_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27849_il2cpp_TypeInfo/* declaring_type */
	, &TargetFrameLogic_t1771_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27849_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249291_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27849_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27849_0_0_0;
extern Il2CppType IEnumerator_1_t27849_1_0_0;
struct IEnumerator_1_t27849;
extern TypeInfo IEnumerator_1_t27849_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27849_GenericClass;
TypeInfo IEnumerator_1_t27849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27849_MethodInfos/* methods */
	, IEnumerator_1_t27849_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27849_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27849_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27849_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27849_0_0_0/* byval_arg */
	, &IEnumerator_1_t27849_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27849_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<TargetFrameLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1487.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TargetFrameLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1487MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern TypeInfo TargetFrameLogic_t1771_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137511_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTargetFrameLogic_t1771_m203317_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TargetFrameLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TargetFrameLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisTargetFrameLogic_t1771_m203317(__this, p0, method) (TargetFrameLogic_t1771 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTargetFrameLogic_t1771_m203317_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TargetFrameLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TargetFrameLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TargetFrameLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TargetFrameLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TargetFrameLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<TargetFrameLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TargetFrameLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18705____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18705, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18705____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18705, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18705_FieldInfos[] =
{
	&InternalEnumerator_1_t18705____array_FieldInfo,
	&InternalEnumerator_1_t18705____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137508_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18705____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18705_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137508_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137511_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18705____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18705_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137511_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18705_PropertyInfos[] =
{
	&InternalEnumerator_1_t18705____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18705____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18705_InternalEnumerator_1__ctor_m137506_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TargetFrameLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137506_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18705_InternalEnumerator_1__ctor_m137506_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TargetFrameLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137507_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TargetFrameLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137508_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TargetFrameLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137509_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TargetFrameLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137510_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TargetFrameLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137511_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* declaring_type */
	, &TargetFrameLogic_t1771_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18705_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137506_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137507_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137508_MethodInfo,
	&InternalEnumerator_1_Dispose_m137509_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137510_MethodInfo,
	&InternalEnumerator_1_get_Current_m137511_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137508_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137510_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137507_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137509_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137511_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18705_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137508_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137510_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137507_MethodInfo,
	&InternalEnumerator_1_Dispose_m137509_MethodInfo,
	&InternalEnumerator_1_get_Current_m137511_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27849_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18705_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27849_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27849_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18705_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27849_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137511_MethodInfo;
extern TypeInfo TargetFrameLogic_t1771_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTargetFrameLogic_t1771_m203317_MethodInfo;
static void* InternalEnumerator_1_t18705_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137511_MethodInfo,
	&TargetFrameLogic_t1771_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTargetFrameLogic_t1771_m203317_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18705_0_0_0;
extern Il2CppType InternalEnumerator_1_t18705_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18705_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18705_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18705_MethodInfos/* methods */
	, InternalEnumerator_1_t18705_PropertyInfos/* properties */
	, InternalEnumerator_1_t18705_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18705_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18705_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18705_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18705_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18705_1_0_0/* this_arg */
	, InternalEnumerator_1_t18705_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18705_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18705_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18705)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TargetFrameLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TargetFrameLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TargetFrameLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TargetFrameLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TargetFrameLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TargetFrameLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TargetFrameLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TargetFrameLogic>
extern MethodInfo ICollection_1_get_Count_m249292_MethodInfo;
static PropertyInfo ICollection_1_t32748____Count_PropertyInfo = 
{
	&ICollection_1_t32748_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249292_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249293_MethodInfo;
static PropertyInfo ICollection_1_t32748____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32748_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249293_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32748_PropertyInfos[] =
{
	&ICollection_1_t32748____Count_PropertyInfo,
	&ICollection_1_t32748____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TargetFrameLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249292_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TargetFrameLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249293_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo ICollection_1_t32748_ICollection_1_Add_m249294_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TargetFrameLogic>::Add(T)
MethodInfo ICollection_1_Add_m249294_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32748_ICollection_1_Add_m249294_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TargetFrameLogic>::Clear()
MethodInfo ICollection_1_Clear_m249295_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo ICollection_1_t32748_ICollection_1_Contains_m249296_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TargetFrameLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249296_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32748_ICollection_1_Contains_m249296_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TargetFrameLogicU5BU5D_t25880_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32748_ICollection_1_CopyTo_m249297_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogicU5BU5D_t25880_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TargetFrameLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249297_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32748_ICollection_1_CopyTo_m249297_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo ICollection_1_t32748_ICollection_1_Remove_m249298_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TargetFrameLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249298_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32748_ICollection_1_Remove_m249298_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32748_MethodInfos[] =
{
	&ICollection_1_get_Count_m249292_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249293_MethodInfo,
	&ICollection_1_Add_m249294_MethodInfo,
	&ICollection_1_Clear_m249295_MethodInfo,
	&ICollection_1_Contains_m249296_MethodInfo,
	&ICollection_1_CopyTo_m249297_MethodInfo,
	&ICollection_1_Remove_m249298_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32750_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32748_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32750_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32748_0_0_0;
extern Il2CppType ICollection_1_t32748_1_0_0;
struct ICollection_1_t32748;
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32748_GenericClass;
TypeInfo ICollection_1_t32748_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32748_MethodInfos/* methods */
	, ICollection_1_t32748_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32748_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32748_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32748_0_0_0/* byval_arg */
	, &ICollection_1_t32748_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32748_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32750_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TargetFrameLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TargetFrameLogic>
extern TypeInfo IEnumerable_1_t32750_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27849_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TargetFrameLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249299_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32750_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27849_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32750_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249299_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32750_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32750_0_0_0;
extern Il2CppType IEnumerable_1_t32750_1_0_0;
struct IEnumerable_1_t32750;
extern TypeInfo IEnumerable_1_t32750_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32750_GenericClass;
TypeInfo IEnumerable_1_t32750_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32750_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32750_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32750_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32750_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32750_0_0_0/* byval_arg */
	, &IEnumerable_1_t32750_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32750_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32749_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TargetFrameLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TargetFrameLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TargetFrameLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TargetFrameLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TargetFrameLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TargetFrameLogic>
extern MethodInfo IList_1_get_Item_m249300_MethodInfo;
extern MethodInfo IList_1_set_Item_m249301_MethodInfo;
static PropertyInfo IList_1_t32749____Item_PropertyInfo = 
{
	&IList_1_t32749_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249300_MethodInfo/* get */
	, &IList_1_set_Item_m249301_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32749_PropertyInfos[] =
{
	&IList_1_t32749____Item_PropertyInfo,
	NULL
};
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo IList_1_t32749_IList_1_IndexOf_m249302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo IList_1_t32749_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TargetFrameLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249302_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32749_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32749_IList_1_IndexOf_m249302_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo IList_1_t32749_IList_1_Insert_m249303_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo IList_1_t32749_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TargetFrameLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249303_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32749_IList_1_Insert_m249303_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32749_IList_1_RemoveAt_m249304_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32749_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TargetFrameLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249304_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32749_IList_1_RemoveAt_m249304_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32749_IList_1_get_Item_m249300_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32749_il2cpp_TypeInfo;
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TargetFrameLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249300_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32749_il2cpp_TypeInfo/* declaring_type */
	, &TargetFrameLogic_t1771_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32749_IList_1_get_Item_m249300_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo IList_1_t32749_IList_1_set_Item_m249301_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo IList_1_t32749_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TargetFrameLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249301_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32749_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32749_IList_1_set_Item_m249301_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32749_MethodInfos[] =
{
	&IList_1_IndexOf_m249302_MethodInfo,
	&IList_1_Insert_m249303_MethodInfo,
	&IList_1_RemoveAt_m249304_MethodInfo,
	&IList_1_get_Item_m249300_MethodInfo,
	&IList_1_set_Item_m249301_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32748_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32750_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32749_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32748_il2cpp_TypeInfo,
	&IEnumerable_1_t32750_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32749_0_0_0;
extern Il2CppType IList_1_t32749_1_0_0;
struct IList_1_t32749;
extern TypeInfo IList_1_t32749_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32749_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32749_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32749_MethodInfos/* methods */
	, IList_1_t32749_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32749_il2cpp_TypeInfo/* element_class */
	, IList_1_t32749_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32749_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32749_0_0_0/* byval_arg */
	, &IList_1_t32749_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32749_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<TargetFrameLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_325.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18706_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TargetFrameLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_325MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TargetFrameLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_321.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18706_il2cpp_TypeInfo;
extern TypeInfo TargetFrameLogic_t1771_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TargetFrameLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_321MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137514_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137516_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TargetFrameLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TargetFrameLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TargetFrameLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18706____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18706_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18706, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18706_FieldInfos[] =
{
	&CachedInvokableCall_1_t18706____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18706_CachedInvokableCall_1__ctor_m137512_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18706_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TargetFrameLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137512_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18706_CachedInvokableCall_1__ctor_m137512_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18706_CachedInvokableCall_1_Invoke_m137513_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18706_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TargetFrameLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137513_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18706_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18706_CachedInvokableCall_1_Invoke_m137513_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18706_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137512_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137513_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137513_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137517_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18706_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137513_MethodInfo,
	&InvokableCall_1_Find_m137517_MethodInfo,
};
extern Il2CppType UnityAction_1_t18708_0_0_0;
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTargetFrameLogic_t1771_m203327_MethodInfo;
extern TypeInfo TargetFrameLogic_t1771_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137519_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137514_MethodInfo;
extern TypeInfo TargetFrameLogic_t1771_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137516_MethodInfo;
static void* CachedInvokableCall_1_t18706_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18708_0_0_0,
	&UnityAction_1_t18708_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTargetFrameLogic_t1771_m203327_MethodInfo,
	&TargetFrameLogic_t1771_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137519_MethodInfo,
	&InvokableCall_1__ctor_m137514_MethodInfo,
	&TargetFrameLogic_t1771_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137516_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18706_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18706_1_0_0;
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18706;
extern TypeInfo CachedInvokableCall_1_t18706_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18706_GenericClass;
TypeInfo CachedInvokableCall_1_t18706_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18706_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18706_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18706_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18706_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18706_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18706_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18706_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18706_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18706_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18706)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TargetFrameLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_328.h"
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TargetFrameLogic_t1771_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TargetFrameLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_328MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18708_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTargetFrameLogic_t1771_m203327_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137519_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TargetFrameLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TargetFrameLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTargetFrameLogic_t1771_m203327(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTargetFrameLogic_t1771_m203327_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TargetFrameLogic>
extern Il2CppType UnityAction_1_t18708_0_0_1;
FieldInfo InvokableCall_1_t18707____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18708_0_0_1/* type */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18707, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18707_FieldInfos[] =
{
	&InvokableCall_1_t18707____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18707_InvokableCall_1__ctor_m137514_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137514_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18707_InvokableCall_1__ctor_m137514_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18708_0_0_0;
static ParameterInfo InvokableCall_1_t18707_InvokableCall_1__ctor_m137515_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18708_0_0_0},
};
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137515_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18707_InvokableCall_1__ctor_m137515_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18707_InvokableCall_1_Invoke_m137516_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137516_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18707_InvokableCall_1_Invoke_m137516_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18707_InvokableCall_1_Find_m137517_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TargetFrameLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137517_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18707_InvokableCall_1_Find_m137517_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18707_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137514_MethodInfo,
	&InvokableCall_1__ctor_m137515_MethodInfo,
	&InvokableCall_1_Invoke_m137516_MethodInfo,
	&InvokableCall_1_Find_m137517_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137516_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137517_MethodInfo;
static MethodInfo* InvokableCall_1_t18707_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137516_MethodInfo,
	&InvokableCall_1_Find_m137517_MethodInfo,
};
extern Il2CppType UnityAction_1_t18708_0_0_0;
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTargetFrameLogic_t1771_m203327_MethodInfo;
extern TypeInfo TargetFrameLogic_t1771_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137519_MethodInfo;
static void* InvokableCall_1_t18707_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18708_0_0_0,
	&UnityAction_1_t18708_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTargetFrameLogic_t1771_m203327_MethodInfo,
	&TargetFrameLogic_t1771_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137519_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18707_0_0_0;
extern Il2CppType InvokableCall_1_t18707_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18707;
extern TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18707_GenericClass;
TypeInfo InvokableCall_1_t18707_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18707_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18707_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18707_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18707_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18707_0_0_0/* byval_arg */
	, &InvokableCall_1_t18707_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18707_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18707_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18707)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TargetFrameLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TargetFrameLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TargetFrameLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TargetFrameLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TargetFrameLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18708_UnityAction_1__ctor_m137518_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TargetFrameLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137518_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18708_UnityAction_1__ctor_m137518_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
static ParameterInfo UnityAction_1_t18708_UnityAction_1_Invoke_m137519_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
};
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TargetFrameLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137519_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18708_UnityAction_1_Invoke_m137519_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TargetFrameLogic_t1771_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18708_UnityAction_1_BeginInvoke_m137520_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TargetFrameLogic_t1771_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TargetFrameLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137520_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18708_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18708_UnityAction_1_BeginInvoke_m137520_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18708_UnityAction_1_EndInvoke_m137521_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TargetFrameLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137521_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18708_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18708_UnityAction_1_EndInvoke_m137521_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18708_MethodInfos[] =
{
	&UnityAction_1__ctor_m137518_MethodInfo,
	&UnityAction_1_Invoke_m137519_MethodInfo,
	&UnityAction_1_BeginInvoke_m137520_MethodInfo,
	&UnityAction_1_EndInvoke_m137521_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137519_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137520_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137521_MethodInfo;
static MethodInfo* UnityAction_1_t18708_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137519_MethodInfo,
	&UnityAction_1_BeginInvoke_m137520_MethodInfo,
	&UnityAction_1_EndInvoke_m137521_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18708_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18708_0_0_0;
extern Il2CppType UnityAction_1_t18708_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18708;
extern TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18708_GenericClass;
TypeInfo UnityAction_1_t18708_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18708_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18708_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18708_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18708_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18708_0_0_0/* byval_arg */
	, &UnityAction_1_t18708_1_0_0/* this_arg */
	, UnityAction_1_t18708_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18708_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18708)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27850_il2cpp_TypeInfo;

// TeamList
#include "AssemblyU2DCSharp_TeamList.h"


// T System.Collections.Generic.IEnumerator`1<TeamList>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TeamList>
extern MethodInfo IEnumerator_1_get_Current_m249305_MethodInfo;
static PropertyInfo IEnumerator_1_t27850____Current_PropertyInfo = 
{
	&IEnumerator_1_t27850_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249305_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27850_PropertyInfos[] =
{
	&IEnumerator_1_t27850____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27850_il2cpp_TypeInfo;
extern Il2CppType TeamList_t1773_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TeamList>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249305_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27850_il2cpp_TypeInfo/* declaring_type */
	, &TeamList_t1773_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27850_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249305_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27850_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27850_0_0_0;
extern Il2CppType IEnumerator_1_t27850_1_0_0;
struct IEnumerator_1_t27850;
extern TypeInfo IEnumerator_1_t27850_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27850_GenericClass;
TypeInfo IEnumerator_1_t27850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27850_MethodInfos/* methods */
	, IEnumerator_1_t27850_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27850_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27850_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27850_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27850_0_0_0/* byval_arg */
	, &IEnumerator_1_t27850_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27850_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<TeamList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1488.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TeamList>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1488MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern TypeInfo TeamList_t1773_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137527_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamList_t1773_m203329_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TeamList>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TeamList>(System.Int32)
#define Array_InternalArray__get_Item_TisTeamList_t1773_m203329(__this, p0, method) (TeamList_t1773 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTeamList_t1773_m203329_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TeamList>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TeamList>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TeamList>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TeamList>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TeamList>::MoveNext()
// T System.Array/InternalEnumerator`1<TeamList>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TeamList>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18709____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18709, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18709____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18709, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18709_FieldInfos[] =
{
	&InternalEnumerator_1_t18709____array_FieldInfo,
	&InternalEnumerator_1_t18709____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137524_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18709____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18709_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137524_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137527_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18709____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18709_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137527_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18709_PropertyInfos[] =
{
	&InternalEnumerator_1_t18709____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18709____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18709_InternalEnumerator_1__ctor_m137522_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamList>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137522_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18709_InternalEnumerator_1__ctor_m137522_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamList>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137523_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TeamList>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137524_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamList>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137525_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TeamList>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137526_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern Il2CppType TeamList_t1773_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TeamList>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137527_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* declaring_type */
	, &TeamList_t1773_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18709_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137522_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137523_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137524_MethodInfo,
	&InternalEnumerator_1_Dispose_m137525_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137526_MethodInfo,
	&InternalEnumerator_1_get_Current_m137527_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137524_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137526_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137523_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137525_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137527_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18709_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137524_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137526_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137523_MethodInfo,
	&InternalEnumerator_1_Dispose_m137525_MethodInfo,
	&InternalEnumerator_1_get_Current_m137527_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27850_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18709_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27850_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27850_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18709_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27850_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137527_MethodInfo;
extern TypeInfo TeamList_t1773_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamList_t1773_m203329_MethodInfo;
static void* InternalEnumerator_1_t18709_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137527_MethodInfo,
	&TeamList_t1773_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTeamList_t1773_m203329_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18709_0_0_0;
extern Il2CppType InternalEnumerator_1_t18709_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18709_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18709_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18709_MethodInfos/* methods */
	, InternalEnumerator_1_t18709_PropertyInfos/* properties */
	, InternalEnumerator_1_t18709_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18709_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18709_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18709_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18709_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18709_1_0_0/* this_arg */
	, InternalEnumerator_1_t18709_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18709_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18709_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18709)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TeamList>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TeamList>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TeamList>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TeamList>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TeamList>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TeamList>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TeamList>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TeamList>
extern MethodInfo ICollection_1_get_Count_m249306_MethodInfo;
static PropertyInfo ICollection_1_t32751____Count_PropertyInfo = 
{
	&ICollection_1_t32751_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249306_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249307_MethodInfo;
static PropertyInfo ICollection_1_t32751____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32751_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249307_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32751_PropertyInfos[] =
{
	&ICollection_1_t32751____Count_PropertyInfo,
	&ICollection_1_t32751____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TeamList>::get_Count()
MethodInfo ICollection_1_get_Count_m249306_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamList>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249307_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo ICollection_1_t32751_ICollection_1_Add_m249308_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamList>::Add(T)
MethodInfo ICollection_1_Add_m249308_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32751_ICollection_1_Add_m249308_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamList>::Clear()
MethodInfo ICollection_1_Clear_m249309_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo ICollection_1_t32751_ICollection_1_Contains_m249310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamList>::Contains(T)
MethodInfo ICollection_1_Contains_m249310_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32751_ICollection_1_Contains_m249310_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamListU5BU5D_t25881_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32751_ICollection_1_CopyTo_m249311_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TeamListU5BU5D_t25881_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamList>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249311_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32751_ICollection_1_CopyTo_m249311_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo ICollection_1_t32751_ICollection_1_Remove_m249312_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamList>::Remove(T)
MethodInfo ICollection_1_Remove_m249312_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32751_ICollection_1_Remove_m249312_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32751_MethodInfos[] =
{
	&ICollection_1_get_Count_m249306_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249307_MethodInfo,
	&ICollection_1_Add_m249308_MethodInfo,
	&ICollection_1_Clear_m249309_MethodInfo,
	&ICollection_1_Contains_m249310_MethodInfo,
	&ICollection_1_CopyTo_m249311_MethodInfo,
	&ICollection_1_Remove_m249312_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32753_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32751_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32753_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32751_0_0_0;
extern Il2CppType ICollection_1_t32751_1_0_0;
struct ICollection_1_t32751;
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32751_GenericClass;
TypeInfo ICollection_1_t32751_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32751_MethodInfos/* methods */
	, ICollection_1_t32751_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32751_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32751_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32751_0_0_0/* byval_arg */
	, &ICollection_1_t32751_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32751_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32753_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamList>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TeamList>
extern TypeInfo IEnumerable_1_t32753_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27850_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamList>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249313_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32753_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27850_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32753_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249313_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32753_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32753_0_0_0;
extern Il2CppType IEnumerable_1_t32753_1_0_0;
struct IEnumerable_1_t32753;
extern TypeInfo IEnumerable_1_t32753_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32753_GenericClass;
TypeInfo IEnumerable_1_t32753_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32753_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32753_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32753_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32753_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32753_0_0_0/* byval_arg */
	, &IEnumerable_1_t32753_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32753_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32752_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TeamList>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TeamList>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TeamList>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TeamList>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TeamList>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TeamList>
extern MethodInfo IList_1_get_Item_m249314_MethodInfo;
extern MethodInfo IList_1_set_Item_m249315_MethodInfo;
static PropertyInfo IList_1_t32752____Item_PropertyInfo = 
{
	&IList_1_t32752_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249314_MethodInfo/* get */
	, &IList_1_set_Item_m249315_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32752_PropertyInfos[] =
{
	&IList_1_t32752____Item_PropertyInfo,
	NULL
};
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo IList_1_t32752_IList_1_IndexOf_m249316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo IList_1_t32752_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TeamList>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249316_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32752_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32752_IList_1_IndexOf_m249316_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo IList_1_t32752_IList_1_Insert_m249317_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo IList_1_t32752_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamList>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249317_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32752_IList_1_Insert_m249317_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32752_IList_1_RemoveAt_m249318_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32752_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamList>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249318_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32752_IList_1_RemoveAt_m249318_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32752_IList_1_get_Item_m249314_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32752_il2cpp_TypeInfo;
extern Il2CppType TeamList_t1773_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TeamList>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249314_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32752_il2cpp_TypeInfo/* declaring_type */
	, &TeamList_t1773_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32752_IList_1_get_Item_m249314_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo IList_1_t32752_IList_1_set_Item_m249315_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo IList_1_t32752_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamList>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249315_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32752_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32752_IList_1_set_Item_m249315_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32752_MethodInfos[] =
{
	&IList_1_IndexOf_m249316_MethodInfo,
	&IList_1_Insert_m249317_MethodInfo,
	&IList_1_RemoveAt_m249318_MethodInfo,
	&IList_1_get_Item_m249314_MethodInfo,
	&IList_1_set_Item_m249315_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32751_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32753_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32752_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32751_il2cpp_TypeInfo,
	&IEnumerable_1_t32753_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32752_0_0_0;
extern Il2CppType IList_1_t32752_1_0_0;
struct IList_1_t32752;
extern TypeInfo IList_1_t32752_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32752_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32752_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32752_MethodInfos/* methods */
	, IList_1_t32752_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32752_il2cpp_TypeInfo/* element_class */
	, IList_1_t32752_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32752_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32752_0_0_0/* byval_arg */
	, &IList_1_t32752_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32752_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<TeamList>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_326.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18710_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TeamList>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_326MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TeamList>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_322.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18710_il2cpp_TypeInfo;
extern TypeInfo TeamList_t1773_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TeamList>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_322MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137530_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137532_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamList>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamList>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TeamList>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18710____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18710_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18710, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18710_FieldInfos[] =
{
	&CachedInvokableCall_1_t18710____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18710_CachedInvokableCall_1__ctor_m137528_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18710_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamList>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137528_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18710_CachedInvokableCall_1__ctor_m137528_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18710_CachedInvokableCall_1_Invoke_m137529_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18710_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamList>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137529_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18710_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18710_CachedInvokableCall_1_Invoke_m137529_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18710_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137528_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137529_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137529_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137533_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18710_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137529_MethodInfo,
	&InvokableCall_1_Find_m137533_MethodInfo,
};
extern Il2CppType UnityAction_1_t18712_0_0_0;
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamList_t1773_m203339_MethodInfo;
extern TypeInfo TeamList_t1773_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137535_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137530_MethodInfo;
extern TypeInfo TeamList_t1773_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137532_MethodInfo;
static void* CachedInvokableCall_1_t18710_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18712_0_0_0,
	&UnityAction_1_t18712_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamList_t1773_m203339_MethodInfo,
	&TeamList_t1773_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137535_MethodInfo,
	&InvokableCall_1__ctor_m137530_MethodInfo,
	&TeamList_t1773_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137532_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18710_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18710_1_0_0;
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18710;
extern TypeInfo CachedInvokableCall_1_t18710_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18710_GenericClass;
TypeInfo CachedInvokableCall_1_t18710_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18710_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18710_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18710_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18710_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18710_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18710_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18710_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18710_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18710_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18710)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TeamList>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_329.h"
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TeamList_t1773_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TeamList>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_329MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18712_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamList_t1773_m203339_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137535_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamList>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamList>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTeamList_t1773_m203339(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamList_t1773_m203339_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TeamList>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TeamList>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TeamList>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamList>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TeamList>
extern Il2CppType UnityAction_1_t18712_0_0_1;
FieldInfo InvokableCall_1_t18711____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18712_0_0_1/* type */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18711, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18711_FieldInfos[] =
{
	&InvokableCall_1_t18711____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18711_InvokableCall_1__ctor_m137530_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamList>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137530_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18711_InvokableCall_1__ctor_m137530_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18712_0_0_0;
static ParameterInfo InvokableCall_1_t18711_InvokableCall_1__ctor_m137531_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18712_0_0_0},
};
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamList>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137531_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18711_InvokableCall_1__ctor_m137531_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18711_InvokableCall_1_Invoke_m137532_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamList>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137532_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18711_InvokableCall_1_Invoke_m137532_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18711_InvokableCall_1_Find_m137533_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamList>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137533_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18711_InvokableCall_1_Find_m137533_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18711_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137530_MethodInfo,
	&InvokableCall_1__ctor_m137531_MethodInfo,
	&InvokableCall_1_Invoke_m137532_MethodInfo,
	&InvokableCall_1_Find_m137533_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137532_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137533_MethodInfo;
static MethodInfo* InvokableCall_1_t18711_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137532_MethodInfo,
	&InvokableCall_1_Find_m137533_MethodInfo,
};
extern Il2CppType UnityAction_1_t18712_0_0_0;
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamList_t1773_m203339_MethodInfo;
extern TypeInfo TeamList_t1773_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137535_MethodInfo;
static void* InvokableCall_1_t18711_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18712_0_0_0,
	&UnityAction_1_t18712_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamList_t1773_m203339_MethodInfo,
	&TeamList_t1773_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137535_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18711_0_0_0;
extern Il2CppType InvokableCall_1_t18711_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18711;
extern TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18711_GenericClass;
TypeInfo InvokableCall_1_t18711_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18711_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18711_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18711_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18711_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18711_0_0_0/* byval_arg */
	, &InvokableCall_1_t18711_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18711_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18711_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18711)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TeamList>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TeamList>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamList>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TeamList>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TeamList>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18712_UnityAction_1__ctor_m137534_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamList>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137534_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18712_UnityAction_1__ctor_m137534_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamList_t1773_0_0_0;
static ParameterInfo UnityAction_1_t18712_UnityAction_1_Invoke_m137535_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
};
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamList>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137535_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18712_UnityAction_1_Invoke_m137535_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamList_t1773_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18712_UnityAction_1_BeginInvoke_m137536_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamList_t1773_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamList>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137536_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18712_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18712_UnityAction_1_BeginInvoke_m137536_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18712_UnityAction_1_EndInvoke_m137537_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamList>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137537_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18712_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18712_UnityAction_1_EndInvoke_m137537_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18712_MethodInfos[] =
{
	&UnityAction_1__ctor_m137534_MethodInfo,
	&UnityAction_1_Invoke_m137535_MethodInfo,
	&UnityAction_1_BeginInvoke_m137536_MethodInfo,
	&UnityAction_1_EndInvoke_m137537_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137535_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137536_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137537_MethodInfo;
static MethodInfo* UnityAction_1_t18712_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137535_MethodInfo,
	&UnityAction_1_BeginInvoke_m137536_MethodInfo,
	&UnityAction_1_EndInvoke_m137537_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18712_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18712_0_0_0;
extern Il2CppType UnityAction_1_t18712_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18712;
extern TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18712_GenericClass;
TypeInfo UnityAction_1_t18712_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18712_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18712_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18712_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18712_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18712_0_0_0/* byval_arg */
	, &UnityAction_1_t18712_1_0_0/* this_arg */
	, UnityAction_1_t18712_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18712_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18712)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27851_il2cpp_TypeInfo;

// TeamMemberListItemLogic
#include "AssemblyU2DCSharp_TeamMemberListItemLogic.h"


// T System.Collections.Generic.IEnumerator`1<TeamMemberListItemLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TeamMemberListItemLogic>
extern MethodInfo IEnumerator_1_get_Current_m249319_MethodInfo;
static PropertyInfo IEnumerator_1_t27851____Current_PropertyInfo = 
{
	&IEnumerator_1_t27851_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249319_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27851_PropertyInfos[] =
{
	&IEnumerator_1_t27851____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27851_il2cpp_TypeInfo;
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TeamMemberListItemLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249319_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27851_il2cpp_TypeInfo/* declaring_type */
	, &TeamMemberListItemLogic_t1775_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27851_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249319_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27851_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27851_0_0_0;
extern Il2CppType IEnumerator_1_t27851_1_0_0;
struct IEnumerator_1_t27851;
extern TypeInfo IEnumerator_1_t27851_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27851_GenericClass;
TypeInfo IEnumerator_1_t27851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27851_MethodInfos/* methods */
	, IEnumerator_1_t27851_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27851_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27851_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27851_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27851_0_0_0/* byval_arg */
	, &IEnumerator_1_t27851_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27851_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<TeamMemberListItemLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1489.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TeamMemberListItemLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1489MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern TypeInfo TeamMemberListItemLogic_t1775_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137543_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamMemberListItemLogic_t1775_m203341_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TeamMemberListItemLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TeamMemberListItemLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisTeamMemberListItemLogic_t1775_m203341(__this, p0, method) (TeamMemberListItemLogic_t1775 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTeamMemberListItemLogic_t1775_m203341_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TeamMemberListItemLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18713____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18713, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18713____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18713, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18713_FieldInfos[] =
{
	&InternalEnumerator_1_t18713____array_FieldInfo,
	&InternalEnumerator_1_t18713____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137540_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18713____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18713_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137540_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137543_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18713____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18713_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137543_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18713_PropertyInfos[] =
{
	&InternalEnumerator_1_t18713____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18713____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18713_InternalEnumerator_1__ctor_m137538_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137538_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18713_InternalEnumerator_1__ctor_m137538_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137539_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137540_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137541_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137542_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TeamMemberListItemLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137543_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* declaring_type */
	, &TeamMemberListItemLogic_t1775_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18713_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137538_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137539_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137540_MethodInfo,
	&InternalEnumerator_1_Dispose_m137541_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137542_MethodInfo,
	&InternalEnumerator_1_get_Current_m137543_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137540_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137542_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137539_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137541_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137543_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18713_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137540_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137542_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137539_MethodInfo,
	&InternalEnumerator_1_Dispose_m137541_MethodInfo,
	&InternalEnumerator_1_get_Current_m137543_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27851_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18713_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27851_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27851_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18713_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27851_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137543_MethodInfo;
extern TypeInfo TeamMemberListItemLogic_t1775_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamMemberListItemLogic_t1775_m203341_MethodInfo;
static void* InternalEnumerator_1_t18713_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137543_MethodInfo,
	&TeamMemberListItemLogic_t1775_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTeamMemberListItemLogic_t1775_m203341_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18713_0_0_0;
extern Il2CppType InternalEnumerator_1_t18713_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18713_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18713_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18713_MethodInfos/* methods */
	, InternalEnumerator_1_t18713_PropertyInfos/* properties */
	, InternalEnumerator_1_t18713_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18713_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18713_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18713_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18713_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18713_1_0_0/* this_arg */
	, InternalEnumerator_1_t18713_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18713_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18713_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18713)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>
extern MethodInfo ICollection_1_get_Count_m249320_MethodInfo;
static PropertyInfo ICollection_1_t32754____Count_PropertyInfo = 
{
	&ICollection_1_t32754_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249320_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249321_MethodInfo;
static PropertyInfo ICollection_1_t32754____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32754_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249321_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32754_PropertyInfos[] =
{
	&ICollection_1_t32754____Count_PropertyInfo,
	&ICollection_1_t32754____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249320_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249321_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo ICollection_1_t32754_ICollection_1_Add_m249322_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Add(T)
MethodInfo ICollection_1_Add_m249322_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32754_ICollection_1_Add_m249322_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Clear()
MethodInfo ICollection_1_Clear_m249323_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo ICollection_1_t32754_ICollection_1_Contains_m249324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249324_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32754_ICollection_1_Contains_m249324_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberListItemLogicU5BU5D_t5658_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32754_ICollection_1_CopyTo_m249325_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogicU5BU5D_t5658_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249325_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32754_ICollection_1_CopyTo_m249325_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo ICollection_1_t32754_ICollection_1_Remove_m249326_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberListItemLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249326_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32754_ICollection_1_Remove_m249326_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32754_MethodInfos[] =
{
	&ICollection_1_get_Count_m249320_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249321_MethodInfo,
	&ICollection_1_Add_m249322_MethodInfo,
	&ICollection_1_Clear_m249323_MethodInfo,
	&ICollection_1_Contains_m249324_MethodInfo,
	&ICollection_1_CopyTo_m249325_MethodInfo,
	&ICollection_1_Remove_m249326_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32756_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32754_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32756_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32754_0_0_0;
extern Il2CppType ICollection_1_t32754_1_0_0;
struct ICollection_1_t32754;
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32754_GenericClass;
TypeInfo ICollection_1_t32754_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32754_MethodInfos/* methods */
	, ICollection_1_t32754_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32754_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32754_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32754_0_0_0/* byval_arg */
	, &ICollection_1_t32754_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32754_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32756_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamMemberListItemLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TeamMemberListItemLogic>
extern TypeInfo IEnumerable_1_t32756_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27851_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamMemberListItemLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249327_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32756_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27851_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32756_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249327_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32756_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32756_0_0_0;
extern Il2CppType IEnumerable_1_t32756_1_0_0;
struct IEnumerable_1_t32756;
extern TypeInfo IEnumerable_1_t32756_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32756_GenericClass;
TypeInfo IEnumerable_1_t32756_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32756_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32756_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32756_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32756_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32756_0_0_0/* byval_arg */
	, &IEnumerable_1_t32756_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32756_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32755_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TeamMemberListItemLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TeamMemberListItemLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TeamMemberListItemLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TeamMemberListItemLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TeamMemberListItemLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TeamMemberListItemLogic>
extern MethodInfo IList_1_get_Item_m249328_MethodInfo;
extern MethodInfo IList_1_set_Item_m249329_MethodInfo;
static PropertyInfo IList_1_t32755____Item_PropertyInfo = 
{
	&IList_1_t32755_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249328_MethodInfo/* get */
	, &IList_1_set_Item_m249329_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32755_PropertyInfos[] =
{
	&IList_1_t32755____Item_PropertyInfo,
	NULL
};
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo IList_1_t32755_IList_1_IndexOf_m249330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo IList_1_t32755_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TeamMemberListItemLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249330_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32755_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32755_IList_1_IndexOf_m249330_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo IList_1_t32755_IList_1_Insert_m249331_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo IList_1_t32755_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamMemberListItemLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249331_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32755_IList_1_Insert_m249331_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32755_IList_1_RemoveAt_m249332_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32755_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamMemberListItemLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249332_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32755_IList_1_RemoveAt_m249332_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32755_IList_1_get_Item_m249328_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32755_il2cpp_TypeInfo;
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TeamMemberListItemLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249328_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32755_il2cpp_TypeInfo/* declaring_type */
	, &TeamMemberListItemLogic_t1775_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32755_IList_1_get_Item_m249328_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo IList_1_t32755_IList_1_set_Item_m249329_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo IList_1_t32755_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamMemberListItemLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249329_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32755_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32755_IList_1_set_Item_m249329_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32755_MethodInfos[] =
{
	&IList_1_IndexOf_m249330_MethodInfo,
	&IList_1_Insert_m249331_MethodInfo,
	&IList_1_RemoveAt_m249332_MethodInfo,
	&IList_1_get_Item_m249328_MethodInfo,
	&IList_1_set_Item_m249329_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32754_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32756_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32755_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32754_il2cpp_TypeInfo,
	&IEnumerable_1_t32756_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32755_0_0_0;
extern Il2CppType IList_1_t32755_1_0_0;
struct IList_1_t32755;
extern TypeInfo IList_1_t32755_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32755_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32755_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32755_MethodInfos/* methods */
	, IList_1_t32755_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32755_il2cpp_TypeInfo/* element_class */
	, IList_1_t32755_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32755_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32755_0_0_0/* byval_arg */
	, &IList_1_t32755_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32755_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<TeamMemberListItemLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_327.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18714_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TeamMemberListItemLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_327MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_323.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18714_il2cpp_TypeInfo;
extern TypeInfo TeamMemberListItemLogic_t1775_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_323MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137546_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137548_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberListItemLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberListItemLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TeamMemberListItemLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18714____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18714_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18714, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18714_FieldInfos[] =
{
	&CachedInvokableCall_1_t18714____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18714_CachedInvokableCall_1__ctor_m137544_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18714_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberListItemLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137544_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18714_CachedInvokableCall_1__ctor_m137544_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18714_CachedInvokableCall_1_Invoke_m137545_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18714_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberListItemLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137545_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18714_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18714_CachedInvokableCall_1_Invoke_m137545_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18714_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137544_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137545_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137545_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137549_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18714_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137545_MethodInfo,
	&InvokableCall_1_Find_m137549_MethodInfo,
};
extern Il2CppType UnityAction_1_t18716_0_0_0;
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberListItemLogic_t1775_m203351_MethodInfo;
extern TypeInfo TeamMemberListItemLogic_t1775_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137551_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137546_MethodInfo;
extern TypeInfo TeamMemberListItemLogic_t1775_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137548_MethodInfo;
static void* CachedInvokableCall_1_t18714_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18716_0_0_0,
	&UnityAction_1_t18716_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberListItemLogic_t1775_m203351_MethodInfo,
	&TeamMemberListItemLogic_t1775_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137551_MethodInfo,
	&InvokableCall_1__ctor_m137546_MethodInfo,
	&TeamMemberListItemLogic_t1775_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137548_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18714_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18714_1_0_0;
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18714;
extern TypeInfo CachedInvokableCall_1_t18714_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18714_GenericClass;
TypeInfo CachedInvokableCall_1_t18714_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18714_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18714_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18714_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18714_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18714_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18714_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18714_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18714_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18714_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18714)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_330.h"
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TeamMemberListItemLogic_t1775_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_330MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18716_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberListItemLogic_t1775_m203351_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137551_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamMemberListItemLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamMemberListItemLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberListItemLogic_t1775_m203351(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberListItemLogic_t1775_m203351_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>
extern Il2CppType UnityAction_1_t18716_0_0_1;
FieldInfo InvokableCall_1_t18715____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18716_0_0_1/* type */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18715, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18715_FieldInfos[] =
{
	&InvokableCall_1_t18715____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18715_InvokableCall_1__ctor_m137546_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137546_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18715_InvokableCall_1__ctor_m137546_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18716_0_0_0;
static ParameterInfo InvokableCall_1_t18715_InvokableCall_1__ctor_m137547_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18716_0_0_0},
};
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137547_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18715_InvokableCall_1__ctor_m137547_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18715_InvokableCall_1_Invoke_m137548_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137548_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18715_InvokableCall_1_Invoke_m137548_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18715_InvokableCall_1_Find_m137549_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamMemberListItemLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137549_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18715_InvokableCall_1_Find_m137549_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18715_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137546_MethodInfo,
	&InvokableCall_1__ctor_m137547_MethodInfo,
	&InvokableCall_1_Invoke_m137548_MethodInfo,
	&InvokableCall_1_Find_m137549_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137548_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137549_MethodInfo;
static MethodInfo* InvokableCall_1_t18715_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137548_MethodInfo,
	&InvokableCall_1_Find_m137549_MethodInfo,
};
extern Il2CppType UnityAction_1_t18716_0_0_0;
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberListItemLogic_t1775_m203351_MethodInfo;
extern TypeInfo TeamMemberListItemLogic_t1775_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137551_MethodInfo;
static void* InvokableCall_1_t18715_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18716_0_0_0,
	&UnityAction_1_t18716_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberListItemLogic_t1775_m203351_MethodInfo,
	&TeamMemberListItemLogic_t1775_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137551_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18715_0_0_0;
extern Il2CppType InvokableCall_1_t18715_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18715;
extern TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18715_GenericClass;
TypeInfo InvokableCall_1_t18715_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18715_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18715_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18715_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18715_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18715_0_0_0/* byval_arg */
	, &InvokableCall_1_t18715_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18715_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18715_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18715)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18716_UnityAction_1__ctor_m137550_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137550_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18716_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18716_UnityAction_1__ctor_m137550_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
static ParameterInfo UnityAction_1_t18716_UnityAction_1_Invoke_m137551_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
};
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137551_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18716_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18716_UnityAction_1_Invoke_m137551_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberListItemLogic_t1775_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18716_UnityAction_1_BeginInvoke_m137552_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberListItemLogic_t1775_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137552_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18716_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18716_UnityAction_1_BeginInvoke_m137552_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18716_UnityAction_1_EndInvoke_m137553_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberListItemLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137553_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18716_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18716_UnityAction_1_EndInvoke_m137553_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18716_MethodInfos[] =
{
	&UnityAction_1__ctor_m137550_MethodInfo,
	&UnityAction_1_Invoke_m137551_MethodInfo,
	&UnityAction_1_BeginInvoke_m137552_MethodInfo,
	&UnityAction_1_EndInvoke_m137553_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137551_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137552_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137553_MethodInfo;
static MethodInfo* UnityAction_1_t18716_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137551_MethodInfo,
	&UnityAction_1_BeginInvoke_m137552_MethodInfo,
	&UnityAction_1_EndInvoke_m137553_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18716_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18716_0_0_0;
extern Il2CppType UnityAction_1_t18716_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18716;
extern TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18716_GenericClass;
TypeInfo UnityAction_1_t18716_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18716_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18716_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18716_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18716_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18716_0_0_0/* byval_arg */
	, &UnityAction_1_t18716_1_0_0/* this_arg */
	, UnityAction_1_t18716_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18716_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18716)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27852_il2cpp_TypeInfo;

// TeamMemberMenuLogic
#include "AssemblyU2DCSharp_TeamMemberMenuLogic.h"


// T System.Collections.Generic.IEnumerator`1<TeamMemberMenuLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TeamMemberMenuLogic>
extern MethodInfo IEnumerator_1_get_Current_m249333_MethodInfo;
static PropertyInfo IEnumerator_1_t27852____Current_PropertyInfo = 
{
	&IEnumerator_1_t27852_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249333_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27852_PropertyInfos[] =
{
	&IEnumerator_1_t27852____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27852_il2cpp_TypeInfo;
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TeamMemberMenuLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249333_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27852_il2cpp_TypeInfo/* declaring_type */
	, &TeamMemberMenuLogic_t1776_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27852_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249333_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27852_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27852_0_0_0;
extern Il2CppType IEnumerator_1_t27852_1_0_0;
struct IEnumerator_1_t27852;
extern TypeInfo IEnumerator_1_t27852_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27852_GenericClass;
TypeInfo IEnumerator_1_t27852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27852_MethodInfos/* methods */
	, IEnumerator_1_t27852_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27852_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27852_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27852_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27852_0_0_0/* byval_arg */
	, &IEnumerator_1_t27852_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27852_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<TeamMemberMenuLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1490.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TeamMemberMenuLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1490MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern TypeInfo TeamMemberMenuLogic_t1776_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137559_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamMemberMenuLogic_t1776_m203353_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TeamMemberMenuLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TeamMemberMenuLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisTeamMemberMenuLogic_t1776_m203353(__this, p0, method) (TeamMemberMenuLogic_t1776 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTeamMemberMenuLogic_t1776_m203353_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TeamMemberMenuLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18717____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18717, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18717____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18717, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18717_FieldInfos[] =
{
	&InternalEnumerator_1_t18717____array_FieldInfo,
	&InternalEnumerator_1_t18717____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137556_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18717____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18717_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137556_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137559_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18717____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18717_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137559_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18717_PropertyInfos[] =
{
	&InternalEnumerator_1_t18717____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18717____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18717_InternalEnumerator_1__ctor_m137554_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137554_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18717_InternalEnumerator_1__ctor_m137554_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137555_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137556_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137557_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137558_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TeamMemberMenuLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137559_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* declaring_type */
	, &TeamMemberMenuLogic_t1776_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18717_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137554_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137555_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137556_MethodInfo,
	&InternalEnumerator_1_Dispose_m137557_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137558_MethodInfo,
	&InternalEnumerator_1_get_Current_m137559_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137556_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137558_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137555_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137557_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137559_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18717_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137556_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137558_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137555_MethodInfo,
	&InternalEnumerator_1_Dispose_m137557_MethodInfo,
	&InternalEnumerator_1_get_Current_m137559_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27852_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18717_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27852_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27852_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18717_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27852_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137559_MethodInfo;
extern TypeInfo TeamMemberMenuLogic_t1776_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamMemberMenuLogic_t1776_m203353_MethodInfo;
static void* InternalEnumerator_1_t18717_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137559_MethodInfo,
	&TeamMemberMenuLogic_t1776_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTeamMemberMenuLogic_t1776_m203353_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18717_0_0_0;
extern Il2CppType InternalEnumerator_1_t18717_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18717_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18717_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18717_MethodInfos/* methods */
	, InternalEnumerator_1_t18717_PropertyInfos/* properties */
	, InternalEnumerator_1_t18717_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18717_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18717_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18717_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18717_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18717_1_0_0/* this_arg */
	, InternalEnumerator_1_t18717_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18717_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18717_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18717)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>
extern MethodInfo ICollection_1_get_Count_m249334_MethodInfo;
static PropertyInfo ICollection_1_t32757____Count_PropertyInfo = 
{
	&ICollection_1_t32757_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249334_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249335_MethodInfo;
static PropertyInfo ICollection_1_t32757____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32757_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249335_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32757_PropertyInfos[] =
{
	&ICollection_1_t32757____Count_PropertyInfo,
	&ICollection_1_t32757____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249334_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249335_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo ICollection_1_t32757_ICollection_1_Add_m249336_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Add(T)
MethodInfo ICollection_1_Add_m249336_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32757_ICollection_1_Add_m249336_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Clear()
MethodInfo ICollection_1_Clear_m249337_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo ICollection_1_t32757_ICollection_1_Contains_m249338_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249338_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32757_ICollection_1_Contains_m249338_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberMenuLogicU5BU5D_t25882_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32757_ICollection_1_CopyTo_m249339_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogicU5BU5D_t25882_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249339_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32757_ICollection_1_CopyTo_m249339_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo ICollection_1_t32757_ICollection_1_Remove_m249340_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamMemberMenuLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249340_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32757_ICollection_1_Remove_m249340_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32757_MethodInfos[] =
{
	&ICollection_1_get_Count_m249334_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249335_MethodInfo,
	&ICollection_1_Add_m249336_MethodInfo,
	&ICollection_1_Clear_m249337_MethodInfo,
	&ICollection_1_Contains_m249338_MethodInfo,
	&ICollection_1_CopyTo_m249339_MethodInfo,
	&ICollection_1_Remove_m249340_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32759_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32757_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32759_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32757_0_0_0;
extern Il2CppType ICollection_1_t32757_1_0_0;
struct ICollection_1_t32757;
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32757_GenericClass;
TypeInfo ICollection_1_t32757_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32757_MethodInfos/* methods */
	, ICollection_1_t32757_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32757_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32757_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32757_0_0_0/* byval_arg */
	, &ICollection_1_t32757_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32757_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32759_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamMemberMenuLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TeamMemberMenuLogic>
extern TypeInfo IEnumerable_1_t32759_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27852_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamMemberMenuLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249341_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32759_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27852_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32759_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249341_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32759_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32759_0_0_0;
extern Il2CppType IEnumerable_1_t32759_1_0_0;
struct IEnumerable_1_t32759;
extern TypeInfo IEnumerable_1_t32759_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32759_GenericClass;
TypeInfo IEnumerable_1_t32759_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32759_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32759_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32759_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32759_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32759_0_0_0/* byval_arg */
	, &IEnumerable_1_t32759_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32759_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32758_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TeamMemberMenuLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TeamMemberMenuLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TeamMemberMenuLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TeamMemberMenuLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TeamMemberMenuLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TeamMemberMenuLogic>
extern MethodInfo IList_1_get_Item_m249342_MethodInfo;
extern MethodInfo IList_1_set_Item_m249343_MethodInfo;
static PropertyInfo IList_1_t32758____Item_PropertyInfo = 
{
	&IList_1_t32758_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249342_MethodInfo/* get */
	, &IList_1_set_Item_m249343_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32758_PropertyInfos[] =
{
	&IList_1_t32758____Item_PropertyInfo,
	NULL
};
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo IList_1_t32758_IList_1_IndexOf_m249344_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo IList_1_t32758_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TeamMemberMenuLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249344_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32758_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32758_IList_1_IndexOf_m249344_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo IList_1_t32758_IList_1_Insert_m249345_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo IList_1_t32758_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamMemberMenuLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249345_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32758_IList_1_Insert_m249345_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32758_IList_1_RemoveAt_m249346_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32758_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamMemberMenuLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249346_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32758_IList_1_RemoveAt_m249346_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32758_IList_1_get_Item_m249342_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32758_il2cpp_TypeInfo;
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TeamMemberMenuLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249342_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32758_il2cpp_TypeInfo/* declaring_type */
	, &TeamMemberMenuLogic_t1776_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32758_IList_1_get_Item_m249342_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo IList_1_t32758_IList_1_set_Item_m249343_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo IList_1_t32758_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamMemberMenuLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249343_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32758_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32758_IList_1_set_Item_m249343_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32758_MethodInfos[] =
{
	&IList_1_IndexOf_m249344_MethodInfo,
	&IList_1_Insert_m249345_MethodInfo,
	&IList_1_RemoveAt_m249346_MethodInfo,
	&IList_1_get_Item_m249342_MethodInfo,
	&IList_1_set_Item_m249343_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32757_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32759_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32758_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32757_il2cpp_TypeInfo,
	&IEnumerable_1_t32759_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32758_0_0_0;
extern Il2CppType IList_1_t32758_1_0_0;
struct IList_1_t32758;
extern TypeInfo IList_1_t32758_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32758_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32758_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32758_MethodInfos/* methods */
	, IList_1_t32758_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32758_il2cpp_TypeInfo/* element_class */
	, IList_1_t32758_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32758_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32758_0_0_0/* byval_arg */
	, &IList_1_t32758_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32758_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<TeamMemberMenuLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_328.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18718_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TeamMemberMenuLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_328MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_324.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18718_il2cpp_TypeInfo;
extern TypeInfo TeamMemberMenuLogic_t1776_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_324MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137562_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137564_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberMenuLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberMenuLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TeamMemberMenuLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18718____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18718_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18718, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18718_FieldInfos[] =
{
	&CachedInvokableCall_1_t18718____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18718_CachedInvokableCall_1__ctor_m137560_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18718_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberMenuLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137560_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18718_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18718_CachedInvokableCall_1__ctor_m137560_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18718_CachedInvokableCall_1_Invoke_m137561_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18718_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamMemberMenuLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137561_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18718_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18718_CachedInvokableCall_1_Invoke_m137561_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18718_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137560_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137561_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137561_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137565_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18718_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137561_MethodInfo,
	&InvokableCall_1_Find_m137565_MethodInfo,
};
extern Il2CppType UnityAction_1_t18720_0_0_0;
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberMenuLogic_t1776_m203363_MethodInfo;
extern TypeInfo TeamMemberMenuLogic_t1776_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137567_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137562_MethodInfo;
extern TypeInfo TeamMemberMenuLogic_t1776_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137564_MethodInfo;
static void* CachedInvokableCall_1_t18718_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18720_0_0_0,
	&UnityAction_1_t18720_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberMenuLogic_t1776_m203363_MethodInfo,
	&TeamMemberMenuLogic_t1776_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137567_MethodInfo,
	&InvokableCall_1__ctor_m137562_MethodInfo,
	&TeamMemberMenuLogic_t1776_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137564_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18718_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18718_1_0_0;
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18718;
extern TypeInfo CachedInvokableCall_1_t18718_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18718_GenericClass;
TypeInfo CachedInvokableCall_1_t18718_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18718_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18718_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18718_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18718_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18718_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18718_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18718_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18718_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18718_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18718)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_331.h"
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TeamMemberMenuLogic_t1776_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_331MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18720_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberMenuLogic_t1776_m203363_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137567_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamMemberMenuLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamMemberMenuLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberMenuLogic_t1776_m203363(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberMenuLogic_t1776_m203363_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>
extern Il2CppType UnityAction_1_t18720_0_0_1;
FieldInfo InvokableCall_1_t18719____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18720_0_0_1/* type */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18719, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18719_FieldInfos[] =
{
	&InvokableCall_1_t18719____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18719_InvokableCall_1__ctor_m137562_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137562_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18719_InvokableCall_1__ctor_m137562_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18720_0_0_0;
static ParameterInfo InvokableCall_1_t18719_InvokableCall_1__ctor_m137563_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18720_0_0_0},
};
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137563_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18719_InvokableCall_1__ctor_m137563_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18719_InvokableCall_1_Invoke_m137564_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137564_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18719_InvokableCall_1_Invoke_m137564_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18719_InvokableCall_1_Find_m137565_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamMemberMenuLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137565_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18719_InvokableCall_1_Find_m137565_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18719_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137562_MethodInfo,
	&InvokableCall_1__ctor_m137563_MethodInfo,
	&InvokableCall_1_Invoke_m137564_MethodInfo,
	&InvokableCall_1_Find_m137565_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137564_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137565_MethodInfo;
static MethodInfo* InvokableCall_1_t18719_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137564_MethodInfo,
	&InvokableCall_1_Find_m137565_MethodInfo,
};
extern Il2CppType UnityAction_1_t18720_0_0_0;
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberMenuLogic_t1776_m203363_MethodInfo;
extern TypeInfo TeamMemberMenuLogic_t1776_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137567_MethodInfo;
static void* InvokableCall_1_t18719_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18720_0_0_0,
	&UnityAction_1_t18720_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamMemberMenuLogic_t1776_m203363_MethodInfo,
	&TeamMemberMenuLogic_t1776_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137567_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18719_0_0_0;
extern Il2CppType InvokableCall_1_t18719_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18719;
extern TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18719_GenericClass;
TypeInfo InvokableCall_1_t18719_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18719_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18719_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18719_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18719_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18719_0_0_0/* byval_arg */
	, &InvokableCall_1_t18719_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18719_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18719_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18719)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18720_UnityAction_1__ctor_m137566_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137566_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18720_UnityAction_1__ctor_m137566_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
static ParameterInfo UnityAction_1_t18720_UnityAction_1_Invoke_m137567_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
};
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137567_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18720_UnityAction_1_Invoke_m137567_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TeamMemberMenuLogic_t1776_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18720_UnityAction_1_BeginInvoke_m137568_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamMemberMenuLogic_t1776_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137568_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18720_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18720_UnityAction_1_BeginInvoke_m137568_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18720_UnityAction_1_EndInvoke_m137569_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamMemberMenuLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137569_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18720_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18720_UnityAction_1_EndInvoke_m137569_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18720_MethodInfos[] =
{
	&UnityAction_1__ctor_m137566_MethodInfo,
	&UnityAction_1_Invoke_m137567_MethodInfo,
	&UnityAction_1_BeginInvoke_m137568_MethodInfo,
	&UnityAction_1_EndInvoke_m137569_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137567_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137568_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137569_MethodInfo;
static MethodInfo* UnityAction_1_t18720_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137567_MethodInfo,
	&UnityAction_1_BeginInvoke_m137568_MethodInfo,
	&UnityAction_1_EndInvoke_m137569_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18720_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18720_0_0_0;
extern Il2CppType UnityAction_1_t18720_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18720;
extern TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18720_GenericClass;
TypeInfo UnityAction_1_t18720_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18720_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18720_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18720_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18720_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18720_0_0_0/* byval_arg */
	, &UnityAction_1_t18720_1_0_0/* this_arg */
	, UnityAction_1_t18720_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18720_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18720)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27853_il2cpp_TypeInfo;

// TitleInvestitiveItemLogic
#include "AssemblyU2DCSharp_TitleInvestitiveItemLogic.h"


// T System.Collections.Generic.IEnumerator`1<TitleInvestitiveItemLogic>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TitleInvestitiveItemLogic>
extern MethodInfo IEnumerator_1_get_Current_m249347_MethodInfo;
static PropertyInfo IEnumerator_1_t27853____Current_PropertyInfo = 
{
	&IEnumerator_1_t27853_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249347_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27853_PropertyInfos[] =
{
	&IEnumerator_1_t27853____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27853_il2cpp_TypeInfo;
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TitleInvestitiveItemLogic>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249347_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27853_il2cpp_TypeInfo/* declaring_type */
	, &TitleInvestitiveItemLogic_t1778_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27853_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249347_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27853_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27853_0_0_0;
extern Il2CppType IEnumerator_1_t27853_1_0_0;
struct IEnumerator_1_t27853;
extern TypeInfo IEnumerator_1_t27853_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27853_GenericClass;
TypeInfo IEnumerator_1_t27853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27853_MethodInfos/* methods */
	, IEnumerator_1_t27853_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27853_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27853_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27853_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27853_0_0_0/* byval_arg */
	, &IEnumerator_1_t27853_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27853_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1491.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1491MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern TypeInfo TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137575_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTitleInvestitiveItemLogic_t1778_m203365_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TitleInvestitiveItemLogic>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TitleInvestitiveItemLogic>(System.Int32)
#define Array_InternalArray__get_Item_TisTitleInvestitiveItemLogic_t1778_m203365(__this, p0, method) (TitleInvestitiveItemLogic_t1778 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTitleInvestitiveItemLogic_t1778_m203365_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::MoveNext()
// T System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18721____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18721, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18721____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18721, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18721_FieldInfos[] =
{
	&InternalEnumerator_1_t18721____array_FieldInfo,
	&InternalEnumerator_1_t18721____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137572_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18721____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18721_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137572_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137575_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18721____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18721_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137575_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18721_PropertyInfos[] =
{
	&InternalEnumerator_1_t18721____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18721____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18721_InternalEnumerator_1__ctor_m137570_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137570_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18721_InternalEnumerator_1__ctor_m137570_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137571_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137572_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137573_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137574_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137575_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* declaring_type */
	, &TitleInvestitiveItemLogic_t1778_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18721_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137570_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137571_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137572_MethodInfo,
	&InternalEnumerator_1_Dispose_m137573_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137574_MethodInfo,
	&InternalEnumerator_1_get_Current_m137575_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137572_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137574_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137571_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137573_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137575_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18721_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137572_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137574_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137571_MethodInfo,
	&InternalEnumerator_1_Dispose_m137573_MethodInfo,
	&InternalEnumerator_1_get_Current_m137575_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27853_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18721_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27853_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27853_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18721_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27853_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m137575_MethodInfo;
extern TypeInfo TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTitleInvestitiveItemLogic_t1778_m203365_MethodInfo;
static void* InternalEnumerator_1_t18721_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m137575_MethodInfo,
	&TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTitleInvestitiveItemLogic_t1778_m203365_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18721_0_0_0;
extern Il2CppType InternalEnumerator_1_t18721_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18721_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18721_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18721_MethodInfos/* methods */
	, InternalEnumerator_1_t18721_PropertyInfos/* properties */
	, InternalEnumerator_1_t18721_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18721_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18721_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18721_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18721_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18721_1_0_0/* this_arg */
	, InternalEnumerator_1_t18721_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18721_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t18721_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18721)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>
extern MethodInfo ICollection_1_get_Count_m249348_MethodInfo;
static PropertyInfo ICollection_1_t32760____Count_PropertyInfo = 
{
	&ICollection_1_t32760_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249349_MethodInfo;
static PropertyInfo ICollection_1_t32760____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32760_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249349_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32760_PropertyInfos[] =
{
	&ICollection_1_t32760____Count_PropertyInfo,
	&ICollection_1_t32760____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::get_Count()
MethodInfo ICollection_1_get_Count_m249348_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249349_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo ICollection_1_t32760_ICollection_1_Add_m249350_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Add(T)
MethodInfo ICollection_1_Add_m249350_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t32760_ICollection_1_Add_m249350_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Clear()
MethodInfo ICollection_1_Clear_m249351_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo ICollection_1_t32760_ICollection_1_Contains_m249352_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Contains(T)
MethodInfo ICollection_1_Contains_m249352_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32760_ICollection_1_Contains_m249352_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TitleInvestitiveItemLogicU5BU5D_t5617_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32760_ICollection_1_CopyTo_m249353_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogicU5BU5D_t5617_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249353_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32760_ICollection_1_CopyTo_m249353_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo ICollection_1_t32760_ICollection_1_Remove_m249354_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic>::Remove(T)
MethodInfo ICollection_1_Remove_m249354_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t32760_ICollection_1_Remove_m249354_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32760_MethodInfos[] =
{
	&ICollection_1_get_Count_m249348_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249349_MethodInfo,
	&ICollection_1_Add_m249350_MethodInfo,
	&ICollection_1_Clear_m249351_MethodInfo,
	&ICollection_1_Contains_m249352_MethodInfo,
	&ICollection_1_CopyTo_m249353_MethodInfo,
	&ICollection_1_Remove_m249354_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32762_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32760_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32762_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32760_0_0_0;
extern Il2CppType ICollection_1_t32760_1_0_0;
struct ICollection_1_t32760;
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32760_GenericClass;
TypeInfo ICollection_1_t32760_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32760_MethodInfos/* methods */
	, ICollection_1_t32760_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32760_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32760_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32760_0_0_0/* byval_arg */
	, &ICollection_1_t32760_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32760_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32762_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TitleInvestitiveItemLogic>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TitleInvestitiveItemLogic>
extern TypeInfo IEnumerable_1_t32762_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27853_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TitleInvestitiveItemLogic>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249355_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32762_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27853_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32762_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249355_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32762_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32762_0_0_0;
extern Il2CppType IEnumerable_1_t32762_1_0_0;
struct IEnumerable_1_t32762;
extern TypeInfo IEnumerable_1_t32762_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32762_GenericClass;
TypeInfo IEnumerable_1_t32762_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32762_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32762_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32762_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32762_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32762_0_0_0/* byval_arg */
	, &IEnumerable_1_t32762_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32762_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IList_1_t32761_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>
extern MethodInfo IList_1_get_Item_m249356_MethodInfo;
extern MethodInfo IList_1_set_Item_m249357_MethodInfo;
static PropertyInfo IList_1_t32761____Item_PropertyInfo = 
{
	&IList_1_t32761_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m249356_MethodInfo/* get */
	, &IList_1_set_Item_m249357_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t32761_PropertyInfos[] =
{
	&IList_1_t32761____Item_PropertyInfo,
	NULL
};
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo IList_1_t32761_IList_1_IndexOf_m249358_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo IList_1_t32761_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::IndexOf(T)
MethodInfo IList_1_IndexOf_m249358_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t32761_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32761_IList_1_IndexOf_m249358_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo IList_1_t32761_IList_1_Insert_m249359_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo IList_1_t32761_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m249359_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t32761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32761_IList_1_Insert_m249359_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32761_IList_1_RemoveAt_m249360_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32761_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m249360_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t32761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t32761_IList_1_RemoveAt_m249360_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo IList_1_t32761_IList_1_get_Item_m249356_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t32761_il2cpp_TypeInfo;
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m249356_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t32761_il2cpp_TypeInfo/* declaring_type */
	, &TitleInvestitiveItemLogic_t1778_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t32761_IList_1_get_Item_m249356_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Int32_t73_0_0_0;
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo IList_1_t32761_IList_1_set_Item_m249357_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo IList_1_t32761_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TitleInvestitiveItemLogic>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m249357_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t32761_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t32761_IList_1_set_Item_m249357_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IList_1_t32761_MethodInfos[] =
{
	&IList_1_IndexOf_m249358_MethodInfo,
	&IList_1_Insert_m249359_MethodInfo,
	&IList_1_RemoveAt_m249360_MethodInfo,
	&IList_1_get_Item_m249356_MethodInfo,
	&IList_1_set_Item_m249357_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t32760_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32762_il2cpp_TypeInfo;
static TypeInfo* IList_1_t32761_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t32760_il2cpp_TypeInfo,
	&IEnumerable_1_t32762_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t32761_0_0_0;
extern Il2CppType IList_1_t32761_1_0_0;
struct IList_1_t32761;
extern TypeInfo IList_1_t32761_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t32761_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t32761_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t32761_MethodInfos/* methods */
	, IList_1_t32761_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t32761_il2cpp_TypeInfo/* element_class */
	, IList_1_t32761_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t32761_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t32761_0_0_0/* byval_arg */
	, &IList_1_t32761_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t32761_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 3/* interfaces_count */
	, 0/* interface_offsets_count */

};
// UnityEngine.Events.CachedInvokableCall`1<TitleInvestitiveItemLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_329.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t18722_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TitleInvestitiveItemLogic>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_329MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_325.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t18722_il2cpp_TypeInfo;
extern TypeInfo TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_325MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m137578_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137580_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TitleInvestitiveItemLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TitleInvestitiveItemLogic>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TitleInvestitiveItemLogic>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t18722____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t18722_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t18722, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t18722_FieldInfos[] =
{
	&CachedInvokableCall_1_t18722____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18722_CachedInvokableCall_1__ctor_m137576_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18722_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TitleInvestitiveItemLogic>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m137576_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t18722_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18722_CachedInvokableCall_1__ctor_m137576_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo CachedInvokableCall_1_t18722_CachedInvokableCall_1_Invoke_m137577_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t18722_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TitleInvestitiveItemLogic>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m137577_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t18722_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t18722_CachedInvokableCall_1_Invoke_m137577_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* CachedInvokableCall_1_t18722_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m137576_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137577_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m137577_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137581_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t18722_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m137577_MethodInfo,
	&InvokableCall_1_Find_m137581_MethodInfo,
};
extern Il2CppType UnityAction_1_t18724_0_0_0;
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTitleInvestitiveItemLogic_t1778_m203375_MethodInfo;
extern TypeInfo TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137583_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m137578_MethodInfo;
extern TypeInfo TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m137580_MethodInfo;
static void* CachedInvokableCall_1_t18722_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t18724_0_0_0,
	&UnityAction_1_t18724_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTitleInvestitiveItemLogic_t1778_m203375_MethodInfo,
	&TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137583_MethodInfo,
	&InvokableCall_1__ctor_m137578_MethodInfo,
	&TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m137580_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t18722_0_0_0;
extern Il2CppType CachedInvokableCall_1_t18722_1_0_0;
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t18722;
extern TypeInfo CachedInvokableCall_1_t18722_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t18722_GenericClass;
TypeInfo CachedInvokableCall_1_t18722_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t18722_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t18722_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t18722_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t18722_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t18722_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t18722_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t18722_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t18722_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t18722_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t18722)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 2/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_332.h"
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_332MethodDeclarations.h"
extern Il2CppType UnityAction_1_t18724_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTitleInvestitiveItemLogic_t1778_m203375_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137583_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TitleInvestitiveItemLogic>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TitleInvestitiveItemLogic>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTitleInvestitiveItemLogic_t1778_m203375(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTitleInvestitiveItemLogic_t1778_m203375_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>
extern Il2CppType UnityAction_1_t18724_0_0_1;
FieldInfo InvokableCall_1_t18723____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t18724_0_0_1/* type */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t18723, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t18723_FieldInfos[] =
{
	&InvokableCall_1_t18723____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18723_InvokableCall_1__ctor_m137578_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m137578_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18723_InvokableCall_1__ctor_m137578_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType UnityAction_1_t18724_0_0_0;
static ParameterInfo InvokableCall_1_t18723_InvokableCall_1__ctor_m137579_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t18724_0_0_0},
};
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m137579_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18723_InvokableCall_1__ctor_m137579_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType ObjectU5BU5D_t142_0_0_0;
static ParameterInfo InvokableCall_1_t18723_InvokableCall_1_Invoke_m137580_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m137580_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t18723_InvokableCall_1_Invoke_m137580_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t18723_InvokableCall_1_Find_m137581_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TitleInvestitiveItemLogic>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m137581_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t18723_InvokableCall_1_Find_m137581_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InvokableCall_1_t18723_MethodInfos[] =
{
	&InvokableCall_1__ctor_m137578_MethodInfo,
	&InvokableCall_1__ctor_m137579_MethodInfo,
	&InvokableCall_1_Invoke_m137580_MethodInfo,
	&InvokableCall_1_Find_m137581_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m137580_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m137581_MethodInfo;
static MethodInfo* InvokableCall_1_t18723_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m137580_MethodInfo,
	&InvokableCall_1_Find_m137581_MethodInfo,
};
extern Il2CppType UnityAction_1_t18724_0_0_0;
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTitleInvestitiveItemLogic_t1778_m203375_MethodInfo;
extern TypeInfo TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m137583_MethodInfo;
static void* InvokableCall_1_t18723_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t18724_0_0_0,
	&UnityAction_1_t18724_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTitleInvestitiveItemLogic_t1778_m203375_MethodInfo,
	&TitleInvestitiveItemLogic_t1778_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m137583_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t18723_0_0_0;
extern Il2CppType InvokableCall_1_t18723_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t18723;
extern TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t18723_GenericClass;
TypeInfo InvokableCall_1_t18723_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t18723_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t18723_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t18723_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t18723_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t18723_0_0_0/* byval_arg */
	, &InvokableCall_1_t18723_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t18723_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t18723_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t18723)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048576/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 6/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t18724_UnityAction_1__ctor_m137582_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m137582_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t18724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t18724_UnityAction_1__ctor_m137582_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 3/* iflags */
	, 255/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
static ParameterInfo UnityAction_1_t18724_UnityAction_1_Invoke_m137583_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
};
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m137583_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t18724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18724_UnityAction_1_Invoke_m137583_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 10/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TitleInvestitiveItemLogic_t1778_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t18724_UnityAction_1_BeginInvoke_m137584_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TitleInvestitiveItemLogic_t1778_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m137584_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t18724_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t18724_UnityAction_1_BeginInvoke_m137584_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 11/* slot */
	, 3/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType IAsyncResult_t14_0_0_0;
static ParameterInfo UnityAction_1_t18724_UnityAction_1_EndInvoke_m137585_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TitleInvestitiveItemLogic>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m137585_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t18724_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t18724_UnityAction_1_EndInvoke_m137585_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 454/* flags */
	, 3/* iflags */
	, 12/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* UnityAction_1_t18724_MethodInfos[] =
{
	&UnityAction_1__ctor_m137582_MethodInfo,
	&UnityAction_1_Invoke_m137583_MethodInfo,
	&UnityAction_1_BeginInvoke_m137584_MethodInfo,
	&UnityAction_1_EndInvoke_m137585_MethodInfo,
	NULL
};
extern MethodInfo MulticastDelegate_Equals_m4099_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo MulticastDelegate_GetHashCode_m4100_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo Delegate_Clone_m4102_MethodInfo;
extern MethodInfo MulticastDelegate_GetObjectData_m4101_MethodInfo;
extern MethodInfo MulticastDelegate_GetInvocationList_m4103_MethodInfo;
extern MethodInfo MulticastDelegate_CombineImpl_m4104_MethodInfo;
extern MethodInfo MulticastDelegate_RemoveImpl_m4105_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m137583_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m137584_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m137585_MethodInfo;
static MethodInfo* UnityAction_1_t18724_VTable[] =
{
	&MulticastDelegate_Equals_m4099_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&MulticastDelegate_GetHashCode_m4100_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&Delegate_Clone_m4102_MethodInfo,
	&MulticastDelegate_GetObjectData_m4101_MethodInfo,
	&MulticastDelegate_GetInvocationList_m4103_MethodInfo,
	&MulticastDelegate_CombineImpl_m4104_MethodInfo,
	&MulticastDelegate_RemoveImpl_m4105_MethodInfo,
	&UnityAction_1_Invoke_m137583_MethodInfo,
	&UnityAction_1_BeginInvoke_m137584_MethodInfo,
	&UnityAction_1_EndInvoke_m137585_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t18724_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t18724_0_0_0;
extern Il2CppType UnityAction_1_t18724_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t18724;
extern TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t18724_GenericClass;
TypeInfo UnityAction_1_t18724_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t18724_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t18724_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t18724_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t18724_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t18724_0_0_0/* byval_arg */
	, &UnityAction_1_t18724_1_0_0/* this_arg */
	, UnityAction_1_t18724_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t18724_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t18724)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 257/* flags */
	, 0/* rank */
	, false/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 4/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 13/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t27854_il2cpp_TypeInfo;

// TitleInvestitiveItemLogic/TITLE_CLASS
#include "AssemblyU2DCSharp_TitleInvestitiveItemLogic_TITLE_CLASS.h"


// T System.Collections.Generic.IEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>
extern MethodInfo IEnumerator_1_get_Current_m249361_MethodInfo;
static PropertyInfo IEnumerator_1_t27854____Current_PropertyInfo = 
{
	&IEnumerator_1_t27854_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m249361_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27854_PropertyInfos[] =
{
	&IEnumerator_1_t27854____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27854_il2cpp_TypeInfo;
extern Il2CppType TITLE_CLASS_t1777_0_0_0;
extern void* RuntimeInvoker_TITLE_CLASS_t1777 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_Current()
MethodInfo IEnumerator_1_get_Current_m249361_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27854_il2cpp_TypeInfo/* declaring_type */
	, &TITLE_CLASS_t1777_0_0_0/* return_type */
	, RuntimeInvoker_TITLE_CLASS_t1777/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerator_1_t27854_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m249361_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27854_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27854_0_0_0;
extern Il2CppType IEnumerator_1_t27854_1_0_0;
struct IEnumerator_1_t27854;
extern TypeInfo IEnumerator_1_t27854_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27854_GenericClass;
TypeInfo IEnumerator_1_t27854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27854_MethodInfos/* methods */
	, IEnumerator_1_t27854_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27854_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27854_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27854_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27854_0_0_0/* byval_arg */
	, &IEnumerator_1_t27854_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27854_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 1/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1492.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1492MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern TypeInfo TITLE_CLASS_t1777_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137591_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTITLE_CLASS_t1777_m203377_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TitleInvestitiveItemLogic/TITLE_CLASS>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TitleInvestitiveItemLogic/TITLE_CLASS>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTITLE_CLASS_t1777_m203377 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisTITLE_CLASS_t1777_m203377_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m137586_MethodInfo;
 void InternalEnumerator_1__ctor_m137586 (InternalEnumerator_1_t18725 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137587_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137587 (InternalEnumerator_1_t18725 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588 (InternalEnumerator_1_t18725 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m137591(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m137591_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TITLE_CLASS_t1777_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m137589_MethodInfo;
 void InternalEnumerator_1_Dispose_m137589 (InternalEnumerator_1_t18725 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m137590_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m137590 (InternalEnumerator_1_t18725 * __this, MethodInfo* method){
	int32_t V_0 = 0;
	int32_t G_B5_0 = 0;
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_001b;
		}
	}
	{
		Array_t * L_1 = (__this->___array);
		NullCheck(L_1);
		int32_t L_2 = Array_get_Length_m42374(L_1, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		__this->___idx = L_2;
	}

IL_001b:
	{
		int32_t L_3 = (__this->___idx);
		if ((((int32_t)L_3) == ((int32_t)(-1))))
		{
			goto IL_003d;
		}
	}
	{
		int32_t L_4 = (__this->___idx);
		int32_t L_5 = ((int32_t)(L_4-1));
		V_0 = L_5;
		__this->___idx = L_5;
		G_B5_0 = ((((int32_t)((((int32_t)V_0) == ((int32_t)(-1)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_003e;
	}

IL_003d:
	{
		G_B5_0 = 0;
	}

IL_003e:
	{
		return G_B5_0;
	}
}
// T System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m137591_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m137591 (InternalEnumerator_1_t18725 * __this, MethodInfo* method){
	{
		int32_t L_0 = (__this->___idx);
		if ((((uint32_t)L_0) != ((uint32_t)((int32_t)-2))))
		{
			goto IL_0015;
		}
	}
	{
		InvalidOperationException_t5468 * L_1 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_1, (String_t*) &_stringLiteral6626, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0015:
	{
		int32_t L_2 = (__this->___idx);
		if ((((uint32_t)L_2) != ((uint32_t)(-1))))
		{
			goto IL_0029;
		}
	}
	{
		InvalidOperationException_t5468 * L_3 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_3, (String_t*) &_stringLiteral6627, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_3);
	}

IL_0029:
	{
		Array_t * L_4 = (__this->___array);
		Array_t * L_5 = (__this->___array);
		NullCheck(L_5);
		int32_t L_6 = Array_get_Length_m42374(L_5, /*hidden argument*/&Array_get_Length_m42374_MethodInfo);
		int32_t L_7 = (__this->___idx);
		NullCheck(L_4);
		int32_t L_8 = Array_InternalArray__get_Item_TisTITLE_CLASS_t1777_m203377(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTITLE_CLASS_t1777_m203377_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t18725____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18725, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t18725____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t18725, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t18725_FieldInfos[] =
{
	&InternalEnumerator_1_t18725____array_FieldInfo,
	&InternalEnumerator_1_t18725____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18725____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18725_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m137591_MethodInfo;
static PropertyInfo InternalEnumerator_1_t18725____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t18725_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m137591_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t18725_PropertyInfos[] =
{
	&InternalEnumerator_1_t18725____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t18725____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t18725_InternalEnumerator_1__ctor_m137586_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m137586_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m137586/* method */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t18725_InternalEnumerator_1__ctor_m137586_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6275/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137587_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137587/* method */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588/* method */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* declaring_type */
	, &Object_t_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2529/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m137589_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m137589/* method */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m137590_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m137590/* method */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 486/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern Il2CppType TITLE_CLASS_t1777_0_0_0;
extern void* RuntimeInvoker_TITLE_CLASS_t1777 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m137591_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m137591/* method */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* declaring_type */
	, &TITLE_CLASS_t1777_0_0_0/* return_type */
	, RuntimeInvoker_TITLE_CLASS_t1777/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2534/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* InternalEnumerator_1_t18725_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m137586_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137587_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588_MethodInfo,
	&InternalEnumerator_1_Dispose_m137589_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137590_MethodInfo,
	&InternalEnumerator_1_get_Current_m137591_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m137590_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137587_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m137589_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m137591_MethodInfo;
static MethodInfo* InternalEnumerator_1_t18725_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m137588_MethodInfo,
	&InternalEnumerator_1_MoveNext_m137590_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m137587_MethodInfo,
	&InternalEnumerator_1_Dispose_m137589_MethodInfo,
	&InternalEnumerator_1_get_Current_m137591_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27854_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t18725_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27854_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27854_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t18725_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27854_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t18725_0_0_0;
extern Il2CppType InternalEnumerator_1_t18725_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t18725_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t18725_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t18725_MethodInfos/* methods */
	, InternalEnumerator_1_t18725_PropertyInfos/* properties */
	, InternalEnumerator_1_t18725_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t18725_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t18725_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t18725_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t18725_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t18725_1_0_0/* this_arg */
	, InternalEnumerator_1_t18725_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t18725_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t18725)+ sizeof (Il2CppObject)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048845/* flags */
	, 0/* rank */
	, true/* valuetype */
	, false/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 6/* method_count */
	, 2/* property_count */
	, 2/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 9/* vtable_count */
	, 3/* interfaces_count */
	, 3/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>
extern MethodInfo ICollection_1_get_Count_m249362_MethodInfo;
static PropertyInfo ICollection_1_t32763____Count_PropertyInfo = 
{
	&ICollection_1_t32763_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m249362_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m249363_MethodInfo;
static PropertyInfo ICollection_1_t32763____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t32763_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m249363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t32763_PropertyInfos[] =
{
	&ICollection_1_t32763____Count_PropertyInfo,
	&ICollection_1_t32763____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_Count()
MethodInfo ICollection_1_get_Count_m249362_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m249363_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 3526/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TITLE_CLASS_t1777_0_0_0;
static ParameterInfo ICollection_1_t32763_ICollection_1_Add_m249364_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TITLE_CLASS_t1777_0_0_0},
};
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Add(T)
MethodInfo ICollection_1_Add_m249364_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t32763_ICollection_1_Add_m249364_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Clear()
MethodInfo ICollection_1_Clear_m249365_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 3/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TITLE_CLASS_t1777_0_0_0;
static ParameterInfo ICollection_1_t32763_ICollection_1_Contains_m249366_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TITLE_CLASS_t1777_0_0_0},
};
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Contains(T)
MethodInfo ICollection_1_Contains_m249366_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32763_ICollection_1_Contains_m249366_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 4/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TITLE_CLASSU5BU5D_t25883_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t32763_ICollection_1_CopyTo_m249367_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TITLE_CLASSU5BU5D_t25883_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m249367_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t32763_ICollection_1_CopyTo_m249367_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType TITLE_CLASS_t1777_0_0_0;
static ParameterInfo ICollection_1_t32763_ICollection_1_Remove_m249368_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TITLE_CLASS_t1777_0_0_0},
};
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TitleInvestitiveItemLogic/TITLE_CLASS>::Remove(T)
MethodInfo ICollection_1_Remove_m249368_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t32763_ICollection_1_Remove_m249368_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* ICollection_1_t32763_MethodInfos[] =
{
	&ICollection_1_get_Count_m249362_MethodInfo,
	&ICollection_1_get_IsReadOnly_m249363_MethodInfo,
	&ICollection_1_Add_m249364_MethodInfo,
	&ICollection_1_Clear_m249365_MethodInfo,
	&ICollection_1_Contains_m249366_MethodInfo,
	&ICollection_1_CopyTo_m249367_MethodInfo,
	&ICollection_1_Remove_m249368_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t32765_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t32763_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t32765_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t32763_0_0_0;
extern Il2CppType ICollection_1_t32763_1_0_0;
struct ICollection_1_t32763;
extern TypeInfo ICollection_1_t32763_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t32763_GenericClass;
TypeInfo ICollection_1_t32763_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t32763_MethodInfos/* methods */
	, ICollection_1_t32763_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t32763_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t32763_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t32763_0_0_0/* byval_arg */
	, &ICollection_1_t32763_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t32763_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 2/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 2/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerable_1_t32765_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TitleInvestitiveItemLogic/TITLE_CLASS>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TitleInvestitiveItemLogic/TITLE_CLASS>
extern TypeInfo IEnumerable_1_t32765_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27854_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TitleInvestitiveItemLogic/TITLE_CLASS>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m249369_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t32765_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27854_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEnumerable_1_t32765_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m249369_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t32765_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t32765_0_0_0;
extern Il2CppType IEnumerable_1_t32765_1_0_0;
struct IEnumerable_1_t32765;
extern TypeInfo IEnumerable_1_t32765_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t32765_GenericClass;
TypeInfo IEnumerable_1_t32765_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t32765_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t32765_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t32765_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t32765_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t32765_0_0_0/* byval_arg */
	, &IEnumerable_1_t32765_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t32765_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
	, false/* enumtype */
	, true/* is_generic */
	, false/* has_references */
	, false/* init_pending */
	, false/* size_inited */
	, false/* has_finalize */
	, false/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 1/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 1/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
