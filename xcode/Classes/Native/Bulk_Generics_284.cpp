#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3050.h"
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
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3050MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.Security.Principal.WindowsAccountType
#include "mscorlib_System_Security_Principal_WindowsAccountType.h"
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
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern TypeInfo WindowsAccountType_t8163_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m180351_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWindowsAccountType_t8163_m223691_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.Principal.WindowsAccountType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.Principal.WindowsAccountType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWindowsAccountType_t8163_m223691 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisWindowsAccountType_t8163_m223691_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180346_MethodInfo;
 void InternalEnumerator_1__ctor_m180346 (InternalEnumerator_1_t24857 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180347_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180347 (InternalEnumerator_1_t24857 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348 (InternalEnumerator_1_t24857 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180351(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180351_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&WindowsAccountType_t8163_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180349_MethodInfo;
 void InternalEnumerator_1_Dispose_m180349 (InternalEnumerator_1_t24857 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180350_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180350 (InternalEnumerator_1_t24857 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180351_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180351 (InternalEnumerator_1_t24857 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWindowsAccountType_t8163_m223691(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWindowsAccountType_t8163_m223691_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24857____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24857, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24857____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24857, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24857_FieldInfos[] =
{
	&InternalEnumerator_1_t24857____array_FieldInfo,
	&InternalEnumerator_1_t24857____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24857____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24857_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180351_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24857____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24857_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180351_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24857_PropertyInfos[] =
{
	&InternalEnumerator_1_t24857____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24857____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24857_InternalEnumerator_1__ctor_m180346_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180346_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180346/* method */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24857_InternalEnumerator_1__ctor_m180346_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180347_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180347/* method */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348/* method */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180349_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180349/* method */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180350_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180350/* method */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern Il2CppType WindowsAccountType_t8163_0_0_0;
extern void* RuntimeInvoker_WindowsAccountType_t8163 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Security.Principal.WindowsAccountType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180351_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180351/* method */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* declaring_type */
	, &WindowsAccountType_t8163_0_0_0/* return_type */
	, RuntimeInvoker_WindowsAccountType_t8163/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24857_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180346_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180347_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348_MethodInfo,
	&InternalEnumerator_1_Dispose_m180349_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180350_MethodInfo,
	&InternalEnumerator_1_get_Current_m180351_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180350_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180347_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180349_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180351_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24857_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180348_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180350_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180347_MethodInfo,
	&InternalEnumerator_1_Dispose_m180349_MethodInfo,
	&InternalEnumerator_1_get_Current_m180351_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29301_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24857_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29301_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29301_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24857_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29301_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24857_0_0_0;
extern Il2CppType InternalEnumerator_1_t24857_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24857_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24857_MethodInfos/* methods */
	, InternalEnumerator_1_t24857_PropertyInfos/* properties */
	, InternalEnumerator_1_t24857_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24857_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24857_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24857_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24857_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24857_1_0_0/* this_arg */
	, InternalEnumerator_1_t24857_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24857_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24857)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo ICollection_1_get_Count_m272690_MethodInfo;
static PropertyInfo ICollection_1_t37070____Count_PropertyInfo = 
{
	&ICollection_1_t37070_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272690_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272691_MethodInfo;
static PropertyInfo ICollection_1_t37070____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37070_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272691_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37070_PropertyInfos[] =
{
	&ICollection_1_t37070____Count_PropertyInfo,
	&ICollection_1_t37070____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_Count()
MethodInfo ICollection_1_get_Count_m272690_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272691_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WindowsAccountType_t8163_0_0_0;
static ParameterInfo ICollection_1_t37070_ICollection_1_Add_m272692_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t8163_0_0_0},
};
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Add(T)
MethodInfo ICollection_1_Add_m272692_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37070_ICollection_1_Add_m272692_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Clear()
MethodInfo ICollection_1_Clear_m272693_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WindowsAccountType_t8163_0_0_0;
static ParameterInfo ICollection_1_t37070_ICollection_1_Contains_m272694_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t8163_0_0_0},
};
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Contains(T)
MethodInfo ICollection_1_Contains_m272694_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37070_ICollection_1_Contains_m272694_ParameterInfos/* parameters */
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
extern Il2CppType WindowsAccountTypeU5BU5D_t25365_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37070_ICollection_1_CopyTo_m272695_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountTypeU5BU5D_t25365_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272695_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37070_ICollection_1_CopyTo_m272695_ParameterInfos/* parameters */
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
extern Il2CppType WindowsAccountType_t8163_0_0_0;
static ParameterInfo ICollection_1_t37070_ICollection_1_Remove_m272696_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t8163_0_0_0},
};
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.Principal.WindowsAccountType>::Remove(T)
MethodInfo ICollection_1_Remove_m272696_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37070_ICollection_1_Remove_m272696_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37070_MethodInfos[] =
{
	&ICollection_1_get_Count_m272690_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272691_MethodInfo,
	&ICollection_1_Add_m272692_MethodInfo,
	&ICollection_1_Clear_m272693_MethodInfo,
	&ICollection_1_Contains_m272694_MethodInfo,
	&ICollection_1_CopyTo_m272695_MethodInfo,
	&ICollection_1_Remove_m272696_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37072_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37070_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37072_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37070_0_0_0;
extern Il2CppType ICollection_1_t37070_1_0_0;
struct ICollection_1_t37070;
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37070_GenericClass;
TypeInfo ICollection_1_t37070_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37070_MethodInfos/* methods */
	, ICollection_1_t37070_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37070_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37070_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37070_0_0_0/* byval_arg */
	, &ICollection_1_t37070_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37070_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37072_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Principal.WindowsAccountType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.Principal.WindowsAccountType>
extern TypeInfo IEnumerable_1_t37072_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29301_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.Principal.WindowsAccountType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272697_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37072_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29301_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37072_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272697_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37072_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37072_0_0_0;
extern Il2CppType IEnumerable_1_t37072_1_0_0;
struct IEnumerable_1_t37072;
extern TypeInfo IEnumerable_1_t37072_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37072_GenericClass;
TypeInfo IEnumerable_1_t37072_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37072_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37072_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37072_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37072_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37072_0_0_0/* byval_arg */
	, &IEnumerable_1_t37072_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37072_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37071_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>
extern MethodInfo IList_1_get_Item_m272698_MethodInfo;
extern MethodInfo IList_1_set_Item_m272699_MethodInfo;
static PropertyInfo IList_1_t37071____Item_PropertyInfo = 
{
	&IList_1_t37071_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272698_MethodInfo/* get */
	, &IList_1_set_Item_m272699_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37071_PropertyInfos[] =
{
	&IList_1_t37071____Item_PropertyInfo,
	NULL
};
extern Il2CppType WindowsAccountType_t8163_0_0_0;
static ParameterInfo IList_1_t37071_IList_1_IndexOf_m272700_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t8163_0_0_0},
};
extern TypeInfo IList_1_t37071_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272700_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37071_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37071_IList_1_IndexOf_m272700_ParameterInfos/* parameters */
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
extern Il2CppType WindowsAccountType_t8163_0_0_0;
static ParameterInfo IList_1_t37071_IList_1_Insert_m272701_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t8163_0_0_0},
};
extern TypeInfo IList_1_t37071_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272701_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37071_IList_1_Insert_m272701_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37071_IList_1_RemoveAt_m272702_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37071_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272702_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37071_IList_1_RemoveAt_m272702_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37071_IList_1_get_Item_m272698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37071_il2cpp_TypeInfo;
extern Il2CppType WindowsAccountType_t8163_0_0_0;
extern void* RuntimeInvoker_WindowsAccountType_t8163_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272698_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37071_il2cpp_TypeInfo/* declaring_type */
	, &WindowsAccountType_t8163_0_0_0/* return_type */
	, RuntimeInvoker_WindowsAccountType_t8163_Int32_t73/* invoker_method */
	, IList_1_t37071_IList_1_get_Item_m272698_ParameterInfos/* parameters */
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
extern Il2CppType WindowsAccountType_t8163_0_0_0;
static ParameterInfo IList_1_t37071_IList_1_set_Item_m272699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WindowsAccountType_t8163_0_0_0},
};
extern TypeInfo IList_1_t37071_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.Principal.WindowsAccountType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272699_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37071_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37071_IList_1_set_Item_m272699_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37071_MethodInfos[] =
{
	&IList_1_IndexOf_m272700_MethodInfo,
	&IList_1_Insert_m272701_MethodInfo,
	&IList_1_RemoveAt_m272702_MethodInfo,
	&IList_1_get_Item_m272698_MethodInfo,
	&IList_1_set_Item_m272699_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37070_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37072_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37071_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37070_il2cpp_TypeInfo,
	&IEnumerable_1_t37072_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37071_0_0_0;
extern Il2CppType IList_1_t37071_1_0_0;
struct IList_1_t37071;
extern TypeInfo IList_1_t37071_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37071_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37071_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37071_MethodInfos/* methods */
	, IList_1_t37071_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37071_il2cpp_TypeInfo/* element_class */
	, IList_1_t37071_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37071_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37071_0_0_0/* byval_arg */
	, &IList_1_t37071_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37071_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29302_il2cpp_TypeInfo;

// System.Security.SecurityCriticalAttribute
#include "mscorlib_System_Security_SecurityCriticalAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272703_MethodInfo;
static PropertyInfo IEnumerator_1_t29302____Current_PropertyInfo = 
{
	&IEnumerator_1_t29302_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272703_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29302_PropertyInfos[] =
{
	&IEnumerator_1_t29302____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29302_il2cpp_TypeInfo;
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272703_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29302_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCriticalAttribute_t7706_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29302_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272703_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29302_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29302_0_0_0;
extern Il2CppType IEnumerator_1_t29302_1_0_0;
struct IEnumerator_1_t29302;
extern TypeInfo IEnumerator_1_t29302_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29302_GenericClass;
TypeInfo IEnumerator_1_t29302_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29302_MethodInfos/* methods */
	, IEnumerator_1_t29302_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29302_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29302_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29302_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29302_0_0_0/* byval_arg */
	, &IEnumerator_1_t29302_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29302_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3051.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3051MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern TypeInfo SecurityCriticalAttribute_t7706_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180357_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t7706_m223702_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.SecurityCriticalAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.SecurityCriticalAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t7706_m223702(__this, p0, method) (SecurityCriticalAttribute_t7706 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t7706_m223702_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24858____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24858, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24858____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24858, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24858_FieldInfos[] =
{
	&InternalEnumerator_1_t24858____array_FieldInfo,
	&InternalEnumerator_1_t24858____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180354_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24858____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24858_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180357_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24858____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24858_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180357_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24858_PropertyInfos[] =
{
	&InternalEnumerator_1_t24858____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24858____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24858_InternalEnumerator_1__ctor_m180352_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180352_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24858_InternalEnumerator_1__ctor_m180352_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180353_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180354_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180355_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180356_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Security.SecurityCriticalAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180357_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCriticalAttribute_t7706_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24858_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180352_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180353_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180354_MethodInfo,
	&InternalEnumerator_1_Dispose_m180355_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180356_MethodInfo,
	&InternalEnumerator_1_get_Current_m180357_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180354_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180356_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180353_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180355_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180357_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24858_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180354_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180356_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180353_MethodInfo,
	&InternalEnumerator_1_Dispose_m180355_MethodInfo,
	&InternalEnumerator_1_get_Current_m180357_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29302_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24858_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29302_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29302_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24858_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29302_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m180357_MethodInfo;
extern TypeInfo SecurityCriticalAttribute_t7706_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t7706_m223702_MethodInfo;
static void* InternalEnumerator_1_t24858_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m180357_MethodInfo,
	&SecurityCriticalAttribute_t7706_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSecurityCriticalAttribute_t7706_m223702_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24858_0_0_0;
extern Il2CppType InternalEnumerator_1_t24858_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24858_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24858_MethodInfos/* methods */
	, InternalEnumerator_1_t24858_PropertyInfos/* properties */
	, InternalEnumerator_1_t24858_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24858_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24858_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24858_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24858_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24858_1_0_0/* this_arg */
	, InternalEnumerator_1_t24858_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24858_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24858_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24858)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo ICollection_1_get_Count_m272704_MethodInfo;
static PropertyInfo ICollection_1_t37073____Count_PropertyInfo = 
{
	&ICollection_1_t37073_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272704_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272705_MethodInfo;
static PropertyInfo ICollection_1_t37073____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37073_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272705_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37073_PropertyInfos[] =
{
	&ICollection_1_t37073____Count_PropertyInfo,
	&ICollection_1_t37073____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272704_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272705_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
static ParameterInfo ICollection_1_t37073_ICollection_1_Add_m272706_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t7706_0_0_0},
};
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272706_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t37073_ICollection_1_Add_m272706_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272707_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
static ParameterInfo ICollection_1_t37073_ICollection_1_Contains_m272708_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t7706_0_0_0},
};
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272708_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37073_ICollection_1_Contains_m272708_ParameterInfos/* parameters */
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
extern Il2CppType SecurityCriticalAttributeU5BU5D_t25366_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37073_ICollection_1_CopyTo_m272709_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttributeU5BU5D_t25366_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272709_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37073_ICollection_1_CopyTo_m272709_ParameterInfos/* parameters */
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
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
static ParameterInfo ICollection_1_t37073_ICollection_1_Remove_m272710_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t7706_0_0_0},
};
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecurityCriticalAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272710_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37073_ICollection_1_Remove_m272710_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37073_MethodInfos[] =
{
	&ICollection_1_get_Count_m272704_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272705_MethodInfo,
	&ICollection_1_Add_m272706_MethodInfo,
	&ICollection_1_Clear_m272707_MethodInfo,
	&ICollection_1_Contains_m272708_MethodInfo,
	&ICollection_1_CopyTo_m272709_MethodInfo,
	&ICollection_1_Remove_m272710_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37075_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37073_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37075_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37073_0_0_0;
extern Il2CppType ICollection_1_t37073_1_0_0;
struct ICollection_1_t37073;
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37073_GenericClass;
TypeInfo ICollection_1_t37073_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37073_MethodInfos/* methods */
	, ICollection_1_t37073_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37073_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37073_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37073_0_0_0/* byval_arg */
	, &ICollection_1_t37073_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37073_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37075_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecurityCriticalAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecurityCriticalAttribute>
extern TypeInfo IEnumerable_1_t37075_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29302_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecurityCriticalAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272711_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37075_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29302_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37075_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272711_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37075_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37075_0_0_0;
extern Il2CppType IEnumerable_1_t37075_1_0_0;
struct IEnumerable_1_t37075;
extern TypeInfo IEnumerable_1_t37075_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37075_GenericClass;
TypeInfo IEnumerable_1_t37075_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37075_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37075_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37075_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37075_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37075_0_0_0/* byval_arg */
	, &IEnumerable_1_t37075_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37075_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37074_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>
extern MethodInfo IList_1_get_Item_m272712_MethodInfo;
extern MethodInfo IList_1_set_Item_m272713_MethodInfo;
static PropertyInfo IList_1_t37074____Item_PropertyInfo = 
{
	&IList_1_t37074_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272712_MethodInfo/* get */
	, &IList_1_set_Item_m272713_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37074_PropertyInfos[] =
{
	&IList_1_t37074____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
static ParameterInfo IList_1_t37074_IList_1_IndexOf_m272714_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t7706_0_0_0},
};
extern TypeInfo IList_1_t37074_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272714_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37074_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37074_IList_1_IndexOf_m272714_ParameterInfos/* parameters */
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
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
static ParameterInfo IList_1_t37074_IList_1_Insert_m272715_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t7706_0_0_0},
};
extern TypeInfo IList_1_t37074_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272715_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37074_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37074_IList_1_Insert_m272715_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37074_IList_1_RemoveAt_m272716_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37074_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272716_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37074_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37074_IList_1_RemoveAt_m272716_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37074_IList_1_get_Item_m272712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37074_il2cpp_TypeInfo;
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272712_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37074_il2cpp_TypeInfo/* declaring_type */
	, &SecurityCriticalAttribute_t7706_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t37074_IList_1_get_Item_m272712_ParameterInfos/* parameters */
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
extern Il2CppType SecurityCriticalAttribute_t7706_0_0_0;
static ParameterInfo IList_1_t37074_IList_1_set_Item_m272713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecurityCriticalAttribute_t7706_0_0_0},
};
extern TypeInfo IList_1_t37074_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SecurityCriticalAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272713_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37074_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37074_IList_1_set_Item_m272713_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37074_MethodInfos[] =
{
	&IList_1_IndexOf_m272714_MethodInfo,
	&IList_1_Insert_m272715_MethodInfo,
	&IList_1_RemoveAt_m272716_MethodInfo,
	&IList_1_get_Item_m272712_MethodInfo,
	&IList_1_set_Item_m272713_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37073_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37075_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37074_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37073_il2cpp_TypeInfo,
	&IEnumerable_1_t37075_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37074_0_0_0;
extern Il2CppType IList_1_t37074_1_0_0;
struct IList_1_t37074;
extern TypeInfo IList_1_t37074_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37074_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37074_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37074_MethodInfos/* methods */
	, IList_1_t37074_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37074_il2cpp_TypeInfo/* element_class */
	, IList_1_t37074_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37074_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37074_0_0_0/* byval_arg */
	, &IList_1_t37074_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37074_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29303_il2cpp_TypeInfo;

// System.Security.SecuritySafeCriticalAttribute
#include "mscorlib_System_Security_SecuritySafeCriticalAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272717_MethodInfo;
static PropertyInfo IEnumerator_1_t29303____Current_PropertyInfo = 
{
	&IEnumerator_1_t29303_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272717_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29303_PropertyInfos[] =
{
	&IEnumerator_1_t29303____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29303_il2cpp_TypeInfo;
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272717_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29303_il2cpp_TypeInfo/* declaring_type */
	, &SecuritySafeCriticalAttribute_t7653_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29303_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272717_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29303_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29303_0_0_0;
extern Il2CppType IEnumerator_1_t29303_1_0_0;
struct IEnumerator_1_t29303;
extern TypeInfo IEnumerator_1_t29303_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29303_GenericClass;
TypeInfo IEnumerator_1_t29303_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29303_MethodInfos/* methods */
	, IEnumerator_1_t29303_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29303_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29303_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29303_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29303_0_0_0/* byval_arg */
	, &IEnumerator_1_t29303_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29303_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3052.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3052MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern TypeInfo SecuritySafeCriticalAttribute_t7653_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180363_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t7653_m223713_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.SecuritySafeCriticalAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.SecuritySafeCriticalAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t7653_m223713(__this, p0, method) (SecuritySafeCriticalAttribute_t7653 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t7653_m223713_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24859____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24859, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24859____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24859, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24859_FieldInfos[] =
{
	&InternalEnumerator_1_t24859____array_FieldInfo,
	&InternalEnumerator_1_t24859____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180360_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24859____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24859_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180360_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180363_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24859____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24859_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180363_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24859_PropertyInfos[] =
{
	&InternalEnumerator_1_t24859____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24859____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24859_InternalEnumerator_1__ctor_m180358_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180358_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24859_InternalEnumerator_1__ctor_m180358_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180359_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180360_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180361_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180362_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Security.SecuritySafeCriticalAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180363_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* declaring_type */
	, &SecuritySafeCriticalAttribute_t7653_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24859_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180358_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180359_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180360_MethodInfo,
	&InternalEnumerator_1_Dispose_m180361_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180362_MethodInfo,
	&InternalEnumerator_1_get_Current_m180363_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180360_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180362_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180359_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180361_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180363_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24859_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180360_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180362_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180359_MethodInfo,
	&InternalEnumerator_1_Dispose_m180361_MethodInfo,
	&InternalEnumerator_1_get_Current_m180363_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29303_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24859_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29303_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29303_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24859_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29303_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m180363_MethodInfo;
extern TypeInfo SecuritySafeCriticalAttribute_t7653_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t7653_m223713_MethodInfo;
static void* InternalEnumerator_1_t24859_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m180363_MethodInfo,
	&SecuritySafeCriticalAttribute_t7653_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSecuritySafeCriticalAttribute_t7653_m223713_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24859_0_0_0;
extern Il2CppType InternalEnumerator_1_t24859_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24859_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24859_MethodInfos/* methods */
	, InternalEnumerator_1_t24859_PropertyInfos/* properties */
	, InternalEnumerator_1_t24859_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24859_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24859_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24859_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24859_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24859_1_0_0/* this_arg */
	, InternalEnumerator_1_t24859_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24859_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24859_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24859)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo ICollection_1_get_Count_m272718_MethodInfo;
static PropertyInfo ICollection_1_t37076____Count_PropertyInfo = 
{
	&ICollection_1_t37076_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272718_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272719_MethodInfo;
static PropertyInfo ICollection_1_t37076____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37076_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272719_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37076_PropertyInfos[] =
{
	&ICollection_1_t37076____Count_PropertyInfo,
	&ICollection_1_t37076____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272718_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272719_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
static ParameterInfo ICollection_1_t37076_ICollection_1_Add_m272720_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t7653_0_0_0},
};
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272720_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t37076_ICollection_1_Add_m272720_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272721_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
static ParameterInfo ICollection_1_t37076_ICollection_1_Contains_m272722_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t7653_0_0_0},
};
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272722_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37076_ICollection_1_Contains_m272722_ParameterInfos/* parameters */
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
extern Il2CppType SecuritySafeCriticalAttributeU5BU5D_t25367_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37076_ICollection_1_CopyTo_m272723_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttributeU5BU5D_t25367_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272723_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37076_ICollection_1_CopyTo_m272723_ParameterInfos/* parameters */
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
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
static ParameterInfo ICollection_1_t37076_ICollection_1_Remove_m272724_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t7653_0_0_0},
};
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SecuritySafeCriticalAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272724_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37076_ICollection_1_Remove_m272724_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37076_MethodInfos[] =
{
	&ICollection_1_get_Count_m272718_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272719_MethodInfo,
	&ICollection_1_Add_m272720_MethodInfo,
	&ICollection_1_Clear_m272721_MethodInfo,
	&ICollection_1_Contains_m272722_MethodInfo,
	&ICollection_1_CopyTo_m272723_MethodInfo,
	&ICollection_1_Remove_m272724_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37078_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37076_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37078_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37076_0_0_0;
extern Il2CppType ICollection_1_t37076_1_0_0;
struct ICollection_1_t37076;
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37076_GenericClass;
TypeInfo ICollection_1_t37076_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37076_MethodInfos/* methods */
	, ICollection_1_t37076_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37076_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37076_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37076_0_0_0/* byval_arg */
	, &ICollection_1_t37076_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37076_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37078_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>
extern TypeInfo IEnumerable_1_t37078_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29303_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SecuritySafeCriticalAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272725_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37078_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29303_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37078_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272725_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37078_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37078_0_0_0;
extern Il2CppType IEnumerable_1_t37078_1_0_0;
struct IEnumerable_1_t37078;
extern TypeInfo IEnumerable_1_t37078_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37078_GenericClass;
TypeInfo IEnumerable_1_t37078_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37078_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37078_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37078_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37078_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37078_0_0_0/* byval_arg */
	, &IEnumerable_1_t37078_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37078_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37077_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>
extern MethodInfo IList_1_get_Item_m272726_MethodInfo;
extern MethodInfo IList_1_set_Item_m272727_MethodInfo;
static PropertyInfo IList_1_t37077____Item_PropertyInfo = 
{
	&IList_1_t37077_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272726_MethodInfo/* get */
	, &IList_1_set_Item_m272727_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37077_PropertyInfos[] =
{
	&IList_1_t37077____Item_PropertyInfo,
	NULL
};
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
static ParameterInfo IList_1_t37077_IList_1_IndexOf_m272728_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t7653_0_0_0},
};
extern TypeInfo IList_1_t37077_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272728_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37077_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37077_IList_1_IndexOf_m272728_ParameterInfos/* parameters */
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
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
static ParameterInfo IList_1_t37077_IList_1_Insert_m272729_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t7653_0_0_0},
};
extern TypeInfo IList_1_t37077_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272729_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37077_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37077_IList_1_Insert_m272729_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37077_IList_1_RemoveAt_m272730_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37077_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272730_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37077_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37077_IList_1_RemoveAt_m272730_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37077_IList_1_get_Item_m272726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37077_il2cpp_TypeInfo;
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272726_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37077_il2cpp_TypeInfo/* declaring_type */
	, &SecuritySafeCriticalAttribute_t7653_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t37077_IList_1_get_Item_m272726_ParameterInfos/* parameters */
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
extern Il2CppType SecuritySafeCriticalAttribute_t7653_0_0_0;
static ParameterInfo IList_1_t37077_IList_1_set_Item_m272727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SecuritySafeCriticalAttribute_t7653_0_0_0},
};
extern TypeInfo IList_1_t37077_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SecuritySafeCriticalAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272727_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37077_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37077_IList_1_set_Item_m272727_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37077_MethodInfos[] =
{
	&IList_1_IndexOf_m272728_MethodInfo,
	&IList_1_Insert_m272729_MethodInfo,
	&IList_1_RemoveAt_m272730_MethodInfo,
	&IList_1_get_Item_m272726_MethodInfo,
	&IList_1_set_Item_m272727_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37076_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37078_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37077_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37076_il2cpp_TypeInfo,
	&IEnumerable_1_t37078_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37077_0_0_0;
extern Il2CppType IList_1_t37077_1_0_0;
struct IList_1_t37077;
extern TypeInfo IList_1_t37077_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37077_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37077_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37077_MethodInfos/* methods */
	, IList_1_t37077_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37077_il2cpp_TypeInfo/* element_class */
	, IList_1_t37077_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37077_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37077_0_0_0/* byval_arg */
	, &IList_1_t37077_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37077_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29304_il2cpp_TypeInfo;

// System.Security.SuppressUnmanagedCodeSecurityAttribute
#include "mscorlib_System_Security_SuppressUnmanagedCodeSecurityAttrib.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272731_MethodInfo;
static PropertyInfo IEnumerator_1_t29304____Current_PropertyInfo = 
{
	&IEnumerator_1_t29304_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272731_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29304_PropertyInfos[] =
{
	&IEnumerator_1_t29304____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29304_il2cpp_TypeInfo;
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272731_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29304_il2cpp_TypeInfo/* declaring_type */
	, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29304_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272731_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29304_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29304_0_0_0;
extern Il2CppType IEnumerator_1_t29304_1_0_0;
struct IEnumerator_1_t29304;
extern TypeInfo IEnumerator_1_t29304_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29304_GenericClass;
TypeInfo IEnumerator_1_t29304_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29304_MethodInfos/* methods */
	, IEnumerator_1_t29304_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29304_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29304_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29304_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29304_0_0_0/* byval_arg */
	, &IEnumerator_1_t29304_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29304_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3053.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3053MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern TypeInfo SuppressUnmanagedCodeSecurityAttribute_t7402_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180369_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t7402_m223724_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.SuppressUnmanagedCodeSecurityAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t7402_m223724(__this, p0, method) (SuppressUnmanagedCodeSecurityAttribute_t7402 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t7402_m223724_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24860____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24860, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24860____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24860, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24860_FieldInfos[] =
{
	&InternalEnumerator_1_t24860____array_FieldInfo,
	&InternalEnumerator_1_t24860____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180366_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24860____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24860_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180369_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24860____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24860_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180369_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24860_PropertyInfos[] =
{
	&InternalEnumerator_1_t24860____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24860____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24860_InternalEnumerator_1__ctor_m180364_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180364_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24860_InternalEnumerator_1__ctor_m180364_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180365_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180366_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180367_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180368_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180369_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* declaring_type */
	, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24860_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180364_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180365_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180366_MethodInfo,
	&InternalEnumerator_1_Dispose_m180367_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180368_MethodInfo,
	&InternalEnumerator_1_get_Current_m180369_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180366_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180368_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180365_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180367_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180369_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24860_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180366_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180368_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180365_MethodInfo,
	&InternalEnumerator_1_Dispose_m180367_MethodInfo,
	&InternalEnumerator_1_get_Current_m180369_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29304_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24860_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29304_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29304_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24860_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29304_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m180369_MethodInfo;
extern TypeInfo SuppressUnmanagedCodeSecurityAttribute_t7402_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t7402_m223724_MethodInfo;
static void* InternalEnumerator_1_t24860_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m180369_MethodInfo,
	&SuppressUnmanagedCodeSecurityAttribute_t7402_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSuppressUnmanagedCodeSecurityAttribute_t7402_m223724_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24860_0_0_0;
extern Il2CppType InternalEnumerator_1_t24860_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24860_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24860_MethodInfos/* methods */
	, InternalEnumerator_1_t24860_PropertyInfos/* properties */
	, InternalEnumerator_1_t24860_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24860_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24860_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24860_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24860_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24860_1_0_0/* this_arg */
	, InternalEnumerator_1_t24860_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24860_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24860_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24860)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo ICollection_1_get_Count_m272732_MethodInfo;
static PropertyInfo ICollection_1_t37079____Count_PropertyInfo = 
{
	&ICollection_1_t37079_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272732_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272733_MethodInfo;
static PropertyInfo ICollection_1_t37079____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37079_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272733_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37079_PropertyInfos[] =
{
	&ICollection_1_t37079____Count_PropertyInfo,
	&ICollection_1_t37079____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272732_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272733_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
static ParameterInfo ICollection_1_t37079_ICollection_1_Add_m272734_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0},
};
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272734_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t37079_ICollection_1_Add_m272734_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272735_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
static ParameterInfo ICollection_1_t37079_ICollection_1_Contains_m272736_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0},
};
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272736_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37079_ICollection_1_Contains_m272736_ParameterInfos/* parameters */
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
extern Il2CppType SuppressUnmanagedCodeSecurityAttributeU5BU5D_t25368_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37079_ICollection_1_CopyTo_m272737_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttributeU5BU5D_t25368_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272737_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37079_ICollection_1_CopyTo_m272737_ParameterInfos/* parameters */
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
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
static ParameterInfo ICollection_1_t37079_ICollection_1_Remove_m272738_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0},
};
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272738_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37079_ICollection_1_Remove_m272738_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37079_MethodInfos[] =
{
	&ICollection_1_get_Count_m272732_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272733_MethodInfo,
	&ICollection_1_Add_m272734_MethodInfo,
	&ICollection_1_Clear_m272735_MethodInfo,
	&ICollection_1_Contains_m272736_MethodInfo,
	&ICollection_1_CopyTo_m272737_MethodInfo,
	&ICollection_1_Remove_m272738_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37081_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37079_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37081_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37079_0_0_0;
extern Il2CppType ICollection_1_t37079_1_0_0;
struct ICollection_1_t37079;
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37079_GenericClass;
TypeInfo ICollection_1_t37079_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37079_MethodInfos/* methods */
	, ICollection_1_t37079_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37079_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37079_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37079_0_0_0/* byval_arg */
	, &ICollection_1_t37079_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37079_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37081_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern TypeInfo IEnumerable_1_t37081_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29304_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272739_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37081_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29304_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37081_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272739_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37081_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37081_0_0_0;
extern Il2CppType IEnumerable_1_t37081_1_0_0;
struct IEnumerable_1_t37081;
extern TypeInfo IEnumerable_1_t37081_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37081_GenericClass;
TypeInfo IEnumerable_1_t37081_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37081_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37081_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37081_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37081_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37081_0_0_0/* byval_arg */
	, &IEnumerable_1_t37081_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37081_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37080_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>
extern MethodInfo IList_1_get_Item_m272740_MethodInfo;
extern MethodInfo IList_1_set_Item_m272741_MethodInfo;
static PropertyInfo IList_1_t37080____Item_PropertyInfo = 
{
	&IList_1_t37080_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272740_MethodInfo/* get */
	, &IList_1_set_Item_m272741_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37080_PropertyInfos[] =
{
	&IList_1_t37080____Item_PropertyInfo,
	NULL
};
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
static ParameterInfo IList_1_t37080_IList_1_IndexOf_m272742_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0},
};
extern TypeInfo IList_1_t37080_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272742_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37080_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37080_IList_1_IndexOf_m272742_ParameterInfos/* parameters */
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
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
static ParameterInfo IList_1_t37080_IList_1_Insert_m272743_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0},
};
extern TypeInfo IList_1_t37080_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272743_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37080_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37080_IList_1_Insert_m272743_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37080_IList_1_RemoveAt_m272744_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37080_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272744_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37080_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37080_IList_1_RemoveAt_m272744_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37080_IList_1_get_Item_m272740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37080_il2cpp_TypeInfo;
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272740_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37080_il2cpp_TypeInfo/* declaring_type */
	, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t37080_IList_1_get_Item_m272740_ParameterInfos/* parameters */
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
extern Il2CppType SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0;
static ParameterInfo IList_1_t37080_IList_1_set_Item_m272741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SuppressUnmanagedCodeSecurityAttribute_t7402_0_0_0},
};
extern TypeInfo IList_1_t37080_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.SuppressUnmanagedCodeSecurityAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272741_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37080_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37080_IList_1_set_Item_m272741_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37080_MethodInfos[] =
{
	&IList_1_IndexOf_m272742_MethodInfo,
	&IList_1_Insert_m272743_MethodInfo,
	&IList_1_RemoveAt_m272744_MethodInfo,
	&IList_1_get_Item_m272740_MethodInfo,
	&IList_1_set_Item_m272741_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37079_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37081_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37080_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37079_il2cpp_TypeInfo,
	&IEnumerable_1_t37081_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37080_0_0_0;
extern Il2CppType IList_1_t37080_1_0_0;
struct IList_1_t37080;
extern TypeInfo IList_1_t37080_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37080_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37080_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37080_MethodInfos/* methods */
	, IList_1_t37080_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37080_il2cpp_TypeInfo/* element_class */
	, IList_1_t37080_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37080_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37080_0_0_0/* byval_arg */
	, &IList_1_t37080_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37080_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29305_il2cpp_TypeInfo;

// System.Security.UnverifiableCodeAttribute
#include "mscorlib_System_Security_UnverifiableCodeAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272745_MethodInfo;
static PropertyInfo IEnumerator_1_t29305____Current_PropertyInfo = 
{
	&IEnumerator_1_t29305_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272745_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29305_PropertyInfos[] =
{
	&IEnumerator_1_t29305____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29305_il2cpp_TypeInfo;
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272745_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29305_il2cpp_TypeInfo/* declaring_type */
	, &UnverifiableCodeAttribute_t8173_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29305_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272745_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29305_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29305_0_0_0;
extern Il2CppType IEnumerator_1_t29305_1_0_0;
struct IEnumerator_1_t29305;
extern TypeInfo IEnumerator_1_t29305_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29305_GenericClass;
TypeInfo IEnumerator_1_t29305_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29305_MethodInfos/* methods */
	, IEnumerator_1_t29305_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29305_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29305_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29305_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29305_0_0_0/* byval_arg */
	, &IEnumerator_1_t29305_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29305_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3054.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3054MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern TypeInfo UnverifiableCodeAttribute_t8173_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180375_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t8173_m223735_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Security.UnverifiableCodeAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Security.UnverifiableCodeAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t8173_m223735(__this, p0, method) (UnverifiableCodeAttribute_t8173 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t8173_m223735_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24861____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24861, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24861____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24861, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24861_FieldInfos[] =
{
	&InternalEnumerator_1_t24861____array_FieldInfo,
	&InternalEnumerator_1_t24861____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180372_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24861____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24861_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180372_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180375_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24861____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24861_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180375_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24861_PropertyInfos[] =
{
	&InternalEnumerator_1_t24861____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24861____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24861_InternalEnumerator_1__ctor_m180370_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180370_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24861_InternalEnumerator_1__ctor_m180370_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180371_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180372_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180373_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180374_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Security.UnverifiableCodeAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180375_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* declaring_type */
	, &UnverifiableCodeAttribute_t8173_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24861_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180370_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180371_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180372_MethodInfo,
	&InternalEnumerator_1_Dispose_m180373_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180374_MethodInfo,
	&InternalEnumerator_1_get_Current_m180375_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180372_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180374_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180371_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180373_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180375_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24861_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180372_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180374_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180371_MethodInfo,
	&InternalEnumerator_1_Dispose_m180373_MethodInfo,
	&InternalEnumerator_1_get_Current_m180375_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29305_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24861_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29305_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29305_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24861_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29305_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m180375_MethodInfo;
extern TypeInfo UnverifiableCodeAttribute_t8173_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t8173_m223735_MethodInfo;
static void* InternalEnumerator_1_t24861_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m180375_MethodInfo,
	&UnverifiableCodeAttribute_t8173_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisUnverifiableCodeAttribute_t8173_m223735_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24861_0_0_0;
extern Il2CppType InternalEnumerator_1_t24861_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24861_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24861_MethodInfos/* methods */
	, InternalEnumerator_1_t24861_PropertyInfos/* properties */
	, InternalEnumerator_1_t24861_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24861_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24861_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24861_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24861_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24861_1_0_0/* this_arg */
	, InternalEnumerator_1_t24861_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24861_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24861_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24861)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo ICollection_1_get_Count_m272746_MethodInfo;
static PropertyInfo ICollection_1_t37082____Count_PropertyInfo = 
{
	&ICollection_1_t37082_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272746_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272747_MethodInfo;
static PropertyInfo ICollection_1_t37082____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37082_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272747_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37082_PropertyInfos[] =
{
	&ICollection_1_t37082____Count_PropertyInfo,
	&ICollection_1_t37082____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272746_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272747_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
static ParameterInfo ICollection_1_t37082_ICollection_1_Add_m272748_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t8173_0_0_0},
};
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272748_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t37082_ICollection_1_Add_m272748_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272749_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
static ParameterInfo ICollection_1_t37082_ICollection_1_Contains_m272750_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t8173_0_0_0},
};
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272750_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37082_ICollection_1_Contains_m272750_ParameterInfos/* parameters */
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
extern Il2CppType UnverifiableCodeAttributeU5BU5D_t25369_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37082_ICollection_1_CopyTo_m272751_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttributeU5BU5D_t25369_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272751_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37082_ICollection_1_CopyTo_m272751_ParameterInfos/* parameters */
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
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
static ParameterInfo ICollection_1_t37082_ICollection_1_Remove_m272752_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t8173_0_0_0},
};
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Security.UnverifiableCodeAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272752_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37082_ICollection_1_Remove_m272752_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37082_MethodInfos[] =
{
	&ICollection_1_get_Count_m272746_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272747_MethodInfo,
	&ICollection_1_Add_m272748_MethodInfo,
	&ICollection_1_Clear_m272749_MethodInfo,
	&ICollection_1_Contains_m272750_MethodInfo,
	&ICollection_1_CopyTo_m272751_MethodInfo,
	&ICollection_1_Remove_m272752_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37084_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37082_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37084_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37082_0_0_0;
extern Il2CppType ICollection_1_t37082_1_0_0;
struct ICollection_1_t37082;
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37082_GenericClass;
TypeInfo ICollection_1_t37082_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37082_MethodInfos/* methods */
	, ICollection_1_t37082_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37082_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37082_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37082_0_0_0/* byval_arg */
	, &ICollection_1_t37082_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37082_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37084_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>
extern TypeInfo IEnumerable_1_t37084_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29305_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Security.UnverifiableCodeAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272753_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37084_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29305_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37084_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272753_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37084_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37084_0_0_0;
extern Il2CppType IEnumerable_1_t37084_1_0_0;
struct IEnumerable_1_t37084;
extern TypeInfo IEnumerable_1_t37084_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37084_GenericClass;
TypeInfo IEnumerable_1_t37084_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37084_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37084_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37084_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37084_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37084_0_0_0/* byval_arg */
	, &IEnumerable_1_t37084_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37084_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37083_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>
extern MethodInfo IList_1_get_Item_m272754_MethodInfo;
extern MethodInfo IList_1_set_Item_m272755_MethodInfo;
static PropertyInfo IList_1_t37083____Item_PropertyInfo = 
{
	&IList_1_t37083_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272754_MethodInfo/* get */
	, &IList_1_set_Item_m272755_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37083_PropertyInfos[] =
{
	&IList_1_t37083____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
static ParameterInfo IList_1_t37083_IList_1_IndexOf_m272756_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t8173_0_0_0},
};
extern TypeInfo IList_1_t37083_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272756_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37083_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37083_IList_1_IndexOf_m272756_ParameterInfos/* parameters */
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
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
static ParameterInfo IList_1_t37083_IList_1_Insert_m272757_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t8173_0_0_0},
};
extern TypeInfo IList_1_t37083_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272757_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37083_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37083_IList_1_Insert_m272757_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37083_IList_1_RemoveAt_m272758_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37083_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272758_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37083_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37083_IList_1_RemoveAt_m272758_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37083_IList_1_get_Item_m272754_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37083_il2cpp_TypeInfo;
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272754_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37083_il2cpp_TypeInfo/* declaring_type */
	, &UnverifiableCodeAttribute_t8173_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t37083_IList_1_get_Item_m272754_ParameterInfos/* parameters */
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
extern Il2CppType UnverifiableCodeAttribute_t8173_0_0_0;
static ParameterInfo IList_1_t37083_IList_1_set_Item_m272755_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnverifiableCodeAttribute_t8173_0_0_0},
};
extern TypeInfo IList_1_t37083_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Security.UnverifiableCodeAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272755_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37083_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37083_IList_1_set_Item_m272755_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37083_MethodInfos[] =
{
	&IList_1_IndexOf_m272756_MethodInfo,
	&IList_1_Insert_m272757_MethodInfo,
	&IList_1_RemoveAt_m272758_MethodInfo,
	&IList_1_get_Item_m272754_MethodInfo,
	&IList_1_set_Item_m272755_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37082_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37084_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37083_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37082_il2cpp_TypeInfo,
	&IEnumerable_1_t37084_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37083_0_0_0;
extern Il2CppType IList_1_t37083_1_0_0;
struct IList_1_t37083;
extern TypeInfo IList_1_t37083_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37083_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37083_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37083_MethodInfos/* methods */
	, IList_1_t37083_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37083_il2cpp_TypeInfo/* element_class */
	, IList_1_t37083_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37083_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37083_0_0_0/* byval_arg */
	, &IList_1_t37083_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37083_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29306_il2cpp_TypeInfo;

// System.Threading.EventResetMode
#include "mscorlib_System_Threading_EventResetMode.h"


// T System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>
extern MethodInfo IEnumerator_1_get_Current_m272759_MethodInfo;
static PropertyInfo IEnumerator_1_t29306____Current_PropertyInfo = 
{
	&IEnumerator_1_t29306_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272759_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29306_PropertyInfos[] =
{
	&IEnumerator_1_t29306____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29306_il2cpp_TypeInfo;
extern Il2CppType EventResetMode_t8199_0_0_0;
extern void* RuntimeInvoker_EventResetMode_t8199 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Threading.EventResetMode>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272759_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29306_il2cpp_TypeInfo/* declaring_type */
	, &EventResetMode_t8199_0_0_0/* return_type */
	, RuntimeInvoker_EventResetMode_t8199/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29306_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272759_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29306_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29306_0_0_0;
extern Il2CppType IEnumerator_1_t29306_1_0_0;
struct IEnumerator_1_t29306;
extern TypeInfo IEnumerator_1_t29306_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29306_GenericClass;
TypeInfo IEnumerator_1_t29306_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29306_MethodInfos/* methods */
	, IEnumerator_1_t29306_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29306_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29306_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29306_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29306_0_0_0/* byval_arg */
	, &IEnumerator_1_t29306_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29306_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Threading.EventResetMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3055.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Threading.EventResetMode>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3055MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern TypeInfo EventResetMode_t8199_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180381_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisEventResetMode_t8199_m223746_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Threading.EventResetMode>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Threading.EventResetMode>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisEventResetMode_t8199_m223746 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisEventResetMode_t8199_m223746_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180376_MethodInfo;
 void InternalEnumerator_1__ctor_m180376 (InternalEnumerator_1_t24862 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180377_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180377 (InternalEnumerator_1_t24862 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378 (InternalEnumerator_1_t24862 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180381(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180381_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&EventResetMode_t8199_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180379_MethodInfo;
 void InternalEnumerator_1_Dispose_m180379 (InternalEnumerator_1_t24862 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180380_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180380 (InternalEnumerator_1_t24862 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180381_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180381 (InternalEnumerator_1_t24862 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisEventResetMode_t8199_m223746(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisEventResetMode_t8199_m223746_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.EventResetMode>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24862____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24862, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24862____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24862, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24862_FieldInfos[] =
{
	&InternalEnumerator_1_t24862____array_FieldInfo,
	&InternalEnumerator_1_t24862____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24862____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24862_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180381_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24862____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24862_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24862_PropertyInfos[] =
{
	&InternalEnumerator_1_t24862____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24862____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24862_InternalEnumerator_1__ctor_m180376_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180376_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180376/* method */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24862_InternalEnumerator_1__ctor_m180376_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180377_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180377/* method */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378/* method */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180379_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180379/* method */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180380_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180380/* method */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern Il2CppType EventResetMode_t8199_0_0_0;
extern void* RuntimeInvoker_EventResetMode_t8199 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Threading.EventResetMode>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180381_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180381/* method */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* declaring_type */
	, &EventResetMode_t8199_0_0_0/* return_type */
	, RuntimeInvoker_EventResetMode_t8199/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24862_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180376_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180377_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378_MethodInfo,
	&InternalEnumerator_1_Dispose_m180379_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180380_MethodInfo,
	&InternalEnumerator_1_get_Current_m180381_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180380_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180377_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180379_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180381_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24862_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180378_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180380_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180377_MethodInfo,
	&InternalEnumerator_1_Dispose_m180379_MethodInfo,
	&InternalEnumerator_1_get_Current_m180381_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29306_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24862_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29306_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29306_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24862_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29306_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24862_0_0_0;
extern Il2CppType InternalEnumerator_1_t24862_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24862_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24862_MethodInfos/* methods */
	, InternalEnumerator_1_t24862_PropertyInfos/* properties */
	, InternalEnumerator_1_t24862_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24862_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24862_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24862_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24862_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24862_1_0_0/* this_arg */
	, InternalEnumerator_1_t24862_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24862_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24862)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>
extern MethodInfo ICollection_1_get_Count_m272760_MethodInfo;
static PropertyInfo ICollection_1_t37085____Count_PropertyInfo = 
{
	&ICollection_1_t37085_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272760_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272761_MethodInfo;
static PropertyInfo ICollection_1_t37085____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37085_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272761_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37085_PropertyInfos[] =
{
	&ICollection_1_t37085____Count_PropertyInfo,
	&ICollection_1_t37085____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_Count()
MethodInfo ICollection_1_get_Count_m272760_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272761_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType EventResetMode_t8199_0_0_0;
static ParameterInfo ICollection_1_t37085_ICollection_1_Add_m272762_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t8199_0_0_0},
};
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Add(T)
MethodInfo ICollection_1_Add_m272762_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37085_ICollection_1_Add_m272762_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Clear()
MethodInfo ICollection_1_Clear_m272763_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType EventResetMode_t8199_0_0_0;
static ParameterInfo ICollection_1_t37085_ICollection_1_Contains_m272764_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t8199_0_0_0},
};
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Contains(T)
MethodInfo ICollection_1_Contains_m272764_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37085_ICollection_1_Contains_m272764_ParameterInfos/* parameters */
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
extern Il2CppType EventResetModeU5BU5D_t25370_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37085_ICollection_1_CopyTo_m272765_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &EventResetModeU5BU5D_t25370_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272765_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37085_ICollection_1_CopyTo_m272765_ParameterInfos/* parameters */
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
extern Il2CppType EventResetMode_t8199_0_0_0;
static ParameterInfo ICollection_1_t37085_ICollection_1_Remove_m272766_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t8199_0_0_0},
};
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.EventResetMode>::Remove(T)
MethodInfo ICollection_1_Remove_m272766_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37085_ICollection_1_Remove_m272766_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37085_MethodInfos[] =
{
	&ICollection_1_get_Count_m272760_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272761_MethodInfo,
	&ICollection_1_Add_m272762_MethodInfo,
	&ICollection_1_Clear_m272763_MethodInfo,
	&ICollection_1_Contains_m272764_MethodInfo,
	&ICollection_1_CopyTo_m272765_MethodInfo,
	&ICollection_1_Remove_m272766_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37087_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37085_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37087_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37085_0_0_0;
extern Il2CppType ICollection_1_t37085_1_0_0;
struct ICollection_1_t37085;
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37085_GenericClass;
TypeInfo ICollection_1_t37085_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37085_MethodInfos/* methods */
	, ICollection_1_t37085_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37085_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37085_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37085_0_0_0/* byval_arg */
	, &ICollection_1_t37085_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37085_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37087_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>
extern TypeInfo IEnumerable_1_t37087_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29306_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.EventResetMode>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272767_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37087_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29306_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37087_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272767_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37087_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37087_0_0_0;
extern Il2CppType IEnumerable_1_t37087_1_0_0;
struct IEnumerable_1_t37087;
extern TypeInfo IEnumerable_1_t37087_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37087_GenericClass;
TypeInfo IEnumerable_1_t37087_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37087_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37087_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37087_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37087_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37087_0_0_0/* byval_arg */
	, &IEnumerable_1_t37087_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37087_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37086_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Threading.EventResetMode>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Threading.EventResetMode>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Threading.EventResetMode>
extern MethodInfo IList_1_get_Item_m272768_MethodInfo;
extern MethodInfo IList_1_set_Item_m272769_MethodInfo;
static PropertyInfo IList_1_t37086____Item_PropertyInfo = 
{
	&IList_1_t37086_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272768_MethodInfo/* get */
	, &IList_1_set_Item_m272769_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37086_PropertyInfos[] =
{
	&IList_1_t37086____Item_PropertyInfo,
	NULL
};
extern Il2CppType EventResetMode_t8199_0_0_0;
static ParameterInfo IList_1_t37086_IList_1_IndexOf_m272770_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t8199_0_0_0},
};
extern TypeInfo IList_1_t37086_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Threading.EventResetMode>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272770_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37086_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37086_IList_1_IndexOf_m272770_ParameterInfos/* parameters */
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
extern Il2CppType EventResetMode_t8199_0_0_0;
static ParameterInfo IList_1_t37086_IList_1_Insert_m272771_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t8199_0_0_0},
};
extern TypeInfo IList_1_t37086_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272771_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37086_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37086_IList_1_Insert_m272771_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37086_IList_1_RemoveAt_m272772_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37086_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272772_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37086_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37086_IList_1_RemoveAt_m272772_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37086_IList_1_get_Item_m272768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37086_il2cpp_TypeInfo;
extern Il2CppType EventResetMode_t8199_0_0_0;
extern void* RuntimeInvoker_EventResetMode_t8199_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Threading.EventResetMode>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272768_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37086_il2cpp_TypeInfo/* declaring_type */
	, &EventResetMode_t8199_0_0_0/* return_type */
	, RuntimeInvoker_EventResetMode_t8199_Int32_t73/* invoker_method */
	, IList_1_t37086_IList_1_get_Item_m272768_ParameterInfos/* parameters */
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
extern Il2CppType EventResetMode_t8199_0_0_0;
static ParameterInfo IList_1_t37086_IList_1_set_Item_m272769_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &EventResetMode_t8199_0_0_0},
};
extern TypeInfo IList_1_t37086_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Threading.EventResetMode>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272769_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37086_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37086_IList_1_set_Item_m272769_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37086_MethodInfos[] =
{
	&IList_1_IndexOf_m272770_MethodInfo,
	&IList_1_Insert_m272771_MethodInfo,
	&IList_1_RemoveAt_m272772_MethodInfo,
	&IList_1_get_Item_m272768_MethodInfo,
	&IList_1_set_Item_m272769_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37085_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37087_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37086_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37085_il2cpp_TypeInfo,
	&IEnumerable_1_t37087_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37086_0_0_0;
extern Il2CppType IList_1_t37086_1_0_0;
struct IList_1_t37086;
extern TypeInfo IList_1_t37086_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37086_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37086_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37086_MethodInfos/* methods */
	, IList_1_t37086_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37086_il2cpp_TypeInfo/* element_class */
	, IList_1_t37086_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37086_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37086_0_0_0/* byval_arg */
	, &IList_1_t37086_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37086_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29307_il2cpp_TypeInfo;

// System.Threading.ThreadState
#include "mscorlib_System_Threading_ThreadState.h"


// T System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>
extern MethodInfo IEnumerator_1_get_Current_m272773_MethodInfo;
static PropertyInfo IEnumerator_1_t29307____Current_PropertyInfo = 
{
	&IEnumerator_1_t29307_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272773_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29307_PropertyInfos[] =
{
	&IEnumerator_1_t29307____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29307_il2cpp_TypeInfo;
extern Il2CppType ThreadState_t8207_0_0_0;
extern void* RuntimeInvoker_ThreadState_t8207 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Threading.ThreadState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272773_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29307_il2cpp_TypeInfo/* declaring_type */
	, &ThreadState_t8207_0_0_0/* return_type */
	, RuntimeInvoker_ThreadState_t8207/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29307_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272773_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29307_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29307_0_0_0;
extern Il2CppType IEnumerator_1_t29307_1_0_0;
struct IEnumerator_1_t29307;
extern TypeInfo IEnumerator_1_t29307_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29307_GenericClass;
TypeInfo IEnumerator_1_t29307_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29307_MethodInfos/* methods */
	, IEnumerator_1_t29307_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29307_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29307_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29307_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29307_0_0_0/* byval_arg */
	, &IEnumerator_1_t29307_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29307_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Threading.ThreadState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3056.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Threading.ThreadState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3056MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern TypeInfo ThreadState_t8207_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180387_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisThreadState_t8207_m223757_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Threading.ThreadState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Threading.ThreadState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisThreadState_t8207_m223757 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisThreadState_t8207_m223757_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180382_MethodInfo;
 void InternalEnumerator_1__ctor_m180382 (InternalEnumerator_1_t24863 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180383_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180383 (InternalEnumerator_1_t24863 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384 (InternalEnumerator_1_t24863 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180387(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180387_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ThreadState_t8207_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180385_MethodInfo;
 void InternalEnumerator_1_Dispose_m180385 (InternalEnumerator_1_t24863 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.ThreadState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180386_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180386 (InternalEnumerator_1_t24863 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Threading.ThreadState>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180387_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180387 (InternalEnumerator_1_t24863 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisThreadState_t8207_m223757(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisThreadState_t8207_m223757_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Threading.ThreadState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24863____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24863, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24863____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24863, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24863_FieldInfos[] =
{
	&InternalEnumerator_1_t24863____array_FieldInfo,
	&InternalEnumerator_1_t24863____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24863____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24863_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180387_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24863____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24863_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180387_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24863_PropertyInfos[] =
{
	&InternalEnumerator_1_t24863____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24863____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24863_InternalEnumerator_1__ctor_m180382_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180382_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180382/* method */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24863_InternalEnumerator_1__ctor_m180382_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180383_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180383/* method */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Threading.ThreadState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384/* method */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Threading.ThreadState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180385_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180385/* method */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Threading.ThreadState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180386_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180386/* method */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern Il2CppType ThreadState_t8207_0_0_0;
extern void* RuntimeInvoker_ThreadState_t8207 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Threading.ThreadState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180387_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180387/* method */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* declaring_type */
	, &ThreadState_t8207_0_0_0/* return_type */
	, RuntimeInvoker_ThreadState_t8207/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24863_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180382_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180383_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384_MethodInfo,
	&InternalEnumerator_1_Dispose_m180385_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180386_MethodInfo,
	&InternalEnumerator_1_get_Current_m180387_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180386_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180383_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180385_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180387_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24863_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180384_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180386_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180383_MethodInfo,
	&InternalEnumerator_1_Dispose_m180385_MethodInfo,
	&InternalEnumerator_1_get_Current_m180387_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29307_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24863_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29307_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29307_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24863_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29307_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24863_0_0_0;
extern Il2CppType InternalEnumerator_1_t24863_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24863_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24863_MethodInfos/* methods */
	, InternalEnumerator_1_t24863_PropertyInfos/* properties */
	, InternalEnumerator_1_t24863_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24863_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24863_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24863_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24863_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24863_1_0_0/* this_arg */
	, InternalEnumerator_1_t24863_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24863_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24863)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Threading.ThreadState>
extern MethodInfo ICollection_1_get_Count_m272774_MethodInfo;
static PropertyInfo ICollection_1_t37088____Count_PropertyInfo = 
{
	&ICollection_1_t37088_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272774_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272775_MethodInfo;
static PropertyInfo ICollection_1_t37088____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37088_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272775_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37088_PropertyInfos[] =
{
	&ICollection_1_t37088____Count_PropertyInfo,
	&ICollection_1_t37088____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_Count()
MethodInfo ICollection_1_get_Count_m272774_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272775_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ThreadState_t8207_0_0_0;
static ParameterInfo ICollection_1_t37088_ICollection_1_Add_m272776_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t8207_0_0_0},
};
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Add(T)
MethodInfo ICollection_1_Add_m272776_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37088_ICollection_1_Add_m272776_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Clear()
MethodInfo ICollection_1_Clear_m272777_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ThreadState_t8207_0_0_0;
static ParameterInfo ICollection_1_t37088_ICollection_1_Contains_m272778_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t8207_0_0_0},
};
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Contains(T)
MethodInfo ICollection_1_Contains_m272778_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37088_ICollection_1_Contains_m272778_ParameterInfos/* parameters */
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
extern Il2CppType ThreadStateU5BU5D_t25371_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37088_ICollection_1_CopyTo_m272779_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ThreadStateU5BU5D_t25371_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272779_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37088_ICollection_1_CopyTo_m272779_ParameterInfos/* parameters */
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
extern Il2CppType ThreadState_t8207_0_0_0;
static ParameterInfo ICollection_1_t37088_ICollection_1_Remove_m272780_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t8207_0_0_0},
};
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Threading.ThreadState>::Remove(T)
MethodInfo ICollection_1_Remove_m272780_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37088_ICollection_1_Remove_m272780_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37088_MethodInfos[] =
{
	&ICollection_1_get_Count_m272774_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272775_MethodInfo,
	&ICollection_1_Add_m272776_MethodInfo,
	&ICollection_1_Clear_m272777_MethodInfo,
	&ICollection_1_Contains_m272778_MethodInfo,
	&ICollection_1_CopyTo_m272779_MethodInfo,
	&ICollection_1_Remove_m272780_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37090_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37088_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37090_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37088_0_0_0;
extern Il2CppType ICollection_1_t37088_1_0_0;
struct ICollection_1_t37088;
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37088_GenericClass;
TypeInfo ICollection_1_t37088_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37088_MethodInfos/* methods */
	, ICollection_1_t37088_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37088_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37088_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37088_0_0_0/* byval_arg */
	, &ICollection_1_t37088_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37088_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37090_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>
extern TypeInfo IEnumerable_1_t37090_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29307_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Threading.ThreadState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272781_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37090_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29307_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37090_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272781_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37090_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37090_0_0_0;
extern Il2CppType IEnumerable_1_t37090_1_0_0;
struct IEnumerable_1_t37090;
extern TypeInfo IEnumerable_1_t37090_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37090_GenericClass;
TypeInfo IEnumerable_1_t37090_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37090_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37090_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37090_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37090_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37090_0_0_0/* byval_arg */
	, &IEnumerable_1_t37090_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37090_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37089_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Threading.ThreadState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Threading.ThreadState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Threading.ThreadState>
extern MethodInfo IList_1_get_Item_m272782_MethodInfo;
extern MethodInfo IList_1_set_Item_m272783_MethodInfo;
static PropertyInfo IList_1_t37089____Item_PropertyInfo = 
{
	&IList_1_t37089_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272782_MethodInfo/* get */
	, &IList_1_set_Item_m272783_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37089_PropertyInfos[] =
{
	&IList_1_t37089____Item_PropertyInfo,
	NULL
};
extern Il2CppType ThreadState_t8207_0_0_0;
static ParameterInfo IList_1_t37089_IList_1_IndexOf_m272784_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ThreadState_t8207_0_0_0},
};
extern TypeInfo IList_1_t37089_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Threading.ThreadState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272784_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37089_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37089_IList_1_IndexOf_m272784_ParameterInfos/* parameters */
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
extern Il2CppType ThreadState_t8207_0_0_0;
static ParameterInfo IList_1_t37089_IList_1_Insert_m272785_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ThreadState_t8207_0_0_0},
};
extern TypeInfo IList_1_t37089_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272785_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37089_IList_1_Insert_m272785_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37089_IList_1_RemoveAt_m272786_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37089_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272786_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37089_IList_1_RemoveAt_m272786_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37089_IList_1_get_Item_m272782_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37089_il2cpp_TypeInfo;
extern Il2CppType ThreadState_t8207_0_0_0;
extern void* RuntimeInvoker_ThreadState_t8207_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Threading.ThreadState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272782_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37089_il2cpp_TypeInfo/* declaring_type */
	, &ThreadState_t8207_0_0_0/* return_type */
	, RuntimeInvoker_ThreadState_t8207_Int32_t73/* invoker_method */
	, IList_1_t37089_IList_1_get_Item_m272782_ParameterInfos/* parameters */
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
extern Il2CppType ThreadState_t8207_0_0_0;
static ParameterInfo IList_1_t37089_IList_1_set_Item_m272783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ThreadState_t8207_0_0_0},
};
extern TypeInfo IList_1_t37089_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Threading.ThreadState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272783_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37089_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37089_IList_1_set_Item_m272783_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37089_MethodInfos[] =
{
	&IList_1_IndexOf_m272784_MethodInfo,
	&IList_1_Insert_m272785_MethodInfo,
	&IList_1_RemoveAt_m272786_MethodInfo,
	&IList_1_get_Item_m272782_MethodInfo,
	&IList_1_set_Item_m272783_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37088_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37090_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37089_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37088_il2cpp_TypeInfo,
	&IEnumerable_1_t37090_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37089_0_0_0;
extern Il2CppType IList_1_t37089_1_0_0;
struct IList_1_t37089;
extern TypeInfo IList_1_t37089_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37089_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37089_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37089_MethodInfos/* methods */
	, IList_1_t37089_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37089_il2cpp_TypeInfo/* element_class */
	, IList_1_t37089_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37089_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37089_0_0_0/* byval_arg */
	, &IList_1_t37089_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37089_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29308_il2cpp_TypeInfo;

// System.AttributeTargets
#include "mscorlib_System_AttributeTargets.h"


// T System.Collections.Generic.IEnumerator`1<System.AttributeTargets>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.AttributeTargets>
extern MethodInfo IEnumerator_1_get_Current_m272787_MethodInfo;
static PropertyInfo IEnumerator_1_t29308____Current_PropertyInfo = 
{
	&IEnumerator_1_t29308_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272787_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29308_PropertyInfos[] =
{
	&IEnumerator_1_t29308____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29308_il2cpp_TypeInfo;
extern Il2CppType AttributeTargets_t8222_0_0_0;
extern void* RuntimeInvoker_AttributeTargets_t8222 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.AttributeTargets>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272787_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29308_il2cpp_TypeInfo/* declaring_type */
	, &AttributeTargets_t8222_0_0_0/* return_type */
	, RuntimeInvoker_AttributeTargets_t8222/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29308_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272787_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29308_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29308_0_0_0;
extern Il2CppType IEnumerator_1_t29308_1_0_0;
struct IEnumerator_1_t29308;
extern TypeInfo IEnumerator_1_t29308_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29308_GenericClass;
TypeInfo IEnumerator_1_t29308_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29308_MethodInfos/* methods */
	, IEnumerator_1_t29308_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29308_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29308_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29308_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29308_0_0_0/* byval_arg */
	, &IEnumerator_1_t29308_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29308_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.AttributeTargets>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3057.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.AttributeTargets>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3057MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern TypeInfo AttributeTargets_t8222_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180393_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAttributeTargets_t8222_m223768_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.AttributeTargets>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.AttributeTargets>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAttributeTargets_t8222_m223768 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisAttributeTargets_t8222_m223768_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180388_MethodInfo;
 void InternalEnumerator_1__ctor_m180388 (InternalEnumerator_1_t24864 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180389_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180389 (InternalEnumerator_1_t24864 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390 (InternalEnumerator_1_t24864 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180393(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180393_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AttributeTargets_t8222_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180391_MethodInfo;
 void InternalEnumerator_1_Dispose_m180391 (InternalEnumerator_1_t24864 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeTargets>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180392_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180392 (InternalEnumerator_1_t24864 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.AttributeTargets>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180393_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180393 (InternalEnumerator_1_t24864 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAttributeTargets_t8222_m223768(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAttributeTargets_t8222_m223768_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.AttributeTargets>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24864____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24864, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24864____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24864, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24864_FieldInfos[] =
{
	&InternalEnumerator_1_t24864____array_FieldInfo,
	&InternalEnumerator_1_t24864____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24864____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24864_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180393_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24864____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24864_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180393_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24864_PropertyInfos[] =
{
	&InternalEnumerator_1_t24864____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24864____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24864_InternalEnumerator_1__ctor_m180388_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180388_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180388/* method */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24864_InternalEnumerator_1__ctor_m180388_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180389_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180389/* method */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.AttributeTargets>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390/* method */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.AttributeTargets>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180391_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180391/* method */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.AttributeTargets>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180392_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180392/* method */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern Il2CppType AttributeTargets_t8222_0_0_0;
extern void* RuntimeInvoker_AttributeTargets_t8222 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.AttributeTargets>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180393_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180393/* method */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* declaring_type */
	, &AttributeTargets_t8222_0_0_0/* return_type */
	, RuntimeInvoker_AttributeTargets_t8222/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24864_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180388_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180389_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390_MethodInfo,
	&InternalEnumerator_1_Dispose_m180391_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180392_MethodInfo,
	&InternalEnumerator_1_get_Current_m180393_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180392_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180389_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180391_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180393_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24864_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180390_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180392_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180389_MethodInfo,
	&InternalEnumerator_1_Dispose_m180391_MethodInfo,
	&InternalEnumerator_1_get_Current_m180393_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29308_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24864_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29308_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29308_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24864_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29308_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24864_0_0_0;
extern Il2CppType InternalEnumerator_1_t24864_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24864_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24864_MethodInfos/* methods */
	, InternalEnumerator_1_t24864_PropertyInfos/* properties */
	, InternalEnumerator_1_t24864_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24864_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24864_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24864_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24864_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24864_1_0_0/* this_arg */
	, InternalEnumerator_1_t24864_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24864_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24864)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.AttributeTargets>
extern MethodInfo ICollection_1_get_Count_m272788_MethodInfo;
static PropertyInfo ICollection_1_t37091____Count_PropertyInfo = 
{
	&ICollection_1_t37091_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272788_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272789_MethodInfo;
static PropertyInfo ICollection_1_t37091____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37091_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272789_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37091_PropertyInfos[] =
{
	&ICollection_1_t37091____Count_PropertyInfo,
	&ICollection_1_t37091____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_Count()
MethodInfo ICollection_1_get_Count_m272788_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272789_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AttributeTargets_t8222_0_0_0;
static ParameterInfo ICollection_1_t37091_ICollection_1_Add_m272790_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t8222_0_0_0},
};
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Add(T)
MethodInfo ICollection_1_Add_m272790_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37091_ICollection_1_Add_m272790_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::Clear()
MethodInfo ICollection_1_Clear_m272791_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AttributeTargets_t8222_0_0_0;
static ParameterInfo ICollection_1_t37091_ICollection_1_Contains_m272792_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t8222_0_0_0},
};
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Contains(T)
MethodInfo ICollection_1_Contains_m272792_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37091_ICollection_1_Contains_m272792_ParameterInfos/* parameters */
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
extern Il2CppType AttributeTargetsU5BU5D_t25372_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37091_ICollection_1_CopyTo_m272793_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargetsU5BU5D_t25372_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.AttributeTargets>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272793_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37091_ICollection_1_CopyTo_m272793_ParameterInfos/* parameters */
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
extern Il2CppType AttributeTargets_t8222_0_0_0;
static ParameterInfo ICollection_1_t37091_ICollection_1_Remove_m272794_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t8222_0_0_0},
};
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.AttributeTargets>::Remove(T)
MethodInfo ICollection_1_Remove_m272794_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37091_ICollection_1_Remove_m272794_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37091_MethodInfos[] =
{
	&ICollection_1_get_Count_m272788_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272789_MethodInfo,
	&ICollection_1_Add_m272790_MethodInfo,
	&ICollection_1_Clear_m272791_MethodInfo,
	&ICollection_1_Contains_m272792_MethodInfo,
	&ICollection_1_CopyTo_m272793_MethodInfo,
	&ICollection_1_Remove_m272794_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37093_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37091_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37093_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37091_0_0_0;
extern Il2CppType ICollection_1_t37091_1_0_0;
struct ICollection_1_t37091;
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37091_GenericClass;
TypeInfo ICollection_1_t37091_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37091_MethodInfos/* methods */
	, ICollection_1_t37091_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37091_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37091_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37091_0_0_0/* byval_arg */
	, &ICollection_1_t37091_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37091_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37093_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeTargets>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.AttributeTargets>
extern TypeInfo IEnumerable_1_t37093_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29308_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.AttributeTargets>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272795_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37093_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29308_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37093_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272795_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37093_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37093_0_0_0;
extern Il2CppType IEnumerable_1_t37093_1_0_0;
struct IEnumerable_1_t37093;
extern TypeInfo IEnumerable_1_t37093_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37093_GenericClass;
TypeInfo IEnumerable_1_t37093_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37093_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37093_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37093_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37093_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37093_0_0_0/* byval_arg */
	, &IEnumerable_1_t37093_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37093_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37092_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.AttributeTargets>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.AttributeTargets>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.AttributeTargets>
extern MethodInfo IList_1_get_Item_m272796_MethodInfo;
extern MethodInfo IList_1_set_Item_m272797_MethodInfo;
static PropertyInfo IList_1_t37092____Item_PropertyInfo = 
{
	&IList_1_t37092_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272796_MethodInfo/* get */
	, &IList_1_set_Item_m272797_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37092_PropertyInfos[] =
{
	&IList_1_t37092____Item_PropertyInfo,
	NULL
};
extern Il2CppType AttributeTargets_t8222_0_0_0;
static ParameterInfo IList_1_t37092_IList_1_IndexOf_m272798_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t8222_0_0_0},
};
extern TypeInfo IList_1_t37092_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.AttributeTargets>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272798_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37092_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37092_IList_1_IndexOf_m272798_ParameterInfos/* parameters */
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
extern Il2CppType AttributeTargets_t8222_0_0_0;
static ParameterInfo IList_1_t37092_IList_1_Insert_m272799_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t8222_0_0_0},
};
extern TypeInfo IList_1_t37092_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272799_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37092_IList_1_Insert_m272799_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37092_IList_1_RemoveAt_m272800_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37092_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272800_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37092_IList_1_RemoveAt_m272800_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37092_IList_1_get_Item_m272796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37092_il2cpp_TypeInfo;
extern Il2CppType AttributeTargets_t8222_0_0_0;
extern void* RuntimeInvoker_AttributeTargets_t8222_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.AttributeTargets>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272796_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37092_il2cpp_TypeInfo/* declaring_type */
	, &AttributeTargets_t8222_0_0_0/* return_type */
	, RuntimeInvoker_AttributeTargets_t8222_Int32_t73/* invoker_method */
	, IList_1_t37092_IList_1_get_Item_m272796_ParameterInfos/* parameters */
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
extern Il2CppType AttributeTargets_t8222_0_0_0;
static ParameterInfo IList_1_t37092_IList_1_set_Item_m272797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AttributeTargets_t8222_0_0_0},
};
extern TypeInfo IList_1_t37092_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.AttributeTargets>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272797_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37092_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37092_IList_1_set_Item_m272797_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37092_MethodInfos[] =
{
	&IList_1_IndexOf_m272798_MethodInfo,
	&IList_1_Insert_m272799_MethodInfo,
	&IList_1_RemoveAt_m272800_MethodInfo,
	&IList_1_get_Item_m272796_MethodInfo,
	&IList_1_set_Item_m272797_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37091_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37093_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37092_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37091_il2cpp_TypeInfo,
	&IEnumerable_1_t37093_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37092_0_0_0;
extern Il2CppType IList_1_t37092_1_0_0;
struct IList_1_t37092;
extern TypeInfo IList_1_t37092_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37092_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37092_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37092_MethodInfos/* methods */
	, IList_1_t37092_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37092_il2cpp_TypeInfo/* element_class */
	, IList_1_t37092_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37092_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37092_0_0_0/* byval_arg */
	, &IList_1_t37092_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37092_GenericClass/* generic_class */
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
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t8543_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_genMethodDeclarations.h"

// System.DateTime
#include "mscorlib_System_DateTime.h"
extern TypeInfo DateTime_t1171_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8547_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_375MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m180395_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m272311_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m57783_MethodInfo;
 void GenericComparer_1__ctor_m57783 (GenericComparer_1_t8543 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m180395(__this, /*hidden argument*/&Comparer_1__ctor_m180395_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m180394_MethodInfo;
 int32_t GenericComparer_1_Compare_m180394 (GenericComparer_1_t8543 * __this, DateTime_t1171  ___x, DateTime_t1171  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTime_t1171  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTime_t1171  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTime_t1171  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t1171  >::Invoke(&IComparable_1_CompareTo_m272311_MethodInfo, Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTime>
extern TypeInfo GenericComparer_1_t8543_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.GenericComparer`1<System.DateTime>::.ctor()
MethodInfo GenericComparer_1__ctor_m57783_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m57783/* method */
	, &GenericComparer_1_t8543_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo GenericComparer_1_t8543_GenericComparer_1_Compare_m180394_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo GenericComparer_1_t8543_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTime>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m180394_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m180394/* method */
	, &GenericComparer_1_t8543_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171/* invoker_method */
	, GenericComparer_1_t8543_GenericComparer_1_Compare_m180394_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GenericComparer_1_t8543_MethodInfos[] =
{
	&GenericComparer_1__ctor_m57783_MethodInfo,
	&GenericComparer_1_Compare_m180394_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GenericComparer_1_Compare_m180394_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo;
extern MethodInfo GenericComparer_1_Compare_m180394_MethodInfo;
static MethodInfo* GenericComparer_1_t8543_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GenericComparer_1_Compare_m180394_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo,
	&GenericComparer_1_Compare_m180394_MethodInfo,
};
extern TypeInfo IComparer_1_t38958_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t8543_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38958_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t8543_0_0_0;
extern Il2CppType GenericComparer_1_t8543_1_0_0;
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
struct GenericComparer_1_t8543;
extern TypeInfo GenericComparer_1_t8543_il2cpp_TypeInfo;
extern Il2CppGenericClass GenericComparer_1_t8543_GenericClass;
TypeInfo GenericComparer_1_t8543_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t8543_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t8543_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t8543_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t8543_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t8543_0_0_0/* byval_arg */
	, &GenericComparer_1_t8543_1_0_0/* this_arg */
	, GenericComparer_1_t8543_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t8543_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t8543)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_375.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;

// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Collections.Generic.GenericComparer`1
#include "mscorlib_System_Collections_Generic_GenericComparer_1.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_376.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8547_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo DateTime_t1171_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t7840_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t24866_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
// System.Object
#include "mscorlib_System_ObjectMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Activator
#include "mscorlib_System_ActivatorMethodDeclarations.h"
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_376MethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
extern Il2CppType IComparable_1_t8547_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType GenericComparer_1_t7840_0_0_0;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo Type_MakeGenericType_m52718_MethodInfo;
extern MethodInfo Activator_CreateInstance_m38822_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m180399_MethodInfo;
extern MethodInfo Comparer_1_Compare_m272801_MethodInfo;
extern MethodInfo ArgumentException__ctor_m49269_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
extern MethodInfo Comparer_1__ctor_m180395_MethodInfo;
 void Comparer_1__ctor_m180395 (Comparer_1_t24865 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
extern MethodInfo Comparer_1__cctor_m180396_MethodInfo;
 void Comparer_1__cctor_m180396 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t24866 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t24866 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t24866_il2cpp_TypeInfo));
	DefaultComparer__ctor_m180399(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m180399_MethodInfo);
	((Comparer_1_t24865_StaticFields*)InitializedTypeInfo(&Comparer_1_t24865_il2cpp_TypeInfo)->static_fields)->____default = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo;
 int32_t Comparer_1_System_Collections_IComparer_Compare_m180397 (Comparer_1_t24865 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, DateTime_t1171 , DateTime_t1171  >::Invoke(&Comparer_1_Compare_m272801_MethodInfo, __this, ((*(DateTime_t1171 *)((DateTime_t1171 *)UnBox (___x, InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo))))), ((*(DateTime_t1171 *)((DateTime_t1171 *)UnBox (___y, InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t5466 * L_1 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m49269(L_1, /*hidden argument*/&ArgumentException__ctor_m49269_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
extern MethodInfo Comparer_1_get_Default_m180398_MethodInfo;
 Comparer_1_t24865 * Comparer_1_get_Default_m180398 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t24865_il2cpp_TypeInfo));
		return (((Comparer_1_t24865_StaticFields*)InitializedTypeInfo(&Comparer_1_t24865_il2cpp_TypeInfo)->static_fields)->____default);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTime>
extern Il2CppType Comparer_1_t24865_0_0_49;
FieldInfo Comparer_1_t24865_____default_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t24865_0_0_49/* type */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t24865_StaticFields, ____default)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t24865_FieldInfos[] =
{
	&Comparer_1_t24865_____default_FieldInfo,
	NULL
};
extern MethodInfo Comparer_1_get_Default_m180398_MethodInfo;
static PropertyInfo Comparer_1_t24865____Default_PropertyInfo = 
{
	&Comparer_1_t24865_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m180398_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t24865_PropertyInfos[] =
{
	&Comparer_1_t24865____Default_PropertyInfo,
	NULL
};
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.ctor()
MethodInfo Comparer_1__ctor_m180395_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m180395/* method */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.DateTime>::.cctor()
MethodInfo Comparer_1__cctor_m180396_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m180396/* method */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t24865_Comparer_1_System_Collections_IComparer_Compare_m180397_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m180397/* method */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t_Object_t/* invoker_method */
	, Comparer_1_t24865_Comparer_1_System_Collections_IComparer_Compare_m180397_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo Comparer_1_t24865_Comparer_1_Compare_m272801_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTime>::Compare(T,T)
MethodInfo Comparer_1_Compare_m272801_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171/* invoker_method */
	, Comparer_1_t24865_Comparer_1_Compare_m272801_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
extern Il2CppType Comparer_1_t24865_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTime>::get_Default()
MethodInfo Comparer_1_get_Default_m180398_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m180398/* method */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t24865_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* Comparer_1_t24865_MethodInfos[] =
{
	&Comparer_1__ctor_m180395_MethodInfo,
	&Comparer_1__cctor_m180396_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo,
	&Comparer_1_Compare_m272801_MethodInfo,
	&Comparer_1_get_Default_m180398_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Comparer_1_Compare_m272801_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo;
static MethodInfo* Comparer_1_t24865_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Comparer_1_Compare_m272801_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo,
	NULL,
};
extern TypeInfo IComparer_1_t38958_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static TypeInfo* Comparer_1_t24865_InterfacesTypeInfos[] = 
{
	&IComparer_1_t38958_il2cpp_TypeInfo,
	&IComparer_t7107_il2cpp_TypeInfo,
};
extern TypeInfo IComparer_1_t38958_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Comparer_1_t24865_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38958_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t24865_0_0_0;
extern Il2CppType Comparer_1_t24865_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t24865;
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
extern Il2CppGenericClass Comparer_1_t24865_GenericClass;
TypeInfo Comparer_1_t24865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t24865_MethodInfos/* methods */
	, Comparer_1_t24865_PropertyInfos/* properties */
	, Comparer_1_t24865_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t24865_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t24865_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t24865_0_0_0/* byval_arg */
	, &Comparer_1_t24865_1_0_0/* this_arg */
	, Comparer_1_t24865_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t24865_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t24865)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t24865_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t38958_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTime>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTime>
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo IComparer_1_t38958_IComparer_1_Compare_m272802_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo IComparer_1_t38958_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IComparer`1<System.DateTime>::Compare(T,T)
MethodInfo IComparer_1_Compare_m272802_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t38958_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171/* invoker_method */
	, IComparer_1_t38958_IComparer_1_Compare_m272802_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IComparer_1_t38958_MethodInfos[] =
{
	&IComparer_1_Compare_m272802_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t38958_0_0_0;
extern Il2CppType IComparer_1_t38958_1_0_0;
struct IComparer_1_t38958;
extern TypeInfo IComparer_1_t38958_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparer_1_t38958_GenericClass;
TypeInfo IComparer_1_t38958_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t38958_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t38958_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t38958_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t38958_0_0_0/* byval_arg */
	, &IComparer_1_t38958_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t38958_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t24866_il2cpp_TypeInfo;

extern TypeInfo DateTime_t1171_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8547_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IComparable_t948_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m180395_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m272311_MethodInfo;
extern MethodInfo IComparable_CompareTo_m57234_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
extern MethodInfo DefaultComparer__ctor_m180399_MethodInfo;
 void DefaultComparer__ctor_m180399 (DefaultComparer_t24866 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m180395(__this, /*hidden argument*/&Comparer_1__ctor_m180395_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m180400_MethodInfo;
 int32_t DefaultComparer_Compare_m180400 (DefaultComparer_t24866 * __this, DateTime_t1171  ___x, DateTime_t1171  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTime_t1171  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTime_t1171  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTime_t1171  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		DateTime_t1171  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t8547_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		DateTime_t1171  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8547_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTime_t1171  >::Invoke(&IComparable_1_CompareTo_m272311_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8547_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		DateTime_t1171  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		DateTime_t1171  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_13);
		DateTime_t1171  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m57234_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t5466 * L_18 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m38716(L_18, (String_t*) &_stringLiteral6740, /*hidden argument*/&ArgumentException__ctor_m38716_MethodInfo);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>
extern TypeInfo DefaultComparer_t24866_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::.ctor()
MethodInfo DefaultComparer__ctor_m180399_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m180399/* method */
	, &DefaultComparer_t24866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo DefaultComparer_t24866_DefaultComparer_Compare_m180400_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo DefaultComparer_t24866_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTime>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m180400_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m180400/* method */
	, &DefaultComparer_t24866_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171_DateTime_t1171/* invoker_method */
	, DefaultComparer_t24866_DefaultComparer_Compare_m180400_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DefaultComparer_t24866_MethodInfos[] =
{
	&DefaultComparer__ctor_m180399_MethodInfo,
	&DefaultComparer_Compare_m180400_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m180400_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m180400_MethodInfo;
static MethodInfo* DefaultComparer_t24866_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Compare_m180400_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180397_MethodInfo,
	&DefaultComparer_Compare_m180400_MethodInfo,
};
extern TypeInfo IComparer_1_t38958_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24866_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38958_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24866_0_0_0;
extern Il2CppType DefaultComparer_t24866_1_0_0;
extern TypeInfo Comparer_1_t24865_il2cpp_TypeInfo;
struct DefaultComparer_t24866;
extern TypeInfo DefaultComparer_t24866_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24866_GenericClass;
extern TypeInfo Comparer_1_t7839_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24866_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t24865_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t7839_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24866_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24866_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24866_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24866_0_0_0/* byval_arg */
	, &DefaultComparer_t24866_1_0_0/* this_arg */
	, DefaultComparer_t24866_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24866_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24866)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t8544_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__0MethodDeclarations.h"

extern TypeInfo DateTime_t1171_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t8548_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_650MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m180403_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m272326_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m57784_MethodInfo;
 void GenericEqualityComparer_1__ctor_m57784 (GenericEqualityComparer_1_t8544 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m180403(__this, /*hidden argument*/&EqualityComparer_1__ctor_m180403_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180401_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m180401 (GenericEqualityComparer_1_t8544 * __this, DateTime_t1171  ___obj, MethodInfo* method){
	{
		DateTime_t1171  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m4064_MethodInfo, Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m180402_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m180402 (GenericEqualityComparer_1_t8544 * __this, DateTime_t1171  ___x, DateTime_t1171  ___y, MethodInfo* method){
	{
		DateTime_t1171  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTime_t1171  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, DateTime_t1171  >::Invoke(&IEquatable_1_Equals_m272326_MethodInfo, Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>
extern TypeInfo GenericEqualityComparer_1_t8544_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m57784_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m57784/* method */
	, &GenericEqualityComparer_1_t8544_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t8544_GenericEqualityComparer_1_GetHashCode_m180401_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo GenericEqualityComparer_1_t8544_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m180401_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m180401/* method */
	, &GenericEqualityComparer_1_t8544_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171/* invoker_method */
	, GenericEqualityComparer_1_t8544_GenericEqualityComparer_1_GetHashCode_m180401_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t8544_GenericEqualityComparer_1_Equals_m180402_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo GenericEqualityComparer_1_t8544_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTime>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m180402_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m180402/* method */
	, &GenericEqualityComparer_1_t8544_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171/* invoker_method */
	, GenericEqualityComparer_1_t8544_GenericEqualityComparer_1_Equals_m180402_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GenericEqualityComparer_1_t8544_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m57784_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180401_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180402_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_Equals_m180402_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180401_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180401_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_Equals_m180402_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t8544_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180402_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180401_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180401_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180402_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t8544_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38959_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t8544_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t8544_1_0_0;
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t8544;
extern TypeInfo GenericEqualityComparer_1_t8544_il2cpp_TypeInfo;
extern Il2CppGenericClass GenericEqualityComparer_1_t8544_GenericClass;
TypeInfo GenericEqualityComparer_1_t8544_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t8544_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t8544_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t8544_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t8544_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t8544_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t8544_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t8544_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t8544_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t8544)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_650.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;

// System.Collections.Generic.GenericEqualityComparer`1
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer_.h"
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_651.h"
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t8548_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo DateTime_t1171_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo GenericEqualityComparer_1_t7852_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t24868_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_651MethodDeclarations.h"
extern Il2CppType IEquatable_1_t8548_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t7852_0_0_0;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo Type_MakeGenericType_m52718_MethodInfo;
extern MethodInfo Activator_CreateInstance_m38822_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m180408_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m272803_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m272804_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
extern MethodInfo EqualityComparer_1__ctor_m180403_MethodInfo;
 void EqualityComparer_1__ctor_m180403 (EqualityComparer_1_t24867 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m180404_MethodInfo;
 void EqualityComparer_1__cctor_m180404 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t24868 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t24868 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t24868_il2cpp_TypeInfo));
	DefaultComparer__ctor_m180408(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m180408_MethodInfo);
	((EqualityComparer_1_t24867_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t24867_il2cpp_TypeInfo)->static_fields)->____default = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo;
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405 (EqualityComparer_1_t24867 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, DateTime_t1171  >::Invoke(&EqualityComparer_1_GetHashCode_m272803_MethodInfo, __this, ((*(DateTime_t1171 *)((DateTime_t1171 *)UnBox (___obj, InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo;
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406 (EqualityComparer_1_t24867 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, DateTime_t1171 , DateTime_t1171  >::Invoke(&EqualityComparer_1_Equals_m272804_MethodInfo, __this, ((*(DateTime_t1171 *)((DateTime_t1171 *)UnBox (___x, InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo))))), ((*(DateTime_t1171 *)((DateTime_t1171 *)UnBox (___y, InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m180407_MethodInfo;
 EqualityComparer_1_t24867 * EqualityComparer_1_get_Default_m180407 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t24867_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t24867_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t24867_il2cpp_TypeInfo)->static_fields)->____default);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTime>
extern Il2CppType EqualityComparer_1_t24867_0_0_49;
FieldInfo EqualityComparer_1_t24867_____default_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t24867_0_0_49/* type */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t24867_StaticFields, ____default)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t24867_FieldInfos[] =
{
	&EqualityComparer_1_t24867_____default_FieldInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_get_Default_m180407_MethodInfo;
static PropertyInfo EqualityComparer_1_t24867____Default_PropertyInfo = 
{
	&EqualityComparer_1_t24867_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m180407_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t24867_PropertyInfos[] =
{
	&EqualityComparer_1_t24867____Default_PropertyInfo,
	NULL
};
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.ctor()
MethodInfo EqualityComparer_1__ctor_m180403_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m180403/* method */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTime>::.cctor()
MethodInfo EqualityComparer_1__cctor_m180404_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m180404/* method */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t24867_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405/* method */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, EqualityComparer_1_t24867_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t24867_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406/* method */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t24867_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo EqualityComparer_1_t24867_EqualityComparer_1_GetHashCode_m272803_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTime>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m272803_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171/* invoker_method */
	, EqualityComparer_1_t24867_EqualityComparer_1_GetHashCode_m272803_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo EqualityComparer_1_t24867_EqualityComparer_1_Equals_m272804_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTime>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m272804_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171/* invoker_method */
	, EqualityComparer_1_t24867_EqualityComparer_1_Equals_m272804_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppType EqualityComparer_1_t24867_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTime>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m180407_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m180407/* method */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t24867_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* EqualityComparer_1_t24867_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m180403_MethodInfo,
	&EqualityComparer_1__cctor_m180404_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo,
	&EqualityComparer_1_GetHashCode_m272803_MethodInfo,
	&EqualityComparer_1_Equals_m272804_MethodInfo,
	&EqualityComparer_1_get_Default_m180407_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m272804_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m272803_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo;
static MethodInfo* EqualityComparer_1_t24867_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&EqualityComparer_1_Equals_m272804_MethodInfo,
	&EqualityComparer_1_GetHashCode_m272803_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo,
	NULL,
	NULL,
};
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static TypeInfo* EqualityComparer_1_t24867_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t38959_il2cpp_TypeInfo,
	&IEqualityComparer_t7113_il2cpp_TypeInfo,
};
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair EqualityComparer_1_t24867_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38959_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t24867_0_0_0;
extern Il2CppType EqualityComparer_1_t24867_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct EqualityComparer_1_t24867;
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
extern Il2CppGenericClass EqualityComparer_1_t24867_GenericClass;
TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t24867_MethodInfos/* methods */
	, EqualityComparer_1_t24867_PropertyInfos/* properties */
	, EqualityComparer_1_t24867_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t24867_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t24867_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t24867_0_0_0/* byval_arg */
	, &EqualityComparer_1_t24867_1_0_0/* this_arg */
	, EqualityComparer_1_t24867_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t24867_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t24867)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t24867_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTime>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTime>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTime>
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo IEqualityComparer_1_t38959_IEqualityComparer_1_Equals_m272805_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTime>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m272805_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t38959_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171/* invoker_method */
	, IEqualityComparer_1_t38959_IEqualityComparer_1_Equals_m272805_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo IEqualityComparer_1_t38959_IEqualityComparer_1_GetHashCode_m272806_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTime>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m272806_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t38959_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171/* invoker_method */
	, IEqualityComparer_1_t38959_IEqualityComparer_1_GetHashCode_m272806_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEqualityComparer_1_t38959_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m272805_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m272806_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t38959_0_0_0;
extern Il2CppType IEqualityComparer_1_t38959_1_0_0;
struct IEqualityComparer_1_t38959;
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;
extern Il2CppGenericClass IEqualityComparer_1_t38959_GenericClass;
TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t38959_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t38959_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t38959_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t38959_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t38959_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t38959_GenericClass/* generic_class */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t24868_il2cpp_TypeInfo;

extern TypeInfo DateTime_t1171_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern MethodInfo EqualityComparer_1__ctor_m180403_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_Equals_m4063_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
extern MethodInfo DefaultComparer__ctor_m180408_MethodInfo;
 void DefaultComparer__ctor_m180408 (DefaultComparer_t24868 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m180403(__this, /*hidden argument*/&EqualityComparer_1__ctor_m180403_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m180409_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m180409 (DefaultComparer_t24868 * __this, DateTime_t1171  ___obj, MethodInfo* method){
	{
		DateTime_t1171  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m4064_MethodInfo, Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m180410_MethodInfo;
 bool DefaultComparer_Equals_m180410 (DefaultComparer_t24868 * __this, DateTime_t1171  ___x, DateTime_t1171  ___y, MethodInfo* method){
	{
		DateTime_t1171  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTime_t1171  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTime_t1171  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, Box(InitializedTypeInfo(&DateTime_t1171_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>
extern TypeInfo DefaultComparer_t24868_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::.ctor()
MethodInfo DefaultComparer__ctor_m180408_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m180408/* method */
	, &DefaultComparer_t24868_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo DefaultComparer_t24868_DefaultComparer_GetHashCode_m180409_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo DefaultComparer_t24868_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m180409_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m180409/* method */
	, &DefaultComparer_t24868_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTime_t1171/* invoker_method */
	, DefaultComparer_t24868_DefaultComparer_GetHashCode_m180409_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTime_t1171_0_0_0;
extern Il2CppType DateTime_t1171_0_0_0;
static ParameterInfo DefaultComparer_t24868_DefaultComparer_Equals_m180410_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTime_t1171_0_0_0},
};
extern TypeInfo DefaultComparer_t24868_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTime>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m180410_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m180410/* method */
	, &DefaultComparer_t24868_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTime_t1171_DateTime_t1171/* invoker_method */
	, DefaultComparer_t24868_DefaultComparer_Equals_m180410_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DefaultComparer_t24868_MethodInfos[] =
{
	&DefaultComparer__ctor_m180408_MethodInfo,
	&DefaultComparer_GetHashCode_m180409_MethodInfo,
	&DefaultComparer_Equals_m180410_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m180410_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m180409_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m180409_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m180410_MethodInfo;
static MethodInfo* DefaultComparer_t24868_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Equals_m180410_MethodInfo,
	&DefaultComparer_GetHashCode_m180409_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180406_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180405_MethodInfo,
	&DefaultComparer_GetHashCode_m180409_MethodInfo,
	&DefaultComparer_Equals_m180410_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t38959_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24868_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38959_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24868_0_0_0;
extern Il2CppType DefaultComparer_t24868_1_0_0;
extern TypeInfo EqualityComparer_1_t24867_il2cpp_TypeInfo;
struct DefaultComparer_t24868;
extern TypeInfo DefaultComparer_t24868_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24868_GenericClass;
extern TypeInfo EqualityComparer_1_t7851_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24868_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t24867_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t7851_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24868_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24868_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24868_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24868_0_0_0/* byval_arg */
	, &DefaultComparer_t24868_1_0_0/* this_arg */
	, DefaultComparer_t24868_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24868_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24868)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t29309_il2cpp_TypeInfo;

// System.DateTime/Which
#include "mscorlib_System_DateTime_Which.h"


// T System.Collections.Generic.IEnumerator`1<System.DateTime/Which>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTime/Which>
extern MethodInfo IEnumerator_1_get_Current_m272807_MethodInfo;
static PropertyInfo IEnumerator_1_t29309____Current_PropertyInfo = 
{
	&IEnumerator_1_t29309_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272807_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29309_PropertyInfos[] =
{
	&IEnumerator_1_t29309____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29309_il2cpp_TypeInfo;
extern Il2CppType Which_t8226_0_0_0;
extern void* RuntimeInvoker_Which_t8226 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.DateTime/Which>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272807_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29309_il2cpp_TypeInfo/* declaring_type */
	, &Which_t8226_0_0_0/* return_type */
	, RuntimeInvoker_Which_t8226/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29309_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272807_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29309_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29309_0_0_0;
extern Il2CppType IEnumerator_1_t29309_1_0_0;
struct IEnumerator_1_t29309;
extern TypeInfo IEnumerator_1_t29309_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29309_GenericClass;
TypeInfo IEnumerator_1_t29309_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29309_MethodInfos/* methods */
	, IEnumerator_1_t29309_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29309_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29309_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29309_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29309_0_0_0/* byval_arg */
	, &IEnumerator_1_t29309_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29309_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.DateTime/Which>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3058.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTime/Which>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3058MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern TypeInfo Which_t8226_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180416_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWhich_t8226_m223779_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTime/Which>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTime/Which>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisWhich_t8226_m223779 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisWhich_t8226_m223779_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180411_MethodInfo;
 void InternalEnumerator_1__ctor_m180411 (InternalEnumerator_1_t24869 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180412_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180412 (InternalEnumerator_1_t24869 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413 (InternalEnumerator_1_t24869 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180416(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180416_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Which_t8226_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180414_MethodInfo;
 void InternalEnumerator_1_Dispose_m180414 (InternalEnumerator_1_t24869 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime/Which>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180415_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180415 (InternalEnumerator_1_t24869 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTime/Which>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180416_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180416 (InternalEnumerator_1_t24869 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisWhich_t8226_m223779(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisWhich_t8226_m223779_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTime/Which>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24869____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24869, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24869____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24869, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24869_FieldInfos[] =
{
	&InternalEnumerator_1_t24869____array_FieldInfo,
	&InternalEnumerator_1_t24869____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24869____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24869_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180416_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24869____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24869_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180416_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24869_PropertyInfos[] =
{
	&InternalEnumerator_1_t24869____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24869____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24869_InternalEnumerator_1__ctor_m180411_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180411_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180411/* method */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24869_InternalEnumerator_1__ctor_m180411_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180412_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180412/* method */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.DateTime/Which>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413/* method */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DateTime/Which>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180414_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180414/* method */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.DateTime/Which>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180415_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180415/* method */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern Il2CppType Which_t8226_0_0_0;
extern void* RuntimeInvoker_Which_t8226 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.DateTime/Which>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180416_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180416/* method */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* declaring_type */
	, &Which_t8226_0_0_0/* return_type */
	, RuntimeInvoker_Which_t8226/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24869_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180411_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180412_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413_MethodInfo,
	&InternalEnumerator_1_Dispose_m180414_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180415_MethodInfo,
	&InternalEnumerator_1_get_Current_m180416_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180415_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180412_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180414_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180416_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24869_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180413_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180415_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180412_MethodInfo,
	&InternalEnumerator_1_Dispose_m180414_MethodInfo,
	&InternalEnumerator_1_get_Current_m180416_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29309_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24869_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29309_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29309_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24869_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29309_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24869_0_0_0;
extern Il2CppType InternalEnumerator_1_t24869_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24869_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24869_MethodInfos/* methods */
	, InternalEnumerator_1_t24869_PropertyInfos/* properties */
	, InternalEnumerator_1_t24869_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24869_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24869_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24869_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24869_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24869_1_0_0/* this_arg */
	, InternalEnumerator_1_t24869_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24869_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24869)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTime/Which>
extern MethodInfo ICollection_1_get_Count_m272808_MethodInfo;
static PropertyInfo ICollection_1_t37094____Count_PropertyInfo = 
{
	&ICollection_1_t37094_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272808_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272809_MethodInfo;
static PropertyInfo ICollection_1_t37094____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37094_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272809_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37094_PropertyInfos[] =
{
	&ICollection_1_t37094____Count_PropertyInfo,
	&ICollection_1_t37094____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_Count()
MethodInfo ICollection_1_get_Count_m272808_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272809_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Which_t8226_0_0_0;
static ParameterInfo ICollection_1_t37094_ICollection_1_Add_m272810_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t8226_0_0_0},
};
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Add(T)
MethodInfo ICollection_1_Add_m272810_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37094_ICollection_1_Add_m272810_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::Clear()
MethodInfo ICollection_1_Clear_m272811_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Which_t8226_0_0_0;
static ParameterInfo ICollection_1_t37094_ICollection_1_Contains_m272812_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t8226_0_0_0},
};
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Contains(T)
MethodInfo ICollection_1_Contains_m272812_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37094_ICollection_1_Contains_m272812_ParameterInfos/* parameters */
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
extern Il2CppType WhichU5BU5D_t25373_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37094_ICollection_1_CopyTo_m272813_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WhichU5BU5D_t25373_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DateTime/Which>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272813_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37094_ICollection_1_CopyTo_m272813_ParameterInfos/* parameters */
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
extern Il2CppType Which_t8226_0_0_0;
static ParameterInfo ICollection_1_t37094_ICollection_1_Remove_m272814_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t8226_0_0_0},
};
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTime/Which>::Remove(T)
MethodInfo ICollection_1_Remove_m272814_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37094_ICollection_1_Remove_m272814_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37094_MethodInfos[] =
{
	&ICollection_1_get_Count_m272808_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272809_MethodInfo,
	&ICollection_1_Add_m272810_MethodInfo,
	&ICollection_1_Clear_m272811_MethodInfo,
	&ICollection_1_Contains_m272812_MethodInfo,
	&ICollection_1_CopyTo_m272813_MethodInfo,
	&ICollection_1_Remove_m272814_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37096_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37094_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37096_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37094_0_0_0;
extern Il2CppType ICollection_1_t37094_1_0_0;
struct ICollection_1_t37094;
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37094_GenericClass;
TypeInfo ICollection_1_t37094_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37094_MethodInfos/* methods */
	, ICollection_1_t37094_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37094_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37094_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37094_0_0_0/* byval_arg */
	, &ICollection_1_t37094_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37094_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37096_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime/Which>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTime/Which>
extern TypeInfo IEnumerable_1_t37096_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29309_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTime/Which>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272815_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37096_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29309_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37096_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272815_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37096_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37096_0_0_0;
extern Il2CppType IEnumerable_1_t37096_1_0_0;
struct IEnumerable_1_t37096;
extern TypeInfo IEnumerable_1_t37096_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37096_GenericClass;
TypeInfo IEnumerable_1_t37096_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37096_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37096_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37096_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37096_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37096_0_0_0/* byval_arg */
	, &IEnumerable_1_t37096_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37096_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37095_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTime/Which>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTime/Which>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTime/Which>
extern MethodInfo IList_1_get_Item_m272816_MethodInfo;
extern MethodInfo IList_1_set_Item_m272817_MethodInfo;
static PropertyInfo IList_1_t37095____Item_PropertyInfo = 
{
	&IList_1_t37095_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272816_MethodInfo/* get */
	, &IList_1_set_Item_m272817_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37095_PropertyInfos[] =
{
	&IList_1_t37095____Item_PropertyInfo,
	NULL
};
extern Il2CppType Which_t8226_0_0_0;
static ParameterInfo IList_1_t37095_IList_1_IndexOf_m272818_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Which_t8226_0_0_0},
};
extern TypeInfo IList_1_t37095_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.DateTime/Which>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272818_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37095_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37095_IList_1_IndexOf_m272818_ParameterInfos/* parameters */
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
extern Il2CppType Which_t8226_0_0_0;
static ParameterInfo IList_1_t37095_IList_1_Insert_m272819_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Which_t8226_0_0_0},
};
extern TypeInfo IList_1_t37095_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272819_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37095_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37095_IList_1_Insert_m272819_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37095_IList_1_RemoveAt_m272820_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37095_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272820_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37095_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37095_IList_1_RemoveAt_m272820_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37095_IList_1_get_Item_m272816_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37095_il2cpp_TypeInfo;
extern Il2CppType Which_t8226_0_0_0;
extern void* RuntimeInvoker_Which_t8226_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.DateTime/Which>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272816_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37095_il2cpp_TypeInfo/* declaring_type */
	, &Which_t8226_0_0_0/* return_type */
	, RuntimeInvoker_Which_t8226_Int32_t73/* invoker_method */
	, IList_1_t37095_IList_1_get_Item_m272816_ParameterInfos/* parameters */
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
extern Il2CppType Which_t8226_0_0_0;
static ParameterInfo IList_1_t37095_IList_1_set_Item_m272817_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Which_t8226_0_0_0},
};
extern TypeInfo IList_1_t37095_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DateTime/Which>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272817_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37095_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37095_IList_1_set_Item_m272817_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37095_MethodInfos[] =
{
	&IList_1_IndexOf_m272818_MethodInfo,
	&IList_1_Insert_m272819_MethodInfo,
	&IList_1_RemoveAt_m272820_MethodInfo,
	&IList_1_get_Item_m272816_MethodInfo,
	&IList_1_set_Item_m272817_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37094_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37096_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37095_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37094_il2cpp_TypeInfo,
	&IEnumerable_1_t37096_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37095_0_0_0;
extern Il2CppType IList_1_t37095_1_0_0;
struct IList_1_t37095;
extern TypeInfo IList_1_t37095_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37095_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37095_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37095_MethodInfos/* methods */
	, IList_1_t37095_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37095_il2cpp_TypeInfo/* element_class */
	, IList_1_t37095_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37095_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37095_0_0_0/* byval_arg */
	, &IList_1_t37095_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37095_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29310_il2cpp_TypeInfo;

// System.DateTimeKind
#include "mscorlib_System_DateTimeKind.h"


// T System.Collections.Generic.IEnumerator`1<System.DateTimeKind>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DateTimeKind>
extern MethodInfo IEnumerator_1_get_Current_m272821_MethodInfo;
static PropertyInfo IEnumerator_1_t29310____Current_PropertyInfo = 
{
	&IEnumerator_1_t29310_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272821_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29310_PropertyInfos[] =
{
	&IEnumerator_1_t29310____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29310_il2cpp_TypeInfo;
extern Il2CppType DateTimeKind_t8228_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t8228 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.DateTimeKind>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272821_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29310_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t8228_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t8228/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29310_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272821_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29310_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29310_0_0_0;
extern Il2CppType IEnumerator_1_t29310_1_0_0;
struct IEnumerator_1_t29310;
extern TypeInfo IEnumerator_1_t29310_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29310_GenericClass;
TypeInfo IEnumerator_1_t29310_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29310_MethodInfos/* methods */
	, IEnumerator_1_t29310_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29310_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29310_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29310_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29310_0_0_0/* byval_arg */
	, &IEnumerator_1_t29310_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29310_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.DateTimeKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3059.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DateTimeKind>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3059MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern TypeInfo DateTimeKind_t8228_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180422_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDateTimeKind_t8228_m223790_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DateTimeKind>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DateTimeKind>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDateTimeKind_t8228_m223790 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDateTimeKind_t8228_m223790_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180417_MethodInfo;
 void InternalEnumerator_1__ctor_m180417 (InternalEnumerator_1_t24870 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180418_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180418 (InternalEnumerator_1_t24870 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419 (InternalEnumerator_1_t24870 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180422(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180422_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DateTimeKind_t8228_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180420_MethodInfo;
 void InternalEnumerator_1_Dispose_m180420 (InternalEnumerator_1_t24870 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DateTimeKind>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180421_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180421 (InternalEnumerator_1_t24870 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DateTimeKind>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180422_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180422 (InternalEnumerator_1_t24870 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDateTimeKind_t8228_m223790(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDateTimeKind_t8228_m223790_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DateTimeKind>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24870____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24870, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24870____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24870, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24870_FieldInfos[] =
{
	&InternalEnumerator_1_t24870____array_FieldInfo,
	&InternalEnumerator_1_t24870____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24870____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24870_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180422_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24870____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24870_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180422_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24870_PropertyInfos[] =
{
	&InternalEnumerator_1_t24870____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24870____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24870_InternalEnumerator_1__ctor_m180417_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180417_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180417/* method */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24870_InternalEnumerator_1__ctor_m180417_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180418_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180418/* method */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.DateTimeKind>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419/* method */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DateTimeKind>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180420_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180420/* method */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.DateTimeKind>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180421_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180421/* method */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern Il2CppType DateTimeKind_t8228_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t8228 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.DateTimeKind>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180422_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180422/* method */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t8228_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t8228/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24870_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180417_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180418_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419_MethodInfo,
	&InternalEnumerator_1_Dispose_m180420_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180421_MethodInfo,
	&InternalEnumerator_1_get_Current_m180422_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180421_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180418_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180420_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180422_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24870_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180419_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180421_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180418_MethodInfo,
	&InternalEnumerator_1_Dispose_m180420_MethodInfo,
	&InternalEnumerator_1_get_Current_m180422_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29310_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24870_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29310_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29310_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24870_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29310_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24870_0_0_0;
extern Il2CppType InternalEnumerator_1_t24870_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24870_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24870_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24870_MethodInfos/* methods */
	, InternalEnumerator_1_t24870_PropertyInfos/* properties */
	, InternalEnumerator_1_t24870_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24870_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24870_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24870_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24870_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24870_1_0_0/* this_arg */
	, InternalEnumerator_1_t24870_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24870_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24870)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DateTimeKind>
extern MethodInfo ICollection_1_get_Count_m272822_MethodInfo;
static PropertyInfo ICollection_1_t37097____Count_PropertyInfo = 
{
	&ICollection_1_t37097_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272822_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272823_MethodInfo;
static PropertyInfo ICollection_1_t37097____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37097_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272823_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37097_PropertyInfos[] =
{
	&ICollection_1_t37097____Count_PropertyInfo,
	&ICollection_1_t37097____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_Count()
MethodInfo ICollection_1_get_Count_m272822_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272823_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DateTimeKind_t8228_0_0_0;
static ParameterInfo ICollection_1_t37097_ICollection_1_Add_m272824_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t8228_0_0_0},
};
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Add(T)
MethodInfo ICollection_1_Add_m272824_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37097_ICollection_1_Add_m272824_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::Clear()
MethodInfo ICollection_1_Clear_m272825_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DateTimeKind_t8228_0_0_0;
static ParameterInfo ICollection_1_t37097_ICollection_1_Contains_m272826_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t8228_0_0_0},
};
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Contains(T)
MethodInfo ICollection_1_Contains_m272826_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37097_ICollection_1_Contains_m272826_ParameterInfos/* parameters */
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
extern Il2CppType DateTimeKindU5BU5D_t25374_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37097_ICollection_1_CopyTo_m272827_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKindU5BU5D_t25374_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DateTimeKind>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272827_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37097_ICollection_1_CopyTo_m272827_ParameterInfos/* parameters */
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
extern Il2CppType DateTimeKind_t8228_0_0_0;
static ParameterInfo ICollection_1_t37097_ICollection_1_Remove_m272828_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t8228_0_0_0},
};
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DateTimeKind>::Remove(T)
MethodInfo ICollection_1_Remove_m272828_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37097_ICollection_1_Remove_m272828_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37097_MethodInfos[] =
{
	&ICollection_1_get_Count_m272822_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272823_MethodInfo,
	&ICollection_1_Add_m272824_MethodInfo,
	&ICollection_1_Clear_m272825_MethodInfo,
	&ICollection_1_Contains_m272826_MethodInfo,
	&ICollection_1_CopyTo_m272827_MethodInfo,
	&ICollection_1_Remove_m272828_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37099_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37097_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37099_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37097_0_0_0;
extern Il2CppType ICollection_1_t37097_1_0_0;
struct ICollection_1_t37097;
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37097_GenericClass;
TypeInfo ICollection_1_t37097_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37097_MethodInfos/* methods */
	, ICollection_1_t37097_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37097_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37097_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37097_0_0_0/* byval_arg */
	, &ICollection_1_t37097_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37097_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37099_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTimeKind>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DateTimeKind>
extern TypeInfo IEnumerable_1_t37099_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29310_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DateTimeKind>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272829_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37099_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29310_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37099_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272829_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37099_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37099_0_0_0;
extern Il2CppType IEnumerable_1_t37099_1_0_0;
struct IEnumerable_1_t37099;
extern TypeInfo IEnumerable_1_t37099_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37099_GenericClass;
TypeInfo IEnumerable_1_t37099_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37099_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37099_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37099_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37099_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37099_0_0_0/* byval_arg */
	, &IEnumerable_1_t37099_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37099_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37098_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DateTimeKind>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DateTimeKind>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DateTimeKind>
extern MethodInfo IList_1_get_Item_m272830_MethodInfo;
extern MethodInfo IList_1_set_Item_m272831_MethodInfo;
static PropertyInfo IList_1_t37098____Item_PropertyInfo = 
{
	&IList_1_t37098_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272830_MethodInfo/* get */
	, &IList_1_set_Item_m272831_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37098_PropertyInfos[] =
{
	&IList_1_t37098____Item_PropertyInfo,
	NULL
};
extern Il2CppType DateTimeKind_t8228_0_0_0;
static ParameterInfo IList_1_t37098_IList_1_IndexOf_m272832_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t8228_0_0_0},
};
extern TypeInfo IList_1_t37098_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.DateTimeKind>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272832_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37098_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37098_IList_1_IndexOf_m272832_ParameterInfos/* parameters */
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
extern Il2CppType DateTimeKind_t8228_0_0_0;
static ParameterInfo IList_1_t37098_IList_1_Insert_m272833_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t8228_0_0_0},
};
extern TypeInfo IList_1_t37098_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272833_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37098_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37098_IList_1_Insert_m272833_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37098_IList_1_RemoveAt_m272834_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37098_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272834_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37098_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37098_IList_1_RemoveAt_m272834_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37098_IList_1_get_Item_m272830_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37098_il2cpp_TypeInfo;
extern Il2CppType DateTimeKind_t8228_0_0_0;
extern void* RuntimeInvoker_DateTimeKind_t8228_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.DateTimeKind>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272830_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37098_il2cpp_TypeInfo/* declaring_type */
	, &DateTimeKind_t8228_0_0_0/* return_type */
	, RuntimeInvoker_DateTimeKind_t8228_Int32_t73/* invoker_method */
	, IList_1_t37098_IList_1_get_Item_m272830_ParameterInfos/* parameters */
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
extern Il2CppType DateTimeKind_t8228_0_0_0;
static ParameterInfo IList_1_t37098_IList_1_set_Item_m272831_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeKind_t8228_0_0_0},
};
extern TypeInfo IList_1_t37098_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DateTimeKind>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272831_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37098_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37098_IList_1_set_Item_m272831_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37098_MethodInfos[] =
{
	&IList_1_IndexOf_m272832_MethodInfo,
	&IList_1_Insert_m272833_MethodInfo,
	&IList_1_RemoveAt_m272834_MethodInfo,
	&IList_1_get_Item_m272830_MethodInfo,
	&IList_1_set_Item_m272831_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37097_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37099_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37098_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37097_il2cpp_TypeInfo,
	&IEnumerable_1_t37099_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37098_0_0_0;
extern Il2CppType IList_1_t37098_1_0_0;
struct IList_1_t37098;
extern TypeInfo IList_1_t37098_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37098_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37098_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37098_MethodInfos/* methods */
	, IList_1_t37098_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37098_il2cpp_TypeInfo/* element_class */
	, IList_1_t37098_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37098_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37098_0_0_0/* byval_arg */
	, &IList_1_t37098_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37098_GenericClass/* generic_class */
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
extern TypeInfo IComparable_1_t8551_il2cpp_TypeInfo;

// System.DateTimeOffset
#include "mscorlib_System_DateTimeOffset.h"


// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo IComparable_1_t8551_IComparable_1_CompareTo_m272835_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo IComparable_1_t8551_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.IComparable`1<System.DateTimeOffset>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m272835_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t8551_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227/* invoker_method */
	, IComparable_1_t8551_IComparable_1_CompareTo_m272835_ParameterInfos/* parameters */
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
static MethodInfo* IComparable_1_t8551_MethodInfos[] =
{
	&IComparable_1_CompareTo_m272835_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t8551_0_0_0;
extern Il2CppType IComparable_1_t8551_1_0_0;
struct IComparable_1_t8551;
extern TypeInfo IComparable_1_t8551_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparable_1_t8551_GenericClass;
TypeInfo IComparable_1_t8551_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t8551_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t8551_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t8551_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t8551_0_0_0/* byval_arg */
	, &IComparable_1_t8551_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t8551_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t8552_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
// Metadata Definition System.IEquatable`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo IEquatable_1_t8552_IEquatable_1_Equals_m272836_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo IEquatable_1_t8552_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.IEquatable`1<System.DateTimeOffset>::Equals(T)
MethodInfo IEquatable_1_Equals_m272836_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t8552_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227/* invoker_method */
	, IEquatable_1_t8552_IEquatable_1_Equals_m272836_ParameterInfos/* parameters */
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
static MethodInfo* IEquatable_1_t8552_MethodInfos[] =
{
	&IEquatable_1_Equals_m272836_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t8552_0_0_0;
extern Il2CppType IEquatable_1_t8552_1_0_0;
struct IEquatable_1_t8552;
extern TypeInfo IEquatable_1_t8552_il2cpp_TypeInfo;
extern Il2CppGenericClass IEquatable_1_t8552_GenericClass;
TypeInfo IEquatable_1_t8552_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t8552_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t8552_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t8552_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t8552_0_0_0/* byval_arg */
	, &IEquatable_1_t8552_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t8552_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t8549_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_0MethodDeclarations.h"

extern TypeInfo DateTimeOffset_t8227_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8551_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_376MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m180424_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m272835_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m57786_MethodInfo;
 void GenericComparer_1__ctor_m57786 (GenericComparer_1_t8549 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m180424(__this, /*hidden argument*/&Comparer_1__ctor_m180424_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m180423_MethodInfo;
 int32_t GenericComparer_1_Compare_m180423 (GenericComparer_1_t8549 * __this, DateTimeOffset_t8227  ___x, DateTimeOffset_t8227  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t8227  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t8227  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTimeOffset_t8227  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t8227  >::Invoke(&IComparable_1_CompareTo_m272835_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>
extern TypeInfo GenericComparer_1_t8549_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo GenericComparer_1__ctor_m57786_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m57786/* method */
	, &GenericComparer_1_t8549_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo GenericComparer_1_t8549_GenericComparer_1_Compare_m180423_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo GenericComparer_1_t8549_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.GenericComparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m180423_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m180423/* method */
	, &GenericComparer_1_t8549_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, GenericComparer_1_t8549_GenericComparer_1_Compare_m180423_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GenericComparer_1_t8549_MethodInfos[] =
{
	&GenericComparer_1__ctor_m57786_MethodInfo,
	&GenericComparer_1_Compare_m180423_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GenericComparer_1_Compare_m180423_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo;
extern MethodInfo GenericComparer_1_Compare_m180423_MethodInfo;
static MethodInfo* GenericComparer_1_t8549_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GenericComparer_1_Compare_m180423_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo,
	&GenericComparer_1_Compare_m180423_MethodInfo,
};
extern TypeInfo IComparer_1_t38960_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t8549_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38960_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t8549_0_0_0;
extern Il2CppType GenericComparer_1_t8549_1_0_0;
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
struct GenericComparer_1_t8549;
extern TypeInfo GenericComparer_1_t8549_il2cpp_TypeInfo;
extern Il2CppGenericClass GenericComparer_1_t8549_GenericClass;
TypeInfo GenericComparer_1_t8549_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t8549_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t8549_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t8549_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t8549_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t8549_0_0_0/* byval_arg */
	, &GenericComparer_1_t8549_1_0_0/* this_arg */
	, GenericComparer_1_t8549_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t8549_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t8549)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_376.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;

// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_377.h"
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8551_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo DateTimeOffset_t8227_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t7840_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t24872_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_377MethodDeclarations.h"
extern Il2CppType IComparable_1_t8551_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType GenericComparer_1_t7840_0_0_0;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo Type_MakeGenericType_m52718_MethodInfo;
extern MethodInfo Activator_CreateInstance_m38822_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m180428_MethodInfo;
extern MethodInfo Comparer_1_Compare_m272837_MethodInfo;
extern MethodInfo ArgumentException__ctor_m49269_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo Comparer_1__ctor_m180424_MethodInfo;
 void Comparer_1__ctor_m180424 (Comparer_1_t24871 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
extern MethodInfo Comparer_1__cctor_m180425_MethodInfo;
 void Comparer_1__cctor_m180425 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t24872 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t24872 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t24872_il2cpp_TypeInfo));
	DefaultComparer__ctor_m180428(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m180428_MethodInfo);
	((Comparer_1_t24871_StaticFields*)InitializedTypeInfo(&Comparer_1_t24871_il2cpp_TypeInfo)->static_fields)->____default = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo;
 int32_t Comparer_1_System_Collections_IComparer_Compare_m180426 (Comparer_1_t24871 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, DateTimeOffset_t8227 , DateTimeOffset_t8227  >::Invoke(&Comparer_1_Compare_m272837_MethodInfo, __this, ((*(DateTimeOffset_t8227 *)((DateTimeOffset_t8227 *)UnBox (___x, InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo))))), ((*(DateTimeOffset_t8227 *)((DateTimeOffset_t8227 *)UnBox (___y, InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t5466 * L_1 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m49269(L_1, /*hidden argument*/&ArgumentException__ctor_m49269_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
extern MethodInfo Comparer_1_get_Default_m180427_MethodInfo;
 Comparer_1_t24871 * Comparer_1_get_Default_m180427 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t24871_il2cpp_TypeInfo));
		return (((Comparer_1_t24871_StaticFields*)InitializedTypeInfo(&Comparer_1_t24871_il2cpp_TypeInfo)->static_fields)->____default);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.DateTimeOffset>
extern Il2CppType Comparer_1_t24871_0_0_49;
FieldInfo Comparer_1_t24871_____default_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t24871_0_0_49/* type */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t24871_StaticFields, ____default)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t24871_FieldInfos[] =
{
	&Comparer_1_t24871_____default_FieldInfo,
	NULL
};
extern MethodInfo Comparer_1_get_Default_m180427_MethodInfo;
static PropertyInfo Comparer_1_t24871____Default_PropertyInfo = 
{
	&Comparer_1_t24871_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m180427_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t24871_PropertyInfos[] =
{
	&Comparer_1_t24871____Default_PropertyInfo,
	NULL
};
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.ctor()
MethodInfo Comparer_1__ctor_m180424_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m180424/* method */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.DateTimeOffset>::.cctor()
MethodInfo Comparer_1__cctor_m180425_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m180425/* method */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t24871_Comparer_1_System_Collections_IComparer_Compare_m180426_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m180426/* method */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t_Object_t/* invoker_method */
	, Comparer_1_t24871_Comparer_1_System_Collections_IComparer_Compare_m180426_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo Comparer_1_t24871_Comparer_1_Compare_m272837_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo Comparer_1_Compare_m272837_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, Comparer_1_t24871_Comparer_1_Compare_m272837_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
extern Il2CppType Comparer_1_t24871_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.DateTimeOffset>::get_Default()
MethodInfo Comparer_1_get_Default_m180427_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m180427/* method */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t24871_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* Comparer_1_t24871_MethodInfos[] =
{
	&Comparer_1__ctor_m180424_MethodInfo,
	&Comparer_1__cctor_m180425_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo,
	&Comparer_1_Compare_m272837_MethodInfo,
	&Comparer_1_get_Default_m180427_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Comparer_1_Compare_m272837_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo;
static MethodInfo* Comparer_1_t24871_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Comparer_1_Compare_m272837_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo,
	NULL,
};
extern TypeInfo IComparer_1_t38960_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static TypeInfo* Comparer_1_t24871_InterfacesTypeInfos[] = 
{
	&IComparer_1_t38960_il2cpp_TypeInfo,
	&IComparer_t7107_il2cpp_TypeInfo,
};
extern TypeInfo IComparer_1_t38960_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Comparer_1_t24871_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38960_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t24871_0_0_0;
extern Il2CppType Comparer_1_t24871_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t24871;
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
extern Il2CppGenericClass Comparer_1_t24871_GenericClass;
TypeInfo Comparer_1_t24871_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t24871_MethodInfos/* methods */
	, Comparer_1_t24871_PropertyInfos/* properties */
	, Comparer_1_t24871_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t24871_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t24871_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t24871_0_0_0/* byval_arg */
	, &Comparer_1_t24871_1_0_0/* this_arg */
	, Comparer_1_t24871_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t24871_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t24871)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t24871_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t38960_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo IComparer_1_t38960_IComparer_1_Compare_m272838_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo IComparer_1_t38960_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IComparer`1<System.DateTimeOffset>::Compare(T,T)
MethodInfo IComparer_1_Compare_m272838_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t38960_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, IComparer_1_t38960_IComparer_1_Compare_m272838_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IComparer_1_t38960_MethodInfos[] =
{
	&IComparer_1_Compare_m272838_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t38960_0_0_0;
extern Il2CppType IComparer_1_t38960_1_0_0;
struct IComparer_1_t38960;
extern TypeInfo IComparer_1_t38960_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparer_1_t38960_GenericClass;
TypeInfo IComparer_1_t38960_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t38960_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t38960_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t38960_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t38960_0_0_0/* byval_arg */
	, &IComparer_1_t38960_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t38960_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t24872_il2cpp_TypeInfo;

extern TypeInfo DateTimeOffset_t8227_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8551_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IComparable_t948_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m180424_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m272835_MethodInfo;
extern MethodInfo IComparable_CompareTo_m57234_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern MethodInfo DefaultComparer__ctor_m180428_MethodInfo;
 void DefaultComparer__ctor_m180428 (DefaultComparer_t24872 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m180424(__this, /*hidden argument*/&Comparer_1__ctor_m180424_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m180429_MethodInfo;
 int32_t DefaultComparer_Compare_m180429 (DefaultComparer_t24872 * __this, DateTimeOffset_t8227  ___x, DateTimeOffset_t8227  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		DateTimeOffset_t8227  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		DateTimeOffset_t8227  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		DateTimeOffset_t8227  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		DateTimeOffset_t8227  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t8551_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		DateTimeOffset_t8227  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8551_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, DateTimeOffset_t8227  >::Invoke(&IComparable_1_CompareTo_m272835_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8551_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		DateTimeOffset_t8227  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		DateTimeOffset_t8227  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_13);
		DateTimeOffset_t8227  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m57234_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t5466 * L_18 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m38716(L_18, (String_t*) &_stringLiteral6740, /*hidden argument*/&ArgumentException__ctor_m38716_MethodInfo);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>
extern TypeInfo DefaultComparer_t24872_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
MethodInfo DefaultComparer__ctor_m180428_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m180428/* method */
	, &DefaultComparer_t24872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo DefaultComparer_t24872_DefaultComparer_Compare_m180429_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo DefaultComparer_t24872_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.DateTimeOffset>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m180429_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m180429/* method */
	, &DefaultComparer_t24872_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, DefaultComparer_t24872_DefaultComparer_Compare_m180429_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DefaultComparer_t24872_MethodInfos[] =
{
	&DefaultComparer__ctor_m180428_MethodInfo,
	&DefaultComparer_Compare_m180429_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m180429_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m180429_MethodInfo;
static MethodInfo* DefaultComparer_t24872_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Compare_m180429_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180426_MethodInfo,
	&DefaultComparer_Compare_m180429_MethodInfo,
};
extern TypeInfo IComparer_1_t38960_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24872_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38960_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24872_0_0_0;
extern Il2CppType DefaultComparer_t24872_1_0_0;
extern TypeInfo Comparer_1_t24871_il2cpp_TypeInfo;
struct DefaultComparer_t24872;
extern TypeInfo DefaultComparer_t24872_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24872_GenericClass;
extern TypeInfo Comparer_1_t7839_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24872_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24872_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t24871_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t7839_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24872_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24872_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24872_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24872_0_0_0/* byval_arg */
	, &DefaultComparer_t24872_1_0_0/* this_arg */
	, DefaultComparer_t24872_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24872_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24872)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t8550_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__1MethodDeclarations.h"

extern TypeInfo DateTimeOffset_t8227_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t8552_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_651MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m180432_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m272836_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m57787_MethodInfo;
 void GenericEqualityComparer_1__ctor_m57787 (GenericEqualityComparer_1_t8550 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m180432(__this, /*hidden argument*/&EqualityComparer_1__ctor_m180432_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180430_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m180430 (GenericEqualityComparer_1_t8550 * __this, DateTimeOffset_t8227  ___obj, MethodInfo* method){
	{
		DateTimeOffset_t8227  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m4064_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m180431_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m180431 (GenericEqualityComparer_1_t8550 * __this, DateTimeOffset_t8227  ___x, DateTimeOffset_t8227  ___y, MethodInfo* method){
	{
		DateTimeOffset_t8227  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t8227  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, DateTimeOffset_t8227  >::Invoke(&IEquatable_1_Equals_m272836_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>
extern TypeInfo GenericEqualityComparer_1_t8550_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m57787_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m57787/* method */
	, &GenericEqualityComparer_1_t8550_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t8550_GenericEqualityComparer_1_GetHashCode_m180430_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo GenericEqualityComparer_1_t8550_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m180430_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m180430/* method */
	, &GenericEqualityComparer_1_t8550_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227/* invoker_method */
	, GenericEqualityComparer_1_t8550_GenericEqualityComparer_1_GetHashCode_m180430_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t8550_GenericEqualityComparer_1_Equals_m180431_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo GenericEqualityComparer_1_t8550_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m180431_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m180431/* method */
	, &GenericEqualityComparer_1_t8550_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, GenericEqualityComparer_1_t8550_GenericEqualityComparer_1_Equals_m180431_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GenericEqualityComparer_1_t8550_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m57787_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180430_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180431_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_Equals_m180431_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180430_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180430_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_Equals_m180431_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t8550_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180431_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180430_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180430_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180431_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t8550_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38961_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t8550_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t8550_1_0_0;
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t8550;
extern TypeInfo GenericEqualityComparer_1_t8550_il2cpp_TypeInfo;
extern Il2CppGenericClass GenericEqualityComparer_1_t8550_GenericClass;
TypeInfo GenericEqualityComparer_1_t8550_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t8550_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t8550_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t8550_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t8550_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t8550_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t8550_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t8550_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t8550_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t8550)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_651.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_652.h"
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t8552_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo DateTimeOffset_t8227_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo GenericEqualityComparer_1_t7852_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t24874_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_652MethodDeclarations.h"
extern Il2CppType IEquatable_1_t8552_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t7852_0_0_0;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo Type_MakeGenericType_m52718_MethodInfo;
extern MethodInfo Activator_CreateInstance_m38822_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m180437_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m272839_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m272840_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
extern MethodInfo EqualityComparer_1__ctor_m180432_MethodInfo;
 void EqualityComparer_1__ctor_m180432 (EqualityComparer_1_t24873 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m180433_MethodInfo;
 void EqualityComparer_1__cctor_m180433 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t24874 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t24874 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t24874_il2cpp_TypeInfo));
	DefaultComparer__ctor_m180437(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m180437_MethodInfo);
	((EqualityComparer_1_t24873_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t24873_il2cpp_TypeInfo)->static_fields)->____default = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo;
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434 (EqualityComparer_1_t24873 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, DateTimeOffset_t8227  >::Invoke(&EqualityComparer_1_GetHashCode_m272839_MethodInfo, __this, ((*(DateTimeOffset_t8227 *)((DateTimeOffset_t8227 *)UnBox (___obj, InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo;
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435 (EqualityComparer_1_t24873 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, DateTimeOffset_t8227 , DateTimeOffset_t8227  >::Invoke(&EqualityComparer_1_Equals_m272840_MethodInfo, __this, ((*(DateTimeOffset_t8227 *)((DateTimeOffset_t8227 *)UnBox (___x, InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo))))), ((*(DateTimeOffset_t8227 *)((DateTimeOffset_t8227 *)UnBox (___y, InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m180436_MethodInfo;
 EqualityComparer_1_t24873 * EqualityComparer_1_get_Default_m180436 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t24873_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t24873_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t24873_il2cpp_TypeInfo)->static_fields)->____default);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>
extern Il2CppType EqualityComparer_1_t24873_0_0_49;
FieldInfo EqualityComparer_1_t24873_____default_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t24873_0_0_49/* type */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t24873_StaticFields, ____default)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t24873_FieldInfos[] =
{
	&EqualityComparer_1_t24873_____default_FieldInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_get_Default_m180436_MethodInfo;
static PropertyInfo EqualityComparer_1_t24873____Default_PropertyInfo = 
{
	&EqualityComparer_1_t24873_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m180436_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t24873_PropertyInfos[] =
{
	&EqualityComparer_1_t24873____Default_PropertyInfo,
	NULL
};
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.ctor()
MethodInfo EqualityComparer_1__ctor_m180432_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m180432/* method */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::.cctor()
MethodInfo EqualityComparer_1__cctor_m180433_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m180433/* method */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t24873_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434/* method */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, EqualityComparer_1_t24873_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t24873_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435/* method */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t24873_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo EqualityComparer_1_t24873_EqualityComparer_1_GetHashCode_m272839_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m272839_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227/* invoker_method */
	, EqualityComparer_1_t24873_EqualityComparer_1_GetHashCode_m272839_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo EqualityComparer_1_t24873_EqualityComparer_1_Equals_m272840_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m272840_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, EqualityComparer_1_t24873_EqualityComparer_1_Equals_m272840_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppType EqualityComparer_1_t24873_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.DateTimeOffset>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m180436_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m180436/* method */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t24873_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* EqualityComparer_1_t24873_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m180432_MethodInfo,
	&EqualityComparer_1__cctor_m180433_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo,
	&EqualityComparer_1_GetHashCode_m272839_MethodInfo,
	&EqualityComparer_1_Equals_m272840_MethodInfo,
	&EqualityComparer_1_get_Default_m180436_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m272840_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m272839_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo;
static MethodInfo* EqualityComparer_1_t24873_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&EqualityComparer_1_Equals_m272840_MethodInfo,
	&EqualityComparer_1_GetHashCode_m272839_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo,
	NULL,
	NULL,
};
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static TypeInfo* EqualityComparer_1_t24873_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t38961_il2cpp_TypeInfo,
	&IEqualityComparer_t7113_il2cpp_TypeInfo,
};
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair EqualityComparer_1_t24873_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38961_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t24873_0_0_0;
extern Il2CppType EqualityComparer_1_t24873_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct EqualityComparer_1_t24873;
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
extern Il2CppGenericClass EqualityComparer_1_t24873_GenericClass;
TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t24873_MethodInfos/* methods */
	, EqualityComparer_1_t24873_PropertyInfos/* properties */
	, EqualityComparer_1_t24873_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t24873_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t24873_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t24873_0_0_0/* byval_arg */
	, &EqualityComparer_1_t24873_1_0_0/* this_arg */
	, EqualityComparer_1_t24873_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t24873_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t24873)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t24873_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo IEqualityComparer_1_t38961_IEqualityComparer_1_Equals_m272841_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m272841_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t38961_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, IEqualityComparer_1_t38961_IEqualityComparer_1_Equals_m272841_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo IEqualityComparer_1_t38961_IEqualityComparer_1_GetHashCode_m272842_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.DateTimeOffset>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m272842_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t38961_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227/* invoker_method */
	, IEqualityComparer_1_t38961_IEqualityComparer_1_GetHashCode_m272842_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEqualityComparer_1_t38961_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m272841_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m272842_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t38961_0_0_0;
extern Il2CppType IEqualityComparer_1_t38961_1_0_0;
struct IEqualityComparer_1_t38961;
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;
extern Il2CppGenericClass IEqualityComparer_1_t38961_GenericClass;
TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t38961_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t38961_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t38961_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t38961_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t38961_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t38961_GenericClass/* generic_class */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t24874_il2cpp_TypeInfo;

extern TypeInfo DateTimeOffset_t8227_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern MethodInfo EqualityComparer_1__ctor_m180432_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_Equals_m4063_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
extern MethodInfo DefaultComparer__ctor_m180437_MethodInfo;
 void DefaultComparer__ctor_m180437 (DefaultComparer_t24874 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m180432(__this, /*hidden argument*/&EqualityComparer_1__ctor_m180432_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m180438_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m180438 (DefaultComparer_t24874 * __this, DateTimeOffset_t8227  ___obj, MethodInfo* method){
	{
		DateTimeOffset_t8227  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m4064_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m180439_MethodInfo;
 bool DefaultComparer_Equals_m180439 (DefaultComparer_t24874 * __this, DateTimeOffset_t8227  ___x, DateTimeOffset_t8227  ___y, MethodInfo* method){
	{
		DateTimeOffset_t8227  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		DateTimeOffset_t8227  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		DateTimeOffset_t8227  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, Box(InitializedTypeInfo(&DateTimeOffset_t8227_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>
extern TypeInfo DefaultComparer_t24874_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::.ctor()
MethodInfo DefaultComparer__ctor_m180437_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m180437/* method */
	, &DefaultComparer_t24874_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo DefaultComparer_t24874_DefaultComparer_GetHashCode_m180438_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo DefaultComparer_t24874_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m180438_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m180438/* method */
	, &DefaultComparer_t24874_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_DateTimeOffset_t8227/* invoker_method */
	, DefaultComparer_t24874_DefaultComparer_GetHashCode_m180438_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType DateTimeOffset_t8227_0_0_0;
extern Il2CppType DateTimeOffset_t8227_0_0_0;
static ParameterInfo DefaultComparer_t24874_DefaultComparer_Equals_m180439_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &DateTimeOffset_t8227_0_0_0},
};
extern TypeInfo DefaultComparer_t24874_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.DateTimeOffset>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m180439_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m180439/* method */
	, &DefaultComparer_t24874_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_DateTimeOffset_t8227_DateTimeOffset_t8227/* invoker_method */
	, DefaultComparer_t24874_DefaultComparer_Equals_m180439_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DefaultComparer_t24874_MethodInfos[] =
{
	&DefaultComparer__ctor_m180437_MethodInfo,
	&DefaultComparer_GetHashCode_m180438_MethodInfo,
	&DefaultComparer_Equals_m180439_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m180439_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m180438_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m180438_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m180439_MethodInfo;
static MethodInfo* DefaultComparer_t24874_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Equals_m180439_MethodInfo,
	&DefaultComparer_GetHashCode_m180438_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180435_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180434_MethodInfo,
	&DefaultComparer_GetHashCode_m180438_MethodInfo,
	&DefaultComparer_Equals_m180439_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t38961_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24874_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38961_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24874_0_0_0;
extern Il2CppType DefaultComparer_t24874_1_0_0;
extern TypeInfo EqualityComparer_1_t24873_il2cpp_TypeInfo;
struct DefaultComparer_t24874;
extern TypeInfo DefaultComparer_t24874_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24874_GenericClass;
extern TypeInfo EqualityComparer_1_t7851_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24874_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24874_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t24873_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t7851_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24874_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24874_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24874_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24874_0_0_0/* byval_arg */
	, &DefaultComparer_t24874_1_0_0/* this_arg */
	, DefaultComparer_t24874_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24874_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24874)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
// System.Nullable`1<System.TimeSpan>
#include "mscorlib_System_Nullable_1_gen_0MethodDeclarations.h"

// System.TimeSpan
#include "mscorlib_System_TimeSpan.h"
// System.ValueType
#include "mscorlib_System_ValueType.h"
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern TypeInfo TimeSpan_t5565_il2cpp_TypeInfo;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo String_t_il2cpp_TypeInfo;
// System.ValueType
#include "mscorlib_System_ValueTypeMethodDeclarations.h"
// System.String
#include "mscorlib_System_StringMethodDeclarations.h"
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Nullable_1_Equals_m180441_MethodInfo;
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;


// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
extern MethodInfo Nullable_1__ctor_m57788_MethodInfo;
 void Nullable_1__ctor_m57788 (Nullable_1_t8230 * __this, TimeSpan_t5565  ___value, MethodInfo* method){
	{
		__this->___has_value = 1;
		__this->___value = ___value;
		return;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
extern MethodInfo Nullable_1_get_HasValue_m57789_MethodInfo;
 bool Nullable_1_get_HasValue_m57789 (Nullable_1_t8230 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value);
		return L_0;
	}
}
// T System.Nullable`1<System.TimeSpan>::get_Value()
extern MethodInfo Nullable_1_get_Value_m57790_MethodInfo;
 TimeSpan_t5565  Nullable_1_get_Value_m57790 (Nullable_1_t8230 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value);
		if (L_0)
		{
			goto IL_0013;
		}
	}
	{
		InvalidOperationException_t5468 * L_1 = (InvalidOperationException_t5468 *)il2cpp_codegen_object_new (InitializedTypeInfo(&InvalidOperationException_t5468_il2cpp_TypeInfo));
		InvalidOperationException__ctor_m38738(L_1, (String_t*) &_stringLiteral6666, /*hidden argument*/&InvalidOperationException__ctor_m38738_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}

IL_0013:
	{
		TimeSpan_t5565  L_2 = (__this->___value);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
extern MethodInfo Nullable_1_Equals_m180440_MethodInfo;
 bool Nullable_1_Equals_m180440 (Nullable_1_t8230 * __this, Object_t * ___other, MethodInfo* method){
	{
		if (___other)
		{
			goto IL_000d;
		}
	}
	{
		bool L_0 = (__this->___has_value);
		return ((((int32_t)L_0) == ((int32_t)0))? 1 : 0);
	}

IL_000d:
	{
		if (((Object_t *)IsInst(___other, InitializedTypeInfo(&Nullable_1_t8230_il2cpp_TypeInfo))))
		{
			goto IL_0017;
		}
	}
	{
		return 0;
	}

IL_0017:
	{
		void* L_1 = alloca(sizeof(Nullable_1_t8230 ));
		UnBoxNullable(___other, InitializedTypeInfo(&Nullable_1_t8230_il2cpp_TypeInfo), L_1);
		bool L_2 = Nullable_1_Equals_m180441(__this, ((*(Nullable_1_t8230 *)((Nullable_1_t8230 *)L_1))), /*hidden argument*/&Nullable_1_Equals_m180441_MethodInfo);
		return L_2;
	}
}
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
extern MethodInfo Nullable_1_Equals_m180441_MethodInfo;
 bool Nullable_1_Equals_m180441 (Nullable_1_t8230 * __this, Nullable_1_t8230  ___other, MethodInfo* method){
	{
		NullCheck((&___other));
		bool L_0 = ((&___other)->___has_value);
		bool L_1 = (__this->___has_value);
		if ((((int32_t)L_0) == ((int32_t)L_1)))
		{
			goto IL_0011;
		}
	}
	{
		return 0;
	}

IL_0011:
	{
		bool L_2 = (__this->___has_value);
		if (L_2)
		{
			goto IL_001b;
		}
	}
	{
		return 1;
	}

IL_001b:
	{
		NullCheck((&___other));
		TimeSpan_t5565 * L_3 = &((&___other)->___value);
		TimeSpan_t5565  L_4 = (__this->___value);
		TimeSpan_t5565  L_5 = L_4;
		Object_t * L_6 = Box(InitializedTypeInfo(&TimeSpan_t5565_il2cpp_TypeInfo), &L_5);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t5565_il2cpp_TypeInfo), &(*L_3)));
		bool L_7 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&ValueType_Equals_m4341_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t5565_il2cpp_TypeInfo), &(*L_3)), L_6);
		return L_7;
	}
}
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
extern MethodInfo Nullable_1_GetHashCode_m180442_MethodInfo;
 int32_t Nullable_1_GetHashCode_m180442 (Nullable_1_t8230 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value);
		if (L_0)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		TimeSpan_t5565 * L_1 = &(__this->___value);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t5565_il2cpp_TypeInfo), &(*L_1)));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&ValueType_GetHashCode_m4342_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t5565_il2cpp_TypeInfo), &(*L_1)));
		return L_2;
	}
}
// System.String System.Nullable`1<System.TimeSpan>::ToString()
extern MethodInfo Nullable_1_ToString_m180443_MethodInfo;
 String_t* Nullable_1_ToString_m180443 (Nullable_1_t8230 * __this, MethodInfo* method){
	{
		bool L_0 = (__this->___has_value);
		if (!L_0)
		{
			goto IL_001a;
		}
	}
	{
		TimeSpan_t5565 * L_1 = &(__this->___value);
		NullCheck(Box(InitializedTypeInfo(&TimeSpan_t5565_il2cpp_TypeInfo), &(*L_1)));
		String_t* L_2 = (String_t*)VirtFuncInvoker0< String_t* >::Invoke(&ValueType_ToString_m4343_MethodInfo, Box(InitializedTypeInfo(&TimeSpan_t5565_il2cpp_TypeInfo), &(*L_1)));
		return L_2;
	}

IL_001a:
	{
		IL2CPP_RUNTIME_CLASS_INIT((&String_t_il2cpp_TypeInfo));
		return (((String_t_StaticFields*)(&String_t_il2cpp_TypeInfo)->static_fields)->___Empty);
	}
}
// Metadata Definition System.Nullable`1<System.TimeSpan>
extern Il2CppType TimeSpan_t5565_0_0_3;
FieldInfo Nullable_1_t8230____value_FieldInfo = 
{
	"value"/* name */
	, &TimeSpan_t5565_0_0_3/* type */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* parent */
	, offsetof(Nullable_1_t8230, ___value) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Boolean_t956_0_0_3;
FieldInfo Nullable_1_t8230____has_value_FieldInfo = 
{
	"has_value"/* name */
	, &Boolean_t956_0_0_3/* type */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* parent */
	, offsetof(Nullable_1_t8230, ___has_value) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Nullable_1_t8230_FieldInfos[] =
{
	&Nullable_1_t8230____value_FieldInfo,
	&Nullable_1_t8230____has_value_FieldInfo,
	NULL
};
extern MethodInfo Nullable_1_get_HasValue_m57789_MethodInfo;
static PropertyInfo Nullable_1_t8230____HasValue_PropertyInfo = 
{
	&Nullable_1_t8230_il2cpp_TypeInfo/* parent */
	, "HasValue"/* name */
	, &Nullable_1_get_HasValue_m57789_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo Nullable_1_get_Value_m57790_MethodInfo;
static PropertyInfo Nullable_1_t8230____Value_PropertyInfo = 
{
	&Nullable_1_t8230_il2cpp_TypeInfo/* parent */
	, "Value"/* name */
	, &Nullable_1_get_Value_m57790_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Nullable_1_t8230_PropertyInfos[] =
{
	&Nullable_1_t8230____HasValue_PropertyInfo,
	&Nullable_1_t8230____Value_PropertyInfo,
	NULL
};
extern Il2CppType TimeSpan_t5565_0_0_0;
static ParameterInfo Nullable_1_t8230_Nullable_1__ctor_m57788_ParameterInfos[] = 
{
	{"value", 0, 134217728, &EmptyCustomAttributesCache, &TimeSpan_t5565_0_0_0},
};
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_TimeSpan_t5565 (MethodInfo* method, void* obj, void** args);
// System.Void System.Nullable`1<System.TimeSpan>::.ctor(T)
MethodInfo Nullable_1__ctor_m57788_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Nullable_1__ctor_m57788/* method */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_TimeSpan_t5565/* invoker_method */
	, Nullable_1_t8230_Nullable_1__ctor_m57788_ParameterInfos/* parameters */
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
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Nullable`1<System.TimeSpan>::get_HasValue()
MethodInfo Nullable_1_get_HasValue_m57789_MethodInfo = 
{
	"get_HasValue"/* name */
	, (methodPointerType)&Nullable_1_get_HasValue_m57789/* method */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppType TimeSpan_t5565_0_0_0;
extern void* RuntimeInvoker_TimeSpan_t5565 (MethodInfo* method, void* obj, void** args);
// T System.Nullable`1<System.TimeSpan>::get_Value()
MethodInfo Nullable_1_get_Value_m57790_MethodInfo = 
{
	"get_Value"/* name */
	, (methodPointerType)&Nullable_1_get_Value_m57790/* method */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* declaring_type */
	, &TimeSpan_t5565_0_0_0/* return_type */
	, RuntimeInvoker_TimeSpan_t5565/* invoker_method */
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
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Nullable_1_t8230_Nullable_1_Equals_m180440_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Object)
MethodInfo Nullable_1_Equals_m180440_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Nullable_1_Equals_m180440/* method */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, Nullable_1_t8230_Nullable_1_Equals_m180440_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Nullable_1_t8230_0_0_0;
static ParameterInfo Nullable_1_t8230_Nullable_1_Equals_m180441_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Nullable_1_t8230_0_0_0},
};
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Nullable_1_t8230 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Nullable`1<System.TimeSpan>::Equals(System.Nullable`1<T>)
MethodInfo Nullable_1_Equals_m180441_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&Nullable_1_Equals_m180441/* method */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Nullable_1_t8230/* invoker_method */
	, Nullable_1_t8230_Nullable_1_Equals_m180441_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 129/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Nullable`1<System.TimeSpan>::GetHashCode()
MethodInfo Nullable_1_GetHashCode_m180442_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&Nullable_1_GetHashCode_m180442/* method */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 2/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppType String_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.String System.Nullable`1<System.TimeSpan>::ToString()
MethodInfo Nullable_1_ToString_m180443_MethodInfo = 
{
	"ToString"/* name */
	, (methodPointerType)&Nullable_1_ToString_m180443/* method */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* declaring_type */
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
static MethodInfo* Nullable_1_t8230_MethodInfos[] =
{
	&Nullable_1__ctor_m57788_MethodInfo,
	&Nullable_1_get_HasValue_m57789_MethodInfo,
	&Nullable_1_get_Value_m57790_MethodInfo,
	&Nullable_1_Equals_m180440_MethodInfo,
	&Nullable_1_Equals_m180441_MethodInfo,
	&Nullable_1_GetHashCode_m180442_MethodInfo,
	&Nullable_1_ToString_m180443_MethodInfo,
	NULL
};
extern MethodInfo Nullable_1_Equals_m180440_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Nullable_1_GetHashCode_m180442_MethodInfo;
extern MethodInfo Nullable_1_ToString_m180443_MethodInfo;
static MethodInfo* Nullable_1_t8230_VTable[] =
{
	&Nullable_1_Equals_m180440_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Nullable_1_GetHashCode_m180442_MethodInfo,
	&Nullable_1_ToString_m180443_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Nullable_1_t8230_0_0_0;
extern Il2CppType Nullable_1_t8230_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo Nullable_1_t8230_il2cpp_TypeInfo;
extern Il2CppGenericClass Nullable_1_t8230_GenericClass;
TypeInfo Nullable_1_t8230_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Nullable`1"/* name */
	, "System"/* namespaze */
	, Nullable_1_t8230_MethodInfos/* methods */
	, Nullable_1_t8230_PropertyInfos/* properties */
	, Nullable_1_t8230_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, Nullable_1_t8230_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Nullable_1_t8230_il2cpp_TypeInfo/* cast_class */
	, &Nullable_1_t8230_0_0_0/* byval_arg */
	, &Nullable_1_t8230_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &Nullable_1_t8230_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Nullable_1_t8230)+ sizeof (Il2CppObject)/* instance_size */
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
	, 7/* method_count */
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
extern TypeInfo IEnumerator_1_t29311_il2cpp_TypeInfo;

// System.DayOfWeek
#include "mscorlib_System_DayOfWeek.h"


// T System.Collections.Generic.IEnumerator`1<System.DayOfWeek>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.DayOfWeek>
extern MethodInfo IEnumerator_1_get_Current_m272843_MethodInfo;
static PropertyInfo IEnumerator_1_t29311____Current_PropertyInfo = 
{
	&IEnumerator_1_t29311_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272843_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29311_PropertyInfos[] =
{
	&IEnumerator_1_t29311____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29311_il2cpp_TypeInfo;
extern Il2CppType DayOfWeek_t5742_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t5742 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.DayOfWeek>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272843_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29311_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t5742_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t5742/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29311_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272843_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29311_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29311_0_0_0;
extern Il2CppType IEnumerator_1_t29311_1_0_0;
struct IEnumerator_1_t29311;
extern TypeInfo IEnumerator_1_t29311_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29311_GenericClass;
TypeInfo IEnumerator_1_t29311_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29311_MethodInfos/* methods */
	, IEnumerator_1_t29311_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29311_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29311_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29311_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29311_0_0_0/* byval_arg */
	, &IEnumerator_1_t29311_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29311_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.DayOfWeek>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3060.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.DayOfWeek>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3060MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern TypeInfo DayOfWeek_t5742_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180449_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDayOfWeek_t5742_m223801_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.DayOfWeek>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.DayOfWeek>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDayOfWeek_t5742_m223801 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDayOfWeek_t5742_m223801_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180444_MethodInfo;
 void InternalEnumerator_1__ctor_m180444 (InternalEnumerator_1_t24875 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180445_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180445 (InternalEnumerator_1_t24875 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446 (InternalEnumerator_1_t24875 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180449(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180449_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DayOfWeek_t5742_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180447_MethodInfo;
 void InternalEnumerator_1_Dispose_m180447 (InternalEnumerator_1_t24875 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.DayOfWeek>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180448_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180448 (InternalEnumerator_1_t24875 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.DayOfWeek>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180449_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180449 (InternalEnumerator_1_t24875 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDayOfWeek_t5742_m223801(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDayOfWeek_t5742_m223801_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.DayOfWeek>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24875____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24875, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24875____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24875, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24875_FieldInfos[] =
{
	&InternalEnumerator_1_t24875____array_FieldInfo,
	&InternalEnumerator_1_t24875____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24875____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24875_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180449_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24875____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24875_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180449_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24875_PropertyInfos[] =
{
	&InternalEnumerator_1_t24875____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24875____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24875_InternalEnumerator_1__ctor_m180444_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180444_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180444/* method */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24875_InternalEnumerator_1__ctor_m180444_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180445_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180445/* method */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.DayOfWeek>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446/* method */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.DayOfWeek>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180447_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180447/* method */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.DayOfWeek>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180448_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180448/* method */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern Il2CppType DayOfWeek_t5742_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t5742 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.DayOfWeek>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180449_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180449/* method */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t5742_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t5742/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24875_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180444_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180445_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446_MethodInfo,
	&InternalEnumerator_1_Dispose_m180447_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180448_MethodInfo,
	&InternalEnumerator_1_get_Current_m180449_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180448_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180445_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180447_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180449_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24875_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180446_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180448_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180445_MethodInfo,
	&InternalEnumerator_1_Dispose_m180447_MethodInfo,
	&InternalEnumerator_1_get_Current_m180449_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29311_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24875_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29311_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29311_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24875_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29311_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24875_0_0_0;
extern Il2CppType InternalEnumerator_1_t24875_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24875_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24875_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24875_MethodInfos/* methods */
	, InternalEnumerator_1_t24875_PropertyInfos/* properties */
	, InternalEnumerator_1_t24875_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24875_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24875_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24875_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24875_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24875_1_0_0/* this_arg */
	, InternalEnumerator_1_t24875_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24875_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24875)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.DayOfWeek>
extern MethodInfo ICollection_1_get_Count_m272844_MethodInfo;
static PropertyInfo ICollection_1_t37100____Count_PropertyInfo = 
{
	&ICollection_1_t37100_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272844_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272845_MethodInfo;
static PropertyInfo ICollection_1_t37100____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37100_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272845_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37100_PropertyInfos[] =
{
	&ICollection_1_t37100____Count_PropertyInfo,
	&ICollection_1_t37100____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_Count()
MethodInfo ICollection_1_get_Count_m272844_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272845_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DayOfWeek_t5742_0_0_0;
static ParameterInfo ICollection_1_t37100_ICollection_1_Add_m272846_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t5742_0_0_0},
};
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Add(T)
MethodInfo ICollection_1_Add_m272846_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37100_ICollection_1_Add_m272846_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::Clear()
MethodInfo ICollection_1_Clear_m272847_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DayOfWeek_t5742_0_0_0;
static ParameterInfo ICollection_1_t37100_ICollection_1_Contains_m272848_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t5742_0_0_0},
};
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Contains(T)
MethodInfo ICollection_1_Contains_m272848_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37100_ICollection_1_Contains_m272848_ParameterInfos/* parameters */
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
extern Il2CppType DayOfWeekU5BU5D_t25375_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37100_ICollection_1_CopyTo_m272849_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeekU5BU5D_t25375_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.DayOfWeek>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272849_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37100_ICollection_1_CopyTo_m272849_ParameterInfos/* parameters */
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
extern Il2CppType DayOfWeek_t5742_0_0_0;
static ParameterInfo ICollection_1_t37100_ICollection_1_Remove_m272850_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t5742_0_0_0},
};
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.DayOfWeek>::Remove(T)
MethodInfo ICollection_1_Remove_m272850_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37100_ICollection_1_Remove_m272850_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37100_MethodInfos[] =
{
	&ICollection_1_get_Count_m272844_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272845_MethodInfo,
	&ICollection_1_Add_m272846_MethodInfo,
	&ICollection_1_Clear_m272847_MethodInfo,
	&ICollection_1_Contains_m272848_MethodInfo,
	&ICollection_1_CopyTo_m272849_MethodInfo,
	&ICollection_1_Remove_m272850_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37102_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37100_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37102_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37100_0_0_0;
extern Il2CppType ICollection_1_t37100_1_0_0;
struct ICollection_1_t37100;
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37100_GenericClass;
TypeInfo ICollection_1_t37100_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37100_MethodInfos/* methods */
	, ICollection_1_t37100_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37100_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37100_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37100_0_0_0/* byval_arg */
	, &ICollection_1_t37100_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37100_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37102_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DayOfWeek>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.DayOfWeek>
extern TypeInfo IEnumerable_1_t37102_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29311_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.DayOfWeek>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272851_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37102_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29311_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37102_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272851_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37102_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37102_0_0_0;
extern Il2CppType IEnumerable_1_t37102_1_0_0;
struct IEnumerable_1_t37102;
extern TypeInfo IEnumerable_1_t37102_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37102_GenericClass;
TypeInfo IEnumerable_1_t37102_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37102_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37102_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37102_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37102_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37102_0_0_0/* byval_arg */
	, &IEnumerable_1_t37102_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37102_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37101_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.DayOfWeek>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.DayOfWeek>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.DayOfWeek>
extern MethodInfo IList_1_get_Item_m272852_MethodInfo;
extern MethodInfo IList_1_set_Item_m272853_MethodInfo;
static PropertyInfo IList_1_t37101____Item_PropertyInfo = 
{
	&IList_1_t37101_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272852_MethodInfo/* get */
	, &IList_1_set_Item_m272853_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37101_PropertyInfos[] =
{
	&IList_1_t37101____Item_PropertyInfo,
	NULL
};
extern Il2CppType DayOfWeek_t5742_0_0_0;
static ParameterInfo IList_1_t37101_IList_1_IndexOf_m272854_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t5742_0_0_0},
};
extern TypeInfo IList_1_t37101_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.DayOfWeek>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272854_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37101_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37101_IList_1_IndexOf_m272854_ParameterInfos/* parameters */
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
extern Il2CppType DayOfWeek_t5742_0_0_0;
static ParameterInfo IList_1_t37101_IList_1_Insert_m272855_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t5742_0_0_0},
};
extern TypeInfo IList_1_t37101_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272855_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37101_IList_1_Insert_m272855_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37101_IList_1_RemoveAt_m272856_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37101_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272856_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37101_IList_1_RemoveAt_m272856_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37101_IList_1_get_Item_m272852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37101_il2cpp_TypeInfo;
extern Il2CppType DayOfWeek_t5742_0_0_0;
extern void* RuntimeInvoker_DayOfWeek_t5742_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.DayOfWeek>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272852_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37101_il2cpp_TypeInfo/* declaring_type */
	, &DayOfWeek_t5742_0_0_0/* return_type */
	, RuntimeInvoker_DayOfWeek_t5742_Int32_t73/* invoker_method */
	, IList_1_t37101_IList_1_get_Item_m272852_ParameterInfos/* parameters */
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
extern Il2CppType DayOfWeek_t5742_0_0_0;
static ParameterInfo IList_1_t37101_IList_1_set_Item_m272853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DayOfWeek_t5742_0_0_0},
};
extern TypeInfo IList_1_t37101_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.DayOfWeek>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272853_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37101_IList_1_set_Item_m272853_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37101_MethodInfos[] =
{
	&IList_1_IndexOf_m272854_MethodInfo,
	&IList_1_Insert_m272855_MethodInfo,
	&IList_1_RemoveAt_m272856_MethodInfo,
	&IList_1_get_Item_m272852_MethodInfo,
	&IList_1_set_Item_m272853_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37100_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37102_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37101_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37100_il2cpp_TypeInfo,
	&IEnumerable_1_t37102_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37101_0_0_0;
extern Il2CppType IList_1_t37101_1_0_0;
struct IList_1_t37101;
extern TypeInfo IList_1_t37101_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37101_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37101_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37101_MethodInfos/* methods */
	, IList_1_t37101_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37101_il2cpp_TypeInfo/* element_class */
	, IList_1_t37101_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37101_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37101_0_0_0/* byval_arg */
	, &IList_1_t37101_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37101_GenericClass/* generic_class */
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
extern TypeInfo IComparer_1_t8553_il2cpp_TypeInfo;

// System.SByte
#include "mscorlib_System_SByte.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.SByte>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.SByte>
extern Il2CppType SByte_t976_0_0_0;
extern Il2CppType SByte_t976_0_0_0;
static ParameterInfo IComparer_1_t8553_IComparer_1_Compare_m272857_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &SByte_t976_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &SByte_t976_0_0_0},
};
extern TypeInfo IComparer_1_t8553_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_SByte_t976_SByte_t976 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IComparer`1<System.SByte>::Compare(T,T)
MethodInfo IComparer_1_Compare_m272857_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t8553_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_SByte_t976_SByte_t976/* invoker_method */
	, IComparer_1_t8553_IComparer_1_Compare_m272857_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IComparer_1_t8553_MethodInfos[] =
{
	&IComparer_1_Compare_m272857_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t8553_0_0_0;
extern Il2CppType IComparer_1_t8553_1_0_0;
struct IComparer_1_t8553;
extern TypeInfo IComparer_1_t8553_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparer_1_t8553_GenericClass;
TypeInfo IComparer_1_t8553_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t8553_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t8553_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t8553_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t8553_0_0_0/* byval_arg */
	, &IComparer_1_t8553_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t8553_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t8554_il2cpp_TypeInfo;

// System.Int16
#include "mscorlib_System_Int16.h"


// System.Int32 System.Collections.Generic.IComparer`1<System.Int16>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Int16>
extern Il2CppType Int16_t1027_0_0_0;
extern Il2CppType Int16_t1027_0_0_0;
static ParameterInfo IComparer_1_t8554_IComparer_1_Compare_m272858_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Int16_t1027_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Int16_t1027_0_0_0},
};
extern TypeInfo IComparer_1_t8554_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int16_t1027_Int16_t1027 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IComparer`1<System.Int16>::Compare(T,T)
MethodInfo IComparer_1_Compare_m272858_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t8554_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int16_t1027_Int16_t1027/* invoker_method */
	, IComparer_1_t8554_IComparer_1_Compare_m272858_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IComparer_1_t8554_MethodInfos[] =
{
	&IComparer_1_Compare_m272858_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t8554_0_0_0;
extern Il2CppType IComparer_1_t8554_1_0_0;
struct IComparer_1_t8554;
extern TypeInfo IComparer_1_t8554_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparer_1_t8554_GenericClass;
TypeInfo IComparer_1_t8554_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t8554_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t8554_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t8554_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t8554_0_0_0/* byval_arg */
	, &IComparer_1_t8554_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t8554_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t29312_il2cpp_TypeInfo;

// System.Environment/SpecialFolder
#include "mscorlib_System_Environment_SpecialFolder.h"


// T System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>
extern MethodInfo IEnumerator_1_get_Current_m272859_MethodInfo;
static PropertyInfo IEnumerator_1_t29312____Current_PropertyInfo = 
{
	&IEnumerator_1_t29312_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272859_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29312_PropertyInfos[] =
{
	&IEnumerator_1_t29312____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29312_il2cpp_TypeInfo;
extern Il2CppType SpecialFolder_t8242_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t8242 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Environment/SpecialFolder>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272859_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29312_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t8242_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t8242/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29312_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272859_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29312_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29312_0_0_0;
extern Il2CppType IEnumerator_1_t29312_1_0_0;
struct IEnumerator_1_t29312;
extern TypeInfo IEnumerator_1_t29312_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29312_GenericClass;
TypeInfo IEnumerator_1_t29312_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29312_MethodInfos/* methods */
	, IEnumerator_1_t29312_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29312_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29312_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29312_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29312_0_0_0/* byval_arg */
	, &IEnumerator_1_t29312_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29312_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3061.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3061MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern TypeInfo SpecialFolder_t8242_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180455_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSpecialFolder_t8242_m223812_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Environment/SpecialFolder>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisSpecialFolder_t8242_m223812 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisSpecialFolder_t8242_m223812_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180450_MethodInfo;
 void InternalEnumerator_1__ctor_m180450 (InternalEnumerator_1_t24876 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180451_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180451 (InternalEnumerator_1_t24876 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452 (InternalEnumerator_1_t24876 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180455(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180455_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&SpecialFolder_t8242_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180453_MethodInfo;
 void InternalEnumerator_1_Dispose_m180453 (InternalEnumerator_1_t24876 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180454_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180454 (InternalEnumerator_1_t24876 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180455_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180455 (InternalEnumerator_1_t24876 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisSpecialFolder_t8242_m223812(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisSpecialFolder_t8242_m223812_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24876____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24876, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24876____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24876, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24876_FieldInfos[] =
{
	&InternalEnumerator_1_t24876____array_FieldInfo,
	&InternalEnumerator_1_t24876____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24876____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24876_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180455_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24876____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24876_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180455_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24876_PropertyInfos[] =
{
	&InternalEnumerator_1_t24876____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24876____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24876_InternalEnumerator_1__ctor_m180450_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180450_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180450/* method */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24876_InternalEnumerator_1__ctor_m180450_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180451_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180451/* method */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452/* method */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180453_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180453/* method */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180454_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180454/* method */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern Il2CppType SpecialFolder_t8242_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t8242 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Environment/SpecialFolder>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180455_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180455/* method */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t8242_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t8242/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24876_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180450_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180451_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452_MethodInfo,
	&InternalEnumerator_1_Dispose_m180453_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180454_MethodInfo,
	&InternalEnumerator_1_get_Current_m180455_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180454_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180451_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180453_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180455_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24876_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180452_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180454_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180451_MethodInfo,
	&InternalEnumerator_1_Dispose_m180453_MethodInfo,
	&InternalEnumerator_1_get_Current_m180455_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29312_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24876_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29312_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29312_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24876_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29312_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24876_0_0_0;
extern Il2CppType InternalEnumerator_1_t24876_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24876_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24876_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24876_MethodInfos/* methods */
	, InternalEnumerator_1_t24876_PropertyInfos/* properties */
	, InternalEnumerator_1_t24876_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24876_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24876_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24876_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24876_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24876_1_0_0/* this_arg */
	, InternalEnumerator_1_t24876_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24876_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24876)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>
extern MethodInfo ICollection_1_get_Count_m272860_MethodInfo;
static PropertyInfo ICollection_1_t37103____Count_PropertyInfo = 
{
	&ICollection_1_t37103_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272860_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272861_MethodInfo;
static PropertyInfo ICollection_1_t37103____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37103_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272861_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37103_PropertyInfos[] =
{
	&ICollection_1_t37103____Count_PropertyInfo,
	&ICollection_1_t37103____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_Count()
MethodInfo ICollection_1_get_Count_m272860_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272861_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SpecialFolder_t8242_0_0_0;
static ParameterInfo ICollection_1_t37103_ICollection_1_Add_m272862_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t8242_0_0_0},
};
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Add(T)
MethodInfo ICollection_1_Add_m272862_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37103_ICollection_1_Add_m272862_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Clear()
MethodInfo ICollection_1_Clear_m272863_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SpecialFolder_t8242_0_0_0;
static ParameterInfo ICollection_1_t37103_ICollection_1_Contains_m272864_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t8242_0_0_0},
};
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Contains(T)
MethodInfo ICollection_1_Contains_m272864_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37103_ICollection_1_Contains_m272864_ParameterInfos/* parameters */
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
extern Il2CppType SpecialFolderU5BU5D_t25376_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37103_ICollection_1_CopyTo_m272865_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolderU5BU5D_t25376_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272865_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37103_ICollection_1_CopyTo_m272865_ParameterInfos/* parameters */
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
extern Il2CppType SpecialFolder_t8242_0_0_0;
static ParameterInfo ICollection_1_t37103_ICollection_1_Remove_m272866_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t8242_0_0_0},
};
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Environment/SpecialFolder>::Remove(T)
MethodInfo ICollection_1_Remove_m272866_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37103_ICollection_1_Remove_m272866_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37103_MethodInfos[] =
{
	&ICollection_1_get_Count_m272860_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272861_MethodInfo,
	&ICollection_1_Add_m272862_MethodInfo,
	&ICollection_1_Clear_m272863_MethodInfo,
	&ICollection_1_Contains_m272864_MethodInfo,
	&ICollection_1_CopyTo_m272865_MethodInfo,
	&ICollection_1_Remove_m272866_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37105_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37103_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37105_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37103_0_0_0;
extern Il2CppType ICollection_1_t37103_1_0_0;
struct ICollection_1_t37103;
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37103_GenericClass;
TypeInfo ICollection_1_t37103_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37103_MethodInfos/* methods */
	, ICollection_1_t37103_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37103_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37103_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37103_0_0_0/* byval_arg */
	, &ICollection_1_t37103_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37103_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37105_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>
extern TypeInfo IEnumerable_1_t37105_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29312_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Environment/SpecialFolder>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272867_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37105_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29312_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37105_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272867_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37105_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37105_0_0_0;
extern Il2CppType IEnumerable_1_t37105_1_0_0;
struct IEnumerable_1_t37105;
extern TypeInfo IEnumerable_1_t37105_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37105_GenericClass;
TypeInfo IEnumerable_1_t37105_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37105_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37105_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37105_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37105_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37105_0_0_0/* byval_arg */
	, &IEnumerable_1_t37105_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37105_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37104_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Environment/SpecialFolder>
extern MethodInfo IList_1_get_Item_m272868_MethodInfo;
extern MethodInfo IList_1_set_Item_m272869_MethodInfo;
static PropertyInfo IList_1_t37104____Item_PropertyInfo = 
{
	&IList_1_t37104_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272868_MethodInfo/* get */
	, &IList_1_set_Item_m272869_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37104_PropertyInfos[] =
{
	&IList_1_t37104____Item_PropertyInfo,
	NULL
};
extern Il2CppType SpecialFolder_t8242_0_0_0;
static ParameterInfo IList_1_t37104_IList_1_IndexOf_m272870_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t8242_0_0_0},
};
extern TypeInfo IList_1_t37104_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272870_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37104_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37104_IList_1_IndexOf_m272870_ParameterInfos/* parameters */
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
extern Il2CppType SpecialFolder_t8242_0_0_0;
static ParameterInfo IList_1_t37104_IList_1_Insert_m272871_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t8242_0_0_0},
};
extern TypeInfo IList_1_t37104_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272871_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37104_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37104_IList_1_Insert_m272871_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37104_IList_1_RemoveAt_m272872_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37104_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272872_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37104_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37104_IList_1_RemoveAt_m272872_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37104_IList_1_get_Item_m272868_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37104_il2cpp_TypeInfo;
extern Il2CppType SpecialFolder_t8242_0_0_0;
extern void* RuntimeInvoker_SpecialFolder_t8242_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272868_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37104_il2cpp_TypeInfo/* declaring_type */
	, &SpecialFolder_t8242_0_0_0/* return_type */
	, RuntimeInvoker_SpecialFolder_t8242_Int32_t73/* invoker_method */
	, IList_1_t37104_IList_1_get_Item_m272868_ParameterInfos/* parameters */
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
extern Il2CppType SpecialFolder_t8242_0_0_0;
static ParameterInfo IList_1_t37104_IList_1_set_Item_m272869_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SpecialFolder_t8242_0_0_0},
};
extern TypeInfo IList_1_t37104_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Environment/SpecialFolder>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272869_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37104_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37104_IList_1_set_Item_m272869_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37104_MethodInfos[] =
{
	&IList_1_IndexOf_m272870_MethodInfo,
	&IList_1_Insert_m272871_MethodInfo,
	&IList_1_RemoveAt_m272872_MethodInfo,
	&IList_1_get_Item_m272868_MethodInfo,
	&IList_1_set_Item_m272869_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37103_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37105_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37104_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37103_il2cpp_TypeInfo,
	&IEnumerable_1_t37105_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37104_0_0_0;
extern Il2CppType IList_1_t37104_1_0_0;
struct IList_1_t37104;
extern TypeInfo IList_1_t37104_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37104_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37104_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37104_MethodInfos/* methods */
	, IList_1_t37104_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37104_il2cpp_TypeInfo/* element_class */
	, IList_1_t37104_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37104_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37104_0_0_0/* byval_arg */
	, &IList_1_t37104_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37104_GenericClass/* generic_class */
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
extern TypeInfo IComparable_1_t8559_il2cpp_TypeInfo;

// System.Guid
#include "mscorlib_System_Guid.h"


// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
// Metadata Definition System.IComparable`1<System.Guid>
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo IComparable_1_t8559_IComparable_1_CompareTo_m272873_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo IComparable_1_t8559_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.IComparable`1<System.Guid>::CompareTo(T)
MethodInfo IComparable_1_CompareTo_m272873_MethodInfo = 
{
	"CompareTo"/* name */
	, NULL/* method */
	, &IComparable_1_t8559_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777/* invoker_method */
	, IComparable_1_t8559_IComparable_1_CompareTo_m272873_ParameterInfos/* parameters */
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
static MethodInfo* IComparable_1_t8559_MethodInfos[] =
{
	&IComparable_1_CompareTo_m272873_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparable_1_t8559_0_0_0;
extern Il2CppType IComparable_1_t8559_1_0_0;
struct IComparable_1_t8559;
extern TypeInfo IComparable_1_t8559_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparable_1_t8559_GenericClass;
TypeInfo IComparable_1_t8559_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparable`1"/* name */
	, "System"/* namespaze */
	, IComparable_1_t8559_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparable_1_t8559_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparable_1_t8559_il2cpp_TypeInfo/* cast_class */
	, &IComparable_1_t8559_0_0_0/* byval_arg */
	, &IComparable_1_t8559_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparable_1_t8559_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEquatable_1_t8560_il2cpp_TypeInfo;



// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
// Metadata Definition System.IEquatable`1<System.Guid>
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo IEquatable_1_t8560_IEquatable_1_Equals_m272874_ParameterInfos[] = 
{
	{"other", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo IEquatable_1_t8560_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.IEquatable`1<System.Guid>::Equals(T)
MethodInfo IEquatable_1_Equals_m272874_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEquatable_1_t8560_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Guid_t6777/* invoker_method */
	, IEquatable_1_t8560_IEquatable_1_Equals_m272874_ParameterInfos/* parameters */
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
static MethodInfo* IEquatable_1_t8560_MethodInfos[] =
{
	&IEquatable_1_Equals_m272874_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEquatable_1_t8560_0_0_0;
extern Il2CppType IEquatable_1_t8560_1_0_0;
struct IEquatable_1_t8560;
extern TypeInfo IEquatable_1_t8560_il2cpp_TypeInfo;
extern Il2CppGenericClass IEquatable_1_t8560_GenericClass;
TypeInfo IEquatable_1_t8560_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEquatable`1"/* name */
	, "System"/* namespaze */
	, IEquatable_1_t8560_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEquatable_1_t8560_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEquatable_1_t8560_il2cpp_TypeInfo/* cast_class */
	, &IEquatable_1_t8560_0_0_0/* byval_arg */
	, &IEquatable_1_t8560_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEquatable_1_t8560_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericComparer_1_t8557_il2cpp_TypeInfo;
// System.Collections.Generic.GenericComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericComparer_1_gen_1MethodDeclarations.h"

extern TypeInfo Guid_t6777_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8559_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_377MethodDeclarations.h"
extern MethodInfo Comparer_1__ctor_m180457_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m272873_MethodInfo;


// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericComparer_1__ctor_m57791_MethodInfo;
 void GenericComparer_1__ctor_m57791 (GenericComparer_1_t8557 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m180457(__this, /*hidden argument*/&Comparer_1__ctor_m180457_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
extern MethodInfo GenericComparer_1_Compare_m180456_MethodInfo;
 int32_t GenericComparer_1_Compare_m180456 (GenericComparer_1_t8557 * __this, Guid_t6777  ___x, Guid_t6777  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t6777  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t6777  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t6777  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___x))));
		int32_t L_6 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t6777  >::Invoke(&IComparable_1_CompareTo_m272873_MethodInfo, Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.GenericComparer`1<System.Guid>
extern TypeInfo GenericComparer_1_t8557_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.GenericComparer`1<System.Guid>::.ctor()
MethodInfo GenericComparer_1__ctor_m57791_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericComparer_1__ctor_m57791/* method */
	, &GenericComparer_1_t8557_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo GenericComparer_1_t8557_GenericComparer_1_Compare_m180456_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo GenericComparer_1_t8557_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.GenericComparer`1<System.Guid>::Compare(T,T)
MethodInfo GenericComparer_1_Compare_m180456_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&GenericComparer_1_Compare_m180456/* method */
	, &GenericComparer_1_t8557_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777/* invoker_method */
	, GenericComparer_1_t8557_GenericComparer_1_Compare_m180456_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GenericComparer_1_t8557_MethodInfos[] =
{
	&GenericComparer_1__ctor_m57791_MethodInfo,
	&GenericComparer_1_Compare_m180456_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GenericComparer_1_Compare_m180456_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo;
extern MethodInfo GenericComparer_1_Compare_m180456_MethodInfo;
static MethodInfo* GenericComparer_1_t8557_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GenericComparer_1_Compare_m180456_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo,
	&GenericComparer_1_Compare_m180456_MethodInfo,
};
extern TypeInfo IComparer_1_t38962_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericComparer_1_t8557_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38962_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericComparer_1_t8557_0_0_0;
extern Il2CppType GenericComparer_1_t8557_1_0_0;
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
struct GenericComparer_1_t8557;
extern TypeInfo GenericComparer_1_t8557_il2cpp_TypeInfo;
extern Il2CppGenericClass GenericComparer_1_t8557_GenericClass;
TypeInfo GenericComparer_1_t8557_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericComparer_1_t8557_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericComparer_1_t8557_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericComparer_1_t8557_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericComparer_1_t8557_il2cpp_TypeInfo/* cast_class */
	, &GenericComparer_1_t8557_0_0_0/* byval_arg */
	, &GenericComparer_1_t8557_1_0_0/* this_arg */
	, GenericComparer_1_t8557_InterfacesOffsets/* interface_offsets */
	, &GenericComparer_1_t8557_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericComparer_1_t8557)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.Comparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_gen_377.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;

// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_378.h"
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8559_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Guid_t6777_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo GenericComparer_1_t7840_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t24878_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
// System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_Comparer_1_DefaultCompar_378MethodDeclarations.h"
extern Il2CppType IComparable_1_t8559_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType GenericComparer_1_t7840_0_0_0;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo Type_MakeGenericType_m52718_MethodInfo;
extern MethodInfo Activator_CreateInstance_m38822_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m180461_MethodInfo;
extern MethodInfo Comparer_1_Compare_m272875_MethodInfo;
extern MethodInfo ArgumentException__ctor_m49269_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
extern MethodInfo Comparer_1__ctor_m180457_MethodInfo;
 void Comparer_1__ctor_m180457 (Comparer_1_t24877 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
extern MethodInfo Comparer_1__cctor_m180458_MethodInfo;
 void Comparer_1__cctor_m180458 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t24878 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t24878 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t24878_il2cpp_TypeInfo));
	DefaultComparer__ctor_m180461(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m180461_MethodInfo);
	((Comparer_1_t24877_StaticFields*)InitializedTypeInfo(&Comparer_1_t24877_il2cpp_TypeInfo)->static_fields)->____default = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo;
 int32_t Comparer_1_System_Collections_IComparer_Compare_m180459 (Comparer_1_t24877 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		if (___x)
		{
			goto IL_000b;
		}
	}
	{
		if (___y)
		{
			goto IL_0009;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_000a;
	}

IL_0009:
	{
		G_B4_0 = (-1);
	}

IL_000a:
	{
		return G_B4_0;
	}

IL_000b:
	{
		if (___y)
		{
			goto IL_0010;
		}
	}
	{
		return 1;
	}

IL_0010:
	{
		if (!((Object_t *)IsInst(___x, InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		if (!((Object_t *)IsInst(___y, InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo))))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker2< int32_t, Guid_t6777 , Guid_t6777  >::Invoke(&Comparer_1_Compare_m272875_MethodInfo, __this, ((*(Guid_t6777 *)((Guid_t6777 *)UnBox (___x, InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo))))), ((*(Guid_t6777 *)((Guid_t6777 *)UnBox (___y, InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo))))));
		return L_0;
	}

IL_0033:
	{
		ArgumentException_t5466 * L_1 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m49269(L_1, /*hidden argument*/&ArgumentException__ctor_m49269_MethodInfo);
		il2cpp_codegen_raise_exception (L_1);
	}
}
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
extern MethodInfo Comparer_1_get_Default_m180460_MethodInfo;
 Comparer_1_t24877 * Comparer_1_get_Default_m180460 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&Comparer_1_t24877_il2cpp_TypeInfo));
		return (((Comparer_1_t24877_StaticFields*)InitializedTypeInfo(&Comparer_1_t24877_il2cpp_TypeInfo)->static_fields)->____default);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1<System.Guid>
extern Il2CppType Comparer_1_t24877_0_0_49;
FieldInfo Comparer_1_t24877_____default_FieldInfo = 
{
	"_default"/* name */
	, &Comparer_1_t24877_0_0_49/* type */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* parent */
	, offsetof(Comparer_1_t24877_StaticFields, ____default)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* Comparer_1_t24877_FieldInfos[] =
{
	&Comparer_1_t24877_____default_FieldInfo,
	NULL
};
extern MethodInfo Comparer_1_get_Default_m180460_MethodInfo;
static PropertyInfo Comparer_1_t24877____Default_PropertyInfo = 
{
	&Comparer_1_t24877_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &Comparer_1_get_Default_m180460_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* Comparer_1_t24877_PropertyInfos[] =
{
	&Comparer_1_t24877____Default_PropertyInfo,
	NULL
};
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.ctor()
MethodInfo Comparer_1__ctor_m180457_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&Comparer_1__ctor_m180457/* method */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1<System.Guid>::.cctor()
MethodInfo Comparer_1__cctor_m180458_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&Comparer_1__cctor_m180458/* method */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo Comparer_1_t24877_Comparer_1_System_Collections_IComparer_Compare_m180459_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::System.Collections.IComparer.Compare(System.Object,System.Object)
MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo = 
{
	"System.Collections.IComparer.Compare"/* name */
	, (methodPointerType)&Comparer_1_System_Collections_IComparer_Compare_m180459/* method */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t_Object_t/* invoker_method */
	, Comparer_1_t24877_Comparer_1_System_Collections_IComparer_Compare_m180459_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 5/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo Comparer_1_t24877_Comparer_1_Compare_m272875_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1<System.Guid>::Compare(T,T)
MethodInfo Comparer_1_Compare_m272875_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777/* invoker_method */
	, Comparer_1_t24877_Comparer_1_Compare_m272875_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
extern Il2CppType Comparer_1_t24877_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.Comparer`1<T> System.Collections.Generic.Comparer`1<System.Guid>::get_Default()
MethodInfo Comparer_1_get_Default_m180460_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&Comparer_1_get_Default_m180460/* method */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* declaring_type */
	, &Comparer_1_t24877_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* Comparer_1_t24877_MethodInfos[] =
{
	&Comparer_1__ctor_m180457_MethodInfo,
	&Comparer_1__cctor_m180458_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo,
	&Comparer_1_Compare_m272875_MethodInfo,
	&Comparer_1_get_Default_m180460_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo Comparer_1_Compare_m272875_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo;
static MethodInfo* Comparer_1_t24877_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&Comparer_1_Compare_m272875_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo,
	NULL,
};
extern TypeInfo IComparer_1_t38962_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static TypeInfo* Comparer_1_t24877_InterfacesTypeInfos[] = 
{
	&IComparer_1_t38962_il2cpp_TypeInfo,
	&IComparer_t7107_il2cpp_TypeInfo,
};
extern TypeInfo IComparer_1_t38962_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair Comparer_1_t24877_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38962_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType Comparer_1_t24877_0_0_0;
extern Il2CppType Comparer_1_t24877_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct Comparer_1_t24877;
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
extern Il2CppGenericClass Comparer_1_t24877_GenericClass;
TypeInfo Comparer_1_t24877_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "Comparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, Comparer_1_t24877_MethodInfos/* methods */
	, Comparer_1_t24877_PropertyInfos/* properties */
	, Comparer_1_t24877_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* element_class */
	, Comparer_1_t24877_InterfacesTypeInfos/* implemented_interfaces */
	, Comparer_1_t24877_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* cast_class */
	, &Comparer_1_t24877_0_0_0/* byval_arg */
	, &Comparer_1_t24877_1_0_0/* this_arg */
	, Comparer_1_t24877_InterfacesOffsets/* interface_offsets */
	, &Comparer_1_t24877_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (Comparer_1_t24877)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(Comparer_1_t24877_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 5/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IComparer_1_t38962_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
// Metadata Definition System.Collections.Generic.IComparer`1<System.Guid>
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo IComparer_1_t38962_IComparer_1_Compare_m272876_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo IComparer_1_t38962_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IComparer`1<System.Guid>::Compare(T,T)
MethodInfo IComparer_1_Compare_m272876_MethodInfo = 
{
	"Compare"/* name */
	, NULL/* method */
	, &IComparer_1_t38962_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777/* invoker_method */
	, IComparer_1_t38962_IComparer_1_Compare_m272876_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IComparer_1_t38962_MethodInfos[] =
{
	&IComparer_1_Compare_m272876_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IComparer_1_t38962_0_0_0;
extern Il2CppType IComparer_1_t38962_1_0_0;
struct IComparer_1_t38962;
extern TypeInfo IComparer_1_t38962_il2cpp_TypeInfo;
extern Il2CppGenericClass IComparer_1_t38962_GenericClass;
TypeInfo IComparer_1_t38962_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IComparer_1_t38962_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IComparer_1_t38962_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IComparer_1_t38962_il2cpp_TypeInfo/* cast_class */
	, &IComparer_1_t38962_0_0_0/* byval_arg */
	, &IComparer_1_t38962_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IComparer_1_t38962_GenericClass/* generic_class */
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
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t24878_il2cpp_TypeInfo;

extern TypeInfo Guid_t6777_il2cpp_TypeInfo;
extern TypeInfo IComparable_1_t8559_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IComparable_t948_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern MethodInfo Comparer_1__ctor_m180457_MethodInfo;
extern MethodInfo IComparable_1_CompareTo_m272873_MethodInfo;
extern MethodInfo IComparable_CompareTo_m57234_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;


// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
extern MethodInfo DefaultComparer__ctor_m180461_MethodInfo;
 void DefaultComparer__ctor_m180461 (DefaultComparer_t24878 * __this, MethodInfo* method){
	{
		Comparer_1__ctor_m180457(__this, /*hidden argument*/&Comparer_1__ctor_m180457_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
extern MethodInfo DefaultComparer_Compare_m180462_MethodInfo;
 int32_t DefaultComparer_Compare_m180462 (DefaultComparer_t24878 * __this, Guid_t6777  ___x, Guid_t6777  ___y, MethodInfo* method){
	int32_t G_B4_0 = 0;
	{
		Guid_t6777  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0015;
		}
	}
	{
		Guid_t6777  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_2);
		if (L_3)
		{
			goto IL_0013;
		}
	}
	{
		G_B4_0 = 0;
		goto IL_0014;
	}

IL_0013:
	{
		G_B4_0 = (-1);
	}

IL_0014:
	{
		return G_B4_0;
	}

IL_0015:
	{
		Guid_t6777  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_4);
		if (L_5)
		{
			goto IL_001f;
		}
	}
	{
		return 1;
	}

IL_001f:
	{
		Guid_t6777  L_6 = ___x;
		Object_t * L_7 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_6);
		if (!((Object_t*)IsInst(L_7, InitializedTypeInfo(&IComparable_1_t8559_il2cpp_TypeInfo))))
		{
			goto IL_003e;
		}
	}
	{
		Guid_t6777  L_8 = ___x;
		Object_t * L_9 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_8);
		NullCheck(((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8559_il2cpp_TypeInfo))));
		int32_t L_10 = (int32_t)InterfaceFuncInvoker1< int32_t, Guid_t6777  >::Invoke(&IComparable_1_CompareTo_m272873_MethodInfo, ((Object_t*)Castclass(L_9, InitializedTypeInfo(&IComparable_1_t8559_il2cpp_TypeInfo))), ___y);
		return L_10;
	}

IL_003e:
	{
		Guid_t6777  L_11 = ___x;
		Object_t * L_12 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_11);
		if (!((Object_t *)IsInst(L_12, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))))
		{
			goto IL_0062;
		}
	}
	{
		Guid_t6777  L_13 = ___x;
		Object_t * L_14 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_13);
		Guid_t6777  L_15 = ___y;
		Object_t * L_16 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_15);
		NullCheck(((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))));
		int32_t L_17 = (int32_t)InterfaceFuncInvoker1< int32_t, Object_t * >::Invoke(&IComparable_CompareTo_m57234_MethodInfo, ((Object_t *)Castclass(L_14, InitializedTypeInfo(&IComparable_t948_il2cpp_TypeInfo))), L_16);
		return L_17;
	}

IL_0062:
	{
		ArgumentException_t5466 * L_18 = (ArgumentException_t5466 *)il2cpp_codegen_object_new (InitializedTypeInfo(&ArgumentException_t5466_il2cpp_TypeInfo));
		ArgumentException__ctor_m38716(L_18, (String_t*) &_stringLiteral6740, /*hidden argument*/&ArgumentException__ctor_m38716_MethodInfo);
		il2cpp_codegen_raise_exception (L_18);
	}
}
// Metadata Definition System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>
extern TypeInfo DefaultComparer_t24878_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m180461_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m180461/* method */
	, &DefaultComparer_t24878_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo DefaultComparer_t24878_DefaultComparer_Compare_m180462_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo DefaultComparer_t24878_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.Comparer`1/DefaultComparer<System.Guid>::Compare(T,T)
MethodInfo DefaultComparer_Compare_m180462_MethodInfo = 
{
	"Compare"/* name */
	, (methodPointerType)&DefaultComparer_Compare_m180462/* method */
	, &DefaultComparer_t24878_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777_Guid_t6777/* invoker_method */
	, DefaultComparer_t24878_DefaultComparer_Compare_m180462_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DefaultComparer_t24878_MethodInfos[] =
{
	&DefaultComparer__ctor_m180461_MethodInfo,
	&DefaultComparer_Compare_m180462_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m180462_MethodInfo;
extern MethodInfo Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo;
extern MethodInfo DefaultComparer_Compare_m180462_MethodInfo;
static MethodInfo* DefaultComparer_t24878_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Compare_m180462_MethodInfo,
	&Comparer_1_System_Collections_IComparer_Compare_m180459_MethodInfo,
	&DefaultComparer_Compare_m180462_MethodInfo,
};
extern TypeInfo IComparer_1_t38962_il2cpp_TypeInfo;
extern TypeInfo IComparer_t7107_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24878_InterfacesOffsets[] = 
{
	{ &IComparer_1_t38962_il2cpp_TypeInfo, 4},
	{ &IComparer_t7107_il2cpp_TypeInfo, 5},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24878_0_0_0;
extern Il2CppType DefaultComparer_t24878_1_0_0;
extern TypeInfo Comparer_1_t24877_il2cpp_TypeInfo;
struct DefaultComparer_t24878;
extern TypeInfo DefaultComparer_t24878_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24878_GenericClass;
extern TypeInfo Comparer_1_t7839_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24878_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24878_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &Comparer_1_t24877_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Comparer_1_t7839_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24878_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24878_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24878_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24878_0_0_0/* byval_arg */
	, &DefaultComparer_t24878_1_0_0/* this_arg */
	, DefaultComparer_t24878_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24878_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24878)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1048835/* flags */
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
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 7/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo GenericEqualityComparer_1_t8558_il2cpp_TypeInfo;
// System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_GenericEqualityComparer__2MethodDeclarations.h"

extern TypeInfo Guid_t6777_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t8560_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_652MethodDeclarations.h"
extern MethodInfo EqualityComparer_1__ctor_m180465_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo IEquatable_1_Equals_m272874_MethodInfo;


// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
extern MethodInfo GenericEqualityComparer_1__ctor_m57792_MethodInfo;
 void GenericEqualityComparer_1__ctor_m57792 (GenericEqualityComparer_1_t8558 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m180465(__this, /*hidden argument*/&EqualityComparer_1__ctor_m180465_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180463_MethodInfo;
 int32_t GenericEqualityComparer_1_GetHashCode_m180463 (GenericEqualityComparer_1_t8558 * __this, Guid_t6777  ___obj, MethodInfo* method){
	{
		Guid_t6777  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m4064_MethodInfo, Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
extern MethodInfo GenericEqualityComparer_1_Equals_m180464_MethodInfo;
 bool GenericEqualityComparer_1_Equals_m180464 (GenericEqualityComparer_1_t8558 * __this, Guid_t6777  ___x, Guid_t6777  ___y, MethodInfo* method){
	{
		Guid_t6777  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t6777  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___x))));
		bool L_4 = (bool)InterfaceFuncInvoker1< bool, Guid_t6777  >::Invoke(&IEquatable_1_Equals_m272874_MethodInfo, Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___x))), ___y);
		return L_4;
	}
}
// Metadata Definition System.Collections.Generic.GenericEqualityComparer`1<System.Guid>
extern TypeInfo GenericEqualityComparer_1_t8558_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::.ctor()
MethodInfo GenericEqualityComparer_1__ctor_m57792_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&GenericEqualityComparer_1__ctor_m57792/* method */
	, &GenericEqualityComparer_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t8558_GenericEqualityComparer_1_GetHashCode_m180463_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo GenericEqualityComparer_1_t8558_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo GenericEqualityComparer_1_GetHashCode_m180463_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_GetHashCode_m180463/* method */
	, &GenericEqualityComparer_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777/* invoker_method */
	, GenericEqualityComparer_1_t8558_GenericEqualityComparer_1_GetHashCode_m180463_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo GenericEqualityComparer_1_t8558_GenericEqualityComparer_1_Equals_m180464_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo GenericEqualityComparer_1_t8558_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.GenericEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo GenericEqualityComparer_1_Equals_m180464_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&GenericEqualityComparer_1_Equals_m180464/* method */
	, &GenericEqualityComparer_1_t8558_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777/* invoker_method */
	, GenericEqualityComparer_1_t8558_GenericEqualityComparer_1_Equals_m180464_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* GenericEqualityComparer_1_t8558_MethodInfos[] =
{
	&GenericEqualityComparer_1__ctor_m57792_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180463_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180464_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_Equals_m180464_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180463_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_GetHashCode_m180463_MethodInfo;
extern MethodInfo GenericEqualityComparer_1_Equals_m180464_MethodInfo;
static MethodInfo* GenericEqualityComparer_1_t8558_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180464_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180463_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo,
	&GenericEqualityComparer_1_GetHashCode_m180463_MethodInfo,
	&GenericEqualityComparer_1_Equals_m180464_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair GenericEqualityComparer_1_t8558_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38963_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType GenericEqualityComparer_1_t8558_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t8558_1_0_0;
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
struct GenericEqualityComparer_1_t8558;
extern TypeInfo GenericEqualityComparer_1_t8558_il2cpp_TypeInfo;
extern Il2CppGenericClass GenericEqualityComparer_1_t8558_GenericClass;
TypeInfo GenericEqualityComparer_1_t8558_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "GenericEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, GenericEqualityComparer_1_t8558_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &GenericEqualityComparer_1_t8558_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, GenericEqualityComparer_1_t8558_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &GenericEqualityComparer_1_t8558_il2cpp_TypeInfo/* cast_class */
	, &GenericEqualityComparer_1_t8558_0_0_0/* byval_arg */
	, &GenericEqualityComparer_1_t8558_1_0_0/* this_arg */
	, GenericEqualityComparer_1_t8558_InterfacesOffsets/* interface_offsets */
	, &GenericEqualityComparer_1_t8558_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (GenericEqualityComparer_1_t8558)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057024/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
// System.Collections.Generic.EqualityComparer`1<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_gen_652.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;

// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_653.h"
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern TypeInfo IEquatable_1_t8560_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo Guid_t6777_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern TypeInfo GenericEqualityComparer_1_t7852_il2cpp_TypeInfo;
extern TypeInfo TypeU5BU5D_t1042_il2cpp_TypeInfo;
extern TypeInfo DefaultComparer_t24880_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
// System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
#include "mscorlib_System_Collections_Generic_EqualityComparer_1_Defau_653MethodDeclarations.h"
extern Il2CppType IEquatable_1_t8560_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType GenericEqualityComparer_1_t7852_0_0_0;
extern MethodInfo Object__ctor_m4074_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Type_IsAssignableFrom_m38812_MethodInfo;
extern MethodInfo Type_MakeGenericType_m52718_MethodInfo;
extern MethodInfo Activator_CreateInstance_m38822_MethodInfo;
extern MethodInfo DefaultComparer__ctor_m180470_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m272877_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m272878_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
extern MethodInfo EqualityComparer_1__ctor_m180465_MethodInfo;
 void EqualityComparer_1__ctor_m180465 (EqualityComparer_1_t24879 * __this, MethodInfo* method){
	{
		Object__ctor_m4074(__this, /*hidden argument*/&Object__ctor_m4074_MethodInfo);
		return;
	}
}
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
extern MethodInfo EqualityComparer_1__cctor_m180466_MethodInfo;
 void EqualityComparer_1__cctor_m180466 (Object_t * __this/* static, unused */, MethodInfo* method){
	DefaultComparer_t24880 * L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer = (DefaultComparer_t24880 *)il2cpp_codegen_object_new(InitializedTypeInfo(&DefaultComparer_t24880_il2cpp_TypeInfo));
	DefaultComparer__ctor_m180470(L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer, &DefaultComparer__ctor_m180470_MethodInfo);
	((EqualityComparer_1_t24879_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t24879_il2cpp_TypeInfo)->static_fields)->____default = L_2417_System_Collections_Generic_EqualityComparer_1_DefaultComparer;
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo;
 int32_t EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467 (EqualityComparer_1_t24879 * __this, Object_t * ___obj, MethodInfo* method){
	{
		int32_t L_0 = (int32_t)VirtFuncInvoker1< int32_t, Guid_t6777  >::Invoke(&EqualityComparer_1_GetHashCode_m272877_MethodInfo, __this, ((*(Guid_t6777 *)((Guid_t6777 *)UnBox (___obj, InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo;
 bool EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468 (EqualityComparer_1_t24879 * __this, Object_t * ___x, Object_t * ___y, MethodInfo* method){
	{
		bool L_0 = (bool)VirtFuncInvoker2< bool, Guid_t6777 , Guid_t6777  >::Invoke(&EqualityComparer_1_Equals_m272878_MethodInfo, __this, ((*(Guid_t6777 *)((Guid_t6777 *)UnBox (___x, InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo))))), ((*(Guid_t6777 *)((Guid_t6777 *)UnBox (___y, InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo))))));
		return L_0;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
extern MethodInfo EqualityComparer_1_get_Default_m180469_MethodInfo;
 EqualityComparer_1_t24879 * EqualityComparer_1_get_Default_m180469 (Object_t * __this/* static, unused */, MethodInfo* method){
	{
		IL2CPP_RUNTIME_CLASS_INIT(InitializedTypeInfo(&EqualityComparer_1_t24879_il2cpp_TypeInfo));
		return (((EqualityComparer_1_t24879_StaticFields*)InitializedTypeInfo(&EqualityComparer_1_t24879_il2cpp_TypeInfo)->static_fields)->____default);
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1<System.Guid>
extern Il2CppType EqualityComparer_1_t24879_0_0_49;
FieldInfo EqualityComparer_1_t24879_____default_FieldInfo = 
{
	"_default"/* name */
	, &EqualityComparer_1_t24879_0_0_49/* type */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* parent */
	, offsetof(EqualityComparer_1_t24879_StaticFields, ____default)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* EqualityComparer_1_t24879_FieldInfos[] =
{
	&EqualityComparer_1_t24879_____default_FieldInfo,
	NULL
};
extern MethodInfo EqualityComparer_1_get_Default_m180469_MethodInfo;
static PropertyInfo EqualityComparer_1_t24879____Default_PropertyInfo = 
{
	&EqualityComparer_1_t24879_il2cpp_TypeInfo/* parent */
	, "Default"/* name */
	, &EqualityComparer_1_get_Default_m180469_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* EqualityComparer_1_t24879_PropertyInfos[] =
{
	&EqualityComparer_1_t24879____Default_PropertyInfo,
	NULL
};
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.ctor()
MethodInfo EqualityComparer_1__ctor_m180465_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&EqualityComparer_1__ctor_m180465/* method */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6276/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1<System.Guid>::.cctor()
MethodInfo EqualityComparer_1__cctor_m180466_MethodInfo = 
{
	".cctor"/* name */
	, (methodPointerType)&EqualityComparer_1__cctor_m180466/* method */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6161/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t24879_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.GetHashCode(System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo = 
{
	"System.Collections.IEqualityComparer.GetHashCode"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467/* method */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, EqualityComparer_1_t24879_EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 7/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo EqualityComparer_1_t24879_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::System.Collections.IEqualityComparer.Equals(System.Object,System.Object)
MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo = 
{
	"System.Collections.IEqualityComparer.Equals"/* name */
	, (methodPointerType)&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468/* method */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, EqualityComparer_1_t24879_EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 481/* flags */
	, 0/* iflags */
	, 6/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo EqualityComparer_1_t24879_EqualityComparer_1_GetHashCode_m272877_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo EqualityComparer_1_GetHashCode_m272877_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777/* invoker_method */
	, EqualityComparer_1_t24879_EqualityComparer_1_GetHashCode_m272877_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo EqualityComparer_1_t24879_EqualityComparer_1_Equals_m272878_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo EqualityComparer_1_Equals_m272878_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777/* invoker_method */
	, EqualityComparer_1_t24879_EqualityComparer_1_Equals_m272878_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppType EqualityComparer_1_t24879_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.EqualityComparer`1<T> System.Collections.Generic.EqualityComparer`1<System.Guid>::get_Default()
MethodInfo EqualityComparer_1_get_Default_m180469_MethodInfo = 
{
	"get_Default"/* name */
	, (methodPointerType)&EqualityComparer_1_get_Default_m180469/* method */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* declaring_type */
	, &EqualityComparer_1_t24879_0_0_0/* return_type */
	, RuntimeInvoker_Object_t/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 2198/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* EqualityComparer_1_t24879_MethodInfos[] =
{
	&EqualityComparer_1__ctor_m180465_MethodInfo,
	&EqualityComparer_1__cctor_m180466_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo,
	&EqualityComparer_1_GetHashCode_m272877_MethodInfo,
	&EqualityComparer_1_Equals_m272878_MethodInfo,
	&EqualityComparer_1_get_Default_m180469_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo EqualityComparer_1_Equals_m272878_MethodInfo;
extern MethodInfo EqualityComparer_1_GetHashCode_m272877_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo;
static MethodInfo* EqualityComparer_1_t24879_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&EqualityComparer_1_Equals_m272878_MethodInfo,
	&EqualityComparer_1_GetHashCode_m272877_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo,
	NULL,
	NULL,
};
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static TypeInfo* EqualityComparer_1_t24879_InterfacesTypeInfos[] = 
{
	&IEqualityComparer_1_t38963_il2cpp_TypeInfo,
	&IEqualityComparer_t7113_il2cpp_TypeInfo,
};
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair EqualityComparer_1_t24879_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38963_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType EqualityComparer_1_t24879_0_0_0;
extern Il2CppType EqualityComparer_1_t24879_1_0_0;
extern TypeInfo Object_t_il2cpp_TypeInfo;
struct EqualityComparer_1_t24879;
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
extern Il2CppGenericClass EqualityComparer_1_t24879_GenericClass;
TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "EqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, EqualityComparer_1_t24879_MethodInfos/* methods */
	, EqualityComparer_1_t24879_PropertyInfos/* properties */
	, EqualityComparer_1_t24879_FieldInfos/* fields */
	, NULL/* events */
	, &Object_t_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* element_class */
	, EqualityComparer_1_t24879_InterfacesTypeInfos/* implemented_interfaces */
	, EqualityComparer_1_t24879_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* cast_class */
	, &EqualityComparer_1_t24879_0_0_0/* byval_arg */
	, &EqualityComparer_1_t24879_1_0_0/* this_arg */
	, EqualityComparer_1_t24879_InterfacesOffsets/* interface_offsets */
	, &EqualityComparer_1_t24879_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (EqualityComparer_1_t24879)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, sizeof(EqualityComparer_1_t24879_StaticFields)/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 8321/* flags */
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
	, true/* has_cctor */
	, false/* is_blittable */
	, false/* is_pinnable */
	, 7/* method_count */
	, 1/* property_count */
	, 1/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 2/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;



// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
// Metadata Definition System.Collections.Generic.IEqualityComparer`1<System.Guid>
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo IEqualityComparer_1_t38963_IEqualityComparer_1_Equals_m272879_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.IEqualityComparer`1<System.Guid>::Equals(T,T)
MethodInfo IEqualityComparer_1_Equals_m272879_MethodInfo = 
{
	"Equals"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t38963_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777/* invoker_method */
	, IEqualityComparer_1_t38963_IEqualityComparer_1_Equals_m272879_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 0/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo IEqualityComparer_1_t38963_IEqualityComparer_1_GetHashCode_m272880_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IEqualityComparer`1<System.Guid>::GetHashCode(T)
MethodInfo IEqualityComparer_1_GetHashCode_m272880_MethodInfo = 
{
	"GetHashCode"/* name */
	, NULL/* method */
	, &IEqualityComparer_1_t38963_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777/* invoker_method */
	, IEqualityComparer_1_t38963_IEqualityComparer_1_GetHashCode_m272880_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 1478/* flags */
	, 0/* iflags */
	, 1/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* IEqualityComparer_1_t38963_MethodInfos[] =
{
	&IEqualityComparer_1_Equals_m272879_MethodInfo,
	&IEqualityComparer_1_GetHashCode_m272880_MethodInfo,
	NULL
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEqualityComparer_1_t38963_0_0_0;
extern Il2CppType IEqualityComparer_1_t38963_1_0_0;
struct IEqualityComparer_1_t38963;
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;
extern Il2CppGenericClass IEqualityComparer_1_t38963_GenericClass;
TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEqualityComparer`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEqualityComparer_1_t38963_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEqualityComparer_1_t38963_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEqualityComparer_1_t38963_il2cpp_TypeInfo/* cast_class */
	, &IEqualityComparer_1_t38963_0_0_0/* byval_arg */
	, &IEqualityComparer_1_t38963_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEqualityComparer_1_t38963_GenericClass/* generic_class */
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
	, 2/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 0/* vtable_count */
	, 0/* interfaces_count */
	, 0/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo DefaultComparer_t24880_il2cpp_TypeInfo;

extern TypeInfo Guid_t6777_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo Int32_t73_il2cpp_TypeInfo;
extern TypeInfo Boolean_t956_il2cpp_TypeInfo;
extern MethodInfo EqualityComparer_1__ctor_m180465_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_Equals_m4063_MethodInfo;


// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
extern MethodInfo DefaultComparer__ctor_m180470_MethodInfo;
 void DefaultComparer__ctor_m180470 (DefaultComparer_t24880 * __this, MethodInfo* method){
	{
		EqualityComparer_1__ctor_m180465(__this, /*hidden argument*/&EqualityComparer_1__ctor_m180465_MethodInfo);
		return;
	}
}
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
extern MethodInfo DefaultComparer_GetHashCode_m180471_MethodInfo;
 int32_t DefaultComparer_GetHashCode_m180471 (DefaultComparer_t24880 * __this, Guid_t6777  ___obj, MethodInfo* method){
	{
		Guid_t6777  L_0 = ___obj;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_000a;
		}
	}
	{
		return 0;
	}

IL_000a:
	{
		NullCheck(Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___obj))));
		int32_t L_2 = (int32_t)VirtFuncInvoker0< int32_t >::Invoke(&Object_GetHashCode_m4064_MethodInfo, Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___obj))));
		return L_2;
	}
}
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
extern MethodInfo DefaultComparer_Equals_m180472_MethodInfo;
 bool DefaultComparer_Equals_m180472 (DefaultComparer_t24880 * __this, Guid_t6777  ___x, Guid_t6777  ___y, MethodInfo* method){
	{
		Guid_t6777  L_0 = ___x;
		Object_t * L_1 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_0);
		if (L_1)
		{
			goto IL_0012;
		}
	}
	{
		Guid_t6777  L_2 = ___y;
		Object_t * L_3 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_2);
		return ((((Object_t *)L_3) == ((Object_t *)NULL))? 1 : 0);
	}

IL_0012:
	{
		Guid_t6777  L_4 = ___y;
		Object_t * L_5 = Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &L_4);
		NullCheck(Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___x))));
		bool L_6 = (bool)VirtFuncInvoker1< bool, Object_t * >::Invoke(&Object_Equals_m4063_MethodInfo, Box(InitializedTypeInfo(&Guid_t6777_il2cpp_TypeInfo), &(*(&___x))), L_5);
		return L_6;
	}
}
// Metadata Definition System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>
extern TypeInfo DefaultComparer_t24880_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::.ctor()
MethodInfo DefaultComparer__ctor_m180470_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&DefaultComparer__ctor_m180470/* method */
	, &DefaultComparer_t24880_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21/* invoker_method */
	, NULL/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 6278/* flags */
	, 0/* iflags */
	, 255/* slot */
	, 0/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo DefaultComparer_t24880_DefaultComparer_GetHashCode_m180471_ParameterInfos[] = 
{
	{"obj", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo DefaultComparer_t24880_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::GetHashCode(T)
MethodInfo DefaultComparer_GetHashCode_m180471_MethodInfo = 
{
	"GetHashCode"/* name */
	, (methodPointerType)&DefaultComparer_GetHashCode_m180471/* method */
	, &DefaultComparer_t24880_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Guid_t6777/* invoker_method */
	, DefaultComparer_t24880_DefaultComparer_GetHashCode_m180471_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 8/* slot */
	, 1/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
extern Il2CppType Guid_t6777_0_0_0;
extern Il2CppType Guid_t6777_0_0_0;
static ParameterInfo DefaultComparer_t24880_DefaultComparer_Equals_m180472_ParameterInfos[] = 
{
	{"x", 0, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
	{"y", 1, 134217728, &EmptyCustomAttributesCache, &Guid_t6777_0_0_0},
};
extern TypeInfo DefaultComparer_t24880_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.EqualityComparer`1/DefaultComparer<System.Guid>::Equals(T,T)
MethodInfo DefaultComparer_Equals_m180472_MethodInfo = 
{
	"Equals"/* name */
	, (methodPointerType)&DefaultComparer_Equals_m180472/* method */
	, &DefaultComparer_t24880_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Guid_t6777_Guid_t6777/* invoker_method */
	, DefaultComparer_t24880_DefaultComparer_Equals_m180472_ParameterInfos/* parameters */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, 198/* flags */
	, 0/* iflags */
	, 9/* slot */
	, 2/* parameters_count */
	, false/* is_generic */
	, true/* is_inflated */
	, 0/* token */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* native_delegate_wrapper */

};
static MethodInfo* DefaultComparer_t24880_MethodInfos[] =
{
	&DefaultComparer__ctor_m180470_MethodInfo,
	&DefaultComparer_GetHashCode_m180471_MethodInfo,
	&DefaultComparer_Equals_m180472_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m180472_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m180471_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo;
extern MethodInfo EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo;
extern MethodInfo DefaultComparer_GetHashCode_m180471_MethodInfo;
extern MethodInfo DefaultComparer_Equals_m180472_MethodInfo;
static MethodInfo* DefaultComparer_t24880_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&DefaultComparer_Equals_m180472_MethodInfo,
	&DefaultComparer_GetHashCode_m180471_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_Equals_m180468_MethodInfo,
	&EqualityComparer_1_System_Collections_IEqualityComparer_GetHashCode_m180467_MethodInfo,
	&DefaultComparer_GetHashCode_m180471_MethodInfo,
	&DefaultComparer_Equals_m180472_MethodInfo,
};
extern TypeInfo IEqualityComparer_1_t38963_il2cpp_TypeInfo;
extern TypeInfo IEqualityComparer_t7113_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair DefaultComparer_t24880_InterfacesOffsets[] = 
{
	{ &IEqualityComparer_1_t38963_il2cpp_TypeInfo, 4},
	{ &IEqualityComparer_t7113_il2cpp_TypeInfo, 6},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType DefaultComparer_t24880_0_0_0;
extern Il2CppType DefaultComparer_t24880_1_0_0;
extern TypeInfo EqualityComparer_1_t24879_il2cpp_TypeInfo;
struct DefaultComparer_t24880;
extern TypeInfo DefaultComparer_t24880_il2cpp_TypeInfo;
extern Il2CppGenericClass DefaultComparer_t24880_GenericClass;
extern TypeInfo EqualityComparer_1_t7851_il2cpp_TypeInfo;
TypeInfo DefaultComparer_t24880_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "DefaultComparer"/* name */
	, ""/* namespaze */
	, DefaultComparer_t24880_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &EqualityComparer_1_t24879_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &EqualityComparer_1_t7851_il2cpp_TypeInfo/* nested_in */
	, &DefaultComparer_t24880_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, DefaultComparer_t24880_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &DefaultComparer_t24880_il2cpp_TypeInfo/* cast_class */
	, &DefaultComparer_t24880_0_0_0/* byval_arg */
	, &DefaultComparer_t24880_1_0_0/* this_arg */
	, DefaultComparer_t24880_InterfacesOffsets/* interface_offsets */
	, &DefaultComparer_t24880_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (DefaultComparer_t24880)/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 1057027/* flags */
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
	, 3/* method_count */
	, 0/* property_count */
	, 0/* field_count */
	, 0/* event_count */
	, 0/* nested_type_count */
	, 10/* vtable_count */
	, 0/* interfaces_count */
	, 2/* interface_offsets_count */

};
#ifndef _MSC_VER
#else
#endif
extern TypeInfo IEnumerator_1_t29313_il2cpp_TypeInfo;

// System.LoaderOptimization
#include "mscorlib_System_LoaderOptimization.h"


// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>
extern MethodInfo IEnumerator_1_get_Current_m272881_MethodInfo;
static PropertyInfo IEnumerator_1_t29313____Current_PropertyInfo = 
{
	&IEnumerator_1_t29313_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272881_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29313_PropertyInfos[] =
{
	&IEnumerator_1_t29313____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29313_il2cpp_TypeInfo;
extern Il2CppType LoaderOptimization_t8249_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t8249 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272881_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29313_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t8249_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t8249/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29313_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272881_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29313_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29313_0_0_0;
extern Il2CppType IEnumerator_1_t29313_1_0_0;
struct IEnumerator_1_t29313;
extern TypeInfo IEnumerator_1_t29313_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29313_GenericClass;
TypeInfo IEnumerator_1_t29313_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29313_MethodInfos/* methods */
	, IEnumerator_1_t29313_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29313_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29313_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29313_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29313_0_0_0/* byval_arg */
	, &IEnumerator_1_t29313_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29313_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.LoaderOptimization>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3062.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.LoaderOptimization>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3062MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern TypeInfo LoaderOptimization_t8249_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180478_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoaderOptimization_t8249_m223823_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.LoaderOptimization>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoaderOptimization_t8249_m223823 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisLoaderOptimization_t8249_m223823_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m180473_MethodInfo;
 void InternalEnumerator_1__ctor_m180473 (InternalEnumerator_1_t24881 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180474_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180474 (InternalEnumerator_1_t24881 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475 (InternalEnumerator_1_t24881 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m180478(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m180478_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoaderOptimization_t8249_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m180476_MethodInfo;
 void InternalEnumerator_1_Dispose_m180476 (InternalEnumerator_1_t24881 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m180477_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m180477 (InternalEnumerator_1_t24881 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m180478_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m180478 (InternalEnumerator_1_t24881 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLoaderOptimization_t8249_m223823(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoaderOptimization_t8249_m223823_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.LoaderOptimization>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24881____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24881, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24881____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24881, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24881_FieldInfos[] =
{
	&InternalEnumerator_1_t24881____array_FieldInfo,
	&InternalEnumerator_1_t24881____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24881____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24881_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180478_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24881____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24881_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180478_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24881_PropertyInfos[] =
{
	&InternalEnumerator_1_t24881____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24881____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24881_InternalEnumerator_1__ctor_m180473_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180473_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m180473/* method */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24881_InternalEnumerator_1__ctor_m180473_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180474_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180474/* method */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.LoaderOptimization>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475/* method */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.LoaderOptimization>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180476_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m180476/* method */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.LoaderOptimization>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180477_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m180477/* method */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern Il2CppType LoaderOptimization_t8249_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t8249 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.LoaderOptimization>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180478_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m180478/* method */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t8249_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t8249/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24881_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180473_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180474_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475_MethodInfo,
	&InternalEnumerator_1_Dispose_m180476_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180477_MethodInfo,
	&InternalEnumerator_1_get_Current_m180478_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180477_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180474_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180476_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180478_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24881_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180475_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180477_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180474_MethodInfo,
	&InternalEnumerator_1_Dispose_m180476_MethodInfo,
	&InternalEnumerator_1_get_Current_m180478_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29313_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24881_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29313_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29313_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24881_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29313_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24881_0_0_0;
extern Il2CppType InternalEnumerator_1_t24881_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24881_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24881_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24881_MethodInfos/* methods */
	, InternalEnumerator_1_t24881_PropertyInfos/* properties */
	, InternalEnumerator_1_t24881_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24881_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24881_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24881_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24881_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24881_1_0_0/* this_arg */
	, InternalEnumerator_1_t24881_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24881_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24881)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.LoaderOptimization>
extern MethodInfo ICollection_1_get_Count_m272882_MethodInfo;
static PropertyInfo ICollection_1_t37106____Count_PropertyInfo = 
{
	&ICollection_1_t37106_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272882_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272883_MethodInfo;
static PropertyInfo ICollection_1_t37106____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37106_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272883_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37106_PropertyInfos[] =
{
	&ICollection_1_t37106____Count_PropertyInfo,
	&ICollection_1_t37106____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_Count()
MethodInfo ICollection_1_get_Count_m272882_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272883_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType LoaderOptimization_t8249_0_0_0;
static ParameterInfo ICollection_1_t37106_ICollection_1_Add_m272884_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t8249_0_0_0},
};
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Add(T)
MethodInfo ICollection_1_Add_m272884_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t37106_ICollection_1_Add_m272884_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Clear()
MethodInfo ICollection_1_Clear_m272885_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType LoaderOptimization_t8249_0_0_0;
static ParameterInfo ICollection_1_t37106_ICollection_1_Contains_m272886_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t8249_0_0_0},
};
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Contains(T)
MethodInfo ICollection_1_Contains_m272886_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37106_ICollection_1_Contains_m272886_ParameterInfos/* parameters */
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
extern Il2CppType LoaderOptimizationU5BU5D_t25377_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37106_ICollection_1_CopyTo_m272887_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimizationU5BU5D_t25377_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.LoaderOptimization>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272887_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37106_ICollection_1_CopyTo_m272887_ParameterInfos/* parameters */
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
extern Il2CppType LoaderOptimization_t8249_0_0_0;
static ParameterInfo ICollection_1_t37106_ICollection_1_Remove_m272888_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t8249_0_0_0},
};
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.LoaderOptimization>::Remove(T)
MethodInfo ICollection_1_Remove_m272888_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t37106_ICollection_1_Remove_m272888_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37106_MethodInfos[] =
{
	&ICollection_1_get_Count_m272882_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272883_MethodInfo,
	&ICollection_1_Add_m272884_MethodInfo,
	&ICollection_1_Clear_m272885_MethodInfo,
	&ICollection_1_Contains_m272886_MethodInfo,
	&ICollection_1_CopyTo_m272887_MethodInfo,
	&ICollection_1_Remove_m272888_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37108_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37106_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37108_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37106_0_0_0;
extern Il2CppType ICollection_1_t37106_1_0_0;
struct ICollection_1_t37106;
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37106_GenericClass;
TypeInfo ICollection_1_t37106_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37106_MethodInfos/* methods */
	, ICollection_1_t37106_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37106_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37106_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37106_0_0_0/* byval_arg */
	, &ICollection_1_t37106_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37106_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37108_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>
extern TypeInfo IEnumerable_1_t37108_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29313_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.LoaderOptimization>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272889_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37108_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29313_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37108_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272889_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37108_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37108_0_0_0;
extern Il2CppType IEnumerable_1_t37108_1_0_0;
struct IEnumerable_1_t37108;
extern TypeInfo IEnumerable_1_t37108_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37108_GenericClass;
TypeInfo IEnumerable_1_t37108_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37108_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37108_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37108_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37108_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37108_0_0_0/* byval_arg */
	, &IEnumerable_1_t37108_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37108_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37107_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.LoaderOptimization>
extern MethodInfo IList_1_get_Item_m272890_MethodInfo;
extern MethodInfo IList_1_set_Item_m272891_MethodInfo;
static PropertyInfo IList_1_t37107____Item_PropertyInfo = 
{
	&IList_1_t37107_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272890_MethodInfo/* get */
	, &IList_1_set_Item_m272891_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37107_PropertyInfos[] =
{
	&IList_1_t37107____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoaderOptimization_t8249_0_0_0;
static ParameterInfo IList_1_t37107_IList_1_IndexOf_m272892_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t8249_0_0_0},
};
extern TypeInfo IList_1_t37107_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.LoaderOptimization>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272892_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37107_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37107_IList_1_IndexOf_m272892_ParameterInfos/* parameters */
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
extern Il2CppType LoaderOptimization_t8249_0_0_0;
static ParameterInfo IList_1_t37107_IList_1_Insert_m272893_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t8249_0_0_0},
};
extern TypeInfo IList_1_t37107_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272893_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37107_IList_1_Insert_m272893_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37107_IList_1_RemoveAt_m272894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37107_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272894_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37107_IList_1_RemoveAt_m272894_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37107_IList_1_get_Item_m272890_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37107_il2cpp_TypeInfo;
extern Il2CppType LoaderOptimization_t8249_0_0_0;
extern void* RuntimeInvoker_LoaderOptimization_t8249_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.LoaderOptimization>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272890_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37107_il2cpp_TypeInfo/* declaring_type */
	, &LoaderOptimization_t8249_0_0_0/* return_type */
	, RuntimeInvoker_LoaderOptimization_t8249_Int32_t73/* invoker_method */
	, IList_1_t37107_IList_1_get_Item_m272890_ParameterInfos/* parameters */
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
extern Il2CppType LoaderOptimization_t8249_0_0_0;
static ParameterInfo IList_1_t37107_IList_1_set_Item_m272891_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoaderOptimization_t8249_0_0_0},
};
extern TypeInfo IList_1_t37107_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.LoaderOptimization>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272891_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t37107_IList_1_set_Item_m272891_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37107_MethodInfos[] =
{
	&IList_1_IndexOf_m272892_MethodInfo,
	&IList_1_Insert_m272893_MethodInfo,
	&IList_1_RemoveAt_m272894_MethodInfo,
	&IList_1_get_Item_m272890_MethodInfo,
	&IList_1_set_Item_m272891_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37106_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37108_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37107_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37106_il2cpp_TypeInfo,
	&IEnumerable_1_t37108_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37107_0_0_0;
extern Il2CppType IList_1_t37107_1_0_0;
struct IList_1_t37107;
extern TypeInfo IList_1_t37107_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37107_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37107_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37107_MethodInfos/* methods */
	, IList_1_t37107_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37107_il2cpp_TypeInfo/* element_class */
	, IList_1_t37107_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37107_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37107_0_0_0/* byval_arg */
	, &IList_1_t37107_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37107_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29314_il2cpp_TypeInfo;

// System.NonSerializedAttribute
#include "mscorlib_System_NonSerializedAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272895_MethodInfo;
static PropertyInfo IEnumerator_1_t29314____Current_PropertyInfo = 
{
	&IEnumerator_1_t29314_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272895_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29314_PropertyInfos[] =
{
	&IEnumerator_1_t29314____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29314_il2cpp_TypeInfo;
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272895_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29314_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t8262_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29314_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272895_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29314_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29314_0_0_0;
extern Il2CppType IEnumerator_1_t29314_1_0_0;
struct IEnumerator_1_t29314;
extern TypeInfo IEnumerator_1_t29314_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29314_GenericClass;
TypeInfo IEnumerator_1_t29314_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29314_MethodInfos/* methods */
	, IEnumerator_1_t29314_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29314_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29314_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29314_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29314_0_0_0/* byval_arg */
	, &IEnumerator_1_t29314_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29314_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3063.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3063MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern TypeInfo NonSerializedAttribute_t8262_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180484_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNonSerializedAttribute_t8262_m223834_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.NonSerializedAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNonSerializedAttribute_t8262_m223834(__this, p0, method) (NonSerializedAttribute_t8262 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisNonSerializedAttribute_t8262_m223834_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.NonSerializedAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24882____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24882, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24882____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24882, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24882_FieldInfos[] =
{
	&InternalEnumerator_1_t24882____array_FieldInfo,
	&InternalEnumerator_1_t24882____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180481_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24882____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24882_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180481_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m180484_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24882____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24882_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m180484_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24882_PropertyInfos[] =
{
	&InternalEnumerator_1_t24882____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24882____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24882_InternalEnumerator_1__ctor_m180479_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m180479_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24882_InternalEnumerator_1__ctor_m180479_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180480_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180481_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m180482_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m180483_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.NonSerializedAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m180484_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t8262_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24882_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m180479_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180480_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180481_MethodInfo,
	&InternalEnumerator_1_Dispose_m180482_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180483_MethodInfo,
	&InternalEnumerator_1_get_Current_m180484_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180481_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m180483_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180480_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m180482_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m180484_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24882_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m180481_MethodInfo,
	&InternalEnumerator_1_MoveNext_m180483_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m180480_MethodInfo,
	&InternalEnumerator_1_Dispose_m180482_MethodInfo,
	&InternalEnumerator_1_get_Current_m180484_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29314_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24882_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29314_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29314_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24882_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29314_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m180484_MethodInfo;
extern TypeInfo NonSerializedAttribute_t8262_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNonSerializedAttribute_t8262_m223834_MethodInfo;
static void* InternalEnumerator_1_t24882_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m180484_MethodInfo,
	&NonSerializedAttribute_t8262_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisNonSerializedAttribute_t8262_m223834_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24882_0_0_0;
extern Il2CppType InternalEnumerator_1_t24882_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24882_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24882_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24882_MethodInfos/* methods */
	, InternalEnumerator_1_t24882_PropertyInfos/* properties */
	, InternalEnumerator_1_t24882_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24882_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24882_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24882_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24882_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24882_1_0_0/* this_arg */
	, InternalEnumerator_1_t24882_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24882_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24882_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24882)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>
extern MethodInfo ICollection_1_get_Count_m272896_MethodInfo;
static PropertyInfo ICollection_1_t37109____Count_PropertyInfo = 
{
	&ICollection_1_t37109_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272896_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272897_MethodInfo;
static PropertyInfo ICollection_1_t37109____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t37109_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t37109_PropertyInfos[] =
{
	&ICollection_1_t37109____Count_PropertyInfo,
	&ICollection_1_t37109____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272896_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272897_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
static ParameterInfo ICollection_1_t37109_ICollection_1_Add_m272898_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t8262_0_0_0},
};
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272898_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t37109_ICollection_1_Add_m272898_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272899_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
static ParameterInfo ICollection_1_t37109_ICollection_1_Contains_m272900_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t8262_0_0_0},
};
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272900_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37109_ICollection_1_Contains_m272900_ParameterInfos/* parameters */
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
extern Il2CppType NonSerializedAttributeU5BU5D_t25378_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t37109_ICollection_1_CopyTo_m272901_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttributeU5BU5D_t25378_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272901_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t37109_ICollection_1_CopyTo_m272901_ParameterInfos/* parameters */
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
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
static ParameterInfo ICollection_1_t37109_ICollection_1_Remove_m272902_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t8262_0_0_0},
};
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.NonSerializedAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272902_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t37109_ICollection_1_Remove_m272902_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t37109_MethodInfos[] =
{
	&ICollection_1_get_Count_m272896_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272897_MethodInfo,
	&ICollection_1_Add_m272898_MethodInfo,
	&ICollection_1_Clear_m272899_MethodInfo,
	&ICollection_1_Contains_m272900_MethodInfo,
	&ICollection_1_CopyTo_m272901_MethodInfo,
	&ICollection_1_Remove_m272902_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37111_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t37109_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t37111_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t37109_0_0_0;
extern Il2CppType ICollection_1_t37109_1_0_0;
struct ICollection_1_t37109;
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t37109_GenericClass;
TypeInfo ICollection_1_t37109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t37109_MethodInfos/* methods */
	, ICollection_1_t37109_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t37109_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t37109_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t37109_0_0_0/* byval_arg */
	, &ICollection_1_t37109_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t37109_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t37111_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>
extern TypeInfo IEnumerable_1_t37111_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29314_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.NonSerializedAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272903_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t37111_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29314_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t37111_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272903_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t37111_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t37111_0_0_0;
extern Il2CppType IEnumerable_1_t37111_1_0_0;
struct IEnumerable_1_t37111;
extern TypeInfo IEnumerable_1_t37111_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t37111_GenericClass;
TypeInfo IEnumerable_1_t37111_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t37111_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t37111_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t37111_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t37111_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t37111_0_0_0/* byval_arg */
	, &IEnumerable_1_t37111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t37111_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t37110_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.NonSerializedAttribute>
extern MethodInfo IList_1_get_Item_m272904_MethodInfo;
extern MethodInfo IList_1_set_Item_m272905_MethodInfo;
static PropertyInfo IList_1_t37110____Item_PropertyInfo = 
{
	&IList_1_t37110_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272904_MethodInfo/* get */
	, &IList_1_set_Item_m272905_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t37110_PropertyInfos[] =
{
	&IList_1_t37110____Item_PropertyInfo,
	NULL
};
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
static ParameterInfo IList_1_t37110_IList_1_IndexOf_m272906_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t8262_0_0_0},
};
extern TypeInfo IList_1_t37110_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.NonSerializedAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272906_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t37110_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37110_IList_1_IndexOf_m272906_ParameterInfos/* parameters */
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
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
static ParameterInfo IList_1_t37110_IList_1_Insert_m272907_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t8262_0_0_0},
};
extern TypeInfo IList_1_t37110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272907_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t37110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37110_IList_1_Insert_m272907_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37110_IList_1_RemoveAt_m272908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272908_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t37110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t37110_IList_1_RemoveAt_m272908_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t37110_IList_1_get_Item_m272904_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t37110_il2cpp_TypeInfo;
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.NonSerializedAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272904_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t37110_il2cpp_TypeInfo/* declaring_type */
	, &NonSerializedAttribute_t8262_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t37110_IList_1_get_Item_m272904_ParameterInfos/* parameters */
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
extern Il2CppType NonSerializedAttribute_t8262_0_0_0;
static ParameterInfo IList_1_t37110_IList_1_set_Item_m272905_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NonSerializedAttribute_t8262_0_0_0},
};
extern TypeInfo IList_1_t37110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.NonSerializedAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272905_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t37110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t37110_IList_1_set_Item_m272905_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t37110_MethodInfos[] =
{
	&IList_1_IndexOf_m272906_MethodInfo,
	&IList_1_Insert_m272907_MethodInfo,
	&IList_1_RemoveAt_m272908_MethodInfo,
	&IList_1_get_Item_m272904_MethodInfo,
	&IList_1_set_Item_m272905_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t37109_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t37111_il2cpp_TypeInfo;
static TypeInfo* IList_1_t37110_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t37109_il2cpp_TypeInfo,
	&IEnumerable_1_t37111_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t37110_0_0_0;
extern Il2CppType IList_1_t37110_1_0_0;
struct IList_1_t37110;
extern TypeInfo IList_1_t37110_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t37110_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t37110_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t37110_MethodInfos/* methods */
	, IList_1_t37110_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t37110_il2cpp_TypeInfo/* element_class */
	, IList_1_t37110_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t37110_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t37110_0_0_0/* byval_arg */
	, &IList_1_t37110_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t37110_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
