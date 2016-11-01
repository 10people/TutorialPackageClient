#include "il2cpp-config.h"
#include "class-internals.h"
#include "codegen/il2cpp-codegen.h"
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#include "stringLiterals.h"
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
extern TypeInfo IList_1_t36843_il2cpp_TypeInfo;

// System.Reflection.FieldAttributes
#include "mscorlib_System_Reflection_FieldAttributes.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>
extern MethodInfo IList_1_get_Item_m271611_MethodInfo;
extern MethodInfo IList_1_set_Item_m271612_MethodInfo;
static PropertyInfo IList_1_t36843____Item_PropertyInfo = 
{
	&IList_1_t36843_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271611_MethodInfo/* get */
	, &IList_1_set_Item_m271612_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36843_PropertyInfos[] =
{
	&IList_1_t36843____Item_PropertyInfo,
	NULL
};
extern Il2CppType FieldAttributes_t7961_0_0_0;
static ParameterInfo IList_1_t36843_IList_1_IndexOf_m271613_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t7961_0_0_0},
};
extern TypeInfo IList_1_t36843_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271613_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36843_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36843_IList_1_IndexOf_m271613_ParameterInfos/* parameters */
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
extern Il2CppType FieldAttributes_t7961_0_0_0;
static ParameterInfo IList_1_t36843_IList_1_Insert_m271614_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t7961_0_0_0},
};
extern TypeInfo IList_1_t36843_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271614_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36843_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36843_IList_1_Insert_m271614_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36843_IList_1_RemoveAt_m271615_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36843_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271615_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36843_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36843_IList_1_RemoveAt_m271615_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36843_IList_1_get_Item_m271611_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36843_il2cpp_TypeInfo;
extern Il2CppType FieldAttributes_t7961_0_0_0;
extern void* RuntimeInvoker_FieldAttributes_t7961_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271611_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36843_il2cpp_TypeInfo/* declaring_type */
	, &FieldAttributes_t7961_0_0_0/* return_type */
	, RuntimeInvoker_FieldAttributes_t7961_Int32_t73/* invoker_method */
	, IList_1_t36843_IList_1_get_Item_m271611_ParameterInfos/* parameters */
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
extern Il2CppType FieldAttributes_t7961_0_0_0;
static ParameterInfo IList_1_t36843_IList_1_set_Item_m271612_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &FieldAttributes_t7961_0_0_0},
};
extern TypeInfo IList_1_t36843_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.FieldAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271612_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36843_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36843_IList_1_set_Item_m271612_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36843_MethodInfos[] =
{
	&IList_1_IndexOf_m271613_MethodInfo,
	&IList_1_Insert_m271614_MethodInfo,
	&IList_1_RemoveAt_m271615_MethodInfo,
	&IList_1_get_Item_m271611_MethodInfo,
	&IList_1_set_Item_m271612_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36842_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36844_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36843_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36842_il2cpp_TypeInfo,
	&IEnumerable_1_t36844_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36843_0_0_0;
extern Il2CppType IList_1_t36843_1_0_0;
struct IList_1_t36843;
extern TypeInfo IList_1_t36843_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36843_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36843_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36843_MethodInfos/* methods */
	, IList_1_t36843_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36843_il2cpp_TypeInfo/* element_class */
	, IList_1_t36843_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36843_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36843_0_0_0/* byval_arg */
	, &IList_1_t36843_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36843_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29225_il2cpp_TypeInfo;

// System.Reflection.MemberTypes
#include "mscorlib_System_Reflection_MemberTypes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>
extern MethodInfo IEnumerator_1_get_Current_m271616_MethodInfo;
static PropertyInfo IEnumerator_1_t29225____Current_PropertyInfo = 
{
	&IEnumerator_1_t29225_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271616_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29225_PropertyInfos[] =
{
	&IEnumerator_1_t29225____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29225_il2cpp_TypeInfo;
extern Il2CppType MemberTypes_t6387_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t6387 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MemberTypes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271616_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29225_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t6387_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t6387/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29225_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271616_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29225_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29225_0_0_0;
extern Il2CppType IEnumerator_1_t29225_1_0_0;
struct IEnumerator_1_t29225;
extern TypeInfo IEnumerator_1_t29225_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29225_GenericClass;
TypeInfo IEnumerator_1_t29225_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29225_MethodInfos/* methods */
	, IEnumerator_1_t29225_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29225_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29225_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29225_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29225_0_0_0/* byval_arg */
	, &IEnumerator_1_t29225_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29225_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2974.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2974MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern TypeInfo MemberTypes_t6387_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m179747_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMemberTypes_t6387_m222840_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberTypes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MemberTypes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMemberTypes_t6387_m222840 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMemberTypes_t6387_m222840_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179742_MethodInfo;
 void InternalEnumerator_1__ctor_m179742 (InternalEnumerator_1_t24767 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179743_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179743 (InternalEnumerator_1_t24767 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744 (InternalEnumerator_1_t24767 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179747(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179747_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MemberTypes_t6387_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179745_MethodInfo;
 void InternalEnumerator_1_Dispose_m179745 (InternalEnumerator_1_t24767 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179746_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179746 (InternalEnumerator_1_t24767 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179747_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179747 (InternalEnumerator_1_t24767 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMemberTypes_t6387_m222840(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMemberTypes_t6387_m222840_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24767____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24767, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24767____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24767, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24767_FieldInfos[] =
{
	&InternalEnumerator_1_t24767____array_FieldInfo,
	&InternalEnumerator_1_t24767____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24767____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24767_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179747_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24767____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24767_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179747_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24767_PropertyInfos[] =
{
	&InternalEnumerator_1_t24767____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24767____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24767_InternalEnumerator_1__ctor_m179742_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179742_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179742/* method */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24767_InternalEnumerator_1__ctor_m179742_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179743_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179743/* method */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744/* method */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179745_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179745/* method */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179746_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179746/* method */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern Il2CppType MemberTypes_t6387_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t6387 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.MemberTypes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179747_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179747/* method */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t6387_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t6387/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24767_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179742_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179743_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744_MethodInfo,
	&InternalEnumerator_1_Dispose_m179745_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179746_MethodInfo,
	&InternalEnumerator_1_get_Current_m179747_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179746_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179743_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179745_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179747_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24767_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179744_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179746_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179743_MethodInfo,
	&InternalEnumerator_1_Dispose_m179745_MethodInfo,
	&InternalEnumerator_1_get_Current_m179747_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29225_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24767_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29225_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29225_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24767_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29225_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24767_0_0_0;
extern Il2CppType InternalEnumerator_1_t24767_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24767_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24767_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24767_MethodInfos/* methods */
	, InternalEnumerator_1_t24767_PropertyInfos/* properties */
	, InternalEnumerator_1_t24767_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24767_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24767_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24767_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24767_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24767_1_0_0/* this_arg */
	, InternalEnumerator_1_t24767_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24767_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24767)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>
extern MethodInfo ICollection_1_get_Count_m271617_MethodInfo;
static PropertyInfo ICollection_1_t36845____Count_PropertyInfo = 
{
	&ICollection_1_t36845_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271617_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271618_MethodInfo;
static PropertyInfo ICollection_1_t36845____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36845_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271618_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36845_PropertyInfos[] =
{
	&ICollection_1_t36845____Count_PropertyInfo,
	&ICollection_1_t36845____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_Count()
MethodInfo ICollection_1_get_Count_m271617_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271618_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MemberTypes_t6387_0_0_0;
static ParameterInfo ICollection_1_t36845_ICollection_1_Add_m271619_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t6387_0_0_0},
};
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Add(T)
MethodInfo ICollection_1_Add_m271619_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36845_ICollection_1_Add_m271619_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Clear()
MethodInfo ICollection_1_Clear_m271620_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MemberTypes_t6387_0_0_0;
static ParameterInfo ICollection_1_t36845_ICollection_1_Contains_m271621_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t6387_0_0_0},
};
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Contains(T)
MethodInfo ICollection_1_Contains_m271621_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36845_ICollection_1_Contains_m271621_ParameterInfos/* parameters */
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
extern Il2CppType MemberTypesU5BU5D_t25297_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36845_ICollection_1_CopyTo_m271622_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypesU5BU5D_t25297_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271622_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36845_ICollection_1_CopyTo_m271622_ParameterInfos/* parameters */
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
extern Il2CppType MemberTypes_t6387_0_0_0;
static ParameterInfo ICollection_1_t36845_ICollection_1_Remove_m271623_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t6387_0_0_0},
};
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MemberTypes>::Remove(T)
MethodInfo ICollection_1_Remove_m271623_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36845_ICollection_1_Remove_m271623_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36845_MethodInfos[] =
{
	&ICollection_1_get_Count_m271617_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271618_MethodInfo,
	&ICollection_1_Add_m271619_MethodInfo,
	&ICollection_1_Clear_m271620_MethodInfo,
	&ICollection_1_Contains_m271621_MethodInfo,
	&ICollection_1_CopyTo_m271622_MethodInfo,
	&ICollection_1_Remove_m271623_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36847_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36845_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36847_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36845_0_0_0;
extern Il2CppType ICollection_1_t36845_1_0_0;
struct ICollection_1_t36845;
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36845_GenericClass;
TypeInfo ICollection_1_t36845_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36845_MethodInfos/* methods */
	, ICollection_1_t36845_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36845_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36845_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36845_0_0_0/* byval_arg */
	, &ICollection_1_t36845_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36845_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36847_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>
extern TypeInfo IEnumerable_1_t36847_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29225_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MemberTypes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271624_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36847_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29225_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36847_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271624_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36847_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36847_0_0_0;
extern Il2CppType IEnumerable_1_t36847_1_0_0;
struct IEnumerable_1_t36847;
extern TypeInfo IEnumerable_1_t36847_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36847_GenericClass;
TypeInfo IEnumerable_1_t36847_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36847_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36847_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36847_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36847_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36847_0_0_0/* byval_arg */
	, &IEnumerable_1_t36847_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36847_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36846_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MemberTypes>
extern MethodInfo IList_1_get_Item_m271625_MethodInfo;
extern MethodInfo IList_1_set_Item_m271626_MethodInfo;
static PropertyInfo IList_1_t36846____Item_PropertyInfo = 
{
	&IList_1_t36846_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271625_MethodInfo/* get */
	, &IList_1_set_Item_m271626_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36846_PropertyInfos[] =
{
	&IList_1_t36846____Item_PropertyInfo,
	NULL
};
extern Il2CppType MemberTypes_t6387_0_0_0;
static ParameterInfo IList_1_t36846_IList_1_IndexOf_m271627_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t6387_0_0_0},
};
extern TypeInfo IList_1_t36846_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271627_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36846_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36846_IList_1_IndexOf_m271627_ParameterInfos/* parameters */
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
extern Il2CppType MemberTypes_t6387_0_0_0;
static ParameterInfo IList_1_t36846_IList_1_Insert_m271628_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t6387_0_0_0},
};
extern TypeInfo IList_1_t36846_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271628_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36846_IList_1_Insert_m271628_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36846_IList_1_RemoveAt_m271629_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36846_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271629_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36846_IList_1_RemoveAt_m271629_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36846_IList_1_get_Item_m271625_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36846_il2cpp_TypeInfo;
extern Il2CppType MemberTypes_t6387_0_0_0;
extern void* RuntimeInvoker_MemberTypes_t6387_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271625_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36846_il2cpp_TypeInfo/* declaring_type */
	, &MemberTypes_t6387_0_0_0/* return_type */
	, RuntimeInvoker_MemberTypes_t6387_Int32_t73/* invoker_method */
	, IList_1_t36846_IList_1_get_Item_m271625_ParameterInfos/* parameters */
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
extern Il2CppType MemberTypes_t6387_0_0_0;
static ParameterInfo IList_1_t36846_IList_1_set_Item_m271626_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MemberTypes_t6387_0_0_0},
};
extern TypeInfo IList_1_t36846_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MemberTypes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271626_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36846_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36846_IList_1_set_Item_m271626_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36846_MethodInfos[] =
{
	&IList_1_IndexOf_m271627_MethodInfo,
	&IList_1_Insert_m271628_MethodInfo,
	&IList_1_RemoveAt_m271629_MethodInfo,
	&IList_1_get_Item_m271625_MethodInfo,
	&IList_1_set_Item_m271626_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36845_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36847_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36846_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36845_il2cpp_TypeInfo,
	&IEnumerable_1_t36847_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36846_0_0_0;
extern Il2CppType IList_1_t36846_1_0_0;
struct IList_1_t36846;
extern TypeInfo IList_1_t36846_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36846_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36846_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36846_MethodInfos/* methods */
	, IList_1_t36846_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36846_il2cpp_TypeInfo/* element_class */
	, IList_1_t36846_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36846_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36846_0_0_0/* byval_arg */
	, &IList_1_t36846_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36846_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29226_il2cpp_TypeInfo;

// System.Reflection.MethodAttributes
#include "mscorlib_System_Reflection_MethodAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>
extern MethodInfo IEnumerator_1_get_Current_m271630_MethodInfo;
static PropertyInfo IEnumerator_1_t29226____Current_PropertyInfo = 
{
	&IEnumerator_1_t29226_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271630_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29226_PropertyInfos[] =
{
	&IEnumerator_1_t29226____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29226_il2cpp_TypeInfo;
extern Il2CppType MethodAttributes_t7963_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t7963 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271630_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29226_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t7963_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t7963/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29226_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271630_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29226_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29226_0_0_0;
extern Il2CppType IEnumerator_1_t29226_1_0_0;
struct IEnumerator_1_t29226;
extern TypeInfo IEnumerator_1_t29226_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29226_GenericClass;
TypeInfo IEnumerator_1_t29226_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29226_MethodInfos/* methods */
	, IEnumerator_1_t29226_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29226_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29226_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29226_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29226_0_0_0/* byval_arg */
	, &IEnumerator_1_t29226_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29226_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2975.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2975MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern TypeInfo MethodAttributes_t7963_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179753_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodAttributes_t7963_m222851_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodAttributes_t7963_m222851 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMethodAttributes_t7963_m222851_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179748_MethodInfo;
 void InternalEnumerator_1__ctor_m179748 (InternalEnumerator_1_t24768 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179749_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179749 (InternalEnumerator_1_t24768 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750 (InternalEnumerator_1_t24768 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179753(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179753_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodAttributes_t7963_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179751_MethodInfo;
 void InternalEnumerator_1_Dispose_m179751 (InternalEnumerator_1_t24768 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179752_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179752 (InternalEnumerator_1_t24768 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179753_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179753 (InternalEnumerator_1_t24768 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodAttributes_t7963_m222851(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodAttributes_t7963_m222851_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24768____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24768, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24768____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24768, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24768_FieldInfos[] =
{
	&InternalEnumerator_1_t24768____array_FieldInfo,
	&InternalEnumerator_1_t24768____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24768____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24768_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179753_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24768____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24768_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179753_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24768_PropertyInfos[] =
{
	&InternalEnumerator_1_t24768____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24768____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24768_InternalEnumerator_1__ctor_m179748_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179748_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179748/* method */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24768_InternalEnumerator_1__ctor_m179748_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179749_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179749/* method */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750/* method */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179751_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179751/* method */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179752_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179752/* method */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern Il2CppType MethodAttributes_t7963_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t7963 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.MethodAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179753_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179753/* method */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t7963_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t7963/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24768_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179748_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179749_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750_MethodInfo,
	&InternalEnumerator_1_Dispose_m179751_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179752_MethodInfo,
	&InternalEnumerator_1_get_Current_m179753_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179752_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179749_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179751_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179753_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24768_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179750_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179752_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179749_MethodInfo,
	&InternalEnumerator_1_Dispose_m179751_MethodInfo,
	&InternalEnumerator_1_get_Current_m179753_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29226_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24768_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29226_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29226_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24768_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29226_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24768_0_0_0;
extern Il2CppType InternalEnumerator_1_t24768_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24768_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24768_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24768_MethodInfos/* methods */
	, InternalEnumerator_1_t24768_PropertyInfos/* properties */
	, InternalEnumerator_1_t24768_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24768_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24768_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24768_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24768_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24768_1_0_0/* this_arg */
	, InternalEnumerator_1_t24768_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24768_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24768)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>
extern MethodInfo ICollection_1_get_Count_m271631_MethodInfo;
static PropertyInfo ICollection_1_t36848____Count_PropertyInfo = 
{
	&ICollection_1_t36848_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271631_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271632_MethodInfo;
static PropertyInfo ICollection_1_t36848____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36848_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271632_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36848_PropertyInfos[] =
{
	&ICollection_1_t36848____Count_PropertyInfo,
	&ICollection_1_t36848____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m271631_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271632_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MethodAttributes_t7963_0_0_0;
static ParameterInfo ICollection_1_t36848_ICollection_1_Add_m271633_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t7963_0_0_0},
};
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Add(T)
MethodInfo ICollection_1_Add_m271633_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36848_ICollection_1_Add_m271633_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Clear()
MethodInfo ICollection_1_Clear_m271634_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MethodAttributes_t7963_0_0_0;
static ParameterInfo ICollection_1_t36848_ICollection_1_Contains_m271635_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t7963_0_0_0},
};
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m271635_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36848_ICollection_1_Contains_m271635_ParameterInfos/* parameters */
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
extern Il2CppType MethodAttributesU5BU5D_t25298_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36848_ICollection_1_CopyTo_m271636_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributesU5BU5D_t25298_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271636_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36848_ICollection_1_CopyTo_m271636_ParameterInfos/* parameters */
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
extern Il2CppType MethodAttributes_t7963_0_0_0;
static ParameterInfo ICollection_1_t36848_ICollection_1_Remove_m271637_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t7963_0_0_0},
};
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m271637_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36848_ICollection_1_Remove_m271637_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36848_MethodInfos[] =
{
	&ICollection_1_get_Count_m271631_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271632_MethodInfo,
	&ICollection_1_Add_m271633_MethodInfo,
	&ICollection_1_Clear_m271634_MethodInfo,
	&ICollection_1_Contains_m271635_MethodInfo,
	&ICollection_1_CopyTo_m271636_MethodInfo,
	&ICollection_1_Remove_m271637_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36850_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36848_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36850_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36848_0_0_0;
extern Il2CppType ICollection_1_t36848_1_0_0;
struct ICollection_1_t36848;
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36848_GenericClass;
TypeInfo ICollection_1_t36848_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36848_MethodInfos/* methods */
	, ICollection_1_t36848_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36848_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36848_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36848_0_0_0/* byval_arg */
	, &ICollection_1_t36848_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36848_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36850_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>
extern TypeInfo IEnumerable_1_t36850_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29226_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271638_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36850_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29226_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36850_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271638_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36850_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36850_0_0_0;
extern Il2CppType IEnumerable_1_t36850_1_0_0;
struct IEnumerable_1_t36850;
extern TypeInfo IEnumerable_1_t36850_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36850_GenericClass;
TypeInfo IEnumerable_1_t36850_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36850_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36850_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36850_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36850_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36850_0_0_0/* byval_arg */
	, &IEnumerable_1_t36850_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36850_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36849_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>
extern MethodInfo IList_1_get_Item_m271639_MethodInfo;
extern MethodInfo IList_1_set_Item_m271640_MethodInfo;
static PropertyInfo IList_1_t36849____Item_PropertyInfo = 
{
	&IList_1_t36849_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271639_MethodInfo/* get */
	, &IList_1_set_Item_m271640_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36849_PropertyInfos[] =
{
	&IList_1_t36849____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodAttributes_t7963_0_0_0;
static ParameterInfo IList_1_t36849_IList_1_IndexOf_m271641_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t7963_0_0_0},
};
extern TypeInfo IList_1_t36849_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271641_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36849_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36849_IList_1_IndexOf_m271641_ParameterInfos/* parameters */
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
extern Il2CppType MethodAttributes_t7963_0_0_0;
static ParameterInfo IList_1_t36849_IList_1_Insert_m271642_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t7963_0_0_0},
};
extern TypeInfo IList_1_t36849_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271642_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36849_IList_1_Insert_m271642_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36849_IList_1_RemoveAt_m271643_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36849_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271643_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36849_IList_1_RemoveAt_m271643_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36849_IList_1_get_Item_m271639_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36849_il2cpp_TypeInfo;
extern Il2CppType MethodAttributes_t7963_0_0_0;
extern void* RuntimeInvoker_MethodAttributes_t7963_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271639_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36849_il2cpp_TypeInfo/* declaring_type */
	, &MethodAttributes_t7963_0_0_0/* return_type */
	, RuntimeInvoker_MethodAttributes_t7963_Int32_t73/* invoker_method */
	, IList_1_t36849_IList_1_get_Item_m271639_ParameterInfos/* parameters */
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
extern Il2CppType MethodAttributes_t7963_0_0_0;
static ParameterInfo IList_1_t36849_IList_1_set_Item_m271640_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodAttributes_t7963_0_0_0},
};
extern TypeInfo IList_1_t36849_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271640_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36849_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36849_IList_1_set_Item_m271640_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36849_MethodInfos[] =
{
	&IList_1_IndexOf_m271641_MethodInfo,
	&IList_1_Insert_m271642_MethodInfo,
	&IList_1_RemoveAt_m271643_MethodInfo,
	&IList_1_get_Item_m271639_MethodInfo,
	&IList_1_set_Item_m271640_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36848_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36850_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36849_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36848_il2cpp_TypeInfo,
	&IEnumerable_1_t36850_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36849_0_0_0;
extern Il2CppType IList_1_t36849_1_0_0;
struct IList_1_t36849;
extern TypeInfo IList_1_t36849_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36849_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36849_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36849_MethodInfos/* methods */
	, IList_1_t36849_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36849_il2cpp_TypeInfo/* element_class */
	, IList_1_t36849_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36849_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36849_0_0_0/* byval_arg */
	, &IList_1_t36849_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36849_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29227_il2cpp_TypeInfo;

// System.Reflection.MethodImplAttributes
#include "mscorlib_System_Reflection_MethodImplAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>
extern MethodInfo IEnumerator_1_get_Current_m271644_MethodInfo;
static PropertyInfo IEnumerator_1_t29227____Current_PropertyInfo = 
{
	&IEnumerator_1_t29227_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271644_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29227_PropertyInfos[] =
{
	&IEnumerator_1_t29227____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29227_il2cpp_TypeInfo;
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t7964 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271644_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29227_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t7964_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t7964/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29227_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271644_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29227_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29227_0_0_0;
extern Il2CppType IEnumerator_1_t29227_1_0_0;
struct IEnumerator_1_t29227;
extern TypeInfo IEnumerator_1_t29227_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29227_GenericClass;
TypeInfo IEnumerator_1_t29227_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29227_MethodInfos/* methods */
	, IEnumerator_1_t29227_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29227_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29227_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29227_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29227_0_0_0/* byval_arg */
	, &IEnumerator_1_t29227_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29227_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2976.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2976MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern TypeInfo MethodImplAttributes_t7964_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179759_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisMethodImplAttributes_t7964_m222862_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodImplAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.MethodImplAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisMethodImplAttributes_t7964_m222862 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisMethodImplAttributes_t7964_m222862_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179754_MethodInfo;
 void InternalEnumerator_1__ctor_m179754 (InternalEnumerator_1_t24769 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179755_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179755 (InternalEnumerator_1_t24769 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756 (InternalEnumerator_1_t24769 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179759(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179759_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&MethodImplAttributes_t7964_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179757_MethodInfo;
 void InternalEnumerator_1_Dispose_m179757 (InternalEnumerator_1_t24769 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179758_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179758 (InternalEnumerator_1_t24769 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179759_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179759 (InternalEnumerator_1_t24769 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisMethodImplAttributes_t7964_m222862(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisMethodImplAttributes_t7964_m222862_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24769____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24769, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24769____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24769, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24769_FieldInfos[] =
{
	&InternalEnumerator_1_t24769____array_FieldInfo,
	&InternalEnumerator_1_t24769____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24769____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24769_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179759_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24769____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24769_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179759_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24769_PropertyInfos[] =
{
	&InternalEnumerator_1_t24769____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24769____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24769_InternalEnumerator_1__ctor_m179754_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179754_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179754/* method */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24769_InternalEnumerator_1__ctor_m179754_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179755_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179755/* method */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756/* method */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179757_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179757/* method */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179758_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179758/* method */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t7964 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.MethodImplAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179759_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179759/* method */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t7964_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t7964/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24769_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179754_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179755_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756_MethodInfo,
	&InternalEnumerator_1_Dispose_m179757_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179758_MethodInfo,
	&InternalEnumerator_1_get_Current_m179759_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179758_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179755_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179757_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179759_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24769_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179756_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179758_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179755_MethodInfo,
	&InternalEnumerator_1_Dispose_m179757_MethodInfo,
	&InternalEnumerator_1_get_Current_m179759_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29227_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24769_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29227_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29227_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24769_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29227_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24769_0_0_0;
extern Il2CppType InternalEnumerator_1_t24769_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24769_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24769_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24769_MethodInfos/* methods */
	, InternalEnumerator_1_t24769_PropertyInfos/* properties */
	, InternalEnumerator_1_t24769_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24769_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24769_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24769_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24769_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24769_1_0_0/* this_arg */
	, InternalEnumerator_1_t24769_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24769_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24769)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>
extern MethodInfo ICollection_1_get_Count_m271645_MethodInfo;
static PropertyInfo ICollection_1_t36851____Count_PropertyInfo = 
{
	&ICollection_1_t36851_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271645_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271646_MethodInfo;
static PropertyInfo ICollection_1_t36851____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36851_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271646_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36851_PropertyInfos[] =
{
	&ICollection_1_t36851____Count_PropertyInfo,
	&ICollection_1_t36851____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m271645_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271646_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
static ParameterInfo ICollection_1_t36851_ICollection_1_Add_m271647_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t7964_0_0_0},
};
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Add(T)
MethodInfo ICollection_1_Add_m271647_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36851_ICollection_1_Add_m271647_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Clear()
MethodInfo ICollection_1_Clear_m271648_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
static ParameterInfo ICollection_1_t36851_ICollection_1_Contains_m271649_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t7964_0_0_0},
};
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m271649_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36851_ICollection_1_Contains_m271649_ParameterInfos/* parameters */
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
extern Il2CppType MethodImplAttributesU5BU5D_t25299_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36851_ICollection_1_CopyTo_m271650_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributesU5BU5D_t25299_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271650_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36851_ICollection_1_CopyTo_m271650_ParameterInfos/* parameters */
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
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
static ParameterInfo ICollection_1_t36851_ICollection_1_Remove_m271651_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t7964_0_0_0},
};
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.MethodImplAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m271651_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36851_ICollection_1_Remove_m271651_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36851_MethodInfos[] =
{
	&ICollection_1_get_Count_m271645_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271646_MethodInfo,
	&ICollection_1_Add_m271647_MethodInfo,
	&ICollection_1_Clear_m271648_MethodInfo,
	&ICollection_1_Contains_m271649_MethodInfo,
	&ICollection_1_CopyTo_m271650_MethodInfo,
	&ICollection_1_Remove_m271651_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36853_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36851_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36853_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36851_0_0_0;
extern Il2CppType ICollection_1_t36851_1_0_0;
struct ICollection_1_t36851;
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36851_GenericClass;
TypeInfo ICollection_1_t36851_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36851_MethodInfos/* methods */
	, ICollection_1_t36851_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36851_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36851_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36851_0_0_0/* byval_arg */
	, &ICollection_1_t36851_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36851_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36853_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>
extern TypeInfo IEnumerable_1_t36853_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29227_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.MethodImplAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271652_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36853_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29227_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36853_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271652_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36853_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36853_0_0_0;
extern Il2CppType IEnumerable_1_t36853_1_0_0;
struct IEnumerable_1_t36853;
extern TypeInfo IEnumerable_1_t36853_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36853_GenericClass;
TypeInfo IEnumerable_1_t36853_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36853_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36853_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36853_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36853_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36853_0_0_0/* byval_arg */
	, &IEnumerable_1_t36853_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36853_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36852_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>
extern MethodInfo IList_1_get_Item_m271653_MethodInfo;
extern MethodInfo IList_1_set_Item_m271654_MethodInfo;
static PropertyInfo IList_1_t36852____Item_PropertyInfo = 
{
	&IList_1_t36852_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271653_MethodInfo/* get */
	, &IList_1_set_Item_m271654_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36852_PropertyInfos[] =
{
	&IList_1_t36852____Item_PropertyInfo,
	NULL
};
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
static ParameterInfo IList_1_t36852_IList_1_IndexOf_m271655_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t7964_0_0_0},
};
extern TypeInfo IList_1_t36852_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271655_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36852_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36852_IList_1_IndexOf_m271655_ParameterInfos/* parameters */
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
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
static ParameterInfo IList_1_t36852_IList_1_Insert_m271656_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t7964_0_0_0},
};
extern TypeInfo IList_1_t36852_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271656_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36852_IList_1_Insert_m271656_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36852_IList_1_RemoveAt_m271657_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36852_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271657_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36852_IList_1_RemoveAt_m271657_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36852_IList_1_get_Item_m271653_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36852_il2cpp_TypeInfo;
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
extern void* RuntimeInvoker_MethodImplAttributes_t7964_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271653_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36852_il2cpp_TypeInfo/* declaring_type */
	, &MethodImplAttributes_t7964_0_0_0/* return_type */
	, RuntimeInvoker_MethodImplAttributes_t7964_Int32_t73/* invoker_method */
	, IList_1_t36852_IList_1_get_Item_m271653_ParameterInfos/* parameters */
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
extern Il2CppType MethodImplAttributes_t7964_0_0_0;
static ParameterInfo IList_1_t36852_IList_1_set_Item_m271654_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &MethodImplAttributes_t7964_0_0_0},
};
extern TypeInfo IList_1_t36852_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.MethodImplAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271654_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36852_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36852_IList_1_set_Item_m271654_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36852_MethodInfos[] =
{
	&IList_1_IndexOf_m271655_MethodInfo,
	&IList_1_Insert_m271656_MethodInfo,
	&IList_1_RemoveAt_m271657_MethodInfo,
	&IList_1_get_Item_m271653_MethodInfo,
	&IList_1_set_Item_m271654_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36851_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36853_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36852_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36851_il2cpp_TypeInfo,
	&IEnumerable_1_t36853_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36852_0_0_0;
extern Il2CppType IList_1_t36852_1_0_0;
struct IList_1_t36852;
extern TypeInfo IList_1_t36852_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36852_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36852_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36852_MethodInfos/* methods */
	, IList_1_t36852_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36852_il2cpp_TypeInfo/* element_class */
	, IList_1_t36852_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36852_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36852_0_0_0/* byval_arg */
	, &IList_1_t36852_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36852_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29228_il2cpp_TypeInfo;

// System.Reflection.PInfo
#include "mscorlib_System_Reflection_PInfo.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>
extern MethodInfo IEnumerator_1_get_Current_m271658_MethodInfo;
static PropertyInfo IEnumerator_1_t29228____Current_PropertyInfo = 
{
	&IEnumerator_1_t29228_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271658_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29228_PropertyInfos[] =
{
	&IEnumerator_1_t29228____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29228_il2cpp_TypeInfo;
extern Il2CppType PInfo_t7977_0_0_0;
extern void* RuntimeInvoker_PInfo_t7977 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PInfo>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271658_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29228_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t7977_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t7977/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29228_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271658_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29228_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29228_0_0_0;
extern Il2CppType IEnumerator_1_t29228_1_0_0;
struct IEnumerator_1_t29228;
extern TypeInfo IEnumerator_1_t29228_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29228_GenericClass;
TypeInfo IEnumerator_1_t29228_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29228_MethodInfos/* methods */
	, IEnumerator_1_t29228_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29228_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29228_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29228_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29228_0_0_0/* byval_arg */
	, &IEnumerator_1_t29228_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29228_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.PInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2977.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PInfo>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2977MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern TypeInfo PInfo_t7977_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179765_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPInfo_t7977_m222873_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PInfo>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PInfo>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPInfo_t7977_m222873 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPInfo_t7977_m222873_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179760_MethodInfo;
 void InternalEnumerator_1__ctor_m179760 (InternalEnumerator_1_t24770 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179761_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179761 (InternalEnumerator_1_t24770 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762 (InternalEnumerator_1_t24770 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179765(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179765_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PInfo_t7977_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179763_MethodInfo;
 void InternalEnumerator_1_Dispose_m179763 (InternalEnumerator_1_t24770 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PInfo>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179764_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179764 (InternalEnumerator_1_t24770 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.PInfo>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179765_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179765 (InternalEnumerator_1_t24770 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPInfo_t7977_m222873(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPInfo_t7977_m222873_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PInfo>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24770____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24770, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24770____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24770, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24770_FieldInfos[] =
{
	&InternalEnumerator_1_t24770____array_FieldInfo,
	&InternalEnumerator_1_t24770____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24770____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24770_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179765_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24770____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24770_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179765_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24770_PropertyInfos[] =
{
	&InternalEnumerator_1_t24770____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24770____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24770_InternalEnumerator_1__ctor_m179760_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179760_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179760/* method */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24770_InternalEnumerator_1__ctor_m179760_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179761_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179761/* method */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PInfo>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762/* method */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PInfo>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179763_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179763/* method */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PInfo>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179764_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179764/* method */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern Il2CppType PInfo_t7977_0_0_0;
extern void* RuntimeInvoker_PInfo_t7977 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.PInfo>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179765_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179765/* method */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t7977_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t7977/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24770_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179760_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179761_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762_MethodInfo,
	&InternalEnumerator_1_Dispose_m179763_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179764_MethodInfo,
	&InternalEnumerator_1_get_Current_m179765_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179764_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179761_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179763_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179765_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24770_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179762_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179764_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179761_MethodInfo,
	&InternalEnumerator_1_Dispose_m179763_MethodInfo,
	&InternalEnumerator_1_get_Current_m179765_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29228_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24770_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29228_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29228_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24770_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29228_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24770_0_0_0;
extern Il2CppType InternalEnumerator_1_t24770_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24770_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24770_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24770_MethodInfos/* methods */
	, InternalEnumerator_1_t24770_PropertyInfos/* properties */
	, InternalEnumerator_1_t24770_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24770_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24770_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24770_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24770_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24770_1_0_0/* this_arg */
	, InternalEnumerator_1_t24770_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24770_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24770)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PInfo>
extern MethodInfo ICollection_1_get_Count_m271659_MethodInfo;
static PropertyInfo ICollection_1_t36854____Count_PropertyInfo = 
{
	&ICollection_1_t36854_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271659_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271660_MethodInfo;
static PropertyInfo ICollection_1_t36854____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36854_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271660_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36854_PropertyInfos[] =
{
	&ICollection_1_t36854____Count_PropertyInfo,
	&ICollection_1_t36854____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_Count()
MethodInfo ICollection_1_get_Count_m271659_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271660_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PInfo_t7977_0_0_0;
static ParameterInfo ICollection_1_t36854_ICollection_1_Add_m271661_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t7977_0_0_0},
};
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Add(T)
MethodInfo ICollection_1_Add_m271661_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36854_ICollection_1_Add_m271661_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Clear()
MethodInfo ICollection_1_Clear_m271662_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PInfo_t7977_0_0_0;
static ParameterInfo ICollection_1_t36854_ICollection_1_Contains_m271663_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t7977_0_0_0},
};
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Contains(T)
MethodInfo ICollection_1_Contains_m271663_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36854_ICollection_1_Contains_m271663_ParameterInfos/* parameters */
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
extern Il2CppType PInfoU5BU5D_t25300_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36854_ICollection_1_CopyTo_m271664_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PInfoU5BU5D_t25300_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271664_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36854_ICollection_1_CopyTo_m271664_ParameterInfos/* parameters */
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
extern Il2CppType PInfo_t7977_0_0_0;
static ParameterInfo ICollection_1_t36854_ICollection_1_Remove_m271665_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t7977_0_0_0},
};
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PInfo>::Remove(T)
MethodInfo ICollection_1_Remove_m271665_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36854_ICollection_1_Remove_m271665_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36854_MethodInfos[] =
{
	&ICollection_1_get_Count_m271659_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271660_MethodInfo,
	&ICollection_1_Add_m271661_MethodInfo,
	&ICollection_1_Clear_m271662_MethodInfo,
	&ICollection_1_Contains_m271663_MethodInfo,
	&ICollection_1_CopyTo_m271664_MethodInfo,
	&ICollection_1_Remove_m271665_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36856_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36854_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36856_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36854_0_0_0;
extern Il2CppType ICollection_1_t36854_1_0_0;
struct ICollection_1_t36854;
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36854_GenericClass;
TypeInfo ICollection_1_t36854_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36854_MethodInfos/* methods */
	, ICollection_1_t36854_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36854_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36854_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36854_0_0_0/* byval_arg */
	, &ICollection_1_t36854_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36854_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36856_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>
extern TypeInfo IEnumerable_1_t36856_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29228_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PInfo>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271666_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36856_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29228_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36856_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271666_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36856_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36856_0_0_0;
extern Il2CppType IEnumerable_1_t36856_1_0_0;
struct IEnumerable_1_t36856;
extern TypeInfo IEnumerable_1_t36856_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36856_GenericClass;
TypeInfo IEnumerable_1_t36856_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36856_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36856_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36856_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36856_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36856_0_0_0/* byval_arg */
	, &IEnumerable_1_t36856_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36856_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36855_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PInfo>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PInfo>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PInfo>
extern MethodInfo IList_1_get_Item_m271667_MethodInfo;
extern MethodInfo IList_1_set_Item_m271668_MethodInfo;
static PropertyInfo IList_1_t36855____Item_PropertyInfo = 
{
	&IList_1_t36855_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271667_MethodInfo/* get */
	, &IList_1_set_Item_m271668_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36855_PropertyInfos[] =
{
	&IList_1_t36855____Item_PropertyInfo,
	NULL
};
extern Il2CppType PInfo_t7977_0_0_0;
static ParameterInfo IList_1_t36855_IList_1_IndexOf_m271669_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PInfo_t7977_0_0_0},
};
extern TypeInfo IList_1_t36855_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PInfo>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271669_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36855_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36855_IList_1_IndexOf_m271669_ParameterInfos/* parameters */
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
extern Il2CppType PInfo_t7977_0_0_0;
static ParameterInfo IList_1_t36855_IList_1_Insert_m271670_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PInfo_t7977_0_0_0},
};
extern TypeInfo IList_1_t36855_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271670_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36855_IList_1_Insert_m271670_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36855_IList_1_RemoveAt_m271671_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36855_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271671_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36855_IList_1_RemoveAt_m271671_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36855_IList_1_get_Item_m271667_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36855_il2cpp_TypeInfo;
extern Il2CppType PInfo_t7977_0_0_0;
extern void* RuntimeInvoker_PInfo_t7977_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.PInfo>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271667_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36855_il2cpp_TypeInfo/* declaring_type */
	, &PInfo_t7977_0_0_0/* return_type */
	, RuntimeInvoker_PInfo_t7977_Int32_t73/* invoker_method */
	, IList_1_t36855_IList_1_get_Item_m271667_ParameterInfos/* parameters */
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
extern Il2CppType PInfo_t7977_0_0_0;
static ParameterInfo IList_1_t36855_IList_1_set_Item_m271668_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PInfo_t7977_0_0_0},
};
extern TypeInfo IList_1_t36855_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.PInfo>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271668_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36855_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36855_IList_1_set_Item_m271668_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36855_MethodInfos[] =
{
	&IList_1_IndexOf_m271669_MethodInfo,
	&IList_1_Insert_m271670_MethodInfo,
	&IList_1_RemoveAt_m271671_MethodInfo,
	&IList_1_get_Item_m271667_MethodInfo,
	&IList_1_set_Item_m271668_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36854_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36856_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36855_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36854_il2cpp_TypeInfo,
	&IEnumerable_1_t36856_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36855_0_0_0;
extern Il2CppType IList_1_t36855_1_0_0;
struct IList_1_t36855;
extern TypeInfo IList_1_t36855_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36855_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36855_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36855_MethodInfos/* methods */
	, IList_1_t36855_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36855_il2cpp_TypeInfo/* element_class */
	, IList_1_t36855_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36855_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36855_0_0_0/* byval_arg */
	, &IList_1_t36855_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36855_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29229_il2cpp_TypeInfo;

// System.Reflection.ParameterAttributes
#include "mscorlib_System_Reflection_ParameterAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>
extern MethodInfo IEnumerator_1_get_Current_m271672_MethodInfo;
static PropertyInfo IEnumerator_1_t29229____Current_PropertyInfo = 
{
	&IEnumerator_1_t29229_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271672_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29229_PropertyInfos[] =
{
	&IEnumerator_1_t29229____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29229_il2cpp_TypeInfo;
extern Il2CppType ParameterAttributes_t7979_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t7979 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271672_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29229_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t7979_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t7979/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29229_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271672_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29229_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29229_0_0_0;
extern Il2CppType IEnumerator_1_t29229_1_0_0;
struct IEnumerator_1_t29229;
extern TypeInfo IEnumerator_1_t29229_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29229_GenericClass;
TypeInfo IEnumerator_1_t29229_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29229_MethodInfos/* methods */
	, IEnumerator_1_t29229_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29229_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29229_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29229_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29229_0_0_0/* byval_arg */
	, &IEnumerator_1_t29229_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29229_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2978.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2978MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern TypeInfo ParameterAttributes_t7979_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179771_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisParameterAttributes_t7979_m222884_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ParameterAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisParameterAttributes_t7979_m222884 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisParameterAttributes_t7979_m222884_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179766_MethodInfo;
 void InternalEnumerator_1__ctor_m179766 (InternalEnumerator_1_t24771 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179767_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179767 (InternalEnumerator_1_t24771 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768 (InternalEnumerator_1_t24771 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179771(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179771_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ParameterAttributes_t7979_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179769_MethodInfo;
 void InternalEnumerator_1_Dispose_m179769 (InternalEnumerator_1_t24771 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179770_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179770 (InternalEnumerator_1_t24771 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179771_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179771 (InternalEnumerator_1_t24771 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisParameterAttributes_t7979_m222884(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisParameterAttributes_t7979_m222884_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24771____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24771, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24771____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24771, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24771_FieldInfos[] =
{
	&InternalEnumerator_1_t24771____array_FieldInfo,
	&InternalEnumerator_1_t24771____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24771____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24771_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179771_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24771____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24771_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179771_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24771_PropertyInfos[] =
{
	&InternalEnumerator_1_t24771____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24771____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24771_InternalEnumerator_1__ctor_m179766_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179766_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179766/* method */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24771_InternalEnumerator_1__ctor_m179766_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179767_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179767/* method */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768/* method */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179769_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179769/* method */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179770_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179770/* method */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern Il2CppType ParameterAttributes_t7979_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t7979 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.ParameterAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179771_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179771/* method */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t7979_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t7979/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24771_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179766_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179767_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768_MethodInfo,
	&InternalEnumerator_1_Dispose_m179769_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179770_MethodInfo,
	&InternalEnumerator_1_get_Current_m179771_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179770_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179767_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179769_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179771_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24771_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179768_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179770_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179767_MethodInfo,
	&InternalEnumerator_1_Dispose_m179769_MethodInfo,
	&InternalEnumerator_1_get_Current_m179771_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29229_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24771_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29229_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29229_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24771_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29229_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24771_0_0_0;
extern Il2CppType InternalEnumerator_1_t24771_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24771_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24771_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24771_MethodInfos/* methods */
	, InternalEnumerator_1_t24771_PropertyInfos/* properties */
	, InternalEnumerator_1_t24771_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24771_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24771_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24771_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24771_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24771_1_0_0/* this_arg */
	, InternalEnumerator_1_t24771_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24771_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24771)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>
extern MethodInfo ICollection_1_get_Count_m271673_MethodInfo;
static PropertyInfo ICollection_1_t36857____Count_PropertyInfo = 
{
	&ICollection_1_t36857_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271673_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271674_MethodInfo;
static PropertyInfo ICollection_1_t36857____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36857_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271674_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36857_PropertyInfos[] =
{
	&ICollection_1_t36857____Count_PropertyInfo,
	&ICollection_1_t36857____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m271673_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271674_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ParameterAttributes_t7979_0_0_0;
static ParameterInfo ICollection_1_t36857_ICollection_1_Add_m271675_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t7979_0_0_0},
};
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Add(T)
MethodInfo ICollection_1_Add_m271675_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36857_ICollection_1_Add_m271675_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Clear()
MethodInfo ICollection_1_Clear_m271676_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ParameterAttributes_t7979_0_0_0;
static ParameterInfo ICollection_1_t36857_ICollection_1_Contains_m271677_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t7979_0_0_0},
};
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m271677_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36857_ICollection_1_Contains_m271677_ParameterInfos/* parameters */
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
extern Il2CppType ParameterAttributesU5BU5D_t25301_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36857_ICollection_1_CopyTo_m271678_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributesU5BU5D_t25301_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271678_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36857_ICollection_1_CopyTo_m271678_ParameterInfos/* parameters */
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
extern Il2CppType ParameterAttributes_t7979_0_0_0;
static ParameterInfo ICollection_1_t36857_ICollection_1_Remove_m271679_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t7979_0_0_0},
};
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ParameterAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m271679_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36857_ICollection_1_Remove_m271679_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36857_MethodInfos[] =
{
	&ICollection_1_get_Count_m271673_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271674_MethodInfo,
	&ICollection_1_Add_m271675_MethodInfo,
	&ICollection_1_Clear_m271676_MethodInfo,
	&ICollection_1_Contains_m271677_MethodInfo,
	&ICollection_1_CopyTo_m271678_MethodInfo,
	&ICollection_1_Remove_m271679_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36859_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36857_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36859_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36857_0_0_0;
extern Il2CppType ICollection_1_t36857_1_0_0;
struct ICollection_1_t36857;
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36857_GenericClass;
TypeInfo ICollection_1_t36857_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36857_MethodInfos/* methods */
	, ICollection_1_t36857_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36857_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36857_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36857_0_0_0/* byval_arg */
	, &ICollection_1_t36857_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36857_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36859_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>
extern TypeInfo IEnumerable_1_t36859_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29229_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ParameterAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271680_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36859_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29229_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36859_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271680_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36859_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36859_0_0_0;
extern Il2CppType IEnumerable_1_t36859_1_0_0;
struct IEnumerable_1_t36859;
extern TypeInfo IEnumerable_1_t36859_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36859_GenericClass;
TypeInfo IEnumerable_1_t36859_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36859_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36859_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36859_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36859_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36859_0_0_0/* byval_arg */
	, &IEnumerable_1_t36859_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36859_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36858_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>
extern MethodInfo IList_1_get_Item_m271681_MethodInfo;
extern MethodInfo IList_1_set_Item_m271682_MethodInfo;
static PropertyInfo IList_1_t36858____Item_PropertyInfo = 
{
	&IList_1_t36858_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271681_MethodInfo/* get */
	, &IList_1_set_Item_m271682_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36858_PropertyInfos[] =
{
	&IList_1_t36858____Item_PropertyInfo,
	NULL
};
extern Il2CppType ParameterAttributes_t7979_0_0_0;
static ParameterInfo IList_1_t36858_IList_1_IndexOf_m271683_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t7979_0_0_0},
};
extern TypeInfo IList_1_t36858_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271683_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36858_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36858_IList_1_IndexOf_m271683_ParameterInfos/* parameters */
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
extern Il2CppType ParameterAttributes_t7979_0_0_0;
static ParameterInfo IList_1_t36858_IList_1_Insert_m271684_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t7979_0_0_0},
};
extern TypeInfo IList_1_t36858_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271684_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36858_IList_1_Insert_m271684_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36858_IList_1_RemoveAt_m271685_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36858_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271685_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36858_IList_1_RemoveAt_m271685_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36858_IList_1_get_Item_m271681_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36858_il2cpp_TypeInfo;
extern Il2CppType ParameterAttributes_t7979_0_0_0;
extern void* RuntimeInvoker_ParameterAttributes_t7979_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271681_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36858_il2cpp_TypeInfo/* declaring_type */
	, &ParameterAttributes_t7979_0_0_0/* return_type */
	, RuntimeInvoker_ParameterAttributes_t7979_Int32_t73/* invoker_method */
	, IList_1_t36858_IList_1_get_Item_m271681_ParameterInfos/* parameters */
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
extern Il2CppType ParameterAttributes_t7979_0_0_0;
static ParameterInfo IList_1_t36858_IList_1_set_Item_m271682_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ParameterAttributes_t7979_0_0_0},
};
extern TypeInfo IList_1_t36858_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.ParameterAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271682_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36858_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36858_IList_1_set_Item_m271682_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36858_MethodInfos[] =
{
	&IList_1_IndexOf_m271683_MethodInfo,
	&IList_1_Insert_m271684_MethodInfo,
	&IList_1_RemoveAt_m271685_MethodInfo,
	&IList_1_get_Item_m271681_MethodInfo,
	&IList_1_set_Item_m271682_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36857_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36859_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36858_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36857_il2cpp_TypeInfo,
	&IEnumerable_1_t36859_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36858_0_0_0;
extern Il2CppType IList_1_t36858_1_0_0;
struct IList_1_t36858;
extern TypeInfo IList_1_t36858_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36858_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36858_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36858_MethodInfos/* methods */
	, IList_1_t36858_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36858_il2cpp_TypeInfo/* element_class */
	, IList_1_t36858_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36858_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36858_0_0_0/* byval_arg */
	, &IList_1_t36858_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36858_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29230_il2cpp_TypeInfo;

// System.Reflection.ProcessorArchitecture
#include "mscorlib_System_Reflection_ProcessorArchitecture.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo IEnumerator_1_get_Current_m271686_MethodInfo;
static PropertyInfo IEnumerator_1_t29230____Current_PropertyInfo = 
{
	&IEnumerator_1_t29230_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271686_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29230_PropertyInfos[] =
{
	&IEnumerator_1_t29230____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29230_il2cpp_TypeInfo;
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t7981 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271686_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29230_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t7981_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t7981/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29230_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271686_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29230_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29230_0_0_0;
extern Il2CppType IEnumerator_1_t29230_1_0_0;
struct IEnumerator_1_t29230;
extern TypeInfo IEnumerator_1_t29230_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29230_GenericClass;
TypeInfo IEnumerator_1_t29230_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29230_MethodInfos/* methods */
	, IEnumerator_1_t29230_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29230_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29230_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29230_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29230_0_0_0/* byval_arg */
	, &IEnumerator_1_t29230_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29230_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2979.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2979MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern TypeInfo ProcessorArchitecture_t7981_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179777_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisProcessorArchitecture_t7981_m222895_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.ProcessorArchitecture>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.ProcessorArchitecture>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisProcessorArchitecture_t7981_m222895 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisProcessorArchitecture_t7981_m222895_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179772_MethodInfo;
 void InternalEnumerator_1__ctor_m179772 (InternalEnumerator_1_t24772 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179773_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179773 (InternalEnumerator_1_t24772 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774 (InternalEnumerator_1_t24772 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179777(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179777_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ProcessorArchitecture_t7981_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179775_MethodInfo;
 void InternalEnumerator_1_Dispose_m179775 (InternalEnumerator_1_t24772 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179776_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179776 (InternalEnumerator_1_t24772 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179777_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179777 (InternalEnumerator_1_t24772 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisProcessorArchitecture_t7981_m222895(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisProcessorArchitecture_t7981_m222895_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24772____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24772, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24772____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24772, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24772_FieldInfos[] =
{
	&InternalEnumerator_1_t24772____array_FieldInfo,
	&InternalEnumerator_1_t24772____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24772____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24772_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179777_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24772____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24772_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179777_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24772_PropertyInfos[] =
{
	&InternalEnumerator_1_t24772____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24772____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24772_InternalEnumerator_1__ctor_m179772_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179772_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179772/* method */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24772_InternalEnumerator_1__ctor_m179772_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179773_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179773/* method */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774/* method */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179775_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179775/* method */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179776_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179776/* method */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t7981 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.ProcessorArchitecture>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179777_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179777/* method */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t7981_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t7981/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24772_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179772_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179773_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774_MethodInfo,
	&InternalEnumerator_1_Dispose_m179775_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179776_MethodInfo,
	&InternalEnumerator_1_get_Current_m179777_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179776_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179773_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179775_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179777_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24772_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179774_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179776_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179773_MethodInfo,
	&InternalEnumerator_1_Dispose_m179775_MethodInfo,
	&InternalEnumerator_1_get_Current_m179777_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29230_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24772_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29230_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29230_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24772_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29230_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24772_0_0_0;
extern Il2CppType InternalEnumerator_1_t24772_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24772_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24772_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24772_MethodInfos/* methods */
	, InternalEnumerator_1_t24772_PropertyInfos/* properties */
	, InternalEnumerator_1_t24772_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24772_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24772_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24772_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24772_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24772_1_0_0/* this_arg */
	, InternalEnumerator_1_t24772_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24772_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24772)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo ICollection_1_get_Count_m271687_MethodInfo;
static PropertyInfo ICollection_1_t36860____Count_PropertyInfo = 
{
	&ICollection_1_t36860_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271687_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271688_MethodInfo;
static PropertyInfo ICollection_1_t36860____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36860_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271688_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36860_PropertyInfos[] =
{
	&ICollection_1_t36860____Count_PropertyInfo,
	&ICollection_1_t36860____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_Count()
MethodInfo ICollection_1_get_Count_m271687_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271688_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
static ParameterInfo ICollection_1_t36860_ICollection_1_Add_m271689_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t7981_0_0_0},
};
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Add(T)
MethodInfo ICollection_1_Add_m271689_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36860_ICollection_1_Add_m271689_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Clear()
MethodInfo ICollection_1_Clear_m271690_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
static ParameterInfo ICollection_1_t36860_ICollection_1_Contains_m271691_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t7981_0_0_0},
};
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Contains(T)
MethodInfo ICollection_1_Contains_m271691_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36860_ICollection_1_Contains_m271691_ParameterInfos/* parameters */
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
extern Il2CppType ProcessorArchitectureU5BU5D_t25302_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36860_ICollection_1_CopyTo_m271692_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitectureU5BU5D_t25302_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271692_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36860_ICollection_1_CopyTo_m271692_ParameterInfos/* parameters */
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
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
static ParameterInfo ICollection_1_t36860_ICollection_1_Remove_m271693_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t7981_0_0_0},
};
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.ProcessorArchitecture>::Remove(T)
MethodInfo ICollection_1_Remove_m271693_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36860_ICollection_1_Remove_m271693_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36860_MethodInfos[] =
{
	&ICollection_1_get_Count_m271687_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271688_MethodInfo,
	&ICollection_1_Add_m271689_MethodInfo,
	&ICollection_1_Clear_m271690_MethodInfo,
	&ICollection_1_Contains_m271691_MethodInfo,
	&ICollection_1_CopyTo_m271692_MethodInfo,
	&ICollection_1_Remove_m271693_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36862_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36860_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36862_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36860_0_0_0;
extern Il2CppType ICollection_1_t36860_1_0_0;
struct ICollection_1_t36860;
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36860_GenericClass;
TypeInfo ICollection_1_t36860_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36860_MethodInfos/* methods */
	, ICollection_1_t36860_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36860_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36860_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36860_0_0_0/* byval_arg */
	, &ICollection_1_t36860_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36860_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36862_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>
extern TypeInfo IEnumerable_1_t36862_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29230_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.ProcessorArchitecture>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271694_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36862_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29230_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36862_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271694_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36862_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36862_0_0_0;
extern Il2CppType IEnumerable_1_t36862_1_0_0;
struct IEnumerable_1_t36862;
extern TypeInfo IEnumerable_1_t36862_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36862_GenericClass;
TypeInfo IEnumerable_1_t36862_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36862_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36862_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36862_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36862_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36862_0_0_0/* byval_arg */
	, &IEnumerable_1_t36862_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36862_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36861_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>
extern MethodInfo IList_1_get_Item_m271695_MethodInfo;
extern MethodInfo IList_1_set_Item_m271696_MethodInfo;
static PropertyInfo IList_1_t36861____Item_PropertyInfo = 
{
	&IList_1_t36861_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271695_MethodInfo/* get */
	, &IList_1_set_Item_m271696_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36861_PropertyInfos[] =
{
	&IList_1_t36861____Item_PropertyInfo,
	NULL
};
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
static ParameterInfo IList_1_t36861_IList_1_IndexOf_m271697_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t7981_0_0_0},
};
extern TypeInfo IList_1_t36861_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271697_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36861_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36861_IList_1_IndexOf_m271697_ParameterInfos/* parameters */
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
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
static ParameterInfo IList_1_t36861_IList_1_Insert_m271698_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t7981_0_0_0},
};
extern TypeInfo IList_1_t36861_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271698_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36861_IList_1_Insert_m271698_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36861_IList_1_RemoveAt_m271699_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36861_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271699_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36861_IList_1_RemoveAt_m271699_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36861_IList_1_get_Item_m271695_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36861_il2cpp_TypeInfo;
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
extern void* RuntimeInvoker_ProcessorArchitecture_t7981_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271695_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36861_il2cpp_TypeInfo/* declaring_type */
	, &ProcessorArchitecture_t7981_0_0_0/* return_type */
	, RuntimeInvoker_ProcessorArchitecture_t7981_Int32_t73/* invoker_method */
	, IList_1_t36861_IList_1_get_Item_m271695_ParameterInfos/* parameters */
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
extern Il2CppType ProcessorArchitecture_t7981_0_0_0;
static ParameterInfo IList_1_t36861_IList_1_set_Item_m271696_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ProcessorArchitecture_t7981_0_0_0},
};
extern TypeInfo IList_1_t36861_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.ProcessorArchitecture>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271696_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36861_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36861_IList_1_set_Item_m271696_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36861_MethodInfos[] =
{
	&IList_1_IndexOf_m271697_MethodInfo,
	&IList_1_Insert_m271698_MethodInfo,
	&IList_1_RemoveAt_m271699_MethodInfo,
	&IList_1_get_Item_m271695_MethodInfo,
	&IList_1_set_Item_m271696_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36860_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36862_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36861_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36860_il2cpp_TypeInfo,
	&IEnumerable_1_t36862_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36861_0_0_0;
extern Il2CppType IList_1_t36861_1_0_0;
struct IList_1_t36861;
extern TypeInfo IList_1_t36861_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36861_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36861_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36861_MethodInfos/* methods */
	, IList_1_t36861_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36861_il2cpp_TypeInfo/* element_class */
	, IList_1_t36861_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36861_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36861_0_0_0/* byval_arg */
	, &IList_1_t36861_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36861_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29231_il2cpp_TypeInfo;

// System.Reflection.PropertyAttributes
#include "mscorlib_System_Reflection_PropertyAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>
extern MethodInfo IEnumerator_1_get_Current_m271700_MethodInfo;
static PropertyInfo IEnumerator_1_t29231____Current_PropertyInfo = 
{
	&IEnumerator_1_t29231_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271700_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29231_PropertyInfos[] =
{
	&IEnumerator_1_t29231____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29231_il2cpp_TypeInfo;
extern Il2CppType PropertyAttributes_t7982_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t7982 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271700_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29231_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t7982_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t7982/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29231_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271700_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29231_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29231_0_0_0;
extern Il2CppType IEnumerator_1_t29231_1_0_0;
struct IEnumerator_1_t29231;
extern TypeInfo IEnumerator_1_t29231_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29231_GenericClass;
TypeInfo IEnumerator_1_t29231_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29231_MethodInfos/* methods */
	, IEnumerator_1_t29231_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29231_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29231_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29231_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29231_0_0_0/* byval_arg */
	, &IEnumerator_1_t29231_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29231_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2980.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2980MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern TypeInfo PropertyAttributes_t7982_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179783_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPropertyAttributes_t7982_m222906_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.PropertyAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisPropertyAttributes_t7982_m222906 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisPropertyAttributes_t7982_m222906_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179778_MethodInfo;
 void InternalEnumerator_1__ctor_m179778 (InternalEnumerator_1_t24773 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179779_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179779 (InternalEnumerator_1_t24773 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780 (InternalEnumerator_1_t24773 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179783(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179783_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&PropertyAttributes_t7982_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179781_MethodInfo;
 void InternalEnumerator_1_Dispose_m179781 (InternalEnumerator_1_t24773 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179782_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179782 (InternalEnumerator_1_t24773 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179783_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179783 (InternalEnumerator_1_t24773 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisPropertyAttributes_t7982_m222906(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisPropertyAttributes_t7982_m222906_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24773____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24773, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24773____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24773, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24773_FieldInfos[] =
{
	&InternalEnumerator_1_t24773____array_FieldInfo,
	&InternalEnumerator_1_t24773____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24773____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24773_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179783_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24773____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24773_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179783_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24773_PropertyInfos[] =
{
	&InternalEnumerator_1_t24773____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24773____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24773_InternalEnumerator_1__ctor_m179778_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179778_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179778/* method */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24773_InternalEnumerator_1__ctor_m179778_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179779_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179779/* method */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780/* method */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179781_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179781/* method */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179782_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179782/* method */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern Il2CppType PropertyAttributes_t7982_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t7982 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.PropertyAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179783_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179783/* method */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t7982_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t7982/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24773_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179778_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179779_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780_MethodInfo,
	&InternalEnumerator_1_Dispose_m179781_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179782_MethodInfo,
	&InternalEnumerator_1_get_Current_m179783_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179782_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179779_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179781_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179783_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24773_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179780_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179782_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179779_MethodInfo,
	&InternalEnumerator_1_Dispose_m179781_MethodInfo,
	&InternalEnumerator_1_get_Current_m179783_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29231_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24773_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29231_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29231_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24773_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29231_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24773_0_0_0;
extern Il2CppType InternalEnumerator_1_t24773_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24773_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24773_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24773_MethodInfos/* methods */
	, InternalEnumerator_1_t24773_PropertyInfos/* properties */
	, InternalEnumerator_1_t24773_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24773_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24773_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24773_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24773_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24773_1_0_0/* this_arg */
	, InternalEnumerator_1_t24773_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24773_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24773)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>
extern MethodInfo ICollection_1_get_Count_m271701_MethodInfo;
static PropertyInfo ICollection_1_t36863____Count_PropertyInfo = 
{
	&ICollection_1_t36863_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271701_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271702_MethodInfo;
static PropertyInfo ICollection_1_t36863____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36863_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271702_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36863_PropertyInfos[] =
{
	&ICollection_1_t36863____Count_PropertyInfo,
	&ICollection_1_t36863____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m271701_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271702_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PropertyAttributes_t7982_0_0_0;
static ParameterInfo ICollection_1_t36863_ICollection_1_Add_m271703_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t7982_0_0_0},
};
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Add(T)
MethodInfo ICollection_1_Add_m271703_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36863_ICollection_1_Add_m271703_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Clear()
MethodInfo ICollection_1_Clear_m271704_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PropertyAttributes_t7982_0_0_0;
static ParameterInfo ICollection_1_t36863_ICollection_1_Contains_m271705_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t7982_0_0_0},
};
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m271705_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36863_ICollection_1_Contains_m271705_ParameterInfos/* parameters */
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
extern Il2CppType PropertyAttributesU5BU5D_t25303_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36863_ICollection_1_CopyTo_m271706_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributesU5BU5D_t25303_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271706_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36863_ICollection_1_CopyTo_m271706_ParameterInfos/* parameters */
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
extern Il2CppType PropertyAttributes_t7982_0_0_0;
static ParameterInfo ICollection_1_t36863_ICollection_1_Remove_m271707_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t7982_0_0_0},
};
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.PropertyAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m271707_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36863_ICollection_1_Remove_m271707_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36863_MethodInfos[] =
{
	&ICollection_1_get_Count_m271701_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271702_MethodInfo,
	&ICollection_1_Add_m271703_MethodInfo,
	&ICollection_1_Clear_m271704_MethodInfo,
	&ICollection_1_Contains_m271705_MethodInfo,
	&ICollection_1_CopyTo_m271706_MethodInfo,
	&ICollection_1_Remove_m271707_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36865_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36863_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36865_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36863_0_0_0;
extern Il2CppType ICollection_1_t36863_1_0_0;
struct ICollection_1_t36863;
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36863_GenericClass;
TypeInfo ICollection_1_t36863_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36863_MethodInfos/* methods */
	, ICollection_1_t36863_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36863_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36863_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36863_0_0_0/* byval_arg */
	, &ICollection_1_t36863_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36863_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36865_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>
extern TypeInfo IEnumerable_1_t36865_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29231_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.PropertyAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271708_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36865_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29231_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36865_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271708_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36865_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36865_0_0_0;
extern Il2CppType IEnumerable_1_t36865_1_0_0;
struct IEnumerable_1_t36865;
extern TypeInfo IEnumerable_1_t36865_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36865_GenericClass;
TypeInfo IEnumerable_1_t36865_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36865_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36865_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36865_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36865_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36865_0_0_0/* byval_arg */
	, &IEnumerable_1_t36865_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36865_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36864_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>
extern MethodInfo IList_1_get_Item_m271709_MethodInfo;
extern MethodInfo IList_1_set_Item_m271710_MethodInfo;
static PropertyInfo IList_1_t36864____Item_PropertyInfo = 
{
	&IList_1_t36864_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271709_MethodInfo/* get */
	, &IList_1_set_Item_m271710_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36864_PropertyInfos[] =
{
	&IList_1_t36864____Item_PropertyInfo,
	NULL
};
extern Il2CppType PropertyAttributes_t7982_0_0_0;
static ParameterInfo IList_1_t36864_IList_1_IndexOf_m271711_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t7982_0_0_0},
};
extern TypeInfo IList_1_t36864_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271711_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36864_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36864_IList_1_IndexOf_m271711_ParameterInfos/* parameters */
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
extern Il2CppType PropertyAttributes_t7982_0_0_0;
static ParameterInfo IList_1_t36864_IList_1_Insert_m271712_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t7982_0_0_0},
};
extern TypeInfo IList_1_t36864_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271712_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36864_IList_1_Insert_m271712_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36864_IList_1_RemoveAt_m271713_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36864_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271713_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36864_IList_1_RemoveAt_m271713_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36864_IList_1_get_Item_m271709_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36864_il2cpp_TypeInfo;
extern Il2CppType PropertyAttributes_t7982_0_0_0;
extern void* RuntimeInvoker_PropertyAttributes_t7982_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271709_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36864_il2cpp_TypeInfo/* declaring_type */
	, &PropertyAttributes_t7982_0_0_0/* return_type */
	, RuntimeInvoker_PropertyAttributes_t7982_Int32_t73/* invoker_method */
	, IList_1_t36864_IList_1_get_Item_m271709_ParameterInfos/* parameters */
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
extern Il2CppType PropertyAttributes_t7982_0_0_0;
static ParameterInfo IList_1_t36864_IList_1_set_Item_m271710_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PropertyAttributes_t7982_0_0_0},
};
extern TypeInfo IList_1_t36864_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.PropertyAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271710_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36864_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36864_IList_1_set_Item_m271710_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36864_MethodInfos[] =
{
	&IList_1_IndexOf_m271711_MethodInfo,
	&IList_1_Insert_m271712_MethodInfo,
	&IList_1_RemoveAt_m271713_MethodInfo,
	&IList_1_get_Item_m271709_MethodInfo,
	&IList_1_set_Item_m271710_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36863_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36865_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36864_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36863_il2cpp_TypeInfo,
	&IEnumerable_1_t36865_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36864_0_0_0;
extern Il2CppType IList_1_t36864_1_0_0;
struct IList_1_t36864;
extern TypeInfo IList_1_t36864_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36864_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36864_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36864_MethodInfos/* methods */
	, IList_1_t36864_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36864_il2cpp_TypeInfo/* element_class */
	, IList_1_t36864_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36864_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36864_0_0_0/* byval_arg */
	, &IList_1_t36864_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36864_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29232_il2cpp_TypeInfo;

// System.Reflection.TypeAttributes
#include "mscorlib_System_Reflection_TypeAttributes.h"


// T System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>
extern MethodInfo IEnumerator_1_get_Current_m271714_MethodInfo;
static PropertyInfo IEnumerator_1_t29232____Current_PropertyInfo = 
{
	&IEnumerator_1_t29232_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271714_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29232_PropertyInfos[] =
{
	&IEnumerator_1_t29232____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29232_il2cpp_TypeInfo;
extern Il2CppType TypeAttributes_t7985_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t7985 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271714_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29232_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t7985_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t7985/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29232_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271714_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29232_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29232_0_0_0;
extern Il2CppType IEnumerator_1_t29232_1_0_0;
struct IEnumerator_1_t29232;
extern TypeInfo IEnumerator_1_t29232_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29232_GenericClass;
TypeInfo IEnumerator_1_t29232_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29232_MethodInfos/* methods */
	, IEnumerator_1_t29232_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29232_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29232_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29232_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29232_0_0_0/* byval_arg */
	, &IEnumerator_1_t29232_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29232_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2981.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2981MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern TypeInfo TypeAttributes_t7985_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179789_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeAttributes_t7985_m222917_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Reflection.TypeAttributes>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Reflection.TypeAttributes>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisTypeAttributes_t7985_m222917 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisTypeAttributes_t7985_m222917_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179784_MethodInfo;
 void InternalEnumerator_1__ctor_m179784 (InternalEnumerator_1_t24774 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179785_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179785 (InternalEnumerator_1_t24774 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786 (InternalEnumerator_1_t24774 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179789(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179789_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&TypeAttributes_t7985_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179787_MethodInfo;
 void InternalEnumerator_1_Dispose_m179787 (InternalEnumerator_1_t24774 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179788_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179788 (InternalEnumerator_1_t24774 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179789_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179789 (InternalEnumerator_1_t24774 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisTypeAttributes_t7985_m222917(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisTypeAttributes_t7985_m222917_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24774____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24774, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24774____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24774, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24774_FieldInfos[] =
{
	&InternalEnumerator_1_t24774____array_FieldInfo,
	&InternalEnumerator_1_t24774____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24774____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24774_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179789_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24774____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24774_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179789_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24774_PropertyInfos[] =
{
	&InternalEnumerator_1_t24774____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24774____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24774_InternalEnumerator_1__ctor_m179784_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179784_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179784/* method */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24774_InternalEnumerator_1__ctor_m179784_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179785_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179785/* method */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786/* method */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179787_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179787/* method */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179788_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179788/* method */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern Il2CppType TypeAttributes_t7985_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t7985 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Reflection.TypeAttributes>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179789_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179789/* method */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t7985_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t7985/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24774_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179784_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179785_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786_MethodInfo,
	&InternalEnumerator_1_Dispose_m179787_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179788_MethodInfo,
	&InternalEnumerator_1_get_Current_m179789_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179788_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179785_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179787_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179789_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24774_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179786_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179788_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179785_MethodInfo,
	&InternalEnumerator_1_Dispose_m179787_MethodInfo,
	&InternalEnumerator_1_get_Current_m179789_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29232_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24774_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29232_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29232_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24774_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29232_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24774_0_0_0;
extern Il2CppType InternalEnumerator_1_t24774_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24774_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24774_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24774_MethodInfos/* methods */
	, InternalEnumerator_1_t24774_PropertyInfos/* properties */
	, InternalEnumerator_1_t24774_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24774_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24774_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24774_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24774_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24774_1_0_0/* this_arg */
	, InternalEnumerator_1_t24774_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24774_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24774)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>
extern MethodInfo ICollection_1_get_Count_m271715_MethodInfo;
static PropertyInfo ICollection_1_t36866____Count_PropertyInfo = 
{
	&ICollection_1_t36866_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271715_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271716_MethodInfo;
static PropertyInfo ICollection_1_t36866____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36866_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271716_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36866_PropertyInfos[] =
{
	&ICollection_1_t36866____Count_PropertyInfo,
	&ICollection_1_t36866____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_Count()
MethodInfo ICollection_1_get_Count_m271715_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271716_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TypeAttributes_t7985_0_0_0;
static ParameterInfo ICollection_1_t36866_ICollection_1_Add_m271717_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t7985_0_0_0},
};
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Add(T)
MethodInfo ICollection_1_Add_m271717_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36866_ICollection_1_Add_m271717_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Clear()
MethodInfo ICollection_1_Clear_m271718_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TypeAttributes_t7985_0_0_0;
static ParameterInfo ICollection_1_t36866_ICollection_1_Contains_m271719_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t7985_0_0_0},
};
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Contains(T)
MethodInfo ICollection_1_Contains_m271719_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36866_ICollection_1_Contains_m271719_ParameterInfos/* parameters */
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
extern Il2CppType TypeAttributesU5BU5D_t25304_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36866_ICollection_1_CopyTo_m271720_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributesU5BU5D_t25304_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271720_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36866_ICollection_1_CopyTo_m271720_ParameterInfos/* parameters */
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
extern Il2CppType TypeAttributes_t7985_0_0_0;
static ParameterInfo ICollection_1_t36866_ICollection_1_Remove_m271721_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t7985_0_0_0},
};
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Reflection.TypeAttributes>::Remove(T)
MethodInfo ICollection_1_Remove_m271721_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36866_ICollection_1_Remove_m271721_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36866_MethodInfos[] =
{
	&ICollection_1_get_Count_m271715_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271716_MethodInfo,
	&ICollection_1_Add_m271717_MethodInfo,
	&ICollection_1_Clear_m271718_MethodInfo,
	&ICollection_1_Contains_m271719_MethodInfo,
	&ICollection_1_CopyTo_m271720_MethodInfo,
	&ICollection_1_Remove_m271721_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36868_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36866_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36868_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36866_0_0_0;
extern Il2CppType ICollection_1_t36866_1_0_0;
struct ICollection_1_t36866;
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36866_GenericClass;
TypeInfo ICollection_1_t36866_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36866_MethodInfos/* methods */
	, ICollection_1_t36866_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36866_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36866_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36866_0_0_0/* byval_arg */
	, &ICollection_1_t36866_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36866_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36868_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>
extern TypeInfo IEnumerable_1_t36868_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29232_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Reflection.TypeAttributes>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271722_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36868_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29232_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36868_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271722_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36868_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36868_0_0_0;
extern Il2CppType IEnumerable_1_t36868_1_0_0;
struct IEnumerable_1_t36868;
extern TypeInfo IEnumerable_1_t36868_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36868_GenericClass;
TypeInfo IEnumerable_1_t36868_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36868_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36868_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36868_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36868_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36868_0_0_0/* byval_arg */
	, &IEnumerable_1_t36868_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36868_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36867_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>
extern MethodInfo IList_1_get_Item_m271723_MethodInfo;
extern MethodInfo IList_1_set_Item_m271724_MethodInfo;
static PropertyInfo IList_1_t36867____Item_PropertyInfo = 
{
	&IList_1_t36867_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271723_MethodInfo/* get */
	, &IList_1_set_Item_m271724_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36867_PropertyInfos[] =
{
	&IList_1_t36867____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeAttributes_t7985_0_0_0;
static ParameterInfo IList_1_t36867_IList_1_IndexOf_m271725_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t7985_0_0_0},
};
extern TypeInfo IList_1_t36867_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271725_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36867_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36867_IList_1_IndexOf_m271725_ParameterInfos/* parameters */
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
extern Il2CppType TypeAttributes_t7985_0_0_0;
static ParameterInfo IList_1_t36867_IList_1_Insert_m271726_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t7985_0_0_0},
};
extern TypeInfo IList_1_t36867_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271726_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36867_IList_1_Insert_m271726_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36867_IList_1_RemoveAt_m271727_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36867_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271727_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36867_IList_1_RemoveAt_m271727_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36867_IList_1_get_Item_m271723_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36867_il2cpp_TypeInfo;
extern Il2CppType TypeAttributes_t7985_0_0_0;
extern void* RuntimeInvoker_TypeAttributes_t7985_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271723_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36867_il2cpp_TypeInfo/* declaring_type */
	, &TypeAttributes_t7985_0_0_0/* return_type */
	, RuntimeInvoker_TypeAttributes_t7985_Int32_t73/* invoker_method */
	, IList_1_t36867_IList_1_get_Item_m271723_ParameterInfos/* parameters */
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
extern Il2CppType TypeAttributes_t7985_0_0_0;
static ParameterInfo IList_1_t36867_IList_1_set_Item_m271724_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeAttributes_t7985_0_0_0},
};
extern TypeInfo IList_1_t36867_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Reflection.TypeAttributes>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271724_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36867_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36867_IList_1_set_Item_m271724_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36867_MethodInfos[] =
{
	&IList_1_IndexOf_m271725_MethodInfo,
	&IList_1_Insert_m271726_MethodInfo,
	&IList_1_RemoveAt_m271727_MethodInfo,
	&IList_1_get_Item_m271723_MethodInfo,
	&IList_1_set_Item_m271724_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36866_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36868_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36867_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36866_il2cpp_TypeInfo,
	&IEnumerable_1_t36868_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36867_0_0_0;
extern Il2CppType IList_1_t36867_1_0_0;
struct IList_1_t36867;
extern TypeInfo IList_1_t36867_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36867_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36867_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36867_MethodInfos/* methods */
	, IList_1_t36867_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36867_il2cpp_TypeInfo/* element_class */
	, IList_1_t36867_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36867_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36867_0_0_0/* byval_arg */
	, &IList_1_t36867_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36867_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29233_il2cpp_TypeInfo;

// System.Resources.NeutralResourcesLanguageAttribute
#include "mscorlib_System_Resources_NeutralResourcesLanguageAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271728_MethodInfo;
static PropertyInfo IEnumerator_1_t29233____Current_PropertyInfo = 
{
	&IEnumerator_1_t29233_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271728_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29233_PropertyInfos[] =
{
	&IEnumerator_1_t29233____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29233_il2cpp_TypeInfo;
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271728_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29233_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t6390_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29233_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271728_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29233_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29233_0_0_0;
extern Il2CppType IEnumerator_1_t29233_1_0_0;
struct IEnumerator_1_t29233;
extern TypeInfo IEnumerator_1_t29233_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29233_GenericClass;
TypeInfo IEnumerator_1_t29233_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29233_MethodInfos/* methods */
	, IEnumerator_1_t29233_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29233_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29233_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29233_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29233_0_0_0/* byval_arg */
	, &IEnumerator_1_t29233_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29233_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2982.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2982MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern TypeInfo NeutralResourcesLanguageAttribute_t6390_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179795_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t6390_m222928_MethodInfo;
struct Array_t;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Resources.NeutralResourcesLanguageAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Resources.NeutralResourcesLanguageAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t6390_m222928(__this, p0, method) (NeutralResourcesLanguageAttribute_t6390 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t6390_m222928_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24775____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24775, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24775____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24775, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24775_FieldInfos[] =
{
	&InternalEnumerator_1_t24775____array_FieldInfo,
	&InternalEnumerator_1_t24775____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179792_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24775____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24775_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179792_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179795_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24775____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24775_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179795_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24775_PropertyInfos[] =
{
	&InternalEnumerator_1_t24775____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24775____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24775_InternalEnumerator_1__ctor_m179790_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179790_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24775_InternalEnumerator_1__ctor_m179790_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179791_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179792_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179793_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179794_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179795_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t6390_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24775_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179790_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179791_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179792_MethodInfo,
	&InternalEnumerator_1_Dispose_m179793_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179794_MethodInfo,
	&InternalEnumerator_1_get_Current_m179795_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179792_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179794_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179791_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179793_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179795_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24775_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179792_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179794_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179791_MethodInfo,
	&InternalEnumerator_1_Dispose_m179793_MethodInfo,
	&InternalEnumerator_1_get_Current_m179795_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29233_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24775_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29233_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29233_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24775_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29233_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179795_MethodInfo;
extern TypeInfo NeutralResourcesLanguageAttribute_t6390_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t6390_m222928_MethodInfo;
static void* InternalEnumerator_1_t24775_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179795_MethodInfo,
	&NeutralResourcesLanguageAttribute_t6390_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisNeutralResourcesLanguageAttribute_t6390_m222928_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24775_0_0_0;
extern Il2CppType InternalEnumerator_1_t24775_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24775_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24775_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24775_MethodInfos/* methods */
	, InternalEnumerator_1_t24775_PropertyInfos/* properties */
	, InternalEnumerator_1_t24775_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24775_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24775_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24775_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24775_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24775_1_0_0/* this_arg */
	, InternalEnumerator_1_t24775_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24775_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24775_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24775)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo ICollection_1_get_Count_m271729_MethodInfo;
static PropertyInfo ICollection_1_t36869____Count_PropertyInfo = 
{
	&ICollection_1_t36869_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271729_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271730_MethodInfo;
static PropertyInfo ICollection_1_t36869____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36869_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271730_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36869_PropertyInfos[] =
{
	&ICollection_1_t36869____Count_PropertyInfo,
	&ICollection_1_t36869____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271729_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271730_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
static ParameterInfo ICollection_1_t36869_ICollection_1_Add_m271731_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t6390_0_0_0},
};
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271731_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36869_ICollection_1_Add_m271731_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271732_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
static ParameterInfo ICollection_1_t36869_ICollection_1_Contains_m271733_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t6390_0_0_0},
};
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271733_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36869_ICollection_1_Contains_m271733_ParameterInfos/* parameters */
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
extern Il2CppType NeutralResourcesLanguageAttributeU5BU5D_t25305_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36869_ICollection_1_CopyTo_m271734_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttributeU5BU5D_t25305_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271734_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36869_ICollection_1_CopyTo_m271734_ParameterInfos/* parameters */
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
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
static ParameterInfo ICollection_1_t36869_ICollection_1_Remove_m271735_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t6390_0_0_0},
};
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.NeutralResourcesLanguageAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271735_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36869_ICollection_1_Remove_m271735_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36869_MethodInfos[] =
{
	&ICollection_1_get_Count_m271729_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271730_MethodInfo,
	&ICollection_1_Add_m271731_MethodInfo,
	&ICollection_1_Clear_m271732_MethodInfo,
	&ICollection_1_Contains_m271733_MethodInfo,
	&ICollection_1_CopyTo_m271734_MethodInfo,
	&ICollection_1_Remove_m271735_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36871_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36869_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36871_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36869_0_0_0;
extern Il2CppType ICollection_1_t36869_1_0_0;
struct ICollection_1_t36869;
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36869_GenericClass;
TypeInfo ICollection_1_t36869_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36869_MethodInfos/* methods */
	, ICollection_1_t36869_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36869_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36869_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36869_0_0_0/* byval_arg */
	, &ICollection_1_t36869_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36869_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36871_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>
extern TypeInfo IEnumerable_1_t36871_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29233_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.NeutralResourcesLanguageAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271736_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36871_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29233_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36871_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271736_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36871_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36871_0_0_0;
extern Il2CppType IEnumerable_1_t36871_1_0_0;
struct IEnumerable_1_t36871;
extern TypeInfo IEnumerable_1_t36871_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36871_GenericClass;
TypeInfo IEnumerable_1_t36871_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36871_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36871_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36871_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36871_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36871_0_0_0/* byval_arg */
	, &IEnumerable_1_t36871_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36871_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36870_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>
extern MethodInfo IList_1_get_Item_m271737_MethodInfo;
extern MethodInfo IList_1_set_Item_m271738_MethodInfo;
static PropertyInfo IList_1_t36870____Item_PropertyInfo = 
{
	&IList_1_t36870_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271737_MethodInfo/* get */
	, &IList_1_set_Item_m271738_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36870_PropertyInfos[] =
{
	&IList_1_t36870____Item_PropertyInfo,
	NULL
};
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
static ParameterInfo IList_1_t36870_IList_1_IndexOf_m271739_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t6390_0_0_0},
};
extern TypeInfo IList_1_t36870_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271739_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36870_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36870_IList_1_IndexOf_m271739_ParameterInfos/* parameters */
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
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
static ParameterInfo IList_1_t36870_IList_1_Insert_m271740_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t6390_0_0_0},
};
extern TypeInfo IList_1_t36870_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271740_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36870_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36870_IList_1_Insert_m271740_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36870_IList_1_RemoveAt_m271741_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36870_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271741_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36870_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36870_IList_1_RemoveAt_m271741_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36870_IList_1_get_Item_m271737_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36870_il2cpp_TypeInfo;
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271737_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36870_il2cpp_TypeInfo/* declaring_type */
	, &NeutralResourcesLanguageAttribute_t6390_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36870_IList_1_get_Item_m271737_ParameterInfos/* parameters */
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
extern Il2CppType NeutralResourcesLanguageAttribute_t6390_0_0_0;
static ParameterInfo IList_1_t36870_IList_1_set_Item_m271738_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &NeutralResourcesLanguageAttribute_t6390_0_0_0},
};
extern TypeInfo IList_1_t36870_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Resources.NeutralResourcesLanguageAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271738_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36870_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36870_IList_1_set_Item_m271738_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36870_MethodInfos[] =
{
	&IList_1_IndexOf_m271739_MethodInfo,
	&IList_1_Insert_m271740_MethodInfo,
	&IList_1_RemoveAt_m271741_MethodInfo,
	&IList_1_get_Item_m271737_MethodInfo,
	&IList_1_set_Item_m271738_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36869_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36871_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36870_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36869_il2cpp_TypeInfo,
	&IEnumerable_1_t36871_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36870_0_0_0;
extern Il2CppType IList_1_t36870_1_0_0;
struct IList_1_t36870;
extern TypeInfo IList_1_t36870_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36870_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36870_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36870_MethodInfos/* methods */
	, IList_1_t36870_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36870_il2cpp_TypeInfo/* element_class */
	, IList_1_t36870_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36870_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36870_0_0_0/* byval_arg */
	, &IList_1_t36870_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36870_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29234_il2cpp_TypeInfo;

// System.Resources.SatelliteContractVersionAttribute
#include "mscorlib_System_Resources_SatelliteContractVersionAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271742_MethodInfo;
static PropertyInfo IEnumerator_1_t29234____Current_PropertyInfo = 
{
	&IEnumerator_1_t29234_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271742_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29234_PropertyInfos[] =
{
	&IEnumerator_1_t29234____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29234_il2cpp_TypeInfo;
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271742_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29234_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t6447_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29234_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271742_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29234_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29234_0_0_0;
extern Il2CppType IEnumerator_1_t29234_1_0_0;
struct IEnumerator_1_t29234;
extern TypeInfo IEnumerator_1_t29234_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29234_GenericClass;
TypeInfo IEnumerator_1_t29234_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29234_MethodInfos/* methods */
	, IEnumerator_1_t29234_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29234_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29234_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29234_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29234_0_0_0/* byval_arg */
	, &IEnumerator_1_t29234_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29234_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2983.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2983MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern TypeInfo SatelliteContractVersionAttribute_t6447_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179801_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t6447_m222939_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Resources.SatelliteContractVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Resources.SatelliteContractVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t6447_m222939(__this, p0, method) (SatelliteContractVersionAttribute_t6447 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t6447_m222939_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24776____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24776, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24776____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24776, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24776_FieldInfos[] =
{
	&InternalEnumerator_1_t24776____array_FieldInfo,
	&InternalEnumerator_1_t24776____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179798_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24776____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24776_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179798_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179801_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24776____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24776_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179801_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24776_PropertyInfos[] =
{
	&InternalEnumerator_1_t24776____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24776____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24776_InternalEnumerator_1__ctor_m179796_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179796_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24776_InternalEnumerator_1__ctor_m179796_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179797_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179798_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179799_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179800_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Resources.SatelliteContractVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179801_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t6447_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24776_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179796_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179797_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179798_MethodInfo,
	&InternalEnumerator_1_Dispose_m179799_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179800_MethodInfo,
	&InternalEnumerator_1_get_Current_m179801_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179798_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179800_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179797_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179799_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179801_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24776_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179798_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179800_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179797_MethodInfo,
	&InternalEnumerator_1_Dispose_m179799_MethodInfo,
	&InternalEnumerator_1_get_Current_m179801_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29234_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24776_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29234_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29234_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24776_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29234_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179801_MethodInfo;
extern TypeInfo SatelliteContractVersionAttribute_t6447_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t6447_m222939_MethodInfo;
static void* InternalEnumerator_1_t24776_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179801_MethodInfo,
	&SatelliteContractVersionAttribute_t6447_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSatelliteContractVersionAttribute_t6447_m222939_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24776_0_0_0;
extern Il2CppType InternalEnumerator_1_t24776_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24776_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24776_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24776_MethodInfos/* methods */
	, InternalEnumerator_1_t24776_PropertyInfos/* properties */
	, InternalEnumerator_1_t24776_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24776_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24776_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24776_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24776_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24776_1_0_0/* this_arg */
	, InternalEnumerator_1_t24776_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24776_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24776_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24776)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m271743_MethodInfo;
static PropertyInfo ICollection_1_t36872____Count_PropertyInfo = 
{
	&ICollection_1_t36872_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271743_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271744_MethodInfo;
static PropertyInfo ICollection_1_t36872____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36872_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271744_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36872_PropertyInfos[] =
{
	&ICollection_1_t36872____Count_PropertyInfo,
	&ICollection_1_t36872____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271743_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271744_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
static ParameterInfo ICollection_1_t36872_ICollection_1_Add_m271745_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t6447_0_0_0},
};
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271745_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36872_ICollection_1_Add_m271745_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271746_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
static ParameterInfo ICollection_1_t36872_ICollection_1_Contains_m271747_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t6447_0_0_0},
};
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271747_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36872_ICollection_1_Contains_m271747_ParameterInfos/* parameters */
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
extern Il2CppType SatelliteContractVersionAttributeU5BU5D_t25306_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36872_ICollection_1_CopyTo_m271748_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttributeU5BU5D_t25306_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271748_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36872_ICollection_1_CopyTo_m271748_ParameterInfos/* parameters */
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
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
static ParameterInfo ICollection_1_t36872_ICollection_1_Remove_m271749_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t6447_0_0_0},
};
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Resources.SatelliteContractVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271749_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36872_ICollection_1_Remove_m271749_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36872_MethodInfos[] =
{
	&ICollection_1_get_Count_m271743_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271744_MethodInfo,
	&ICollection_1_Add_m271745_MethodInfo,
	&ICollection_1_Clear_m271746_MethodInfo,
	&ICollection_1_Contains_m271747_MethodInfo,
	&ICollection_1_CopyTo_m271748_MethodInfo,
	&ICollection_1_Remove_m271749_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36874_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36872_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36874_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36872_0_0_0;
extern Il2CppType ICollection_1_t36872_1_0_0;
struct ICollection_1_t36872;
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36872_GenericClass;
TypeInfo ICollection_1_t36872_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36872_MethodInfos/* methods */
	, ICollection_1_t36872_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36872_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36872_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36872_0_0_0/* byval_arg */
	, &ICollection_1_t36872_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36872_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36874_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>
extern TypeInfo IEnumerable_1_t36874_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29234_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Resources.SatelliteContractVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271750_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36874_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29234_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36874_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271750_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36874_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36874_0_0_0;
extern Il2CppType IEnumerable_1_t36874_1_0_0;
struct IEnumerable_1_t36874;
extern TypeInfo IEnumerable_1_t36874_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36874_GenericClass;
TypeInfo IEnumerable_1_t36874_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36874_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36874_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36874_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36874_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36874_0_0_0/* byval_arg */
	, &IEnumerable_1_t36874_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36874_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36873_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>
extern MethodInfo IList_1_get_Item_m271751_MethodInfo;
extern MethodInfo IList_1_set_Item_m271752_MethodInfo;
static PropertyInfo IList_1_t36873____Item_PropertyInfo = 
{
	&IList_1_t36873_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271751_MethodInfo/* get */
	, &IList_1_set_Item_m271752_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36873_PropertyInfos[] =
{
	&IList_1_t36873____Item_PropertyInfo,
	NULL
};
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
static ParameterInfo IList_1_t36873_IList_1_IndexOf_m271753_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t6447_0_0_0},
};
extern TypeInfo IList_1_t36873_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271753_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36873_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36873_IList_1_IndexOf_m271753_ParameterInfos/* parameters */
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
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
static ParameterInfo IList_1_t36873_IList_1_Insert_m271754_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t6447_0_0_0},
};
extern TypeInfo IList_1_t36873_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271754_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36873_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36873_IList_1_Insert_m271754_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36873_IList_1_RemoveAt_m271755_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36873_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271755_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36873_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36873_IList_1_RemoveAt_m271755_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36873_IList_1_get_Item_m271751_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36873_il2cpp_TypeInfo;
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271751_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36873_il2cpp_TypeInfo/* declaring_type */
	, &SatelliteContractVersionAttribute_t6447_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36873_IList_1_get_Item_m271751_ParameterInfos/* parameters */
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
extern Il2CppType SatelliteContractVersionAttribute_t6447_0_0_0;
static ParameterInfo IList_1_t36873_IList_1_set_Item_m271752_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SatelliteContractVersionAttribute_t6447_0_0_0},
};
extern TypeInfo IList_1_t36873_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Resources.SatelliteContractVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271752_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36873_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36873_IList_1_set_Item_m271752_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36873_MethodInfos[] =
{
	&IList_1_IndexOf_m271753_MethodInfo,
	&IList_1_Insert_m271754_MethodInfo,
	&IList_1_RemoveAt_m271755_MethodInfo,
	&IList_1_get_Item_m271751_MethodInfo,
	&IList_1_set_Item_m271752_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36872_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36874_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36873_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36872_il2cpp_TypeInfo,
	&IEnumerable_1_t36874_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36873_0_0_0;
extern Il2CppType IList_1_t36873_1_0_0;
struct IList_1_t36873;
extern TypeInfo IList_1_t36873_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36873_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36873_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36873_MethodInfos/* methods */
	, IList_1_t36873_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36873_il2cpp_TypeInfo/* element_class */
	, IList_1_t36873_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36873_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36873_0_0_0/* byval_arg */
	, &IList_1_t36873_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36873_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29235_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilationRelaxations
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati_0.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo IEnumerator_1_get_Current_m271756_MethodInfo;
static PropertyInfo IEnumerator_1_t29235____Current_PropertyInfo = 
{
	&IEnumerator_1_t29235_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271756_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29235_PropertyInfos[] =
{
	&IEnumerator_1_t29235____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29235_il2cpp_TypeInfo;
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t7986 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271756_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29235_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t7986_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t7986/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29235_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271756_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29235_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29235_0_0_0;
extern Il2CppType IEnumerator_1_t29235_1_0_0;
struct IEnumerator_1_t29235;
extern TypeInfo IEnumerator_1_t29235_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29235_GenericClass;
TypeInfo IEnumerator_1_t29235_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29235_MethodInfos/* methods */
	, IEnumerator_1_t29235_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29235_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29235_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29235_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29235_0_0_0/* byval_arg */
	, &IEnumerator_1_t29235_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29235_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2984.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2984MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern TypeInfo CompilationRelaxations_t7986_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179807_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxations_t7986_m222950_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxations>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCompilationRelaxations_t7986_m222950 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxations_t7986_m222950_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179802_MethodInfo;
 void InternalEnumerator_1__ctor_m179802 (InternalEnumerator_1_t24777 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179803_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179803 (InternalEnumerator_1_t24777 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804 (InternalEnumerator_1_t24777 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179807(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179807_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CompilationRelaxations_t7986_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179805_MethodInfo;
 void InternalEnumerator_1_Dispose_m179805 (InternalEnumerator_1_t24777 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179806_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179806 (InternalEnumerator_1_t24777 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179807_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179807 (InternalEnumerator_1_t24777 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCompilationRelaxations_t7986_m222950(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCompilationRelaxations_t7986_m222950_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24777____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24777, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24777____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24777, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24777_FieldInfos[] =
{
	&InternalEnumerator_1_t24777____array_FieldInfo,
	&InternalEnumerator_1_t24777____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24777____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24777_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179807_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24777____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24777_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179807_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24777_PropertyInfos[] =
{
	&InternalEnumerator_1_t24777____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24777____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24777_InternalEnumerator_1__ctor_m179802_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179802_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179802/* method */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24777_InternalEnumerator_1__ctor_m179802_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179803_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179803/* method */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804/* method */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179805_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179805/* method */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179806_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179806/* method */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t7986 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179807_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179807/* method */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t7986_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t7986/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24777_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179802_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179803_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804_MethodInfo,
	&InternalEnumerator_1_Dispose_m179805_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179806_MethodInfo,
	&InternalEnumerator_1_get_Current_m179807_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179806_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179803_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179805_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179807_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24777_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179804_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179806_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179803_MethodInfo,
	&InternalEnumerator_1_Dispose_m179805_MethodInfo,
	&InternalEnumerator_1_get_Current_m179807_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29235_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24777_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29235_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29235_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24777_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29235_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24777_0_0_0;
extern Il2CppType InternalEnumerator_1_t24777_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24777_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24777_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24777_MethodInfos/* methods */
	, InternalEnumerator_1_t24777_PropertyInfos/* properties */
	, InternalEnumerator_1_t24777_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24777_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24777_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24777_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24777_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24777_1_0_0/* this_arg */
	, InternalEnumerator_1_t24777_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24777_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24777)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo ICollection_1_get_Count_m271757_MethodInfo;
static PropertyInfo ICollection_1_t36875____Count_PropertyInfo = 
{
	&ICollection_1_t36875_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271757_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271758_MethodInfo;
static PropertyInfo ICollection_1_t36875____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36875_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271758_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36875_PropertyInfos[] =
{
	&ICollection_1_t36875____Count_PropertyInfo,
	&ICollection_1_t36875____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Count()
MethodInfo ICollection_1_get_Count_m271757_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271758_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
static ParameterInfo ICollection_1_t36875_ICollection_1_Add_m271759_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t7986_0_0_0},
};
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Add(T)
MethodInfo ICollection_1_Add_m271759_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36875_ICollection_1_Add_m271759_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Clear()
MethodInfo ICollection_1_Clear_m271760_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
static ParameterInfo ICollection_1_t36875_ICollection_1_Contains_m271761_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t7986_0_0_0},
};
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Contains(T)
MethodInfo ICollection_1_Contains_m271761_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36875_ICollection_1_Contains_m271761_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxationsU5BU5D_t25307_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36875_ICollection_1_CopyTo_m271762_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsU5BU5D_t25307_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271762_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36875_ICollection_1_CopyTo_m271762_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
static ParameterInfo ICollection_1_t36875_ICollection_1_Remove_m271763_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t7986_0_0_0},
};
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxations>::Remove(T)
MethodInfo ICollection_1_Remove_m271763_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36875_ICollection_1_Remove_m271763_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36875_MethodInfos[] =
{
	&ICollection_1_get_Count_m271757_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271758_MethodInfo,
	&ICollection_1_Add_m271759_MethodInfo,
	&ICollection_1_Clear_m271760_MethodInfo,
	&ICollection_1_Contains_m271761_MethodInfo,
	&ICollection_1_CopyTo_m271762_MethodInfo,
	&ICollection_1_Remove_m271763_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36877_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36875_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36877_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36875_0_0_0;
extern Il2CppType ICollection_1_t36875_1_0_0;
struct ICollection_1_t36875;
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36875_GenericClass;
TypeInfo ICollection_1_t36875_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36875_MethodInfos/* methods */
	, ICollection_1_t36875_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36875_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36875_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36875_0_0_0/* byval_arg */
	, &ICollection_1_t36875_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36875_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36877_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern TypeInfo IEnumerable_1_t36877_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29235_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxations>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271764_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36877_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29235_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36877_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271764_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36877_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36877_0_0_0;
extern Il2CppType IEnumerable_1_t36877_1_0_0;
struct IEnumerable_1_t36877;
extern TypeInfo IEnumerable_1_t36877_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36877_GenericClass;
TypeInfo IEnumerable_1_t36877_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36877_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36877_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36877_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36877_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36877_0_0_0/* byval_arg */
	, &IEnumerable_1_t36877_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36877_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36876_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>
extern MethodInfo IList_1_get_Item_m271765_MethodInfo;
extern MethodInfo IList_1_set_Item_m271766_MethodInfo;
static PropertyInfo IList_1_t36876____Item_PropertyInfo = 
{
	&IList_1_t36876_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271765_MethodInfo/* get */
	, &IList_1_set_Item_m271766_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36876_PropertyInfos[] =
{
	&IList_1_t36876____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
static ParameterInfo IList_1_t36876_IList_1_IndexOf_m271767_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t7986_0_0_0},
};
extern TypeInfo IList_1_t36876_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271767_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36876_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36876_IList_1_IndexOf_m271767_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
static ParameterInfo IList_1_t36876_IList_1_Insert_m271768_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t7986_0_0_0},
};
extern TypeInfo IList_1_t36876_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271768_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36876_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36876_IList_1_Insert_m271768_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36876_IList_1_RemoveAt_m271769_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36876_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271769_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36876_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36876_IList_1_RemoveAt_m271769_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36876_IList_1_get_Item_m271765_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36876_il2cpp_TypeInfo;
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
extern void* RuntimeInvoker_CompilationRelaxations_t7986_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271765_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36876_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxations_t7986_0_0_0/* return_type */
	, RuntimeInvoker_CompilationRelaxations_t7986_Int32_t73/* invoker_method */
	, IList_1_t36876_IList_1_get_Item_m271765_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxations_t7986_0_0_0;
static ParameterInfo IList_1_t36876_IList_1_set_Item_m271766_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxations_t7986_0_0_0},
};
extern TypeInfo IList_1_t36876_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxations>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271766_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36876_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36876_IList_1_set_Item_m271766_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36876_MethodInfos[] =
{
	&IList_1_IndexOf_m271767_MethodInfo,
	&IList_1_Insert_m271768_MethodInfo,
	&IList_1_RemoveAt_m271769_MethodInfo,
	&IList_1_get_Item_m271765_MethodInfo,
	&IList_1_set_Item_m271766_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36875_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36877_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36876_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36875_il2cpp_TypeInfo,
	&IEnumerable_1_t36877_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36876_0_0_0;
extern Il2CppType IList_1_t36876_1_0_0;
struct IList_1_t36876;
extern TypeInfo IList_1_t36876_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36876_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36876_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36876_MethodInfos/* methods */
	, IList_1_t36876_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36876_il2cpp_TypeInfo/* element_class */
	, IList_1_t36876_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36876_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36876_0_0_0/* byval_arg */
	, &IList_1_t36876_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36876_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29236_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.CompilationRelaxationsAttribute
#include "mscorlib_System_Runtime_CompilerServices_CompilationRelaxati.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271770_MethodInfo;
static PropertyInfo IEnumerator_1_t29236____Current_PropertyInfo = 
{
	&IEnumerator_1_t29236_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271770_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29236_PropertyInfos[] =
{
	&IEnumerator_1_t29236____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29236_il2cpp_TypeInfo;
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271770_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29236_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t6445_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29236_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271770_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29236_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29236_0_0_0;
extern Il2CppType IEnumerator_1_t29236_1_0_0;
struct IEnumerator_1_t29236;
extern TypeInfo IEnumerator_1_t29236_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29236_GenericClass;
TypeInfo IEnumerator_1_t29236_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29236_MethodInfos/* methods */
	, IEnumerator_1_t29236_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29236_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29236_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29236_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29236_0_0_0/* byval_arg */
	, &IEnumerator_1_t29236_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29236_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2985.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2985MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern TypeInfo CompilationRelaxationsAttribute_t6445_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179813_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t6445_m222961_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t6445_m222961(__this, p0, method) (CompilationRelaxationsAttribute_t6445 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t6445_m222961_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24778____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24778, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24778____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24778, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24778_FieldInfos[] =
{
	&InternalEnumerator_1_t24778____array_FieldInfo,
	&InternalEnumerator_1_t24778____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179810_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24778____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24778_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179810_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179813_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24778____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24778_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179813_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24778_PropertyInfos[] =
{
	&InternalEnumerator_1_t24778____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24778____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24778_InternalEnumerator_1__ctor_m179808_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179808_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24778_InternalEnumerator_1__ctor_m179808_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179809_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179810_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179811_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179812_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179813_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t6445_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24778_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179808_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179809_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179810_MethodInfo,
	&InternalEnumerator_1_Dispose_m179811_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179812_MethodInfo,
	&InternalEnumerator_1_get_Current_m179813_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179810_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179812_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179809_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179811_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179813_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24778_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179810_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179812_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179809_MethodInfo,
	&InternalEnumerator_1_Dispose_m179811_MethodInfo,
	&InternalEnumerator_1_get_Current_m179813_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29236_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24778_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29236_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29236_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24778_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29236_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179813_MethodInfo;
extern TypeInfo CompilationRelaxationsAttribute_t6445_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t6445_m222961_MethodInfo;
static void* InternalEnumerator_1_t24778_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179813_MethodInfo,
	&CompilationRelaxationsAttribute_t6445_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisCompilationRelaxationsAttribute_t6445_m222961_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24778_0_0_0;
extern Il2CppType InternalEnumerator_1_t24778_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24778_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24778_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24778_MethodInfos/* methods */
	, InternalEnumerator_1_t24778_PropertyInfos/* properties */
	, InternalEnumerator_1_t24778_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24778_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24778_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24778_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24778_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24778_1_0_0/* this_arg */
	, InternalEnumerator_1_t24778_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24778_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24778_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24778)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo ICollection_1_get_Count_m271771_MethodInfo;
static PropertyInfo ICollection_1_t36878____Count_PropertyInfo = 
{
	&ICollection_1_t36878_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271771_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271772_MethodInfo;
static PropertyInfo ICollection_1_t36878____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36878_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271772_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36878_PropertyInfos[] =
{
	&ICollection_1_t36878____Count_PropertyInfo,
	&ICollection_1_t36878____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271771_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271772_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
static ParameterInfo ICollection_1_t36878_ICollection_1_Add_m271773_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t6445_0_0_0},
};
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271773_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36878_ICollection_1_Add_m271773_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271774_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
static ParameterInfo ICollection_1_t36878_ICollection_1_Contains_m271775_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t6445_0_0_0},
};
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271775_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36878_ICollection_1_Contains_m271775_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxationsAttributeU5BU5D_t25308_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36878_ICollection_1_CopyTo_m271776_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttributeU5BU5D_t25308_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271776_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36878_ICollection_1_CopyTo_m271776_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
static ParameterInfo ICollection_1_t36878_ICollection_1_Remove_m271777_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t6445_0_0_0},
};
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271777_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36878_ICollection_1_Remove_m271777_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36878_MethodInfos[] =
{
	&ICollection_1_get_Count_m271771_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271772_MethodInfo,
	&ICollection_1_Add_m271773_MethodInfo,
	&ICollection_1_Clear_m271774_MethodInfo,
	&ICollection_1_Contains_m271775_MethodInfo,
	&ICollection_1_CopyTo_m271776_MethodInfo,
	&ICollection_1_Remove_m271777_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36880_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36878_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36880_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36878_0_0_0;
extern Il2CppType ICollection_1_t36878_1_0_0;
struct ICollection_1_t36878;
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36878_GenericClass;
TypeInfo ICollection_1_t36878_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36878_MethodInfos/* methods */
	, ICollection_1_t36878_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36878_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36878_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36878_0_0_0/* byval_arg */
	, &ICollection_1_t36878_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36878_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36880_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern TypeInfo IEnumerable_1_t36880_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29236_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271778_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36880_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29236_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36880_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271778_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36880_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36880_0_0_0;
extern Il2CppType IEnumerable_1_t36880_1_0_0;
struct IEnumerable_1_t36880;
extern TypeInfo IEnumerable_1_t36880_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36880_GenericClass;
TypeInfo IEnumerable_1_t36880_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36880_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36880_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36880_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36880_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36880_0_0_0/* byval_arg */
	, &IEnumerable_1_t36880_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36880_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36879_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>
extern MethodInfo IList_1_get_Item_m271779_MethodInfo;
extern MethodInfo IList_1_set_Item_m271780_MethodInfo;
static PropertyInfo IList_1_t36879____Item_PropertyInfo = 
{
	&IList_1_t36879_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271779_MethodInfo/* get */
	, &IList_1_set_Item_m271780_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36879_PropertyInfos[] =
{
	&IList_1_t36879____Item_PropertyInfo,
	NULL
};
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
static ParameterInfo IList_1_t36879_IList_1_IndexOf_m271781_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t6445_0_0_0},
};
extern TypeInfo IList_1_t36879_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271781_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36879_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36879_IList_1_IndexOf_m271781_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
static ParameterInfo IList_1_t36879_IList_1_Insert_m271782_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t6445_0_0_0},
};
extern TypeInfo IList_1_t36879_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271782_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36879_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36879_IList_1_Insert_m271782_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36879_IList_1_RemoveAt_m271783_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36879_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271783_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36879_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36879_IList_1_RemoveAt_m271783_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36879_IList_1_get_Item_m271779_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36879_il2cpp_TypeInfo;
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271779_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36879_il2cpp_TypeInfo/* declaring_type */
	, &CompilationRelaxationsAttribute_t6445_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36879_IList_1_get_Item_m271779_ParameterInfos/* parameters */
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
extern Il2CppType CompilationRelaxationsAttribute_t6445_0_0_0;
static ParameterInfo IList_1_t36879_IList_1_set_Item_m271780_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CompilationRelaxationsAttribute_t6445_0_0_0},
};
extern TypeInfo IList_1_t36879_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.CompilationRelaxationsAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271780_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36879_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36879_IList_1_set_Item_m271780_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36879_MethodInfos[] =
{
	&IList_1_IndexOf_m271781_MethodInfo,
	&IList_1_Insert_m271782_MethodInfo,
	&IList_1_RemoveAt_m271783_MethodInfo,
	&IList_1_get_Item_m271779_MethodInfo,
	&IList_1_set_Item_m271780_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36878_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36880_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36879_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36878_il2cpp_TypeInfo,
	&IEnumerable_1_t36880_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36879_0_0_0;
extern Il2CppType IList_1_t36879_1_0_0;
struct IList_1_t36879;
extern TypeInfo IList_1_t36879_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36879_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36879_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36879_MethodInfos/* methods */
	, IList_1_t36879_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36879_il2cpp_TypeInfo/* element_class */
	, IList_1_t36879_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36879_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36879_0_0_0/* byval_arg */
	, &IList_1_t36879_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36879_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29237_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.DefaultDependencyAttribute
#include "mscorlib_System_Runtime_CompilerServices_DefaultDependencyAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271784_MethodInfo;
static PropertyInfo IEnumerator_1_t29237____Current_PropertyInfo = 
{
	&IEnumerator_1_t29237_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271784_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29237_PropertyInfos[] =
{
	&IEnumerator_1_t29237____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29237_il2cpp_TypeInfo;
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271784_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29237_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t7987_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29237_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271784_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29237_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29237_0_0_0;
extern Il2CppType IEnumerator_1_t29237_1_0_0;
struct IEnumerator_1_t29237;
extern TypeInfo IEnumerator_1_t29237_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29237_GenericClass;
TypeInfo IEnumerator_1_t29237_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29237_MethodInfos/* methods */
	, IEnumerator_1_t29237_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29237_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29237_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29237_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29237_0_0_0/* byval_arg */
	, &IEnumerator_1_t29237_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29237_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2986.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2986MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern TypeInfo DefaultDependencyAttribute_t7987_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179819_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t7987_m222972_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DefaultDependencyAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.DefaultDependencyAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t7987_m222972(__this, p0, method) (DefaultDependencyAttribute_t7987 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t7987_m222972_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24779____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24779, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24779____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24779, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24779_FieldInfos[] =
{
	&InternalEnumerator_1_t24779____array_FieldInfo,
	&InternalEnumerator_1_t24779____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179816_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24779____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24779_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179816_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179819_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24779____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24779_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179819_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24779_PropertyInfos[] =
{
	&InternalEnumerator_1_t24779____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24779____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24779_InternalEnumerator_1__ctor_m179814_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179814_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24779_InternalEnumerator_1__ctor_m179814_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179815_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179816_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179817_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179818_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179819_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t7987_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24779_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179814_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179815_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179816_MethodInfo,
	&InternalEnumerator_1_Dispose_m179817_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179818_MethodInfo,
	&InternalEnumerator_1_get_Current_m179819_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179816_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179818_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179815_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179817_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179819_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24779_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179816_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179818_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179815_MethodInfo,
	&InternalEnumerator_1_Dispose_m179817_MethodInfo,
	&InternalEnumerator_1_get_Current_m179819_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29237_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24779_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29237_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29237_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24779_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29237_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179819_MethodInfo;
extern TypeInfo DefaultDependencyAttribute_t7987_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t7987_m222972_MethodInfo;
static void* InternalEnumerator_1_t24779_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179819_MethodInfo,
	&DefaultDependencyAttribute_t7987_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisDefaultDependencyAttribute_t7987_m222972_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24779_0_0_0;
extern Il2CppType InternalEnumerator_1_t24779_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24779_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24779_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24779_MethodInfos/* methods */
	, InternalEnumerator_1_t24779_PropertyInfos/* properties */
	, InternalEnumerator_1_t24779_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24779_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24779_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24779_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24779_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24779_1_0_0/* this_arg */
	, InternalEnumerator_1_t24779_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24779_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24779_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24779)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo ICollection_1_get_Count_m271785_MethodInfo;
static PropertyInfo ICollection_1_t36881____Count_PropertyInfo = 
{
	&ICollection_1_t36881_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271785_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271786_MethodInfo;
static PropertyInfo ICollection_1_t36881____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36881_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271786_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36881_PropertyInfos[] =
{
	&ICollection_1_t36881____Count_PropertyInfo,
	&ICollection_1_t36881____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271785_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271786_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
static ParameterInfo ICollection_1_t36881_ICollection_1_Add_m271787_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t7987_0_0_0},
};
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271787_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36881_ICollection_1_Add_m271787_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271788_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
static ParameterInfo ICollection_1_t36881_ICollection_1_Contains_m271789_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t7987_0_0_0},
};
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271789_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36881_ICollection_1_Contains_m271789_ParameterInfos/* parameters */
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
extern Il2CppType DefaultDependencyAttributeU5BU5D_t25309_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36881_ICollection_1_CopyTo_m271790_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttributeU5BU5D_t25309_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271790_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36881_ICollection_1_CopyTo_m271790_ParameterInfos/* parameters */
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
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
static ParameterInfo ICollection_1_t36881_ICollection_1_Remove_m271791_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t7987_0_0_0},
};
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271791_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36881_ICollection_1_Remove_m271791_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36881_MethodInfos[] =
{
	&ICollection_1_get_Count_m271785_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271786_MethodInfo,
	&ICollection_1_Add_m271787_MethodInfo,
	&ICollection_1_Clear_m271788_MethodInfo,
	&ICollection_1_Contains_m271789_MethodInfo,
	&ICollection_1_CopyTo_m271790_MethodInfo,
	&ICollection_1_Remove_m271791_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36883_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36881_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36883_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36881_0_0_0;
extern Il2CppType ICollection_1_t36881_1_0_0;
struct ICollection_1_t36881;
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36881_GenericClass;
TypeInfo ICollection_1_t36881_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36881_MethodInfos/* methods */
	, ICollection_1_t36881_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36881_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36881_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36881_0_0_0/* byval_arg */
	, &ICollection_1_t36881_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36881_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36883_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern TypeInfo IEnumerable_1_t36883_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29237_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271792_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36883_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29237_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36883_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271792_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36883_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36883_0_0_0;
extern Il2CppType IEnumerable_1_t36883_1_0_0;
struct IEnumerable_1_t36883;
extern TypeInfo IEnumerable_1_t36883_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36883_GenericClass;
TypeInfo IEnumerable_1_t36883_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36883_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36883_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36883_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36883_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36883_0_0_0/* byval_arg */
	, &IEnumerable_1_t36883_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36883_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36882_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>
extern MethodInfo IList_1_get_Item_m271793_MethodInfo;
extern MethodInfo IList_1_set_Item_m271794_MethodInfo;
static PropertyInfo IList_1_t36882____Item_PropertyInfo = 
{
	&IList_1_t36882_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271793_MethodInfo/* get */
	, &IList_1_set_Item_m271794_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36882_PropertyInfos[] =
{
	&IList_1_t36882____Item_PropertyInfo,
	NULL
};
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
static ParameterInfo IList_1_t36882_IList_1_IndexOf_m271795_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t7987_0_0_0},
};
extern TypeInfo IList_1_t36882_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271795_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36882_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36882_IList_1_IndexOf_m271795_ParameterInfos/* parameters */
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
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
static ParameterInfo IList_1_t36882_IList_1_Insert_m271796_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t7987_0_0_0},
};
extern TypeInfo IList_1_t36882_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271796_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36882_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36882_IList_1_Insert_m271796_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36882_IList_1_RemoveAt_m271797_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36882_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271797_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36882_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36882_IList_1_RemoveAt_m271797_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36882_IList_1_get_Item_m271793_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36882_il2cpp_TypeInfo;
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271793_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36882_il2cpp_TypeInfo/* declaring_type */
	, &DefaultDependencyAttribute_t7987_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36882_IList_1_get_Item_m271793_ParameterInfos/* parameters */
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
extern Il2CppType DefaultDependencyAttribute_t7987_0_0_0;
static ParameterInfo IList_1_t36882_IList_1_set_Item_m271794_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DefaultDependencyAttribute_t7987_0_0_0},
};
extern TypeInfo IList_1_t36882_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.DefaultDependencyAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271794_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36882_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36882_IList_1_set_Item_m271794_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36882_MethodInfos[] =
{
	&IList_1_IndexOf_m271795_MethodInfo,
	&IList_1_Insert_m271796_MethodInfo,
	&IList_1_RemoveAt_m271797_MethodInfo,
	&IList_1_get_Item_m271793_MethodInfo,
	&IList_1_set_Item_m271794_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36881_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36883_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36882_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36881_il2cpp_TypeInfo,
	&IEnumerable_1_t36883_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36882_0_0_0;
extern Il2CppType IList_1_t36882_1_0_0;
struct IList_1_t36882;
extern TypeInfo IList_1_t36882_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36882_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36882_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36882_MethodInfos/* methods */
	, IList_1_t36882_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36882_il2cpp_TypeInfo/* element_class */
	, IList_1_t36882_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36882_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36882_0_0_0/* byval_arg */
	, &IList_1_t36882_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36882_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29238_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.LoadHint
#include "mscorlib_System_Runtime_CompilerServices_LoadHint.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo IEnumerator_1_get_Current_m271798_MethodInfo;
static PropertyInfo IEnumerator_1_t29238____Current_PropertyInfo = 
{
	&IEnumerator_1_t29238_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271798_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29238_PropertyInfos[] =
{
	&IEnumerator_1_t29238____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29238_il2cpp_TypeInfo;
extern Il2CppType LoadHint_t7989_0_0_0;
extern void* RuntimeInvoker_LoadHint_t7989 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271798_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29238_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t7989_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t7989/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29238_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271798_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29238_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29238_0_0_0;
extern Il2CppType IEnumerator_1_t29238_1_0_0;
struct IEnumerator_1_t29238;
extern TypeInfo IEnumerator_1_t29238_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29238_GenericClass;
TypeInfo IEnumerator_1_t29238_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29238_MethodInfos/* methods */
	, IEnumerator_1_t29238_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29238_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29238_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29238_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29238_0_0_0/* byval_arg */
	, &IEnumerator_1_t29238_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29238_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2987.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2987MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern TypeInfo LoadHint_t7989_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179825_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisLoadHint_t7989_m222983_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.LoadHint>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.LoadHint>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisLoadHint_t7989_m222983 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisLoadHint_t7989_m222983_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179820_MethodInfo;
 void InternalEnumerator_1__ctor_m179820 (InternalEnumerator_1_t24780 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179821_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179821 (InternalEnumerator_1_t24780 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822 (InternalEnumerator_1_t24780 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179825(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179825_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&LoadHint_t7989_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179823_MethodInfo;
 void InternalEnumerator_1_Dispose_m179823 (InternalEnumerator_1_t24780 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179824_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179824 (InternalEnumerator_1_t24780 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179825_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179825 (InternalEnumerator_1_t24780 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisLoadHint_t7989_m222983(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisLoadHint_t7989_m222983_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24780____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24780, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24780____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24780, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24780_FieldInfos[] =
{
	&InternalEnumerator_1_t24780____array_FieldInfo,
	&InternalEnumerator_1_t24780____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24780____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24780_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179825_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24780____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24780_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179825_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24780_PropertyInfos[] =
{
	&InternalEnumerator_1_t24780____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24780____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24780_InternalEnumerator_1__ctor_m179820_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179820_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179820/* method */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24780_InternalEnumerator_1__ctor_m179820_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179821_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179821/* method */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822/* method */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179823_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179823/* method */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179824_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179824/* method */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern Il2CppType LoadHint_t7989_0_0_0;
extern void* RuntimeInvoker_LoadHint_t7989 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.LoadHint>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179825_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179825/* method */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t7989_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t7989/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24780_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179820_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179821_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822_MethodInfo,
	&InternalEnumerator_1_Dispose_m179823_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179824_MethodInfo,
	&InternalEnumerator_1_get_Current_m179825_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179824_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179821_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179823_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179825_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24780_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179822_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179824_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179821_MethodInfo,
	&InternalEnumerator_1_Dispose_m179823_MethodInfo,
	&InternalEnumerator_1_get_Current_m179825_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29238_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24780_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29238_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29238_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24780_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29238_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24780_0_0_0;
extern Il2CppType InternalEnumerator_1_t24780_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24780_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24780_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24780_MethodInfos/* methods */
	, InternalEnumerator_1_t24780_PropertyInfos/* properties */
	, InternalEnumerator_1_t24780_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24780_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24780_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24780_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24780_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24780_1_0_0/* this_arg */
	, InternalEnumerator_1_t24780_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24780_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24780)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo ICollection_1_get_Count_m271799_MethodInfo;
static PropertyInfo ICollection_1_t36884____Count_PropertyInfo = 
{
	&ICollection_1_t36884_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271799_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271800_MethodInfo;
static PropertyInfo ICollection_1_t36884____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36884_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271800_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36884_PropertyInfos[] =
{
	&ICollection_1_t36884____Count_PropertyInfo,
	&ICollection_1_t36884____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_Count()
MethodInfo ICollection_1_get_Count_m271799_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271800_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType LoadHint_t7989_0_0_0;
static ParameterInfo ICollection_1_t36884_ICollection_1_Add_m271801_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t7989_0_0_0},
};
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Add(T)
MethodInfo ICollection_1_Add_m271801_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36884_ICollection_1_Add_m271801_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Clear()
MethodInfo ICollection_1_Clear_m271802_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType LoadHint_t7989_0_0_0;
static ParameterInfo ICollection_1_t36884_ICollection_1_Contains_m271803_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t7989_0_0_0},
};
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Contains(T)
MethodInfo ICollection_1_Contains_m271803_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36884_ICollection_1_Contains_m271803_ParameterInfos/* parameters */
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
extern Il2CppType LoadHintU5BU5D_t25310_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36884_ICollection_1_CopyTo_m271804_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &LoadHintU5BU5D_t25310_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271804_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36884_ICollection_1_CopyTo_m271804_ParameterInfos/* parameters */
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
extern Il2CppType LoadHint_t7989_0_0_0;
static ParameterInfo ICollection_1_t36884_ICollection_1_Remove_m271805_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t7989_0_0_0},
};
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.LoadHint>::Remove(T)
MethodInfo ICollection_1_Remove_m271805_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36884_ICollection_1_Remove_m271805_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36884_MethodInfos[] =
{
	&ICollection_1_get_Count_m271799_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271800_MethodInfo,
	&ICollection_1_Add_m271801_MethodInfo,
	&ICollection_1_Clear_m271802_MethodInfo,
	&ICollection_1_Contains_m271803_MethodInfo,
	&ICollection_1_CopyTo_m271804_MethodInfo,
	&ICollection_1_Remove_m271805_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36886_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36884_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36886_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36884_0_0_0;
extern Il2CppType ICollection_1_t36884_1_0_0;
struct ICollection_1_t36884;
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36884_GenericClass;
TypeInfo ICollection_1_t36884_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36884_MethodInfos/* methods */
	, ICollection_1_t36884_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36884_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36884_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36884_0_0_0/* byval_arg */
	, &ICollection_1_t36884_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36884_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36886_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>
extern TypeInfo IEnumerable_1_t36886_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29238_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.LoadHint>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271806_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36886_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29238_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36886_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271806_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36886_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36886_0_0_0;
extern Il2CppType IEnumerable_1_t36886_1_0_0;
struct IEnumerable_1_t36886;
extern TypeInfo IEnumerable_1_t36886_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36886_GenericClass;
TypeInfo IEnumerable_1_t36886_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36886_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36886_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36886_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36886_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36886_0_0_0/* byval_arg */
	, &IEnumerable_1_t36886_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36886_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36885_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>
extern MethodInfo IList_1_get_Item_m271807_MethodInfo;
extern MethodInfo IList_1_set_Item_m271808_MethodInfo;
static PropertyInfo IList_1_t36885____Item_PropertyInfo = 
{
	&IList_1_t36885_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271807_MethodInfo/* get */
	, &IList_1_set_Item_m271808_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36885_PropertyInfos[] =
{
	&IList_1_t36885____Item_PropertyInfo,
	NULL
};
extern Il2CppType LoadHint_t7989_0_0_0;
static ParameterInfo IList_1_t36885_IList_1_IndexOf_m271809_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &LoadHint_t7989_0_0_0},
};
extern TypeInfo IList_1_t36885_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271809_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36885_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36885_IList_1_IndexOf_m271809_ParameterInfos/* parameters */
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
extern Il2CppType LoadHint_t7989_0_0_0;
static ParameterInfo IList_1_t36885_IList_1_Insert_m271810_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &LoadHint_t7989_0_0_0},
};
extern TypeInfo IList_1_t36885_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271810_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36885_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36885_IList_1_Insert_m271810_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36885_IList_1_RemoveAt_m271811_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36885_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271811_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36885_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36885_IList_1_RemoveAt_m271811_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36885_IList_1_get_Item_m271807_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36885_il2cpp_TypeInfo;
extern Il2CppType LoadHint_t7989_0_0_0;
extern void* RuntimeInvoker_LoadHint_t7989_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271807_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36885_il2cpp_TypeInfo/* declaring_type */
	, &LoadHint_t7989_0_0_0/* return_type */
	, RuntimeInvoker_LoadHint_t7989_Int32_t73/* invoker_method */
	, IList_1_t36885_IList_1_get_Item_m271807_ParameterInfos/* parameters */
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
extern Il2CppType LoadHint_t7989_0_0_0;
static ParameterInfo IList_1_t36885_IList_1_set_Item_m271808_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &LoadHint_t7989_0_0_0},
};
extern TypeInfo IList_1_t36885_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.LoadHint>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271808_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36885_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36885_IList_1_set_Item_m271808_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36885_MethodInfos[] =
{
	&IList_1_IndexOf_m271809_MethodInfo,
	&IList_1_Insert_m271810_MethodInfo,
	&IList_1_RemoveAt_m271811_MethodInfo,
	&IList_1_get_Item_m271807_MethodInfo,
	&IList_1_set_Item_m271808_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36884_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36886_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36885_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36884_il2cpp_TypeInfo,
	&IEnumerable_1_t36886_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36885_0_0_0;
extern Il2CppType IList_1_t36885_1_0_0;
struct IList_1_t36885;
extern TypeInfo IList_1_t36885_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36885_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36885_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36885_MethodInfos/* methods */
	, IList_1_t36885_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36885_il2cpp_TypeInfo/* element_class */
	, IList_1_t36885_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36885_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36885_0_0_0/* byval_arg */
	, &IList_1_t36885_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36885_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29239_il2cpp_TypeInfo;

// System.Runtime.CompilerServices.StringFreezingAttribute
#include "mscorlib_System_Runtime_CompilerServices_StringFreezingAttri.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271812_MethodInfo;
static PropertyInfo IEnumerator_1_t29239____Current_PropertyInfo = 
{
	&IEnumerator_1_t29239_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271812_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29239_PropertyInfos[] =
{
	&IEnumerator_1_t29239____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29239_il2cpp_TypeInfo;
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271812_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29239_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t7990_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29239_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271812_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29239_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29239_0_0_0;
extern Il2CppType IEnumerator_1_t29239_1_0_0;
struct IEnumerator_1_t29239;
extern TypeInfo IEnumerator_1_t29239_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29239_GenericClass;
TypeInfo IEnumerator_1_t29239_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29239_MethodInfos/* methods */
	, IEnumerator_1_t29239_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29239_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29239_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29239_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29239_0_0_0/* byval_arg */
	, &IEnumerator_1_t29239_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29239_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2988.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2988MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern TypeInfo StringFreezingAttribute_t7990_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179831_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringFreezingAttribute_t7990_m222994_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.StringFreezingAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.CompilerServices.StringFreezingAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisStringFreezingAttribute_t7990_m222994(__this, p0, method) (StringFreezingAttribute_t7990 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisStringFreezingAttribute_t7990_m222994_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24781____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24781, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24781____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24781, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24781_FieldInfos[] =
{
	&InternalEnumerator_1_t24781____array_FieldInfo,
	&InternalEnumerator_1_t24781____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179828_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24781____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24781_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179828_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179831_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24781____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24781_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179831_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24781_PropertyInfos[] =
{
	&InternalEnumerator_1_t24781____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24781____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24781_InternalEnumerator_1__ctor_m179826_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179826_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24781_InternalEnumerator_1__ctor_m179826_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179827_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179828_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179829_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179830_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179831_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t7990_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24781_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179826_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179827_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179828_MethodInfo,
	&InternalEnumerator_1_Dispose_m179829_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179830_MethodInfo,
	&InternalEnumerator_1_get_Current_m179831_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179828_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179830_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179827_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179829_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179831_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24781_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179828_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179830_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179827_MethodInfo,
	&InternalEnumerator_1_Dispose_m179829_MethodInfo,
	&InternalEnumerator_1_get_Current_m179831_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29239_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24781_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29239_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29239_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24781_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29239_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179831_MethodInfo;
extern TypeInfo StringFreezingAttribute_t7990_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisStringFreezingAttribute_t7990_m222994_MethodInfo;
static void* InternalEnumerator_1_t24781_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179831_MethodInfo,
	&StringFreezingAttribute_t7990_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisStringFreezingAttribute_t7990_m222994_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24781_0_0_0;
extern Il2CppType InternalEnumerator_1_t24781_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24781_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24781_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24781_MethodInfos/* methods */
	, InternalEnumerator_1_t24781_PropertyInfos/* properties */
	, InternalEnumerator_1_t24781_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24781_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24781_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24781_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24781_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24781_1_0_0/* this_arg */
	, InternalEnumerator_1_t24781_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24781_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24781_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24781)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo ICollection_1_get_Count_m271813_MethodInfo;
static PropertyInfo ICollection_1_t36887____Count_PropertyInfo = 
{
	&ICollection_1_t36887_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271813_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271814_MethodInfo;
static PropertyInfo ICollection_1_t36887____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36887_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271814_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36887_PropertyInfos[] =
{
	&ICollection_1_t36887____Count_PropertyInfo,
	&ICollection_1_t36887____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271813_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271814_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
static ParameterInfo ICollection_1_t36887_ICollection_1_Add_m271815_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t7990_0_0_0},
};
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271815_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36887_ICollection_1_Add_m271815_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271816_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
static ParameterInfo ICollection_1_t36887_ICollection_1_Contains_m271817_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t7990_0_0_0},
};
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271817_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36887_ICollection_1_Contains_m271817_ParameterInfos/* parameters */
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
extern Il2CppType StringFreezingAttributeU5BU5D_t25311_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36887_ICollection_1_CopyTo_m271818_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttributeU5BU5D_t25311_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271818_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36887_ICollection_1_CopyTo_m271818_ParameterInfos/* parameters */
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
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
static ParameterInfo ICollection_1_t36887_ICollection_1_Remove_m271819_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t7990_0_0_0},
};
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271819_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36887_ICollection_1_Remove_m271819_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36887_MethodInfos[] =
{
	&ICollection_1_get_Count_m271813_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271814_MethodInfo,
	&ICollection_1_Add_m271815_MethodInfo,
	&ICollection_1_Clear_m271816_MethodInfo,
	&ICollection_1_Contains_m271817_MethodInfo,
	&ICollection_1_CopyTo_m271818_MethodInfo,
	&ICollection_1_Remove_m271819_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36889_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36887_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36889_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36887_0_0_0;
extern Il2CppType ICollection_1_t36887_1_0_0;
struct ICollection_1_t36887;
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36887_GenericClass;
TypeInfo ICollection_1_t36887_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36887_MethodInfos/* methods */
	, ICollection_1_t36887_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36887_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36887_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36887_0_0_0/* byval_arg */
	, &ICollection_1_t36887_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36887_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36889_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern TypeInfo IEnumerable_1_t36889_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29239_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.CompilerServices.StringFreezingAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271820_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36889_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29239_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36889_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271820_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36889_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36889_0_0_0;
extern Il2CppType IEnumerable_1_t36889_1_0_0;
struct IEnumerable_1_t36889;
extern TypeInfo IEnumerable_1_t36889_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36889_GenericClass;
TypeInfo IEnumerable_1_t36889_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36889_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36889_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36889_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36889_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36889_0_0_0/* byval_arg */
	, &IEnumerable_1_t36889_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36889_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36888_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>
extern MethodInfo IList_1_get_Item_m271821_MethodInfo;
extern MethodInfo IList_1_set_Item_m271822_MethodInfo;
static PropertyInfo IList_1_t36888____Item_PropertyInfo = 
{
	&IList_1_t36888_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271821_MethodInfo/* get */
	, &IList_1_set_Item_m271822_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36888_PropertyInfos[] =
{
	&IList_1_t36888____Item_PropertyInfo,
	NULL
};
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
static ParameterInfo IList_1_t36888_IList_1_IndexOf_m271823_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t7990_0_0_0},
};
extern TypeInfo IList_1_t36888_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271823_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36888_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36888_IList_1_IndexOf_m271823_ParameterInfos/* parameters */
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
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
static ParameterInfo IList_1_t36888_IList_1_Insert_m271824_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t7990_0_0_0},
};
extern TypeInfo IList_1_t36888_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271824_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36888_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36888_IList_1_Insert_m271824_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36888_IList_1_RemoveAt_m271825_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36888_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271825_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36888_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36888_IList_1_RemoveAt_m271825_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36888_IList_1_get_Item_m271821_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36888_il2cpp_TypeInfo;
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271821_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36888_il2cpp_TypeInfo/* declaring_type */
	, &StringFreezingAttribute_t7990_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36888_IList_1_get_Item_m271821_ParameterInfos/* parameters */
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
extern Il2CppType StringFreezingAttribute_t7990_0_0_0;
static ParameterInfo IList_1_t36888_IList_1_set_Item_m271822_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &StringFreezingAttribute_t7990_0_0_0},
};
extern TypeInfo IList_1_t36888_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.CompilerServices.StringFreezingAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271822_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36888_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36888_IList_1_set_Item_m271822_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36888_MethodInfos[] =
{
	&IList_1_IndexOf_m271823_MethodInfo,
	&IList_1_Insert_m271824_MethodInfo,
	&IList_1_RemoveAt_m271825_MethodInfo,
	&IList_1_get_Item_m271821_MethodInfo,
	&IList_1_set_Item_m271822_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36887_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36889_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36888_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36887_il2cpp_TypeInfo,
	&IEnumerable_1_t36889_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36888_0_0_0;
extern Il2CppType IList_1_t36888_1_0_0;
struct IList_1_t36888;
extern TypeInfo IList_1_t36888_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36888_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36888_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36888_MethodInfos/* methods */
	, IList_1_t36888_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36888_il2cpp_TypeInfo/* element_class */
	, IList_1_t36888_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36888_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36888_0_0_0/* byval_arg */
	, &IList_1_t36888_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36888_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29240_il2cpp_TypeInfo;

// System.Runtime.ConstrainedExecution.Cer
#include "mscorlib_System_Runtime_ConstrainedExecution_Cer.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo IEnumerator_1_get_Current_m271826_MethodInfo;
static PropertyInfo IEnumerator_1_t29240____Current_PropertyInfo = 
{
	&IEnumerator_1_t29240_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271826_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29240_PropertyInfos[] =
{
	&IEnumerator_1_t29240____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29240_il2cpp_TypeInfo;
extern Il2CppType Cer_t7991_0_0_0;
extern void* RuntimeInvoker_Cer_t7991 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271826_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29240_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t7991_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t7991/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29240_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271826_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29240_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29240_0_0_0;
extern Il2CppType IEnumerator_1_t29240_1_0_0;
struct IEnumerator_1_t29240;
extern TypeInfo IEnumerator_1_t29240_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29240_GenericClass;
TypeInfo IEnumerator_1_t29240_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29240_MethodInfos/* methods */
	, IEnumerator_1_t29240_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29240_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29240_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29240_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29240_0_0_0/* byval_arg */
	, &IEnumerator_1_t29240_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29240_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2989.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2989MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern TypeInfo Cer_t7991_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179837_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCer_t7991_m223005_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Cer>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Cer>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCer_t7991_m223005 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCer_t7991_m223005_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179832_MethodInfo;
 void InternalEnumerator_1__ctor_m179832 (InternalEnumerator_1_t24782 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179833_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179833 (InternalEnumerator_1_t24782 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834 (InternalEnumerator_1_t24782 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179837(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179837_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Cer_t7991_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179835_MethodInfo;
 void InternalEnumerator_1_Dispose_m179835 (InternalEnumerator_1_t24782 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179836_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179836 (InternalEnumerator_1_t24782 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179837_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179837 (InternalEnumerator_1_t24782 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCer_t7991_m223005(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCer_t7991_m223005_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24782____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24782, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24782____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24782, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24782_FieldInfos[] =
{
	&InternalEnumerator_1_t24782____array_FieldInfo,
	&InternalEnumerator_1_t24782____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24782____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24782_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179837_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24782____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24782_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179837_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24782_PropertyInfos[] =
{
	&InternalEnumerator_1_t24782____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24782____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24782_InternalEnumerator_1__ctor_m179832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179832_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179832/* method */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24782_InternalEnumerator_1__ctor_m179832_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179833_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179833/* method */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834/* method */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179835_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179835/* method */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179836_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179836/* method */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern Il2CppType Cer_t7991_0_0_0;
extern void* RuntimeInvoker_Cer_t7991 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Cer>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179837_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179837/* method */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t7991_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t7991/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24782_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179832_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179833_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834_MethodInfo,
	&InternalEnumerator_1_Dispose_m179835_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179836_MethodInfo,
	&InternalEnumerator_1_get_Current_m179837_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179836_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179833_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179835_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179837_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24782_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179834_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179836_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179833_MethodInfo,
	&InternalEnumerator_1_Dispose_m179835_MethodInfo,
	&InternalEnumerator_1_get_Current_m179837_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29240_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24782_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29240_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29240_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24782_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29240_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24782_0_0_0;
extern Il2CppType InternalEnumerator_1_t24782_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24782_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24782_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24782_MethodInfos/* methods */
	, InternalEnumerator_1_t24782_PropertyInfos/* properties */
	, InternalEnumerator_1_t24782_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24782_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24782_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24782_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24782_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24782_1_0_0/* this_arg */
	, InternalEnumerator_1_t24782_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24782_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24782)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo ICollection_1_get_Count_m271827_MethodInfo;
static PropertyInfo ICollection_1_t36890____Count_PropertyInfo = 
{
	&ICollection_1_t36890_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271827_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271828_MethodInfo;
static PropertyInfo ICollection_1_t36890____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36890_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271828_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36890_PropertyInfos[] =
{
	&ICollection_1_t36890____Count_PropertyInfo,
	&ICollection_1_t36890____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_Count()
MethodInfo ICollection_1_get_Count_m271827_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271828_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Cer_t7991_0_0_0;
static ParameterInfo ICollection_1_t36890_ICollection_1_Add_m271829_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t7991_0_0_0},
};
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Add(T)
MethodInfo ICollection_1_Add_m271829_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36890_ICollection_1_Add_m271829_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Clear()
MethodInfo ICollection_1_Clear_m271830_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Cer_t7991_0_0_0;
static ParameterInfo ICollection_1_t36890_ICollection_1_Contains_m271831_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t7991_0_0_0},
};
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Contains(T)
MethodInfo ICollection_1_Contains_m271831_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36890_ICollection_1_Contains_m271831_ParameterInfos/* parameters */
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
extern Il2CppType CerU5BU5D_t25312_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36890_ICollection_1_CopyTo_m271832_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CerU5BU5D_t25312_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271832_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36890_ICollection_1_CopyTo_m271832_ParameterInfos/* parameters */
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
extern Il2CppType Cer_t7991_0_0_0;
static ParameterInfo ICollection_1_t36890_ICollection_1_Remove_m271833_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t7991_0_0_0},
};
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Cer>::Remove(T)
MethodInfo ICollection_1_Remove_m271833_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36890_ICollection_1_Remove_m271833_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36890_MethodInfos[] =
{
	&ICollection_1_get_Count_m271827_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271828_MethodInfo,
	&ICollection_1_Add_m271829_MethodInfo,
	&ICollection_1_Clear_m271830_MethodInfo,
	&ICollection_1_Contains_m271831_MethodInfo,
	&ICollection_1_CopyTo_m271832_MethodInfo,
	&ICollection_1_Remove_m271833_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36892_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36890_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36892_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36890_0_0_0;
extern Il2CppType ICollection_1_t36890_1_0_0;
struct ICollection_1_t36890;
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36890_GenericClass;
TypeInfo ICollection_1_t36890_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36890_MethodInfos/* methods */
	, ICollection_1_t36890_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36890_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36890_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36890_0_0_0/* byval_arg */
	, &ICollection_1_t36890_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36890_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36892_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>
extern TypeInfo IEnumerable_1_t36892_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29240_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Cer>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271834_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36892_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29240_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36892_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271834_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36892_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36892_0_0_0;
extern Il2CppType IEnumerable_1_t36892_1_0_0;
struct IEnumerable_1_t36892;
extern TypeInfo IEnumerable_1_t36892_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36892_GenericClass;
TypeInfo IEnumerable_1_t36892_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36892_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36892_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36892_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36892_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36892_0_0_0/* byval_arg */
	, &IEnumerable_1_t36892_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36892_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36891_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>
extern MethodInfo IList_1_get_Item_m271835_MethodInfo;
extern MethodInfo IList_1_set_Item_m271836_MethodInfo;
static PropertyInfo IList_1_t36891____Item_PropertyInfo = 
{
	&IList_1_t36891_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271835_MethodInfo/* get */
	, &IList_1_set_Item_m271836_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36891_PropertyInfos[] =
{
	&IList_1_t36891____Item_PropertyInfo,
	NULL
};
extern Il2CppType Cer_t7991_0_0_0;
static ParameterInfo IList_1_t36891_IList_1_IndexOf_m271837_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Cer_t7991_0_0_0},
};
extern TypeInfo IList_1_t36891_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271837_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36891_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36891_IList_1_IndexOf_m271837_ParameterInfos/* parameters */
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
extern Il2CppType Cer_t7991_0_0_0;
static ParameterInfo IList_1_t36891_IList_1_Insert_m271838_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Cer_t7991_0_0_0},
};
extern TypeInfo IList_1_t36891_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271838_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36891_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36891_IList_1_Insert_m271838_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36891_IList_1_RemoveAt_m271839_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36891_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271839_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36891_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36891_IList_1_RemoveAt_m271839_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36891_IList_1_get_Item_m271835_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36891_il2cpp_TypeInfo;
extern Il2CppType Cer_t7991_0_0_0;
extern void* RuntimeInvoker_Cer_t7991_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271835_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36891_il2cpp_TypeInfo/* declaring_type */
	, &Cer_t7991_0_0_0/* return_type */
	, RuntimeInvoker_Cer_t7991_Int32_t73/* invoker_method */
	, IList_1_t36891_IList_1_get_Item_m271835_ParameterInfos/* parameters */
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
extern Il2CppType Cer_t7991_0_0_0;
static ParameterInfo IList_1_t36891_IList_1_set_Item_m271836_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Cer_t7991_0_0_0},
};
extern TypeInfo IList_1_t36891_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Cer>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271836_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36891_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36891_IList_1_set_Item_m271836_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36891_MethodInfos[] =
{
	&IList_1_IndexOf_m271837_MethodInfo,
	&IList_1_Insert_m271838_MethodInfo,
	&IList_1_RemoveAt_m271839_MethodInfo,
	&IList_1_get_Item_m271835_MethodInfo,
	&IList_1_set_Item_m271836_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36890_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36892_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36891_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36890_il2cpp_TypeInfo,
	&IEnumerable_1_t36892_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36891_0_0_0;
extern Il2CppType IList_1_t36891_1_0_0;
struct IList_1_t36891;
extern TypeInfo IList_1_t36891_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36891_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36891_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36891_MethodInfos/* methods */
	, IList_1_t36891_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36891_il2cpp_TypeInfo/* element_class */
	, IList_1_t36891_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36891_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36891_0_0_0/* byval_arg */
	, &IList_1_t36891_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36891_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29241_il2cpp_TypeInfo;

// System.Runtime.ConstrainedExecution.Consistency
#include "mscorlib_System_Runtime_ConstrainedExecution_Consistency.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo IEnumerator_1_get_Current_m271840_MethodInfo;
static PropertyInfo IEnumerator_1_t29241____Current_PropertyInfo = 
{
	&IEnumerator_1_t29241_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271840_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29241_PropertyInfos[] =
{
	&IEnumerator_1_t29241____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29241_il2cpp_TypeInfo;
extern Il2CppType Consistency_t7992_0_0_0;
extern void* RuntimeInvoker_Consistency_t7992 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271840_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29241_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t7992_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t7992/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29241_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271840_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29241_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29241_0_0_0;
extern Il2CppType IEnumerator_1_t29241_1_0_0;
struct IEnumerator_1_t29241;
extern TypeInfo IEnumerator_1_t29241_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29241_GenericClass;
TypeInfo IEnumerator_1_t29241_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29241_MethodInfos/* methods */
	, IEnumerator_1_t29241_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29241_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29241_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29241_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29241_0_0_0/* byval_arg */
	, &IEnumerator_1_t29241_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29241_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2990.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2990MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern TypeInfo Consistency_t7992_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179843_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisConsistency_t7992_m223016_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Consistency>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.Consistency>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisConsistency_t7992_m223016 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisConsistency_t7992_m223016_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179838_MethodInfo;
 void InternalEnumerator_1__ctor_m179838 (InternalEnumerator_1_t24783 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179839_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179839 (InternalEnumerator_1_t24783 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840 (InternalEnumerator_1_t24783 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179843(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179843_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&Consistency_t7992_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179841_MethodInfo;
 void InternalEnumerator_1_Dispose_m179841 (InternalEnumerator_1_t24783 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179842_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179842 (InternalEnumerator_1_t24783 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179843_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179843 (InternalEnumerator_1_t24783 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisConsistency_t7992_m223016(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisConsistency_t7992_m223016_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24783____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24783, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24783____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24783, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24783_FieldInfos[] =
{
	&InternalEnumerator_1_t24783____array_FieldInfo,
	&InternalEnumerator_1_t24783____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24783____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24783_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179843_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24783____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24783_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179843_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24783_PropertyInfos[] =
{
	&InternalEnumerator_1_t24783____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24783____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24783_InternalEnumerator_1__ctor_m179838_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179838_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179838/* method */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24783_InternalEnumerator_1__ctor_m179838_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179839_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179839/* method */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840/* method */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179841_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179841/* method */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179842_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179842/* method */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern Il2CppType Consistency_t7992_0_0_0;
extern void* RuntimeInvoker_Consistency_t7992 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.Consistency>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179843_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179843/* method */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t7992_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t7992/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24783_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179838_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179839_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840_MethodInfo,
	&InternalEnumerator_1_Dispose_m179841_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179842_MethodInfo,
	&InternalEnumerator_1_get_Current_m179843_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179842_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179839_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179841_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179843_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24783_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179840_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179842_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179839_MethodInfo,
	&InternalEnumerator_1_Dispose_m179841_MethodInfo,
	&InternalEnumerator_1_get_Current_m179843_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29241_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24783_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29241_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29241_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24783_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29241_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24783_0_0_0;
extern Il2CppType InternalEnumerator_1_t24783_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24783_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24783_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24783_MethodInfos/* methods */
	, InternalEnumerator_1_t24783_PropertyInfos/* properties */
	, InternalEnumerator_1_t24783_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24783_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24783_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24783_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24783_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24783_1_0_0/* this_arg */
	, InternalEnumerator_1_t24783_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24783_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24783)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo ICollection_1_get_Count_m271841_MethodInfo;
static PropertyInfo ICollection_1_t36893____Count_PropertyInfo = 
{
	&ICollection_1_t36893_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271841_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271842_MethodInfo;
static PropertyInfo ICollection_1_t36893____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36893_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271842_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36893_PropertyInfos[] =
{
	&ICollection_1_t36893____Count_PropertyInfo,
	&ICollection_1_t36893____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_Count()
MethodInfo ICollection_1_get_Count_m271841_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271842_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Consistency_t7992_0_0_0;
static ParameterInfo ICollection_1_t36893_ICollection_1_Add_m271843_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t7992_0_0_0},
};
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Add(T)
MethodInfo ICollection_1_Add_m271843_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36893_ICollection_1_Add_m271843_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Clear()
MethodInfo ICollection_1_Clear_m271844_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType Consistency_t7992_0_0_0;
static ParameterInfo ICollection_1_t36893_ICollection_1_Contains_m271845_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t7992_0_0_0},
};
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Contains(T)
MethodInfo ICollection_1_Contains_m271845_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36893_ICollection_1_Contains_m271845_ParameterInfos/* parameters */
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
extern Il2CppType ConsistencyU5BU5D_t25313_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36893_ICollection_1_CopyTo_m271846_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ConsistencyU5BU5D_t25313_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271846_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36893_ICollection_1_CopyTo_m271846_ParameterInfos/* parameters */
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
extern Il2CppType Consistency_t7992_0_0_0;
static ParameterInfo ICollection_1_t36893_ICollection_1_Remove_m271847_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t7992_0_0_0},
};
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.Consistency>::Remove(T)
MethodInfo ICollection_1_Remove_m271847_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36893_ICollection_1_Remove_m271847_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36893_MethodInfos[] =
{
	&ICollection_1_get_Count_m271841_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271842_MethodInfo,
	&ICollection_1_Add_m271843_MethodInfo,
	&ICollection_1_Clear_m271844_MethodInfo,
	&ICollection_1_Contains_m271845_MethodInfo,
	&ICollection_1_CopyTo_m271846_MethodInfo,
	&ICollection_1_Remove_m271847_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36895_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36893_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36895_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36893_0_0_0;
extern Il2CppType ICollection_1_t36893_1_0_0;
struct ICollection_1_t36893;
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36893_GenericClass;
TypeInfo ICollection_1_t36893_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36893_MethodInfos/* methods */
	, ICollection_1_t36893_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36893_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36893_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36893_0_0_0/* byval_arg */
	, &ICollection_1_t36893_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36893_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36895_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>
extern TypeInfo IEnumerable_1_t36895_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29241_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.Consistency>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271848_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36895_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29241_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36895_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271848_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36895_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36895_0_0_0;
extern Il2CppType IEnumerable_1_t36895_1_0_0;
struct IEnumerable_1_t36895;
extern TypeInfo IEnumerable_1_t36895_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36895_GenericClass;
TypeInfo IEnumerable_1_t36895_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36895_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36895_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36895_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36895_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36895_0_0_0/* byval_arg */
	, &IEnumerable_1_t36895_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36895_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36894_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>
extern MethodInfo IList_1_get_Item_m271849_MethodInfo;
extern MethodInfo IList_1_set_Item_m271850_MethodInfo;
static PropertyInfo IList_1_t36894____Item_PropertyInfo = 
{
	&IList_1_t36894_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271849_MethodInfo/* get */
	, &IList_1_set_Item_m271850_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36894_PropertyInfos[] =
{
	&IList_1_t36894____Item_PropertyInfo,
	NULL
};
extern Il2CppType Consistency_t7992_0_0_0;
static ParameterInfo IList_1_t36894_IList_1_IndexOf_m271851_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &Consistency_t7992_0_0_0},
};
extern TypeInfo IList_1_t36894_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271851_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36894_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36894_IList_1_IndexOf_m271851_ParameterInfos/* parameters */
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
extern Il2CppType Consistency_t7992_0_0_0;
static ParameterInfo IList_1_t36894_IList_1_Insert_m271852_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &Consistency_t7992_0_0_0},
};
extern TypeInfo IList_1_t36894_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271852_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36894_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36894_IList_1_Insert_m271852_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36894_IList_1_RemoveAt_m271853_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36894_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271853_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36894_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36894_IList_1_RemoveAt_m271853_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36894_IList_1_get_Item_m271849_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36894_il2cpp_TypeInfo;
extern Il2CppType Consistency_t7992_0_0_0;
extern void* RuntimeInvoker_Consistency_t7992_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271849_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36894_il2cpp_TypeInfo/* declaring_type */
	, &Consistency_t7992_0_0_0/* return_type */
	, RuntimeInvoker_Consistency_t7992_Int32_t73/* invoker_method */
	, IList_1_t36894_IList_1_get_Item_m271849_ParameterInfos/* parameters */
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
extern Il2CppType Consistency_t7992_0_0_0;
static ParameterInfo IList_1_t36894_IList_1_set_Item_m271850_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &Consistency_t7992_0_0_0},
};
extern TypeInfo IList_1_t36894_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.Consistency>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271850_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36894_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36894_IList_1_set_Item_m271850_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36894_MethodInfos[] =
{
	&IList_1_IndexOf_m271851_MethodInfo,
	&IList_1_Insert_m271852_MethodInfo,
	&IList_1_RemoveAt_m271853_MethodInfo,
	&IList_1_get_Item_m271849_MethodInfo,
	&IList_1_set_Item_m271850_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36893_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36895_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36894_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36893_il2cpp_TypeInfo,
	&IEnumerable_1_t36895_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36894_0_0_0;
extern Il2CppType IList_1_t36894_1_0_0;
struct IList_1_t36894;
extern TypeInfo IList_1_t36894_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36894_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36894_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36894_MethodInfos/* methods */
	, IList_1_t36894_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36894_il2cpp_TypeInfo/* element_class */
	, IList_1_t36894_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36894_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36894_0_0_0/* byval_arg */
	, &IList_1_t36894_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36894_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29242_il2cpp_TypeInfo;

// System.Runtime.ConstrainedExecution.ReliabilityContractAttribute
#include "mscorlib_System_Runtime_ConstrainedExecution_ReliabilityCont.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271854_MethodInfo;
static PropertyInfo IEnumerator_1_t29242____Current_PropertyInfo = 
{
	&IEnumerator_1_t29242_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271854_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29242_PropertyInfos[] =
{
	&IEnumerator_1_t29242____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29242_il2cpp_TypeInfo;
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271854_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29242_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t7994_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29242_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271854_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29242_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29242_0_0_0;
extern Il2CppType IEnumerator_1_t29242_1_0_0;
struct IEnumerator_1_t29242;
extern TypeInfo IEnumerator_1_t29242_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29242_GenericClass;
TypeInfo IEnumerator_1_t29242_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29242_MethodInfos/* methods */
	, IEnumerator_1_t29242_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29242_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29242_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29242_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29242_0_0_0/* byval_arg */
	, &IEnumerator_1_t29242_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29242_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2991.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2991MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern TypeInfo ReliabilityContractAttribute_t7994_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179849_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisReliabilityContractAttribute_t7994_m223027_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisReliabilityContractAttribute_t7994_m223027(__this, p0, method) (ReliabilityContractAttribute_t7994 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisReliabilityContractAttribute_t7994_m223027_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24784____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24784, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24784____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24784, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24784_FieldInfos[] =
{
	&InternalEnumerator_1_t24784____array_FieldInfo,
	&InternalEnumerator_1_t24784____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179846_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24784____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24784_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179846_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179849_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24784____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24784_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179849_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24784_PropertyInfos[] =
{
	&InternalEnumerator_1_t24784____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24784____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24784_InternalEnumerator_1__ctor_m179844_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179844_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24784_InternalEnumerator_1__ctor_m179844_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179845_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179846_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179847_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179848_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179849_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t7994_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24784_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179844_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179845_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179846_MethodInfo,
	&InternalEnumerator_1_Dispose_m179847_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179848_MethodInfo,
	&InternalEnumerator_1_get_Current_m179849_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179846_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179848_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179845_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179847_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179849_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24784_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179846_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179848_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179845_MethodInfo,
	&InternalEnumerator_1_Dispose_m179847_MethodInfo,
	&InternalEnumerator_1_get_Current_m179849_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29242_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24784_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29242_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29242_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24784_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29242_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179849_MethodInfo;
extern TypeInfo ReliabilityContractAttribute_t7994_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisReliabilityContractAttribute_t7994_m223027_MethodInfo;
static void* InternalEnumerator_1_t24784_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179849_MethodInfo,
	&ReliabilityContractAttribute_t7994_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisReliabilityContractAttribute_t7994_m223027_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24784_0_0_0;
extern Il2CppType InternalEnumerator_1_t24784_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24784_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24784_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24784_MethodInfos/* methods */
	, InternalEnumerator_1_t24784_PropertyInfos/* properties */
	, InternalEnumerator_1_t24784_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24784_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24784_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24784_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24784_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24784_1_0_0/* this_arg */
	, InternalEnumerator_1_t24784_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24784_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24784_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24784)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo ICollection_1_get_Count_m271855_MethodInfo;
static PropertyInfo ICollection_1_t36896____Count_PropertyInfo = 
{
	&ICollection_1_t36896_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271855_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271856_MethodInfo;
static PropertyInfo ICollection_1_t36896____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36896_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271856_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36896_PropertyInfos[] =
{
	&ICollection_1_t36896____Count_PropertyInfo,
	&ICollection_1_t36896____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271855_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271856_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
static ParameterInfo ICollection_1_t36896_ICollection_1_Add_m271857_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t7994_0_0_0},
};
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271857_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36896_ICollection_1_Add_m271857_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271858_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
static ParameterInfo ICollection_1_t36896_ICollection_1_Contains_m271859_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t7994_0_0_0},
};
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271859_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36896_ICollection_1_Contains_m271859_ParameterInfos/* parameters */
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
extern Il2CppType ReliabilityContractAttributeU5BU5D_t25314_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36896_ICollection_1_CopyTo_m271860_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttributeU5BU5D_t25314_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271860_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36896_ICollection_1_CopyTo_m271860_ParameterInfos/* parameters */
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
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
static ParameterInfo ICollection_1_t36896_ICollection_1_Remove_m271861_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t7994_0_0_0},
};
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271861_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36896_ICollection_1_Remove_m271861_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36896_MethodInfos[] =
{
	&ICollection_1_get_Count_m271855_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271856_MethodInfo,
	&ICollection_1_Add_m271857_MethodInfo,
	&ICollection_1_Clear_m271858_MethodInfo,
	&ICollection_1_Contains_m271859_MethodInfo,
	&ICollection_1_CopyTo_m271860_MethodInfo,
	&ICollection_1_Remove_m271861_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36898_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36896_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36898_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36896_0_0_0;
extern Il2CppType ICollection_1_t36896_1_0_0;
struct ICollection_1_t36896;
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36896_GenericClass;
TypeInfo ICollection_1_t36896_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36896_MethodInfos/* methods */
	, ICollection_1_t36896_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36896_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36896_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36896_0_0_0/* byval_arg */
	, &ICollection_1_t36896_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36896_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36898_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern TypeInfo IEnumerable_1_t36898_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29242_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271862_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36898_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29242_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36898_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271862_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36898_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36898_0_0_0;
extern Il2CppType IEnumerable_1_t36898_1_0_0;
struct IEnumerable_1_t36898;
extern TypeInfo IEnumerable_1_t36898_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36898_GenericClass;
TypeInfo IEnumerable_1_t36898_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36898_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36898_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36898_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36898_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36898_0_0_0/* byval_arg */
	, &IEnumerable_1_t36898_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36898_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36897_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>
extern MethodInfo IList_1_get_Item_m271863_MethodInfo;
extern MethodInfo IList_1_set_Item_m271864_MethodInfo;
static PropertyInfo IList_1_t36897____Item_PropertyInfo = 
{
	&IList_1_t36897_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271863_MethodInfo/* get */
	, &IList_1_set_Item_m271864_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36897_PropertyInfos[] =
{
	&IList_1_t36897____Item_PropertyInfo,
	NULL
};
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
static ParameterInfo IList_1_t36897_IList_1_IndexOf_m271865_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t7994_0_0_0},
};
extern TypeInfo IList_1_t36897_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271865_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36897_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36897_IList_1_IndexOf_m271865_ParameterInfos/* parameters */
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
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
static ParameterInfo IList_1_t36897_IList_1_Insert_m271866_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t7994_0_0_0},
};
extern TypeInfo IList_1_t36897_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271866_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36897_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36897_IList_1_Insert_m271866_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36897_IList_1_RemoveAt_m271867_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36897_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271867_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36897_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36897_IList_1_RemoveAt_m271867_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36897_IList_1_get_Item_m271863_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36897_il2cpp_TypeInfo;
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271863_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36897_il2cpp_TypeInfo/* declaring_type */
	, &ReliabilityContractAttribute_t7994_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36897_IList_1_get_Item_m271863_ParameterInfos/* parameters */
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
extern Il2CppType ReliabilityContractAttribute_t7994_0_0_0;
static ParameterInfo IList_1_t36897_IList_1_set_Item_m271864_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ReliabilityContractAttribute_t7994_0_0_0},
};
extern TypeInfo IList_1_t36897_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.ConstrainedExecution.ReliabilityContractAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271864_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36897_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36897_IList_1_set_Item_m271864_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36897_MethodInfos[] =
{
	&IList_1_IndexOf_m271865_MethodInfo,
	&IList_1_Insert_m271866_MethodInfo,
	&IList_1_RemoveAt_m271867_MethodInfo,
	&IList_1_get_Item_m271863_MethodInfo,
	&IList_1_set_Item_m271864_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36896_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36898_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36897_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36896_il2cpp_TypeInfo,
	&IEnumerable_1_t36898_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36897_0_0_0;
extern Il2CppType IList_1_t36897_1_0_0;
struct IList_1_t36897;
extern TypeInfo IList_1_t36897_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36897_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36897_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36897_MethodInfos/* methods */
	, IList_1_t36897_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36897_il2cpp_TypeInfo/* element_class */
	, IList_1_t36897_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36897_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36897_0_0_0/* byval_arg */
	, &IList_1_t36897_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36897_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29243_il2cpp_TypeInfo;

// System.Runtime.InteropServices.CallingConvention
#include "mscorlib_System_Runtime_InteropServices_CallingConvention.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo IEnumerator_1_get_Current_m271868_MethodInfo;
static PropertyInfo IEnumerator_1_t29243____Current_PropertyInfo = 
{
	&IEnumerator_1_t29243_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271868_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29243_PropertyInfos[] =
{
	&IEnumerator_1_t29243____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29243_il2cpp_TypeInfo;
extern Il2CppType CallingConvention_t7996_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t7996 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271868_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29243_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t7996_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t7996/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29243_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271868_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29243_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29243_0_0_0;
extern Il2CppType IEnumerator_1_t29243_1_0_0;
struct IEnumerator_1_t29243;
extern TypeInfo IEnumerator_1_t29243_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29243_GenericClass;
TypeInfo IEnumerator_1_t29243_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29243_MethodInfos/* methods */
	, IEnumerator_1_t29243_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29243_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29243_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29243_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29243_0_0_0/* byval_arg */
	, &IEnumerator_1_t29243_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29243_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2992.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2992MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern TypeInfo CallingConvention_t7996_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179855_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCallingConvention_t7996_m223038_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CallingConvention>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CallingConvention>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCallingConvention_t7996_m223038 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCallingConvention_t7996_m223038_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179850_MethodInfo;
 void InternalEnumerator_1__ctor_m179850 (InternalEnumerator_1_t24785 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179851_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179851 (InternalEnumerator_1_t24785 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852 (InternalEnumerator_1_t24785 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179855(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179855_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CallingConvention_t7996_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179853_MethodInfo;
 void InternalEnumerator_1_Dispose_m179853 (InternalEnumerator_1_t24785 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179854_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179854 (InternalEnumerator_1_t24785 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179855_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179855 (InternalEnumerator_1_t24785 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCallingConvention_t7996_m223038(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCallingConvention_t7996_m223038_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24785____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24785, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24785____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24785, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24785_FieldInfos[] =
{
	&InternalEnumerator_1_t24785____array_FieldInfo,
	&InternalEnumerator_1_t24785____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24785____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24785_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179855_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24785____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24785_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179855_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24785_PropertyInfos[] =
{
	&InternalEnumerator_1_t24785____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24785____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24785_InternalEnumerator_1__ctor_m179850_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179850_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179850/* method */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24785_InternalEnumerator_1__ctor_m179850_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179851_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179851/* method */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852/* method */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179853_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179853/* method */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179854_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179854/* method */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern Il2CppType CallingConvention_t7996_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t7996 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CallingConvention>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179855_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179855/* method */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t7996_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t7996/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24785_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179850_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179851_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852_MethodInfo,
	&InternalEnumerator_1_Dispose_m179853_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179854_MethodInfo,
	&InternalEnumerator_1_get_Current_m179855_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179854_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179851_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179853_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179855_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24785_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179852_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179854_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179851_MethodInfo,
	&InternalEnumerator_1_Dispose_m179853_MethodInfo,
	&InternalEnumerator_1_get_Current_m179855_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29243_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24785_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29243_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29243_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24785_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29243_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24785_0_0_0;
extern Il2CppType InternalEnumerator_1_t24785_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24785_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24785_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24785_MethodInfos/* methods */
	, InternalEnumerator_1_t24785_PropertyInfos/* properties */
	, InternalEnumerator_1_t24785_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24785_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24785_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24785_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24785_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24785_1_0_0/* this_arg */
	, InternalEnumerator_1_t24785_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24785_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24785)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo ICollection_1_get_Count_m271869_MethodInfo;
static PropertyInfo ICollection_1_t36899____Count_PropertyInfo = 
{
	&ICollection_1_t36899_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271869_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271870_MethodInfo;
static PropertyInfo ICollection_1_t36899____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36899_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271870_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36899_PropertyInfos[] =
{
	&ICollection_1_t36899____Count_PropertyInfo,
	&ICollection_1_t36899____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_Count()
MethodInfo ICollection_1_get_Count_m271869_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271870_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CallingConvention_t7996_0_0_0;
static ParameterInfo ICollection_1_t36899_ICollection_1_Add_m271871_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t7996_0_0_0},
};
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Add(T)
MethodInfo ICollection_1_Add_m271871_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36899_ICollection_1_Add_m271871_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Clear()
MethodInfo ICollection_1_Clear_m271872_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CallingConvention_t7996_0_0_0;
static ParameterInfo ICollection_1_t36899_ICollection_1_Contains_m271873_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t7996_0_0_0},
};
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Contains(T)
MethodInfo ICollection_1_Contains_m271873_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36899_ICollection_1_Contains_m271873_ParameterInfos/* parameters */
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
extern Il2CppType CallingConventionU5BU5D_t25315_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36899_ICollection_1_CopyTo_m271874_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CallingConventionU5BU5D_t25315_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271874_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36899_ICollection_1_CopyTo_m271874_ParameterInfos/* parameters */
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
extern Il2CppType CallingConvention_t7996_0_0_0;
static ParameterInfo ICollection_1_t36899_ICollection_1_Remove_m271875_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t7996_0_0_0},
};
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CallingConvention>::Remove(T)
MethodInfo ICollection_1_Remove_m271875_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36899_ICollection_1_Remove_m271875_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36899_MethodInfos[] =
{
	&ICollection_1_get_Count_m271869_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271870_MethodInfo,
	&ICollection_1_Add_m271871_MethodInfo,
	&ICollection_1_Clear_m271872_MethodInfo,
	&ICollection_1_Contains_m271873_MethodInfo,
	&ICollection_1_CopyTo_m271874_MethodInfo,
	&ICollection_1_Remove_m271875_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36901_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36899_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36901_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36899_0_0_0;
extern Il2CppType ICollection_1_t36899_1_0_0;
struct ICollection_1_t36899;
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36899_GenericClass;
TypeInfo ICollection_1_t36899_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36899_MethodInfos/* methods */
	, ICollection_1_t36899_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36899_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36899_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36899_0_0_0/* byval_arg */
	, &ICollection_1_t36899_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36899_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36901_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>
extern TypeInfo IEnumerable_1_t36901_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29243_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CallingConvention>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271876_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36901_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29243_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36901_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271876_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36901_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36901_0_0_0;
extern Il2CppType IEnumerable_1_t36901_1_0_0;
struct IEnumerable_1_t36901;
extern TypeInfo IEnumerable_1_t36901_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36901_GenericClass;
TypeInfo IEnumerable_1_t36901_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36901_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36901_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36901_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36901_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36901_0_0_0/* byval_arg */
	, &IEnumerable_1_t36901_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36901_GenericClass/* generic_class */
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
extern TypeInfo IList_1_t36900_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>
extern MethodInfo IList_1_get_Item_m271877_MethodInfo;
extern MethodInfo IList_1_set_Item_m271878_MethodInfo;
static PropertyInfo IList_1_t36900____Item_PropertyInfo = 
{
	&IList_1_t36900_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271877_MethodInfo/* get */
	, &IList_1_set_Item_m271878_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36900_PropertyInfos[] =
{
	&IList_1_t36900____Item_PropertyInfo,
	NULL
};
extern Il2CppType CallingConvention_t7996_0_0_0;
static ParameterInfo IList_1_t36900_IList_1_IndexOf_m271879_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t7996_0_0_0},
};
extern TypeInfo IList_1_t36900_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271879_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36900_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36900_IList_1_IndexOf_m271879_ParameterInfos/* parameters */
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
extern Il2CppType CallingConvention_t7996_0_0_0;
static ParameterInfo IList_1_t36900_IList_1_Insert_m271880_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t7996_0_0_0},
};
extern TypeInfo IList_1_t36900_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271880_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36900_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36900_IList_1_Insert_m271880_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36900_IList_1_RemoveAt_m271881_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36900_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271881_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36900_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36900_IList_1_RemoveAt_m271881_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36900_IList_1_get_Item_m271877_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36900_il2cpp_TypeInfo;
extern Il2CppType CallingConvention_t7996_0_0_0;
extern void* RuntimeInvoker_CallingConvention_t7996_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271877_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36900_il2cpp_TypeInfo/* declaring_type */
	, &CallingConvention_t7996_0_0_0/* return_type */
	, RuntimeInvoker_CallingConvention_t7996_Int32_t73/* invoker_method */
	, IList_1_t36900_IList_1_get_Item_m271877_ParameterInfos/* parameters */
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
extern Il2CppType CallingConvention_t7996_0_0_0;
static ParameterInfo IList_1_t36900_IList_1_set_Item_m271878_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CallingConvention_t7996_0_0_0},
};
extern TypeInfo IList_1_t36900_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CallingConvention>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271878_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36900_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36900_IList_1_set_Item_m271878_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36900_MethodInfos[] =
{
	&IList_1_IndexOf_m271879_MethodInfo,
	&IList_1_Insert_m271880_MethodInfo,
	&IList_1_RemoveAt_m271881_MethodInfo,
	&IList_1_get_Item_m271877_MethodInfo,
	&IList_1_set_Item_m271878_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36899_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36901_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36900_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36899_il2cpp_TypeInfo,
	&IEnumerable_1_t36901_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36900_0_0_0;
extern Il2CppType IList_1_t36900_1_0_0;
struct IList_1_t36900;
extern TypeInfo IList_1_t36900_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36900_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36900_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36900_MethodInfos/* methods */
	, IList_1_t36900_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36900_il2cpp_TypeInfo/* element_class */
	, IList_1_t36900_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36900_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36900_0_0_0/* byval_arg */
	, &IList_1_t36900_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36900_GenericClass/* generic_class */
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
extern TypeInfo IEnumerator_1_t29244_il2cpp_TypeInfo;

// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo IEnumerator_1_get_Current_m271882_MethodInfo;
static PropertyInfo IEnumerator_1_t29244____Current_PropertyInfo = 
{
	&IEnumerator_1_t29244_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271882_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29244_PropertyInfos[] =
{
	&IEnumerator_1_t29244____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29244_il2cpp_TypeInfo;
extern Il2CppType CharSet_t7997_0_0_0;
extern void* RuntimeInvoker_CharSet_t7997 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271882_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29244_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t7997_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t7997/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29244_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271882_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29244_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29244_0_0_0;
extern Il2CppType IEnumerator_1_t29244_1_0_0;
struct IEnumerator_1_t29244;
extern TypeInfo IEnumerator_1_t29244_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29244_GenericClass;
TypeInfo IEnumerator_1_t29244_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29244_MethodInfos/* methods */
	, IEnumerator_1_t29244_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29244_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29244_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29244_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29244_0_0_0/* byval_arg */
	, &IEnumerator_1_t29244_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29244_GenericClass/* generic_class */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2993.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2993MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern TypeInfo CharSet_t7997_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179861_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisCharSet_t7997_m223049_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CharSet>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.CharSet>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisCharSet_t7997_m223049 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisCharSet_t7997_m223049_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179856_MethodInfo;
 void InternalEnumerator_1__ctor_m179856 (InternalEnumerator_1_t24786 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179857_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179857 (InternalEnumerator_1_t24786 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858 (InternalEnumerator_1_t24786 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179861(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179861_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&CharSet_t7997_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179859_MethodInfo;
 void InternalEnumerator_1_Dispose_m179859 (InternalEnumerator_1_t24786 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179860_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179860 (InternalEnumerator_1_t24786 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179861_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179861 (InternalEnumerator_1_t24786 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisCharSet_t7997_m223049(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisCharSet_t7997_m223049_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24786____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24786, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24786____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24786, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24786_FieldInfos[] =
{
	&InternalEnumerator_1_t24786____array_FieldInfo,
	&InternalEnumerator_1_t24786____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24786____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24786_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179861_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24786____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24786_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179861_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24786_PropertyInfos[] =
{
	&InternalEnumerator_1_t24786____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24786____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24786_InternalEnumerator_1__ctor_m179856_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179856_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179856/* method */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24786_InternalEnumerator_1__ctor_m179856_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179857_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179857/* method */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858/* method */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179859_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179859/* method */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179860_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179860/* method */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern Il2CppType CharSet_t7997_0_0_0;
extern void* RuntimeInvoker_CharSet_t7997 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.CharSet>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179861_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179861/* method */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t7997_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t7997/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24786_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179856_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179857_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858_MethodInfo,
	&InternalEnumerator_1_Dispose_m179859_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179860_MethodInfo,
	&InternalEnumerator_1_get_Current_m179861_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179860_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179857_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179859_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179861_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24786_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179858_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179860_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179857_MethodInfo,
	&InternalEnumerator_1_Dispose_m179859_MethodInfo,
	&InternalEnumerator_1_get_Current_m179861_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29244_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24786_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29244_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29244_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24786_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29244_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24786_0_0_0;
extern Il2CppType InternalEnumerator_1_t24786_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24786_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24786_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24786_MethodInfos/* methods */
	, InternalEnumerator_1_t24786_PropertyInfos/* properties */
	, InternalEnumerator_1_t24786_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24786_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24786_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24786_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24786_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24786_1_0_0/* this_arg */
	, InternalEnumerator_1_t24786_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24786_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24786)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo ICollection_1_get_Count_m271883_MethodInfo;
static PropertyInfo ICollection_1_t36902____Count_PropertyInfo = 
{
	&ICollection_1_t36902_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271883_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271884_MethodInfo;
static PropertyInfo ICollection_1_t36902____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36902_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271884_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36902_PropertyInfos[] =
{
	&ICollection_1_t36902____Count_PropertyInfo,
	&ICollection_1_t36902____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_Count()
MethodInfo ICollection_1_get_Count_m271883_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271884_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CharSet_t7997_0_0_0;
static ParameterInfo ICollection_1_t36902_ICollection_1_Add_m271885_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t7997_0_0_0},
};
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Add(T)
MethodInfo ICollection_1_Add_m271885_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36902_ICollection_1_Add_m271885_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Clear()
MethodInfo ICollection_1_Clear_m271886_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType CharSet_t7997_0_0_0;
static ParameterInfo ICollection_1_t36902_ICollection_1_Contains_m271887_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t7997_0_0_0},
};
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Contains(T)
MethodInfo ICollection_1_Contains_m271887_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36902_ICollection_1_Contains_m271887_ParameterInfos/* parameters */
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
extern Il2CppType CharSetU5BU5D_t25316_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36902_ICollection_1_CopyTo_m271888_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &CharSetU5BU5D_t25316_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271888_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36902_ICollection_1_CopyTo_m271888_ParameterInfos/* parameters */
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
extern Il2CppType CharSet_t7997_0_0_0;
static ParameterInfo ICollection_1_t36902_ICollection_1_Remove_m271889_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t7997_0_0_0},
};
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.CharSet>::Remove(T)
MethodInfo ICollection_1_Remove_m271889_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36902_ICollection_1_Remove_m271889_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36902_MethodInfos[] =
{
	&ICollection_1_get_Count_m271883_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271884_MethodInfo,
	&ICollection_1_Add_m271885_MethodInfo,
	&ICollection_1_Clear_m271886_MethodInfo,
	&ICollection_1_Contains_m271887_MethodInfo,
	&ICollection_1_CopyTo_m271888_MethodInfo,
	&ICollection_1_Remove_m271889_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36904_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36902_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36904_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36902_0_0_0;
extern Il2CppType ICollection_1_t36902_1_0_0;
struct ICollection_1_t36902;
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36902_GenericClass;
TypeInfo ICollection_1_t36902_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36902_MethodInfos/* methods */
	, ICollection_1_t36902_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36902_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36902_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36902_0_0_0/* byval_arg */
	, &ICollection_1_t36902_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36902_GenericClass/* generic_class */
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
extern TypeInfo IEnumerable_1_t36904_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>
extern TypeInfo IEnumerable_1_t36904_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29244_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.CharSet>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271890_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36904_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29244_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36904_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271890_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36904_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36904_0_0_0;
extern Il2CppType IEnumerable_1_t36904_1_0_0;
struct IEnumerable_1_t36904;
extern TypeInfo IEnumerable_1_t36904_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36904_GenericClass;
TypeInfo IEnumerable_1_t36904_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36904_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36904_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36904_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36904_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36904_0_0_0/* byval_arg */
	, &IEnumerable_1_t36904_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36904_GenericClass/* generic_class */
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
