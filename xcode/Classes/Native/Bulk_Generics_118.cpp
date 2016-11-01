#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1010.h"
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
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1010MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_RELIVE_.h"
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
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern TypeInfo RELIVE_TYPE_t1137_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m124017_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRELIVE_TYPE_t1137_m197025_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRELIVE_TYPE_t1137_m197025 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisRELIVE_TYPE_t1137_m197025_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124012_MethodInfo;
 void InternalEnumerator_1__ctor_m124012 (InternalEnumerator_1_t16596 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124013_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124013 (InternalEnumerator_1_t16596 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014 (InternalEnumerator_1_t16596 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124017(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124017_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RELIVE_TYPE_t1137_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124015_MethodInfo;
 void InternalEnumerator_1_Dispose_m124015 (InternalEnumerator_1_t16596 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124016_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124016 (InternalEnumerator_1_t16596 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124017_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124017 (InternalEnumerator_1_t16596 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRELIVE_TYPE_t1137_m197025(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRELIVE_TYPE_t1137_m197025_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16596____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16596, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16596____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16596, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16596_FieldInfos[] =
{
	&InternalEnumerator_1_t16596____array_FieldInfo,
	&InternalEnumerator_1_t16596____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16596____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16596_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124017_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16596____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16596_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124017_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16596_PropertyInfos[] =
{
	&InternalEnumerator_1_t16596____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16596____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16596_InternalEnumerator_1__ctor_m124012_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124012_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124012/* method */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16596_InternalEnumerator_1__ctor_m124012_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124013_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124013/* method */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014/* method */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124015_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124015/* method */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124016_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124016/* method */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
extern void* RuntimeInvoker_RELIVE_TYPE_t1137 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124017_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124017/* method */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* declaring_type */
	, &RELIVE_TYPE_t1137_0_0_0/* return_type */
	, RuntimeInvoker_RELIVE_TYPE_t1137/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16596_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124012_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124013_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014_MethodInfo,
	&InternalEnumerator_1_Dispose_m124015_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124016_MethodInfo,
	&InternalEnumerator_1_get_Current_m124017_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124016_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124013_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124015_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124017_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16596_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124014_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124016_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124013_MethodInfo,
	&InternalEnumerator_1_Dispose_m124015_MethodInfo,
	&InternalEnumerator_1_get_Current_m124017_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27404_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16596_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27404_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27404_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16596_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27404_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16596_0_0_0;
extern Il2CppType InternalEnumerator_1_t16596_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16596_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16596_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16596_MethodInfos/* methods */
	, InternalEnumerator_1_t16596_PropertyInfos/* properties */
	, InternalEnumerator_1_t16596_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16596_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16596_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16596_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16596_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16596_1_0_0/* this_arg */
	, InternalEnumerator_1_t16596_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16596_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16596)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;

#include "Assembly-CSharp_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>
extern MethodInfo ICollection_1_get_Count_m242185_MethodInfo;
static PropertyInfo ICollection_1_t31457____Count_PropertyInfo = 
{
	&ICollection_1_t31457_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242185_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242186_MethodInfo;
static PropertyInfo ICollection_1_t31457____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31457_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242186_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31457_PropertyInfos[] =
{
	&ICollection_1_t31457____Count_PropertyInfo,
	&ICollection_1_t31457____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242185_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242186_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
static ParameterInfo ICollection_1_t31457_ICollection_1_Add_m242187_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELIVE_TYPE_t1137_0_0_0},
};
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242187_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31457_ICollection_1_Add_m242187_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242188_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
static ParameterInfo ICollection_1_t31457_ICollection_1_Contains_m242189_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELIVE_TYPE_t1137_0_0_0},
};
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242189_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31457_ICollection_1_Contains_m242189_ParameterInfos/* parameters */
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
extern Il2CppType RELIVE_TYPEU5BU5D_t25529_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31457_ICollection_1_CopyTo_m242190_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RELIVE_TYPEU5BU5D_t25529_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242190_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31457_ICollection_1_CopyTo_m242190_ParameterInfos/* parameters */
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
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
static ParameterInfo ICollection_1_t31457_ICollection_1_Remove_m242191_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELIVE_TYPE_t1137_0_0_0},
};
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242191_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31457_ICollection_1_Remove_m242191_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31457_MethodInfos[] =
{
	&ICollection_1_get_Count_m242185_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242186_MethodInfo,
	&ICollection_1_Add_m242187_MethodInfo,
	&ICollection_1_Clear_m242188_MethodInfo,
	&ICollection_1_Contains_m242189_MethodInfo,
	&ICollection_1_CopyTo_m242190_MethodInfo,
	&ICollection_1_Remove_m242191_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31459_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31457_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31459_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31457_0_0_0;
extern Il2CppType ICollection_1_t31457_1_0_0;
struct ICollection_1_t31457;
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31457_GenericClass;
TypeInfo ICollection_1_t31457_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31457_MethodInfos/* methods */
	, ICollection_1_t31457_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31457_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31457_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31457_0_0_0/* byval_arg */
	, &ICollection_1_t31457_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31457_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31459_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>
extern TypeInfo IEnumerable_1_t31459_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27404_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242192_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31459_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27404_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31459_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242192_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31459_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31459_0_0_0;
extern Il2CppType IEnumerable_1_t31459_1_0_0;
struct IEnumerable_1_t31459;
extern TypeInfo IEnumerable_1_t31459_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31459_GenericClass;
TypeInfo IEnumerable_1_t31459_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31459_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31459_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31459_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31459_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31459_0_0_0/* byval_arg */
	, &IEnumerable_1_t31459_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31459_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31458_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>
extern MethodInfo IList_1_get_Item_m242193_MethodInfo;
extern MethodInfo IList_1_set_Item_m242194_MethodInfo;
static PropertyInfo IList_1_t31458____Item_PropertyInfo = 
{
	&IList_1_t31458_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242193_MethodInfo/* get */
	, &IList_1_set_Item_m242194_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31458_PropertyInfos[] =
{
	&IList_1_t31458____Item_PropertyInfo,
	NULL
};
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
static ParameterInfo IList_1_t31458_IList_1_IndexOf_m242195_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RELIVE_TYPE_t1137_0_0_0},
};
extern TypeInfo IList_1_t31458_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242195_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31458_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31458_IList_1_IndexOf_m242195_ParameterInfos/* parameters */
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
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
static ParameterInfo IList_1_t31458_IList_1_Insert_m242196_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RELIVE_TYPE_t1137_0_0_0},
};
extern TypeInfo IList_1_t31458_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242196_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31458_IList_1_Insert_m242196_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31458_IList_1_RemoveAt_m242197_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31458_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242197_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31458_IList_1_RemoveAt_m242197_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31458_IList_1_get_Item_m242193_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31458_il2cpp_TypeInfo;
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
extern void* RuntimeInvoker_RELIVE_TYPE_t1137_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242193_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31458_il2cpp_TypeInfo/* declaring_type */
	, &RELIVE_TYPE_t1137_0_0_0/* return_type */
	, RuntimeInvoker_RELIVE_TYPE_t1137_Int32_t73/* invoker_method */
	, IList_1_t31458_IList_1_get_Item_m242193_ParameterInfos/* parameters */
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
extern Il2CppType RELIVE_TYPE_t1137_0_0_0;
static ParameterInfo IList_1_t31458_IList_1_set_Item_m242194_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RELIVE_TYPE_t1137_0_0_0},
};
extern TypeInfo IList_1_t31458_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RELIVE_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242194_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31458_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31458_IList_1_set_Item_m242194_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31458_MethodInfos[] =
{
	&IList_1_IndexOf_m242195_MethodInfo,
	&IList_1_Insert_m242196_MethodInfo,
	&IList_1_RemoveAt_m242197_MethodInfo,
	&IList_1_get_Item_m242193_MethodInfo,
	&IList_1_set_Item_m242194_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31457_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31459_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31458_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31457_il2cpp_TypeInfo,
	&IEnumerable_1_t31459_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31458_0_0_0;
extern Il2CppType IList_1_t31458_1_0_0;
struct IList_1_t31458;
extern TypeInfo IList_1_t31458_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31458_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31458_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31458_MethodInfos/* methods */
	, IList_1_t31458_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31458_il2cpp_TypeInfo/* element_class */
	, IList_1_t31458_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31458_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31458_0_0_0/* byval_arg */
	, &IList_1_t31458_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31458_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27405_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_AUTOCOM.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242198_MethodInfo;
static PropertyInfo IEnumerator_1_t27405____Current_PropertyInfo = 
{
	&IEnumerator_1_t27405_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242198_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27405_PropertyInfos[] =
{
	&IEnumerator_1_t27405____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27405_il2cpp_TypeInfo;
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
extern void* RuntimeInvoker_AUTOCOMBAT_PICKUP_TYPE_t1138 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242198_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27405_il2cpp_TypeInfo/* declaring_type */
	, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0/* return_type */
	, RuntimeInvoker_AUTOCOMBAT_PICKUP_TYPE_t1138/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27405_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242198_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27405_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27405_0_0_0;
extern Il2CppType IEnumerator_1_t27405_1_0_0;
struct IEnumerator_1_t27405;
extern TypeInfo IEnumerator_1_t27405_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27405_GenericClass;
TypeInfo IEnumerator_1_t27405_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27405_MethodInfos/* methods */
	, IEnumerator_1_t27405_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27405_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27405_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27405_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27405_0_0_0/* byval_arg */
	, &IEnumerator_1_t27405_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27405_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1011.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1011MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern TypeInfo AUTOCOMBAT_PICKUP_TYPE_t1138_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124023_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAUTOCOMBAT_PICKUP_TYPE_t1138_m197036_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAUTOCOMBAT_PICKUP_TYPE_t1138_m197036 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisAUTOCOMBAT_PICKUP_TYPE_t1138_m197036_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124018_MethodInfo;
 void InternalEnumerator_1__ctor_m124018 (InternalEnumerator_1_t16597 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124019_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124019 (InternalEnumerator_1_t16597 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020 (InternalEnumerator_1_t16597 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124023(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124023_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AUTOCOMBAT_PICKUP_TYPE_t1138_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124021_MethodInfo;
 void InternalEnumerator_1_Dispose_m124021 (InternalEnumerator_1_t16597 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124022_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124022 (InternalEnumerator_1_t16597 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124023_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124023 (InternalEnumerator_1_t16597 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAUTOCOMBAT_PICKUP_TYPE_t1138_m197036(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAUTOCOMBAT_PICKUP_TYPE_t1138_m197036_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16597____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16597, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16597____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16597, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16597_FieldInfos[] =
{
	&InternalEnumerator_1_t16597____array_FieldInfo,
	&InternalEnumerator_1_t16597____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16597____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16597_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124023_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16597____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16597_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124023_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16597_PropertyInfos[] =
{
	&InternalEnumerator_1_t16597____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16597____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16597_InternalEnumerator_1__ctor_m124018_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124018_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124018/* method */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16597_InternalEnumerator_1__ctor_m124018_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124019_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124019/* method */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020/* method */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124021_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124021/* method */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124022_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124022/* method */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
extern void* RuntimeInvoker_AUTOCOMBAT_PICKUP_TYPE_t1138 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124023_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124023/* method */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* declaring_type */
	, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0/* return_type */
	, RuntimeInvoker_AUTOCOMBAT_PICKUP_TYPE_t1138/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16597_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124018_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124019_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020_MethodInfo,
	&InternalEnumerator_1_Dispose_m124021_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124022_MethodInfo,
	&InternalEnumerator_1_get_Current_m124023_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124022_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124019_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124021_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124023_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16597_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124020_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124022_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124019_MethodInfo,
	&InternalEnumerator_1_Dispose_m124021_MethodInfo,
	&InternalEnumerator_1_get_Current_m124023_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27405_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16597_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27405_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27405_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16597_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27405_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16597_0_0_0;
extern Il2CppType InternalEnumerator_1_t16597_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16597_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16597_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16597_MethodInfos/* methods */
	, InternalEnumerator_1_t16597_PropertyInfos/* properties */
	, InternalEnumerator_1_t16597_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16597_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16597_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16597_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16597_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16597_1_0_0/* this_arg */
	, InternalEnumerator_1_t16597_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16597_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16597)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>
extern MethodInfo ICollection_1_get_Count_m242199_MethodInfo;
static PropertyInfo ICollection_1_t31460____Count_PropertyInfo = 
{
	&ICollection_1_t31460_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242199_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242200_MethodInfo;
static PropertyInfo ICollection_1_t31460____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31460_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242200_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31460_PropertyInfos[] =
{
	&ICollection_1_t31460____Count_PropertyInfo,
	&ICollection_1_t31460____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242199_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242200_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
static ParameterInfo ICollection_1_t31460_ICollection_1_Add_m242201_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0},
};
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242201_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31460_ICollection_1_Add_m242201_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242202_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
static ParameterInfo ICollection_1_t31460_ICollection_1_Contains_m242203_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0},
};
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242203_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31460_ICollection_1_Contains_m242203_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_PICKUP_TYPEU5BU5D_t25530_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31460_ICollection_1_CopyTo_m242204_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_PICKUP_TYPEU5BU5D_t25530_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242204_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31460_ICollection_1_CopyTo_m242204_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
static ParameterInfo ICollection_1_t31460_ICollection_1_Remove_m242205_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0},
};
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242205_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31460_ICollection_1_Remove_m242205_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31460_MethodInfos[] =
{
	&ICollection_1_get_Count_m242199_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242200_MethodInfo,
	&ICollection_1_Add_m242201_MethodInfo,
	&ICollection_1_Clear_m242202_MethodInfo,
	&ICollection_1_Contains_m242203_MethodInfo,
	&ICollection_1_CopyTo_m242204_MethodInfo,
	&ICollection_1_Remove_m242205_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31462_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31460_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31462_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31460_0_0_0;
extern Il2CppType ICollection_1_t31460_1_0_0;
struct ICollection_1_t31460;
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31460_GenericClass;
TypeInfo ICollection_1_t31460_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31460_MethodInfos/* methods */
	, ICollection_1_t31460_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31460_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31460_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31460_0_0_0/* byval_arg */
	, &ICollection_1_t31460_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31460_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31462_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>
extern TypeInfo IEnumerable_1_t31462_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27405_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242206_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31462_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27405_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31462_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242206_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31462_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31462_0_0_0;
extern Il2CppType IEnumerable_1_t31462_1_0_0;
struct IEnumerable_1_t31462;
extern TypeInfo IEnumerable_1_t31462_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31462_GenericClass;
TypeInfo IEnumerable_1_t31462_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31462_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31462_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31462_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31462_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31462_0_0_0/* byval_arg */
	, &IEnumerable_1_t31462_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31462_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31461_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>
extern MethodInfo IList_1_get_Item_m242207_MethodInfo;
extern MethodInfo IList_1_set_Item_m242208_MethodInfo;
static PropertyInfo IList_1_t31461____Item_PropertyInfo = 
{
	&IList_1_t31461_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242207_MethodInfo/* get */
	, &IList_1_set_Item_m242208_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31461_PropertyInfos[] =
{
	&IList_1_t31461____Item_PropertyInfo,
	NULL
};
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
static ParameterInfo IList_1_t31461_IList_1_IndexOf_m242209_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0},
};
extern TypeInfo IList_1_t31461_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242209_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31461_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31461_IList_1_IndexOf_m242209_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
static ParameterInfo IList_1_t31461_IList_1_Insert_m242210_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0},
};
extern TypeInfo IList_1_t31461_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242210_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31461_IList_1_Insert_m242210_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31461_IList_1_RemoveAt_m242211_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31461_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242211_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31461_IList_1_RemoveAt_m242211_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31461_IList_1_get_Item_m242207_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31461_il2cpp_TypeInfo;
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
extern void* RuntimeInvoker_AUTOCOMBAT_PICKUP_TYPE_t1138_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242207_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31461_il2cpp_TypeInfo/* declaring_type */
	, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0/* return_type */
	, RuntimeInvoker_AUTOCOMBAT_PICKUP_TYPE_t1138_Int32_t73/* invoker_method */
	, IList_1_t31461_IList_1_get_Item_m242207_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0;
static ParameterInfo IList_1_t31461_IList_1_set_Item_m242208_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_PICKUP_TYPE_t1138_0_0_0},
};
extern TypeInfo IList_1_t31461_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_PICKUP_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242208_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31461_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31461_IList_1_set_Item_m242208_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31461_MethodInfos[] =
{
	&IList_1_IndexOf_m242209_MethodInfo,
	&IList_1_Insert_m242210_MethodInfo,
	&IList_1_RemoveAt_m242211_MethodInfo,
	&IList_1_get_Item_m242207_MethodInfo,
	&IList_1_set_Item_m242208_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31460_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31462_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31461_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31460_il2cpp_TypeInfo,
	&IEnumerable_1_t31462_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31461_0_0_0;
extern Il2CppType IList_1_t31461_1_0_0;
struct IList_1_t31461;
extern TypeInfo IList_1_t31461_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31461_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31461_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31461_MethodInfos/* methods */
	, IList_1_t31461_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31461_il2cpp_TypeInfo/* element_class */
	, IList_1_t31461_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31461_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31461_0_0_0/* byval_arg */
	, &IList_1_t31461_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31461_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27406_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/DROP_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_DROP_TY.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242212_MethodInfo;
static PropertyInfo IEnumerator_1_t27406____Current_PropertyInfo = 
{
	&IEnumerator_1_t27406_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242212_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27406_PropertyInfos[] =
{
	&IEnumerator_1_t27406____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27406_il2cpp_TypeInfo;
extern Il2CppType DROP_TYPE_t1139_0_0_0;
extern void* RuntimeInvoker_DROP_TYPE_t1139 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242212_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27406_il2cpp_TypeInfo/* declaring_type */
	, &DROP_TYPE_t1139_0_0_0/* return_type */
	, RuntimeInvoker_DROP_TYPE_t1139/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27406_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242212_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27406_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27406_0_0_0;
extern Il2CppType IEnumerator_1_t27406_1_0_0;
struct IEnumerator_1_t27406;
extern TypeInfo IEnumerator_1_t27406_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27406_GenericClass;
TypeInfo IEnumerator_1_t27406_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27406_MethodInfos/* methods */
	, IEnumerator_1_t27406_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27406_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27406_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27406_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27406_0_0_0/* byval_arg */
	, &IEnumerator_1_t27406_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27406_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1012.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1012MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern TypeInfo DROP_TYPE_t1139_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124029_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDROP_TYPE_t1139_m197047_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisDROP_TYPE_t1139_m197047 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisDROP_TYPE_t1139_m197047_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124024_MethodInfo;
 void InternalEnumerator_1__ctor_m124024 (InternalEnumerator_1_t16598 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124025_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124025 (InternalEnumerator_1_t16598 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026 (InternalEnumerator_1_t16598 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124029(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124029_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&DROP_TYPE_t1139_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124027_MethodInfo;
 void InternalEnumerator_1_Dispose_m124027 (InternalEnumerator_1_t16598 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124028_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124028 (InternalEnumerator_1_t16598 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124029_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124029 (InternalEnumerator_1_t16598 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisDROP_TYPE_t1139_m197047(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisDROP_TYPE_t1139_m197047_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16598____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16598, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16598____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16598, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16598_FieldInfos[] =
{
	&InternalEnumerator_1_t16598____array_FieldInfo,
	&InternalEnumerator_1_t16598____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16598____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16598_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124029_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16598____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16598_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124029_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16598_PropertyInfos[] =
{
	&InternalEnumerator_1_t16598____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16598____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16598_InternalEnumerator_1__ctor_m124024_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124024_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124024/* method */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16598_InternalEnumerator_1__ctor_m124024_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124025_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124025/* method */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026/* method */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124027_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124027/* method */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124028_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124028/* method */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern Il2CppType DROP_TYPE_t1139_0_0_0;
extern void* RuntimeInvoker_DROP_TYPE_t1139 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124029_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124029/* method */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* declaring_type */
	, &DROP_TYPE_t1139_0_0_0/* return_type */
	, RuntimeInvoker_DROP_TYPE_t1139/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16598_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124024_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124025_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026_MethodInfo,
	&InternalEnumerator_1_Dispose_m124027_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124028_MethodInfo,
	&InternalEnumerator_1_get_Current_m124029_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124028_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124025_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124027_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124029_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16598_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124026_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124028_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124025_MethodInfo,
	&InternalEnumerator_1_Dispose_m124027_MethodInfo,
	&InternalEnumerator_1_get_Current_m124029_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27406_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16598_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27406_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27406_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16598_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27406_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16598_0_0_0;
extern Il2CppType InternalEnumerator_1_t16598_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16598_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16598_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16598_MethodInfos/* methods */
	, InternalEnumerator_1_t16598_PropertyInfos/* properties */
	, InternalEnumerator_1_t16598_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16598_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16598_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16598_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16598_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16598_1_0_0/* this_arg */
	, InternalEnumerator_1_t16598_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16598_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16598)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>
extern MethodInfo ICollection_1_get_Count_m242213_MethodInfo;
static PropertyInfo ICollection_1_t31463____Count_PropertyInfo = 
{
	&ICollection_1_t31463_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242213_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242214_MethodInfo;
static PropertyInfo ICollection_1_t31463____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31463_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242214_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31463_PropertyInfos[] =
{
	&ICollection_1_t31463____Count_PropertyInfo,
	&ICollection_1_t31463____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242213_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242214_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DROP_TYPE_t1139_0_0_0;
static ParameterInfo ICollection_1_t31463_ICollection_1_Add_m242215_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DROP_TYPE_t1139_0_0_0},
};
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242215_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31463_ICollection_1_Add_m242215_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242216_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DROP_TYPE_t1139_0_0_0;
static ParameterInfo ICollection_1_t31463_ICollection_1_Contains_m242217_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DROP_TYPE_t1139_0_0_0},
};
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242217_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31463_ICollection_1_Contains_m242217_ParameterInfos/* parameters */
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
extern Il2CppType DROP_TYPEU5BU5D_t25531_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31463_ICollection_1_CopyTo_m242218_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DROP_TYPEU5BU5D_t25531_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242218_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31463_ICollection_1_CopyTo_m242218_ParameterInfos/* parameters */
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
extern Il2CppType DROP_TYPE_t1139_0_0_0;
static ParameterInfo ICollection_1_t31463_ICollection_1_Remove_m242219_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DROP_TYPE_t1139_0_0_0},
};
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242219_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31463_ICollection_1_Remove_m242219_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31463_MethodInfos[] =
{
	&ICollection_1_get_Count_m242213_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242214_MethodInfo,
	&ICollection_1_Add_m242215_MethodInfo,
	&ICollection_1_Clear_m242216_MethodInfo,
	&ICollection_1_Contains_m242217_MethodInfo,
	&ICollection_1_CopyTo_m242218_MethodInfo,
	&ICollection_1_Remove_m242219_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31465_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31463_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31465_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31463_0_0_0;
extern Il2CppType ICollection_1_t31463_1_0_0;
struct ICollection_1_t31463;
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31463_GenericClass;
TypeInfo ICollection_1_t31463_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31463_MethodInfos/* methods */
	, ICollection_1_t31463_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31463_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31463_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31463_0_0_0/* byval_arg */
	, &ICollection_1_t31463_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31463_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31465_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>
extern TypeInfo IEnumerable_1_t31465_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27406_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242220_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31465_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27406_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31465_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242220_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31465_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31465_0_0_0;
extern Il2CppType IEnumerable_1_t31465_1_0_0;
struct IEnumerable_1_t31465;
extern TypeInfo IEnumerable_1_t31465_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31465_GenericClass;
TypeInfo IEnumerable_1_t31465_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31465_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31465_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31465_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31465_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31465_0_0_0/* byval_arg */
	, &IEnumerable_1_t31465_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31465_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31464_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>
extern MethodInfo IList_1_get_Item_m242221_MethodInfo;
extern MethodInfo IList_1_set_Item_m242222_MethodInfo;
static PropertyInfo IList_1_t31464____Item_PropertyInfo = 
{
	&IList_1_t31464_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242221_MethodInfo/* get */
	, &IList_1_set_Item_m242222_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31464_PropertyInfos[] =
{
	&IList_1_t31464____Item_PropertyInfo,
	NULL
};
extern Il2CppType DROP_TYPE_t1139_0_0_0;
static ParameterInfo IList_1_t31464_IList_1_IndexOf_m242223_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DROP_TYPE_t1139_0_0_0},
};
extern TypeInfo IList_1_t31464_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242223_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31464_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31464_IList_1_IndexOf_m242223_ParameterInfos/* parameters */
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
extern Il2CppType DROP_TYPE_t1139_0_0_0;
static ParameterInfo IList_1_t31464_IList_1_Insert_m242224_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DROP_TYPE_t1139_0_0_0},
};
extern TypeInfo IList_1_t31464_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242224_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31464_IList_1_Insert_m242224_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31464_IList_1_RemoveAt_m242225_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31464_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242225_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31464_IList_1_RemoveAt_m242225_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31464_IList_1_get_Item_m242221_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31464_il2cpp_TypeInfo;
extern Il2CppType DROP_TYPE_t1139_0_0_0;
extern void* RuntimeInvoker_DROP_TYPE_t1139_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242221_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31464_il2cpp_TypeInfo/* declaring_type */
	, &DROP_TYPE_t1139_0_0_0/* return_type */
	, RuntimeInvoker_DROP_TYPE_t1139_Int32_t73/* invoker_method */
	, IList_1_t31464_IList_1_get_Item_m242221_ParameterInfos/* parameters */
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
extern Il2CppType DROP_TYPE_t1139_0_0_0;
static ParameterInfo IList_1_t31464_IList_1_set_Item_m242222_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DROP_TYPE_t1139_0_0_0},
};
extern TypeInfo IList_1_t31464_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/DROP_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242222_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31464_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31464_IList_1_set_Item_m242222_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31464_MethodInfos[] =
{
	&IList_1_IndexOf_m242223_MethodInfo,
	&IList_1_Insert_m242224_MethodInfo,
	&IList_1_RemoveAt_m242225_MethodInfo,
	&IList_1_get_Item_m242221_MethodInfo,
	&IList_1_set_Item_m242222_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31463_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31465_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31464_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31463_il2cpp_TypeInfo,
	&IEnumerable_1_t31465_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31464_0_0_0;
extern Il2CppType IList_1_t31464_1_0_0;
struct IList_1_t31464;
extern TypeInfo IList_1_t31464_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31464_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31464_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31464_MethodInfos/* methods */
	, IList_1_t31464_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31464_il2cpp_TypeInfo/* element_class */
	, IList_1_t31464_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31464_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31464_0_0_0/* byval_arg */
	, &IList_1_t31464_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31464_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27407_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_QINGGON.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242226_MethodInfo;
static PropertyInfo IEnumerator_1_t27407____Current_PropertyInfo = 
{
	&IEnumerator_1_t27407_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242226_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27407_PropertyInfos[] =
{
	&IEnumerator_1_t27407____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27407_il2cpp_TypeInfo;
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
extern void* RuntimeInvoker_QINGGONG_TRAIL_TYPE_t1140 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242226_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27407_il2cpp_TypeInfo/* declaring_type */
	, &QINGGONG_TRAIL_TYPE_t1140_0_0_0/* return_type */
	, RuntimeInvoker_QINGGONG_TRAIL_TYPE_t1140/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27407_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242226_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27407_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27407_0_0_0;
extern Il2CppType IEnumerator_1_t27407_1_0_0;
struct IEnumerator_1_t27407;
extern TypeInfo IEnumerator_1_t27407_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27407_GenericClass;
TypeInfo IEnumerator_1_t27407_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27407_MethodInfos/* methods */
	, IEnumerator_1_t27407_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27407_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27407_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27407_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27407_0_0_0/* byval_arg */
	, &IEnumerator_1_t27407_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27407_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1013.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1013MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern TypeInfo QINGGONG_TRAIL_TYPE_t1140_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124035_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisQINGGONG_TRAIL_TYPE_t1140_m197058_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisQINGGONG_TRAIL_TYPE_t1140_m197058 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisQINGGONG_TRAIL_TYPE_t1140_m197058_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124030_MethodInfo;
 void InternalEnumerator_1__ctor_m124030 (InternalEnumerator_1_t16599 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124031_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124031 (InternalEnumerator_1_t16599 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032 (InternalEnumerator_1_t16599 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124035(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124035_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&QINGGONG_TRAIL_TYPE_t1140_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124033_MethodInfo;
 void InternalEnumerator_1_Dispose_m124033 (InternalEnumerator_1_t16599 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124034_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124034 (InternalEnumerator_1_t16599 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124035_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124035 (InternalEnumerator_1_t16599 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisQINGGONG_TRAIL_TYPE_t1140_m197058(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisQINGGONG_TRAIL_TYPE_t1140_m197058_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16599____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16599, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16599____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16599, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16599_FieldInfos[] =
{
	&InternalEnumerator_1_t16599____array_FieldInfo,
	&InternalEnumerator_1_t16599____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16599____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16599_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124035_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16599____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16599_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124035_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16599_PropertyInfos[] =
{
	&InternalEnumerator_1_t16599____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16599____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16599_InternalEnumerator_1__ctor_m124030_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124030_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124030/* method */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16599_InternalEnumerator_1__ctor_m124030_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124031_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124031/* method */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032/* method */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124033_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124033/* method */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124034_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124034/* method */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
extern void* RuntimeInvoker_QINGGONG_TRAIL_TYPE_t1140 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124035_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124035/* method */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* declaring_type */
	, &QINGGONG_TRAIL_TYPE_t1140_0_0_0/* return_type */
	, RuntimeInvoker_QINGGONG_TRAIL_TYPE_t1140/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16599_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124030_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124031_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032_MethodInfo,
	&InternalEnumerator_1_Dispose_m124033_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124034_MethodInfo,
	&InternalEnumerator_1_get_Current_m124035_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124034_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124031_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124033_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124035_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16599_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124032_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124034_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124031_MethodInfo,
	&InternalEnumerator_1_Dispose_m124033_MethodInfo,
	&InternalEnumerator_1_get_Current_m124035_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27407_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16599_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27407_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27407_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16599_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27407_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16599_0_0_0;
extern Il2CppType InternalEnumerator_1_t16599_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16599_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16599_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16599_MethodInfos/* methods */
	, InternalEnumerator_1_t16599_PropertyInfos/* properties */
	, InternalEnumerator_1_t16599_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16599_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16599_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16599_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16599_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16599_1_0_0/* this_arg */
	, InternalEnumerator_1_t16599_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16599_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16599)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>
extern MethodInfo ICollection_1_get_Count_m242227_MethodInfo;
static PropertyInfo ICollection_1_t31466____Count_PropertyInfo = 
{
	&ICollection_1_t31466_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242227_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242228_MethodInfo;
static PropertyInfo ICollection_1_t31466____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31466_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242228_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31466_PropertyInfos[] =
{
	&ICollection_1_t31466____Count_PropertyInfo,
	&ICollection_1_t31466____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242227_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242228_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
static ParameterInfo ICollection_1_t31466_ICollection_1_Add_m242229_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QINGGONG_TRAIL_TYPE_t1140_0_0_0},
};
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242229_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31466_ICollection_1_Add_m242229_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242230_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
static ParameterInfo ICollection_1_t31466_ICollection_1_Contains_m242231_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QINGGONG_TRAIL_TYPE_t1140_0_0_0},
};
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242231_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31466_ICollection_1_Contains_m242231_ParameterInfos/* parameters */
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
extern Il2CppType QINGGONG_TRAIL_TYPEU5BU5D_t25532_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31466_ICollection_1_CopyTo_m242232_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &QINGGONG_TRAIL_TYPEU5BU5D_t25532_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242232_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31466_ICollection_1_CopyTo_m242232_ParameterInfos/* parameters */
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
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
static ParameterInfo ICollection_1_t31466_ICollection_1_Remove_m242233_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QINGGONG_TRAIL_TYPE_t1140_0_0_0},
};
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242233_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31466_ICollection_1_Remove_m242233_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31466_MethodInfos[] =
{
	&ICollection_1_get_Count_m242227_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242228_MethodInfo,
	&ICollection_1_Add_m242229_MethodInfo,
	&ICollection_1_Clear_m242230_MethodInfo,
	&ICollection_1_Contains_m242231_MethodInfo,
	&ICollection_1_CopyTo_m242232_MethodInfo,
	&ICollection_1_Remove_m242233_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31468_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31466_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31466_0_0_0;
extern Il2CppType ICollection_1_t31466_1_0_0;
struct ICollection_1_t31466;
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31466_GenericClass;
TypeInfo ICollection_1_t31466_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31466_MethodInfos/* methods */
	, ICollection_1_t31466_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31466_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31466_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31466_0_0_0/* byval_arg */
	, &ICollection_1_t31466_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31466_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31468_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>
extern TypeInfo IEnumerable_1_t31468_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27407_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242234_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31468_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27407_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31468_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242234_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31468_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31468_0_0_0;
extern Il2CppType IEnumerable_1_t31468_1_0_0;
struct IEnumerable_1_t31468;
extern TypeInfo IEnumerable_1_t31468_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31468_GenericClass;
TypeInfo IEnumerable_1_t31468_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31468_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31468_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31468_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31468_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31468_0_0_0/* byval_arg */
	, &IEnumerable_1_t31468_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31468_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31467_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>
extern MethodInfo IList_1_get_Item_m242235_MethodInfo;
extern MethodInfo IList_1_set_Item_m242236_MethodInfo;
static PropertyInfo IList_1_t31467____Item_PropertyInfo = 
{
	&IList_1_t31467_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242235_MethodInfo/* get */
	, &IList_1_set_Item_m242236_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31467_PropertyInfos[] =
{
	&IList_1_t31467____Item_PropertyInfo,
	NULL
};
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
static ParameterInfo IList_1_t31467_IList_1_IndexOf_m242237_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &QINGGONG_TRAIL_TYPE_t1140_0_0_0},
};
extern TypeInfo IList_1_t31467_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242237_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31467_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31467_IList_1_IndexOf_m242237_ParameterInfos/* parameters */
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
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
static ParameterInfo IList_1_t31467_IList_1_Insert_m242238_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &QINGGONG_TRAIL_TYPE_t1140_0_0_0},
};
extern TypeInfo IList_1_t31467_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242238_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31467_IList_1_Insert_m242238_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31467_IList_1_RemoveAt_m242239_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31467_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242239_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31467_IList_1_RemoveAt_m242239_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31467_IList_1_get_Item_m242235_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31467_il2cpp_TypeInfo;
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
extern void* RuntimeInvoker_QINGGONG_TRAIL_TYPE_t1140_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242235_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31467_il2cpp_TypeInfo/* declaring_type */
	, &QINGGONG_TRAIL_TYPE_t1140_0_0_0/* return_type */
	, RuntimeInvoker_QINGGONG_TRAIL_TYPE_t1140_Int32_t73/* invoker_method */
	, IList_1_t31467_IList_1_get_Item_m242235_ParameterInfos/* parameters */
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
extern Il2CppType QINGGONG_TRAIL_TYPE_t1140_0_0_0;
static ParameterInfo IList_1_t31467_IList_1_set_Item_m242236_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &QINGGONG_TRAIL_TYPE_t1140_0_0_0},
};
extern TypeInfo IList_1_t31467_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/QINGGONG_TRAIL_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242236_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31467_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31467_IList_1_set_Item_m242236_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31467_MethodInfos[] =
{
	&IList_1_IndexOf_m242237_MethodInfo,
	&IList_1_Insert_m242238_MethodInfo,
	&IList_1_RemoveAt_m242239_MethodInfo,
	&IList_1_get_Item_m242235_MethodInfo,
	&IList_1_set_Item_m242236_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31466_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31468_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31467_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31466_il2cpp_TypeInfo,
	&IEnumerable_1_t31468_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31467_0_0_0;
extern Il2CppType IList_1_t31467_1_0_0;
struct IList_1_t31467;
extern TypeInfo IList_1_t31467_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31467_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31467_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31467_MethodInfos/* methods */
	, IList_1_t31467_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31467_il2cpp_TypeInfo/* element_class */
	, IList_1_t31467_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31467_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31467_0_0_0/* byval_arg */
	, &IList_1_t31467_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31467_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27408_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_AUTOCOM_0.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>
extern MethodInfo IEnumerator_1_get_Current_m242240_MethodInfo;
static PropertyInfo IEnumerator_1_t27408____Current_PropertyInfo = 
{
	&IEnumerator_1_t27408_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242240_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27408_PropertyInfos[] =
{
	&IEnumerator_1_t27408____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27408_il2cpp_TypeInfo;
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
extern void* RuntimeInvoker_AUTOCOMBAT_DRUG_ID_t1141 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242240_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27408_il2cpp_TypeInfo/* declaring_type */
	, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0/* return_type */
	, RuntimeInvoker_AUTOCOMBAT_DRUG_ID_t1141/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27408_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242240_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27408_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27408_0_0_0;
extern Il2CppType IEnumerator_1_t27408_1_0_0;
struct IEnumerator_1_t27408;
extern TypeInfo IEnumerator_1_t27408_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27408_GenericClass;
TypeInfo IEnumerator_1_t27408_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27408_MethodInfos/* methods */
	, IEnumerator_1_t27408_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27408_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27408_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27408_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27408_0_0_0/* byval_arg */
	, &IEnumerator_1_t27408_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27408_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1014.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1014MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern TypeInfo AUTOCOMBAT_DRUG_ID_t1141_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124041_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisAUTOCOMBAT_DRUG_ID_t1141_m197069_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisAUTOCOMBAT_DRUG_ID_t1141_m197069 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisAUTOCOMBAT_DRUG_ID_t1141_m197069_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124036_MethodInfo;
 void InternalEnumerator_1__ctor_m124036 (InternalEnumerator_1_t16600 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124037_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124037 (InternalEnumerator_1_t16600 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038 (InternalEnumerator_1_t16600 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124041(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124041_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&AUTOCOMBAT_DRUG_ID_t1141_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124039_MethodInfo;
 void InternalEnumerator_1_Dispose_m124039 (InternalEnumerator_1_t16600 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124040_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124040 (InternalEnumerator_1_t16600 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124041_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124041 (InternalEnumerator_1_t16600 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisAUTOCOMBAT_DRUG_ID_t1141_m197069(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisAUTOCOMBAT_DRUG_ID_t1141_m197069_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16600____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16600, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16600____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16600, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16600_FieldInfos[] =
{
	&InternalEnumerator_1_t16600____array_FieldInfo,
	&InternalEnumerator_1_t16600____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16600____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16600_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124041_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16600____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16600_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124041_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16600_PropertyInfos[] =
{
	&InternalEnumerator_1_t16600____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16600____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16600_InternalEnumerator_1__ctor_m124036_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124036_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124036/* method */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16600_InternalEnumerator_1__ctor_m124036_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124037_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124037/* method */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038/* method */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124039_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124039/* method */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124040_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124040/* method */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
extern void* RuntimeInvoker_AUTOCOMBAT_DRUG_ID_t1141 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124041_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124041/* method */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* declaring_type */
	, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0/* return_type */
	, RuntimeInvoker_AUTOCOMBAT_DRUG_ID_t1141/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16600_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124036_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124037_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038_MethodInfo,
	&InternalEnumerator_1_Dispose_m124039_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124040_MethodInfo,
	&InternalEnumerator_1_get_Current_m124041_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124040_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124037_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124039_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124041_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16600_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124038_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124040_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124037_MethodInfo,
	&InternalEnumerator_1_Dispose_m124039_MethodInfo,
	&InternalEnumerator_1_get_Current_m124041_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27408_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16600_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27408_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27408_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16600_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27408_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16600_0_0_0;
extern Il2CppType InternalEnumerator_1_t16600_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16600_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16600_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16600_MethodInfos/* methods */
	, InternalEnumerator_1_t16600_PropertyInfos/* properties */
	, InternalEnumerator_1_t16600_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16600_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16600_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16600_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16600_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16600_1_0_0/* this_arg */
	, InternalEnumerator_1_t16600_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16600_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16600)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>
extern MethodInfo ICollection_1_get_Count_m242241_MethodInfo;
static PropertyInfo ICollection_1_t31469____Count_PropertyInfo = 
{
	&ICollection_1_t31469_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242241_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242242_MethodInfo;
static PropertyInfo ICollection_1_t31469____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31469_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242242_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31469_PropertyInfos[] =
{
	&ICollection_1_t31469____Count_PropertyInfo,
	&ICollection_1_t31469____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Count()
MethodInfo ICollection_1_get_Count_m242241_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242242_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
static ParameterInfo ICollection_1_t31469_ICollection_1_Add_m242243_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0},
};
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Add(T)
MethodInfo ICollection_1_Add_m242243_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31469_ICollection_1_Add_m242243_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Clear()
MethodInfo ICollection_1_Clear_m242244_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
static ParameterInfo ICollection_1_t31469_ICollection_1_Contains_m242245_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0},
};
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Contains(T)
MethodInfo ICollection_1_Contains_m242245_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31469_ICollection_1_Contains_m242245_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_DRUG_IDU5BU5D_t25533_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31469_ICollection_1_CopyTo_m242246_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_DRUG_IDU5BU5D_t25533_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242246_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31469_ICollection_1_CopyTo_m242246_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
static ParameterInfo ICollection_1_t31469_ICollection_1_Remove_m242247_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0},
};
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Remove(T)
MethodInfo ICollection_1_Remove_m242247_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31469_ICollection_1_Remove_m242247_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31469_MethodInfos[] =
{
	&ICollection_1_get_Count_m242241_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242242_MethodInfo,
	&ICollection_1_Add_m242243_MethodInfo,
	&ICollection_1_Clear_m242244_MethodInfo,
	&ICollection_1_Contains_m242245_MethodInfo,
	&ICollection_1_CopyTo_m242246_MethodInfo,
	&ICollection_1_Remove_m242247_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31471_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31469_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31469_0_0_0;
extern Il2CppType ICollection_1_t31469_1_0_0;
struct ICollection_1_t31469;
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31469_GenericClass;
TypeInfo ICollection_1_t31469_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31469_MethodInfos/* methods */
	, ICollection_1_t31469_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31469_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31469_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31469_0_0_0/* byval_arg */
	, &ICollection_1_t31469_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31469_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31471_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>
extern TypeInfo IEnumerable_1_t31471_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27408_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242248_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31471_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27408_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31471_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242248_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31471_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31471_0_0_0;
extern Il2CppType IEnumerable_1_t31471_1_0_0;
struct IEnumerable_1_t31471;
extern TypeInfo IEnumerable_1_t31471_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31471_GenericClass;
TypeInfo IEnumerable_1_t31471_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31471_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31471_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31471_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31471_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31471_0_0_0/* byval_arg */
	, &IEnumerable_1_t31471_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31471_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31470_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>
extern MethodInfo IList_1_get_Item_m242249_MethodInfo;
extern MethodInfo IList_1_set_Item_m242250_MethodInfo;
static PropertyInfo IList_1_t31470____Item_PropertyInfo = 
{
	&IList_1_t31470_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242249_MethodInfo/* get */
	, &IList_1_set_Item_m242250_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31470_PropertyInfos[] =
{
	&IList_1_t31470____Item_PropertyInfo,
	NULL
};
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
static ParameterInfo IList_1_t31470_IList_1_IndexOf_m242251_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0},
};
extern TypeInfo IList_1_t31470_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242251_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31470_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31470_IList_1_IndexOf_m242251_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
static ParameterInfo IList_1_t31470_IList_1_Insert_m242252_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0},
};
extern TypeInfo IList_1_t31470_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242252_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31470_IList_1_Insert_m242252_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31470_IList_1_RemoveAt_m242253_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31470_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242253_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31470_IList_1_RemoveAt_m242253_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31470_IList_1_get_Item_m242249_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31470_il2cpp_TypeInfo;
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
extern void* RuntimeInvoker_AUTOCOMBAT_DRUG_ID_t1141_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242249_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31470_il2cpp_TypeInfo/* declaring_type */
	, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0/* return_type */
	, RuntimeInvoker_AUTOCOMBAT_DRUG_ID_t1141_Int32_t73/* invoker_method */
	, IList_1_t31470_IList_1_get_Item_m242249_ParameterInfos/* parameters */
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
extern Il2CppType AUTOCOMBAT_DRUG_ID_t1141_0_0_0;
static ParameterInfo IList_1_t31470_IList_1_set_Item_m242250_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &AUTOCOMBAT_DRUG_ID_t1141_0_0_0},
};
extern TypeInfo IList_1_t31470_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/AUTOCOMBAT_DRUG_ID>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242250_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31470_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31470_IList_1_set_Item_m242250_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31470_MethodInfos[] =
{
	&IList_1_IndexOf_m242251_MethodInfo,
	&IList_1_Insert_m242252_MethodInfo,
	&IList_1_RemoveAt_m242253_MethodInfo,
	&IList_1_get_Item_m242249_MethodInfo,
	&IList_1_set_Item_m242250_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31469_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31471_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31470_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31469_il2cpp_TypeInfo,
	&IEnumerable_1_t31471_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31470_0_0_0;
extern Il2CppType IList_1_t31470_1_0_0;
struct IList_1_t31470;
extern TypeInfo IList_1_t31470_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31470_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31470_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31470_MethodInfos/* methods */
	, IList_1_t31470_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31470_il2cpp_TypeInfo/* element_class */
	, IList_1_t31470_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31470_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31470_0_0_0/* byval_arg */
	, &IList_1_t31470_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31470_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27409_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/GUILD_JOB
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_GUILD_J.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>
extern MethodInfo IEnumerator_1_get_Current_m242254_MethodInfo;
static PropertyInfo IEnumerator_1_t27409____Current_PropertyInfo = 
{
	&IEnumerator_1_t27409_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242254_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27409_PropertyInfos[] =
{
	&IEnumerator_1_t27409____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27409_il2cpp_TypeInfo;
extern Il2CppType GUILD_JOB_t1142_0_0_0;
extern void* RuntimeInvoker_GUILD_JOB_t1142 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242254_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27409_il2cpp_TypeInfo/* declaring_type */
	, &GUILD_JOB_t1142_0_0_0/* return_type */
	, RuntimeInvoker_GUILD_JOB_t1142/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27409_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242254_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27409_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27409_0_0_0;
extern Il2CppType IEnumerator_1_t27409_1_0_0;
struct IEnumerator_1_t27409;
extern TypeInfo IEnumerator_1_t27409_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27409_GenericClass;
TypeInfo IEnumerator_1_t27409_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27409_MethodInfos/* methods */
	, IEnumerator_1_t27409_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27409_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27409_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27409_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27409_0_0_0/* byval_arg */
	, &IEnumerator_1_t27409_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27409_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1015.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1015MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern TypeInfo GUILD_JOB_t1142_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124047_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGUILD_JOB_t1142_m197080_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGUILD_JOB_t1142_m197080 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisGUILD_JOB_t1142_m197080_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124042_MethodInfo;
 void InternalEnumerator_1__ctor_m124042 (InternalEnumerator_1_t16601 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124043_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124043 (InternalEnumerator_1_t16601 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044 (InternalEnumerator_1_t16601 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124047(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124047_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GUILD_JOB_t1142_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124045_MethodInfo;
 void InternalEnumerator_1_Dispose_m124045 (InternalEnumerator_1_t16601 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124046_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124046 (InternalEnumerator_1_t16601 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124047_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124047 (InternalEnumerator_1_t16601 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGUILD_JOB_t1142_m197080(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGUILD_JOB_t1142_m197080_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16601____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16601, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16601____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16601, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16601_FieldInfos[] =
{
	&InternalEnumerator_1_t16601____array_FieldInfo,
	&InternalEnumerator_1_t16601____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16601____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16601_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124047_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16601____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16601_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124047_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16601_PropertyInfos[] =
{
	&InternalEnumerator_1_t16601____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16601____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16601_InternalEnumerator_1__ctor_m124042_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124042_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124042/* method */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16601_InternalEnumerator_1__ctor_m124042_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124043_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124043/* method */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044/* method */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124045_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124045/* method */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124046_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124046/* method */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern Il2CppType GUILD_JOB_t1142_0_0_0;
extern void* RuntimeInvoker_GUILD_JOB_t1142 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124047_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124047/* method */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* declaring_type */
	, &GUILD_JOB_t1142_0_0_0/* return_type */
	, RuntimeInvoker_GUILD_JOB_t1142/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16601_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124042_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124043_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044_MethodInfo,
	&InternalEnumerator_1_Dispose_m124045_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124046_MethodInfo,
	&InternalEnumerator_1_get_Current_m124047_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124046_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124043_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124045_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124047_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16601_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124044_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124046_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124043_MethodInfo,
	&InternalEnumerator_1_Dispose_m124045_MethodInfo,
	&InternalEnumerator_1_get_Current_m124047_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27409_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16601_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27409_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27409_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16601_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27409_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16601_0_0_0;
extern Il2CppType InternalEnumerator_1_t16601_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16601_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16601_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16601_MethodInfos/* methods */
	, InternalEnumerator_1_t16601_PropertyInfos/* properties */
	, InternalEnumerator_1_t16601_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16601_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16601_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16601_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16601_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16601_1_0_0/* this_arg */
	, InternalEnumerator_1_t16601_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16601_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16601)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>
extern MethodInfo ICollection_1_get_Count_m242255_MethodInfo;
static PropertyInfo ICollection_1_t31472____Count_PropertyInfo = 
{
	&ICollection_1_t31472_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242255_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242256_MethodInfo;
static PropertyInfo ICollection_1_t31472____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31472_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242256_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31472_PropertyInfos[] =
{
	&ICollection_1_t31472____Count_PropertyInfo,
	&ICollection_1_t31472____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Count()
MethodInfo ICollection_1_get_Count_m242255_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242256_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GUILD_JOB_t1142_0_0_0;
static ParameterInfo ICollection_1_t31472_ICollection_1_Add_m242257_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_JOB_t1142_0_0_0},
};
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Add(T)
MethodInfo ICollection_1_Add_m242257_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31472_ICollection_1_Add_m242257_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Clear()
MethodInfo ICollection_1_Clear_m242258_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GUILD_JOB_t1142_0_0_0;
static ParameterInfo ICollection_1_t31472_ICollection_1_Contains_m242259_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_JOB_t1142_0_0_0},
};
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Contains(T)
MethodInfo ICollection_1_Contains_m242259_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31472_ICollection_1_Contains_m242259_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_JOBU5BU5D_t25534_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31472_ICollection_1_CopyTo_m242260_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_JOBU5BU5D_t25534_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242260_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31472_ICollection_1_CopyTo_m242260_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_JOB_t1142_0_0_0;
static ParameterInfo ICollection_1_t31472_ICollection_1_Remove_m242261_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_JOB_t1142_0_0_0},
};
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Remove(T)
MethodInfo ICollection_1_Remove_m242261_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31472_ICollection_1_Remove_m242261_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31472_MethodInfos[] =
{
	&ICollection_1_get_Count_m242255_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242256_MethodInfo,
	&ICollection_1_Add_m242257_MethodInfo,
	&ICollection_1_Clear_m242258_MethodInfo,
	&ICollection_1_Contains_m242259_MethodInfo,
	&ICollection_1_CopyTo_m242260_MethodInfo,
	&ICollection_1_Remove_m242261_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31474_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31472_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31472_0_0_0;
extern Il2CppType ICollection_1_t31472_1_0_0;
struct ICollection_1_t31472;
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31472_GenericClass;
TypeInfo ICollection_1_t31472_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31472_MethodInfos/* methods */
	, ICollection_1_t31472_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31472_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31472_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31472_0_0_0/* byval_arg */
	, &ICollection_1_t31472_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31472_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31474_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>
extern TypeInfo IEnumerable_1_t31474_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27409_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242262_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31474_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27409_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31474_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242262_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31474_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31474_0_0_0;
extern Il2CppType IEnumerable_1_t31474_1_0_0;
struct IEnumerable_1_t31474;
extern TypeInfo IEnumerable_1_t31474_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31474_GenericClass;
TypeInfo IEnumerable_1_t31474_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31474_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31474_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31474_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31474_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31474_0_0_0/* byval_arg */
	, &IEnumerable_1_t31474_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31474_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31473_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>
extern MethodInfo IList_1_get_Item_m242263_MethodInfo;
extern MethodInfo IList_1_set_Item_m242264_MethodInfo;
static PropertyInfo IList_1_t31473____Item_PropertyInfo = 
{
	&IList_1_t31473_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242263_MethodInfo/* get */
	, &IList_1_set_Item_m242264_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31473_PropertyInfos[] =
{
	&IList_1_t31473____Item_PropertyInfo,
	NULL
};
extern Il2CppType GUILD_JOB_t1142_0_0_0;
static ParameterInfo IList_1_t31473_IList_1_IndexOf_m242265_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_JOB_t1142_0_0_0},
};
extern TypeInfo IList_1_t31473_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242265_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31473_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31473_IList_1_IndexOf_m242265_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_JOB_t1142_0_0_0;
static ParameterInfo IList_1_t31473_IList_1_Insert_m242266_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GUILD_JOB_t1142_0_0_0},
};
extern TypeInfo IList_1_t31473_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242266_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31473_IList_1_Insert_m242266_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31473_IList_1_RemoveAt_m242267_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31473_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242267_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31473_IList_1_RemoveAt_m242267_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31473_IList_1_get_Item_m242263_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31473_il2cpp_TypeInfo;
extern Il2CppType GUILD_JOB_t1142_0_0_0;
extern void* RuntimeInvoker_GUILD_JOB_t1142_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242263_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31473_il2cpp_TypeInfo/* declaring_type */
	, &GUILD_JOB_t1142_0_0_0/* return_type */
	, RuntimeInvoker_GUILD_JOB_t1142_Int32_t73/* invoker_method */
	, IList_1_t31473_IList_1_get_Item_m242263_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_JOB_t1142_0_0_0;
static ParameterInfo IList_1_t31473_IList_1_set_Item_m242264_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GUILD_JOB_t1142_0_0_0},
};
extern TypeInfo IList_1_t31473_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_JOB>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242264_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31473_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31473_IList_1_set_Item_m242264_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31473_MethodInfos[] =
{
	&IList_1_IndexOf_m242265_MethodInfo,
	&IList_1_Insert_m242266_MethodInfo,
	&IList_1_RemoveAt_m242267_MethodInfo,
	&IList_1_get_Item_m242263_MethodInfo,
	&IList_1_set_Item_m242264_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31472_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31474_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31473_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31472_il2cpp_TypeInfo,
	&IEnumerable_1_t31474_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31473_0_0_0;
extern Il2CppType IList_1_t31473_1_0_0;
struct IList_1_t31473;
extern TypeInfo IList_1_t31473_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31473_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31473_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31473_MethodInfos/* methods */
	, IList_1_t31473_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31473_il2cpp_TypeInfo/* element_class */
	, IList_1_t31473_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31473_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31473_0_0_0/* byval_arg */
	, &IList_1_t31473_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31473_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27410_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_GUILD_R.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>
extern MethodInfo IEnumerator_1_get_Current_m242268_MethodInfo;
static PropertyInfo IEnumerator_1_t27410____Current_PropertyInfo = 
{
	&IEnumerator_1_t27410_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242268_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27410_PropertyInfos[] =
{
	&IEnumerator_1_t27410____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27410_il2cpp_TypeInfo;
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
extern void* RuntimeInvoker_GUILD_ROUTINE_t1143 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242268_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27410_il2cpp_TypeInfo/* declaring_type */
	, &GUILD_ROUTINE_t1143_0_0_0/* return_type */
	, RuntimeInvoker_GUILD_ROUTINE_t1143/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27410_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242268_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27410_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27410_0_0_0;
extern Il2CppType IEnumerator_1_t27410_1_0_0;
struct IEnumerator_1_t27410;
extern TypeInfo IEnumerator_1_t27410_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27410_GenericClass;
TypeInfo IEnumerator_1_t27410_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27410_MethodInfos/* methods */
	, IEnumerator_1_t27410_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27410_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27410_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27410_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27410_0_0_0/* byval_arg */
	, &IEnumerator_1_t27410_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27410_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1016.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1016MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern TypeInfo GUILD_ROUTINE_t1143_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124053_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGUILD_ROUTINE_t1143_m197091_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGUILD_ROUTINE_t1143_m197091 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisGUILD_ROUTINE_t1143_m197091_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124048_MethodInfo;
 void InternalEnumerator_1__ctor_m124048 (InternalEnumerator_1_t16602 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124049_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124049 (InternalEnumerator_1_t16602 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050 (InternalEnumerator_1_t16602 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124053(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124053_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GUILD_ROUTINE_t1143_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124051_MethodInfo;
 void InternalEnumerator_1_Dispose_m124051 (InternalEnumerator_1_t16602 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124052_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124052 (InternalEnumerator_1_t16602 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124053_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124053 (InternalEnumerator_1_t16602 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGUILD_ROUTINE_t1143_m197091(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGUILD_ROUTINE_t1143_m197091_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16602____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16602, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16602____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16602, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16602_FieldInfos[] =
{
	&InternalEnumerator_1_t16602____array_FieldInfo,
	&InternalEnumerator_1_t16602____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16602____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16602_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124053_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16602____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16602_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124053_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16602_PropertyInfos[] =
{
	&InternalEnumerator_1_t16602____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16602____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16602_InternalEnumerator_1__ctor_m124048_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124048_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124048/* method */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16602_InternalEnumerator_1__ctor_m124048_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124049_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124049/* method */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050/* method */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124051_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124051/* method */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124052_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124052/* method */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
extern void* RuntimeInvoker_GUILD_ROUTINE_t1143 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124053_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124053/* method */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* declaring_type */
	, &GUILD_ROUTINE_t1143_0_0_0/* return_type */
	, RuntimeInvoker_GUILD_ROUTINE_t1143/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16602_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124048_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124049_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050_MethodInfo,
	&InternalEnumerator_1_Dispose_m124051_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124052_MethodInfo,
	&InternalEnumerator_1_get_Current_m124053_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124052_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124049_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124051_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124053_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16602_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124050_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124052_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124049_MethodInfo,
	&InternalEnumerator_1_Dispose_m124051_MethodInfo,
	&InternalEnumerator_1_get_Current_m124053_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27410_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16602_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27410_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27410_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16602_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27410_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16602_0_0_0;
extern Il2CppType InternalEnumerator_1_t16602_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16602_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16602_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16602_MethodInfos/* methods */
	, InternalEnumerator_1_t16602_PropertyInfos/* properties */
	, InternalEnumerator_1_t16602_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16602_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16602_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16602_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16602_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16602_1_0_0/* this_arg */
	, InternalEnumerator_1_t16602_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16602_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16602)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>
extern MethodInfo ICollection_1_get_Count_m242269_MethodInfo;
static PropertyInfo ICollection_1_t31475____Count_PropertyInfo = 
{
	&ICollection_1_t31475_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242269_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242270_MethodInfo;
static PropertyInfo ICollection_1_t31475____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31475_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242270_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31475_PropertyInfos[] =
{
	&ICollection_1_t31475____Count_PropertyInfo,
	&ICollection_1_t31475____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Count()
MethodInfo ICollection_1_get_Count_m242269_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242270_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
static ParameterInfo ICollection_1_t31475_ICollection_1_Add_m242271_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_ROUTINE_t1143_0_0_0},
};
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Add(T)
MethodInfo ICollection_1_Add_m242271_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31475_ICollection_1_Add_m242271_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Clear()
MethodInfo ICollection_1_Clear_m242272_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
static ParameterInfo ICollection_1_t31475_ICollection_1_Contains_m242273_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_ROUTINE_t1143_0_0_0},
};
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Contains(T)
MethodInfo ICollection_1_Contains_m242273_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31475_ICollection_1_Contains_m242273_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_ROUTINEU5BU5D_t25535_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31475_ICollection_1_CopyTo_m242274_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_ROUTINEU5BU5D_t25535_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242274_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31475_ICollection_1_CopyTo_m242274_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
static ParameterInfo ICollection_1_t31475_ICollection_1_Remove_m242275_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_ROUTINE_t1143_0_0_0},
};
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Remove(T)
MethodInfo ICollection_1_Remove_m242275_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31475_ICollection_1_Remove_m242275_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31475_MethodInfos[] =
{
	&ICollection_1_get_Count_m242269_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242270_MethodInfo,
	&ICollection_1_Add_m242271_MethodInfo,
	&ICollection_1_Clear_m242272_MethodInfo,
	&ICollection_1_Contains_m242273_MethodInfo,
	&ICollection_1_CopyTo_m242274_MethodInfo,
	&ICollection_1_Remove_m242275_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31477_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31475_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31475_0_0_0;
extern Il2CppType ICollection_1_t31475_1_0_0;
struct ICollection_1_t31475;
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31475_GenericClass;
TypeInfo ICollection_1_t31475_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31475_MethodInfos/* methods */
	, ICollection_1_t31475_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31475_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31475_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31475_0_0_0/* byval_arg */
	, &ICollection_1_t31475_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31475_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31477_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>
extern TypeInfo IEnumerable_1_t31477_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27410_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242276_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31477_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27410_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31477_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242276_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31477_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31477_0_0_0;
extern Il2CppType IEnumerable_1_t31477_1_0_0;
struct IEnumerable_1_t31477;
extern TypeInfo IEnumerable_1_t31477_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31477_GenericClass;
TypeInfo IEnumerable_1_t31477_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31477_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31477_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31477_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31477_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31477_0_0_0/* byval_arg */
	, &IEnumerable_1_t31477_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31477_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31476_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>
extern MethodInfo IList_1_get_Item_m242277_MethodInfo;
extern MethodInfo IList_1_set_Item_m242278_MethodInfo;
static PropertyInfo IList_1_t31476____Item_PropertyInfo = 
{
	&IList_1_t31476_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242277_MethodInfo/* get */
	, &IList_1_set_Item_m242278_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31476_PropertyInfos[] =
{
	&IList_1_t31476____Item_PropertyInfo,
	NULL
};
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
static ParameterInfo IList_1_t31476_IList_1_IndexOf_m242279_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GUILD_ROUTINE_t1143_0_0_0},
};
extern TypeInfo IList_1_t31476_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242279_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31476_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31476_IList_1_IndexOf_m242279_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
static ParameterInfo IList_1_t31476_IList_1_Insert_m242280_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GUILD_ROUTINE_t1143_0_0_0},
};
extern TypeInfo IList_1_t31476_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242280_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31476_IList_1_Insert_m242280_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31476_IList_1_RemoveAt_m242281_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31476_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242281_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31476_IList_1_RemoveAt_m242281_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31476_IList_1_get_Item_m242277_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31476_il2cpp_TypeInfo;
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
extern void* RuntimeInvoker_GUILD_ROUTINE_t1143_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242277_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31476_il2cpp_TypeInfo/* declaring_type */
	, &GUILD_ROUTINE_t1143_0_0_0/* return_type */
	, RuntimeInvoker_GUILD_ROUTINE_t1143_Int32_t73/* invoker_method */
	, IList_1_t31476_IList_1_get_Item_m242277_ParameterInfos/* parameters */
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
extern Il2CppType GUILD_ROUTINE_t1143_0_0_0;
static ParameterInfo IList_1_t31476_IList_1_set_Item_m242278_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GUILD_ROUTINE_t1143_0_0_0},
};
extern TypeInfo IList_1_t31476_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GUILD_ROUTINE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242278_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31476_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31476_IList_1_set_Item_m242278_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31476_MethodInfos[] =
{
	&IList_1_IndexOf_m242279_MethodInfo,
	&IList_1_Insert_m242280_MethodInfo,
	&IList_1_RemoveAt_m242281_MethodInfo,
	&IList_1_get_Item_m242277_MethodInfo,
	&IList_1_set_Item_m242278_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31475_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31477_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31476_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31475_il2cpp_TypeInfo,
	&IEnumerable_1_t31477_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31476_0_0_0;
extern Il2CppType IList_1_t31476_1_0_0;
struct IList_1_t31476;
extern TypeInfo IList_1_t31476_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31476_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31476_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31476_MethodInfos/* methods */
	, IList_1_t31476_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31476_il2cpp_TypeInfo/* element_class */
	, IList_1_t31476_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31476_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31476_0_0_0/* byval_arg */
	, &IList_1_t31476_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31476_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27411_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_NEWBUTT.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>
extern MethodInfo IEnumerator_1_get_Current_m242282_MethodInfo;
static PropertyInfo IEnumerator_1_t27411____Current_PropertyInfo = 
{
	&IEnumerator_1_t27411_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242282_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27411_PropertyInfos[] =
{
	&IEnumerator_1_t27411____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27411_il2cpp_TypeInfo;
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
extern void* RuntimeInvoker_NEWBUTTON_LEVEL_t1144 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242282_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27411_il2cpp_TypeInfo/* declaring_type */
	, &NEWBUTTON_LEVEL_t1144_0_0_0/* return_type */
	, RuntimeInvoker_NEWBUTTON_LEVEL_t1144/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27411_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242282_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27411_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27411_0_0_0;
extern Il2CppType IEnumerator_1_t27411_1_0_0;
struct IEnumerator_1_t27411;
extern TypeInfo IEnumerator_1_t27411_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27411_GenericClass;
TypeInfo IEnumerator_1_t27411_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27411_MethodInfos/* methods */
	, IEnumerator_1_t27411_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27411_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27411_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27411_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27411_0_0_0/* byval_arg */
	, &IEnumerator_1_t27411_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27411_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1017.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1017MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern TypeInfo NEWBUTTON_LEVEL_t1144_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124059_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNEWBUTTON_LEVEL_t1144_m197102_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisNEWBUTTON_LEVEL_t1144_m197102 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisNEWBUTTON_LEVEL_t1144_m197102_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124054_MethodInfo;
 void InternalEnumerator_1__ctor_m124054 (InternalEnumerator_1_t16603 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124055_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124055 (InternalEnumerator_1_t16603 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056 (InternalEnumerator_1_t16603 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124059(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124059_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&NEWBUTTON_LEVEL_t1144_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124057_MethodInfo;
 void InternalEnumerator_1_Dispose_m124057 (InternalEnumerator_1_t16603 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124058_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124058 (InternalEnumerator_1_t16603 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124059_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124059 (InternalEnumerator_1_t16603 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisNEWBUTTON_LEVEL_t1144_m197102(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisNEWBUTTON_LEVEL_t1144_m197102_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16603____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16603, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16603____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16603, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16603_FieldInfos[] =
{
	&InternalEnumerator_1_t16603____array_FieldInfo,
	&InternalEnumerator_1_t16603____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16603____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16603_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124059_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16603____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16603_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124059_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16603_PropertyInfos[] =
{
	&InternalEnumerator_1_t16603____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16603____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16603_InternalEnumerator_1__ctor_m124054_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124054_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124054/* method */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16603_InternalEnumerator_1__ctor_m124054_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124055_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124055/* method */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056/* method */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124057_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124057/* method */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124058_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124058/* method */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
extern void* RuntimeInvoker_NEWBUTTON_LEVEL_t1144 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124059_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124059/* method */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* declaring_type */
	, &NEWBUTTON_LEVEL_t1144_0_0_0/* return_type */
	, RuntimeInvoker_NEWBUTTON_LEVEL_t1144/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16603_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124054_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124055_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056_MethodInfo,
	&InternalEnumerator_1_Dispose_m124057_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124058_MethodInfo,
	&InternalEnumerator_1_get_Current_m124059_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124058_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124055_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124057_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124059_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16603_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124056_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124058_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124055_MethodInfo,
	&InternalEnumerator_1_Dispose_m124057_MethodInfo,
	&InternalEnumerator_1_get_Current_m124059_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27411_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16603_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27411_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27411_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16603_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27411_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16603_0_0_0;
extern Il2CppType InternalEnumerator_1_t16603_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16603_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16603_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16603_MethodInfos/* methods */
	, InternalEnumerator_1_t16603_PropertyInfos/* properties */
	, InternalEnumerator_1_t16603_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16603_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16603_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16603_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16603_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16603_1_0_0/* this_arg */
	, InternalEnumerator_1_t16603_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16603_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16603)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>
extern MethodInfo ICollection_1_get_Count_m242283_MethodInfo;
static PropertyInfo ICollection_1_t31478____Count_PropertyInfo = 
{
	&ICollection_1_t31478_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242283_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242284_MethodInfo;
static PropertyInfo ICollection_1_t31478____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31478_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242284_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31478_PropertyInfos[] =
{
	&ICollection_1_t31478____Count_PropertyInfo,
	&ICollection_1_t31478____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Count()
MethodInfo ICollection_1_get_Count_m242283_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242284_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
static ParameterInfo ICollection_1_t31478_ICollection_1_Add_m242285_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NEWBUTTON_LEVEL_t1144_0_0_0},
};
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Add(T)
MethodInfo ICollection_1_Add_m242285_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31478_ICollection_1_Add_m242285_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Clear()
MethodInfo ICollection_1_Clear_m242286_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
static ParameterInfo ICollection_1_t31478_ICollection_1_Contains_m242287_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NEWBUTTON_LEVEL_t1144_0_0_0},
};
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Contains(T)
MethodInfo ICollection_1_Contains_m242287_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31478_ICollection_1_Contains_m242287_ParameterInfos/* parameters */
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
extern Il2CppType NEWBUTTON_LEVELU5BU5D_t25536_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31478_ICollection_1_CopyTo_m242288_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NEWBUTTON_LEVELU5BU5D_t25536_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242288_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31478_ICollection_1_CopyTo_m242288_ParameterInfos/* parameters */
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
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
static ParameterInfo ICollection_1_t31478_ICollection_1_Remove_m242289_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NEWBUTTON_LEVEL_t1144_0_0_0},
};
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Remove(T)
MethodInfo ICollection_1_Remove_m242289_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31478_ICollection_1_Remove_m242289_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31478_MethodInfos[] =
{
	&ICollection_1_get_Count_m242283_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242284_MethodInfo,
	&ICollection_1_Add_m242285_MethodInfo,
	&ICollection_1_Clear_m242286_MethodInfo,
	&ICollection_1_Contains_m242287_MethodInfo,
	&ICollection_1_CopyTo_m242288_MethodInfo,
	&ICollection_1_Remove_m242289_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31480_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31478_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31478_0_0_0;
extern Il2CppType ICollection_1_t31478_1_0_0;
struct ICollection_1_t31478;
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31478_GenericClass;
TypeInfo ICollection_1_t31478_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31478_MethodInfos/* methods */
	, ICollection_1_t31478_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31478_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31478_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31478_0_0_0/* byval_arg */
	, &ICollection_1_t31478_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31478_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31480_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>
extern TypeInfo IEnumerable_1_t31480_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27411_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242290_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31480_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27411_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31480_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242290_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31480_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31480_0_0_0;
extern Il2CppType IEnumerable_1_t31480_1_0_0;
struct IEnumerable_1_t31480;
extern TypeInfo IEnumerable_1_t31480_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31480_GenericClass;
TypeInfo IEnumerable_1_t31480_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31480_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31480_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31480_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31480_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31480_0_0_0/* byval_arg */
	, &IEnumerable_1_t31480_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31480_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31479_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>
extern MethodInfo IList_1_get_Item_m242291_MethodInfo;
extern MethodInfo IList_1_set_Item_m242292_MethodInfo;
static PropertyInfo IList_1_t31479____Item_PropertyInfo = 
{
	&IList_1_t31479_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242291_MethodInfo/* get */
	, &IList_1_set_Item_m242292_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31479_PropertyInfos[] =
{
	&IList_1_t31479____Item_PropertyInfo,
	NULL
};
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
static ParameterInfo IList_1_t31479_IList_1_IndexOf_m242293_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NEWBUTTON_LEVEL_t1144_0_0_0},
};
extern TypeInfo IList_1_t31479_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242293_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31479_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31479_IList_1_IndexOf_m242293_ParameterInfos/* parameters */
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
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
static ParameterInfo IList_1_t31479_IList_1_Insert_m242294_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NEWBUTTON_LEVEL_t1144_0_0_0},
};
extern TypeInfo IList_1_t31479_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242294_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31479_IList_1_Insert_m242294_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31479_IList_1_RemoveAt_m242295_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31479_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242295_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31479_IList_1_RemoveAt_m242295_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31479_IList_1_get_Item_m242291_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31479_il2cpp_TypeInfo;
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
extern void* RuntimeInvoker_NEWBUTTON_LEVEL_t1144_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242291_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31479_il2cpp_TypeInfo/* declaring_type */
	, &NEWBUTTON_LEVEL_t1144_0_0_0/* return_type */
	, RuntimeInvoker_NEWBUTTON_LEVEL_t1144_Int32_t73/* invoker_method */
	, IList_1_t31479_IList_1_get_Item_m242291_ParameterInfos/* parameters */
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
extern Il2CppType NEWBUTTON_LEVEL_t1144_0_0_0;
static ParameterInfo IList_1_t31479_IList_1_set_Item_m242292_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NEWBUTTON_LEVEL_t1144_0_0_0},
};
extern TypeInfo IList_1_t31479_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/NEWBUTTON_LEVEL>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242292_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31479_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31479_IList_1_set_Item_m242292_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31479_MethodInfos[] =
{
	&IList_1_IndexOf_m242293_MethodInfo,
	&IList_1_Insert_m242294_MethodInfo,
	&IList_1_RemoveAt_m242295_MethodInfo,
	&IList_1_get_Item_m242291_MethodInfo,
	&IList_1_set_Item_m242292_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31478_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31480_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31479_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31478_il2cpp_TypeInfo,
	&IEnumerable_1_t31480_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31479_0_0_0;
extern Il2CppType IList_1_t31479_1_0_0;
struct IList_1_t31479;
extern TypeInfo IList_1_t31479_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31479_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31479_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31479_MethodInfos/* methods */
	, IList_1_t31479_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31479_il2cpp_TypeInfo/* element_class */
	, IList_1_t31479_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31479_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31479_0_0_0/* byval_arg */
	, &IList_1_t31479_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31479_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27412_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/RANKTYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_RANKTYP.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>
extern MethodInfo IEnumerator_1_get_Current_m242296_MethodInfo;
static PropertyInfo IEnumerator_1_t27412____Current_PropertyInfo = 
{
	&IEnumerator_1_t27412_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242296_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27412_PropertyInfos[] =
{
	&IEnumerator_1_t27412____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27412_il2cpp_TypeInfo;
extern Il2CppType RANKTYPE_t1145_0_0_0;
extern void* RuntimeInvoker_RANKTYPE_t1145 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242296_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27412_il2cpp_TypeInfo/* declaring_type */
	, &RANKTYPE_t1145_0_0_0/* return_type */
	, RuntimeInvoker_RANKTYPE_t1145/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27412_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242296_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27412_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27412_0_0_0;
extern Il2CppType IEnumerator_1_t27412_1_0_0;
struct IEnumerator_1_t27412;
extern TypeInfo IEnumerator_1_t27412_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27412_GenericClass;
TypeInfo IEnumerator_1_t27412_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27412_MethodInfos/* methods */
	, IEnumerator_1_t27412_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27412_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27412_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27412_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27412_0_0_0/* byval_arg */
	, &IEnumerator_1_t27412_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27412_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1018.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1018MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern TypeInfo RANKTYPE_t1145_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124065_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisRANKTYPE_t1145_m197113_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisRANKTYPE_t1145_m197113 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisRANKTYPE_t1145_m197113_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124060_MethodInfo;
 void InternalEnumerator_1__ctor_m124060 (InternalEnumerator_1_t16604 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124061_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124061 (InternalEnumerator_1_t16604 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062 (InternalEnumerator_1_t16604 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124065(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124065_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&RANKTYPE_t1145_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124063_MethodInfo;
 void InternalEnumerator_1_Dispose_m124063 (InternalEnumerator_1_t16604 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124064_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124064 (InternalEnumerator_1_t16604 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124065_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124065 (InternalEnumerator_1_t16604 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisRANKTYPE_t1145_m197113(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisRANKTYPE_t1145_m197113_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16604____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16604, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16604____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16604, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16604_FieldInfos[] =
{
	&InternalEnumerator_1_t16604____array_FieldInfo,
	&InternalEnumerator_1_t16604____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16604____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16604_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124065_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16604____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16604_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16604_PropertyInfos[] =
{
	&InternalEnumerator_1_t16604____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16604____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16604_InternalEnumerator_1__ctor_m124060_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124060_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124060/* method */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16604_InternalEnumerator_1__ctor_m124060_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124061_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124061/* method */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062/* method */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124063_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124063/* method */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124064_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124064/* method */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern Il2CppType RANKTYPE_t1145_0_0_0;
extern void* RuntimeInvoker_RANKTYPE_t1145 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124065_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124065/* method */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* declaring_type */
	, &RANKTYPE_t1145_0_0_0/* return_type */
	, RuntimeInvoker_RANKTYPE_t1145/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16604_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124060_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124061_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062_MethodInfo,
	&InternalEnumerator_1_Dispose_m124063_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124064_MethodInfo,
	&InternalEnumerator_1_get_Current_m124065_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124064_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124061_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124063_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124065_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16604_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124062_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124064_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124061_MethodInfo,
	&InternalEnumerator_1_Dispose_m124063_MethodInfo,
	&InternalEnumerator_1_get_Current_m124065_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27412_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16604_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27412_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27412_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16604_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27412_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16604_0_0_0;
extern Il2CppType InternalEnumerator_1_t16604_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16604_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16604_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16604_MethodInfos/* methods */
	, InternalEnumerator_1_t16604_PropertyInfos/* properties */
	, InternalEnumerator_1_t16604_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16604_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16604_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16604_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16604_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16604_1_0_0/* this_arg */
	, InternalEnumerator_1_t16604_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16604_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16604)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>
extern MethodInfo ICollection_1_get_Count_m242297_MethodInfo;
static PropertyInfo ICollection_1_t31481____Count_PropertyInfo = 
{
	&ICollection_1_t31481_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242297_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242298_MethodInfo;
static PropertyInfo ICollection_1_t31481____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31481_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242298_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31481_PropertyInfos[] =
{
	&ICollection_1_t31481____Count_PropertyInfo,
	&ICollection_1_t31481____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242297_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242298_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RANKTYPE_t1145_0_0_0;
static ParameterInfo ICollection_1_t31481_ICollection_1_Add_m242299_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RANKTYPE_t1145_0_0_0},
};
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Add(T)
MethodInfo ICollection_1_Add_m242299_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31481_ICollection_1_Add_m242299_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Clear()
MethodInfo ICollection_1_Clear_m242300_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType RANKTYPE_t1145_0_0_0;
static ParameterInfo ICollection_1_t31481_ICollection_1_Contains_m242301_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RANKTYPE_t1145_0_0_0},
};
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242301_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31481_ICollection_1_Contains_m242301_ParameterInfos/* parameters */
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
extern Il2CppType RANKTYPEU5BU5D_t25537_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31481_ICollection_1_CopyTo_m242302_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &RANKTYPEU5BU5D_t25537_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242302_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31481_ICollection_1_CopyTo_m242302_ParameterInfos/* parameters */
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
extern Il2CppType RANKTYPE_t1145_0_0_0;
static ParameterInfo ICollection_1_t31481_ICollection_1_Remove_m242303_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RANKTYPE_t1145_0_0_0},
};
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242303_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31481_ICollection_1_Remove_m242303_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31481_MethodInfos[] =
{
	&ICollection_1_get_Count_m242297_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242298_MethodInfo,
	&ICollection_1_Add_m242299_MethodInfo,
	&ICollection_1_Clear_m242300_MethodInfo,
	&ICollection_1_Contains_m242301_MethodInfo,
	&ICollection_1_CopyTo_m242302_MethodInfo,
	&ICollection_1_Remove_m242303_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31483_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31481_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31481_0_0_0;
extern Il2CppType ICollection_1_t31481_1_0_0;
struct ICollection_1_t31481;
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31481_GenericClass;
TypeInfo ICollection_1_t31481_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31481_MethodInfos/* methods */
	, ICollection_1_t31481_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31481_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31481_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31481_0_0_0/* byval_arg */
	, &ICollection_1_t31481_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31481_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31483_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>
extern TypeInfo IEnumerable_1_t31483_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27412_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242304_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31483_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27412_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31483_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242304_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31483_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31483_0_0_0;
extern Il2CppType IEnumerable_1_t31483_1_0_0;
struct IEnumerable_1_t31483;
extern TypeInfo IEnumerable_1_t31483_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31483_GenericClass;
TypeInfo IEnumerable_1_t31483_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31483_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31483_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31483_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31483_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31483_0_0_0/* byval_arg */
	, &IEnumerable_1_t31483_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31483_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31482_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>
extern MethodInfo IList_1_get_Item_m242305_MethodInfo;
extern MethodInfo IList_1_set_Item_m242306_MethodInfo;
static PropertyInfo IList_1_t31482____Item_PropertyInfo = 
{
	&IList_1_t31482_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242305_MethodInfo/* get */
	, &IList_1_set_Item_m242306_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31482_PropertyInfos[] =
{
	&IList_1_t31482____Item_PropertyInfo,
	NULL
};
extern Il2CppType RANKTYPE_t1145_0_0_0;
static ParameterInfo IList_1_t31482_IList_1_IndexOf_m242307_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &RANKTYPE_t1145_0_0_0},
};
extern TypeInfo IList_1_t31482_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242307_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31482_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31482_IList_1_IndexOf_m242307_ParameterInfos/* parameters */
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
extern Il2CppType RANKTYPE_t1145_0_0_0;
static ParameterInfo IList_1_t31482_IList_1_Insert_m242308_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &RANKTYPE_t1145_0_0_0},
};
extern TypeInfo IList_1_t31482_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242308_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31482_IList_1_Insert_m242308_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31482_IList_1_RemoveAt_m242309_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31482_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242309_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31482_IList_1_RemoveAt_m242309_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31482_IList_1_get_Item_m242305_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31482_il2cpp_TypeInfo;
extern Il2CppType RANKTYPE_t1145_0_0_0;
extern void* RuntimeInvoker_RANKTYPE_t1145_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242305_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31482_il2cpp_TypeInfo/* declaring_type */
	, &RANKTYPE_t1145_0_0_0/* return_type */
	, RuntimeInvoker_RANKTYPE_t1145_Int32_t73/* invoker_method */
	, IList_1_t31482_IList_1_get_Item_m242305_ParameterInfos/* parameters */
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
extern Il2CppType RANKTYPE_t1145_0_0_0;
static ParameterInfo IList_1_t31482_IList_1_set_Item_m242306_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &RANKTYPE_t1145_0_0_0},
};
extern TypeInfo IList_1_t31482_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/RANKTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242306_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31482_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31482_IList_1_set_Item_m242306_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31482_MethodInfos[] =
{
	&IList_1_IndexOf_m242307_MethodInfo,
	&IList_1_Insert_m242308_MethodInfo,
	&IList_1_RemoveAt_m242309_MethodInfo,
	&IList_1_get_Item_m242305_MethodInfo,
	&IList_1_set_Item_m242306_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31481_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31483_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31482_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31481_il2cpp_TypeInfo,
	&IEnumerable_1_t31483_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31482_0_0_0;
extern Il2CppType IList_1_t31482_1_0_0;
struct IList_1_t31482;
extern TypeInfo IList_1_t31482_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31482_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31482_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31482_MethodInfos/* methods */
	, IList_1_t31482_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31482_il2cpp_TypeInfo/* element_class */
	, IList_1_t31482_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31482_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31482_0_0_0/* byval_arg */
	, &IList_1_t31482_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31482_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27413_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/MODELTYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_MODELTY.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>
extern MethodInfo IEnumerator_1_get_Current_m242310_MethodInfo;
static PropertyInfo IEnumerator_1_t27413____Current_PropertyInfo = 
{
	&IEnumerator_1_t27413_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242310_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27413_PropertyInfos[] =
{
	&IEnumerator_1_t27413____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27413_il2cpp_TypeInfo;
extern Il2CppType MODELTYPE_t1146_0_0_0;
extern void* RuntimeInvoker_MODELTYPE_t1146 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242310_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27413_il2cpp_TypeInfo/* declaring_type */
	, &MODELTYPE_t1146_0_0_0/* return_type */
	, RuntimeInvoker_MODELTYPE_t1146/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27413_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242310_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27413_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27413_0_0_0;
extern Il2CppType IEnumerator_1_t27413_1_0_0;
struct IEnumerator_1_t27413;
extern TypeInfo IEnumerator_1_t27413_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27413_GenericClass;
TypeInfo IEnumerator_1_t27413_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27413_MethodInfos/* methods */
	, IEnumerator_1_t27413_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27413_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27413_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27413_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27413_0_0_0/* byval_arg */
	, &IEnumerator_1_t27413_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27413_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1019.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1019MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern TypeInfo MODELTYPE_t1146_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124071_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMODELTYPE_t1146_m197124_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMODELTYPE_t1146_m197124 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMODELTYPE_t1146_m197124_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124066_MethodInfo;
 void InternalEnumerator_1__ctor_m124066 (InternalEnumerator_1_t16605 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124067_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124067 (InternalEnumerator_1_t16605 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068 (InternalEnumerator_1_t16605 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124071(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124071_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MODELTYPE_t1146_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124069_MethodInfo;
 void InternalEnumerator_1_Dispose_m124069 (InternalEnumerator_1_t16605 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124070_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124070 (InternalEnumerator_1_t16605 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124071_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124071 (InternalEnumerator_1_t16605 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMODELTYPE_t1146_m197124(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMODELTYPE_t1146_m197124_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16605____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16605, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16605____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16605, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16605_FieldInfos[] =
{
	&InternalEnumerator_1_t16605____array_FieldInfo,
	&InternalEnumerator_1_t16605____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16605____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16605_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124071_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16605____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16605_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124071_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16605_PropertyInfos[] =
{
	&InternalEnumerator_1_t16605____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16605____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16605_InternalEnumerator_1__ctor_m124066_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124066_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124066/* method */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16605_InternalEnumerator_1__ctor_m124066_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124067_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124067/* method */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068/* method */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124069_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124069/* method */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124070_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124070/* method */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern Il2CppType MODELTYPE_t1146_0_0_0;
extern void* RuntimeInvoker_MODELTYPE_t1146 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124071_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124071/* method */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* declaring_type */
	, &MODELTYPE_t1146_0_0_0/* return_type */
	, RuntimeInvoker_MODELTYPE_t1146/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16605_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124066_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124067_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068_MethodInfo,
	&InternalEnumerator_1_Dispose_m124069_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124070_MethodInfo,
	&InternalEnumerator_1_get_Current_m124071_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124070_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124067_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124069_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124071_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16605_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124068_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124070_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124067_MethodInfo,
	&InternalEnumerator_1_Dispose_m124069_MethodInfo,
	&InternalEnumerator_1_get_Current_m124071_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27413_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16605_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27413_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27413_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16605_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27413_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16605_0_0_0;
extern Il2CppType InternalEnumerator_1_t16605_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16605_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16605_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16605_MethodInfos/* methods */
	, InternalEnumerator_1_t16605_PropertyInfos/* properties */
	, InternalEnumerator_1_t16605_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16605_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16605_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16605_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16605_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16605_1_0_0/* this_arg */
	, InternalEnumerator_1_t16605_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16605_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16605)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>
extern MethodInfo ICollection_1_get_Count_m242311_MethodInfo;
static PropertyInfo ICollection_1_t31484____Count_PropertyInfo = 
{
	&ICollection_1_t31484_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242311_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242312_MethodInfo;
static PropertyInfo ICollection_1_t31484____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31484_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242312_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31484_PropertyInfos[] =
{
	&ICollection_1_t31484____Count_PropertyInfo,
	&ICollection_1_t31484____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242311_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242312_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MODELTYPE_t1146_0_0_0;
static ParameterInfo ICollection_1_t31484_ICollection_1_Add_m242313_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MODELTYPE_t1146_0_0_0},
};
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Add(T)
MethodInfo ICollection_1_Add_m242313_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31484_ICollection_1_Add_m242313_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Clear()
MethodInfo ICollection_1_Clear_m242314_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MODELTYPE_t1146_0_0_0;
static ParameterInfo ICollection_1_t31484_ICollection_1_Contains_m242315_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MODELTYPE_t1146_0_0_0},
};
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242315_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31484_ICollection_1_Contains_m242315_ParameterInfos/* parameters */
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
extern Il2CppType MODELTYPEU5BU5D_t25538_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31484_ICollection_1_CopyTo_m242316_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MODELTYPEU5BU5D_t25538_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242316_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31484_ICollection_1_CopyTo_m242316_ParameterInfos/* parameters */
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
extern Il2CppType MODELTYPE_t1146_0_0_0;
static ParameterInfo ICollection_1_t31484_ICollection_1_Remove_m242317_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MODELTYPE_t1146_0_0_0},
};
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242317_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31484_ICollection_1_Remove_m242317_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31484_MethodInfos[] =
{
	&ICollection_1_get_Count_m242311_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242312_MethodInfo,
	&ICollection_1_Add_m242313_MethodInfo,
	&ICollection_1_Clear_m242314_MethodInfo,
	&ICollection_1_Contains_m242315_MethodInfo,
	&ICollection_1_CopyTo_m242316_MethodInfo,
	&ICollection_1_Remove_m242317_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31486_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31484_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31484_0_0_0;
extern Il2CppType ICollection_1_t31484_1_0_0;
struct ICollection_1_t31484;
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31484_GenericClass;
TypeInfo ICollection_1_t31484_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31484_MethodInfos/* methods */
	, ICollection_1_t31484_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31484_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31484_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31484_0_0_0/* byval_arg */
	, &ICollection_1_t31484_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31484_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31486_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>
extern TypeInfo IEnumerable_1_t31486_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27413_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242318_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31486_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27413_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31486_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242318_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31486_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31486_0_0_0;
extern Il2CppType IEnumerable_1_t31486_1_0_0;
struct IEnumerable_1_t31486;
extern TypeInfo IEnumerable_1_t31486_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31486_GenericClass;
TypeInfo IEnumerable_1_t31486_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31486_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31486_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31486_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31486_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31486_0_0_0/* byval_arg */
	, &IEnumerable_1_t31486_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31486_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31485_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>
extern MethodInfo IList_1_get_Item_m242319_MethodInfo;
extern MethodInfo IList_1_set_Item_m242320_MethodInfo;
static PropertyInfo IList_1_t31485____Item_PropertyInfo = 
{
	&IList_1_t31485_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242319_MethodInfo/* get */
	, &IList_1_set_Item_m242320_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31485_PropertyInfos[] =
{
	&IList_1_t31485____Item_PropertyInfo,
	NULL
};
extern Il2CppType MODELTYPE_t1146_0_0_0;
static ParameterInfo IList_1_t31485_IList_1_IndexOf_m242321_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MODELTYPE_t1146_0_0_0},
};
extern TypeInfo IList_1_t31485_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242321_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31485_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31485_IList_1_IndexOf_m242321_ParameterInfos/* parameters */
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
extern Il2CppType MODELTYPE_t1146_0_0_0;
static ParameterInfo IList_1_t31485_IList_1_Insert_m242322_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MODELTYPE_t1146_0_0_0},
};
extern TypeInfo IList_1_t31485_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242322_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31485_IList_1_Insert_m242322_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31485_IList_1_RemoveAt_m242323_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31485_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242323_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31485_IList_1_RemoveAt_m242323_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31485_IList_1_get_Item_m242319_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31485_il2cpp_TypeInfo;
extern Il2CppType MODELTYPE_t1146_0_0_0;
extern void* RuntimeInvoker_MODELTYPE_t1146_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242319_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31485_il2cpp_TypeInfo/* declaring_type */
	, &MODELTYPE_t1146_0_0_0/* return_type */
	, RuntimeInvoker_MODELTYPE_t1146_Int32_t73/* invoker_method */
	, IList_1_t31485_IList_1_get_Item_m242319_ParameterInfos/* parameters */
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
extern Il2CppType MODELTYPE_t1146_0_0_0;
static ParameterInfo IList_1_t31485_IList_1_set_Item_m242320_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MODELTYPE_t1146_0_0_0},
};
extern TypeInfo IList_1_t31485_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/MODELTYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242320_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31485_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31485_IList_1_set_Item_m242320_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31485_MethodInfos[] =
{
	&IList_1_IndexOf_m242321_MethodInfo,
	&IList_1_Insert_m242322_MethodInfo,
	&IList_1_RemoveAt_m242323_MethodInfo,
	&IList_1_get_Item_m242319_MethodInfo,
	&IList_1_set_Item_m242320_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31484_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31486_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31485_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31484_il2cpp_TypeInfo,
	&IEnumerable_1_t31486_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31485_0_0_0;
extern Il2CppType IList_1_t31485_1_0_0;
struct IList_1_t31485;
extern TypeInfo IList_1_t31485_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31485_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31485_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31485_MethodInfos/* methods */
	, IList_1_t31485_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31485_il2cpp_TypeInfo/* element_class */
	, IList_1_t31485_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31485_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31485_0_0_0/* byval_arg */
	, &IList_1_t31485_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31485_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27414_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_TLI_COP.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>
extern MethodInfo IEnumerator_1_get_Current_m242324_MethodInfo;
static PropertyInfo IEnumerator_1_t27414____Current_PropertyInfo = 
{
	&IEnumerator_1_t27414_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242324_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27414_PropertyInfos[] =
{
	&IEnumerator_1_t27414____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27414_il2cpp_TypeInfo;
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
extern void* RuntimeInvoker_TLI_COPYSCENEID_t1147 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242324_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27414_il2cpp_TypeInfo/* declaring_type */
	, &TLI_COPYSCENEID_t1147_0_0_0/* return_type */
	, RuntimeInvoker_TLI_COPYSCENEID_t1147/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27414_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242324_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27414_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27414_0_0_0;
extern Il2CppType IEnumerator_1_t27414_1_0_0;
struct IEnumerator_1_t27414;
extern TypeInfo IEnumerator_1_t27414_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27414_GenericClass;
TypeInfo IEnumerator_1_t27414_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27414_MethodInfos/* methods */
	, IEnumerator_1_t27414_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27414_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27414_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27414_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27414_0_0_0/* byval_arg */
	, &IEnumerator_1_t27414_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27414_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1020.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1020MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern TypeInfo TLI_COPYSCENEID_t1147_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124077_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTLI_COPYSCENEID_t1147_m197135_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTLI_COPYSCENEID_t1147_m197135 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisTLI_COPYSCENEID_t1147_m197135_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124072_MethodInfo;
 void InternalEnumerator_1__ctor_m124072 (InternalEnumerator_1_t16606 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124073_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124073 (InternalEnumerator_1_t16606 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074 (InternalEnumerator_1_t16606 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124077(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124077_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TLI_COPYSCENEID_t1147_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124075_MethodInfo;
 void InternalEnumerator_1_Dispose_m124075 (InternalEnumerator_1_t16606 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124076_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124076 (InternalEnumerator_1_t16606 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124077_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124077 (InternalEnumerator_1_t16606 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTLI_COPYSCENEID_t1147_m197135(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTLI_COPYSCENEID_t1147_m197135_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16606____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16606, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16606____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16606, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16606_FieldInfos[] =
{
	&InternalEnumerator_1_t16606____array_FieldInfo,
	&InternalEnumerator_1_t16606____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16606____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16606_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124077_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16606____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16606_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124077_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16606_PropertyInfos[] =
{
	&InternalEnumerator_1_t16606____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16606____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16606_InternalEnumerator_1__ctor_m124072_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124072_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124072/* method */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16606_InternalEnumerator_1__ctor_m124072_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124073_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124073/* method */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074/* method */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124075_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124075/* method */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124076_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124076/* method */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
extern void* RuntimeInvoker_TLI_COPYSCENEID_t1147 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124077_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124077/* method */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* declaring_type */
	, &TLI_COPYSCENEID_t1147_0_0_0/* return_type */
	, RuntimeInvoker_TLI_COPYSCENEID_t1147/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16606_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124072_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124073_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074_MethodInfo,
	&InternalEnumerator_1_Dispose_m124075_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124076_MethodInfo,
	&InternalEnumerator_1_get_Current_m124077_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124076_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124073_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124075_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124077_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16606_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124074_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124076_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124073_MethodInfo,
	&InternalEnumerator_1_Dispose_m124075_MethodInfo,
	&InternalEnumerator_1_get_Current_m124077_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27414_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16606_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27414_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27414_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16606_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27414_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16606_0_0_0;
extern Il2CppType InternalEnumerator_1_t16606_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16606_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16606_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16606_MethodInfos/* methods */
	, InternalEnumerator_1_t16606_PropertyInfos/* properties */
	, InternalEnumerator_1_t16606_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16606_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16606_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16606_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16606_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16606_1_0_0/* this_arg */
	, InternalEnumerator_1_t16606_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16606_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16606)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>
extern MethodInfo ICollection_1_get_Count_m242325_MethodInfo;
static PropertyInfo ICollection_1_t31487____Count_PropertyInfo = 
{
	&ICollection_1_t31487_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242325_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242326_MethodInfo;
static PropertyInfo ICollection_1_t31487____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31487_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242326_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31487_PropertyInfos[] =
{
	&ICollection_1_t31487____Count_PropertyInfo,
	&ICollection_1_t31487____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Count()
MethodInfo ICollection_1_get_Count_m242325_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242326_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
static ParameterInfo ICollection_1_t31487_ICollection_1_Add_m242327_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TLI_COPYSCENEID_t1147_0_0_0},
};
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Add(T)
MethodInfo ICollection_1_Add_m242327_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31487_ICollection_1_Add_m242327_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Clear()
MethodInfo ICollection_1_Clear_m242328_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
static ParameterInfo ICollection_1_t31487_ICollection_1_Contains_m242329_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TLI_COPYSCENEID_t1147_0_0_0},
};
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Contains(T)
MethodInfo ICollection_1_Contains_m242329_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31487_ICollection_1_Contains_m242329_ParameterInfos/* parameters */
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
extern Il2CppType TLI_COPYSCENEIDU5BU5D_t25539_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31487_ICollection_1_CopyTo_m242330_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TLI_COPYSCENEIDU5BU5D_t25539_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242330_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31487_ICollection_1_CopyTo_m242330_ParameterInfos/* parameters */
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
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
static ParameterInfo ICollection_1_t31487_ICollection_1_Remove_m242331_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TLI_COPYSCENEID_t1147_0_0_0},
};
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Remove(T)
MethodInfo ICollection_1_Remove_m242331_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31487_ICollection_1_Remove_m242331_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31487_MethodInfos[] =
{
	&ICollection_1_get_Count_m242325_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242326_MethodInfo,
	&ICollection_1_Add_m242327_MethodInfo,
	&ICollection_1_Clear_m242328_MethodInfo,
	&ICollection_1_Contains_m242329_MethodInfo,
	&ICollection_1_CopyTo_m242330_MethodInfo,
	&ICollection_1_Remove_m242331_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31489_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31487_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31487_0_0_0;
extern Il2CppType ICollection_1_t31487_1_0_0;
struct ICollection_1_t31487;
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31487_GenericClass;
TypeInfo ICollection_1_t31487_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31487_MethodInfos/* methods */
	, ICollection_1_t31487_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31487_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31487_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31487_0_0_0/* byval_arg */
	, &ICollection_1_t31487_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31487_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31489_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>
extern TypeInfo IEnumerable_1_t31489_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27414_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242332_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31489_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27414_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31489_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242332_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31489_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31489_0_0_0;
extern Il2CppType IEnumerable_1_t31489_1_0_0;
struct IEnumerable_1_t31489;
extern TypeInfo IEnumerable_1_t31489_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31489_GenericClass;
TypeInfo IEnumerable_1_t31489_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31489_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31489_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31489_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31489_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31489_0_0_0/* byval_arg */
	, &IEnumerable_1_t31489_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31489_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31488_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>
extern MethodInfo IList_1_get_Item_m242333_MethodInfo;
extern MethodInfo IList_1_set_Item_m242334_MethodInfo;
static PropertyInfo IList_1_t31488____Item_PropertyInfo = 
{
	&IList_1_t31488_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242333_MethodInfo/* get */
	, &IList_1_set_Item_m242334_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31488_PropertyInfos[] =
{
	&IList_1_t31488____Item_PropertyInfo,
	NULL
};
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
static ParameterInfo IList_1_t31488_IList_1_IndexOf_m242335_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TLI_COPYSCENEID_t1147_0_0_0},
};
extern TypeInfo IList_1_t31488_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242335_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31488_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31488_IList_1_IndexOf_m242335_ParameterInfos/* parameters */
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
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
static ParameterInfo IList_1_t31488_IList_1_Insert_m242336_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TLI_COPYSCENEID_t1147_0_0_0},
};
extern TypeInfo IList_1_t31488_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242336_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31488_IList_1_Insert_m242336_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31488_IList_1_RemoveAt_m242337_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31488_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242337_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31488_IList_1_RemoveAt_m242337_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31488_IList_1_get_Item_m242333_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31488_il2cpp_TypeInfo;
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
extern void* RuntimeInvoker_TLI_COPYSCENEID_t1147_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242333_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31488_il2cpp_TypeInfo/* declaring_type */
	, &TLI_COPYSCENEID_t1147_0_0_0/* return_type */
	, RuntimeInvoker_TLI_COPYSCENEID_t1147_Int32_t73/* invoker_method */
	, IList_1_t31488_IList_1_get_Item_m242333_ParameterInfos/* parameters */
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
extern Il2CppType TLI_COPYSCENEID_t1147_0_0_0;
static ParameterInfo IList_1_t31488_IList_1_set_Item_m242334_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TLI_COPYSCENEID_t1147_0_0_0},
};
extern TypeInfo IList_1_t31488_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/TLI_COPYSCENEID>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242334_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31488_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31488_IList_1_set_Item_m242334_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31488_MethodInfos[] =
{
	&IList_1_IndexOf_m242335_MethodInfo,
	&IList_1_Insert_m242336_MethodInfo,
	&IList_1_RemoveAt_m242337_MethodInfo,
	&IList_1_get_Item_m242333_MethodInfo,
	&IList_1_set_Item_m242334_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31487_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31489_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31488_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31487_il2cpp_TypeInfo,
	&IEnumerable_1_t31489_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31488_0_0_0;
extern Il2CppType IList_1_t31488_1_0_0;
struct IList_1_t31488;
extern TypeInfo IList_1_t31488_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31488_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31488_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31488_MethodInfos/* methods */
	, IList_1_t31488_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31488_il2cpp_TypeInfo/* element_class */
	, IList_1_t31488_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31488_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31488_0_0_0/* byval_arg */
	, &IList_1_t31488_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31488_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27415_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/FORCETYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_FORCETY.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>
extern MethodInfo IEnumerator_1_get_Current_m242338_MethodInfo;
static PropertyInfo IEnumerator_1_t27415____Current_PropertyInfo = 
{
	&IEnumerator_1_t27415_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242338_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27415_PropertyInfos[] =
{
	&IEnumerator_1_t27415____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27415_il2cpp_TypeInfo;
extern Il2CppType FORCETYPE_t1148_0_0_0;
extern void* RuntimeInvoker_FORCETYPE_t1148 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242338_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27415_il2cpp_TypeInfo/* declaring_type */
	, &FORCETYPE_t1148_0_0_0/* return_type */
	, RuntimeInvoker_FORCETYPE_t1148/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27415_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242338_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27415_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27415_0_0_0;
extern Il2CppType IEnumerator_1_t27415_1_0_0;
struct IEnumerator_1_t27415;
extern TypeInfo IEnumerator_1_t27415_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27415_GenericClass;
TypeInfo IEnumerator_1_t27415_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27415_MethodInfos/* methods */
	, IEnumerator_1_t27415_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27415_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27415_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27415_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27415_0_0_0/* byval_arg */
	, &IEnumerator_1_t27415_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27415_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1021.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1021MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern TypeInfo FORCETYPE_t1148_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124083_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFORCETYPE_t1148_m197146_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFORCETYPE_t1148_m197146 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisFORCETYPE_t1148_m197146_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124078_MethodInfo;
 void InternalEnumerator_1__ctor_m124078 (InternalEnumerator_1_t16607 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124079_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124079 (InternalEnumerator_1_t16607 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080 (InternalEnumerator_1_t16607 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124083(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124083_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FORCETYPE_t1148_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124081_MethodInfo;
 void InternalEnumerator_1_Dispose_m124081 (InternalEnumerator_1_t16607 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124082_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124082 (InternalEnumerator_1_t16607 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124083_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124083 (InternalEnumerator_1_t16607 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFORCETYPE_t1148_m197146(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFORCETYPE_t1148_m197146_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16607____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16607, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16607____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16607, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16607_FieldInfos[] =
{
	&InternalEnumerator_1_t16607____array_FieldInfo,
	&InternalEnumerator_1_t16607____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16607____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16607_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124083_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16607____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16607_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124083_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16607_PropertyInfos[] =
{
	&InternalEnumerator_1_t16607____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16607____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16607_InternalEnumerator_1__ctor_m124078_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124078_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124078/* method */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16607_InternalEnumerator_1__ctor_m124078_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124079_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124079/* method */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080/* method */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124081_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124081/* method */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124082_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124082/* method */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern Il2CppType FORCETYPE_t1148_0_0_0;
extern void* RuntimeInvoker_FORCETYPE_t1148 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124083_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124083/* method */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* declaring_type */
	, &FORCETYPE_t1148_0_0_0/* return_type */
	, RuntimeInvoker_FORCETYPE_t1148/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16607_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124078_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124079_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080_MethodInfo,
	&InternalEnumerator_1_Dispose_m124081_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124082_MethodInfo,
	&InternalEnumerator_1_get_Current_m124083_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124082_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124079_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124081_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124083_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16607_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124080_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124082_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124079_MethodInfo,
	&InternalEnumerator_1_Dispose_m124081_MethodInfo,
	&InternalEnumerator_1_get_Current_m124083_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27415_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16607_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27415_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27415_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16607_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27415_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16607_0_0_0;
extern Il2CppType InternalEnumerator_1_t16607_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16607_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16607_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16607_MethodInfos/* methods */
	, InternalEnumerator_1_t16607_PropertyInfos/* properties */
	, InternalEnumerator_1_t16607_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16607_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16607_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16607_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16607_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16607_1_0_0/* this_arg */
	, InternalEnumerator_1_t16607_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16607_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16607)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>
extern MethodInfo ICollection_1_get_Count_m242339_MethodInfo;
static PropertyInfo ICollection_1_t31490____Count_PropertyInfo = 
{
	&ICollection_1_t31490_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242339_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242340_MethodInfo;
static PropertyInfo ICollection_1_t31490____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31490_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242340_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31490_PropertyInfos[] =
{
	&ICollection_1_t31490____Count_PropertyInfo,
	&ICollection_1_t31490____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242339_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242340_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FORCETYPE_t1148_0_0_0;
static ParameterInfo ICollection_1_t31490_ICollection_1_Add_m242341_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FORCETYPE_t1148_0_0_0},
};
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Add(T)
MethodInfo ICollection_1_Add_m242341_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31490_ICollection_1_Add_m242341_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Clear()
MethodInfo ICollection_1_Clear_m242342_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FORCETYPE_t1148_0_0_0;
static ParameterInfo ICollection_1_t31490_ICollection_1_Contains_m242343_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FORCETYPE_t1148_0_0_0},
};
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242343_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31490_ICollection_1_Contains_m242343_ParameterInfos/* parameters */
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
extern Il2CppType FORCETYPEU5BU5D_t25540_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31490_ICollection_1_CopyTo_m242344_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FORCETYPEU5BU5D_t25540_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242344_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31490_ICollection_1_CopyTo_m242344_ParameterInfos/* parameters */
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
extern Il2CppType FORCETYPE_t1148_0_0_0;
static ParameterInfo ICollection_1_t31490_ICollection_1_Remove_m242345_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FORCETYPE_t1148_0_0_0},
};
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242345_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31490_ICollection_1_Remove_m242345_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31490_MethodInfos[] =
{
	&ICollection_1_get_Count_m242339_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242340_MethodInfo,
	&ICollection_1_Add_m242341_MethodInfo,
	&ICollection_1_Clear_m242342_MethodInfo,
	&ICollection_1_Contains_m242343_MethodInfo,
	&ICollection_1_CopyTo_m242344_MethodInfo,
	&ICollection_1_Remove_m242345_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31492_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31490_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31490_0_0_0;
extern Il2CppType ICollection_1_t31490_1_0_0;
struct ICollection_1_t31490;
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31490_GenericClass;
TypeInfo ICollection_1_t31490_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31490_MethodInfos/* methods */
	, ICollection_1_t31490_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31490_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31490_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31490_0_0_0/* byval_arg */
	, &ICollection_1_t31490_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31490_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31492_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>
extern TypeInfo IEnumerable_1_t31492_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27415_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242346_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31492_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27415_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31492_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242346_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31492_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31492_0_0_0;
extern Il2CppType IEnumerable_1_t31492_1_0_0;
struct IEnumerable_1_t31492;
extern TypeInfo IEnumerable_1_t31492_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31492_GenericClass;
TypeInfo IEnumerable_1_t31492_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31492_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31492_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31492_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31492_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31492_0_0_0/* byval_arg */
	, &IEnumerable_1_t31492_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31492_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31491_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>
extern MethodInfo IList_1_get_Item_m242347_MethodInfo;
extern MethodInfo IList_1_set_Item_m242348_MethodInfo;
static PropertyInfo IList_1_t31491____Item_PropertyInfo = 
{
	&IList_1_t31491_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242347_MethodInfo/* get */
	, &IList_1_set_Item_m242348_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31491_PropertyInfos[] =
{
	&IList_1_t31491____Item_PropertyInfo,
	NULL
};
extern Il2CppType FORCETYPE_t1148_0_0_0;
static ParameterInfo IList_1_t31491_IList_1_IndexOf_m242349_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FORCETYPE_t1148_0_0_0},
};
extern TypeInfo IList_1_t31491_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242349_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31491_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31491_IList_1_IndexOf_m242349_ParameterInfos/* parameters */
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
extern Il2CppType FORCETYPE_t1148_0_0_0;
static ParameterInfo IList_1_t31491_IList_1_Insert_m242350_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FORCETYPE_t1148_0_0_0},
};
extern TypeInfo IList_1_t31491_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242350_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31491_IList_1_Insert_m242350_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31491_IList_1_RemoveAt_m242351_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31491_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242351_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31491_IList_1_RemoveAt_m242351_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31491_IList_1_get_Item_m242347_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31491_il2cpp_TypeInfo;
extern Il2CppType FORCETYPE_t1148_0_0_0;
extern void* RuntimeInvoker_FORCETYPE_t1148_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242347_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31491_il2cpp_TypeInfo/* declaring_type */
	, &FORCETYPE_t1148_0_0_0/* return_type */
	, RuntimeInvoker_FORCETYPE_t1148_Int32_t73/* invoker_method */
	, IList_1_t31491_IList_1_get_Item_m242347_ParameterInfos/* parameters */
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
extern Il2CppType FORCETYPE_t1148_0_0_0;
static ParameterInfo IList_1_t31491_IList_1_set_Item_m242348_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FORCETYPE_t1148_0_0_0},
};
extern TypeInfo IList_1_t31491_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/FORCETYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242348_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31491_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31491_IList_1_set_Item_m242348_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31491_MethodInfos[] =
{
	&IList_1_IndexOf_m242349_MethodInfo,
	&IList_1_Insert_m242350_MethodInfo,
	&IList_1_RemoveAt_m242351_MethodInfo,
	&IList_1_get_Item_m242347_MethodInfo,
	&IList_1_set_Item_m242348_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31490_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31492_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31491_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31490_il2cpp_TypeInfo,
	&IEnumerable_1_t31492_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31491_0_0_0;
extern Il2CppType IList_1_t31491_1_0_0;
struct IList_1_t31491;
extern TypeInfo IList_1_t31491_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31491_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31491_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31491_MethodInfos/* methods */
	, IList_1_t31491_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31491_il2cpp_TypeInfo/* element_class */
	, IList_1_t31491_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31491_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31491_0_0_0/* byval_arg */
	, &IList_1_t31491_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31491_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27416_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_REVIEW_.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242352_MethodInfo;
static PropertyInfo IEnumerator_1_t27416____Current_PropertyInfo = 
{
	&IEnumerator_1_t27416_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242352_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27416_PropertyInfos[] =
{
	&IEnumerator_1_t27416____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27416_il2cpp_TypeInfo;
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
extern void* RuntimeInvoker_REVIEW_TYPE_t1149 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242352_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27416_il2cpp_TypeInfo/* declaring_type */
	, &REVIEW_TYPE_t1149_0_0_0/* return_type */
	, RuntimeInvoker_REVIEW_TYPE_t1149/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27416_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242352_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27416_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27416_0_0_0;
extern Il2CppType IEnumerator_1_t27416_1_0_0;
struct IEnumerator_1_t27416;
extern TypeInfo IEnumerator_1_t27416_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27416_GenericClass;
TypeInfo IEnumerator_1_t27416_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27416_MethodInfos/* methods */
	, IEnumerator_1_t27416_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27416_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27416_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27416_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27416_0_0_0/* byval_arg */
	, &IEnumerator_1_t27416_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27416_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1022.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1022MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern TypeInfo REVIEW_TYPE_t1149_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124089_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisREVIEW_TYPE_t1149_m197157_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisREVIEW_TYPE_t1149_m197157 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisREVIEW_TYPE_t1149_m197157_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124084_MethodInfo;
 void InternalEnumerator_1__ctor_m124084 (InternalEnumerator_1_t16608 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124085_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124085 (InternalEnumerator_1_t16608 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086 (InternalEnumerator_1_t16608 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124089(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124089_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&REVIEW_TYPE_t1149_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124087_MethodInfo;
 void InternalEnumerator_1_Dispose_m124087 (InternalEnumerator_1_t16608 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124088_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124088 (InternalEnumerator_1_t16608 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124089_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124089 (InternalEnumerator_1_t16608 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisREVIEW_TYPE_t1149_m197157(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisREVIEW_TYPE_t1149_m197157_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16608____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16608, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16608____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16608, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16608_FieldInfos[] =
{
	&InternalEnumerator_1_t16608____array_FieldInfo,
	&InternalEnumerator_1_t16608____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16608____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16608_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124089_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16608____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16608_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124089_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16608_PropertyInfos[] =
{
	&InternalEnumerator_1_t16608____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16608____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16608_InternalEnumerator_1__ctor_m124084_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124084_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124084/* method */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16608_InternalEnumerator_1__ctor_m124084_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124085_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124085/* method */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086/* method */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124087_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124087/* method */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124088_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124088/* method */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
extern void* RuntimeInvoker_REVIEW_TYPE_t1149 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124089_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124089/* method */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* declaring_type */
	, &REVIEW_TYPE_t1149_0_0_0/* return_type */
	, RuntimeInvoker_REVIEW_TYPE_t1149/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16608_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124084_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124085_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086_MethodInfo,
	&InternalEnumerator_1_Dispose_m124087_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124088_MethodInfo,
	&InternalEnumerator_1_get_Current_m124089_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124088_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124085_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124087_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124089_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16608_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124086_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124088_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124085_MethodInfo,
	&InternalEnumerator_1_Dispose_m124087_MethodInfo,
	&InternalEnumerator_1_get_Current_m124089_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27416_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16608_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27416_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27416_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16608_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27416_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16608_0_0_0;
extern Il2CppType InternalEnumerator_1_t16608_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16608_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16608_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16608_MethodInfos/* methods */
	, InternalEnumerator_1_t16608_PropertyInfos/* properties */
	, InternalEnumerator_1_t16608_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16608_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16608_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16608_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16608_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16608_1_0_0/* this_arg */
	, InternalEnumerator_1_t16608_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16608_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16608)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>
extern MethodInfo ICollection_1_get_Count_m242353_MethodInfo;
static PropertyInfo ICollection_1_t31493____Count_PropertyInfo = 
{
	&ICollection_1_t31493_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242353_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242354_MethodInfo;
static PropertyInfo ICollection_1_t31493____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31493_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242354_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31493_PropertyInfos[] =
{
	&ICollection_1_t31493____Count_PropertyInfo,
	&ICollection_1_t31493____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242353_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242354_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
static ParameterInfo ICollection_1_t31493_ICollection_1_Add_m242355_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &REVIEW_TYPE_t1149_0_0_0},
};
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242355_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31493_ICollection_1_Add_m242355_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242356_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
static ParameterInfo ICollection_1_t31493_ICollection_1_Contains_m242357_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &REVIEW_TYPE_t1149_0_0_0},
};
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242357_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31493_ICollection_1_Contains_m242357_ParameterInfos/* parameters */
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
extern Il2CppType REVIEW_TYPEU5BU5D_t25541_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31493_ICollection_1_CopyTo_m242358_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &REVIEW_TYPEU5BU5D_t25541_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242358_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31493_ICollection_1_CopyTo_m242358_ParameterInfos/* parameters */
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
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
static ParameterInfo ICollection_1_t31493_ICollection_1_Remove_m242359_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &REVIEW_TYPE_t1149_0_0_0},
};
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242359_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31493_ICollection_1_Remove_m242359_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31493_MethodInfos[] =
{
	&ICollection_1_get_Count_m242353_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242354_MethodInfo,
	&ICollection_1_Add_m242355_MethodInfo,
	&ICollection_1_Clear_m242356_MethodInfo,
	&ICollection_1_Contains_m242357_MethodInfo,
	&ICollection_1_CopyTo_m242358_MethodInfo,
	&ICollection_1_Remove_m242359_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31495_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31493_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31493_0_0_0;
extern Il2CppType ICollection_1_t31493_1_0_0;
struct ICollection_1_t31493;
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31493_GenericClass;
TypeInfo ICollection_1_t31493_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31493_MethodInfos/* methods */
	, ICollection_1_t31493_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31493_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31493_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31493_0_0_0/* byval_arg */
	, &ICollection_1_t31493_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31493_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31495_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>
extern TypeInfo IEnumerable_1_t31495_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27416_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242360_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31495_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27416_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31495_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242360_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31495_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31495_0_0_0;
extern Il2CppType IEnumerable_1_t31495_1_0_0;
struct IEnumerable_1_t31495;
extern TypeInfo IEnumerable_1_t31495_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31495_GenericClass;
TypeInfo IEnumerable_1_t31495_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31495_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31495_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31495_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31495_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31495_0_0_0/* byval_arg */
	, &IEnumerable_1_t31495_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31495_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31494_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>
extern MethodInfo IList_1_get_Item_m242361_MethodInfo;
extern MethodInfo IList_1_set_Item_m242362_MethodInfo;
static PropertyInfo IList_1_t31494____Item_PropertyInfo = 
{
	&IList_1_t31494_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242361_MethodInfo/* get */
	, &IList_1_set_Item_m242362_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31494_PropertyInfos[] =
{
	&IList_1_t31494____Item_PropertyInfo,
	NULL
};
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
static ParameterInfo IList_1_t31494_IList_1_IndexOf_m242363_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &REVIEW_TYPE_t1149_0_0_0},
};
extern TypeInfo IList_1_t31494_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242363_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31494_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31494_IList_1_IndexOf_m242363_ParameterInfos/* parameters */
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
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
static ParameterInfo IList_1_t31494_IList_1_Insert_m242364_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &REVIEW_TYPE_t1149_0_0_0},
};
extern TypeInfo IList_1_t31494_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242364_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31494_IList_1_Insert_m242364_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31494_IList_1_RemoveAt_m242365_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31494_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242365_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31494_IList_1_RemoveAt_m242365_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31494_IList_1_get_Item_m242361_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31494_il2cpp_TypeInfo;
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
extern void* RuntimeInvoker_REVIEW_TYPE_t1149_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242361_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31494_il2cpp_TypeInfo/* declaring_type */
	, &REVIEW_TYPE_t1149_0_0_0/* return_type */
	, RuntimeInvoker_REVIEW_TYPE_t1149_Int32_t73/* invoker_method */
	, IList_1_t31494_IList_1_get_Item_m242361_ParameterInfos/* parameters */
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
extern Il2CppType REVIEW_TYPE_t1149_0_0_0;
static ParameterInfo IList_1_t31494_IList_1_set_Item_m242362_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &REVIEW_TYPE_t1149_0_0_0},
};
extern TypeInfo IList_1_t31494_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/REVIEW_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242362_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31494_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31494_IList_1_set_Item_m242362_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31494_MethodInfos[] =
{
	&IList_1_IndexOf_m242363_MethodInfo,
	&IList_1_Insert_m242364_MethodInfo,
	&IList_1_RemoveAt_m242365_MethodInfo,
	&IList_1_get_Item_m242361_MethodInfo,
	&IList_1_set_Item_m242362_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31493_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31495_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31494_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31493_il2cpp_TypeInfo,
	&IEnumerable_1_t31495_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31494_0_0_0;
extern Il2CppType IList_1_t31494_1_0_0;
struct IList_1_t31494;
extern TypeInfo IList_1_t31494_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31494_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31494_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31494_MethodInfos/* methods */
	, IList_1_t31494_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31494_il2cpp_TypeInfo/* element_class */
	, IList_1_t31494_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31494_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31494_0_0_0/* byval_arg */
	, &IList_1_t31494_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31494_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27417_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_GOOGLEP.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242366_MethodInfo;
static PropertyInfo IEnumerator_1_t27417____Current_PropertyInfo = 
{
	&IEnumerator_1_t27417_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242366_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27417_PropertyInfos[] =
{
	&IEnumerator_1_t27417____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27417_il2cpp_TypeInfo;
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
extern void* RuntimeInvoker_GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242366_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27417_il2cpp_TypeInfo/* declaring_type */
	, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0/* return_type */
	, RuntimeInvoker_GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27417_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242366_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27417_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27417_0_0_0;
extern Il2CppType IEnumerator_1_t27417_1_0_0;
struct IEnumerator_1_t27417;
extern TypeInfo IEnumerator_1_t27417_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27417_GenericClass;
TypeInfo IEnumerator_1_t27417_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27417_MethodInfos/* methods */
	, IEnumerator_1_t27417_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27417_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27417_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27417_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27417_0_0_0/* byval_arg */
	, &IEnumerator_1_t27417_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27417_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1023.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1023MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern TypeInfo GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124095_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_m197168_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_m197168 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisGOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_m197168_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124090_MethodInfo;
 void InternalEnumerator_1__ctor_m124090 (InternalEnumerator_1_t16609 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124091_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124091 (InternalEnumerator_1_t16609 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092 (InternalEnumerator_1_t16609 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124095(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124095_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124093_MethodInfo;
 void InternalEnumerator_1_Dispose_m124093 (InternalEnumerator_1_t16609 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124094_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124094 (InternalEnumerator_1_t16609 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124095_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124095 (InternalEnumerator_1_t16609 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_m197168(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_m197168_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16609____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16609, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16609____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16609, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16609_FieldInfos[] =
{
	&InternalEnumerator_1_t16609____array_FieldInfo,
	&InternalEnumerator_1_t16609____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16609____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16609_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124095_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16609____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16609_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124095_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16609_PropertyInfos[] =
{
	&InternalEnumerator_1_t16609____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16609____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16609_InternalEnumerator_1__ctor_m124090_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124090_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124090/* method */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16609_InternalEnumerator_1__ctor_m124090_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124091_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124091/* method */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092/* method */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124093_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124093/* method */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124094_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124094/* method */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
extern void* RuntimeInvoker_GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124095_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124095/* method */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* declaring_type */
	, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0/* return_type */
	, RuntimeInvoker_GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16609_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124090_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124091_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092_MethodInfo,
	&InternalEnumerator_1_Dispose_m124093_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124094_MethodInfo,
	&InternalEnumerator_1_get_Current_m124095_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124094_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124091_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124093_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124095_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16609_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124092_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124094_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124091_MethodInfo,
	&InternalEnumerator_1_Dispose_m124093_MethodInfo,
	&InternalEnumerator_1_get_Current_m124095_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27417_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16609_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27417_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27417_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16609_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27417_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16609_0_0_0;
extern Il2CppType InternalEnumerator_1_t16609_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16609_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16609_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16609_MethodInfos/* methods */
	, InternalEnumerator_1_t16609_PropertyInfos/* properties */
	, InternalEnumerator_1_t16609_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16609_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16609_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16609_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16609_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16609_1_0_0/* this_arg */
	, InternalEnumerator_1_t16609_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16609_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16609)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>
extern MethodInfo ICollection_1_get_Count_m242367_MethodInfo;
static PropertyInfo ICollection_1_t31496____Count_PropertyInfo = 
{
	&ICollection_1_t31496_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242367_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242368_MethodInfo;
static PropertyInfo ICollection_1_t31496____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31496_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242368_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31496_PropertyInfos[] =
{
	&ICollection_1_t31496____Count_PropertyInfo,
	&ICollection_1_t31496____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242367_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242368_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
static ParameterInfo ICollection_1_t31496_ICollection_1_Add_m242369_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0},
};
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242369_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31496_ICollection_1_Add_m242369_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242370_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
static ParameterInfo ICollection_1_t31496_ICollection_1_Contains_m242371_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0},
};
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242371_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31496_ICollection_1_Contains_m242371_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPEU5BU5D_t25542_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31496_ICollection_1_CopyTo_m242372_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_ACHIEVEMENT_TYPEU5BU5D_t25542_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242372_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31496_ICollection_1_CopyTo_m242372_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
static ParameterInfo ICollection_1_t31496_ICollection_1_Remove_m242373_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0},
};
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242373_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31496_ICollection_1_Remove_m242373_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31496_MethodInfos[] =
{
	&ICollection_1_get_Count_m242367_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242368_MethodInfo,
	&ICollection_1_Add_m242369_MethodInfo,
	&ICollection_1_Clear_m242370_MethodInfo,
	&ICollection_1_Contains_m242371_MethodInfo,
	&ICollection_1_CopyTo_m242372_MethodInfo,
	&ICollection_1_Remove_m242373_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31498_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31496_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31496_0_0_0;
extern Il2CppType ICollection_1_t31496_1_0_0;
struct ICollection_1_t31496;
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31496_GenericClass;
TypeInfo ICollection_1_t31496_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31496_MethodInfos/* methods */
	, ICollection_1_t31496_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31496_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31496_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31496_0_0_0/* byval_arg */
	, &ICollection_1_t31496_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31496_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31498_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>
extern TypeInfo IEnumerable_1_t31498_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27417_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242374_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31498_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27417_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31498_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242374_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31498_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31498_0_0_0;
extern Il2CppType IEnumerable_1_t31498_1_0_0;
struct IEnumerable_1_t31498;
extern TypeInfo IEnumerable_1_t31498_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31498_GenericClass;
TypeInfo IEnumerable_1_t31498_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31498_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31498_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31498_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31498_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31498_0_0_0/* byval_arg */
	, &IEnumerable_1_t31498_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31498_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31497_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>
extern MethodInfo IList_1_get_Item_m242375_MethodInfo;
extern MethodInfo IList_1_set_Item_m242376_MethodInfo;
static PropertyInfo IList_1_t31497____Item_PropertyInfo = 
{
	&IList_1_t31497_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242375_MethodInfo/* get */
	, &IList_1_set_Item_m242376_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31497_PropertyInfos[] =
{
	&IList_1_t31497____Item_PropertyInfo,
	NULL
};
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
static ParameterInfo IList_1_t31497_IList_1_IndexOf_m242377_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0},
};
extern TypeInfo IList_1_t31497_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242377_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31497_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31497_IList_1_IndexOf_m242377_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
static ParameterInfo IList_1_t31497_IList_1_Insert_m242378_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0},
};
extern TypeInfo IList_1_t31497_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242378_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31497_IList_1_Insert_m242378_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31497_IList_1_RemoveAt_m242379_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31497_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242379_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31497_IList_1_RemoveAt_m242379_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31497_IList_1_get_Item_m242375_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31497_il2cpp_TypeInfo;
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
extern void* RuntimeInvoker_GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242375_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31497_il2cpp_TypeInfo/* declaring_type */
	, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0/* return_type */
	, RuntimeInvoker_GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_Int32_t73/* invoker_method */
	, IList_1_t31497_IList_1_get_Item_m242375_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0;
static ParameterInfo IList_1_t31497_IList_1_set_Item_m242376_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_ACHIEVEMENT_TYPE_t1150_0_0_0},
};
extern TypeInfo IList_1_t31497_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_ACHIEVEMENT_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242376_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31497_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31497_IList_1_set_Item_m242376_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31497_MethodInfos[] =
{
	&IList_1_IndexOf_m242377_MethodInfo,
	&IList_1_Insert_m242378_MethodInfo,
	&IList_1_RemoveAt_m242379_MethodInfo,
	&IList_1_get_Item_m242375_MethodInfo,
	&IList_1_set_Item_m242376_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31496_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31498_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31497_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31496_il2cpp_TypeInfo,
	&IEnumerable_1_t31498_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31497_0_0_0;
extern Il2CppType IList_1_t31497_1_0_0;
struct IList_1_t31497;
extern TypeInfo IList_1_t31497_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31497_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31497_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31497_MethodInfos/* methods */
	, IList_1_t31497_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31497_il2cpp_TypeInfo/* element_class */
	, IList_1_t31497_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31497_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31497_0_0_0/* byval_arg */
	, &IList_1_t31497_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31497_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27418_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_GOOGLEP_0.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242380_MethodInfo;
static PropertyInfo IEnumerator_1_t27418____Current_PropertyInfo = 
{
	&IEnumerator_1_t27418_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242380_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27418_PropertyInfos[] =
{
	&IEnumerator_1_t27418____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27418_il2cpp_TypeInfo;
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
extern void* RuntimeInvoker_GOOGLEPLAY_RANK_TYPE_t1151 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242380_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27418_il2cpp_TypeInfo/* declaring_type */
	, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0/* return_type */
	, RuntimeInvoker_GOOGLEPLAY_RANK_TYPE_t1151/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27418_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242380_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27418_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27418_0_0_0;
extern Il2CppType IEnumerator_1_t27418_1_0_0;
struct IEnumerator_1_t27418;
extern TypeInfo IEnumerator_1_t27418_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27418_GenericClass;
TypeInfo IEnumerator_1_t27418_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27418_MethodInfos/* methods */
	, IEnumerator_1_t27418_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27418_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27418_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27418_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27418_0_0_0/* byval_arg */
	, &IEnumerator_1_t27418_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27418_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1024.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1024MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern TypeInfo GOOGLEPLAY_RANK_TYPE_t1151_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124101_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGOOGLEPLAY_RANK_TYPE_t1151_m197179_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGOOGLEPLAY_RANK_TYPE_t1151_m197179 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisGOOGLEPLAY_RANK_TYPE_t1151_m197179_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124096_MethodInfo;
 void InternalEnumerator_1__ctor_m124096 (InternalEnumerator_1_t16610 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124097_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124097 (InternalEnumerator_1_t16610 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098 (InternalEnumerator_1_t16610 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124101(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124101_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GOOGLEPLAY_RANK_TYPE_t1151_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124099_MethodInfo;
 void InternalEnumerator_1_Dispose_m124099 (InternalEnumerator_1_t16610 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124100_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124100 (InternalEnumerator_1_t16610 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124101_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124101 (InternalEnumerator_1_t16610 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGOOGLEPLAY_RANK_TYPE_t1151_m197179(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGOOGLEPLAY_RANK_TYPE_t1151_m197179_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16610____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16610, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16610____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16610, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16610_FieldInfos[] =
{
	&InternalEnumerator_1_t16610____array_FieldInfo,
	&InternalEnumerator_1_t16610____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16610____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16610_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124101_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16610____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16610_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124101_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16610_PropertyInfos[] =
{
	&InternalEnumerator_1_t16610____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16610____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16610_InternalEnumerator_1__ctor_m124096_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124096_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124096/* method */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16610_InternalEnumerator_1__ctor_m124096_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124097_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124097/* method */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098/* method */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124099_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124099/* method */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124100_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124100/* method */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
extern void* RuntimeInvoker_GOOGLEPLAY_RANK_TYPE_t1151 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124101_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124101/* method */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* declaring_type */
	, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0/* return_type */
	, RuntimeInvoker_GOOGLEPLAY_RANK_TYPE_t1151/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16610_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124096_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124097_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098_MethodInfo,
	&InternalEnumerator_1_Dispose_m124099_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124100_MethodInfo,
	&InternalEnumerator_1_get_Current_m124101_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124100_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124097_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124099_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124101_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16610_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124098_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124100_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124097_MethodInfo,
	&InternalEnumerator_1_Dispose_m124099_MethodInfo,
	&InternalEnumerator_1_get_Current_m124101_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27418_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16610_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27418_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27418_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16610_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27418_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16610_0_0_0;
extern Il2CppType InternalEnumerator_1_t16610_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16610_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16610_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16610_MethodInfos/* methods */
	, InternalEnumerator_1_t16610_PropertyInfos/* properties */
	, InternalEnumerator_1_t16610_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16610_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16610_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16610_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16610_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16610_1_0_0/* this_arg */
	, InternalEnumerator_1_t16610_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16610_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16610)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>
extern MethodInfo ICollection_1_get_Count_m242381_MethodInfo;
static PropertyInfo ICollection_1_t31499____Count_PropertyInfo = 
{
	&ICollection_1_t31499_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242381_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242382_MethodInfo;
static PropertyInfo ICollection_1_t31499____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31499_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242382_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31499_PropertyInfos[] =
{
	&ICollection_1_t31499____Count_PropertyInfo,
	&ICollection_1_t31499____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242381_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242382_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
static ParameterInfo ICollection_1_t31499_ICollection_1_Add_m242383_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0},
};
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242383_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31499_ICollection_1_Add_m242383_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242384_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
static ParameterInfo ICollection_1_t31499_ICollection_1_Contains_m242385_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0},
};
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242385_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31499_ICollection_1_Contains_m242385_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_RANK_TYPEU5BU5D_t25543_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31499_ICollection_1_CopyTo_m242386_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_RANK_TYPEU5BU5D_t25543_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242386_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31499_ICollection_1_CopyTo_m242386_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
static ParameterInfo ICollection_1_t31499_ICollection_1_Remove_m242387_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0},
};
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242387_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31499_ICollection_1_Remove_m242387_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31499_MethodInfos[] =
{
	&ICollection_1_get_Count_m242381_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242382_MethodInfo,
	&ICollection_1_Add_m242383_MethodInfo,
	&ICollection_1_Clear_m242384_MethodInfo,
	&ICollection_1_Contains_m242385_MethodInfo,
	&ICollection_1_CopyTo_m242386_MethodInfo,
	&ICollection_1_Remove_m242387_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31501_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31499_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31499_0_0_0;
extern Il2CppType ICollection_1_t31499_1_0_0;
struct ICollection_1_t31499;
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31499_GenericClass;
TypeInfo ICollection_1_t31499_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31499_MethodInfos/* methods */
	, ICollection_1_t31499_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31499_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31499_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31499_0_0_0/* byval_arg */
	, &ICollection_1_t31499_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31499_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31501_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>
extern TypeInfo IEnumerable_1_t31501_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27418_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242388_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31501_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27418_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31501_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242388_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31501_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31501_0_0_0;
extern Il2CppType IEnumerable_1_t31501_1_0_0;
struct IEnumerable_1_t31501;
extern TypeInfo IEnumerable_1_t31501_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31501_GenericClass;
TypeInfo IEnumerable_1_t31501_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31501_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31501_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31501_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31501_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31501_0_0_0/* byval_arg */
	, &IEnumerable_1_t31501_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31501_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31500_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>
extern MethodInfo IList_1_get_Item_m242389_MethodInfo;
extern MethodInfo IList_1_set_Item_m242390_MethodInfo;
static PropertyInfo IList_1_t31500____Item_PropertyInfo = 
{
	&IList_1_t31500_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242389_MethodInfo/* get */
	, &IList_1_set_Item_m242390_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31500_PropertyInfos[] =
{
	&IList_1_t31500____Item_PropertyInfo,
	NULL
};
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
static ParameterInfo IList_1_t31500_IList_1_IndexOf_m242391_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0},
};
extern TypeInfo IList_1_t31500_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242391_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31500_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31500_IList_1_IndexOf_m242391_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
static ParameterInfo IList_1_t31500_IList_1_Insert_m242392_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0},
};
extern TypeInfo IList_1_t31500_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242392_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31500_IList_1_Insert_m242392_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31500_IList_1_RemoveAt_m242393_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31500_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242393_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31500_IList_1_RemoveAt_m242393_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31500_IList_1_get_Item_m242389_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31500_il2cpp_TypeInfo;
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
extern void* RuntimeInvoker_GOOGLEPLAY_RANK_TYPE_t1151_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242389_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31500_il2cpp_TypeInfo/* declaring_type */
	, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0/* return_type */
	, RuntimeInvoker_GOOGLEPLAY_RANK_TYPE_t1151_Int32_t73/* invoker_method */
	, IList_1_t31500_IList_1_get_Item_m242389_ParameterInfos/* parameters */
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
extern Il2CppType GOOGLEPLAY_RANK_TYPE_t1151_0_0_0;
static ParameterInfo IList_1_t31500_IList_1_set_Item_m242390_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GOOGLEPLAY_RANK_TYPE_t1151_0_0_0},
};
extern TypeInfo IList_1_t31500_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/GOOGLEPLAY_RANK_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242390_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31500_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31500_IList_1_set_Item_m242390_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31500_MethodInfos[] =
{
	&IList_1_IndexOf_m242391_MethodInfo,
	&IList_1_Insert_m242392_MethodInfo,
	&IList_1_RemoveAt_m242393_MethodInfo,
	&IList_1_get_Item_m242389_MethodInfo,
	&IList_1_set_Item_m242390_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31499_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31501_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31500_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31499_il2cpp_TypeInfo,
	&IEnumerable_1_t31501_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31500_0_0_0;
extern Il2CppType IList_1_t31500_1_0_0;
struct IList_1_t31500;
extern TypeInfo IList_1_t31500_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31500_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31500_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31500_MethodInfos/* methods */
	, IList_1_t31500_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31500_il2cpp_TypeInfo/* element_class */
	, IList_1_t31500_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31500_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31500_0_0_0/* byval_arg */
	, &IList_1_t31500_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31500_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27419_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/InternationType
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_Interna.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>
extern MethodInfo IEnumerator_1_get_Current_m242394_MethodInfo;
static PropertyInfo IEnumerator_1_t27419____Current_PropertyInfo = 
{
	&IEnumerator_1_t27419_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242394_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27419_PropertyInfos[] =
{
	&IEnumerator_1_t27419____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27419_il2cpp_TypeInfo;
extern Il2CppType InternationType_t1152_0_0_0;
extern void* RuntimeInvoker_InternationType_t1152 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242394_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27419_il2cpp_TypeInfo/* declaring_type */
	, &InternationType_t1152_0_0_0/* return_type */
	, RuntimeInvoker_InternationType_t1152/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27419_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242394_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27419_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27419_0_0_0;
extern Il2CppType IEnumerator_1_t27419_1_0_0;
struct IEnumerator_1_t27419;
extern TypeInfo IEnumerator_1_t27419_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27419_GenericClass;
TypeInfo IEnumerator_1_t27419_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27419_MethodInfos/* methods */
	, IEnumerator_1_t27419_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27419_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27419_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27419_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27419_0_0_0/* byval_arg */
	, &IEnumerator_1_t27419_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27419_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1025.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1025MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern TypeInfo InternationType_t1152_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124107_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInternationType_t1152_m197190_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/InternationType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/InternationType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisInternationType_t1152_m197190 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisInternationType_t1152_m197190_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124102_MethodInfo;
 void InternalEnumerator_1__ctor_m124102 (InternalEnumerator_1_t16611 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124103_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124103 (InternalEnumerator_1_t16611 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104 (InternalEnumerator_1_t16611 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124107(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124107_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&InternationType_t1152_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124105_MethodInfo;
 void InternalEnumerator_1_Dispose_m124105 (InternalEnumerator_1_t16611 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124106_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124106 (InternalEnumerator_1_t16611 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124107_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124107 (InternalEnumerator_1_t16611 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisInternationType_t1152_m197190(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisInternationType_t1152_m197190_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16611____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16611, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16611____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16611, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16611_FieldInfos[] =
{
	&InternalEnumerator_1_t16611____array_FieldInfo,
	&InternalEnumerator_1_t16611____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16611____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16611_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124107_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16611____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16611_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124107_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16611_PropertyInfos[] =
{
	&InternalEnumerator_1_t16611____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16611____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16611_InternalEnumerator_1__ctor_m124102_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124102_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124102/* method */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16611_InternalEnumerator_1__ctor_m124102_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124103_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124103/* method */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104/* method */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124105_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124105/* method */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124106_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124106/* method */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern Il2CppType InternationType_t1152_0_0_0;
extern void* RuntimeInvoker_InternationType_t1152 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124107_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124107/* method */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* declaring_type */
	, &InternationType_t1152_0_0_0/* return_type */
	, RuntimeInvoker_InternationType_t1152/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16611_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124102_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124103_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104_MethodInfo,
	&InternalEnumerator_1_Dispose_m124105_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124106_MethodInfo,
	&InternalEnumerator_1_get_Current_m124107_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124106_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124103_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124105_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124107_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16611_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124104_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124106_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124103_MethodInfo,
	&InternalEnumerator_1_Dispose_m124105_MethodInfo,
	&InternalEnumerator_1_get_Current_m124107_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27419_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16611_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27419_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27419_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16611_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27419_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16611_0_0_0;
extern Il2CppType InternalEnumerator_1_t16611_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16611_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16611_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16611_MethodInfos/* methods */
	, InternalEnumerator_1_t16611_PropertyInfos/* properties */
	, InternalEnumerator_1_t16611_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16611_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16611_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16611_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16611_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16611_1_0_0/* this_arg */
	, InternalEnumerator_1_t16611_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16611_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16611)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>
extern MethodInfo ICollection_1_get_Count_m242395_MethodInfo;
static PropertyInfo ICollection_1_t31502____Count_PropertyInfo = 
{
	&ICollection_1_t31502_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242395_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242396_MethodInfo;
static PropertyInfo ICollection_1_t31502____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31502_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242396_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31502_PropertyInfos[] =
{
	&ICollection_1_t31502____Count_PropertyInfo,
	&ICollection_1_t31502____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Count()
MethodInfo ICollection_1_get_Count_m242395_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242396_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType InternationType_t1152_0_0_0;
static ParameterInfo ICollection_1_t31502_ICollection_1_Add_m242397_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternationType_t1152_0_0_0},
};
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Add(T)
MethodInfo ICollection_1_Add_m242397_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31502_ICollection_1_Add_m242397_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Clear()
MethodInfo ICollection_1_Clear_m242398_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType InternationType_t1152_0_0_0;
static ParameterInfo ICollection_1_t31502_ICollection_1_Contains_m242399_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternationType_t1152_0_0_0},
};
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Contains(T)
MethodInfo ICollection_1_Contains_m242399_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31502_ICollection_1_Contains_m242399_ParameterInfos/* parameters */
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
extern Il2CppType InternationTypeU5BU5D_t25544_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31502_ICollection_1_CopyTo_m242400_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InternationTypeU5BU5D_t25544_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242400_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31502_ICollection_1_CopyTo_m242400_ParameterInfos/* parameters */
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
extern Il2CppType InternationType_t1152_0_0_0;
static ParameterInfo ICollection_1_t31502_ICollection_1_Remove_m242401_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternationType_t1152_0_0_0},
};
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Remove(T)
MethodInfo ICollection_1_Remove_m242401_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31502_ICollection_1_Remove_m242401_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31502_MethodInfos[] =
{
	&ICollection_1_get_Count_m242395_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242396_MethodInfo,
	&ICollection_1_Add_m242397_MethodInfo,
	&ICollection_1_Clear_m242398_MethodInfo,
	&ICollection_1_Contains_m242399_MethodInfo,
	&ICollection_1_CopyTo_m242400_MethodInfo,
	&ICollection_1_Remove_m242401_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31504_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31502_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31502_0_0_0;
extern Il2CppType ICollection_1_t31502_1_0_0;
struct ICollection_1_t31502;
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31502_GenericClass;
TypeInfo ICollection_1_t31502_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31502_MethodInfos/* methods */
	, ICollection_1_t31502_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31502_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31502_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31502_0_0_0/* byval_arg */
	, &ICollection_1_t31502_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31502_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31504_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/InternationType>
extern TypeInfo IEnumerable_1_t31504_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27419_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242402_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31504_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27419_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31504_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242402_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31504_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31504_0_0_0;
extern Il2CppType IEnumerable_1_t31504_1_0_0;
struct IEnumerable_1_t31504;
extern TypeInfo IEnumerable_1_t31504_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31504_GenericClass;
TypeInfo IEnumerable_1_t31504_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31504_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31504_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31504_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31504_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31504_0_0_0/* byval_arg */
	, &IEnumerable_1_t31504_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31504_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31503_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>
extern MethodInfo IList_1_get_Item_m242403_MethodInfo;
extern MethodInfo IList_1_set_Item_m242404_MethodInfo;
static PropertyInfo IList_1_t31503____Item_PropertyInfo = 
{
	&IList_1_t31503_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242403_MethodInfo/* get */
	, &IList_1_set_Item_m242404_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31503_PropertyInfos[] =
{
	&IList_1_t31503____Item_PropertyInfo,
	NULL
};
extern Il2CppType InternationType_t1152_0_0_0;
static ParameterInfo IList_1_t31503_IList_1_IndexOf_m242405_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InternationType_t1152_0_0_0},
};
extern TypeInfo IList_1_t31503_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242405_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31503_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31503_IList_1_IndexOf_m242405_ParameterInfos/* parameters */
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
extern Il2CppType InternationType_t1152_0_0_0;
static ParameterInfo IList_1_t31503_IList_1_Insert_m242406_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InternationType_t1152_0_0_0},
};
extern TypeInfo IList_1_t31503_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242406_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31503_IList_1_Insert_m242406_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31503_IList_1_RemoveAt_m242407_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31503_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242407_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31503_IList_1_RemoveAt_m242407_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31503_IList_1_get_Item_m242403_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31503_il2cpp_TypeInfo;
extern Il2CppType InternationType_t1152_0_0_0;
extern void* RuntimeInvoker_InternationType_t1152_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242403_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31503_il2cpp_TypeInfo/* declaring_type */
	, &InternationType_t1152_0_0_0/* return_type */
	, RuntimeInvoker_InternationType_t1152_Int32_t73/* invoker_method */
	, IList_1_t31503_IList_1_get_Item_m242403_ParameterInfos/* parameters */
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
extern Il2CppType InternationType_t1152_0_0_0;
static ParameterInfo IList_1_t31503_IList_1_set_Item_m242404_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InternationType_t1152_0_0_0},
};
extern TypeInfo IList_1_t31503_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/InternationType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242404_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31503_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31503_IList_1_set_Item_m242404_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31503_MethodInfos[] =
{
	&IList_1_IndexOf_m242405_MethodInfo,
	&IList_1_Insert_m242406_MethodInfo,
	&IList_1_RemoveAt_m242407_MethodInfo,
	&IList_1_get_Item_m242403_MethodInfo,
	&IList_1_set_Item_m242404_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31502_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31504_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31503_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31502_il2cpp_TypeInfo,
	&IEnumerable_1_t31504_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31503_0_0_0;
extern Il2CppType IList_1_t31503_1_0_0;
struct IList_1_t31503;
extern TypeInfo IList_1_t31503_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31503_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31503_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31503_MethodInfos/* methods */
	, IList_1_t31503_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31503_il2cpp_TypeInfo/* element_class */
	, IList_1_t31503_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31503_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31503_0_0_0/* byval_arg */
	, &IList_1_t31503_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31503_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27420_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/ChangeModeState
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_ChangeM.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>
extern MethodInfo IEnumerator_1_get_Current_m242408_MethodInfo;
static PropertyInfo IEnumerator_1_t27420____Current_PropertyInfo = 
{
	&IEnumerator_1_t27420_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242408_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27420_PropertyInfos[] =
{
	&IEnumerator_1_t27420____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27420_il2cpp_TypeInfo;
extern Il2CppType ChangeModeState_t1153_0_0_0;
extern void* RuntimeInvoker_ChangeModeState_t1153 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242408_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27420_il2cpp_TypeInfo/* declaring_type */
	, &ChangeModeState_t1153_0_0_0/* return_type */
	, RuntimeInvoker_ChangeModeState_t1153/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27420_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242408_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27420_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27420_0_0_0;
extern Il2CppType IEnumerator_1_t27420_1_0_0;
struct IEnumerator_1_t27420;
extern TypeInfo IEnumerator_1_t27420_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27420_GenericClass;
TypeInfo IEnumerator_1_t27420_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27420_MethodInfos/* methods */
	, IEnumerator_1_t27420_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27420_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27420_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27420_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27420_0_0_0/* byval_arg */
	, &IEnumerator_1_t27420_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27420_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1026.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1026MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern TypeInfo ChangeModeState_t1153_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124113_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisChangeModeState_t1153_m197201_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisChangeModeState_t1153_m197201 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisChangeModeState_t1153_m197201_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124108_MethodInfo;
 void InternalEnumerator_1__ctor_m124108 (InternalEnumerator_1_t16612 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124109_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124109 (InternalEnumerator_1_t16612 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110 (InternalEnumerator_1_t16612 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124113(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124113_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ChangeModeState_t1153_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124111_MethodInfo;
 void InternalEnumerator_1_Dispose_m124111 (InternalEnumerator_1_t16612 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124112_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124112 (InternalEnumerator_1_t16612 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124113_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124113 (InternalEnumerator_1_t16612 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisChangeModeState_t1153_m197201(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisChangeModeState_t1153_m197201_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16612____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16612, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16612____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16612, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16612_FieldInfos[] =
{
	&InternalEnumerator_1_t16612____array_FieldInfo,
	&InternalEnumerator_1_t16612____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16612____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16612_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124113_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16612____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16612_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124113_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16612_PropertyInfos[] =
{
	&InternalEnumerator_1_t16612____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16612____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16612_InternalEnumerator_1__ctor_m124108_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124108_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124108/* method */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16612_InternalEnumerator_1__ctor_m124108_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124109_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124109/* method */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110/* method */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124111_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124111/* method */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124112_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124112/* method */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern Il2CppType ChangeModeState_t1153_0_0_0;
extern void* RuntimeInvoker_ChangeModeState_t1153 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124113_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124113/* method */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* declaring_type */
	, &ChangeModeState_t1153_0_0_0/* return_type */
	, RuntimeInvoker_ChangeModeState_t1153/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16612_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124108_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124109_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110_MethodInfo,
	&InternalEnumerator_1_Dispose_m124111_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124112_MethodInfo,
	&InternalEnumerator_1_get_Current_m124113_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124112_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124109_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124111_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124113_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16612_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124110_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124112_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124109_MethodInfo,
	&InternalEnumerator_1_Dispose_m124111_MethodInfo,
	&InternalEnumerator_1_get_Current_m124113_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27420_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16612_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27420_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27420_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16612_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27420_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16612_0_0_0;
extern Il2CppType InternalEnumerator_1_t16612_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16612_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16612_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16612_MethodInfos/* methods */
	, InternalEnumerator_1_t16612_PropertyInfos/* properties */
	, InternalEnumerator_1_t16612_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16612_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16612_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16612_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16612_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16612_1_0_0/* this_arg */
	, InternalEnumerator_1_t16612_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16612_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16612)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>
extern MethodInfo ICollection_1_get_Count_m242409_MethodInfo;
static PropertyInfo ICollection_1_t31505____Count_PropertyInfo = 
{
	&ICollection_1_t31505_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242409_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242410_MethodInfo;
static PropertyInfo ICollection_1_t31505____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31505_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242410_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31505_PropertyInfos[] =
{
	&ICollection_1_t31505____Count_PropertyInfo,
	&ICollection_1_t31505____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Count()
MethodInfo ICollection_1_get_Count_m242409_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242410_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ChangeModeState_t1153_0_0_0;
static ParameterInfo ICollection_1_t31505_ICollection_1_Add_m242411_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ChangeModeState_t1153_0_0_0},
};
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Add(T)
MethodInfo ICollection_1_Add_m242411_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31505_ICollection_1_Add_m242411_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Clear()
MethodInfo ICollection_1_Clear_m242412_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ChangeModeState_t1153_0_0_0;
static ParameterInfo ICollection_1_t31505_ICollection_1_Contains_m242413_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ChangeModeState_t1153_0_0_0},
};
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Contains(T)
MethodInfo ICollection_1_Contains_m242413_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31505_ICollection_1_Contains_m242413_ParameterInfos/* parameters */
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
extern Il2CppType ChangeModeStateU5BU5D_t25545_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31505_ICollection_1_CopyTo_m242414_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ChangeModeStateU5BU5D_t25545_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242414_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31505_ICollection_1_CopyTo_m242414_ParameterInfos/* parameters */
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
extern Il2CppType ChangeModeState_t1153_0_0_0;
static ParameterInfo ICollection_1_t31505_ICollection_1_Remove_m242415_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ChangeModeState_t1153_0_0_0},
};
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Remove(T)
MethodInfo ICollection_1_Remove_m242415_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31505_ICollection_1_Remove_m242415_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31505_MethodInfos[] =
{
	&ICollection_1_get_Count_m242409_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242410_MethodInfo,
	&ICollection_1_Add_m242411_MethodInfo,
	&ICollection_1_Clear_m242412_MethodInfo,
	&ICollection_1_Contains_m242413_MethodInfo,
	&ICollection_1_CopyTo_m242414_MethodInfo,
	&ICollection_1_Remove_m242415_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31507_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31505_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31505_0_0_0;
extern Il2CppType ICollection_1_t31505_1_0_0;
struct ICollection_1_t31505;
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31505_GenericClass;
TypeInfo ICollection_1_t31505_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31505_MethodInfos/* methods */
	, ICollection_1_t31505_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31505_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31505_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31505_0_0_0/* byval_arg */
	, &ICollection_1_t31505_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31505_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31507_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>
extern TypeInfo IEnumerable_1_t31507_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27420_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242416_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31507_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27420_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31507_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242416_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31507_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31507_0_0_0;
extern Il2CppType IEnumerable_1_t31507_1_0_0;
struct IEnumerable_1_t31507;
extern TypeInfo IEnumerable_1_t31507_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31507_GenericClass;
TypeInfo IEnumerable_1_t31507_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31507_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31507_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31507_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31507_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31507_0_0_0/* byval_arg */
	, &IEnumerable_1_t31507_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31507_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31506_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>
extern MethodInfo IList_1_get_Item_m242417_MethodInfo;
extern MethodInfo IList_1_set_Item_m242418_MethodInfo;
static PropertyInfo IList_1_t31506____Item_PropertyInfo = 
{
	&IList_1_t31506_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242417_MethodInfo/* get */
	, &IList_1_set_Item_m242418_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31506_PropertyInfos[] =
{
	&IList_1_t31506____Item_PropertyInfo,
	NULL
};
extern Il2CppType ChangeModeState_t1153_0_0_0;
static ParameterInfo IList_1_t31506_IList_1_IndexOf_m242419_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ChangeModeState_t1153_0_0_0},
};
extern TypeInfo IList_1_t31506_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242419_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31506_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31506_IList_1_IndexOf_m242419_ParameterInfos/* parameters */
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
extern Il2CppType ChangeModeState_t1153_0_0_0;
static ParameterInfo IList_1_t31506_IList_1_Insert_m242420_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ChangeModeState_t1153_0_0_0},
};
extern TypeInfo IList_1_t31506_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242420_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31506_IList_1_Insert_m242420_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31506_IList_1_RemoveAt_m242421_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31506_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242421_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31506_IList_1_RemoveAt_m242421_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31506_IList_1_get_Item_m242417_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31506_il2cpp_TypeInfo;
extern Il2CppType ChangeModeState_t1153_0_0_0;
extern void* RuntimeInvoker_ChangeModeState_t1153_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242417_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31506_il2cpp_TypeInfo/* declaring_type */
	, &ChangeModeState_t1153_0_0_0/* return_type */
	, RuntimeInvoker_ChangeModeState_t1153_Int32_t73/* invoker_method */
	, IList_1_t31506_IList_1_get_Item_m242417_ParameterInfos/* parameters */
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
extern Il2CppType ChangeModeState_t1153_0_0_0;
static ParameterInfo IList_1_t31506_IList_1_set_Item_m242418_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ChangeModeState_t1153_0_0_0},
};
extern TypeInfo IList_1_t31506_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ChangeModeState>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242418_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31506_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31506_IList_1_set_Item_m242418_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31506_MethodInfos[] =
{
	&IList_1_IndexOf_m242419_MethodInfo,
	&IList_1_Insert_m242420_MethodInfo,
	&IList_1_RemoveAt_m242421_MethodInfo,
	&IList_1_get_Item_m242417_MethodInfo,
	&IList_1_set_Item_m242418_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31505_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31507_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31506_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31505_il2cpp_TypeInfo,
	&IEnumerable_1_t31507_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31506_0_0_0;
extern Il2CppType IList_1_t31506_1_0_0;
struct IList_1_t31506;
extern TypeInfo IList_1_t31506_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31506_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31506_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31506_MethodInfos/* methods */
	, IList_1_t31506_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31506_il2cpp_TypeInfo/* element_class */
	, IList_1_t31506_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31506_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31506_0_0_0/* byval_arg */
	, &IList_1_t31506_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31506_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27421_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/ESceneLayer
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_ESceneL.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>
extern MethodInfo IEnumerator_1_get_Current_m242422_MethodInfo;
static PropertyInfo IEnumerator_1_t27421____Current_PropertyInfo = 
{
	&IEnumerator_1_t27421_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242422_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27421_PropertyInfos[] =
{
	&IEnumerator_1_t27421____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27421_il2cpp_TypeInfo;
extern Il2CppType ESceneLayer_t1154_0_0_0;
extern void* RuntimeInvoker_ESceneLayer_t1154 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242422_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27421_il2cpp_TypeInfo/* declaring_type */
	, &ESceneLayer_t1154_0_0_0/* return_type */
	, RuntimeInvoker_ESceneLayer_t1154/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27421_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242422_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27421_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27421_0_0_0;
extern Il2CppType IEnumerator_1_t27421_1_0_0;
struct IEnumerator_1_t27421;
extern TypeInfo IEnumerator_1_t27421_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27421_GenericClass;
TypeInfo IEnumerator_1_t27421_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27421_MethodInfos/* methods */
	, IEnumerator_1_t27421_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27421_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27421_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27421_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27421_0_0_0/* byval_arg */
	, &IEnumerator_1_t27421_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27421_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1027.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1027MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern TypeInfo ESceneLayer_t1154_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124119_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisESceneLayer_t1154_m197212_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisESceneLayer_t1154_m197212 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisESceneLayer_t1154_m197212_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124114_MethodInfo;
 void InternalEnumerator_1__ctor_m124114 (InternalEnumerator_1_t16613 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124115_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124115 (InternalEnumerator_1_t16613 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116 (InternalEnumerator_1_t16613 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124119(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124119_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ESceneLayer_t1154_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124117_MethodInfo;
 void InternalEnumerator_1_Dispose_m124117 (InternalEnumerator_1_t16613 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124118_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124118 (InternalEnumerator_1_t16613 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124119_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124119 (InternalEnumerator_1_t16613 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisESceneLayer_t1154_m197212(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisESceneLayer_t1154_m197212_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16613____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16613, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16613____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16613, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16613_FieldInfos[] =
{
	&InternalEnumerator_1_t16613____array_FieldInfo,
	&InternalEnumerator_1_t16613____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16613____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16613_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124119_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16613____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16613_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124119_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16613_PropertyInfos[] =
{
	&InternalEnumerator_1_t16613____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16613____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16613_InternalEnumerator_1__ctor_m124114_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124114_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124114/* method */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16613_InternalEnumerator_1__ctor_m124114_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124115_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124115/* method */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116/* method */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124117_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124117/* method */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124118_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124118/* method */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern Il2CppType ESceneLayer_t1154_0_0_0;
extern void* RuntimeInvoker_ESceneLayer_t1154 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124119_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124119/* method */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* declaring_type */
	, &ESceneLayer_t1154_0_0_0/* return_type */
	, RuntimeInvoker_ESceneLayer_t1154/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16613_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124114_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124115_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116_MethodInfo,
	&InternalEnumerator_1_Dispose_m124117_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124118_MethodInfo,
	&InternalEnumerator_1_get_Current_m124119_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124118_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124115_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124117_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124119_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16613_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124116_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124118_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124115_MethodInfo,
	&InternalEnumerator_1_Dispose_m124117_MethodInfo,
	&InternalEnumerator_1_get_Current_m124119_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27421_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16613_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27421_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27421_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16613_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27421_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16613_0_0_0;
extern Il2CppType InternalEnumerator_1_t16613_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16613_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16613_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16613_MethodInfos/* methods */
	, InternalEnumerator_1_t16613_PropertyInfos/* properties */
	, InternalEnumerator_1_t16613_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16613_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16613_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16613_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16613_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16613_1_0_0/* this_arg */
	, InternalEnumerator_1_t16613_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16613_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16613)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>
extern MethodInfo ICollection_1_get_Count_m242423_MethodInfo;
static PropertyInfo ICollection_1_t31508____Count_PropertyInfo = 
{
	&ICollection_1_t31508_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242423_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242424_MethodInfo;
static PropertyInfo ICollection_1_t31508____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31508_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242424_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31508_PropertyInfos[] =
{
	&ICollection_1_t31508____Count_PropertyInfo,
	&ICollection_1_t31508____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Count()
MethodInfo ICollection_1_get_Count_m242423_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242424_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ESceneLayer_t1154_0_0_0;
static ParameterInfo ICollection_1_t31508_ICollection_1_Add_m242425_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ESceneLayer_t1154_0_0_0},
};
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Add(T)
MethodInfo ICollection_1_Add_m242425_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31508_ICollection_1_Add_m242425_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Clear()
MethodInfo ICollection_1_Clear_m242426_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ESceneLayer_t1154_0_0_0;
static ParameterInfo ICollection_1_t31508_ICollection_1_Contains_m242427_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ESceneLayer_t1154_0_0_0},
};
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Contains(T)
MethodInfo ICollection_1_Contains_m242427_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31508_ICollection_1_Contains_m242427_ParameterInfos/* parameters */
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
extern Il2CppType ESceneLayerU5BU5D_t25546_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31508_ICollection_1_CopyTo_m242428_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ESceneLayerU5BU5D_t25546_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242428_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31508_ICollection_1_CopyTo_m242428_ParameterInfos/* parameters */
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
extern Il2CppType ESceneLayer_t1154_0_0_0;
static ParameterInfo ICollection_1_t31508_ICollection_1_Remove_m242429_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ESceneLayer_t1154_0_0_0},
};
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Remove(T)
MethodInfo ICollection_1_Remove_m242429_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31508_ICollection_1_Remove_m242429_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31508_MethodInfos[] =
{
	&ICollection_1_get_Count_m242423_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242424_MethodInfo,
	&ICollection_1_Add_m242425_MethodInfo,
	&ICollection_1_Clear_m242426_MethodInfo,
	&ICollection_1_Contains_m242427_MethodInfo,
	&ICollection_1_CopyTo_m242428_MethodInfo,
	&ICollection_1_Remove_m242429_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31510_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31508_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31510_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31508_0_0_0;
extern Il2CppType ICollection_1_t31508_1_0_0;
struct ICollection_1_t31508;
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31508_GenericClass;
TypeInfo ICollection_1_t31508_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31508_MethodInfos/* methods */
	, ICollection_1_t31508_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31508_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31508_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31508_0_0_0/* byval_arg */
	, &ICollection_1_t31508_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31508_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31510_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>
extern TypeInfo IEnumerable_1_t31510_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27421_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242430_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31510_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27421_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31510_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242430_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31510_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31510_0_0_0;
extern Il2CppType IEnumerable_1_t31510_1_0_0;
struct IEnumerable_1_t31510;
extern TypeInfo IEnumerable_1_t31510_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31510_GenericClass;
TypeInfo IEnumerable_1_t31510_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31510_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31510_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31510_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31510_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31510_0_0_0/* byval_arg */
	, &IEnumerable_1_t31510_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31510_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31509_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>
extern MethodInfo IList_1_get_Item_m242431_MethodInfo;
extern MethodInfo IList_1_set_Item_m242432_MethodInfo;
static PropertyInfo IList_1_t31509____Item_PropertyInfo = 
{
	&IList_1_t31509_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242431_MethodInfo/* get */
	, &IList_1_set_Item_m242432_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31509_PropertyInfos[] =
{
	&IList_1_t31509____Item_PropertyInfo,
	NULL
};
extern Il2CppType ESceneLayer_t1154_0_0_0;
static ParameterInfo IList_1_t31509_IList_1_IndexOf_m242433_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ESceneLayer_t1154_0_0_0},
};
extern TypeInfo IList_1_t31509_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242433_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31509_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31509_IList_1_IndexOf_m242433_ParameterInfos/* parameters */
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
extern Il2CppType ESceneLayer_t1154_0_0_0;
static ParameterInfo IList_1_t31509_IList_1_Insert_m242434_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ESceneLayer_t1154_0_0_0},
};
extern TypeInfo IList_1_t31509_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242434_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31509_IList_1_Insert_m242434_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31509_IList_1_RemoveAt_m242435_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31509_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242435_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31509_IList_1_RemoveAt_m242435_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31509_IList_1_get_Item_m242431_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31509_il2cpp_TypeInfo;
extern Il2CppType ESceneLayer_t1154_0_0_0;
extern void* RuntimeInvoker_ESceneLayer_t1154_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242431_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31509_il2cpp_TypeInfo/* declaring_type */
	, &ESceneLayer_t1154_0_0_0/* return_type */
	, RuntimeInvoker_ESceneLayer_t1154_Int32_t73/* invoker_method */
	, IList_1_t31509_IList_1_get_Item_m242431_ParameterInfos/* parameters */
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
extern Il2CppType ESceneLayer_t1154_0_0_0;
static ParameterInfo IList_1_t31509_IList_1_set_Item_m242432_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ESceneLayer_t1154_0_0_0},
};
extern TypeInfo IList_1_t31509_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/ESceneLayer>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242432_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31509_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31509_IList_1_set_Item_m242432_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31509_MethodInfos[] =
{
	&IList_1_IndexOf_m242433_MethodInfo,
	&IList_1_Insert_m242434_MethodInfo,
	&IList_1_RemoveAt_m242435_MethodInfo,
	&IList_1_get_Item_m242431_MethodInfo,
	&IList_1_set_Item_m242432_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31508_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31510_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31509_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31508_il2cpp_TypeInfo,
	&IEnumerable_1_t31510_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31509_0_0_0;
extern Il2CppType IList_1_t31509_1_0_0;
struct IList_1_t31509;
extern TypeInfo IList_1_t31509_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31509_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31509_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31509_MethodInfos/* methods */
	, IList_1_t31509_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31509_il2cpp_TypeInfo/* element_class */
	, IList_1_t31509_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31509_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31509_0_0_0/* byval_arg */
	, &IList_1_t31509_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31509_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27422_il2cpp_TypeInfo;

// Games.GlobeDefine.GameDefine_Globe/HardwardLevel
#include "AssemblyU2DCSharp_Games_GlobeDefine_GameDefine_Globe_Hardwar.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>
extern MethodInfo IEnumerator_1_get_Current_m242436_MethodInfo;
static PropertyInfo IEnumerator_1_t27422____Current_PropertyInfo = 
{
	&IEnumerator_1_t27422_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242436_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27422_PropertyInfos[] =
{
	&IEnumerator_1_t27422____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27422_il2cpp_TypeInfo;
extern Il2CppType HardwardLevel_t1155_0_0_0;
extern void* RuntimeInvoker_HardwardLevel_t1155 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242436_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27422_il2cpp_TypeInfo/* declaring_type */
	, &HardwardLevel_t1155_0_0_0/* return_type */
	, RuntimeInvoker_HardwardLevel_t1155/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27422_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242436_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27422_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27422_0_0_0;
extern Il2CppType IEnumerator_1_t27422_1_0_0;
struct IEnumerator_1_t27422;
extern TypeInfo IEnumerator_1_t27422_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27422_GenericClass;
TypeInfo IEnumerator_1_t27422_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27422_MethodInfos/* methods */
	, IEnumerator_1_t27422_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27422_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27422_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27422_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27422_0_0_0/* byval_arg */
	, &IEnumerator_1_t27422_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27422_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1028.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1028MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern TypeInfo HardwardLevel_t1155_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124125_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisHardwardLevel_t1155_m197223_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisHardwardLevel_t1155_m197223 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisHardwardLevel_t1155_m197223_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124120_MethodInfo;
 void InternalEnumerator_1__ctor_m124120 (InternalEnumerator_1_t16614 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124121_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124121 (InternalEnumerator_1_t16614 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122 (InternalEnumerator_1_t16614 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124125(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124125_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&HardwardLevel_t1155_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124123_MethodInfo;
 void InternalEnumerator_1_Dispose_m124123 (InternalEnumerator_1_t16614 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124124_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124124 (InternalEnumerator_1_t16614 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124125_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124125 (InternalEnumerator_1_t16614 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisHardwardLevel_t1155_m197223(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisHardwardLevel_t1155_m197223_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16614____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16614, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16614____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16614, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16614_FieldInfos[] =
{
	&InternalEnumerator_1_t16614____array_FieldInfo,
	&InternalEnumerator_1_t16614____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16614____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16614_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124125_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16614____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16614_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124125_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16614_PropertyInfos[] =
{
	&InternalEnumerator_1_t16614____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16614____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16614_InternalEnumerator_1__ctor_m124120_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124120_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124120/* method */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16614_InternalEnumerator_1__ctor_m124120_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124121_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124121/* method */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122/* method */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124123_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124123/* method */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124124_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124124/* method */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern Il2CppType HardwardLevel_t1155_0_0_0;
extern void* RuntimeInvoker_HardwardLevel_t1155 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124125_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124125/* method */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* declaring_type */
	, &HardwardLevel_t1155_0_0_0/* return_type */
	, RuntimeInvoker_HardwardLevel_t1155/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16614_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124120_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124121_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122_MethodInfo,
	&InternalEnumerator_1_Dispose_m124123_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124124_MethodInfo,
	&InternalEnumerator_1_get_Current_m124125_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124124_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124121_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124123_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124125_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16614_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124122_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124124_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124121_MethodInfo,
	&InternalEnumerator_1_Dispose_m124123_MethodInfo,
	&InternalEnumerator_1_get_Current_m124125_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27422_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16614_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27422_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27422_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16614_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27422_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16614_0_0_0;
extern Il2CppType InternalEnumerator_1_t16614_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16614_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16614_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16614_MethodInfos/* methods */
	, InternalEnumerator_1_t16614_PropertyInfos/* properties */
	, InternalEnumerator_1_t16614_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16614_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16614_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16614_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16614_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16614_1_0_0/* this_arg */
	, InternalEnumerator_1_t16614_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16614_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16614)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>
extern MethodInfo ICollection_1_get_Count_m242437_MethodInfo;
static PropertyInfo ICollection_1_t31511____Count_PropertyInfo = 
{
	&ICollection_1_t31511_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242437_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242438_MethodInfo;
static PropertyInfo ICollection_1_t31511____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31511_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242438_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31511_PropertyInfos[] =
{
	&ICollection_1_t31511____Count_PropertyInfo,
	&ICollection_1_t31511____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Count()
MethodInfo ICollection_1_get_Count_m242437_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242438_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType HardwardLevel_t1155_0_0_0;
static ParameterInfo ICollection_1_t31511_ICollection_1_Add_m242439_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HardwardLevel_t1155_0_0_0},
};
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Add(T)
MethodInfo ICollection_1_Add_m242439_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31511_ICollection_1_Add_m242439_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Clear()
MethodInfo ICollection_1_Clear_m242440_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType HardwardLevel_t1155_0_0_0;
static ParameterInfo ICollection_1_t31511_ICollection_1_Contains_m242441_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HardwardLevel_t1155_0_0_0},
};
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Contains(T)
MethodInfo ICollection_1_Contains_m242441_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31511_ICollection_1_Contains_m242441_ParameterInfos/* parameters */
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
extern Il2CppType HardwardLevelU5BU5D_t25547_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31511_ICollection_1_CopyTo_m242442_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &HardwardLevelU5BU5D_t25547_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242442_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31511_ICollection_1_CopyTo_m242442_ParameterInfos/* parameters */
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
extern Il2CppType HardwardLevel_t1155_0_0_0;
static ParameterInfo ICollection_1_t31511_ICollection_1_Remove_m242443_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HardwardLevel_t1155_0_0_0},
};
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Remove(T)
MethodInfo ICollection_1_Remove_m242443_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31511_ICollection_1_Remove_m242443_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31511_MethodInfos[] =
{
	&ICollection_1_get_Count_m242437_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242438_MethodInfo,
	&ICollection_1_Add_m242439_MethodInfo,
	&ICollection_1_Clear_m242440_MethodInfo,
	&ICollection_1_Contains_m242441_MethodInfo,
	&ICollection_1_CopyTo_m242442_MethodInfo,
	&ICollection_1_Remove_m242443_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31513_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31511_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31513_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31511_0_0_0;
extern Il2CppType ICollection_1_t31511_1_0_0;
struct ICollection_1_t31511;
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31511_GenericClass;
TypeInfo ICollection_1_t31511_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31511_MethodInfos/* methods */
	, ICollection_1_t31511_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31511_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31511_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31511_0_0_0/* byval_arg */
	, &ICollection_1_t31511_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31511_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31513_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>
extern TypeInfo IEnumerable_1_t31513_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27422_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242444_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31513_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27422_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31513_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242444_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31513_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31513_0_0_0;
extern Il2CppType IEnumerable_1_t31513_1_0_0;
struct IEnumerable_1_t31513;
extern TypeInfo IEnumerable_1_t31513_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31513_GenericClass;
TypeInfo IEnumerable_1_t31513_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31513_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31513_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31513_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31513_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31513_0_0_0/* byval_arg */
	, &IEnumerable_1_t31513_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31513_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31512_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>
extern MethodInfo IList_1_get_Item_m242445_MethodInfo;
extern MethodInfo IList_1_set_Item_m242446_MethodInfo;
static PropertyInfo IList_1_t31512____Item_PropertyInfo = 
{
	&IList_1_t31512_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242445_MethodInfo/* get */
	, &IList_1_set_Item_m242446_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31512_PropertyInfos[] =
{
	&IList_1_t31512____Item_PropertyInfo,
	NULL
};
extern Il2CppType HardwardLevel_t1155_0_0_0;
static ParameterInfo IList_1_t31512_IList_1_IndexOf_m242447_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &HardwardLevel_t1155_0_0_0},
};
extern TypeInfo IList_1_t31512_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242447_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31512_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31512_IList_1_IndexOf_m242447_ParameterInfos/* parameters */
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
extern Il2CppType HardwardLevel_t1155_0_0_0;
static ParameterInfo IList_1_t31512_IList_1_Insert_m242448_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &HardwardLevel_t1155_0_0_0},
};
extern TypeInfo IList_1_t31512_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242448_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31512_IList_1_Insert_m242448_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31512_IList_1_RemoveAt_m242449_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31512_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242449_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31512_IList_1_RemoveAt_m242449_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31512_IList_1_get_Item_m242445_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31512_il2cpp_TypeInfo;
extern Il2CppType HardwardLevel_t1155_0_0_0;
extern void* RuntimeInvoker_HardwardLevel_t1155_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242445_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31512_il2cpp_TypeInfo/* declaring_type */
	, &HardwardLevel_t1155_0_0_0/* return_type */
	, RuntimeInvoker_HardwardLevel_t1155_Int32_t73/* invoker_method */
	, IList_1_t31512_IList_1_get_Item_m242445_ParameterInfos/* parameters */
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
extern Il2CppType HardwardLevel_t1155_0_0_0;
static ParameterInfo IList_1_t31512_IList_1_set_Item_m242446_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &HardwardLevel_t1155_0_0_0},
};
extern TypeInfo IList_1_t31512_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GameDefine_Globe/HardwardLevel>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242446_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31512_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31512_IList_1_set_Item_m242446_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31512_MethodInfos[] =
{
	&IList_1_IndexOf_m242447_MethodInfo,
	&IList_1_Insert_m242448_MethodInfo,
	&IList_1_RemoveAt_m242449_MethodInfo,
	&IList_1_get_Item_m242445_MethodInfo,
	&IList_1_set_Item_m242446_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31511_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31513_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31512_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31511_il2cpp_TypeInfo,
	&IEnumerable_1_t31513_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31512_0_0_0;
extern Il2CppType IList_1_t31512_1_0_0;
struct IList_1_t31512;
extern TypeInfo IList_1_t31512_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31512_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31512_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31512_MethodInfos/* methods */
	, IList_1_t31512_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31512_il2cpp_TypeInfo/* element_class */
	, IList_1_t31512_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31512_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31512_0_0_0/* byval_arg */
	, &IList_1_t31512_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31512_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27423_il2cpp_TypeInfo;

// Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE
#include "AssemblyU2DCSharp_Games_GlobeDefine_GlobeVar_FLY_SOCKET_TYPE.h"


// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242450_MethodInfo;
static PropertyInfo IEnumerator_1_t27423____Current_PropertyInfo = 
{
	&IEnumerator_1_t27423_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242450_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27423_PropertyInfos[] =
{
	&IEnumerator_1_t27423____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27423_il2cpp_TypeInfo;
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
extern void* RuntimeInvoker_FLY_SOCKET_TYPE_t1157 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242450_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27423_il2cpp_TypeInfo/* declaring_type */
	, &FLY_SOCKET_TYPE_t1157_0_0_0/* return_type */
	, RuntimeInvoker_FLY_SOCKET_TYPE_t1157/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27423_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242450_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27423_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27423_0_0_0;
extern Il2CppType IEnumerator_1_t27423_1_0_0;
struct IEnumerator_1_t27423;
extern TypeInfo IEnumerator_1_t27423_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27423_GenericClass;
TypeInfo IEnumerator_1_t27423_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27423_MethodInfos/* methods */
	, IEnumerator_1_t27423_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27423_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27423_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27423_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27423_0_0_0/* byval_arg */
	, &IEnumerator_1_t27423_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27423_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1029.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_1029MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern TypeInfo FLY_SOCKET_TYPE_t1157_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124131_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisFLY_SOCKET_TYPE_t1157_m197234_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisFLY_SOCKET_TYPE_t1157_m197234 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisFLY_SOCKET_TYPE_t1157_m197234_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m124126_MethodInfo;
 void InternalEnumerator_1__ctor_m124126 (InternalEnumerator_1_t16615 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124127_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124127 (InternalEnumerator_1_t16615 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128 (InternalEnumerator_1_t16615 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m124131(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m124131_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&FLY_SOCKET_TYPE_t1157_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m124129_MethodInfo;
 void InternalEnumerator_1_Dispose_m124129 (InternalEnumerator_1_t16615 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m124130_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m124130 (InternalEnumerator_1_t16615 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m124131_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m124131 (InternalEnumerator_1_t16615 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisFLY_SOCKET_TYPE_t1157_m197234(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisFLY_SOCKET_TYPE_t1157_m197234_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t16615____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16615, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t16615____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t16615, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t16615_FieldInfos[] =
{
	&InternalEnumerator_1_t16615____array_FieldInfo,
	&InternalEnumerator_1_t16615____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16615____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16615_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m124131_MethodInfo;
static PropertyInfo InternalEnumerator_1_t16615____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t16615_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m124131_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t16615_PropertyInfos[] =
{
	&InternalEnumerator_1_t16615____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t16615____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t16615_InternalEnumerator_1__ctor_m124126_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m124126_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m124126/* method */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t16615_InternalEnumerator_1__ctor_m124126_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124127_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124127/* method */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128/* method */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m124129_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m124129/* method */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m124130_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m124130/* method */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
extern void* RuntimeInvoker_FLY_SOCKET_TYPE_t1157 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m124131_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m124131/* method */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* declaring_type */
	, &FLY_SOCKET_TYPE_t1157_0_0_0/* return_type */
	, RuntimeInvoker_FLY_SOCKET_TYPE_t1157/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t16615_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m124126_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124127_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128_MethodInfo,
	&InternalEnumerator_1_Dispose_m124129_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124130_MethodInfo,
	&InternalEnumerator_1_get_Current_m124131_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m124130_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124127_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m124129_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m124131_MethodInfo;
static MethodInfo* InternalEnumerator_1_t16615_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m124128_MethodInfo,
	&InternalEnumerator_1_MoveNext_m124130_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m124127_MethodInfo,
	&InternalEnumerator_1_Dispose_m124129_MethodInfo,
	&InternalEnumerator_1_get_Current_m124131_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27423_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t16615_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t27423_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t27423_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t16615_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t27423_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t16615_0_0_0;
extern Il2CppType InternalEnumerator_1_t16615_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t16615_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t16615_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t16615_MethodInfos/* methods */
	, InternalEnumerator_1_t16615_PropertyInfos/* properties */
	, InternalEnumerator_1_t16615_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t16615_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t16615_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t16615_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t16615_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t16615_1_0_0/* this_arg */
	, InternalEnumerator_1_t16615_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t16615_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t16615)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>
extern MethodInfo ICollection_1_get_Count_m242451_MethodInfo;
static PropertyInfo ICollection_1_t31514____Count_PropertyInfo = 
{
	&ICollection_1_t31514_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m242451_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m242452_MethodInfo;
static PropertyInfo ICollection_1_t31514____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t31514_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m242452_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t31514_PropertyInfos[] =
{
	&ICollection_1_t31514____Count_PropertyInfo,
	&ICollection_1_t31514____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Count()
MethodInfo ICollection_1_get_Count_m242451_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m242452_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
static ParameterInfo ICollection_1_t31514_ICollection_1_Add_m242453_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FLY_SOCKET_TYPE_t1157_0_0_0},
};
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Add(T)
MethodInfo ICollection_1_Add_m242453_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t31514_ICollection_1_Add_m242453_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Clear()
MethodInfo ICollection_1_Clear_m242454_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
static ParameterInfo ICollection_1_t31514_ICollection_1_Contains_m242455_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FLY_SOCKET_TYPE_t1157_0_0_0},
};
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Contains(T)
MethodInfo ICollection_1_Contains_m242455_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31514_ICollection_1_Contains_m242455_ParameterInfos/* parameters */
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
extern Il2CppType FLY_SOCKET_TYPEU5BU5D_t25548_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t31514_ICollection_1_CopyTo_m242456_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &FLY_SOCKET_TYPEU5BU5D_t25548_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m242456_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t31514_ICollection_1_CopyTo_m242456_ParameterInfos/* parameters */
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
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
static ParameterInfo ICollection_1_t31514_ICollection_1_Remove_m242457_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FLY_SOCKET_TYPE_t1157_0_0_0},
};
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Remove(T)
MethodInfo ICollection_1_Remove_m242457_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t31514_ICollection_1_Remove_m242457_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t31514_MethodInfos[] =
{
	&ICollection_1_get_Count_m242451_MethodInfo,
	&ICollection_1_get_IsReadOnly_m242452_MethodInfo,
	&ICollection_1_Add_m242453_MethodInfo,
	&ICollection_1_Clear_m242454_MethodInfo,
	&ICollection_1_Contains_m242455_MethodInfo,
	&ICollection_1_CopyTo_m242456_MethodInfo,
	&ICollection_1_Remove_m242457_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31516_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t31514_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t31516_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t31514_0_0_0;
extern Il2CppType ICollection_1_t31514_1_0_0;
struct ICollection_1_t31514;
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t31514_GenericClass;
TypeInfo ICollection_1_t31514_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t31514_MethodInfos/* methods */
	, ICollection_1_t31514_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t31514_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t31514_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t31514_0_0_0/* byval_arg */
	, &ICollection_1_t31514_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t31514_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t31516_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>
extern TypeInfo IEnumerable_1_t31516_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t27423_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m242458_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t31516_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t27423_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t31516_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m242458_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t31516_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t31516_0_0_0;
extern Il2CppType IEnumerable_1_t31516_1_0_0;
struct IEnumerable_1_t31516;
extern TypeInfo IEnumerable_1_t31516_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t31516_GenericClass;
TypeInfo IEnumerable_1_t31516_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t31516_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t31516_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t31516_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t31516_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t31516_0_0_0/* byval_arg */
	, &IEnumerable_1_t31516_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t31516_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t31515_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>
extern MethodInfo IList_1_get_Item_m242459_MethodInfo;
extern MethodInfo IList_1_set_Item_m242460_MethodInfo;
static PropertyInfo IList_1_t31515____Item_PropertyInfo = 
{
	&IList_1_t31515_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m242459_MethodInfo/* get */
	, &IList_1_set_Item_m242460_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t31515_PropertyInfos[] =
{
	&IList_1_t31515____Item_PropertyInfo,
	NULL
};
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
static ParameterInfo IList_1_t31515_IList_1_IndexOf_m242461_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FLY_SOCKET_TYPE_t1157_0_0_0},
};
extern TypeInfo IList_1_t31515_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::IndexOf(T)
MethodInfo IList_1_IndexOf_m242461_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t31515_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31515_IList_1_IndexOf_m242461_ParameterInfos/* parameters */
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
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
static ParameterInfo IList_1_t31515_IList_1_Insert_m242462_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FLY_SOCKET_TYPE_t1157_0_0_0},
};
extern TypeInfo IList_1_t31515_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m242462_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t31515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31515_IList_1_Insert_m242462_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31515_IList_1_RemoveAt_m242463_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31515_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m242463_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t31515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t31515_IList_1_RemoveAt_m242463_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t31515_IList_1_get_Item_m242459_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t31515_il2cpp_TypeInfo;
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
extern void* RuntimeInvoker_FLY_SOCKET_TYPE_t1157_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m242459_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t31515_il2cpp_TypeInfo/* declaring_type */
	, &FLY_SOCKET_TYPE_t1157_0_0_0/* return_type */
	, RuntimeInvoker_FLY_SOCKET_TYPE_t1157_Int32_t73/* invoker_method */
	, IList_1_t31515_IList_1_get_Item_m242459_ParameterInfos/* parameters */
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
extern Il2CppType FLY_SOCKET_TYPE_t1157_0_0_0;
static ParameterInfo IList_1_t31515_IList_1_set_Item_m242460_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FLY_SOCKET_TYPE_t1157_0_0_0},
};
extern TypeInfo IList_1_t31515_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<Games.GlobeDefine.GlobeVar/FLY_SOCKET_TYPE>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m242460_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t31515_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t31515_IList_1_set_Item_m242460_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t31515_MethodInfos[] =
{
	&IList_1_IndexOf_m242461_MethodInfo,
	&IList_1_Insert_m242462_MethodInfo,
	&IList_1_RemoveAt_m242463_MethodInfo,
	&IList_1_get_Item_m242459_MethodInfo,
	&IList_1_set_Item_m242460_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t31514_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t31516_il2cpp_TypeInfo;
static TypeInfo* IList_1_t31515_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t31514_il2cpp_TypeInfo,
	&IEnumerable_1_t31516_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t31515_0_0_0;
extern Il2CppType IList_1_t31515_1_0_0;
struct IList_1_t31515;
extern TypeInfo IList_1_t31515_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t31515_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t31515_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t31515_MethodInfos/* methods */
	, IList_1_t31515_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t31515_il2cpp_TypeInfo/* element_class */
	, IList_1_t31515_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t31515_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t31515_0_0_0/* byval_arg */
	, &IList_1_t31515_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t31515_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t27424_il2cpp_TypeInfo;

// Module.Log.LogModule/LOG_TYPE
#include "AssemblyU2DCSharp_Module_Log_LogModule_LOG_TYPE.h"


// T System.Collections.Generic.IEnumerator`1<Module.Log.LogModule/LOG_TYPE>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<Module.Log.LogModule/LOG_TYPE>
extern MethodInfo IEnumerator_1_get_Current_m242464_MethodInfo;
static PropertyInfo IEnumerator_1_t27424____Current_PropertyInfo = 
{
	&IEnumerator_1_t27424_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m242464_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t27424_PropertyInfos[] =
{
	&IEnumerator_1_t27424____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t27424_il2cpp_TypeInfo;
extern Il2CppType LOG_TYPE_t1159_0_0_0;
extern void* RuntimeInvoker_LOG_TYPE_t1159 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<Module.Log.LogModule/LOG_TYPE>::get_Current()
MethodInfo IEnumerator_1_get_Current_m242464_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t27424_il2cpp_TypeInfo/* declaring_type */
	, &LOG_TYPE_t1159_0_0_0/* return_type */
	, RuntimeInvoker_LOG_TYPE_t1159/* invoker_method */
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
static MethodInfo* IEnumerator_1_t27424_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m242464_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t27424_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t27424_0_0_0;
extern Il2CppType IEnumerator_1_t27424_1_0_0;
struct IEnumerator_1_t27424;
extern TypeInfo IEnumerator_1_t27424_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t27424_GenericClass;
TypeInfo IEnumerator_1_t27424_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t27424_MethodInfos/* methods */
	, IEnumerator_1_t27424_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t27424_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t27424_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t27424_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t27424_0_0_0/* byval_arg */
	, &IEnumerator_1_t27424_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t27424_GenericClass/* generic_class */
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
