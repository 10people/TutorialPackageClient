#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<ServerListItem/State>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1613.h"
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
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<ServerListItem/State>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1613MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// ServerListItem/State
#include "AssemblyU2DCSharp_ServerListItem_State.h"
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
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern TypeInfo State_t1933_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m140544_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisState_t1933_m204916_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<ServerListItem/State>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<ServerListItem/State>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisState_t1933_m204916 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisState_t1933_m204916_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<ServerListItem/State>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m140539_MethodInfo;
 void InternalEnumerator_1__ctor_m140539 (InternalEnumerator_1_t19233 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<ServerListItem/State>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140540_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140540 (InternalEnumerator_1_t19233 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<ServerListItem/State>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541 (InternalEnumerator_1_t19233 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m140544(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m140544_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&State_t1933_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<ServerListItem/State>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m140542_MethodInfo;
 void InternalEnumerator_1_Dispose_m140542 (InternalEnumerator_1_t19233 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<ServerListItem/State>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m140543_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m140543 (InternalEnumerator_1_t19233 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<ServerListItem/State>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m140544_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m140544 (InternalEnumerator_1_t19233 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisState_t1933_m204916(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisState_t1933_m204916_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<ServerListItem/State>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19233____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19233, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19233____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19233, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19233_FieldInfos[] =
{
	&InternalEnumerator_1_t19233____array_FieldInfo,
	&InternalEnumerator_1_t19233____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19233____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19233_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140544_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19233____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19233_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140544_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19233_PropertyInfos[] =
{
	&InternalEnumerator_1_t19233____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19233____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19233_InternalEnumerator_1__ctor_m140539_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerListItem/State>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140539_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m140539/* method */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19233_InternalEnumerator_1__ctor_m140539_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerListItem/State>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140540_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140540/* method */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<ServerListItem/State>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541/* method */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerListItem/State>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140542_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m140542/* method */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<ServerListItem/State>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140543_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m140543/* method */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern Il2CppType State_t1933_0_0_0;
extern void* RuntimeInvoker_State_t1933 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<ServerListItem/State>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140544_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m140544/* method */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* declaring_type */
	, &State_t1933_0_0_0/* return_type */
	, RuntimeInvoker_State_t1933/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t19233_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140539_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140540_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541_MethodInfo,
	&InternalEnumerator_1_Dispose_m140542_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140543_MethodInfo,
	&InternalEnumerator_1_get_Current_m140544_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140543_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140540_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140542_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140544_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19233_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140541_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140543_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140540_MethodInfo,
	&InternalEnumerator_1_Dispose_m140542_MethodInfo,
	&InternalEnumerator_1_get_Current_m140544_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27963_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19233_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27963_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27963_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19233_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27963_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19233_0_0_0;
extern Il2CppType InternalEnumerator_1_t19233_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19233_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19233_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19233_MethodInfos/* methods */
	, InternalEnumerator_1_t19233_PropertyInfos/* properties */
	, InternalEnumerator_1_t19233_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19233_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19233_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19233_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19233_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19233_1_0_0/* this_arg */
	, InternalEnumerator_1_t19233_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19233_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19233)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<ServerListItem/State>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/State>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/State>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/State>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/State>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/State>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/State>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<ServerListItem/State>
extern MethodInfo ICollection_1_get_Count_m251146_MethodInfo;
static PropertyInfo ICollection_1_t33100____Count_PropertyInfo = 
{
	&ICollection_1_t33100_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251146_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251147_MethodInfo;
static PropertyInfo ICollection_1_t33100____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33100_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251147_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33100_PropertyInfos[] =
{
	&ICollection_1_t33100____Count_PropertyInfo,
	&ICollection_1_t33100____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<ServerListItem/State>::get_Count()
MethodInfo ICollection_1_get_Count_m251146_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/State>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251147_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType State_t1933_0_0_0;
static ParameterInfo ICollection_1_t33100_ICollection_1_Add_m251148_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &State_t1933_0_0_0},
};
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/State>::Add(T)
MethodInfo ICollection_1_Add_m251148_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33100_ICollection_1_Add_m251148_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/State>::Clear()
MethodInfo ICollection_1_Clear_m251149_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType State_t1933_0_0_0;
static ParameterInfo ICollection_1_t33100_ICollection_1_Contains_m251150_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &State_t1933_0_0_0},
};
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/State>::Contains(T)
MethodInfo ICollection_1_Contains_m251150_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33100_ICollection_1_Contains_m251150_ParameterInfos/* parameters */
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
extern Il2CppType StateU5BU5D_t25970_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33100_ICollection_1_CopyTo_m251151_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StateU5BU5D_t25970_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/State>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251151_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33100_ICollection_1_CopyTo_m251151_ParameterInfos/* parameters */
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
extern Il2CppType State_t1933_0_0_0;
static ParameterInfo ICollection_1_t33100_ICollection_1_Remove_m251152_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &State_t1933_0_0_0},
};
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/State>::Remove(T)
MethodInfo ICollection_1_Remove_m251152_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33100_ICollection_1_Remove_m251152_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33100_MethodInfos[] =
{
	&ICollection_1_get_Count_m251146_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251147_MethodInfo,
	&ICollection_1_Add_m251148_MethodInfo,
	&ICollection_1_Clear_m251149_MethodInfo,
	&ICollection_1_Contains_m251150_MethodInfo,
	&ICollection_1_CopyTo_m251151_MethodInfo,
	&ICollection_1_Remove_m251152_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33102_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33100_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33102_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33100_0_0_0;
extern Il2CppType ICollection_1_t33100_1_0_0;
struct ICollection_1_t33100;
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33100_GenericClass;
TypeInfo ICollection_1_t33100_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33100_MethodInfos/* methods */
	, ICollection_1_t33100_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33100_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33100_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33100_0_0_0/* byval_arg */
	, &ICollection_1_t33100_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33100_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33102_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ServerListItem/State>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<ServerListItem/State>
extern TypeInfo IEnumerable_1_t33102_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27963_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ServerListItem/State>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251153_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33102_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27963_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33102_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251153_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33102_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33102_0_0_0;
extern Il2CppType IEnumerable_1_t33102_1_0_0;
struct IEnumerable_1_t33102;
extern TypeInfo IEnumerable_1_t33102_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33102_GenericClass;
TypeInfo IEnumerable_1_t33102_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33102_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33102_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33102_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33102_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33102_0_0_0/* byval_arg */
	, &IEnumerable_1_t33102_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33102_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33101_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<ServerListItem/State>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<ServerListItem/State>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<ServerListItem/State>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<ServerListItem/State>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<ServerListItem/State>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<ServerListItem/State>
extern MethodInfo IList_1_get_Item_m251154_MethodInfo;
extern MethodInfo IList_1_set_Item_m251155_MethodInfo;
static PropertyInfo IList_1_t33101____Item_PropertyInfo = 
{
	&IList_1_t33101_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251154_MethodInfo/* get */
	, &IList_1_set_Item_m251155_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33101_PropertyInfos[] =
{
	&IList_1_t33101____Item_PropertyInfo,
	NULL
};
extern Il2CppType State_t1933_0_0_0;
static ParameterInfo IList_1_t33101_IList_1_IndexOf_m251156_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &State_t1933_0_0_0},
};
extern TypeInfo IList_1_t33101_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<ServerListItem/State>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251156_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33101_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33101_IList_1_IndexOf_m251156_ParameterInfos/* parameters */
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
extern Il2CppType State_t1933_0_0_0;
static ParameterInfo IList_1_t33101_IList_1_Insert_m251157_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &State_t1933_0_0_0},
};
extern TypeInfo IList_1_t33101_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerListItem/State>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251157_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33101_IList_1_Insert_m251157_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33101_IList_1_RemoveAt_m251158_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33101_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerListItem/State>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251158_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33101_IList_1_RemoveAt_m251158_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33101_IList_1_get_Item_m251154_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33101_il2cpp_TypeInfo;
extern Il2CppType State_t1933_0_0_0;
extern void* RuntimeInvoker_State_t1933_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<ServerListItem/State>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251154_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33101_il2cpp_TypeInfo/* declaring_type */
	, &State_t1933_0_0_0/* return_type */
	, RuntimeInvoker_State_t1933_Int32_t73/* invoker_method */
	, IList_1_t33101_IList_1_get_Item_m251154_ParameterInfos/* parameters */
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
extern Il2CppType State_t1933_0_0_0;
static ParameterInfo IList_1_t33101_IList_1_set_Item_m251155_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &State_t1933_0_0_0},
};
extern TypeInfo IList_1_t33101_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerListItem/State>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251155_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33101_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33101_IList_1_set_Item_m251155_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33101_MethodInfos[] =
{
	&IList_1_IndexOf_m251156_MethodInfo,
	&IList_1_Insert_m251157_MethodInfo,
	&IList_1_RemoveAt_m251158_MethodInfo,
	&IList_1_get_Item_m251154_MethodInfo,
	&IList_1_set_Item_m251155_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33100_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33102_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33101_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33100_il2cpp_TypeInfo,
	&IEnumerable_1_t33102_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33101_0_0_0;
extern Il2CppType IList_1_t33101_1_0_0;
struct IList_1_t33101;
extern TypeInfo IList_1_t33101_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33101_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33101_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33101_MethodInfos/* methods */
	, IList_1_t33101_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33101_il2cpp_TypeInfo/* element_class */
	, IList_1_t33101_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33101_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33101_0_0_0/* byval_arg */
	, &IList_1_t33101_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33101_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27964_il2cpp_TypeInfo;

// ServerListItem/Type
#include "AssemblyU2DCSharp_ServerListItem_Type.h"


// T System.Collections.Generic.IEnumerator`1<ServerListItem/Type>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<ServerListItem/Type>
extern MethodInfo IEnumerator_1_get_Current_m251159_MethodInfo;
static PropertyInfo IEnumerator_1_t27964____Current_PropertyInfo = 
{
	&IEnumerator_1_t27964_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251159_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27964_PropertyInfos[] =
{
	&IEnumerator_1_t27964____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27964_il2cpp_TypeInfo;
extern Il2CppType Type_t1934_0_0_0;
extern void* RuntimeInvoker_Type_t1934 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<ServerListItem/Type>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251159_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27964_il2cpp_TypeInfo/* declaring_type */
	, &Type_t1934_0_0_0/* return_type */
	, RuntimeInvoker_Type_t1934/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27964_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251159_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27964_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27964_0_0_0;
extern Il2CppType IEnumerator_1_t27964_1_0_0;
struct IEnumerator_1_t27964;
extern TypeInfo IEnumerator_1_t27964_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27964_GenericClass;
TypeInfo IEnumerator_1_t27964_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27964_MethodInfos/* methods */
	, IEnumerator_1_t27964_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27964_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27964_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27964_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27964_0_0_0/* byval_arg */
	, &IEnumerator_1_t27964_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27964_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<ServerListItem/Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1614.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<ServerListItem/Type>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1614MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern TypeInfo Type_t1934_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140550_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisType_t1934_m204927_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<ServerListItem/Type>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<ServerListItem/Type>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisType_t1934_m204927 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisType_t1934_m204927_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<ServerListItem/Type>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m140545_MethodInfo;
 void InternalEnumerator_1__ctor_m140545 (InternalEnumerator_1_t19234 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<ServerListItem/Type>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140546_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140546 (InternalEnumerator_1_t19234 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<ServerListItem/Type>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547 (InternalEnumerator_1_t19234 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m140550(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m140550_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Type_t1934_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<ServerListItem/Type>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m140548_MethodInfo;
 void InternalEnumerator_1_Dispose_m140548 (InternalEnumerator_1_t19234 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<ServerListItem/Type>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m140549_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m140549 (InternalEnumerator_1_t19234 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<ServerListItem/Type>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m140550_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m140550 (InternalEnumerator_1_t19234 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisType_t1934_m204927(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisType_t1934_m204927_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<ServerListItem/Type>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19234____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19234, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19234____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19234, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19234_FieldInfos[] =
{
	&InternalEnumerator_1_t19234____array_FieldInfo,
	&InternalEnumerator_1_t19234____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19234____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19234_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140550_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19234____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19234_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140550_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19234_PropertyInfos[] =
{
	&InternalEnumerator_1_t19234____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19234____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19234_InternalEnumerator_1__ctor_m140545_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerListItem/Type>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140545_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m140545/* method */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19234_InternalEnumerator_1__ctor_m140545_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerListItem/Type>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140546_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140546/* method */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<ServerListItem/Type>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547/* method */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerListItem/Type>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140548_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m140548/* method */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<ServerListItem/Type>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140549_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m140549/* method */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern Il2CppType Type_t1934_0_0_0;
extern void* RuntimeInvoker_Type_t1934 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<ServerListItem/Type>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140550_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m140550/* method */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* declaring_type */
	, &Type_t1934_0_0_0/* return_type */
	, RuntimeInvoker_Type_t1934/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t19234_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140545_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140546_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547_MethodInfo,
	&InternalEnumerator_1_Dispose_m140548_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140549_MethodInfo,
	&InternalEnumerator_1_get_Current_m140550_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140549_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140546_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140548_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140550_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19234_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140547_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140549_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140546_MethodInfo,
	&InternalEnumerator_1_Dispose_m140548_MethodInfo,
	&InternalEnumerator_1_get_Current_m140550_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27964_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19234_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27964_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27964_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19234_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27964_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19234_0_0_0;
extern Il2CppType InternalEnumerator_1_t19234_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19234_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19234_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19234_MethodInfos/* methods */
	, InternalEnumerator_1_t19234_PropertyInfos/* properties */
	, InternalEnumerator_1_t19234_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19234_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19234_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19234_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19234_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19234_1_0_0/* this_arg */
	, InternalEnumerator_1_t19234_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19234_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19234)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<ServerListItem/Type>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/Type>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/Type>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/Type>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/Type>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/Type>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/Type>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<ServerListItem/Type>
extern MethodInfo ICollection_1_get_Count_m251160_MethodInfo;
static PropertyInfo ICollection_1_t33103____Count_PropertyInfo = 
{
	&ICollection_1_t33103_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251160_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251161_MethodInfo;
static PropertyInfo ICollection_1_t33103____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33103_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251161_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33103_PropertyInfos[] =
{
	&ICollection_1_t33103____Count_PropertyInfo,
	&ICollection_1_t33103____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<ServerListItem/Type>::get_Count()
MethodInfo ICollection_1_get_Count_m251160_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/Type>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251161_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Type_t1934_0_0_0;
static ParameterInfo ICollection_1_t33103_ICollection_1_Add_m251162_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t1934_0_0_0},
};
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/Type>::Add(T)
MethodInfo ICollection_1_Add_m251162_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33103_ICollection_1_Add_m251162_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/Type>::Clear()
MethodInfo ICollection_1_Clear_m251163_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Type_t1934_0_0_0;
static ParameterInfo ICollection_1_t33103_ICollection_1_Contains_m251164_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t1934_0_0_0},
};
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/Type>::Contains(T)
MethodInfo ICollection_1_Contains_m251164_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33103_ICollection_1_Contains_m251164_ParameterInfos/* parameters */
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
extern Il2CppType TypeU5BU5D_t25971_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33103_ICollection_1_CopyTo_m251165_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeU5BU5D_t25971_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerListItem/Type>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251165_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33103_ICollection_1_CopyTo_m251165_ParameterInfos/* parameters */
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
extern Il2CppType Type_t1934_0_0_0;
static ParameterInfo ICollection_1_t33103_ICollection_1_Remove_m251166_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t1934_0_0_0},
};
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerListItem/Type>::Remove(T)
MethodInfo ICollection_1_Remove_m251166_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33103_ICollection_1_Remove_m251166_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33103_MethodInfos[] =
{
	&ICollection_1_get_Count_m251160_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251161_MethodInfo,
	&ICollection_1_Add_m251162_MethodInfo,
	&ICollection_1_Clear_m251163_MethodInfo,
	&ICollection_1_Contains_m251164_MethodInfo,
	&ICollection_1_CopyTo_m251165_MethodInfo,
	&ICollection_1_Remove_m251166_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33105_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33103_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33105_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33103_0_0_0;
extern Il2CppType ICollection_1_t33103_1_0_0;
struct ICollection_1_t33103;
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33103_GenericClass;
TypeInfo ICollection_1_t33103_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33103_MethodInfos/* methods */
	, ICollection_1_t33103_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33103_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33103_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33103_0_0_0/* byval_arg */
	, &ICollection_1_t33103_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33103_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33105_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ServerListItem/Type>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<ServerListItem/Type>
extern TypeInfo IEnumerable_1_t33105_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27964_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ServerListItem/Type>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251167_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33105_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27964_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33105_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251167_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33105_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33105_0_0_0;
extern Il2CppType IEnumerable_1_t33105_1_0_0;
struct IEnumerable_1_t33105;
extern TypeInfo IEnumerable_1_t33105_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33105_GenericClass;
TypeInfo IEnumerable_1_t33105_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33105_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33105_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33105_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33105_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33105_0_0_0/* byval_arg */
	, &IEnumerable_1_t33105_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33105_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33104_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<ServerListItem/Type>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<ServerListItem/Type>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<ServerListItem/Type>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<ServerListItem/Type>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<ServerListItem/Type>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<ServerListItem/Type>
extern MethodInfo IList_1_get_Item_m251168_MethodInfo;
extern MethodInfo IList_1_set_Item_m251169_MethodInfo;
static PropertyInfo IList_1_t33104____Item_PropertyInfo = 
{
	&IList_1_t33104_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251168_MethodInfo/* get */
	, &IList_1_set_Item_m251169_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33104_PropertyInfos[] =
{
	&IList_1_t33104____Item_PropertyInfo,
	NULL
};
extern Il2CppType Type_t1934_0_0_0;
static ParameterInfo IList_1_t33104_IList_1_IndexOf_m251170_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Type_t1934_0_0_0},
};
extern TypeInfo IList_1_t33104_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<ServerListItem/Type>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251170_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33104_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33104_IList_1_IndexOf_m251170_ParameterInfos/* parameters */
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
extern Il2CppType Type_t1934_0_0_0;
static ParameterInfo IList_1_t33104_IList_1_Insert_m251171_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Type_t1934_0_0_0},
};
extern TypeInfo IList_1_t33104_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerListItem/Type>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251171_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33104_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33104_IList_1_Insert_m251171_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33104_IList_1_RemoveAt_m251172_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33104_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerListItem/Type>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251172_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33104_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33104_IList_1_RemoveAt_m251172_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33104_IList_1_get_Item_m251168_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33104_il2cpp_TypeInfo;
extern Il2CppType Type_t1934_0_0_0;
extern void* RuntimeInvoker_Type_t1934_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<ServerListItem/Type>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251168_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33104_il2cpp_TypeInfo/* declaring_type */
	, &Type_t1934_0_0_0/* return_type */
	, RuntimeInvoker_Type_t1934_Int32_t73/* invoker_method */
	, IList_1_t33104_IList_1_get_Item_m251168_ParameterInfos/* parameters */
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
extern Il2CppType Type_t1934_0_0_0;
static ParameterInfo IList_1_t33104_IList_1_set_Item_m251169_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Type_t1934_0_0_0},
};
extern TypeInfo IList_1_t33104_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerListItem/Type>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251169_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33104_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33104_IList_1_set_Item_m251169_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33104_MethodInfos[] =
{
	&IList_1_IndexOf_m251170_MethodInfo,
	&IList_1_Insert_m251171_MethodInfo,
	&IList_1_RemoveAt_m251172_MethodInfo,
	&IList_1_get_Item_m251168_MethodInfo,
	&IList_1_set_Item_m251169_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33103_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33105_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33104_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33103_il2cpp_TypeInfo,
	&IEnumerable_1_t33105_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33104_0_0_0;
extern Il2CppType IList_1_t33104_1_0_0;
struct IList_1_t33104;
extern TypeInfo IList_1_t33104_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33104_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33104_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33104_MethodInfos/* methods */
	, IList_1_t33104_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33104_il2cpp_TypeInfo/* element_class */
	, IList_1_t33104_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33104_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33104_0_0_0/* byval_arg */
	, &IList_1_t33104_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33104_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27965_il2cpp_TypeInfo;

// ServerPageItem
#include "AssemblyU2DCSharp_ServerPageItem.h"


// T System.Collections.Generic.IEnumerator`1<ServerPageItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<ServerPageItem>
extern MethodInfo IEnumerator_1_get_Current_m251173_MethodInfo;
static PropertyInfo IEnumerator_1_t27965____Current_PropertyInfo = 
{
	&IEnumerator_1_t27965_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251173_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27965_PropertyInfos[] =
{
	&IEnumerator_1_t27965____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27965_il2cpp_TypeInfo;
extern Il2CppType ServerPageItem_t1937_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<ServerPageItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251173_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27965_il2cpp_TypeInfo/* declaring_type */
	, &ServerPageItem_t1937_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27965_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251173_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27965_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27965_0_0_0;
extern Il2CppType IEnumerator_1_t27965_1_0_0;
struct IEnumerator_1_t27965;
extern TypeInfo IEnumerator_1_t27965_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27965_GenericClass;
TypeInfo IEnumerator_1_t27965_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27965_MethodInfos/* methods */
	, IEnumerator_1_t27965_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27965_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27965_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27965_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27965_0_0_0/* byval_arg */
	, &IEnumerator_1_t27965_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27965_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<ServerPageItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1615.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<ServerPageItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1615MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern TypeInfo ServerPageItem_t1937_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140556_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisServerPageItem_t1937_m204938_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<ServerPageItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<ServerPageItem>(System.Int32)
#define Array_InternalArray__get_Item_TisServerPageItem_t1937_m204938(__this, p0, method) (ServerPageItem_t1937 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisServerPageItem_t1937_m204938_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<ServerPageItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<ServerPageItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<ServerPageItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<ServerPageItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<ServerPageItem>::MoveNext()
// T System.Array/InternalEnumerator`1<ServerPageItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<ServerPageItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19235____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19235, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19235____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19235, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19235_FieldInfos[] =
{
	&InternalEnumerator_1_t19235____array_FieldInfo,
	&InternalEnumerator_1_t19235____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140553_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19235____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19235_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140553_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140556_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19235____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19235_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140556_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19235_PropertyInfos[] =
{
	&InternalEnumerator_1_t19235____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19235____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19235_InternalEnumerator_1__ctor_m140551_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerPageItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140551_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19235_InternalEnumerator_1__ctor_m140551_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerPageItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140552_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<ServerPageItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140553_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ServerPageItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140554_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<ServerPageItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140555_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern Il2CppType ServerPageItem_t1937_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<ServerPageItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140556_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* declaring_type */
	, &ServerPageItem_t1937_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19235_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140551_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140552_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140553_MethodInfo,
	&InternalEnumerator_1_Dispose_m140554_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140555_MethodInfo,
	&InternalEnumerator_1_get_Current_m140556_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140553_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140555_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140552_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140554_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140556_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19235_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140553_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140555_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140552_MethodInfo,
	&InternalEnumerator_1_Dispose_m140554_MethodInfo,
	&InternalEnumerator_1_get_Current_m140556_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27965_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19235_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27965_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27965_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19235_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27965_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140556_MethodInfo;
extern TypeInfo ServerPageItem_t1937_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisServerPageItem_t1937_m204938_MethodInfo;
static void* InternalEnumerator_1_t19235_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140556_MethodInfo,
	&ServerPageItem_t1937_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisServerPageItem_t1937_m204938_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19235_0_0_0;
extern Il2CppType InternalEnumerator_1_t19235_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19235_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19235_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19235_MethodInfos/* methods */
	, InternalEnumerator_1_t19235_PropertyInfos/* properties */
	, InternalEnumerator_1_t19235_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19235_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19235_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19235_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19235_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19235_1_0_0/* this_arg */
	, InternalEnumerator_1_t19235_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19235_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19235_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19235)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<ServerPageItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<ServerPageItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<ServerPageItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<ServerPageItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<ServerPageItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<ServerPageItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<ServerPageItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<ServerPageItem>
extern MethodInfo ICollection_1_get_Count_m251174_MethodInfo;
static PropertyInfo ICollection_1_t33106____Count_PropertyInfo = 
{
	&ICollection_1_t33106_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251174_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251175_MethodInfo;
static PropertyInfo ICollection_1_t33106____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33106_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251175_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33106_PropertyInfos[] =
{
	&ICollection_1_t33106____Count_PropertyInfo,
	&ICollection_1_t33106____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<ServerPageItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251174_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerPageItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251175_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo ICollection_1_t33106_ICollection_1_Add_m251176_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerPageItem>::Add(T)
MethodInfo ICollection_1_Add_m251176_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33106_ICollection_1_Add_m251176_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerPageItem>::Clear()
MethodInfo ICollection_1_Clear_m251177_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo ICollection_1_t33106_ICollection_1_Contains_m251178_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerPageItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251178_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33106_ICollection_1_Contains_m251178_ParameterInfos/* parameters */
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
extern Il2CppType ServerPageItemU5BU5D_t25972_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33106_ICollection_1_CopyTo_m251179_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ServerPageItemU5BU5D_t25972_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ServerPageItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251179_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33106_ICollection_1_CopyTo_m251179_ParameterInfos/* parameters */
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
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo ICollection_1_t33106_ICollection_1_Remove_m251180_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ServerPageItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251180_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33106_ICollection_1_Remove_m251180_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33106_MethodInfos[] =
{
	&ICollection_1_get_Count_m251174_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251175_MethodInfo,
	&ICollection_1_Add_m251176_MethodInfo,
	&ICollection_1_Clear_m251177_MethodInfo,
	&ICollection_1_Contains_m251178_MethodInfo,
	&ICollection_1_CopyTo_m251179_MethodInfo,
	&ICollection_1_Remove_m251180_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33108_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33106_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33108_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33106_0_0_0;
extern Il2CppType ICollection_1_t33106_1_0_0;
struct ICollection_1_t33106;
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33106_GenericClass;
TypeInfo ICollection_1_t33106_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33106_MethodInfos/* methods */
	, ICollection_1_t33106_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33106_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33106_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33106_0_0_0/* byval_arg */
	, &ICollection_1_t33106_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33106_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33108_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ServerPageItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<ServerPageItem>
extern TypeInfo IEnumerable_1_t33108_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27965_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ServerPageItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251181_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33108_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27965_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33108_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251181_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33108_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33108_0_0_0;
extern Il2CppType IEnumerable_1_t33108_1_0_0;
struct IEnumerable_1_t33108;
extern TypeInfo IEnumerable_1_t33108_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33108_GenericClass;
TypeInfo IEnumerable_1_t33108_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33108_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33108_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33108_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33108_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33108_0_0_0/* byval_arg */
	, &IEnumerable_1_t33108_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33108_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33107_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<ServerPageItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<ServerPageItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<ServerPageItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<ServerPageItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<ServerPageItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<ServerPageItem>
extern MethodInfo IList_1_get_Item_m251182_MethodInfo;
extern MethodInfo IList_1_set_Item_m251183_MethodInfo;
static PropertyInfo IList_1_t33107____Item_PropertyInfo = 
{
	&IList_1_t33107_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251182_MethodInfo/* get */
	, &IList_1_set_Item_m251183_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33107_PropertyInfos[] =
{
	&IList_1_t33107____Item_PropertyInfo,
	NULL
};
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo IList_1_t33107_IList_1_IndexOf_m251184_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo IList_1_t33107_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<ServerPageItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251184_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33107_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33107_IList_1_IndexOf_m251184_ParameterInfos/* parameters */
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
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo IList_1_t33107_IList_1_Insert_m251185_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo IList_1_t33107_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerPageItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251185_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33107_IList_1_Insert_m251185_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33107_IList_1_RemoveAt_m251186_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33107_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerPageItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251186_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33107_IList_1_RemoveAt_m251186_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33107_IList_1_get_Item_m251182_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33107_il2cpp_TypeInfo;
extern Il2CppType ServerPageItem_t1937_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<ServerPageItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251182_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33107_il2cpp_TypeInfo/* declaring_type */
	, &ServerPageItem_t1937_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33107_IList_1_get_Item_m251182_ParameterInfos/* parameters */
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
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo IList_1_t33107_IList_1_set_Item_m251183_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo IList_1_t33107_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ServerPageItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251183_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33107_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33107_IList_1_set_Item_m251183_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33107_MethodInfos[] =
{
	&IList_1_IndexOf_m251184_MethodInfo,
	&IList_1_Insert_m251185_MethodInfo,
	&IList_1_RemoveAt_m251186_MethodInfo,
	&IList_1_get_Item_m251182_MethodInfo,
	&IList_1_set_Item_m251183_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33106_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33108_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33107_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33106_il2cpp_TypeInfo,
	&IEnumerable_1_t33108_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33107_0_0_0;
extern Il2CppType IList_1_t33107_1_0_0;
struct IList_1_t33107;
extern TypeInfo IList_1_t33107_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33107_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33107_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33107_MethodInfos/* methods */
	, IList_1_t33107_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33107_il2cpp_TypeInfo/* element_class */
	, IList_1_t33107_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33107_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33107_0_0_0/* byval_arg */
	, &IList_1_t33107_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33107_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<ServerPageItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_407.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19236_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<ServerPageItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_407MethodDeclarations.h"

// UnityEngine.Object
#include "UnityEngine_UnityEngine_Object.h"
// System.Reflection.MethodInfo
#include "mscorlib_System_Reflection_MethodInfo.h"
#include "mscorlib_ArrayTypes.h"
// UnityEngine.Events.InvokableCall`1<ServerPageItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_403.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19236_il2cpp_TypeInfo;
extern TypeInfo ServerPageItem_t1937_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<ServerPageItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_403MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140559_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140561_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<ServerPageItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<ServerPageItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<ServerPageItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19236____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19236_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19236, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19236_FieldInfos[] =
{
	&CachedInvokableCall_1_t19236____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19236_CachedInvokableCall_1__ctor_m140557_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19236_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<ServerPageItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140557_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19236_CachedInvokableCall_1__ctor_m140557_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19236_CachedInvokableCall_1_Invoke_m140558_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19236_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<ServerPageItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140558_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19236_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19236_CachedInvokableCall_1_Invoke_m140558_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19236_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140557_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140558_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140558_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140562_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19236_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140558_MethodInfo,
	&InvokableCall_1_Find_m140562_MethodInfo,
};
extern Il2CppType UnityAction_1_t19238_0_0_0;
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisServerPageItem_t1937_m204948_MethodInfo;
extern TypeInfo ServerPageItem_t1937_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140564_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140559_MethodInfo;
extern TypeInfo ServerPageItem_t1937_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140561_MethodInfo;
static void* CachedInvokableCall_1_t19236_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19238_0_0_0,
	&UnityAction_1_t19238_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisServerPageItem_t1937_m204948_MethodInfo,
	&ServerPageItem_t1937_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140564_MethodInfo,
	&InvokableCall_1__ctor_m140559_MethodInfo,
	&ServerPageItem_t1937_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140561_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19236_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19236_1_0_0;
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19236;
extern TypeInfo CachedInvokableCall_1_t19236_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19236_GenericClass;
TypeInfo CachedInvokableCall_1_t19236_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19236_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19236_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19236_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19236_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19236_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19236_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19236_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19236_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19236_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19236)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<ServerPageItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_410.h"
// System.Type
#include "mscorlib_System_Type.h"
// System.RuntimeTypeHandle
#include "mscorlib_System_RuntimeTypeHandle.h"
// System.Delegate
#include "mscorlib_System_Delegate.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentException.h"
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo ServerPageItem_t1937_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.BaseInvokableCall
#include "UnityEngine_UnityEngine_Events_BaseInvokableCallMethodDeclarations.h"
// System.Type
#include "mscorlib_System_TypeMethodDeclarations.h"
// System.Delegate
#include "mscorlib_System_DelegateMethodDeclarations.h"
// System.ArgumentException
#include "mscorlib_System_ArgumentExceptionMethodDeclarations.h"
// UnityEngine.Events.UnityAction`1<ServerPageItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_410MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19238_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisServerPageItem_t1937_m204948_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140564_MethodInfo;
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
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<ServerPageItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<ServerPageItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisServerPageItem_t1937_m204948(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisServerPageItem_t1937_m204948_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<ServerPageItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<ServerPageItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<ServerPageItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<ServerPageItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<ServerPageItem>
extern Il2CppType UnityAction_1_t19238_0_0_1;
FieldInfo InvokableCall_1_t19237____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19238_0_0_1/* type */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19237, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19237_FieldInfos[] =
{
	&InvokableCall_1_t19237____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19237_InvokableCall_1__ctor_m140559_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<ServerPageItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140559_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19237_InvokableCall_1__ctor_m140559_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19238_0_0_0;
static ParameterInfo InvokableCall_1_t19237_InvokableCall_1__ctor_m140560_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19238_0_0_0},
};
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<ServerPageItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140560_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19237_InvokableCall_1__ctor_m140560_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19237_InvokableCall_1_Invoke_m140561_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<ServerPageItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140561_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19237_InvokableCall_1_Invoke_m140561_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19237_InvokableCall_1_Find_m140562_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<ServerPageItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140562_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19237_InvokableCall_1_Find_m140562_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19237_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140559_MethodInfo,
	&InvokableCall_1__ctor_m140560_MethodInfo,
	&InvokableCall_1_Invoke_m140561_MethodInfo,
	&InvokableCall_1_Find_m140562_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140561_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140562_MethodInfo;
static MethodInfo* InvokableCall_1_t19237_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140561_MethodInfo,
	&InvokableCall_1_Find_m140562_MethodInfo,
};
extern Il2CppType UnityAction_1_t19238_0_0_0;
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisServerPageItem_t1937_m204948_MethodInfo;
extern TypeInfo ServerPageItem_t1937_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140564_MethodInfo;
static void* InvokableCall_1_t19237_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19238_0_0_0,
	&UnityAction_1_t19238_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisServerPageItem_t1937_m204948_MethodInfo,
	&ServerPageItem_t1937_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140564_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19237_0_0_0;
extern Il2CppType InvokableCall_1_t19237_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19237;
extern TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19237_GenericClass;
TypeInfo InvokableCall_1_t19237_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19237_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19237_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19237_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19237_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19237_0_0_0/* byval_arg */
	, &InvokableCall_1_t19237_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19237_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19237_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19237)/* instance_size */
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
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;

// System.IntPtr
#include "mscorlib_System_IntPtr.h"
// System.AsyncCallback
#include "mscorlib_System_AsyncCallback.h"


// System.Void UnityEngine.Events.UnityAction`1<ServerPageItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<ServerPageItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<ServerPageItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<ServerPageItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<ServerPageItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19238_UnityAction_1__ctor_m140563_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<ServerPageItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140563_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19238_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19238_UnityAction_1__ctor_m140563_ParameterInfos/* parameters */
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
extern Il2CppType ServerPageItem_t1937_0_0_0;
static ParameterInfo UnityAction_1_t19238_UnityAction_1_Invoke_m140564_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
};
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<ServerPageItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140564_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19238_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19238_UnityAction_1_Invoke_m140564_ParameterInfos/* parameters */
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
extern Il2CppType ServerPageItem_t1937_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19238_UnityAction_1_BeginInvoke_m140565_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ServerPageItem_t1937_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<ServerPageItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140565_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19238_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19238_UnityAction_1_BeginInvoke_m140565_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19238_UnityAction_1_EndInvoke_m140566_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<ServerPageItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140566_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19238_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19238_UnityAction_1_EndInvoke_m140566_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19238_MethodInfos[] =
{
	&UnityAction_1__ctor_m140563_MethodInfo,
	&UnityAction_1_Invoke_m140564_MethodInfo,
	&UnityAction_1_BeginInvoke_m140565_MethodInfo,
	&UnityAction_1_EndInvoke_m140566_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140564_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140565_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140566_MethodInfo;
static MethodInfo* UnityAction_1_t19238_VTable[] =
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
	&UnityAction_1_Invoke_m140564_MethodInfo,
	&UnityAction_1_BeginInvoke_m140565_MethodInfo,
	&UnityAction_1_EndInvoke_m140566_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19238_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19238_0_0_0;
extern Il2CppType UnityAction_1_t19238_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19238;
extern TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19238_GenericClass;
TypeInfo UnityAction_1_t19238_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19238_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19238_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19238_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19238_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19238_0_0_0/* byval_arg */
	, &UnityAction_1_t19238_1_0_0/* this_arg */
	, UnityAction_1_t19238_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19238_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19238)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27966_il2cpp_TypeInfo;

// ShareRewardItem
#include "AssemblyU2DCSharp_ShareRewardItem.h"


// T System.Collections.Generic.IEnumerator`1<ShareRewardItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<ShareRewardItem>
extern MethodInfo IEnumerator_1_get_Current_m251187_MethodInfo;
static PropertyInfo IEnumerator_1_t27966____Current_PropertyInfo = 
{
	&IEnumerator_1_t27966_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251187_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27966_PropertyInfos[] =
{
	&IEnumerator_1_t27966____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27966_il2cpp_TypeInfo;
extern Il2CppType ShareRewardItem_t1938_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<ShareRewardItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251187_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27966_il2cpp_TypeInfo/* declaring_type */
	, &ShareRewardItem_t1938_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27966_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251187_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27966_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27966_0_0_0;
extern Il2CppType IEnumerator_1_t27966_1_0_0;
struct IEnumerator_1_t27966;
extern TypeInfo IEnumerator_1_t27966_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27966_GenericClass;
TypeInfo IEnumerator_1_t27966_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27966_MethodInfos/* methods */
	, IEnumerator_1_t27966_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27966_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27966_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27966_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27966_0_0_0/* byval_arg */
	, &IEnumerator_1_t27966_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27966_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<ShareRewardItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1616.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<ShareRewardItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1616MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern TypeInfo ShareRewardItem_t1938_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140572_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisShareRewardItem_t1938_m204950_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<ShareRewardItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<ShareRewardItem>(System.Int32)
#define Array_InternalArray__get_Item_TisShareRewardItem_t1938_m204950(__this, p0, method) (ShareRewardItem_t1938 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisShareRewardItem_t1938_m204950_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<ShareRewardItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<ShareRewardItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<ShareRewardItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<ShareRewardItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<ShareRewardItem>::MoveNext()
// T System.Array/InternalEnumerator`1<ShareRewardItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<ShareRewardItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19239____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19239, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19239____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19239, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19239_FieldInfos[] =
{
	&InternalEnumerator_1_t19239____array_FieldInfo,
	&InternalEnumerator_1_t19239____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140569_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19239____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19239_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140569_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140572_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19239____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19239_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140572_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19239_PropertyInfos[] =
{
	&InternalEnumerator_1_t19239____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19239____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19239_InternalEnumerator_1__ctor_m140567_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ShareRewardItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140567_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19239_InternalEnumerator_1__ctor_m140567_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ShareRewardItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140568_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<ShareRewardItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140569_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<ShareRewardItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140570_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<ShareRewardItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140571_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern Il2CppType ShareRewardItem_t1938_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<ShareRewardItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140572_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* declaring_type */
	, &ShareRewardItem_t1938_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19239_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140567_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140568_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140569_MethodInfo,
	&InternalEnumerator_1_Dispose_m140570_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140571_MethodInfo,
	&InternalEnumerator_1_get_Current_m140572_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140569_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140571_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140568_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140570_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140572_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19239_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140569_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140571_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140568_MethodInfo,
	&InternalEnumerator_1_Dispose_m140570_MethodInfo,
	&InternalEnumerator_1_get_Current_m140572_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27966_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19239_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27966_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27966_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19239_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27966_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140572_MethodInfo;
extern TypeInfo ShareRewardItem_t1938_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisShareRewardItem_t1938_m204950_MethodInfo;
static void* InternalEnumerator_1_t19239_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140572_MethodInfo,
	&ShareRewardItem_t1938_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisShareRewardItem_t1938_m204950_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19239_0_0_0;
extern Il2CppType InternalEnumerator_1_t19239_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19239_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19239_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19239_MethodInfos/* methods */
	, InternalEnumerator_1_t19239_PropertyInfos/* properties */
	, InternalEnumerator_1_t19239_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19239_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19239_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19239_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19239_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19239_1_0_0/* this_arg */
	, InternalEnumerator_1_t19239_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19239_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19239_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19239)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<ShareRewardItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<ShareRewardItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<ShareRewardItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<ShareRewardItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<ShareRewardItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<ShareRewardItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<ShareRewardItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<ShareRewardItem>
extern MethodInfo ICollection_1_get_Count_m251188_MethodInfo;
static PropertyInfo ICollection_1_t33109____Count_PropertyInfo = 
{
	&ICollection_1_t33109_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251188_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251189_MethodInfo;
static PropertyInfo ICollection_1_t33109____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33109_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251189_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33109_PropertyInfos[] =
{
	&ICollection_1_t33109____Count_PropertyInfo,
	&ICollection_1_t33109____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<ShareRewardItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251188_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ShareRewardItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251189_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo ICollection_1_t33109_ICollection_1_Add_m251190_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ShareRewardItem>::Add(T)
MethodInfo ICollection_1_Add_m251190_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33109_ICollection_1_Add_m251190_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ShareRewardItem>::Clear()
MethodInfo ICollection_1_Clear_m251191_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo ICollection_1_t33109_ICollection_1_Contains_m251192_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ShareRewardItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251192_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33109_ICollection_1_Contains_m251192_ParameterInfos/* parameters */
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
extern Il2CppType ShareRewardItemU5BU5D_t2063_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33109_ICollection_1_CopyTo_m251193_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ShareRewardItemU5BU5D_t2063_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<ShareRewardItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251193_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33109_ICollection_1_CopyTo_m251193_ParameterInfos/* parameters */
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
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo ICollection_1_t33109_ICollection_1_Remove_m251194_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<ShareRewardItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251194_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33109_ICollection_1_Remove_m251194_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33109_MethodInfos[] =
{
	&ICollection_1_get_Count_m251188_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251189_MethodInfo,
	&ICollection_1_Add_m251190_MethodInfo,
	&ICollection_1_Clear_m251191_MethodInfo,
	&ICollection_1_Contains_m251192_MethodInfo,
	&ICollection_1_CopyTo_m251193_MethodInfo,
	&ICollection_1_Remove_m251194_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33111_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33109_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33111_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33109_0_0_0;
extern Il2CppType ICollection_1_t33109_1_0_0;
struct ICollection_1_t33109;
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33109_GenericClass;
TypeInfo ICollection_1_t33109_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33109_MethodInfos/* methods */
	, ICollection_1_t33109_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33109_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33109_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33109_0_0_0/* byval_arg */
	, &ICollection_1_t33109_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33109_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33111_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ShareRewardItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<ShareRewardItem>
extern TypeInfo IEnumerable_1_t33111_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27966_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<ShareRewardItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251195_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33111_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27966_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33111_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251195_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33111_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33111_0_0_0;
extern Il2CppType IEnumerable_1_t33111_1_0_0;
struct IEnumerable_1_t33111;
extern TypeInfo IEnumerable_1_t33111_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33111_GenericClass;
TypeInfo IEnumerable_1_t33111_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33111_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33111_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33111_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33111_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33111_0_0_0/* byval_arg */
	, &IEnumerable_1_t33111_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33111_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33110_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<ShareRewardItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<ShareRewardItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<ShareRewardItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<ShareRewardItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<ShareRewardItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<ShareRewardItem>
extern MethodInfo IList_1_get_Item_m251196_MethodInfo;
extern MethodInfo IList_1_set_Item_m251197_MethodInfo;
static PropertyInfo IList_1_t33110____Item_PropertyInfo = 
{
	&IList_1_t33110_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251196_MethodInfo/* get */
	, &IList_1_set_Item_m251197_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33110_PropertyInfos[] =
{
	&IList_1_t33110____Item_PropertyInfo,
	NULL
};
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo IList_1_t33110_IList_1_IndexOf_m251198_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo IList_1_t33110_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<ShareRewardItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251198_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33110_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33110_IList_1_IndexOf_m251198_ParameterInfos/* parameters */
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
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo IList_1_t33110_IList_1_Insert_m251199_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo IList_1_t33110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ShareRewardItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251199_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33110_IList_1_Insert_m251199_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33110_IList_1_RemoveAt_m251200_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ShareRewardItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251200_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33110_IList_1_RemoveAt_m251200_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33110_IList_1_get_Item_m251196_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33110_il2cpp_TypeInfo;
extern Il2CppType ShareRewardItem_t1938_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<ShareRewardItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251196_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33110_il2cpp_TypeInfo/* declaring_type */
	, &ShareRewardItem_t1938_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33110_IList_1_get_Item_m251196_ParameterInfos/* parameters */
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
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo IList_1_t33110_IList_1_set_Item_m251197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo IList_1_t33110_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<ShareRewardItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251197_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33110_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33110_IList_1_set_Item_m251197_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33110_MethodInfos[] =
{
	&IList_1_IndexOf_m251198_MethodInfo,
	&IList_1_Insert_m251199_MethodInfo,
	&IList_1_RemoveAt_m251200_MethodInfo,
	&IList_1_get_Item_m251196_MethodInfo,
	&IList_1_set_Item_m251197_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33109_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33111_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33110_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33109_il2cpp_TypeInfo,
	&IEnumerable_1_t33111_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33110_0_0_0;
extern Il2CppType IList_1_t33110_1_0_0;
struct IList_1_t33110;
extern TypeInfo IList_1_t33110_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33110_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33110_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33110_MethodInfos/* methods */
	, IList_1_t33110_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33110_il2cpp_TypeInfo/* element_class */
	, IList_1_t33110_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33110_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33110_0_0_0/* byval_arg */
	, &IList_1_t33110_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33110_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<ShareRewardItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_408.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19240_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<ShareRewardItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_408MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<ShareRewardItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_404.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19240_il2cpp_TypeInfo;
extern TypeInfo ShareRewardItem_t1938_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<ShareRewardItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_404MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140575_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140577_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<ShareRewardItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<ShareRewardItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<ShareRewardItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19240____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19240_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19240, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19240_FieldInfos[] =
{
	&CachedInvokableCall_1_t19240____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19240_CachedInvokableCall_1__ctor_m140573_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19240_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<ShareRewardItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140573_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19240_CachedInvokableCall_1__ctor_m140573_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19240_CachedInvokableCall_1_Invoke_m140574_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19240_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<ShareRewardItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140574_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19240_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19240_CachedInvokableCall_1_Invoke_m140574_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19240_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140573_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140574_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140574_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140578_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19240_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140574_MethodInfo,
	&InvokableCall_1_Find_m140578_MethodInfo,
};
extern Il2CppType UnityAction_1_t19242_0_0_0;
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisShareRewardItem_t1938_m204960_MethodInfo;
extern TypeInfo ShareRewardItem_t1938_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140580_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140575_MethodInfo;
extern TypeInfo ShareRewardItem_t1938_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140577_MethodInfo;
static void* CachedInvokableCall_1_t19240_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19242_0_0_0,
	&UnityAction_1_t19242_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisShareRewardItem_t1938_m204960_MethodInfo,
	&ShareRewardItem_t1938_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140580_MethodInfo,
	&InvokableCall_1__ctor_m140575_MethodInfo,
	&ShareRewardItem_t1938_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140577_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19240_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19240_1_0_0;
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19240;
extern TypeInfo CachedInvokableCall_1_t19240_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19240_GenericClass;
TypeInfo CachedInvokableCall_1_t19240_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19240_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19240_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19240_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19240_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19240_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19240_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19240_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19240_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19240_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19240)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<ShareRewardItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_411.h"
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo ShareRewardItem_t1938_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<ShareRewardItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_411MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19242_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisShareRewardItem_t1938_m204960_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140580_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<ShareRewardItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<ShareRewardItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisShareRewardItem_t1938_m204960(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisShareRewardItem_t1938_m204960_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<ShareRewardItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<ShareRewardItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<ShareRewardItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<ShareRewardItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<ShareRewardItem>
extern Il2CppType UnityAction_1_t19242_0_0_1;
FieldInfo InvokableCall_1_t19241____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19242_0_0_1/* type */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19241, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19241_FieldInfos[] =
{
	&InvokableCall_1_t19241____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19241_InvokableCall_1__ctor_m140575_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<ShareRewardItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140575_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19241_InvokableCall_1__ctor_m140575_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19242_0_0_0;
static ParameterInfo InvokableCall_1_t19241_InvokableCall_1__ctor_m140576_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19242_0_0_0},
};
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<ShareRewardItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140576_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19241_InvokableCall_1__ctor_m140576_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19241_InvokableCall_1_Invoke_m140577_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<ShareRewardItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140577_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19241_InvokableCall_1_Invoke_m140577_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19241_InvokableCall_1_Find_m140578_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<ShareRewardItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140578_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19241_InvokableCall_1_Find_m140578_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19241_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140575_MethodInfo,
	&InvokableCall_1__ctor_m140576_MethodInfo,
	&InvokableCall_1_Invoke_m140577_MethodInfo,
	&InvokableCall_1_Find_m140578_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140577_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140578_MethodInfo;
static MethodInfo* InvokableCall_1_t19241_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140577_MethodInfo,
	&InvokableCall_1_Find_m140578_MethodInfo,
};
extern Il2CppType UnityAction_1_t19242_0_0_0;
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisShareRewardItem_t1938_m204960_MethodInfo;
extern TypeInfo ShareRewardItem_t1938_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140580_MethodInfo;
static void* InvokableCall_1_t19241_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19242_0_0_0,
	&UnityAction_1_t19242_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisShareRewardItem_t1938_m204960_MethodInfo,
	&ShareRewardItem_t1938_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140580_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19241_0_0_0;
extern Il2CppType InvokableCall_1_t19241_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19241;
extern TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19241_GenericClass;
TypeInfo InvokableCall_1_t19241_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19241_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19241_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19241_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19241_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19241_0_0_0/* byval_arg */
	, &InvokableCall_1_t19241_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19241_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19241_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19241)/* instance_size */
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
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<ShareRewardItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<ShareRewardItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<ShareRewardItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<ShareRewardItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<ShareRewardItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19242_UnityAction_1__ctor_m140579_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<ShareRewardItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140579_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19242_UnityAction_1__ctor_m140579_ParameterInfos/* parameters */
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
extern Il2CppType ShareRewardItem_t1938_0_0_0;
static ParameterInfo UnityAction_1_t19242_UnityAction_1_Invoke_m140580_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
};
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<ShareRewardItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140580_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19242_UnityAction_1_Invoke_m140580_ParameterInfos/* parameters */
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
extern Il2CppType ShareRewardItem_t1938_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19242_UnityAction_1_BeginInvoke_m140581_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &ShareRewardItem_t1938_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<ShareRewardItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140581_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19242_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19242_UnityAction_1_BeginInvoke_m140581_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19242_UnityAction_1_EndInvoke_m140582_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<ShareRewardItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140582_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19242_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19242_UnityAction_1_EndInvoke_m140582_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19242_MethodInfos[] =
{
	&UnityAction_1__ctor_m140579_MethodInfo,
	&UnityAction_1_Invoke_m140580_MethodInfo,
	&UnityAction_1_BeginInvoke_m140581_MethodInfo,
	&UnityAction_1_EndInvoke_m140582_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140580_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140581_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140582_MethodInfo;
static MethodInfo* UnityAction_1_t19242_VTable[] =
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
	&UnityAction_1_Invoke_m140580_MethodInfo,
	&UnityAction_1_BeginInvoke_m140581_MethodInfo,
	&UnityAction_1_EndInvoke_m140582_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19242_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19242_0_0_0;
extern Il2CppType UnityAction_1_t19242_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19242;
extern TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19242_GenericClass;
TypeInfo UnityAction_1_t19242_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19242_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19242_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19242_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19242_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19242_0_0_0/* byval_arg */
	, &UnityAction_1_t19242_1_0_0/* this_arg */
	, UnityAction_1_t19242_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19242_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19242)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27967_il2cpp_TypeInfo;

// SubUIBG
#include "AssemblyU2DCSharp_SubUIBG.h"


// T System.Collections.Generic.IEnumerator`1<SubUIBG>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SubUIBG>
extern MethodInfo IEnumerator_1_get_Current_m251201_MethodInfo;
static PropertyInfo IEnumerator_1_t27967____Current_PropertyInfo = 
{
	&IEnumerator_1_t27967_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251201_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27967_PropertyInfos[] =
{
	&IEnumerator_1_t27967____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27967_il2cpp_TypeInfo;
extern Il2CppType SubUIBG_t1939_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SubUIBG>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251201_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27967_il2cpp_TypeInfo/* declaring_type */
	, &SubUIBG_t1939_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27967_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251201_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27967_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27967_0_0_0;
extern Il2CppType IEnumerator_1_t27967_1_0_0;
struct IEnumerator_1_t27967;
extern TypeInfo IEnumerator_1_t27967_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27967_GenericClass;
TypeInfo IEnumerator_1_t27967_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27967_MethodInfos/* methods */
	, IEnumerator_1_t27967_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27967_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27967_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27967_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27967_0_0_0/* byval_arg */
	, &IEnumerator_1_t27967_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27967_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<SubUIBG>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1617.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SubUIBG>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1617MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern TypeInfo SubUIBG_t1939_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140588_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSubUIBG_t1939_m204962_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SubUIBG>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SubUIBG>(System.Int32)
#define Array_InternalArray__get_Item_TisSubUIBG_t1939_m204962(__this, p0, method) (SubUIBG_t1939 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSubUIBG_t1939_m204962_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SubUIBG>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SubUIBG>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SubUIBG>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SubUIBG>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SubUIBG>::MoveNext()
// T System.Array/InternalEnumerator`1<SubUIBG>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SubUIBG>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19243____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19243, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19243____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19243, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19243_FieldInfos[] =
{
	&InternalEnumerator_1_t19243____array_FieldInfo,
	&InternalEnumerator_1_t19243____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140585_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19243____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19243_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140585_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140588_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19243____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19243_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140588_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19243_PropertyInfos[] =
{
	&InternalEnumerator_1_t19243____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19243____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19243_InternalEnumerator_1__ctor_m140583_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SubUIBG>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140583_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19243_InternalEnumerator_1__ctor_m140583_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SubUIBG>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140584_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SubUIBG>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140585_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SubUIBG>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140586_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SubUIBG>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140587_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern Il2CppType SubUIBG_t1939_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SubUIBG>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140588_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* declaring_type */
	, &SubUIBG_t1939_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19243_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140583_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140584_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140585_MethodInfo,
	&InternalEnumerator_1_Dispose_m140586_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140587_MethodInfo,
	&InternalEnumerator_1_get_Current_m140588_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140585_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140587_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140584_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140586_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140588_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19243_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140585_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140587_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140584_MethodInfo,
	&InternalEnumerator_1_Dispose_m140586_MethodInfo,
	&InternalEnumerator_1_get_Current_m140588_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27967_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19243_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27967_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27967_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19243_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27967_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140588_MethodInfo;
extern TypeInfo SubUIBG_t1939_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSubUIBG_t1939_m204962_MethodInfo;
static void* InternalEnumerator_1_t19243_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140588_MethodInfo,
	&SubUIBG_t1939_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSubUIBG_t1939_m204962_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19243_0_0_0;
extern Il2CppType InternalEnumerator_1_t19243_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19243_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19243_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19243_MethodInfos/* methods */
	, InternalEnumerator_1_t19243_PropertyInfos/* properties */
	, InternalEnumerator_1_t19243_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19243_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19243_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19243_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19243_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19243_1_0_0/* this_arg */
	, InternalEnumerator_1_t19243_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19243_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19243_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19243)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SubUIBG>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SubUIBG>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SubUIBG>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SubUIBG>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SubUIBG>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SubUIBG>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SubUIBG>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SubUIBG>
extern MethodInfo ICollection_1_get_Count_m251202_MethodInfo;
static PropertyInfo ICollection_1_t33112____Count_PropertyInfo = 
{
	&ICollection_1_t33112_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251202_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251203_MethodInfo;
static PropertyInfo ICollection_1_t33112____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33112_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251203_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33112_PropertyInfos[] =
{
	&ICollection_1_t33112____Count_PropertyInfo,
	&ICollection_1_t33112____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SubUIBG>::get_Count()
MethodInfo ICollection_1_get_Count_m251202_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SubUIBG>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251203_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo ICollection_1_t33112_ICollection_1_Add_m251204_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SubUIBG>::Add(T)
MethodInfo ICollection_1_Add_m251204_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33112_ICollection_1_Add_m251204_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SubUIBG>::Clear()
MethodInfo ICollection_1_Clear_m251205_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo ICollection_1_t33112_ICollection_1_Contains_m251206_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SubUIBG>::Contains(T)
MethodInfo ICollection_1_Contains_m251206_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33112_ICollection_1_Contains_m251206_ParameterInfos/* parameters */
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
extern Il2CppType SubUIBGU5BU5D_t25973_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33112_ICollection_1_CopyTo_m251207_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SubUIBGU5BU5D_t25973_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SubUIBG>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251207_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33112_ICollection_1_CopyTo_m251207_ParameterInfos/* parameters */
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
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo ICollection_1_t33112_ICollection_1_Remove_m251208_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SubUIBG>::Remove(T)
MethodInfo ICollection_1_Remove_m251208_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33112_ICollection_1_Remove_m251208_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33112_MethodInfos[] =
{
	&ICollection_1_get_Count_m251202_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251203_MethodInfo,
	&ICollection_1_Add_m251204_MethodInfo,
	&ICollection_1_Clear_m251205_MethodInfo,
	&ICollection_1_Contains_m251206_MethodInfo,
	&ICollection_1_CopyTo_m251207_MethodInfo,
	&ICollection_1_Remove_m251208_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33114_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33112_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33112_0_0_0;
extern Il2CppType ICollection_1_t33112_1_0_0;
struct ICollection_1_t33112;
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33112_GenericClass;
TypeInfo ICollection_1_t33112_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33112_MethodInfos/* methods */
	, ICollection_1_t33112_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33112_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33112_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33112_0_0_0/* byval_arg */
	, &ICollection_1_t33112_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33112_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33114_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SubUIBG>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SubUIBG>
extern TypeInfo IEnumerable_1_t33114_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27967_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SubUIBG>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251209_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33114_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27967_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33114_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251209_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33114_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33114_0_0_0;
extern Il2CppType IEnumerable_1_t33114_1_0_0;
struct IEnumerable_1_t33114;
extern TypeInfo IEnumerable_1_t33114_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33114_GenericClass;
TypeInfo IEnumerable_1_t33114_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33114_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33114_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33114_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33114_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33114_0_0_0/* byval_arg */
	, &IEnumerable_1_t33114_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33114_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33113_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SubUIBG>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SubUIBG>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SubUIBG>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SubUIBG>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SubUIBG>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SubUIBG>
extern MethodInfo IList_1_get_Item_m251210_MethodInfo;
extern MethodInfo IList_1_set_Item_m251211_MethodInfo;
static PropertyInfo IList_1_t33113____Item_PropertyInfo = 
{
	&IList_1_t33113_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251210_MethodInfo/* get */
	, &IList_1_set_Item_m251211_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33113_PropertyInfos[] =
{
	&IList_1_t33113____Item_PropertyInfo,
	NULL
};
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo IList_1_t33113_IList_1_IndexOf_m251212_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo IList_1_t33113_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SubUIBG>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251212_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33113_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33113_IList_1_IndexOf_m251212_ParameterInfos/* parameters */
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
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo IList_1_t33113_IList_1_Insert_m251213_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo IList_1_t33113_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SubUIBG>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251213_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33113_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33113_IList_1_Insert_m251213_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33113_IList_1_RemoveAt_m251214_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33113_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SubUIBG>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251214_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33113_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33113_IList_1_RemoveAt_m251214_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33113_IList_1_get_Item_m251210_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33113_il2cpp_TypeInfo;
extern Il2CppType SubUIBG_t1939_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SubUIBG>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251210_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33113_il2cpp_TypeInfo/* declaring_type */
	, &SubUIBG_t1939_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33113_IList_1_get_Item_m251210_ParameterInfos/* parameters */
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
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo IList_1_t33113_IList_1_set_Item_m251211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo IList_1_t33113_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SubUIBG>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251211_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33113_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33113_IList_1_set_Item_m251211_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33113_MethodInfos[] =
{
	&IList_1_IndexOf_m251212_MethodInfo,
	&IList_1_Insert_m251213_MethodInfo,
	&IList_1_RemoveAt_m251214_MethodInfo,
	&IList_1_get_Item_m251210_MethodInfo,
	&IList_1_set_Item_m251211_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33112_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33114_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33113_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33112_il2cpp_TypeInfo,
	&IEnumerable_1_t33114_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33113_0_0_0;
extern Il2CppType IList_1_t33113_1_0_0;
struct IList_1_t33113;
extern TypeInfo IList_1_t33113_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33113_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33113_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33113_MethodInfos/* methods */
	, IList_1_t33113_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33113_il2cpp_TypeInfo/* element_class */
	, IList_1_t33113_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33113_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33113_0_0_0/* byval_arg */
	, &IList_1_t33113_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33113_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<SubUIBG>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_409.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19244_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SubUIBG>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_409MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SubUIBG>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_405.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19244_il2cpp_TypeInfo;
extern TypeInfo SubUIBG_t1939_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SubUIBG>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_405MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140591_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140593_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SubUIBG>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SubUIBG>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SubUIBG>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19244____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19244_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19244, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19244_FieldInfos[] =
{
	&CachedInvokableCall_1_t19244____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19244_CachedInvokableCall_1__ctor_m140589_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19244_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SubUIBG>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140589_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19244_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19244_CachedInvokableCall_1__ctor_m140589_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19244_CachedInvokableCall_1_Invoke_m140590_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19244_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SubUIBG>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140590_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19244_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19244_CachedInvokableCall_1_Invoke_m140590_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19244_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140589_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140590_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140590_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140594_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19244_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140590_MethodInfo,
	&InvokableCall_1_Find_m140594_MethodInfo,
};
extern Il2CppType UnityAction_1_t19246_0_0_0;
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSubUIBG_t1939_m204972_MethodInfo;
extern TypeInfo SubUIBG_t1939_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140596_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140591_MethodInfo;
extern TypeInfo SubUIBG_t1939_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140593_MethodInfo;
static void* CachedInvokableCall_1_t19244_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19246_0_0_0,
	&UnityAction_1_t19246_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSubUIBG_t1939_m204972_MethodInfo,
	&SubUIBG_t1939_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140596_MethodInfo,
	&InvokableCall_1__ctor_m140591_MethodInfo,
	&SubUIBG_t1939_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140593_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19244_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19244_1_0_0;
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19244;
extern TypeInfo CachedInvokableCall_1_t19244_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19244_GenericClass;
TypeInfo CachedInvokableCall_1_t19244_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19244_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19244_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19244_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19244_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19244_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19244_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19244_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19244_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19244_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19244)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SubUIBG>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_412.h"
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SubUIBG_t1939_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SubUIBG>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_412MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19246_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSubUIBG_t1939_m204972_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140596_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SubUIBG>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SubUIBG>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSubUIBG_t1939_m204972(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSubUIBG_t1939_m204972_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SubUIBG>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SubUIBG>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SubUIBG>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SubUIBG>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SubUIBG>
extern Il2CppType UnityAction_1_t19246_0_0_1;
FieldInfo InvokableCall_1_t19245____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19246_0_0_1/* type */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19245, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19245_FieldInfos[] =
{
	&InvokableCall_1_t19245____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19245_InvokableCall_1__ctor_m140591_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SubUIBG>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140591_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19245_InvokableCall_1__ctor_m140591_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19246_0_0_0;
static ParameterInfo InvokableCall_1_t19245_InvokableCall_1__ctor_m140592_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19246_0_0_0},
};
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SubUIBG>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140592_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19245_InvokableCall_1__ctor_m140592_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19245_InvokableCall_1_Invoke_m140593_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SubUIBG>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140593_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19245_InvokableCall_1_Invoke_m140593_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19245_InvokableCall_1_Find_m140594_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SubUIBG>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140594_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19245_InvokableCall_1_Find_m140594_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19245_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140591_MethodInfo,
	&InvokableCall_1__ctor_m140592_MethodInfo,
	&InvokableCall_1_Invoke_m140593_MethodInfo,
	&InvokableCall_1_Find_m140594_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140593_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140594_MethodInfo;
static MethodInfo* InvokableCall_1_t19245_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140593_MethodInfo,
	&InvokableCall_1_Find_m140594_MethodInfo,
};
extern Il2CppType UnityAction_1_t19246_0_0_0;
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSubUIBG_t1939_m204972_MethodInfo;
extern TypeInfo SubUIBG_t1939_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140596_MethodInfo;
static void* InvokableCall_1_t19245_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19246_0_0_0,
	&UnityAction_1_t19246_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSubUIBG_t1939_m204972_MethodInfo,
	&SubUIBG_t1939_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140596_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19245_0_0_0;
extern Il2CppType InvokableCall_1_t19245_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19245;
extern TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19245_GenericClass;
TypeInfo InvokableCall_1_t19245_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19245_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19245_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19245_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19245_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19245_0_0_0/* byval_arg */
	, &InvokableCall_1_t19245_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19245_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19245_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19245)/* instance_size */
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
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SubUIBG>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SubUIBG>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SubUIBG>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SubUIBG>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SubUIBG>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19246_UnityAction_1__ctor_m140595_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SubUIBG>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140595_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19246_UnityAction_1__ctor_m140595_ParameterInfos/* parameters */
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
extern Il2CppType SubUIBG_t1939_0_0_0;
static ParameterInfo UnityAction_1_t19246_UnityAction_1_Invoke_m140596_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
};
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SubUIBG>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140596_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19246_UnityAction_1_Invoke_m140596_ParameterInfos/* parameters */
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
extern Il2CppType SubUIBG_t1939_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19246_UnityAction_1_BeginInvoke_m140597_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SubUIBG_t1939_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SubUIBG>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140597_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19246_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19246_UnityAction_1_BeginInvoke_m140597_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19246_UnityAction_1_EndInvoke_m140598_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SubUIBG>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140598_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19246_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19246_UnityAction_1_EndInvoke_m140598_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19246_MethodInfos[] =
{
	&UnityAction_1__ctor_m140595_MethodInfo,
	&UnityAction_1_Invoke_m140596_MethodInfo,
	&UnityAction_1_BeginInvoke_m140597_MethodInfo,
	&UnityAction_1_EndInvoke_m140598_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140596_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140597_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140598_MethodInfo;
static MethodInfo* UnityAction_1_t19246_VTable[] =
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
	&UnityAction_1_Invoke_m140596_MethodInfo,
	&UnityAction_1_BeginInvoke_m140597_MethodInfo,
	&UnityAction_1_EndInvoke_m140598_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19246_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19246_0_0_0;
extern Il2CppType UnityAction_1_t19246_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19246;
extern TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19246_GenericClass;
TypeInfo UnityAction_1_t19246_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19246_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19246_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19246_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19246_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19246_0_0_0/* byval_arg */
	, &UnityAction_1_t19246_1_0_0/* this_arg */
	, UnityAction_1_t19246_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19246_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19246)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27968_il2cpp_TypeInfo;

// SwordsManItem
#include "AssemblyU2DCSharp_SwordsManItem.h"


// T System.Collections.Generic.IEnumerator`1<SwordsManItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SwordsManItem>
extern MethodInfo IEnumerator_1_get_Current_m251215_MethodInfo;
static PropertyInfo IEnumerator_1_t27968____Current_PropertyInfo = 
{
	&IEnumerator_1_t27968_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251215_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27968_PropertyInfos[] =
{
	&IEnumerator_1_t27968____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27968_il2cpp_TypeInfo;
extern Il2CppType SwordsManItem_t1943_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SwordsManItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251215_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27968_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManItem_t1943_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27968_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251215_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27968_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27968_0_0_0;
extern Il2CppType IEnumerator_1_t27968_1_0_0;
struct IEnumerator_1_t27968;
extern TypeInfo IEnumerator_1_t27968_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27968_GenericClass;
TypeInfo IEnumerator_1_t27968_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27968_MethodInfos/* methods */
	, IEnumerator_1_t27968_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27968_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27968_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27968_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27968_0_0_0/* byval_arg */
	, &IEnumerator_1_t27968_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27968_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<SwordsManItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1618.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SwordsManItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1618MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern TypeInfo SwordsManItem_t1943_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140604_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManItem_t1943_m204974_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SwordsManItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SwordsManItem>(System.Int32)
#define Array_InternalArray__get_Item_TisSwordsManItem_t1943_m204974(__this, p0, method) (SwordsManItem_t1943 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManItem_t1943_m204974_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SwordsManItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SwordsManItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SwordsManItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SwordsManItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SwordsManItem>::MoveNext()
// T System.Array/InternalEnumerator`1<SwordsManItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SwordsManItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19247____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19247, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19247____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19247, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19247_FieldInfos[] =
{
	&InternalEnumerator_1_t19247____array_FieldInfo,
	&InternalEnumerator_1_t19247____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140601_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19247____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19247_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140601_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140604_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19247____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19247_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140604_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19247_PropertyInfos[] =
{
	&InternalEnumerator_1_t19247____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19247____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19247_InternalEnumerator_1__ctor_m140599_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140599_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19247_InternalEnumerator_1__ctor_m140599_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140600_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SwordsManItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140601_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140602_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SwordsManItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140603_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern Il2CppType SwordsManItem_t1943_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SwordsManItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140604_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManItem_t1943_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19247_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140599_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140600_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140601_MethodInfo,
	&InternalEnumerator_1_Dispose_m140602_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140603_MethodInfo,
	&InternalEnumerator_1_get_Current_m140604_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140601_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140603_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140600_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140602_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140604_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19247_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140601_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140603_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140600_MethodInfo,
	&InternalEnumerator_1_Dispose_m140602_MethodInfo,
	&InternalEnumerator_1_get_Current_m140604_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27968_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19247_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27968_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27968_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19247_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27968_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140604_MethodInfo;
extern TypeInfo SwordsManItem_t1943_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManItem_t1943_m204974_MethodInfo;
static void* InternalEnumerator_1_t19247_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140604_MethodInfo,
	&SwordsManItem_t1943_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSwordsManItem_t1943_m204974_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19247_0_0_0;
extern Il2CppType InternalEnumerator_1_t19247_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19247_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19247_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19247_MethodInfos/* methods */
	, InternalEnumerator_1_t19247_PropertyInfos/* properties */
	, InternalEnumerator_1_t19247_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19247_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19247_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19247_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19247_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19247_1_0_0/* this_arg */
	, InternalEnumerator_1_t19247_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19247_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19247_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19247)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SwordsManItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SwordsManItem>
extern MethodInfo ICollection_1_get_Count_m251216_MethodInfo;
static PropertyInfo ICollection_1_t33115____Count_PropertyInfo = 
{
	&ICollection_1_t33115_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251216_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251217_MethodInfo;
static PropertyInfo ICollection_1_t33115____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33115_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251217_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33115_PropertyInfos[] =
{
	&ICollection_1_t33115____Count_PropertyInfo,
	&ICollection_1_t33115____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SwordsManItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251216_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251217_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo ICollection_1_t33115_ICollection_1_Add_m251218_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem>::Add(T)
MethodInfo ICollection_1_Add_m251218_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33115_ICollection_1_Add_m251218_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem>::Clear()
MethodInfo ICollection_1_Clear_m251219_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo ICollection_1_t33115_ICollection_1_Contains_m251220_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251220_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33115_ICollection_1_Contains_m251220_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManItemU5BU5D_t25974_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33115_ICollection_1_CopyTo_m251221_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManItemU5BU5D_t25974_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251221_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33115_ICollection_1_CopyTo_m251221_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo ICollection_1_t33115_ICollection_1_Remove_m251222_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251222_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33115_ICollection_1_Remove_m251222_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33115_MethodInfos[] =
{
	&ICollection_1_get_Count_m251216_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251217_MethodInfo,
	&ICollection_1_Add_m251218_MethodInfo,
	&ICollection_1_Clear_m251219_MethodInfo,
	&ICollection_1_Contains_m251220_MethodInfo,
	&ICollection_1_CopyTo_m251221_MethodInfo,
	&ICollection_1_Remove_m251222_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33117_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33115_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33117_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33115_0_0_0;
extern Il2CppType ICollection_1_t33115_1_0_0;
struct ICollection_1_t33115;
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33115_GenericClass;
TypeInfo ICollection_1_t33115_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33115_MethodInfos/* methods */
	, ICollection_1_t33115_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33115_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33115_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33115_0_0_0/* byval_arg */
	, &ICollection_1_t33115_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33115_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33117_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SwordsManItem>
extern TypeInfo IEnumerable_1_t33117_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27968_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251223_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33117_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27968_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33117_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251223_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33117_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33117_0_0_0;
extern Il2CppType IEnumerable_1_t33117_1_0_0;
struct IEnumerable_1_t33117;
extern TypeInfo IEnumerable_1_t33117_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33117_GenericClass;
TypeInfo IEnumerable_1_t33117_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33117_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33117_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33117_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33117_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33117_0_0_0/* byval_arg */
	, &IEnumerable_1_t33117_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33117_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33116_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SwordsManItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SwordsManItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SwordsManItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SwordsManItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SwordsManItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SwordsManItem>
extern MethodInfo IList_1_get_Item_m251224_MethodInfo;
extern MethodInfo IList_1_set_Item_m251225_MethodInfo;
static PropertyInfo IList_1_t33116____Item_PropertyInfo = 
{
	&IList_1_t33116_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251224_MethodInfo/* get */
	, &IList_1_set_Item_m251225_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33116_PropertyInfos[] =
{
	&IList_1_t33116____Item_PropertyInfo,
	NULL
};
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo IList_1_t33116_IList_1_IndexOf_m251226_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo IList_1_t33116_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SwordsManItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251226_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33116_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33116_IList_1_IndexOf_m251226_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo IList_1_t33116_IList_1_Insert_m251227_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo IList_1_t33116_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251227_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33116_IList_1_Insert_m251227_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33116_IList_1_RemoveAt_m251228_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33116_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251228_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33116_IList_1_RemoveAt_m251228_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33116_IList_1_get_Item_m251224_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33116_il2cpp_TypeInfo;
extern Il2CppType SwordsManItem_t1943_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SwordsManItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251224_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33116_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManItem_t1943_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33116_IList_1_get_Item_m251224_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo IList_1_t33116_IList_1_set_Item_m251225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo IList_1_t33116_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251225_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33116_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33116_IList_1_set_Item_m251225_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33116_MethodInfos[] =
{
	&IList_1_IndexOf_m251226_MethodInfo,
	&IList_1_Insert_m251227_MethodInfo,
	&IList_1_RemoveAt_m251228_MethodInfo,
	&IList_1_get_Item_m251224_MethodInfo,
	&IList_1_set_Item_m251225_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33115_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33117_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33116_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33115_il2cpp_TypeInfo,
	&IEnumerable_1_t33117_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33116_0_0_0;
extern Il2CppType IList_1_t33116_1_0_0;
struct IList_1_t33116;
extern TypeInfo IList_1_t33116_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33116_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33116_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33116_MethodInfos/* methods */
	, IList_1_t33116_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33116_il2cpp_TypeInfo/* element_class */
	, IList_1_t33116_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33116_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33116_0_0_0/* byval_arg */
	, &IList_1_t33116_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33116_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<SwordsManItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_410.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19248_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SwordsManItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_410MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SwordsManItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_406.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19248_il2cpp_TypeInfo;
extern TypeInfo SwordsManItem_t1943_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SwordsManItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_406MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140607_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140609_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SwordsManItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19248____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19248_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19248, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19248_FieldInfos[] =
{
	&CachedInvokableCall_1_t19248____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19248_CachedInvokableCall_1__ctor_m140605_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19248_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140605_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19248_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19248_CachedInvokableCall_1__ctor_m140605_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19248_CachedInvokableCall_1_Invoke_m140606_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19248_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140606_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19248_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19248_CachedInvokableCall_1_Invoke_m140606_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19248_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140605_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140606_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140606_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140610_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19248_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140606_MethodInfo,
	&InvokableCall_1_Find_m140610_MethodInfo,
};
extern Il2CppType UnityAction_1_t19250_0_0_0;
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManItem_t1943_m204984_MethodInfo;
extern TypeInfo SwordsManItem_t1943_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140612_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140607_MethodInfo;
extern TypeInfo SwordsManItem_t1943_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140609_MethodInfo;
static void* CachedInvokableCall_1_t19248_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19250_0_0_0,
	&UnityAction_1_t19250_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManItem_t1943_m204984_MethodInfo,
	&SwordsManItem_t1943_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140612_MethodInfo,
	&InvokableCall_1__ctor_m140607_MethodInfo,
	&SwordsManItem_t1943_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140609_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19248_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19248_1_0_0;
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19248;
extern TypeInfo CachedInvokableCall_1_t19248_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19248_GenericClass;
TypeInfo CachedInvokableCall_1_t19248_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19248_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19248_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19248_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19248_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19248_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19248_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19248_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19248_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19248_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19248)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SwordsManItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_413.h"
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SwordsManItem_t1943_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SwordsManItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_413MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19250_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManItem_t1943_m204984_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140612_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SwordsManItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SwordsManItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManItem_t1943_m204984(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManItem_t1943_m204984_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SwordsManItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SwordsManItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SwordsManItem>
extern Il2CppType UnityAction_1_t19250_0_0_1;
FieldInfo InvokableCall_1_t19249____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19250_0_0_1/* type */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19249, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19249_FieldInfos[] =
{
	&InvokableCall_1_t19249____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19249_InvokableCall_1__ctor_m140607_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140607_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19249_InvokableCall_1__ctor_m140607_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19250_0_0_0;
static ParameterInfo InvokableCall_1_t19249_InvokableCall_1__ctor_m140608_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19250_0_0_0},
};
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140608_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19249_InvokableCall_1__ctor_m140608_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19249_InvokableCall_1_Invoke_m140609_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140609_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19249_InvokableCall_1_Invoke_m140609_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19249_InvokableCall_1_Find_m140610_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SwordsManItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140610_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19249_InvokableCall_1_Find_m140610_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19249_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140607_MethodInfo,
	&InvokableCall_1__ctor_m140608_MethodInfo,
	&InvokableCall_1_Invoke_m140609_MethodInfo,
	&InvokableCall_1_Find_m140610_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140609_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140610_MethodInfo;
static MethodInfo* InvokableCall_1_t19249_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140609_MethodInfo,
	&InvokableCall_1_Find_m140610_MethodInfo,
};
extern Il2CppType UnityAction_1_t19250_0_0_0;
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManItem_t1943_m204984_MethodInfo;
extern TypeInfo SwordsManItem_t1943_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140612_MethodInfo;
static void* InvokableCall_1_t19249_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19250_0_0_0,
	&UnityAction_1_t19250_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManItem_t1943_m204984_MethodInfo,
	&SwordsManItem_t1943_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140612_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19249_0_0_0;
extern Il2CppType InvokableCall_1_t19249_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19249;
extern TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19249_GenericClass;
TypeInfo InvokableCall_1_t19249_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19249_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19249_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19249_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19249_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19249_0_0_0/* byval_arg */
	, &InvokableCall_1_t19249_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19249_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19249_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19249)/* instance_size */
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
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SwordsManItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SwordsManItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SwordsManItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SwordsManItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SwordsManItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19250_UnityAction_1__ctor_m140611_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140611_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19250_UnityAction_1__ctor_m140611_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManItem_t1943_0_0_0;
static ParameterInfo UnityAction_1_t19250_UnityAction_1_Invoke_m140612_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
};
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140612_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19250_UnityAction_1_Invoke_m140612_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManItem_t1943_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19250_UnityAction_1_BeginInvoke_m140613_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManItem_t1943_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SwordsManItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140613_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19250_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19250_UnityAction_1_BeginInvoke_m140613_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19250_UnityAction_1_EndInvoke_m140614_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140614_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19250_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19250_UnityAction_1_EndInvoke_m140614_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19250_MethodInfos[] =
{
	&UnityAction_1__ctor_m140611_MethodInfo,
	&UnityAction_1_Invoke_m140612_MethodInfo,
	&UnityAction_1_BeginInvoke_m140613_MethodInfo,
	&UnityAction_1_EndInvoke_m140614_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140612_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140613_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140614_MethodInfo;
static MethodInfo* UnityAction_1_t19250_VTable[] =
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
	&UnityAction_1_Invoke_m140612_MethodInfo,
	&UnityAction_1_BeginInvoke_m140613_MethodInfo,
	&UnityAction_1_EndInvoke_m140614_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19250_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19250_0_0_0;
extern Il2CppType UnityAction_1_t19250_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19250;
extern TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19250_GenericClass;
TypeInfo UnityAction_1_t19250_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19250_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19250_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19250_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19250_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19250_0_0_0/* byval_arg */
	, &UnityAction_1_t19250_1_0_0/* this_arg */
	, UnityAction_1_t19250_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19250_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19250)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27969_il2cpp_TypeInfo;

// SwordsManItem/Status
#include "AssemblyU2DCSharp_SwordsManItem_Status.h"


// T System.Collections.Generic.IEnumerator`1<SwordsManItem/Status>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SwordsManItem/Status>
extern MethodInfo IEnumerator_1_get_Current_m251229_MethodInfo;
static PropertyInfo IEnumerator_1_t27969____Current_PropertyInfo = 
{
	&IEnumerator_1_t27969_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251229_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27969_PropertyInfos[] =
{
	&IEnumerator_1_t27969____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27969_il2cpp_TypeInfo;
extern Il2CppType Status_t1940_0_0_0;
extern void* RuntimeInvoker_Status_t1940 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SwordsManItem/Status>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251229_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27969_il2cpp_TypeInfo/* declaring_type */
	, &Status_t1940_0_0_0/* return_type */
	, RuntimeInvoker_Status_t1940/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27969_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251229_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27969_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27969_0_0_0;
extern Il2CppType IEnumerator_1_t27969_1_0_0;
struct IEnumerator_1_t27969;
extern TypeInfo IEnumerator_1_t27969_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27969_GenericClass;
TypeInfo IEnumerator_1_t27969_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27969_MethodInfos/* methods */
	, IEnumerator_1_t27969_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27969_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27969_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27969_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27969_0_0_0/* byval_arg */
	, &IEnumerator_1_t27969_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27969_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<SwordsManItem/Status>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1619.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SwordsManItem/Status>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1619MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern TypeInfo Status_t1940_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140620_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStatus_t1940_m204986_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SwordsManItem/Status>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SwordsManItem/Status>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisStatus_t1940_m204986 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisStatus_t1940_m204986_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SwordsManItem/Status>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m140615_MethodInfo;
 void InternalEnumerator_1__ctor_m140615 (InternalEnumerator_1_t19251 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<SwordsManItem/Status>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140616_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140616 (InternalEnumerator_1_t19251 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<SwordsManItem/Status>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617 (InternalEnumerator_1_t19251 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m140620(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m140620_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Status_t1940_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<SwordsManItem/Status>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m140618_MethodInfo;
 void InternalEnumerator_1_Dispose_m140618 (InternalEnumerator_1_t19251 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<SwordsManItem/Status>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m140619_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m140619 (InternalEnumerator_1_t19251 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<SwordsManItem/Status>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m140620_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m140620 (InternalEnumerator_1_t19251 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisStatus_t1940_m204986(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisStatus_t1940_m204986_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<SwordsManItem/Status>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19251____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19251, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19251____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19251, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19251_FieldInfos[] =
{
	&InternalEnumerator_1_t19251____array_FieldInfo,
	&InternalEnumerator_1_t19251____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19251____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19251_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140620_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19251____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19251_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140620_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19251_PropertyInfos[] =
{
	&InternalEnumerator_1_t19251____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19251____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19251_InternalEnumerator_1__ctor_m140615_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManItem/Status>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140615_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m140615/* method */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19251_InternalEnumerator_1__ctor_m140615_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManItem/Status>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140616_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140616/* method */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SwordsManItem/Status>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617/* method */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManItem/Status>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140618_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m140618/* method */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SwordsManItem/Status>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140619_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m140619/* method */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern Il2CppType Status_t1940_0_0_0;
extern void* RuntimeInvoker_Status_t1940 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SwordsManItem/Status>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140620_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m140620/* method */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* declaring_type */
	, &Status_t1940_0_0_0/* return_type */
	, RuntimeInvoker_Status_t1940/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t19251_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140615_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140616_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617_MethodInfo,
	&InternalEnumerator_1_Dispose_m140618_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140619_MethodInfo,
	&InternalEnumerator_1_get_Current_m140620_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140619_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140616_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140618_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140620_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19251_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140617_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140619_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140616_MethodInfo,
	&InternalEnumerator_1_Dispose_m140618_MethodInfo,
	&InternalEnumerator_1_get_Current_m140620_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27969_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19251_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27969_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27969_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19251_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27969_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19251_0_0_0;
extern Il2CppType InternalEnumerator_1_t19251_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19251_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19251_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19251_MethodInfos/* methods */
	, InternalEnumerator_1_t19251_PropertyInfos/* properties */
	, InternalEnumerator_1_t19251_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19251_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19251_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19251_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19251_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19251_1_0_0/* this_arg */
	, InternalEnumerator_1_t19251_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19251_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19251)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SwordsManItem/Status>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem/Status>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem/Status>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SwordsManItem/Status>
extern MethodInfo ICollection_1_get_Count_m251230_MethodInfo;
static PropertyInfo ICollection_1_t33118____Count_PropertyInfo = 
{
	&ICollection_1_t33118_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251230_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251231_MethodInfo;
static PropertyInfo ICollection_1_t33118____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33118_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251231_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33118_PropertyInfos[] =
{
	&ICollection_1_t33118____Count_PropertyInfo,
	&ICollection_1_t33118____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SwordsManItem/Status>::get_Count()
MethodInfo ICollection_1_get_Count_m251230_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem/Status>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251231_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Status_t1940_0_0_0;
static ParameterInfo ICollection_1_t33118_ICollection_1_Add_m251232_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Status_t1940_0_0_0},
};
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Add(T)
MethodInfo ICollection_1_Add_m251232_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t33118_ICollection_1_Add_m251232_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Clear()
MethodInfo ICollection_1_Clear_m251233_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Status_t1940_0_0_0;
static ParameterInfo ICollection_1_t33118_ICollection_1_Contains_m251234_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Status_t1940_0_0_0},
};
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Contains(T)
MethodInfo ICollection_1_Contains_m251234_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33118_ICollection_1_Contains_m251234_ParameterInfos/* parameters */
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
extern Il2CppType StatusU5BU5D_t25975_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33118_ICollection_1_CopyTo_m251235_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StatusU5BU5D_t25975_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManItem/Status>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251235_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33118_ICollection_1_CopyTo_m251235_ParameterInfos/* parameters */
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
extern Il2CppType Status_t1940_0_0_0;
static ParameterInfo ICollection_1_t33118_ICollection_1_Remove_m251236_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Status_t1940_0_0_0},
};
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManItem/Status>::Remove(T)
MethodInfo ICollection_1_Remove_m251236_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t33118_ICollection_1_Remove_m251236_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33118_MethodInfos[] =
{
	&ICollection_1_get_Count_m251230_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251231_MethodInfo,
	&ICollection_1_Add_m251232_MethodInfo,
	&ICollection_1_Clear_m251233_MethodInfo,
	&ICollection_1_Contains_m251234_MethodInfo,
	&ICollection_1_CopyTo_m251235_MethodInfo,
	&ICollection_1_Remove_m251236_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33120_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33118_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33120_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33118_0_0_0;
extern Il2CppType ICollection_1_t33118_1_0_0;
struct ICollection_1_t33118;
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33118_GenericClass;
TypeInfo ICollection_1_t33118_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33118_MethodInfos/* methods */
	, ICollection_1_t33118_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33118_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33118_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33118_0_0_0/* byval_arg */
	, &ICollection_1_t33118_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33118_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33120_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManItem/Status>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SwordsManItem/Status>
extern TypeInfo IEnumerable_1_t33120_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27969_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManItem/Status>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251237_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33120_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27969_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33120_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251237_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33120_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33120_0_0_0;
extern Il2CppType IEnumerable_1_t33120_1_0_0;
struct IEnumerable_1_t33120;
extern TypeInfo IEnumerable_1_t33120_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33120_GenericClass;
TypeInfo IEnumerable_1_t33120_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33120_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33120_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33120_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33120_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33120_0_0_0/* byval_arg */
	, &IEnumerable_1_t33120_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33120_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33119_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SwordsManItem/Status>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SwordsManItem/Status>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SwordsManItem/Status>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SwordsManItem/Status>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SwordsManItem/Status>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SwordsManItem/Status>
extern MethodInfo IList_1_get_Item_m251238_MethodInfo;
extern MethodInfo IList_1_set_Item_m251239_MethodInfo;
static PropertyInfo IList_1_t33119____Item_PropertyInfo = 
{
	&IList_1_t33119_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251238_MethodInfo/* get */
	, &IList_1_set_Item_m251239_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33119_PropertyInfos[] =
{
	&IList_1_t33119____Item_PropertyInfo,
	NULL
};
extern Il2CppType Status_t1940_0_0_0;
static ParameterInfo IList_1_t33119_IList_1_IndexOf_m251240_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Status_t1940_0_0_0},
};
extern TypeInfo IList_1_t33119_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SwordsManItem/Status>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251240_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33119_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33119_IList_1_IndexOf_m251240_ParameterInfos/* parameters */
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
extern Il2CppType Status_t1940_0_0_0;
static ParameterInfo IList_1_t33119_IList_1_Insert_m251241_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Status_t1940_0_0_0},
};
extern TypeInfo IList_1_t33119_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManItem/Status>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251241_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33119_IList_1_Insert_m251241_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33119_IList_1_RemoveAt_m251242_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33119_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManItem/Status>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251242_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33119_IList_1_RemoveAt_m251242_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33119_IList_1_get_Item_m251238_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33119_il2cpp_TypeInfo;
extern Il2CppType Status_t1940_0_0_0;
extern void* RuntimeInvoker_Status_t1940_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SwordsManItem/Status>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251238_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33119_il2cpp_TypeInfo/* declaring_type */
	, &Status_t1940_0_0_0/* return_type */
	, RuntimeInvoker_Status_t1940_Int32_t73/* invoker_method */
	, IList_1_t33119_IList_1_get_Item_m251238_ParameterInfos/* parameters */
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
extern Il2CppType Status_t1940_0_0_0;
static ParameterInfo IList_1_t33119_IList_1_set_Item_m251239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Status_t1940_0_0_0},
};
extern TypeInfo IList_1_t33119_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManItem/Status>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251239_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33119_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t33119_IList_1_set_Item_m251239_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33119_MethodInfos[] =
{
	&IList_1_IndexOf_m251240_MethodInfo,
	&IList_1_Insert_m251241_MethodInfo,
	&IList_1_RemoveAt_m251242_MethodInfo,
	&IList_1_get_Item_m251238_MethodInfo,
	&IList_1_set_Item_m251239_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33118_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33120_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33119_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33118_il2cpp_TypeInfo,
	&IEnumerable_1_t33120_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33119_0_0_0;
extern Il2CppType IList_1_t33119_1_0_0;
struct IList_1_t33119;
extern TypeInfo IList_1_t33119_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33119_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33119_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33119_MethodInfos/* methods */
	, IList_1_t33119_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33119_il2cpp_TypeInfo/* element_class */
	, IList_1_t33119_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33119_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33119_0_0_0/* byval_arg */
	, &IList_1_t33119_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33119_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27970_il2cpp_TypeInfo;

// SwordsManShopItem
#include "AssemblyU2DCSharp_SwordsManShopItem.h"


// T System.Collections.Generic.IEnumerator`1<SwordsManShopItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SwordsManShopItem>
extern MethodInfo IEnumerator_1_get_Current_m251243_MethodInfo;
static PropertyInfo IEnumerator_1_t27970____Current_PropertyInfo = 
{
	&IEnumerator_1_t27970_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251243_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27970_PropertyInfos[] =
{
	&IEnumerator_1_t27970____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27970_il2cpp_TypeInfo;
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SwordsManShopItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251243_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27970_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManShopItem_t1945_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27970_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251243_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27970_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27970_0_0_0;
extern Il2CppType IEnumerator_1_t27970_1_0_0;
struct IEnumerator_1_t27970;
extern TypeInfo IEnumerator_1_t27970_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27970_GenericClass;
TypeInfo IEnumerator_1_t27970_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27970_MethodInfos/* methods */
	, IEnumerator_1_t27970_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27970_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27970_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27970_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27970_0_0_0/* byval_arg */
	, &IEnumerator_1_t27970_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27970_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<SwordsManShopItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1620.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SwordsManShopItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1620MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern TypeInfo SwordsManShopItem_t1945_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140626_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManShopItem_t1945_m204997_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SwordsManShopItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SwordsManShopItem>(System.Int32)
#define Array_InternalArray__get_Item_TisSwordsManShopItem_t1945_m204997(__this, p0, method) (SwordsManShopItem_t1945 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManShopItem_t1945_m204997_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SwordsManShopItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SwordsManShopItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SwordsManShopItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SwordsManShopItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SwordsManShopItem>::MoveNext()
// T System.Array/InternalEnumerator`1<SwordsManShopItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SwordsManShopItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19252____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19252, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19252____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19252, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19252_FieldInfos[] =
{
	&InternalEnumerator_1_t19252____array_FieldInfo,
	&InternalEnumerator_1_t19252____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140623_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19252____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19252_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140623_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140626_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19252____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19252_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140626_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19252_PropertyInfos[] =
{
	&InternalEnumerator_1_t19252____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19252____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19252_InternalEnumerator_1__ctor_m140621_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManShopItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140621_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19252_InternalEnumerator_1__ctor_m140621_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManShopItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140622_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SwordsManShopItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140623_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SwordsManShopItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140624_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SwordsManShopItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140625_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SwordsManShopItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140626_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManShopItem_t1945_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19252_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140621_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140622_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140623_MethodInfo,
	&InternalEnumerator_1_Dispose_m140624_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140625_MethodInfo,
	&InternalEnumerator_1_get_Current_m140626_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140623_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140625_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140622_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140624_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140626_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19252_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140623_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140625_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140622_MethodInfo,
	&InternalEnumerator_1_Dispose_m140624_MethodInfo,
	&InternalEnumerator_1_get_Current_m140626_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27970_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19252_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27970_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27970_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19252_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27970_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140626_MethodInfo;
extern TypeInfo SwordsManShopItem_t1945_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSwordsManShopItem_t1945_m204997_MethodInfo;
static void* InternalEnumerator_1_t19252_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140626_MethodInfo,
	&SwordsManShopItem_t1945_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSwordsManShopItem_t1945_m204997_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19252_0_0_0;
extern Il2CppType InternalEnumerator_1_t19252_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19252_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19252_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19252_MethodInfos/* methods */
	, InternalEnumerator_1_t19252_PropertyInfos/* properties */
	, InternalEnumerator_1_t19252_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19252_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19252_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19252_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19252_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19252_1_0_0/* this_arg */
	, InternalEnumerator_1_t19252_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19252_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19252_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19252)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SwordsManShopItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManShopItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SwordsManShopItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManShopItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManShopItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SwordsManShopItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManShopItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SwordsManShopItem>
extern MethodInfo ICollection_1_get_Count_m251244_MethodInfo;
static PropertyInfo ICollection_1_t33121____Count_PropertyInfo = 
{
	&ICollection_1_t33121_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251244_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251245_MethodInfo;
static PropertyInfo ICollection_1_t33121____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33121_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251245_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33121_PropertyInfos[] =
{
	&ICollection_1_t33121____Count_PropertyInfo,
	&ICollection_1_t33121____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SwordsManShopItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251244_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManShopItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251245_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo ICollection_1_t33121_ICollection_1_Add_m251246_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManShopItem>::Add(T)
MethodInfo ICollection_1_Add_m251246_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33121_ICollection_1_Add_m251246_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManShopItem>::Clear()
MethodInfo ICollection_1_Clear_m251247_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo ICollection_1_t33121_ICollection_1_Contains_m251248_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManShopItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251248_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33121_ICollection_1_Contains_m251248_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManShopItemU5BU5D_t25976_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33121_ICollection_1_CopyTo_m251249_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItemU5BU5D_t25976_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SwordsManShopItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251249_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33121_ICollection_1_CopyTo_m251249_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo ICollection_1_t33121_ICollection_1_Remove_m251250_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SwordsManShopItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251250_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33121_ICollection_1_Remove_m251250_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33121_MethodInfos[] =
{
	&ICollection_1_get_Count_m251244_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251245_MethodInfo,
	&ICollection_1_Add_m251246_MethodInfo,
	&ICollection_1_Clear_m251247_MethodInfo,
	&ICollection_1_Contains_m251248_MethodInfo,
	&ICollection_1_CopyTo_m251249_MethodInfo,
	&ICollection_1_Remove_m251250_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33123_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33121_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33123_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33121_0_0_0;
extern Il2CppType ICollection_1_t33121_1_0_0;
struct ICollection_1_t33121;
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33121_GenericClass;
TypeInfo ICollection_1_t33121_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33121_MethodInfos/* methods */
	, ICollection_1_t33121_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33121_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33121_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33121_0_0_0/* byval_arg */
	, &ICollection_1_t33121_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33121_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33123_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManShopItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SwordsManShopItem>
extern TypeInfo IEnumerable_1_t33123_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27970_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SwordsManShopItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251251_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33123_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27970_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33123_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251251_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33123_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33123_0_0_0;
extern Il2CppType IEnumerable_1_t33123_1_0_0;
struct IEnumerable_1_t33123;
extern TypeInfo IEnumerable_1_t33123_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33123_GenericClass;
TypeInfo IEnumerable_1_t33123_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33123_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33123_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33123_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33123_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33123_0_0_0/* byval_arg */
	, &IEnumerable_1_t33123_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33123_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33122_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SwordsManShopItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SwordsManShopItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SwordsManShopItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SwordsManShopItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SwordsManShopItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SwordsManShopItem>
extern MethodInfo IList_1_get_Item_m251252_MethodInfo;
extern MethodInfo IList_1_set_Item_m251253_MethodInfo;
static PropertyInfo IList_1_t33122____Item_PropertyInfo = 
{
	&IList_1_t33122_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251252_MethodInfo/* get */
	, &IList_1_set_Item_m251253_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33122_PropertyInfos[] =
{
	&IList_1_t33122____Item_PropertyInfo,
	NULL
};
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo IList_1_t33122_IList_1_IndexOf_m251254_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo IList_1_t33122_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SwordsManShopItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251254_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33122_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33122_IList_1_IndexOf_m251254_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo IList_1_t33122_IList_1_Insert_m251255_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo IList_1_t33122_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManShopItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251255_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33122_IList_1_Insert_m251255_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33122_IList_1_RemoveAt_m251256_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33122_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManShopItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251256_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33122_IList_1_RemoveAt_m251256_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33122_IList_1_get_Item_m251252_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33122_il2cpp_TypeInfo;
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SwordsManShopItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251252_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33122_il2cpp_TypeInfo/* declaring_type */
	, &SwordsManShopItem_t1945_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33122_IList_1_get_Item_m251252_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo IList_1_t33122_IList_1_set_Item_m251253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo IList_1_t33122_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SwordsManShopItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251253_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33122_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33122_IList_1_set_Item_m251253_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33122_MethodInfos[] =
{
	&IList_1_IndexOf_m251254_MethodInfo,
	&IList_1_Insert_m251255_MethodInfo,
	&IList_1_RemoveAt_m251256_MethodInfo,
	&IList_1_get_Item_m251252_MethodInfo,
	&IList_1_set_Item_m251253_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33121_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33123_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33122_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33121_il2cpp_TypeInfo,
	&IEnumerable_1_t33123_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33122_0_0_0;
extern Il2CppType IList_1_t33122_1_0_0;
struct IList_1_t33122;
extern TypeInfo IList_1_t33122_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33122_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33122_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33122_MethodInfos/* methods */
	, IList_1_t33122_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33122_il2cpp_TypeInfo/* element_class */
	, IList_1_t33122_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33122_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33122_0_0_0/* byval_arg */
	, &IList_1_t33122_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33122_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<SwordsManShopItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_411.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19253_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SwordsManShopItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_411MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SwordsManShopItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_407.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19253_il2cpp_TypeInfo;
extern TypeInfo SwordsManShopItem_t1945_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SwordsManShopItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_407MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140629_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140631_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManShopItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManShopItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SwordsManShopItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19253____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19253_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19253, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19253_FieldInfos[] =
{
	&CachedInvokableCall_1_t19253____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19253_CachedInvokableCall_1__ctor_m140627_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19253_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManShopItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140627_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19253_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19253_CachedInvokableCall_1__ctor_m140627_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19253_CachedInvokableCall_1_Invoke_m140628_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19253_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SwordsManShopItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140628_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19253_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19253_CachedInvokableCall_1_Invoke_m140628_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19253_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140627_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140628_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140628_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140632_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19253_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140628_MethodInfo,
	&InvokableCall_1_Find_m140632_MethodInfo,
};
extern Il2CppType UnityAction_1_t19255_0_0_0;
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManShopItem_t1945_m205007_MethodInfo;
extern TypeInfo SwordsManShopItem_t1945_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140634_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140629_MethodInfo;
extern TypeInfo SwordsManShopItem_t1945_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140631_MethodInfo;
static void* CachedInvokableCall_1_t19253_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19255_0_0_0,
	&UnityAction_1_t19255_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManShopItem_t1945_m205007_MethodInfo,
	&SwordsManShopItem_t1945_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140634_MethodInfo,
	&InvokableCall_1__ctor_m140629_MethodInfo,
	&SwordsManShopItem_t1945_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140631_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19253_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19253_1_0_0;
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19253;
extern TypeInfo CachedInvokableCall_1_t19253_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19253_GenericClass;
TypeInfo CachedInvokableCall_1_t19253_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19253_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19253_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19253_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19253_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19253_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19253_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19253_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19253_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19253_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19253)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SwordsManShopItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_414.h"
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SwordsManShopItem_t1945_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SwordsManShopItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_414MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19255_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManShopItem_t1945_m205007_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140634_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SwordsManShopItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SwordsManShopItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManShopItem_t1945_m205007(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManShopItem_t1945_m205007_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SwordsManShopItem>
extern Il2CppType UnityAction_1_t19255_0_0_1;
FieldInfo InvokableCall_1_t19254____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19255_0_0_1/* type */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19254, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19254_FieldInfos[] =
{
	&InvokableCall_1_t19254____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19254_InvokableCall_1__ctor_m140629_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140629_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19254_InvokableCall_1__ctor_m140629_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19255_0_0_0;
static ParameterInfo InvokableCall_1_t19254_InvokableCall_1__ctor_m140630_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19255_0_0_0},
};
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140630_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19254_InvokableCall_1__ctor_m140630_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19254_InvokableCall_1_Invoke_m140631_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140631_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19254_InvokableCall_1_Invoke_m140631_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19254_InvokableCall_1_Find_m140632_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SwordsManShopItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140632_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19254_InvokableCall_1_Find_m140632_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19254_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140629_MethodInfo,
	&InvokableCall_1__ctor_m140630_MethodInfo,
	&InvokableCall_1_Invoke_m140631_MethodInfo,
	&InvokableCall_1_Find_m140632_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140631_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140632_MethodInfo;
static MethodInfo* InvokableCall_1_t19254_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140631_MethodInfo,
	&InvokableCall_1_Find_m140632_MethodInfo,
};
extern Il2CppType UnityAction_1_t19255_0_0_0;
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManShopItem_t1945_m205007_MethodInfo;
extern TypeInfo SwordsManShopItem_t1945_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140634_MethodInfo;
static void* InvokableCall_1_t19254_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19255_0_0_0,
	&UnityAction_1_t19255_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSwordsManShopItem_t1945_m205007_MethodInfo,
	&SwordsManShopItem_t1945_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140634_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19254_0_0_0;
extern Il2CppType InvokableCall_1_t19254_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19254;
extern TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19254_GenericClass;
TypeInfo InvokableCall_1_t19254_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19254_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19254_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19254_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19254_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19254_0_0_0/* byval_arg */
	, &InvokableCall_1_t19254_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19254_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19254_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19254)/* instance_size */
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
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SwordsManShopItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SwordsManShopItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SwordsManShopItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SwordsManShopItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SwordsManShopItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19255_UnityAction_1__ctor_m140633_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManShopItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140633_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19255_UnityAction_1__ctor_m140633_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
static ParameterInfo UnityAction_1_t19255_UnityAction_1_Invoke_m140634_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
};
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManShopItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140634_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19255_UnityAction_1_Invoke_m140634_ParameterInfos/* parameters */
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
extern Il2CppType SwordsManShopItem_t1945_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19255_UnityAction_1_BeginInvoke_m140635_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SwordsManShopItem_t1945_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SwordsManShopItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140635_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19255_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19255_UnityAction_1_BeginInvoke_m140635_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19255_UnityAction_1_EndInvoke_m140636_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SwordsManShopItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140636_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19255_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19255_UnityAction_1_EndInvoke_m140636_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19255_MethodInfos[] =
{
	&UnityAction_1__ctor_m140633_MethodInfo,
	&UnityAction_1_Invoke_m140634_MethodInfo,
	&UnityAction_1_BeginInvoke_m140635_MethodInfo,
	&UnityAction_1_EndInvoke_m140636_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140634_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140635_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140636_MethodInfo;
static MethodInfo* UnityAction_1_t19255_VTable[] =
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
	&UnityAction_1_Invoke_m140634_MethodInfo,
	&UnityAction_1_BeginInvoke_m140635_MethodInfo,
	&UnityAction_1_EndInvoke_m140636_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19255_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19255_0_0_0;
extern Il2CppType UnityAction_1_t19255_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19255;
extern TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19255_GenericClass;
TypeInfo UnityAction_1_t19255_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19255_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19255_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19255_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19255_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19255_0_0_0/* byval_arg */
	, &UnityAction_1_t19255_1_0_0/* this_arg */
	, UnityAction_1_t19255_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19255_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19255)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27971_il2cpp_TypeInfo;

// SysShopPage
#include "AssemblyU2DCSharp_SysShopPage.h"


// T System.Collections.Generic.IEnumerator`1<SysShopPage>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SysShopPage>
extern MethodInfo IEnumerator_1_get_Current_m251257_MethodInfo;
static PropertyInfo IEnumerator_1_t27971____Current_PropertyInfo = 
{
	&IEnumerator_1_t27971_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251257_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27971_PropertyInfos[] =
{
	&IEnumerator_1_t27971____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27971_il2cpp_TypeInfo;
extern Il2CppType SysShopPage_t1845_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SysShopPage>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251257_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27971_il2cpp_TypeInfo/* declaring_type */
	, &SysShopPage_t1845_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27971_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251257_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27971_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27971_0_0_0;
extern Il2CppType IEnumerator_1_t27971_1_0_0;
struct IEnumerator_1_t27971;
extern TypeInfo IEnumerator_1_t27971_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27971_GenericClass;
TypeInfo IEnumerator_1_t27971_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27971_MethodInfos/* methods */
	, IEnumerator_1_t27971_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27971_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27971_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27971_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27971_0_0_0/* byval_arg */
	, &IEnumerator_1_t27971_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27971_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<SysShopPage>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1621.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SysShopPage>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1621MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern TypeInfo SysShopPage_t1845_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140642_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSysShopPage_t1845_m205009_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SysShopPage>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SysShopPage>(System.Int32)
#define Array_InternalArray__get_Item_TisSysShopPage_t1845_m205009(__this, p0, method) (SysShopPage_t1845 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSysShopPage_t1845_m205009_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SysShopPage>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SysShopPage>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SysShopPage>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SysShopPage>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SysShopPage>::MoveNext()
// T System.Array/InternalEnumerator`1<SysShopPage>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SysShopPage>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19256____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19256, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19256____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19256, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19256_FieldInfos[] =
{
	&InternalEnumerator_1_t19256____array_FieldInfo,
	&InternalEnumerator_1_t19256____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140639_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19256____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19256_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140639_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140642_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19256____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19256_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140642_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19256_PropertyInfos[] =
{
	&InternalEnumerator_1_t19256____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19256____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19256_InternalEnumerator_1__ctor_m140637_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SysShopPage>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140637_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19256_InternalEnumerator_1__ctor_m140637_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SysShopPage>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140638_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SysShopPage>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140639_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SysShopPage>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140640_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SysShopPage>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140641_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern Il2CppType SysShopPage_t1845_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SysShopPage>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140642_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* declaring_type */
	, &SysShopPage_t1845_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19256_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140637_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140638_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140639_MethodInfo,
	&InternalEnumerator_1_Dispose_m140640_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140641_MethodInfo,
	&InternalEnumerator_1_get_Current_m140642_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140639_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140641_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140638_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140640_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140642_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19256_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140639_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140641_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140638_MethodInfo,
	&InternalEnumerator_1_Dispose_m140640_MethodInfo,
	&InternalEnumerator_1_get_Current_m140642_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27971_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19256_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27971_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27971_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19256_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27971_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140642_MethodInfo;
extern TypeInfo SysShopPage_t1845_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSysShopPage_t1845_m205009_MethodInfo;
static void* InternalEnumerator_1_t19256_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140642_MethodInfo,
	&SysShopPage_t1845_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSysShopPage_t1845_m205009_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19256_0_0_0;
extern Il2CppType InternalEnumerator_1_t19256_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19256_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19256_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19256_MethodInfos/* methods */
	, InternalEnumerator_1_t19256_PropertyInfos/* properties */
	, InternalEnumerator_1_t19256_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19256_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19256_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19256_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19256_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19256_1_0_0/* this_arg */
	, InternalEnumerator_1_t19256_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19256_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19256_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19256)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SysShopPage>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPage>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SysShopPage>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SysShopPage>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPage>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SysShopPage>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPage>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SysShopPage>
extern MethodInfo ICollection_1_get_Count_m251258_MethodInfo;
static PropertyInfo ICollection_1_t33124____Count_PropertyInfo = 
{
	&ICollection_1_t33124_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251258_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251259_MethodInfo;
static PropertyInfo ICollection_1_t33124____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33124_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251259_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33124_PropertyInfos[] =
{
	&ICollection_1_t33124____Count_PropertyInfo,
	&ICollection_1_t33124____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SysShopPage>::get_Count()
MethodInfo ICollection_1_get_Count_m251258_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPage>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251259_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo ICollection_1_t33124_ICollection_1_Add_m251260_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SysShopPage>::Add(T)
MethodInfo ICollection_1_Add_m251260_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33124_ICollection_1_Add_m251260_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SysShopPage>::Clear()
MethodInfo ICollection_1_Clear_m251261_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo ICollection_1_t33124_ICollection_1_Contains_m251262_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPage>::Contains(T)
MethodInfo ICollection_1_Contains_m251262_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33124_ICollection_1_Contains_m251262_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPageU5BU5D_t25977_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33124_ICollection_1_CopyTo_m251263_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageU5BU5D_t25977_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SysShopPage>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251263_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33124_ICollection_1_CopyTo_m251263_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo ICollection_1_t33124_ICollection_1_Remove_m251264_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPage>::Remove(T)
MethodInfo ICollection_1_Remove_m251264_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33124_ICollection_1_Remove_m251264_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33124_MethodInfos[] =
{
	&ICollection_1_get_Count_m251258_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251259_MethodInfo,
	&ICollection_1_Add_m251260_MethodInfo,
	&ICollection_1_Clear_m251261_MethodInfo,
	&ICollection_1_Contains_m251262_MethodInfo,
	&ICollection_1_CopyTo_m251263_MethodInfo,
	&ICollection_1_Remove_m251264_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33126_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33124_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33126_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33124_0_0_0;
extern Il2CppType ICollection_1_t33124_1_0_0;
struct ICollection_1_t33124;
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33124_GenericClass;
TypeInfo ICollection_1_t33124_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33124_MethodInfos/* methods */
	, ICollection_1_t33124_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33124_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33124_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33124_0_0_0/* byval_arg */
	, &ICollection_1_t33124_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33124_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33126_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SysShopPage>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SysShopPage>
extern TypeInfo IEnumerable_1_t33126_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27971_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SysShopPage>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251265_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33126_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27971_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33126_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251265_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33126_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33126_0_0_0;
extern Il2CppType IEnumerable_1_t33126_1_0_0;
struct IEnumerable_1_t33126;
extern TypeInfo IEnumerable_1_t33126_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33126_GenericClass;
TypeInfo IEnumerable_1_t33126_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33126_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33126_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33126_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33126_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33126_0_0_0/* byval_arg */
	, &IEnumerable_1_t33126_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33126_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33125_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SysShopPage>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SysShopPage>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SysShopPage>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SysShopPage>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SysShopPage>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SysShopPage>
extern MethodInfo IList_1_get_Item_m251266_MethodInfo;
extern MethodInfo IList_1_set_Item_m251267_MethodInfo;
static PropertyInfo IList_1_t33125____Item_PropertyInfo = 
{
	&IList_1_t33125_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251266_MethodInfo/* get */
	, &IList_1_set_Item_m251267_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33125_PropertyInfos[] =
{
	&IList_1_t33125____Item_PropertyInfo,
	NULL
};
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo IList_1_t33125_IList_1_IndexOf_m251268_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo IList_1_t33125_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SysShopPage>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251268_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33125_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33125_IList_1_IndexOf_m251268_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo IList_1_t33125_IList_1_Insert_m251269_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo IList_1_t33125_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SysShopPage>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251269_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33125_IList_1_Insert_m251269_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33125_IList_1_RemoveAt_m251270_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33125_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SysShopPage>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251270_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33125_IList_1_RemoveAt_m251270_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33125_IList_1_get_Item_m251266_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33125_il2cpp_TypeInfo;
extern Il2CppType SysShopPage_t1845_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SysShopPage>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251266_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33125_il2cpp_TypeInfo/* declaring_type */
	, &SysShopPage_t1845_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33125_IList_1_get_Item_m251266_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo IList_1_t33125_IList_1_set_Item_m251267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo IList_1_t33125_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SysShopPage>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251267_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33125_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33125_IList_1_set_Item_m251267_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33125_MethodInfos[] =
{
	&IList_1_IndexOf_m251268_MethodInfo,
	&IList_1_Insert_m251269_MethodInfo,
	&IList_1_RemoveAt_m251270_MethodInfo,
	&IList_1_get_Item_m251266_MethodInfo,
	&IList_1_set_Item_m251267_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33124_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33126_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33125_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33124_il2cpp_TypeInfo,
	&IEnumerable_1_t33126_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33125_0_0_0;
extern Il2CppType IList_1_t33125_1_0_0;
struct IList_1_t33125;
extern TypeInfo IList_1_t33125_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33125_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33125_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33125_MethodInfos/* methods */
	, IList_1_t33125_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33125_il2cpp_TypeInfo/* element_class */
	, IList_1_t33125_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33125_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33125_0_0_0/* byval_arg */
	, &IList_1_t33125_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33125_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<SysShopPage>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_412.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19257_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SysShopPage>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_412MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SysShopPage>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_408.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19257_il2cpp_TypeInfo;
extern TypeInfo SysShopPage_t1845_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SysShopPage>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_408MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140645_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140647_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPage>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPage>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SysShopPage>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19257____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19257_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19257, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19257_FieldInfos[] =
{
	&CachedInvokableCall_1_t19257____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19257_CachedInvokableCall_1__ctor_m140643_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19257_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPage>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140643_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19257_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19257_CachedInvokableCall_1__ctor_m140643_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19257_CachedInvokableCall_1_Invoke_m140644_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19257_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPage>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140644_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19257_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19257_CachedInvokableCall_1_Invoke_m140644_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19257_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140643_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140644_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140644_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140648_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19257_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140644_MethodInfo,
	&InvokableCall_1_Find_m140648_MethodInfo,
};
extern Il2CppType UnityAction_1_t19259_0_0_0;
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPage_t1845_m205019_MethodInfo;
extern TypeInfo SysShopPage_t1845_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140650_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140645_MethodInfo;
extern TypeInfo SysShopPage_t1845_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140647_MethodInfo;
static void* CachedInvokableCall_1_t19257_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19259_0_0_0,
	&UnityAction_1_t19259_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPage_t1845_m205019_MethodInfo,
	&SysShopPage_t1845_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140650_MethodInfo,
	&InvokableCall_1__ctor_m140645_MethodInfo,
	&SysShopPage_t1845_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140647_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19257_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19257_1_0_0;
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19257;
extern TypeInfo CachedInvokableCall_1_t19257_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19257_GenericClass;
TypeInfo CachedInvokableCall_1_t19257_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19257_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19257_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19257_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19257_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19257_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19257_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19257_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19257_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19257_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19257)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SysShopPage>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_415.h"
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SysShopPage_t1845_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SysShopPage>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_415MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19259_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPage_t1845_m205019_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140650_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SysShopPage>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SysShopPage>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPage_t1845_m205019(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPage_t1845_m205019_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SysShopPage>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPage>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPage>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SysShopPage>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SysShopPage>
extern Il2CppType UnityAction_1_t19259_0_0_1;
FieldInfo InvokableCall_1_t19258____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19259_0_0_1/* type */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19258, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19258_FieldInfos[] =
{
	&InvokableCall_1_t19258____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19258_InvokableCall_1__ctor_m140645_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPage>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140645_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19258_InvokableCall_1__ctor_m140645_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19259_0_0_0;
static ParameterInfo InvokableCall_1_t19258_InvokableCall_1__ctor_m140646_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19259_0_0_0},
};
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPage>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140646_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19258_InvokableCall_1__ctor_m140646_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19258_InvokableCall_1_Invoke_m140647_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPage>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140647_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19258_InvokableCall_1_Invoke_m140647_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19258_InvokableCall_1_Find_m140648_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SysShopPage>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140648_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19258_InvokableCall_1_Find_m140648_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19258_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140645_MethodInfo,
	&InvokableCall_1__ctor_m140646_MethodInfo,
	&InvokableCall_1_Invoke_m140647_MethodInfo,
	&InvokableCall_1_Find_m140648_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140647_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140648_MethodInfo;
static MethodInfo* InvokableCall_1_t19258_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140647_MethodInfo,
	&InvokableCall_1_Find_m140648_MethodInfo,
};
extern Il2CppType UnityAction_1_t19259_0_0_0;
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPage_t1845_m205019_MethodInfo;
extern TypeInfo SysShopPage_t1845_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140650_MethodInfo;
static void* InvokableCall_1_t19258_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19259_0_0_0,
	&UnityAction_1_t19259_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPage_t1845_m205019_MethodInfo,
	&SysShopPage_t1845_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140650_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19258_0_0_0;
extern Il2CppType InvokableCall_1_t19258_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19258;
extern TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19258_GenericClass;
TypeInfo InvokableCall_1_t19258_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19258_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19258_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19258_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19258_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19258_0_0_0/* byval_arg */
	, &InvokableCall_1_t19258_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19258_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19258_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19258)/* instance_size */
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
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SysShopPage>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SysShopPage>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SysShopPage>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SysShopPage>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SysShopPage>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19259_UnityAction_1__ctor_m140649_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SysShopPage>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140649_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19259_UnityAction_1__ctor_m140649_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPage_t1845_0_0_0;
static ParameterInfo UnityAction_1_t19259_UnityAction_1_Invoke_m140650_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
};
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SysShopPage>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140650_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19259_UnityAction_1_Invoke_m140650_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPage_t1845_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19259_UnityAction_1_BeginInvoke_m140651_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPage_t1845_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SysShopPage>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140651_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19259_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19259_UnityAction_1_BeginInvoke_m140651_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19259_UnityAction_1_EndInvoke_m140652_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SysShopPage>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140652_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19259_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19259_UnityAction_1_EndInvoke_m140652_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19259_MethodInfos[] =
{
	&UnityAction_1__ctor_m140649_MethodInfo,
	&UnityAction_1_Invoke_m140650_MethodInfo,
	&UnityAction_1_BeginInvoke_m140651_MethodInfo,
	&UnityAction_1_EndInvoke_m140652_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140650_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140651_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140652_MethodInfo;
static MethodInfo* UnityAction_1_t19259_VTable[] =
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
	&UnityAction_1_Invoke_m140650_MethodInfo,
	&UnityAction_1_BeginInvoke_m140651_MethodInfo,
	&UnityAction_1_EndInvoke_m140652_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19259_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19259_0_0_0;
extern Il2CppType UnityAction_1_t19259_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19259;
extern TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19259_GenericClass;
TypeInfo UnityAction_1_t19259_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19259_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19259_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19259_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19259_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19259_0_0_0/* byval_arg */
	, &UnityAction_1_t19259_1_0_0/* this_arg */
	, UnityAction_1_t19259_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19259_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19259)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27972_il2cpp_TypeInfo;

// SysShopPageItem
#include "AssemblyU2DCSharp_SysShopPageItem.h"


// T System.Collections.Generic.IEnumerator`1<SysShopPageItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<SysShopPageItem>
extern MethodInfo IEnumerator_1_get_Current_m251271_MethodInfo;
static PropertyInfo IEnumerator_1_t27972____Current_PropertyInfo = 
{
	&IEnumerator_1_t27972_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251271_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27972_PropertyInfos[] =
{
	&IEnumerator_1_t27972____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27972_il2cpp_TypeInfo;
extern Il2CppType SysShopPageItem_t1846_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<SysShopPageItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251271_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27972_il2cpp_TypeInfo/* declaring_type */
	, &SysShopPageItem_t1846_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27972_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251271_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27972_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27972_0_0_0;
extern Il2CppType IEnumerator_1_t27972_1_0_0;
struct IEnumerator_1_t27972;
extern TypeInfo IEnumerator_1_t27972_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27972_GenericClass;
TypeInfo IEnumerator_1_t27972_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27972_MethodInfos/* methods */
	, IEnumerator_1_t27972_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27972_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27972_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27972_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27972_0_0_0/* byval_arg */
	, &IEnumerator_1_t27972_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27972_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<SysShopPageItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1622.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<SysShopPageItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1622MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern TypeInfo SysShopPageItem_t1846_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140658_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSysShopPageItem_t1846_m205021_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<SysShopPageItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<SysShopPageItem>(System.Int32)
#define Array_InternalArray__get_Item_TisSysShopPageItem_t1846_m205021(__this, p0, method) (SysShopPageItem_t1846 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSysShopPageItem_t1846_m205021_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<SysShopPageItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<SysShopPageItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<SysShopPageItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<SysShopPageItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<SysShopPageItem>::MoveNext()
// T System.Array/InternalEnumerator`1<SysShopPageItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<SysShopPageItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19260____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19260, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19260____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19260, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19260_FieldInfos[] =
{
	&InternalEnumerator_1_t19260____array_FieldInfo,
	&InternalEnumerator_1_t19260____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140655_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19260____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19260_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140655_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140658_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19260____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19260_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140658_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19260_PropertyInfos[] =
{
	&InternalEnumerator_1_t19260____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19260____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19260_InternalEnumerator_1__ctor_m140653_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SysShopPageItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140653_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19260_InternalEnumerator_1__ctor_m140653_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SysShopPageItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140654_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<SysShopPageItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140655_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<SysShopPageItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140656_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<SysShopPageItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140657_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern Il2CppType SysShopPageItem_t1846_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<SysShopPageItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140658_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* declaring_type */
	, &SysShopPageItem_t1846_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19260_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140653_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140654_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140655_MethodInfo,
	&InternalEnumerator_1_Dispose_m140656_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140657_MethodInfo,
	&InternalEnumerator_1_get_Current_m140658_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140655_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140657_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140654_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140656_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140658_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19260_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140655_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140657_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140654_MethodInfo,
	&InternalEnumerator_1_Dispose_m140656_MethodInfo,
	&InternalEnumerator_1_get_Current_m140658_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27972_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19260_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27972_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27972_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19260_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27972_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140658_MethodInfo;
extern TypeInfo SysShopPageItem_t1846_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSysShopPageItem_t1846_m205021_MethodInfo;
static void* InternalEnumerator_1_t19260_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140658_MethodInfo,
	&SysShopPageItem_t1846_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSysShopPageItem_t1846_m205021_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19260_0_0_0;
extern Il2CppType InternalEnumerator_1_t19260_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19260_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19260_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19260_MethodInfos/* methods */
	, InternalEnumerator_1_t19260_PropertyInfos/* properties */
	, InternalEnumerator_1_t19260_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19260_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19260_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19260_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19260_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19260_1_0_0/* this_arg */
	, InternalEnumerator_1_t19260_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19260_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19260_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19260)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<SysShopPageItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPageItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<SysShopPageItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<SysShopPageItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPageItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<SysShopPageItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPageItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<SysShopPageItem>
extern MethodInfo ICollection_1_get_Count_m251272_MethodInfo;
static PropertyInfo ICollection_1_t33127____Count_PropertyInfo = 
{
	&ICollection_1_t33127_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251272_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251273_MethodInfo;
static PropertyInfo ICollection_1_t33127____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33127_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251273_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33127_PropertyInfos[] =
{
	&ICollection_1_t33127____Count_PropertyInfo,
	&ICollection_1_t33127____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<SysShopPageItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251272_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPageItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251273_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo ICollection_1_t33127_ICollection_1_Add_m251274_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SysShopPageItem>::Add(T)
MethodInfo ICollection_1_Add_m251274_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33127_ICollection_1_Add_m251274_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SysShopPageItem>::Clear()
MethodInfo ICollection_1_Clear_m251275_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo ICollection_1_t33127_ICollection_1_Contains_m251276_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPageItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251276_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33127_ICollection_1_Contains_m251276_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPageItemU5BU5D_t25978_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33127_ICollection_1_CopyTo_m251277_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageItemU5BU5D_t25978_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<SysShopPageItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251277_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33127_ICollection_1_CopyTo_m251277_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo ICollection_1_t33127_ICollection_1_Remove_m251278_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<SysShopPageItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251278_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33127_ICollection_1_Remove_m251278_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33127_MethodInfos[] =
{
	&ICollection_1_get_Count_m251272_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251273_MethodInfo,
	&ICollection_1_Add_m251274_MethodInfo,
	&ICollection_1_Clear_m251275_MethodInfo,
	&ICollection_1_Contains_m251276_MethodInfo,
	&ICollection_1_CopyTo_m251277_MethodInfo,
	&ICollection_1_Remove_m251278_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33129_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33127_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33129_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33127_0_0_0;
extern Il2CppType ICollection_1_t33127_1_0_0;
struct ICollection_1_t33127;
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33127_GenericClass;
TypeInfo ICollection_1_t33127_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33127_MethodInfos/* methods */
	, ICollection_1_t33127_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33127_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33127_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33127_0_0_0/* byval_arg */
	, &ICollection_1_t33127_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33127_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33129_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SysShopPageItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<SysShopPageItem>
extern TypeInfo IEnumerable_1_t33129_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27972_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<SysShopPageItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251279_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33129_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27972_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33129_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251279_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33129_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33129_0_0_0;
extern Il2CppType IEnumerable_1_t33129_1_0_0;
struct IEnumerable_1_t33129;
extern TypeInfo IEnumerable_1_t33129_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33129_GenericClass;
TypeInfo IEnumerable_1_t33129_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33129_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33129_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33129_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33129_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33129_0_0_0/* byval_arg */
	, &IEnumerable_1_t33129_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33129_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33128_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<SysShopPageItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<SysShopPageItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<SysShopPageItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<SysShopPageItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<SysShopPageItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<SysShopPageItem>
extern MethodInfo IList_1_get_Item_m251280_MethodInfo;
extern MethodInfo IList_1_set_Item_m251281_MethodInfo;
static PropertyInfo IList_1_t33128____Item_PropertyInfo = 
{
	&IList_1_t33128_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251280_MethodInfo/* get */
	, &IList_1_set_Item_m251281_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33128_PropertyInfos[] =
{
	&IList_1_t33128____Item_PropertyInfo,
	NULL
};
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo IList_1_t33128_IList_1_IndexOf_m251282_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo IList_1_t33128_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<SysShopPageItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251282_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33128_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33128_IList_1_IndexOf_m251282_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo IList_1_t33128_IList_1_Insert_m251283_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo IList_1_t33128_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SysShopPageItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251283_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33128_IList_1_Insert_m251283_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33128_IList_1_RemoveAt_m251284_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33128_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SysShopPageItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251284_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33128_IList_1_RemoveAt_m251284_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33128_IList_1_get_Item_m251280_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33128_il2cpp_TypeInfo;
extern Il2CppType SysShopPageItem_t1846_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<SysShopPageItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251280_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33128_il2cpp_TypeInfo/* declaring_type */
	, &SysShopPageItem_t1846_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33128_IList_1_get_Item_m251280_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo IList_1_t33128_IList_1_set_Item_m251281_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo IList_1_t33128_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<SysShopPageItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251281_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33128_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33128_IList_1_set_Item_m251281_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33128_MethodInfos[] =
{
	&IList_1_IndexOf_m251282_MethodInfo,
	&IList_1_Insert_m251283_MethodInfo,
	&IList_1_RemoveAt_m251284_MethodInfo,
	&IList_1_get_Item_m251280_MethodInfo,
	&IList_1_set_Item_m251281_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33127_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33129_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33128_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33127_il2cpp_TypeInfo,
	&IEnumerable_1_t33129_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33128_0_0_0;
extern Il2CppType IList_1_t33128_1_0_0;
struct IList_1_t33128;
extern TypeInfo IList_1_t33128_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33128_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33128_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33128_MethodInfos/* methods */
	, IList_1_t33128_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33128_il2cpp_TypeInfo/* element_class */
	, IList_1_t33128_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33128_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33128_0_0_0/* byval_arg */
	, &IList_1_t33128_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33128_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<SysShopPageItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_413.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19261_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<SysShopPageItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_413MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<SysShopPageItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_409.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19261_il2cpp_TypeInfo;
extern TypeInfo SysShopPageItem_t1846_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<SysShopPageItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_409MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140661_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140663_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPageItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPageItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<SysShopPageItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19261____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19261_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19261, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19261_FieldInfos[] =
{
	&CachedInvokableCall_1_t19261____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19261_CachedInvokableCall_1__ctor_m140659_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19261_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPageItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140659_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19261_CachedInvokableCall_1__ctor_m140659_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19261_CachedInvokableCall_1_Invoke_m140660_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19261_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<SysShopPageItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140660_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19261_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19261_CachedInvokableCall_1_Invoke_m140660_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19261_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140659_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140660_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140660_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140664_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19261_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140660_MethodInfo,
	&InvokableCall_1_Find_m140664_MethodInfo,
};
extern Il2CppType UnityAction_1_t19263_0_0_0;
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPageItem_t1846_m205031_MethodInfo;
extern TypeInfo SysShopPageItem_t1846_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140666_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140661_MethodInfo;
extern TypeInfo SysShopPageItem_t1846_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140663_MethodInfo;
static void* CachedInvokableCall_1_t19261_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19263_0_0_0,
	&UnityAction_1_t19263_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPageItem_t1846_m205031_MethodInfo,
	&SysShopPageItem_t1846_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140666_MethodInfo,
	&InvokableCall_1__ctor_m140661_MethodInfo,
	&SysShopPageItem_t1846_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140663_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19261_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19261_1_0_0;
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19261;
extern TypeInfo CachedInvokableCall_1_t19261_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19261_GenericClass;
TypeInfo CachedInvokableCall_1_t19261_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19261_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19261_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19261_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19261_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19261_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19261_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19261_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19261_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19261_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19261)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<SysShopPageItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_416.h"
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo SysShopPageItem_t1846_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<SysShopPageItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_416MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19263_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPageItem_t1846_m205031_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140666_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SysShopPageItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<SysShopPageItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPageItem_t1846_m205031(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPageItem_t1846_m205031_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<SysShopPageItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPageItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPageItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<SysShopPageItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<SysShopPageItem>
extern Il2CppType UnityAction_1_t19263_0_0_1;
FieldInfo InvokableCall_1_t19262____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19263_0_0_1/* type */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19262, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19262_FieldInfos[] =
{
	&InvokableCall_1_t19262____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19262_InvokableCall_1__ctor_m140661_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPageItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140661_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19262_InvokableCall_1__ctor_m140661_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19263_0_0_0;
static ParameterInfo InvokableCall_1_t19262_InvokableCall_1__ctor_m140662_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19263_0_0_0},
};
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPageItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140662_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19262_InvokableCall_1__ctor_m140662_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19262_InvokableCall_1_Invoke_m140663_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<SysShopPageItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140663_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19262_InvokableCall_1_Invoke_m140663_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19262_InvokableCall_1_Find_m140664_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<SysShopPageItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140664_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19262_InvokableCall_1_Find_m140664_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19262_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140661_MethodInfo,
	&InvokableCall_1__ctor_m140662_MethodInfo,
	&InvokableCall_1_Invoke_m140663_MethodInfo,
	&InvokableCall_1_Find_m140664_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140663_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140664_MethodInfo;
static MethodInfo* InvokableCall_1_t19262_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140663_MethodInfo,
	&InvokableCall_1_Find_m140664_MethodInfo,
};
extern Il2CppType UnityAction_1_t19263_0_0_0;
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPageItem_t1846_m205031_MethodInfo;
extern TypeInfo SysShopPageItem_t1846_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140666_MethodInfo;
static void* InvokableCall_1_t19262_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19263_0_0_0,
	&UnityAction_1_t19263_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisSysShopPageItem_t1846_m205031_MethodInfo,
	&SysShopPageItem_t1846_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140666_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19262_0_0_0;
extern Il2CppType InvokableCall_1_t19262_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19262;
extern TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19262_GenericClass;
TypeInfo InvokableCall_1_t19262_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19262_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19262_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19262_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19262_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19262_0_0_0/* byval_arg */
	, &InvokableCall_1_t19262_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19262_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19262_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19262)/* instance_size */
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
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<SysShopPageItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<SysShopPageItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SysShopPageItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<SysShopPageItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<SysShopPageItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19263_UnityAction_1__ctor_m140665_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SysShopPageItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140665_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19263_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19263_UnityAction_1__ctor_m140665_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPageItem_t1846_0_0_0;
static ParameterInfo UnityAction_1_t19263_UnityAction_1_Invoke_m140666_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
};
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SysShopPageItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140666_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19263_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19263_UnityAction_1_Invoke_m140666_ParameterInfos/* parameters */
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
extern Il2CppType SysShopPageItem_t1846_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19263_UnityAction_1_BeginInvoke_m140667_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &SysShopPageItem_t1846_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<SysShopPageItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140667_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19263_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19263_UnityAction_1_BeginInvoke_m140667_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19263_UnityAction_1_EndInvoke_m140668_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<SysShopPageItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140668_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19263_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19263_UnityAction_1_EndInvoke_m140668_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19263_MethodInfos[] =
{
	&UnityAction_1__ctor_m140665_MethodInfo,
	&UnityAction_1_Invoke_m140666_MethodInfo,
	&UnityAction_1_BeginInvoke_m140667_MethodInfo,
	&UnityAction_1_EndInvoke_m140668_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140666_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140667_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140668_MethodInfo;
static MethodInfo* UnityAction_1_t19263_VTable[] =
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
	&UnityAction_1_Invoke_m140666_MethodInfo,
	&UnityAction_1_BeginInvoke_m140667_MethodInfo,
	&UnityAction_1_EndInvoke_m140668_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19263_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19263_0_0_0;
extern Il2CppType UnityAction_1_t19263_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19263;
extern TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19263_GenericClass;
TypeInfo UnityAction_1_t19263_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19263_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19263_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19263_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19263_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19263_0_0_0/* byval_arg */
	, &UnityAction_1_t19263_1_0_0/* this_arg */
	, UnityAction_1_t19263_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19263_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19263)/* instance_size */
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
// UnityEngine.Events.CachedInvokableCall`1<TabButton>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_414.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19264_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TabButton>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_414MethodDeclarations.h"

// TabButton
#include "AssemblyU2DCSharp_TabButton.h"
// UnityEngine.Events.InvokableCall`1<TabButton>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_410.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19264_il2cpp_TypeInfo;
extern TypeInfo TabButton_t1210_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TabButton>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_410MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140671_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140673_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TabButton>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TabButton>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TabButton>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19264____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19264_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19264, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19264_FieldInfos[] =
{
	&CachedInvokableCall_1_t19264____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TabButton_t1210_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19264_CachedInvokableCall_1__ctor_m140669_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TabButton_t1210_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19264_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TabButton>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140669_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19264_CachedInvokableCall_1__ctor_m140669_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19264_CachedInvokableCall_1_Invoke_m140670_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19264_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TabButton>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140670_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19264_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19264_CachedInvokableCall_1_Invoke_m140670_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19264_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140669_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140670_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140670_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140674_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19264_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140670_MethodInfo,
	&InvokableCall_1_Find_m140674_MethodInfo,
};
extern Il2CppType UnityAction_1_t19266_0_0_0;
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTabButton_t1210_m205032_MethodInfo;
extern TypeInfo TabButton_t1210_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140676_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140671_MethodInfo;
extern TypeInfo TabButton_t1210_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140673_MethodInfo;
static void* CachedInvokableCall_1_t19264_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19266_0_0_0,
	&UnityAction_1_t19266_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTabButton_t1210_m205032_MethodInfo,
	&TabButton_t1210_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140676_MethodInfo,
	&InvokableCall_1__ctor_m140671_MethodInfo,
	&TabButton_t1210_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140673_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19264_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19264_1_0_0;
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19264;
extern TypeInfo CachedInvokableCall_1_t19264_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19264_GenericClass;
TypeInfo CachedInvokableCall_1_t19264_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19264_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19264_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19264_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19264_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19264_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19264_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19264_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19264_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19264_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19264)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TabButton>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_417.h"
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TabButton_t1210_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TabButton>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_417MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19266_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTabButton_t1210_m205032_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140676_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TabButton>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TabButton>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTabButton_t1210_m205032(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTabButton_t1210_m205032_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TabButton>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TabButton>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TabButton>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TabButton>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TabButton>
extern Il2CppType UnityAction_1_t19266_0_0_1;
FieldInfo InvokableCall_1_t19265____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19266_0_0_1/* type */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19265, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19265_FieldInfos[] =
{
	&InvokableCall_1_t19265____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19265_InvokableCall_1__ctor_m140671_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TabButton>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140671_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19265_InvokableCall_1__ctor_m140671_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19266_0_0_0;
static ParameterInfo InvokableCall_1_t19265_InvokableCall_1__ctor_m140672_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19266_0_0_0},
};
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TabButton>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140672_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19265_InvokableCall_1__ctor_m140672_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19265_InvokableCall_1_Invoke_m140673_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TabButton>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140673_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19265_InvokableCall_1_Invoke_m140673_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19265_InvokableCall_1_Find_m140674_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TabButton>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140674_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19265_InvokableCall_1_Find_m140674_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19265_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140671_MethodInfo,
	&InvokableCall_1__ctor_m140672_MethodInfo,
	&InvokableCall_1_Invoke_m140673_MethodInfo,
	&InvokableCall_1_Find_m140674_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140673_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140674_MethodInfo;
static MethodInfo* InvokableCall_1_t19265_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140673_MethodInfo,
	&InvokableCall_1_Find_m140674_MethodInfo,
};
extern Il2CppType UnityAction_1_t19266_0_0_0;
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTabButton_t1210_m205032_MethodInfo;
extern TypeInfo TabButton_t1210_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140676_MethodInfo;
static void* InvokableCall_1_t19265_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19266_0_0_0,
	&UnityAction_1_t19266_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTabButton_t1210_m205032_MethodInfo,
	&TabButton_t1210_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140676_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19265_0_0_0;
extern Il2CppType InvokableCall_1_t19265_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19265;
extern TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19265_GenericClass;
TypeInfo InvokableCall_1_t19265_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19265_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19265_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19265_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19265_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19265_0_0_0/* byval_arg */
	, &InvokableCall_1_t19265_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19265_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19265_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19265)/* instance_size */
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
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TabButton>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TabButton>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TabButton>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TabButton>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TabButton>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19266_UnityAction_1__ctor_m140675_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TabButton>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140675_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19266_UnityAction_1__ctor_m140675_ParameterInfos/* parameters */
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
extern Il2CppType TabButton_t1210_0_0_0;
static ParameterInfo UnityAction_1_t19266_UnityAction_1_Invoke_m140676_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TabButton_t1210_0_0_0},
};
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TabButton>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140676_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19266_UnityAction_1_Invoke_m140676_ParameterInfos/* parameters */
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
extern Il2CppType TabButton_t1210_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19266_UnityAction_1_BeginInvoke_m140677_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TabButton_t1210_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TabButton>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140677_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19266_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19266_UnityAction_1_BeginInvoke_m140677_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19266_UnityAction_1_EndInvoke_m140678_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TabButton>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140678_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19266_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19266_UnityAction_1_EndInvoke_m140678_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19266_MethodInfos[] =
{
	&UnityAction_1__ctor_m140675_MethodInfo,
	&UnityAction_1_Invoke_m140676_MethodInfo,
	&UnityAction_1_BeginInvoke_m140677_MethodInfo,
	&UnityAction_1_EndInvoke_m140678_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140676_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140677_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140678_MethodInfo;
static MethodInfo* UnityAction_1_t19266_VTable[] =
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
	&UnityAction_1_Invoke_m140676_MethodInfo,
	&UnityAction_1_BeginInvoke_m140677_MethodInfo,
	&UnityAction_1_EndInvoke_m140678_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19266_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19266_0_0_0;
extern Il2CppType UnityAction_1_t19266_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19266;
extern TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19266_GenericClass;
TypeInfo UnityAction_1_t19266_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19266_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19266_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19266_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19266_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19266_0_0_0/* byval_arg */
	, &UnityAction_1_t19266_1_0_0/* this_arg */
	, UnityAction_1_t19266_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19266_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19266)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27973_il2cpp_TypeInfo;

// TeamPlatformItem
#include "AssemblyU2DCSharp_TeamPlatformItem.h"


// T System.Collections.Generic.IEnumerator`1<TeamPlatformItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<TeamPlatformItem>
extern MethodInfo IEnumerator_1_get_Current_m251285_MethodInfo;
static PropertyInfo IEnumerator_1_t27973____Current_PropertyInfo = 
{
	&IEnumerator_1_t27973_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251285_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27973_PropertyInfos[] =
{
	&IEnumerator_1_t27973____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27973_il2cpp_TypeInfo;
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<TeamPlatformItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251285_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27973_il2cpp_TypeInfo/* declaring_type */
	, &TeamPlatformItem_t1947_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27973_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251285_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27973_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27973_0_0_0;
extern Il2CppType IEnumerator_1_t27973_1_0_0;
struct IEnumerator_1_t27973;
extern TypeInfo IEnumerator_1_t27973_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27973_GenericClass;
TypeInfo IEnumerator_1_t27973_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27973_MethodInfos/* methods */
	, IEnumerator_1_t27973_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27973_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27973_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27973_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27973_0_0_0/* byval_arg */
	, &IEnumerator_1_t27973_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27973_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<TeamPlatformItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1623.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<TeamPlatformItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1623MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern TypeInfo TeamPlatformItem_t1947_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140684_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamPlatformItem_t1947_m205034_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<TeamPlatformItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<TeamPlatformItem>(System.Int32)
#define Array_InternalArray__get_Item_TisTeamPlatformItem_t1947_m205034(__this, p0, method) (TeamPlatformItem_t1947 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTeamPlatformItem_t1947_m205034_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<TeamPlatformItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<TeamPlatformItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<TeamPlatformItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<TeamPlatformItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<TeamPlatformItem>::MoveNext()
// T System.Array/InternalEnumerator`1<TeamPlatformItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<TeamPlatformItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19267____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19267, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19267____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19267, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19267_FieldInfos[] =
{
	&InternalEnumerator_1_t19267____array_FieldInfo,
	&InternalEnumerator_1_t19267____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140681_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19267____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19267_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140681_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140684_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19267____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19267_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140684_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19267_PropertyInfos[] =
{
	&InternalEnumerator_1_t19267____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19267____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19267_InternalEnumerator_1__ctor_m140679_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamPlatformItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140679_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19267_InternalEnumerator_1__ctor_m140679_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamPlatformItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140680_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<TeamPlatformItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140681_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<TeamPlatformItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140682_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<TeamPlatformItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140683_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<TeamPlatformItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140684_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* declaring_type */
	, &TeamPlatformItem_t1947_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19267_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140679_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140680_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140681_MethodInfo,
	&InternalEnumerator_1_Dispose_m140682_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140683_MethodInfo,
	&InternalEnumerator_1_get_Current_m140684_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140681_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140683_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140680_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140682_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140684_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19267_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140681_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140683_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140680_MethodInfo,
	&InternalEnumerator_1_Dispose_m140682_MethodInfo,
	&InternalEnumerator_1_get_Current_m140684_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27973_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19267_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27973_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27973_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19267_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27973_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140684_MethodInfo;
extern TypeInfo TeamPlatformItem_t1947_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTeamPlatformItem_t1947_m205034_MethodInfo;
static void* InternalEnumerator_1_t19267_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140684_MethodInfo,
	&TeamPlatformItem_t1947_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTeamPlatformItem_t1947_m205034_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19267_0_0_0;
extern Il2CppType InternalEnumerator_1_t19267_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19267_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19267_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19267_MethodInfos/* methods */
	, InternalEnumerator_1_t19267_PropertyInfos/* properties */
	, InternalEnumerator_1_t19267_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19267_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19267_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19267_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19267_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19267_1_0_0/* this_arg */
	, InternalEnumerator_1_t19267_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19267_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19267_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19267)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<TeamPlatformItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<TeamPlatformItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<TeamPlatformItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<TeamPlatformItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<TeamPlatformItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<TeamPlatformItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<TeamPlatformItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<TeamPlatformItem>
extern MethodInfo ICollection_1_get_Count_m251286_MethodInfo;
static PropertyInfo ICollection_1_t33130____Count_PropertyInfo = 
{
	&ICollection_1_t33130_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251286_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251287_MethodInfo;
static PropertyInfo ICollection_1_t33130____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33130_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251287_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33130_PropertyInfos[] =
{
	&ICollection_1_t33130____Count_PropertyInfo,
	&ICollection_1_t33130____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<TeamPlatformItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251286_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamPlatformItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251287_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo ICollection_1_t33130_ICollection_1_Add_m251288_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamPlatformItem>::Add(T)
MethodInfo ICollection_1_Add_m251288_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33130_ICollection_1_Add_m251288_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamPlatformItem>::Clear()
MethodInfo ICollection_1_Clear_m251289_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo ICollection_1_t33130_ICollection_1_Contains_m251290_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamPlatformItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251290_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33130_ICollection_1_Contains_m251290_ParameterInfos/* parameters */
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
extern Il2CppType TeamPlatformItemU5BU5D_t25979_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33130_ICollection_1_CopyTo_m251291_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItemU5BU5D_t25979_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<TeamPlatformItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251291_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33130_ICollection_1_CopyTo_m251291_ParameterInfos/* parameters */
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
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo ICollection_1_t33130_ICollection_1_Remove_m251292_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<TeamPlatformItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251292_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33130_ICollection_1_Remove_m251292_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33130_MethodInfos[] =
{
	&ICollection_1_get_Count_m251286_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251287_MethodInfo,
	&ICollection_1_Add_m251288_MethodInfo,
	&ICollection_1_Clear_m251289_MethodInfo,
	&ICollection_1_Contains_m251290_MethodInfo,
	&ICollection_1_CopyTo_m251291_MethodInfo,
	&ICollection_1_Remove_m251292_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33132_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33130_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33132_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33130_0_0_0;
extern Il2CppType ICollection_1_t33130_1_0_0;
struct ICollection_1_t33130;
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33130_GenericClass;
TypeInfo ICollection_1_t33130_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33130_MethodInfos/* methods */
	, ICollection_1_t33130_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33130_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33130_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33130_0_0_0/* byval_arg */
	, &ICollection_1_t33130_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33130_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33132_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamPlatformItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<TeamPlatformItem>
extern TypeInfo IEnumerable_1_t33132_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27973_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<TeamPlatformItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251293_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33132_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27973_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33132_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251293_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33132_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33132_0_0_0;
extern Il2CppType IEnumerable_1_t33132_1_0_0;
struct IEnumerable_1_t33132;
extern TypeInfo IEnumerable_1_t33132_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33132_GenericClass;
TypeInfo IEnumerable_1_t33132_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33132_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33132_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33132_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33132_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33132_0_0_0/* byval_arg */
	, &IEnumerable_1_t33132_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33132_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33131_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<TeamPlatformItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<TeamPlatformItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<TeamPlatformItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<TeamPlatformItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<TeamPlatformItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<TeamPlatformItem>
extern MethodInfo IList_1_get_Item_m251294_MethodInfo;
extern MethodInfo IList_1_set_Item_m251295_MethodInfo;
static PropertyInfo IList_1_t33131____Item_PropertyInfo = 
{
	&IList_1_t33131_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251294_MethodInfo/* get */
	, &IList_1_set_Item_m251295_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33131_PropertyInfos[] =
{
	&IList_1_t33131____Item_PropertyInfo,
	NULL
};
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo IList_1_t33131_IList_1_IndexOf_m251296_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo IList_1_t33131_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<TeamPlatformItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251296_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33131_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33131_IList_1_IndexOf_m251296_ParameterInfos/* parameters */
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
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo IList_1_t33131_IList_1_Insert_m251297_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo IList_1_t33131_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamPlatformItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251297_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33131_IList_1_Insert_m251297_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33131_IList_1_RemoveAt_m251298_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33131_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamPlatformItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251298_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33131_IList_1_RemoveAt_m251298_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33131_IList_1_get_Item_m251294_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33131_il2cpp_TypeInfo;
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<TeamPlatformItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251294_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33131_il2cpp_TypeInfo/* declaring_type */
	, &TeamPlatformItem_t1947_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33131_IList_1_get_Item_m251294_ParameterInfos/* parameters */
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
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo IList_1_t33131_IList_1_set_Item_m251295_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo IList_1_t33131_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<TeamPlatformItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251295_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33131_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33131_IList_1_set_Item_m251295_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33131_MethodInfos[] =
{
	&IList_1_IndexOf_m251296_MethodInfo,
	&IList_1_Insert_m251297_MethodInfo,
	&IList_1_RemoveAt_m251298_MethodInfo,
	&IList_1_get_Item_m251294_MethodInfo,
	&IList_1_set_Item_m251295_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33130_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33132_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33131_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33130_il2cpp_TypeInfo,
	&IEnumerable_1_t33132_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33131_0_0_0;
extern Il2CppType IList_1_t33131_1_0_0;
struct IList_1_t33131;
extern TypeInfo IList_1_t33131_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33131_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33131_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33131_MethodInfos/* methods */
	, IList_1_t33131_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33131_il2cpp_TypeInfo/* element_class */
	, IList_1_t33131_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33131_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33131_0_0_0/* byval_arg */
	, &IList_1_t33131_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33131_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<TeamPlatformItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_415.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19268_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<TeamPlatformItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_415MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<TeamPlatformItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_411.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19268_il2cpp_TypeInfo;
extern TypeInfo TeamPlatformItem_t1947_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<TeamPlatformItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_411MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140687_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140689_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamPlatformItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamPlatformItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<TeamPlatformItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19268____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19268_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19268, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19268_FieldInfos[] =
{
	&CachedInvokableCall_1_t19268____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19268_CachedInvokableCall_1__ctor_m140685_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19268_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamPlatformItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140685_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19268_CachedInvokableCall_1__ctor_m140685_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19268_CachedInvokableCall_1_Invoke_m140686_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19268_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<TeamPlatformItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140686_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19268_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19268_CachedInvokableCall_1_Invoke_m140686_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19268_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140685_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140686_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140686_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140690_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19268_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140686_MethodInfo,
	&InvokableCall_1_Find_m140690_MethodInfo,
};
extern Il2CppType UnityAction_1_t19270_0_0_0;
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamPlatformItem_t1947_m205044_MethodInfo;
extern TypeInfo TeamPlatformItem_t1947_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140692_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140687_MethodInfo;
extern TypeInfo TeamPlatformItem_t1947_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140689_MethodInfo;
static void* CachedInvokableCall_1_t19268_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19270_0_0_0,
	&UnityAction_1_t19270_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamPlatformItem_t1947_m205044_MethodInfo,
	&TeamPlatformItem_t1947_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140692_MethodInfo,
	&InvokableCall_1__ctor_m140687_MethodInfo,
	&TeamPlatformItem_t1947_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140689_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19268_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19268_1_0_0;
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19268;
extern TypeInfo CachedInvokableCall_1_t19268_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19268_GenericClass;
TypeInfo CachedInvokableCall_1_t19268_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19268_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19268_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19268_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19268_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19268_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19268_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19268_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19268_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19268_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19268)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<TeamPlatformItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_418.h"
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo TeamPlatformItem_t1947_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<TeamPlatformItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_418MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19270_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamPlatformItem_t1947_m205044_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140692_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamPlatformItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<TeamPlatformItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisTeamPlatformItem_t1947_m205044(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamPlatformItem_t1947_m205044_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<TeamPlatformItem>
extern Il2CppType UnityAction_1_t19270_0_0_1;
FieldInfo InvokableCall_1_t19269____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19270_0_0_1/* type */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19269, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19269_FieldInfos[] =
{
	&InvokableCall_1_t19269____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19269_InvokableCall_1__ctor_m140687_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140687_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19269_InvokableCall_1__ctor_m140687_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19270_0_0_0;
static ParameterInfo InvokableCall_1_t19269_InvokableCall_1__ctor_m140688_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19270_0_0_0},
};
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140688_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19269_InvokableCall_1__ctor_m140688_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19269_InvokableCall_1_Invoke_m140689_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140689_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19269_InvokableCall_1_Invoke_m140689_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19269_InvokableCall_1_Find_m140690_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<TeamPlatformItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140690_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19269_InvokableCall_1_Find_m140690_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19269_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140687_MethodInfo,
	&InvokableCall_1__ctor_m140688_MethodInfo,
	&InvokableCall_1_Invoke_m140689_MethodInfo,
	&InvokableCall_1_Find_m140690_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140689_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140690_MethodInfo;
static MethodInfo* InvokableCall_1_t19269_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140689_MethodInfo,
	&InvokableCall_1_Find_m140690_MethodInfo,
};
extern Il2CppType UnityAction_1_t19270_0_0_0;
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisTeamPlatformItem_t1947_m205044_MethodInfo;
extern TypeInfo TeamPlatformItem_t1947_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140692_MethodInfo;
static void* InvokableCall_1_t19269_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19270_0_0_0,
	&UnityAction_1_t19270_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisTeamPlatformItem_t1947_m205044_MethodInfo,
	&TeamPlatformItem_t1947_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140692_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19269_0_0_0;
extern Il2CppType InvokableCall_1_t19269_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19269;
extern TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19269_GenericClass;
TypeInfo InvokableCall_1_t19269_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19269_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19269_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19269_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19269_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19269_0_0_0/* byval_arg */
	, &InvokableCall_1_t19269_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19269_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19269_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19269)/* instance_size */
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
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<TeamPlatformItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<TeamPlatformItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamPlatformItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<TeamPlatformItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<TeamPlatformItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19270_UnityAction_1__ctor_m140691_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamPlatformItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140691_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19270_UnityAction_1__ctor_m140691_ParameterInfos/* parameters */
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
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
static ParameterInfo UnityAction_1_t19270_UnityAction_1_Invoke_m140692_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
};
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamPlatformItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140692_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19270_UnityAction_1_Invoke_m140692_ParameterInfos/* parameters */
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
extern Il2CppType TeamPlatformItem_t1947_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19270_UnityAction_1_BeginInvoke_m140693_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &TeamPlatformItem_t1947_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<TeamPlatformItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140693_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19270_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19270_UnityAction_1_BeginInvoke_m140693_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19270_UnityAction_1_EndInvoke_m140694_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<TeamPlatformItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140694_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19270_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19270_UnityAction_1_EndInvoke_m140694_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19270_MethodInfos[] =
{
	&UnityAction_1__ctor_m140691_MethodInfo,
	&UnityAction_1_Invoke_m140692_MethodInfo,
	&UnityAction_1_BeginInvoke_m140693_MethodInfo,
	&UnityAction_1_EndInvoke_m140694_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140692_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140693_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140694_MethodInfo;
static MethodInfo* UnityAction_1_t19270_VTable[] =
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
	&UnityAction_1_Invoke_m140692_MethodInfo,
	&UnityAction_1_BeginInvoke_m140693_MethodInfo,
	&UnityAction_1_EndInvoke_m140694_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19270_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19270_0_0_0;
extern Il2CppType UnityAction_1_t19270_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19270;
extern TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19270_GenericClass;
TypeInfo UnityAction_1_t19270_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19270_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19270_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19270_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19270_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19270_0_0_0/* byval_arg */
	, &UnityAction_1_t19270_1_0_0/* this_arg */
	, UnityAction_1_t19270_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19270_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19270)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27974_il2cpp_TypeInfo;

// WorldBossListItem
#include "AssemblyU2DCSharp_WorldBossListItem.h"


// T System.Collections.Generic.IEnumerator`1<WorldBossListItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<WorldBossListItem>
extern MethodInfo IEnumerator_1_get_Current_m251299_MethodInfo;
static PropertyInfo IEnumerator_1_t27974____Current_PropertyInfo = 
{
	&IEnumerator_1_t27974_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251299_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27974_PropertyInfos[] =
{
	&IEnumerator_1_t27974____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27974_il2cpp_TypeInfo;
extern Il2CppType WorldBossListItem_t1949_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<WorldBossListItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251299_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27974_il2cpp_TypeInfo/* declaring_type */
	, &WorldBossListItem_t1949_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27974_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251299_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27974_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27974_0_0_0;
extern Il2CppType IEnumerator_1_t27974_1_0_0;
struct IEnumerator_1_t27974;
extern TypeInfo IEnumerator_1_t27974_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27974_GenericClass;
TypeInfo IEnumerator_1_t27974_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27974_MethodInfos/* methods */
	, IEnumerator_1_t27974_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27974_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27974_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27974_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27974_0_0_0/* byval_arg */
	, &IEnumerator_1_t27974_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27974_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<WorldBossListItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1624.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<WorldBossListItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1624MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern TypeInfo WorldBossListItem_t1949_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140700_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWorldBossListItem_t1949_m205046_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<WorldBossListItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<WorldBossListItem>(System.Int32)
#define Array_InternalArray__get_Item_TisWorldBossListItem_t1949_m205046(__this, p0, method) (WorldBossListItem_t1949 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisWorldBossListItem_t1949_m205046_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<WorldBossListItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<WorldBossListItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<WorldBossListItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<WorldBossListItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<WorldBossListItem>::MoveNext()
// T System.Array/InternalEnumerator`1<WorldBossListItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<WorldBossListItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19271____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19271, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19271____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19271, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19271_FieldInfos[] =
{
	&InternalEnumerator_1_t19271____array_FieldInfo,
	&InternalEnumerator_1_t19271____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140697_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19271____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19271_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140697_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140700_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19271____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19271_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19271_PropertyInfos[] =
{
	&InternalEnumerator_1_t19271____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19271____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19271_InternalEnumerator_1__ctor_m140695_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WorldBossListItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140695_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19271_InternalEnumerator_1__ctor_m140695_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WorldBossListItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140696_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<WorldBossListItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140697_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WorldBossListItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140698_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<WorldBossListItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140699_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern Il2CppType WorldBossListItem_t1949_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<WorldBossListItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140700_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* declaring_type */
	, &WorldBossListItem_t1949_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19271_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140695_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140696_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140697_MethodInfo,
	&InternalEnumerator_1_Dispose_m140698_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140699_MethodInfo,
	&InternalEnumerator_1_get_Current_m140700_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140697_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140699_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140696_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140698_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140700_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19271_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140697_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140699_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140696_MethodInfo,
	&InternalEnumerator_1_Dispose_m140698_MethodInfo,
	&InternalEnumerator_1_get_Current_m140700_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27974_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19271_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27974_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27974_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19271_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27974_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140700_MethodInfo;
extern TypeInfo WorldBossListItem_t1949_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWorldBossListItem_t1949_m205046_MethodInfo;
static void* InternalEnumerator_1_t19271_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140700_MethodInfo,
	&WorldBossListItem_t1949_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisWorldBossListItem_t1949_m205046_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19271_0_0_0;
extern Il2CppType InternalEnumerator_1_t19271_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19271_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19271_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19271_MethodInfos/* methods */
	, InternalEnumerator_1_t19271_PropertyInfos/* properties */
	, InternalEnumerator_1_t19271_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19271_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19271_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19271_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19271_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19271_1_0_0/* this_arg */
	, InternalEnumerator_1_t19271_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19271_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19271_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19271)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<WorldBossListItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<WorldBossListItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<WorldBossListItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<WorldBossListItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<WorldBossListItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<WorldBossListItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<WorldBossListItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<WorldBossListItem>
extern MethodInfo ICollection_1_get_Count_m251300_MethodInfo;
static PropertyInfo ICollection_1_t33133____Count_PropertyInfo = 
{
	&ICollection_1_t33133_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251300_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251301_MethodInfo;
static PropertyInfo ICollection_1_t33133____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33133_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251301_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33133_PropertyInfos[] =
{
	&ICollection_1_t33133____Count_PropertyInfo,
	&ICollection_1_t33133____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<WorldBossListItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251300_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WorldBossListItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251301_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo ICollection_1_t33133_ICollection_1_Add_m251302_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WorldBossListItem>::Add(T)
MethodInfo ICollection_1_Add_m251302_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33133_ICollection_1_Add_m251302_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WorldBossListItem>::Clear()
MethodInfo ICollection_1_Clear_m251303_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo ICollection_1_t33133_ICollection_1_Contains_m251304_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WorldBossListItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251304_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33133_ICollection_1_Contains_m251304_ParameterInfos/* parameters */
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
extern Il2CppType WorldBossListItemU5BU5D_t25980_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33133_ICollection_1_CopyTo_m251305_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WorldBossListItemU5BU5D_t25980_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WorldBossListItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251305_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33133_ICollection_1_CopyTo_m251305_ParameterInfos/* parameters */
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
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo ICollection_1_t33133_ICollection_1_Remove_m251306_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WorldBossListItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251306_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33133_ICollection_1_Remove_m251306_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33133_MethodInfos[] =
{
	&ICollection_1_get_Count_m251300_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251301_MethodInfo,
	&ICollection_1_Add_m251302_MethodInfo,
	&ICollection_1_Clear_m251303_MethodInfo,
	&ICollection_1_Contains_m251304_MethodInfo,
	&ICollection_1_CopyTo_m251305_MethodInfo,
	&ICollection_1_Remove_m251306_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33135_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33133_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33135_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33133_0_0_0;
extern Il2CppType ICollection_1_t33133_1_0_0;
struct ICollection_1_t33133;
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33133_GenericClass;
TypeInfo ICollection_1_t33133_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33133_MethodInfos/* methods */
	, ICollection_1_t33133_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33133_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33133_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33133_0_0_0/* byval_arg */
	, &ICollection_1_t33133_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33133_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33135_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<WorldBossListItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<WorldBossListItem>
extern TypeInfo IEnumerable_1_t33135_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27974_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<WorldBossListItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251307_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33135_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27974_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33135_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251307_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33135_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33135_0_0_0;
extern Il2CppType IEnumerable_1_t33135_1_0_0;
struct IEnumerable_1_t33135;
extern TypeInfo IEnumerable_1_t33135_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33135_GenericClass;
TypeInfo IEnumerable_1_t33135_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33135_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33135_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33135_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33135_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33135_0_0_0/* byval_arg */
	, &IEnumerable_1_t33135_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33135_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33134_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<WorldBossListItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<WorldBossListItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<WorldBossListItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<WorldBossListItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<WorldBossListItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<WorldBossListItem>
extern MethodInfo IList_1_get_Item_m251308_MethodInfo;
extern MethodInfo IList_1_set_Item_m251309_MethodInfo;
static PropertyInfo IList_1_t33134____Item_PropertyInfo = 
{
	&IList_1_t33134_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251308_MethodInfo/* get */
	, &IList_1_set_Item_m251309_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33134_PropertyInfos[] =
{
	&IList_1_t33134____Item_PropertyInfo,
	NULL
};
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo IList_1_t33134_IList_1_IndexOf_m251310_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo IList_1_t33134_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<WorldBossListItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251310_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33134_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33134_IList_1_IndexOf_m251310_ParameterInfos/* parameters */
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
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo IList_1_t33134_IList_1_Insert_m251311_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo IList_1_t33134_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<WorldBossListItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251311_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33134_IList_1_Insert_m251311_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33134_IList_1_RemoveAt_m251312_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33134_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<WorldBossListItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251312_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33134_IList_1_RemoveAt_m251312_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33134_IList_1_get_Item_m251308_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33134_il2cpp_TypeInfo;
extern Il2CppType WorldBossListItem_t1949_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<WorldBossListItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251308_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33134_il2cpp_TypeInfo/* declaring_type */
	, &WorldBossListItem_t1949_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33134_IList_1_get_Item_m251308_ParameterInfos/* parameters */
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
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo IList_1_t33134_IList_1_set_Item_m251309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo IList_1_t33134_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<WorldBossListItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251309_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33134_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33134_IList_1_set_Item_m251309_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33134_MethodInfos[] =
{
	&IList_1_IndexOf_m251310_MethodInfo,
	&IList_1_Insert_m251311_MethodInfo,
	&IList_1_RemoveAt_m251312_MethodInfo,
	&IList_1_get_Item_m251308_MethodInfo,
	&IList_1_set_Item_m251309_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33133_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33135_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33134_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33133_il2cpp_TypeInfo,
	&IEnumerable_1_t33135_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33134_0_0_0;
extern Il2CppType IList_1_t33134_1_0_0;
struct IList_1_t33134;
extern TypeInfo IList_1_t33134_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33134_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33134_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33134_MethodInfos/* methods */
	, IList_1_t33134_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33134_il2cpp_TypeInfo/* element_class */
	, IList_1_t33134_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33134_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33134_0_0_0/* byval_arg */
	, &IList_1_t33134_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33134_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<WorldBossListItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_416.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19272_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<WorldBossListItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_416MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<WorldBossListItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_412.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19272_il2cpp_TypeInfo;
extern TypeInfo WorldBossListItem_t1949_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<WorldBossListItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_412MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140703_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140705_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<WorldBossListItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<WorldBossListItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<WorldBossListItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19272____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19272_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19272, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19272_FieldInfos[] =
{
	&CachedInvokableCall_1_t19272____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19272_CachedInvokableCall_1__ctor_m140701_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19272_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<WorldBossListItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140701_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19272_CachedInvokableCall_1__ctor_m140701_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19272_CachedInvokableCall_1_Invoke_m140702_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19272_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<WorldBossListItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140702_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19272_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19272_CachedInvokableCall_1_Invoke_m140702_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19272_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140701_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140702_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140702_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140706_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19272_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140702_MethodInfo,
	&InvokableCall_1_Find_m140706_MethodInfo,
};
extern Il2CppType UnityAction_1_t19274_0_0_0;
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWorldBossListItem_t1949_m205056_MethodInfo;
extern TypeInfo WorldBossListItem_t1949_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140708_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140703_MethodInfo;
extern TypeInfo WorldBossListItem_t1949_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140705_MethodInfo;
static void* CachedInvokableCall_1_t19272_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19274_0_0_0,
	&UnityAction_1_t19274_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisWorldBossListItem_t1949_m205056_MethodInfo,
	&WorldBossListItem_t1949_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140708_MethodInfo,
	&InvokableCall_1__ctor_m140703_MethodInfo,
	&WorldBossListItem_t1949_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140705_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19272_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19272_1_0_0;
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19272;
extern TypeInfo CachedInvokableCall_1_t19272_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19272_GenericClass;
TypeInfo CachedInvokableCall_1_t19272_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19272_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19272_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19272_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19272_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19272_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19272_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19272_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19272_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19272_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19272)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<WorldBossListItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_419.h"
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo WorldBossListItem_t1949_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<WorldBossListItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_419MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19274_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWorldBossListItem_t1949_m205056_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140708_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<WorldBossListItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<WorldBossListItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisWorldBossListItem_t1949_m205056(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWorldBossListItem_t1949_m205056_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<WorldBossListItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<WorldBossListItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<WorldBossListItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<WorldBossListItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<WorldBossListItem>
extern Il2CppType UnityAction_1_t19274_0_0_1;
FieldInfo InvokableCall_1_t19273____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19274_0_0_1/* type */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19273, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19273_FieldInfos[] =
{
	&InvokableCall_1_t19273____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19273_InvokableCall_1__ctor_m140703_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<WorldBossListItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140703_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19273_InvokableCall_1__ctor_m140703_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19274_0_0_0;
static ParameterInfo InvokableCall_1_t19273_InvokableCall_1__ctor_m140704_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19274_0_0_0},
};
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<WorldBossListItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140704_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19273_InvokableCall_1__ctor_m140704_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19273_InvokableCall_1_Invoke_m140705_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<WorldBossListItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140705_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19273_InvokableCall_1_Invoke_m140705_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19273_InvokableCall_1_Find_m140706_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<WorldBossListItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140706_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19273_InvokableCall_1_Find_m140706_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19273_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140703_MethodInfo,
	&InvokableCall_1__ctor_m140704_MethodInfo,
	&InvokableCall_1_Invoke_m140705_MethodInfo,
	&InvokableCall_1_Find_m140706_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140705_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140706_MethodInfo;
static MethodInfo* InvokableCall_1_t19273_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140705_MethodInfo,
	&InvokableCall_1_Find_m140706_MethodInfo,
};
extern Il2CppType UnityAction_1_t19274_0_0_0;
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWorldBossListItem_t1949_m205056_MethodInfo;
extern TypeInfo WorldBossListItem_t1949_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140708_MethodInfo;
static void* InvokableCall_1_t19273_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19274_0_0_0,
	&UnityAction_1_t19274_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisWorldBossListItem_t1949_m205056_MethodInfo,
	&WorldBossListItem_t1949_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140708_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19273_0_0_0;
extern Il2CppType InvokableCall_1_t19273_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19273;
extern TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19273_GenericClass;
TypeInfo InvokableCall_1_t19273_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19273_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19273_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19273_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19273_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19273_0_0_0/* byval_arg */
	, &InvokableCall_1_t19273_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19273_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19273_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19273)/* instance_size */
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
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<WorldBossListItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<WorldBossListItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<WorldBossListItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<WorldBossListItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<WorldBossListItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19274_UnityAction_1__ctor_m140707_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<WorldBossListItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140707_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19274_UnityAction_1__ctor_m140707_ParameterInfos/* parameters */
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
extern Il2CppType WorldBossListItem_t1949_0_0_0;
static ParameterInfo UnityAction_1_t19274_UnityAction_1_Invoke_m140708_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
};
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<WorldBossListItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140708_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19274_UnityAction_1_Invoke_m140708_ParameterInfos/* parameters */
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
extern Il2CppType WorldBossListItem_t1949_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19274_UnityAction_1_BeginInvoke_m140709_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &WorldBossListItem_t1949_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<WorldBossListItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140709_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19274_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19274_UnityAction_1_BeginInvoke_m140709_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19274_UnityAction_1_EndInvoke_m140710_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<WorldBossListItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140710_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19274_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19274_UnityAction_1_EndInvoke_m140710_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19274_MethodInfos[] =
{
	&UnityAction_1__ctor_m140707_MethodInfo,
	&UnityAction_1_Invoke_m140708_MethodInfo,
	&UnityAction_1_BeginInvoke_m140709_MethodInfo,
	&UnityAction_1_EndInvoke_m140710_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140708_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140709_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140710_MethodInfo;
static MethodInfo* UnityAction_1_t19274_VTable[] =
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
	&UnityAction_1_Invoke_m140708_MethodInfo,
	&UnityAction_1_BeginInvoke_m140709_MethodInfo,
	&UnityAction_1_EndInvoke_m140710_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19274_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19274_0_0_0;
extern Il2CppType UnityAction_1_t19274_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19274;
extern TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19274_GenericClass;
TypeInfo UnityAction_1_t19274_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19274_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19274_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19274_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19274_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19274_0_0_0/* byval_arg */
	, &UnityAction_1_t19274_1_0_0/* this_arg */
	, UnityAction_1_t19274_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19274_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19274)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27975_il2cpp_TypeInfo;

// WuLinMemberListItem
#include "AssemblyU2DCSharp_WuLinMemberListItem.h"


// T System.Collections.Generic.IEnumerator`1<WuLinMemberListItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<WuLinMemberListItem>
extern MethodInfo IEnumerator_1_get_Current_m251313_MethodInfo;
static PropertyInfo IEnumerator_1_t27975____Current_PropertyInfo = 
{
	&IEnumerator_1_t27975_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251313_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27975_PropertyInfos[] =
{
	&IEnumerator_1_t27975____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27975_il2cpp_TypeInfo;
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<WuLinMemberListItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251313_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27975_il2cpp_TypeInfo/* declaring_type */
	, &WuLinMemberListItem_t1951_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27975_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251313_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27975_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27975_0_0_0;
extern Il2CppType IEnumerator_1_t27975_1_0_0;
struct IEnumerator_1_t27975;
extern TypeInfo IEnumerator_1_t27975_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27975_GenericClass;
TypeInfo IEnumerator_1_t27975_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27975_MethodInfos/* methods */
	, IEnumerator_1_t27975_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27975_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27975_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27975_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27975_0_0_0/* byval_arg */
	, &IEnumerator_1_t27975_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27975_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<WuLinMemberListItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1625.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<WuLinMemberListItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1625MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern TypeInfo WuLinMemberListItem_t1951_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140716_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWuLinMemberListItem_t1951_m205058_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<WuLinMemberListItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<WuLinMemberListItem>(System.Int32)
#define Array_InternalArray__get_Item_TisWuLinMemberListItem_t1951_m205058(__this, p0, method) (WuLinMemberListItem_t1951 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisWuLinMemberListItem_t1951_m205058_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<WuLinMemberListItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<WuLinMemberListItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<WuLinMemberListItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<WuLinMemberListItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<WuLinMemberListItem>::MoveNext()
// T System.Array/InternalEnumerator`1<WuLinMemberListItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<WuLinMemberListItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19275____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19275, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19275____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19275, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19275_FieldInfos[] =
{
	&InternalEnumerator_1_t19275____array_FieldInfo,
	&InternalEnumerator_1_t19275____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140713_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19275____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19275_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140713_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140716_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19275____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19275_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140716_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19275_PropertyInfos[] =
{
	&InternalEnumerator_1_t19275____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19275____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19275_InternalEnumerator_1__ctor_m140711_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WuLinMemberListItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140711_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19275_InternalEnumerator_1__ctor_m140711_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WuLinMemberListItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140712_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<WuLinMemberListItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140713_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WuLinMemberListItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140714_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<WuLinMemberListItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140715_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<WuLinMemberListItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140716_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* declaring_type */
	, &WuLinMemberListItem_t1951_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19275_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140711_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140712_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140713_MethodInfo,
	&InternalEnumerator_1_Dispose_m140714_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140715_MethodInfo,
	&InternalEnumerator_1_get_Current_m140716_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140713_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140715_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140712_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140714_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140716_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19275_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140713_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140715_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140712_MethodInfo,
	&InternalEnumerator_1_Dispose_m140714_MethodInfo,
	&InternalEnumerator_1_get_Current_m140716_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27975_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19275_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27975_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27975_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19275_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27975_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140716_MethodInfo;
extern TypeInfo WuLinMemberListItem_t1951_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWuLinMemberListItem_t1951_m205058_MethodInfo;
static void* InternalEnumerator_1_t19275_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140716_MethodInfo,
	&WuLinMemberListItem_t1951_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisWuLinMemberListItem_t1951_m205058_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19275_0_0_0;
extern Il2CppType InternalEnumerator_1_t19275_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19275_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19275_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19275_MethodInfos/* methods */
	, InternalEnumerator_1_t19275_PropertyInfos/* properties */
	, InternalEnumerator_1_t19275_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19275_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19275_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19275_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19275_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19275_1_0_0/* this_arg */
	, InternalEnumerator_1_t19275_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19275_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19275_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19275)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<WuLinMemberListItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<WuLinMemberListItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<WuLinMemberListItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<WuLinMemberListItem>
extern MethodInfo ICollection_1_get_Count_m251314_MethodInfo;
static PropertyInfo ICollection_1_t33136____Count_PropertyInfo = 
{
	&ICollection_1_t33136_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251314_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251315_MethodInfo;
static PropertyInfo ICollection_1_t33136____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33136_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251315_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33136_PropertyInfos[] =
{
	&ICollection_1_t33136____Count_PropertyInfo,
	&ICollection_1_t33136____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<WuLinMemberListItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251314_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WuLinMemberListItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251315_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo ICollection_1_t33136_ICollection_1_Add_m251316_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Add(T)
MethodInfo ICollection_1_Add_m251316_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33136_ICollection_1_Add_m251316_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Clear()
MethodInfo ICollection_1_Clear_m251317_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo ICollection_1_t33136_ICollection_1_Contains_m251318_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251318_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33136_ICollection_1_Contains_m251318_ParameterInfos/* parameters */
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
extern Il2CppType WuLinMemberListItemU5BU5D_t25981_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33136_ICollection_1_CopyTo_m251319_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItemU5BU5D_t25981_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WuLinMemberListItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251319_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33136_ICollection_1_CopyTo_m251319_ParameterInfos/* parameters */
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
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo ICollection_1_t33136_ICollection_1_Remove_m251320_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WuLinMemberListItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251320_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33136_ICollection_1_Remove_m251320_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33136_MethodInfos[] =
{
	&ICollection_1_get_Count_m251314_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251315_MethodInfo,
	&ICollection_1_Add_m251316_MethodInfo,
	&ICollection_1_Clear_m251317_MethodInfo,
	&ICollection_1_Contains_m251318_MethodInfo,
	&ICollection_1_CopyTo_m251319_MethodInfo,
	&ICollection_1_Remove_m251320_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33138_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33136_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33138_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33136_0_0_0;
extern Il2CppType ICollection_1_t33136_1_0_0;
struct ICollection_1_t33136;
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33136_GenericClass;
TypeInfo ICollection_1_t33136_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33136_MethodInfos/* methods */
	, ICollection_1_t33136_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33136_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33136_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33136_0_0_0/* byval_arg */
	, &ICollection_1_t33136_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33136_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t33138_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<WuLinMemberListItem>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<WuLinMemberListItem>
extern TypeInfo IEnumerable_1_t33138_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27975_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<WuLinMemberListItem>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m251321_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t33138_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27975_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t33138_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m251321_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t33138_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t33138_0_0_0;
extern Il2CppType IEnumerable_1_t33138_1_0_0;
struct IEnumerable_1_t33138;
extern TypeInfo IEnumerable_1_t33138_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t33138_GenericClass;
TypeInfo IEnumerable_1_t33138_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t33138_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t33138_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t33138_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t33138_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t33138_0_0_0/* byval_arg */
	, &IEnumerable_1_t33138_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t33138_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t33137_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<WuLinMemberListItem>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<WuLinMemberListItem>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<WuLinMemberListItem>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<WuLinMemberListItem>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<WuLinMemberListItem>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<WuLinMemberListItem>
extern MethodInfo IList_1_get_Item_m251322_MethodInfo;
extern MethodInfo IList_1_set_Item_m251323_MethodInfo;
static PropertyInfo IList_1_t33137____Item_PropertyInfo = 
{
	&IList_1_t33137_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m251322_MethodInfo/* get */
	, &IList_1_set_Item_m251323_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t33137_PropertyInfos[] =
{
	&IList_1_t33137____Item_PropertyInfo,
	NULL
};
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo IList_1_t33137_IList_1_IndexOf_m251324_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo IList_1_t33137_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<WuLinMemberListItem>::IndexOf(T)
MethodInfo IList_1_IndexOf_m251324_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t33137_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33137_IList_1_IndexOf_m251324_ParameterInfos/* parameters */
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
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo IList_1_t33137_IList_1_Insert_m251325_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo IList_1_t33137_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<WuLinMemberListItem>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m251325_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t33137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33137_IList_1_Insert_m251325_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33137_IList_1_RemoveAt_m251326_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33137_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<WuLinMemberListItem>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m251326_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t33137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t33137_IList_1_RemoveAt_m251326_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t33137_IList_1_get_Item_m251322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t33137_il2cpp_TypeInfo;
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<WuLinMemberListItem>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m251322_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t33137_il2cpp_TypeInfo/* declaring_type */
	, &WuLinMemberListItem_t1951_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t33137_IList_1_get_Item_m251322_ParameterInfos/* parameters */
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
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo IList_1_t33137_IList_1_set_Item_m251323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo IList_1_t33137_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<WuLinMemberListItem>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m251323_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t33137_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t33137_IList_1_set_Item_m251323_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t33137_MethodInfos[] =
{
	&IList_1_IndexOf_m251324_MethodInfo,
	&IList_1_Insert_m251325_MethodInfo,
	&IList_1_RemoveAt_m251326_MethodInfo,
	&IList_1_get_Item_m251322_MethodInfo,
	&IList_1_set_Item_m251323_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t33136_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33138_il2cpp_TypeInfo;
static TypeInfo* IList_1_t33137_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t33136_il2cpp_TypeInfo,
	&IEnumerable_1_t33138_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t33137_0_0_0;
extern Il2CppType IList_1_t33137_1_0_0;
struct IList_1_t33137;
extern TypeInfo IList_1_t33137_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t33137_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t33137_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t33137_MethodInfos/* methods */
	, IList_1_t33137_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t33137_il2cpp_TypeInfo/* element_class */
	, IList_1_t33137_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t33137_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t33137_0_0_0/* byval_arg */
	, &IList_1_t33137_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t33137_GenericClass/* generic_class */
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
// UnityEngine.Events.CachedInvokableCall`1<WuLinMemberListItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_417.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo CachedInvokableCall_1_t19276_il2cpp_TypeInfo;
// UnityEngine.Events.CachedInvokableCall`1<WuLinMemberListItem>
#include "UnityEngine_UnityEngine_Events_CachedInvokableCall_1_gen_417MethodDeclarations.h"

// UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_413.h"
extern TypeInfo ObjectU5BU5D_t142_il2cpp_TypeInfo;
extern TypeInfo Object_t_il2cpp_TypeInfo;
extern TypeInfo CachedInvokableCall_1_t19276_il2cpp_TypeInfo;
extern TypeInfo WuLinMemberListItem_t1951_il2cpp_TypeInfo;
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>
#include "UnityEngine_UnityEngine_Events_InvokableCall_1_gen_413MethodDeclarations.h"
extern MethodInfo InvokableCall_1__ctor_m140719_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140721_MethodInfo;


// System.Void UnityEngine.Events.CachedInvokableCall`1<WuLinMemberListItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
// System.Void UnityEngine.Events.CachedInvokableCall`1<WuLinMemberListItem>::Invoke(System.Object[])
// Metadata Definition UnityEngine.Events.CachedInvokableCall`1<WuLinMemberListItem>
extern Il2CppType ObjectU5BU5D_t142_0_0_33;
FieldInfo CachedInvokableCall_1_t19276____m_Arg1_FieldInfo = 
{
	"m_Arg1"/* name */
	, &ObjectU5BU5D_t142_0_0_33/* type */
	, &CachedInvokableCall_1_t19276_il2cpp_TypeInfo/* parent */
	, offsetof(CachedInvokableCall_1_t19276, ___m_Arg1)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* CachedInvokableCall_1_t19276_FieldInfos[] =
{
	&CachedInvokableCall_1_t19276____m_Arg1_FieldInfo,
	NULL
};
extern Il2CppType Object_t982_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo CachedInvokableCall_1_t19276_CachedInvokableCall_1__ctor_m140717_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t982_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
	{"argument", 2, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19276_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<WuLinMemberListItem>::.ctor(UnityEngine.Object,System.Reflection.MethodInfo,T)
MethodInfo CachedInvokableCall_1__ctor_m140717_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&CachedInvokableCall_1__ctor_m57862_gshared/* method */
	, &CachedInvokableCall_1_t19276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19276_CachedInvokableCall_1__ctor_m140717_ParameterInfos/* parameters */
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
static ParameterInfo CachedInvokableCall_1_t19276_CachedInvokableCall_1_Invoke_m140718_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo CachedInvokableCall_1_t19276_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.CachedInvokableCall`1<WuLinMemberListItem>::Invoke(System.Object[])
MethodInfo CachedInvokableCall_1_Invoke_m140718_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&CachedInvokableCall_1_Invoke_m57864_gshared/* method */
	, &CachedInvokableCall_1_t19276_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, CachedInvokableCall_1_t19276_CachedInvokableCall_1_Invoke_m140718_ParameterInfos/* parameters */
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
static MethodInfo* CachedInvokableCall_1_t19276_MethodInfos[] =
{
	&CachedInvokableCall_1__ctor_m140717_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140718_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo CachedInvokableCall_1_Invoke_m140718_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140722_MethodInfo;
static MethodInfo* CachedInvokableCall_1_t19276_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&CachedInvokableCall_1_Invoke_m140718_MethodInfo,
	&InvokableCall_1_Find_m140722_MethodInfo,
};
extern Il2CppType UnityAction_1_t19278_0_0_0;
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWuLinMemberListItem_t1951_m205068_MethodInfo;
extern TypeInfo WuLinMemberListItem_t1951_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140724_MethodInfo;
extern MethodInfo InvokableCall_1__ctor_m140719_MethodInfo;
extern TypeInfo WuLinMemberListItem_t1951_il2cpp_TypeInfo;
extern MethodInfo InvokableCall_1_Invoke_m140721_MethodInfo;
static void* CachedInvokableCall_1_t19276_RGCTXData[8] = 
{
	(void*)&UnityAction_1_t19278_0_0_0,
	&UnityAction_1_t19278_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisWuLinMemberListItem_t1951_m205068_MethodInfo,
	&WuLinMemberListItem_t1951_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140724_MethodInfo,
	&InvokableCall_1__ctor_m140719_MethodInfo,
	&WuLinMemberListItem_t1951_il2cpp_TypeInfo,
	&InvokableCall_1_Invoke_m140721_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType CachedInvokableCall_1_t19276_0_0_0;
extern Il2CppType CachedInvokableCall_1_t19276_1_0_0;
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
struct CachedInvokableCall_1_t19276;
extern TypeInfo CachedInvokableCall_1_t19276_il2cpp_TypeInfo;
extern Il2CppGenericClass CachedInvokableCall_1_t19276_GenericClass;
TypeInfo CachedInvokableCall_1_t19276_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "CachedInvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, CachedInvokableCall_1_t19276_MethodInfos/* methods */
	, NULL/* properties */
	, CachedInvokableCall_1_t19276_FieldInfos/* fields */
	, NULL/* events */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &CachedInvokableCall_1_t19276_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, CachedInvokableCall_1_t19276_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &CachedInvokableCall_1_t19276_il2cpp_TypeInfo/* cast_class */
	, &CachedInvokableCall_1_t19276_0_0_0/* byval_arg */
	, &CachedInvokableCall_1_t19276_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &CachedInvokableCall_1_t19276_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, CachedInvokableCall_1_t19276_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (CachedInvokableCall_1_t19276)/* instance_size */
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
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;

// UnityEngine.Events.UnityAction`1<WuLinMemberListItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_420.h"
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern TypeInfo Type_t_il2cpp_TypeInfo;
extern TypeInfo ArgumentException_t5466_il2cpp_TypeInfo;
extern TypeInfo WuLinMemberListItem_t1951_il2cpp_TypeInfo;
extern TypeInfo Void_t21_il2cpp_TypeInfo;
// UnityEngine.Events.UnityAction`1<WuLinMemberListItem>
#include "UnityEngine_UnityEngine_Events_UnityAction_1_gen_420MethodDeclarations.h"
extern Il2CppType UnityAction_1_t19278_0_0_0;
extern MethodInfo BaseInvokableCall__ctor_m51647_MethodInfo;
extern MethodInfo Type_GetTypeFromHandle_m4772_MethodInfo;
extern MethodInfo Delegate_CreateDelegate_m52696_MethodInfo;
extern MethodInfo Delegate_Combine_m4108_MethodInfo;
extern MethodInfo BaseInvokableCall__ctor_m51646_MethodInfo;
extern MethodInfo ArgumentException__ctor_m38716_MethodInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWuLinMemberListItem_t1951_m205068_MethodInfo;
extern MethodInfo BaseInvokableCall_AllowInvoke_m51648_MethodInfo;
extern MethodInfo UnityAction_1_Invoke_m140724_MethodInfo;
extern MethodInfo Delegate_get_Target_m42074_MethodInfo;
extern MethodInfo Delegate_get_Method_m42075_MethodInfo;
struct BaseInvokableCall_t7493;
// Declaration System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<WuLinMemberListItem>(System.Object)
// System.Void UnityEngine.Events.BaseInvokableCall::ThrowOnInvalidArg<WuLinMemberListItem>(System.Object)
#define BaseInvokableCall_ThrowOnInvalidArg_TisWuLinMemberListItem_t1951_m205068(__this/* static, unused */, p0, method) (void)BaseInvokableCall_ThrowOnInvalidArg_TisObject_t_m180615_gshared((Object_t *)__this/* static, unused */, (Object_t *)p0, method)
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWuLinMemberListItem_t1951_m205068_MethodInfo;


// System.Void UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::.ctor(System.Object,System.Reflection.MethodInfo)
// System.Void UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
// System.Void UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::Invoke(System.Object[])
// System.Boolean UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::Find(System.Object,System.Reflection.MethodInfo)
// Metadata Definition UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>
extern Il2CppType UnityAction_1_t19278_0_0_1;
FieldInfo InvokableCall_1_t19277____Delegate_FieldInfo = 
{
	"Delegate"/* name */
	, &UnityAction_1_t19278_0_0_1/* type */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* parent */
	, offsetof(InvokableCall_1_t19277, ___Delegate)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InvokableCall_1_t19277_FieldInfos[] =
{
	&InvokableCall_1_t19277____Delegate_FieldInfo,
	NULL
};
extern Il2CppType Object_t_0_0_0;
extern Il2CppType MethodInfo_t1087_0_0_0;
static ParameterInfo InvokableCall_1_t19277_InvokableCall_1__ctor_m140719_ParameterInfos[] = 
{
	{"target", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"theFunction", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::.ctor(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1__ctor_m140719_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57865_gshared/* method */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19277_InvokableCall_1__ctor_m140719_ParameterInfos/* parameters */
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
extern Il2CppType UnityAction_1_t19278_0_0_0;
static ParameterInfo InvokableCall_1_t19277_InvokableCall_1__ctor_m140720_ParameterInfos[] = 
{
	{"callback", 0, 134217728, &EmptyCustomAttributesCache, &UnityAction_1_t19278_0_0_0},
};
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::.ctor(UnityEngine.Events.UnityAction`1<T1>)
MethodInfo InvokableCall_1__ctor_m140720_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InvokableCall_1__ctor_m57866_gshared/* method */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19277_InvokableCall_1__ctor_m140720_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19277_InvokableCall_1_Invoke_m140721_ParameterInfos[] = 
{
	{"args", 0, 134217728, &EmptyCustomAttributesCache, &ObjectU5BU5D_t142_0_0_0},
};
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::Invoke(System.Object[])
MethodInfo InvokableCall_1_Invoke_m140721_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&InvokableCall_1_Invoke_m57867_gshared/* method */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InvokableCall_1_t19277_InvokableCall_1_Invoke_m140721_ParameterInfos/* parameters */
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
static ParameterInfo InvokableCall_1_t19277_InvokableCall_1_Find_m140722_ParameterInfos[] = 
{
	{"targetObj", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &MethodInfo_t1087_0_0_0},
};
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean UnityEngine.Events.InvokableCall`1<WuLinMemberListItem>::Find(System.Object,System.Reflection.MethodInfo)
MethodInfo InvokableCall_1_Find_m140722_MethodInfo = 
{
	"Find"/* name */
	, (methodPointerType)&InvokableCall_1_Find_m57868_gshared/* method */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t_Object_t/* invoker_method */
	, InvokableCall_1_t19277_InvokableCall_1_Find_m140722_ParameterInfos/* parameters */
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
static MethodInfo* InvokableCall_1_t19277_MethodInfos[] =
{
	&InvokableCall_1__ctor_m140719_MethodInfo,
	&InvokableCall_1__ctor_m140720_MethodInfo,
	&InvokableCall_1_Invoke_m140721_MethodInfo,
	&InvokableCall_1_Find_m140722_MethodInfo,
	NULL
};
extern MethodInfo Object_Equals_m4063_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo Object_GetHashCode_m4064_MethodInfo;
extern MethodInfo Object_ToString_m4065_MethodInfo;
extern MethodInfo InvokableCall_1_Invoke_m140721_MethodInfo;
extern MethodInfo InvokableCall_1_Find_m140722_MethodInfo;
static MethodInfo* InvokableCall_1_t19277_VTable[] =
{
	&Object_Equals_m4063_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&Object_GetHashCode_m4064_MethodInfo,
	&Object_ToString_m4065_MethodInfo,
	&InvokableCall_1_Invoke_m140721_MethodInfo,
	&InvokableCall_1_Find_m140722_MethodInfo,
};
extern Il2CppType UnityAction_1_t19278_0_0_0;
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern MethodInfo BaseInvokableCall_ThrowOnInvalidArg_TisWuLinMemberListItem_t1951_m205068_MethodInfo;
extern TypeInfo WuLinMemberListItem_t1951_il2cpp_TypeInfo;
extern MethodInfo UnityAction_1_Invoke_m140724_MethodInfo;
static void* InvokableCall_1_t19277_RGCTXData[5] = 
{
	(void*)&UnityAction_1_t19278_0_0_0,
	&UnityAction_1_t19278_il2cpp_TypeInfo,
	&BaseInvokableCall_ThrowOnInvalidArg_TisWuLinMemberListItem_t1951_m205068_MethodInfo,
	&WuLinMemberListItem_t1951_il2cpp_TypeInfo,
	&UnityAction_1_Invoke_m140724_MethodInfo,
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType InvokableCall_1_t19277_0_0_0;
extern Il2CppType InvokableCall_1_t19277_1_0_0;
extern TypeInfo BaseInvokableCall_t7493_il2cpp_TypeInfo;
struct InvokableCall_1_t19277;
extern TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo;
extern Il2CppGenericClass InvokableCall_1_t19277_GenericClass;
TypeInfo InvokableCall_1_t19277_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "InvokableCall`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, InvokableCall_1_t19277_MethodInfos/* methods */
	, NULL/* properties */
	, InvokableCall_1_t19277_FieldInfos/* fields */
	, NULL/* events */
	, &BaseInvokableCall_t7493_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, InvokableCall_1_t19277_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InvokableCall_1_t19277_il2cpp_TypeInfo/* cast_class */
	, &InvokableCall_1_t19277_0_0_0/* byval_arg */
	, &InvokableCall_1_t19277_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &InvokableCall_1_t19277_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InvokableCall_1_t19277_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InvokableCall_1_t19277)/* instance_size */
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
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;



// System.Void UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::.ctor(System.Object,System.IntPtr)
// System.Void UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::Invoke(T0)
// System.IAsyncResult UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
// System.Void UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::EndInvoke(System.IAsyncResult)
// Metadata Definition UnityEngine.Events.UnityAction`1<WuLinMemberListItem>
extern Il2CppType Object_t_0_0_0;
extern Il2CppType IntPtr_t24_0_0_0;
static ParameterInfo UnityAction_1_t19278_UnityAction_1__ctor_m140723_ParameterInfos[] = 
{
	{"object", 0, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
	{"method", 1, 134217728, &EmptyCustomAttributesCache, &IntPtr_t24_0_0_0},
};
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_IntPtr_t24 (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::.ctor(System.Object,System.IntPtr)
MethodInfo UnityAction_1__ctor_m140723_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&UnityAction_1__ctor_m57869_gshared/* method */
	, &UnityAction_1_t19278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_IntPtr_t24/* invoker_method */
	, UnityAction_1_t19278_UnityAction_1__ctor_m140723_ParameterInfos/* parameters */
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
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
static ParameterInfo UnityAction_1_t19278_UnityAction_1_Invoke_m140724_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
};
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::Invoke(T0)
MethodInfo UnityAction_1_Invoke_m140724_MethodInfo = 
{
	"Invoke"/* name */
	, (methodPointerType)&UnityAction_1_Invoke_m57870_gshared/* method */
	, &UnityAction_1_t19278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19278_UnityAction_1_Invoke_m140724_ParameterInfos/* parameters */
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
extern Il2CppType WuLinMemberListItem_t1951_0_0_0;
extern Il2CppType AsyncCallback_t15_0_0_0;
extern Il2CppType Object_t_0_0_0;
static ParameterInfo UnityAction_1_t19278_UnityAction_1_BeginInvoke_m140725_ParameterInfos[] = 
{
	{"arg0", 0, 134217728, &EmptyCustomAttributesCache, &WuLinMemberListItem_t1951_0_0_0},
	{"callback", 1, 134217728, &EmptyCustomAttributesCache, &AsyncCallback_t15_0_0_0},
	{"object", 2, 134217728, &EmptyCustomAttributesCache, &Object_t_0_0_0},
};
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern Il2CppType IAsyncResult_t14_0_0_0;
extern void* RuntimeInvoker_Object_t_Object_t_Object_t_Object_t (MethodInfo* method, void* obj, void** args);
// System.IAsyncResult UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::BeginInvoke(T0,System.AsyncCallback,System.Object)
MethodInfo UnityAction_1_BeginInvoke_m140725_MethodInfo = 
{
	"BeginInvoke"/* name */
	, (methodPointerType)&UnityAction_1_BeginInvoke_m57871_gshared/* method */
	, &UnityAction_1_t19278_il2cpp_TypeInfo/* declaring_type */
	, &IAsyncResult_t14_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Object_t_Object_t_Object_t/* invoker_method */
	, UnityAction_1_t19278_UnityAction_1_BeginInvoke_m140725_ParameterInfos/* parameters */
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
static ParameterInfo UnityAction_1_t19278_UnityAction_1_EndInvoke_m140726_ParameterInfos[] = 
{
	{"result", 0, 134217728, &EmptyCustomAttributesCache, &IAsyncResult_t14_0_0_0},
};
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void UnityEngine.Events.UnityAction`1<WuLinMemberListItem>::EndInvoke(System.IAsyncResult)
MethodInfo UnityAction_1_EndInvoke_m140726_MethodInfo = 
{
	"EndInvoke"/* name */
	, (methodPointerType)&UnityAction_1_EndInvoke_m57872_gshared/* method */
	, &UnityAction_1_t19278_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, UnityAction_1_t19278_UnityAction_1_EndInvoke_m140726_ParameterInfos/* parameters */
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
static MethodInfo* UnityAction_1_t19278_MethodInfos[] =
{
	&UnityAction_1__ctor_m140723_MethodInfo,
	&UnityAction_1_Invoke_m140724_MethodInfo,
	&UnityAction_1_BeginInvoke_m140725_MethodInfo,
	&UnityAction_1_EndInvoke_m140726_MethodInfo,
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
extern MethodInfo UnityAction_1_Invoke_m140724_MethodInfo;
extern MethodInfo UnityAction_1_BeginInvoke_m140725_MethodInfo;
extern MethodInfo UnityAction_1_EndInvoke_m140726_MethodInfo;
static MethodInfo* UnityAction_1_t19278_VTable[] =
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
	&UnityAction_1_Invoke_m140724_MethodInfo,
	&UnityAction_1_BeginInvoke_m140725_MethodInfo,
	&UnityAction_1_EndInvoke_m140726_MethodInfo,
};
extern TypeInfo ICloneable_t957_il2cpp_TypeInfo;
extern TypeInfo ISerializable_t958_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair UnityAction_1_t19278_InterfacesOffsets[] = 
{
	{ &ICloneable_t957_il2cpp_TypeInfo, 4},
	{ &ISerializable_t958_il2cpp_TypeInfo, 4},
};
extern Il2CppImage g_UnityEngine_dll_Image;
extern Il2CppType UnityAction_1_t19278_0_0_0;
extern Il2CppType UnityAction_1_t19278_1_0_0;
extern TypeInfo MulticastDelegate_t23_il2cpp_TypeInfo;
struct UnityAction_1_t19278;
extern TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo;
extern Il2CppGenericClass UnityAction_1_t19278_GenericClass;
TypeInfo UnityAction_1_t19278_il2cpp_TypeInfo = 
{
	&g_UnityEngine_dll_Image/* image */
	, NULL/* gc_desc */
	, "UnityAction`1"/* name */
	, "UnityEngine.Events"/* namespaze */
	, UnityAction_1_t19278_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, &MulticastDelegate_t23_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &UnityAction_1_t19278_il2cpp_TypeInfo/* element_class */
	, NULL/* implemented_interfaces */
	, UnityAction_1_t19278_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &UnityAction_1_t19278_il2cpp_TypeInfo/* cast_class */
	, &UnityAction_1_t19278_0_0_0/* byval_arg */
	, &UnityAction_1_t19278_1_0_0/* this_arg */
	, UnityAction_1_t19278_InterfacesOffsets/* interface_offsets */
	, &UnityAction_1_t19278_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (UnityAction_1_t19278)/* instance_size */
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
extern TypeInfo IEnumerator_1_t27976_il2cpp_TypeInfo;

// WuLinTopThreeItem
#include "AssemblyU2DCSharp_WuLinTopThreeItem.h"


// T System.Collections.Generic.IEnumerator`1<WuLinTopThreeItem>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<WuLinTopThreeItem>
extern MethodInfo IEnumerator_1_get_Current_m251327_MethodInfo;
static PropertyInfo IEnumerator_1_t27976____Current_PropertyInfo = 
{
	&IEnumerator_1_t27976_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m251327_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27976_PropertyInfos[] =
{
	&IEnumerator_1_t27976____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27976_il2cpp_TypeInfo;
extern Il2CppType WuLinTopThreeItem_t1953_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<WuLinTopThreeItem>::get_Current()
MethodInfo IEnumerator_1_get_Current_m251327_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27976_il2cpp_TypeInfo/* declaring_type */
	, &WuLinTopThreeItem_t1953_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t27976_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m251327_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27976_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27976_0_0_0;
extern Il2CppType IEnumerator_1_t27976_1_0_0;
struct IEnumerator_1_t27976;
extern TypeInfo IEnumerator_1_t27976_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27976_GenericClass;
TypeInfo IEnumerator_1_t27976_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27976_MethodInfos/* methods */
	, IEnumerator_1_t27976_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27976_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27976_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27976_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27976_0_0_0/* byval_arg */
	, &IEnumerator_1_t27976_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27976_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<WuLinTopThreeItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1626.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<WuLinTopThreeItem>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1626MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern TypeInfo WuLinTopThreeItem_t1953_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140732_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWuLinTopThreeItem_t1953_m205070_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<WuLinTopThreeItem>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<WuLinTopThreeItem>(System.Int32)
#define Array_InternalArray__get_Item_TisWuLinTopThreeItem_t1953_m205070(__this, p0, method) (WuLinTopThreeItem_t1953 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisWuLinTopThreeItem_t1953_m205070_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<WuLinTopThreeItem>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<WuLinTopThreeItem>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<WuLinTopThreeItem>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<WuLinTopThreeItem>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<WuLinTopThreeItem>::MoveNext()
// T System.Array/InternalEnumerator`1<WuLinTopThreeItem>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<WuLinTopThreeItem>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t19279____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19279, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t19279____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t19279, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t19279_FieldInfos[] =
{
	&InternalEnumerator_1_t19279____array_FieldInfo,
	&InternalEnumerator_1_t19279____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140729_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19279____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19279_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m140732_MethodInfo;
static PropertyInfo InternalEnumerator_1_t19279____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t19279_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m140732_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t19279_PropertyInfos[] =
{
	&InternalEnumerator_1_t19279____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t19279____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t19279_InternalEnumerator_1__ctor_m140727_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WuLinTopThreeItem>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m140727_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t19279_InternalEnumerator_1__ctor_m140727_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WuLinTopThreeItem>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140728_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<WuLinTopThreeItem>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140729_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<WuLinTopThreeItem>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m140730_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<WuLinTopThreeItem>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m140731_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern Il2CppType WuLinTopThreeItem_t1953_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<WuLinTopThreeItem>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m140732_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* declaring_type */
	, &WuLinTopThreeItem_t1953_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t19279_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m140727_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140728_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140729_MethodInfo,
	&InternalEnumerator_1_Dispose_m140730_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140731_MethodInfo,
	&InternalEnumerator_1_get_Current_m140732_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140729_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m140731_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140728_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m140730_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m140732_MethodInfo;
static MethodInfo* InternalEnumerator_1_t19279_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m140729_MethodInfo,
	&InternalEnumerator_1_MoveNext_m140731_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m140728_MethodInfo,
	&InternalEnumerator_1_Dispose_m140730_MethodInfo,
	&InternalEnumerator_1_get_Current_m140732_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27976_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t19279_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27976_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27976_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t19279_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27976_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m140732_MethodInfo;
extern TypeInfo WuLinTopThreeItem_t1953_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisWuLinTopThreeItem_t1953_m205070_MethodInfo;
static void* InternalEnumerator_1_t19279_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m140732_MethodInfo,
	&WuLinTopThreeItem_t1953_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisWuLinTopThreeItem_t1953_m205070_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t19279_0_0_0;
extern Il2CppType InternalEnumerator_1_t19279_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t19279_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t19279_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t19279_MethodInfos/* methods */
	, InternalEnumerator_1_t19279_PropertyInfos/* properties */
	, InternalEnumerator_1_t19279_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t19279_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t19279_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t19279_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t19279_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t19279_1_0_0/* this_arg */
	, InternalEnumerator_1_t19279_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t19279_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t19279_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t19279)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<WuLinTopThreeItem>
extern MethodInfo ICollection_1_get_Count_m251328_MethodInfo;
static PropertyInfo ICollection_1_t33139____Count_PropertyInfo = 
{
	&ICollection_1_t33139_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m251328_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m251329_MethodInfo;
static PropertyInfo ICollection_1_t33139____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t33139_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m251329_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t33139_PropertyInfos[] =
{
	&ICollection_1_t33139____Count_PropertyInfo,
	&ICollection_1_t33139____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::get_Count()
MethodInfo ICollection_1_get_Count_m251328_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m251329_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WuLinTopThreeItem_t1953_0_0_0;
static ParameterInfo ICollection_1_t33139_ICollection_1_Add_m251330_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WuLinTopThreeItem_t1953_0_0_0},
};
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Add(T)
MethodInfo ICollection_1_Add_m251330_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t33139_ICollection_1_Add_m251330_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Clear()
MethodInfo ICollection_1_Clear_m251331_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType WuLinTopThreeItem_t1953_0_0_0;
static ParameterInfo ICollection_1_t33139_ICollection_1_Contains_m251332_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WuLinTopThreeItem_t1953_0_0_0},
};
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Contains(T)
MethodInfo ICollection_1_Contains_m251332_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33139_ICollection_1_Contains_m251332_ParameterInfos/* parameters */
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
extern Il2CppType WuLinTopThreeItemU5BU5D_t2084_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t33139_ICollection_1_CopyTo_m251333_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &WuLinTopThreeItemU5BU5D_t2084_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m251333_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t33139_ICollection_1_CopyTo_m251333_ParameterInfos/* parameters */
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
extern Il2CppType WuLinTopThreeItem_t1953_0_0_0;
static ParameterInfo ICollection_1_t33139_ICollection_1_Remove_m251334_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &WuLinTopThreeItem_t1953_0_0_0},
};
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<WuLinTopThreeItem>::Remove(T)
MethodInfo ICollection_1_Remove_m251334_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t33139_ICollection_1_Remove_m251334_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t33139_MethodInfos[] =
{
	&ICollection_1_get_Count_m251328_MethodInfo,
	&ICollection_1_get_IsReadOnly_m251329_MethodInfo,
	&ICollection_1_Add_m251330_MethodInfo,
	&ICollection_1_Clear_m251331_MethodInfo,
	&ICollection_1_Contains_m251332_MethodInfo,
	&ICollection_1_CopyTo_m251333_MethodInfo,
	&ICollection_1_Remove_m251334_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t33141_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t33139_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t33141_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t33139_0_0_0;
extern Il2CppType ICollection_1_t33139_1_0_0;
struct ICollection_1_t33139;
extern TypeInfo ICollection_1_t33139_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t33139_GenericClass;
TypeInfo ICollection_1_t33139_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t33139_MethodInfos/* methods */
	, ICollection_1_t33139_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t33139_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t33139_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t33139_0_0_0/* byval_arg */
	, &ICollection_1_t33139_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t33139_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
