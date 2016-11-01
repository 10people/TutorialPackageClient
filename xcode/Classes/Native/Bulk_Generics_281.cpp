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
extern TypeInfo IList_1_t36903_il2cpp_TypeInfo;

// System.Runtime.InteropServices.CharSet
#include "mscorlib_System_Runtime_InteropServices_CharSet.h"
// System.Int32
#include "mscorlib_System_Int32.h"
// System.Void
#include "mscorlib_System_Void.h"

// System.Array
#include "mscorlib_System_Array.h"

// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>
extern MethodInfo IList_1_get_Item_m271891_MethodInfo;
extern MethodInfo IList_1_set_Item_m271892_MethodInfo;
static PropertyInfo IList_1_t36903____Item_PropertyInfo = 
{
	&IList_1_t36903_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271891_MethodInfo/* get */
	, &IList_1_set_Item_m271892_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36903_PropertyInfos[] =
{
	&IList_1_t36903____Item_PropertyInfo,
	NULL
};
extern Il2CppType CharSet_t7997_0_0_0;
static ParameterInfo IList_1_t36903_IList_1_IndexOf_m271893_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &CharSet_t7997_0_0_0},
};
extern TypeInfo IList_1_t36903_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271893_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36903_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36903_IList_1_IndexOf_m271893_ParameterInfos/* parameters */
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
extern Il2CppType CharSet_t7997_0_0_0;
static ParameterInfo IList_1_t36903_IList_1_Insert_m271894_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &CharSet_t7997_0_0_0},
};
extern TypeInfo IList_1_t36903_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271894_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36903_IList_1_Insert_m271894_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36903_IList_1_RemoveAt_m271895_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36903_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271895_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36903_IList_1_RemoveAt_m271895_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36903_IList_1_get_Item_m271891_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36903_il2cpp_TypeInfo;
extern Il2CppType CharSet_t7997_0_0_0;
extern void* RuntimeInvoker_CharSet_t7997_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271891_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36903_il2cpp_TypeInfo/* declaring_type */
	, &CharSet_t7997_0_0_0/* return_type */
	, RuntimeInvoker_CharSet_t7997_Int32_t73/* invoker_method */
	, IList_1_t36903_IList_1_get_Item_m271891_ParameterInfos/* parameters */
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
extern Il2CppType CharSet_t7997_0_0_0;
static ParameterInfo IList_1_t36903_IList_1_set_Item_m271892_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &CharSet_t7997_0_0_0},
};
extern TypeInfo IList_1_t36903_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.CharSet>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271892_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36903_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36903_IList_1_set_Item_m271892_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36903_MethodInfos[] =
{
	&IList_1_IndexOf_m271893_MethodInfo,
	&IList_1_Insert_m271894_MethodInfo,
	&IList_1_RemoveAt_m271895_MethodInfo,
	&IList_1_get_Item_m271891_MethodInfo,
	&IList_1_set_Item_m271892_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36902_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36904_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36903_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36902_il2cpp_TypeInfo,
	&IEnumerable_1_t36904_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36903_0_0_0;
extern Il2CppType IList_1_t36903_1_0_0;
struct IList_1_t36903;
extern TypeInfo IList_1_t36903_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36903_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36903_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36903_MethodInfos/* methods */
	, IList_1_t36903_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36903_il2cpp_TypeInfo/* element_class */
	, IList_1_t36903_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36903_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36903_0_0_0/* byval_arg */
	, &IList_1_t36903_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36903_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29245_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ClassInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceAttrib.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271896_MethodInfo;
static PropertyInfo IEnumerator_1_t29245____Current_PropertyInfo = 
{
	&IEnumerator_1_t29245_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271896_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29245_PropertyInfos[] =
{
	&IEnumerator_1_t29245____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29245_il2cpp_TypeInfo;
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271896_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29245_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t7998_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29245_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271896_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29245_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29245_0_0_0;
extern Il2CppType IEnumerator_1_t29245_1_0_0;
struct IEnumerator_1_t29245;
extern TypeInfo IEnumerator_1_t29245_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29245_GenericClass;
TypeInfo IEnumerator_1_t29245_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29245_MethodInfos/* methods */
	, IEnumerator_1_t29245_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29245_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29245_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29245_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29245_0_0_0/* byval_arg */
	, &IEnumerator_1_t29245_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29245_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2994.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2994MethodDeclarations.h"

// System.Object
#include "mscorlib_System_Object.h"
// System.String
#include "mscorlib_System_String.h"
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationException.h"
// System.Boolean
#include "mscorlib_System_Boolean.h"
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern TypeInfo ClassInterfaceAttribute_t7998_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
// System.InvalidOperationException
#include "mscorlib_System_InvalidOperationExceptionMethodDeclarations.h"
// System.Array
#include "mscorlib_System_ArrayMethodDeclarations.h"
extern MethodInfo InternalEnumerator_1_get_Current_m179867_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceAttribute_t7998_m223060_MethodInfo;
struct Array_t;
// System.ArgumentOutOfRangeException
#include "mscorlib_System_ArgumentOutOfRangeException.h"
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Object>(System.Int32)
 Object_t * Array_InternalArray__get_Item_TisObject_t_m180549_gshared (Array_t * __this, int32_t p0, MethodInfo* method);
#define Array_InternalArray__get_Item_TisObject_t_m180549(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisClassInterfaceAttribute_t7998_m223060(__this, p0, method) (ClassInterfaceAttribute_t7998 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceAttribute_t7998_m223060_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24787____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24787, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24787____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24787, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24787_FieldInfos[] =
{
	&InternalEnumerator_1_t24787____array_FieldInfo,
	&InternalEnumerator_1_t24787____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179864_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24787____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24787_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179864_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179867_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24787____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24787_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179867_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24787_PropertyInfos[] =
{
	&InternalEnumerator_1_t24787____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24787____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24787_InternalEnumerator_1__ctor_m179862_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179862_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24787_InternalEnumerator_1__ctor_m179862_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179863_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179864_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179865_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179866_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179867_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t7998_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24787_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179862_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179863_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179864_MethodInfo,
	&InternalEnumerator_1_Dispose_m179865_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179866_MethodInfo,
	&InternalEnumerator_1_get_Current_m179867_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179864_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179866_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179863_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179865_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179867_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24787_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179864_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179866_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179863_MethodInfo,
	&InternalEnumerator_1_Dispose_m179865_MethodInfo,
	&InternalEnumerator_1_get_Current_m179867_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29245_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24787_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29245_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29245_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24787_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29245_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179867_MethodInfo;
extern TypeInfo ClassInterfaceAttribute_t7998_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceAttribute_t7998_m223060_MethodInfo;
static void* InternalEnumerator_1_t24787_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179867_MethodInfo,
	&ClassInterfaceAttribute_t7998_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisClassInterfaceAttribute_t7998_m223060_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24787_0_0_0;
extern Il2CppType InternalEnumerator_1_t24787_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24787_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24787_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24787_MethodInfos/* methods */
	, InternalEnumerator_1_t24787_PropertyInfos/* properties */
	, InternalEnumerator_1_t24787_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24787_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24787_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24787_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24787_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24787_1_0_0/* this_arg */
	, InternalEnumerator_1_t24787_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24787_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24787_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24787)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;

#include "mscorlib_ArrayTypes.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo ICollection_1_get_Count_m271897_MethodInfo;
static PropertyInfo ICollection_1_t36905____Count_PropertyInfo = 
{
	&ICollection_1_t36905_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271898_MethodInfo;
static PropertyInfo ICollection_1_t36905____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36905_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271898_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36905_PropertyInfos[] =
{
	&ICollection_1_t36905____Count_PropertyInfo,
	&ICollection_1_t36905____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271897_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271898_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
static ParameterInfo ICollection_1_t36905_ICollection_1_Add_m271899_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t7998_0_0_0},
};
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271899_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36905_ICollection_1_Add_m271899_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271900_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
static ParameterInfo ICollection_1_t36905_ICollection_1_Contains_m271901_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t7998_0_0_0},
};
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271901_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36905_ICollection_1_Contains_m271901_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceAttributeU5BU5D_t25317_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36905_ICollection_1_CopyTo_m271902_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttributeU5BU5D_t25317_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271902_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36905_ICollection_1_CopyTo_m271902_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
static ParameterInfo ICollection_1_t36905_ICollection_1_Remove_m271903_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t7998_0_0_0},
};
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271903_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36905_ICollection_1_Remove_m271903_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36905_MethodInfos[] =
{
	&ICollection_1_get_Count_m271897_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271898_MethodInfo,
	&ICollection_1_Add_m271899_MethodInfo,
	&ICollection_1_Clear_m271900_MethodInfo,
	&ICollection_1_Contains_m271901_MethodInfo,
	&ICollection_1_CopyTo_m271902_MethodInfo,
	&ICollection_1_Remove_m271903_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36907_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36905_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36907_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36905_0_0_0;
extern Il2CppType ICollection_1_t36905_1_0_0;
struct ICollection_1_t36905;
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36905_GenericClass;
TypeInfo ICollection_1_t36905_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36905_MethodInfos/* methods */
	, ICollection_1_t36905_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36905_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36905_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36905_0_0_0/* byval_arg */
	, &ICollection_1_t36905_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36905_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36907_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern TypeInfo IEnumerable_1_t36907_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29245_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271904_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36907_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29245_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36907_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271904_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36907_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36907_0_0_0;
extern Il2CppType IEnumerable_1_t36907_1_0_0;
struct IEnumerable_1_t36907;
extern TypeInfo IEnumerable_1_t36907_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36907_GenericClass;
TypeInfo IEnumerable_1_t36907_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36907_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36907_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36907_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36907_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36907_0_0_0/* byval_arg */
	, &IEnumerable_1_t36907_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36907_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36906_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>
extern MethodInfo IList_1_get_Item_m271905_MethodInfo;
extern MethodInfo IList_1_set_Item_m271906_MethodInfo;
static PropertyInfo IList_1_t36906____Item_PropertyInfo = 
{
	&IList_1_t36906_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271905_MethodInfo/* get */
	, &IList_1_set_Item_m271906_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36906_PropertyInfos[] =
{
	&IList_1_t36906____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
static ParameterInfo IList_1_t36906_IList_1_IndexOf_m271907_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t7998_0_0_0},
};
extern TypeInfo IList_1_t36906_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271907_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36906_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36906_IList_1_IndexOf_m271907_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
static ParameterInfo IList_1_t36906_IList_1_Insert_m271908_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t7998_0_0_0},
};
extern TypeInfo IList_1_t36906_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271908_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36906_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36906_IList_1_Insert_m271908_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36906_IList_1_RemoveAt_m271909_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36906_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271909_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36906_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36906_IList_1_RemoveAt_m271909_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36906_IList_1_get_Item_m271905_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36906_il2cpp_TypeInfo;
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271905_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36906_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceAttribute_t7998_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36906_IList_1_get_Item_m271905_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceAttribute_t7998_0_0_0;
static ParameterInfo IList_1_t36906_IList_1_set_Item_m271906_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceAttribute_t7998_0_0_0},
};
extern TypeInfo IList_1_t36906_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271906_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36906_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36906_IList_1_set_Item_m271906_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36906_MethodInfos[] =
{
	&IList_1_IndexOf_m271907_MethodInfo,
	&IList_1_Insert_m271908_MethodInfo,
	&IList_1_RemoveAt_m271909_MethodInfo,
	&IList_1_get_Item_m271905_MethodInfo,
	&IList_1_set_Item_m271906_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36905_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36907_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36906_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36905_il2cpp_TypeInfo,
	&IEnumerable_1_t36907_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36906_0_0_0;
extern Il2CppType IList_1_t36906_1_0_0;
struct IList_1_t36906;
extern TypeInfo IList_1_t36906_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36906_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36906_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36906_MethodInfos/* methods */
	, IList_1_t36906_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36906_il2cpp_TypeInfo/* element_class */
	, IList_1_t36906_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36906_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36906_0_0_0/* byval_arg */
	, &IList_1_t36906_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36906_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29246_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ClassInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ClassInterfaceType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo IEnumerator_1_get_Current_m271910_MethodInfo;
static PropertyInfo IEnumerator_1_t29246____Current_PropertyInfo = 
{
	&IEnumerator_1_t29246_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271910_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29246_PropertyInfos[] =
{
	&IEnumerator_1_t29246____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29246_il2cpp_TypeInfo;
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t7999 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271910_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29246_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t7999_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t7999/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29246_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271910_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29246_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29246_0_0_0;
extern Il2CppType IEnumerator_1_t29246_1_0_0;
struct IEnumerator_1_t29246;
extern TypeInfo IEnumerator_1_t29246_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29246_GenericClass;
TypeInfo IEnumerator_1_t29246_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29246_MethodInfos/* methods */
	, IEnumerator_1_t29246_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29246_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29246_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29246_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29246_0_0_0/* byval_arg */
	, &IEnumerator_1_t29246_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29246_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2995.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2995MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern TypeInfo ClassInterfaceType_t7999_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179873_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceType_t7999_m223071_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ClassInterfaceType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisClassInterfaceType_t7999_m223071 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisClassInterfaceType_t7999_m223071_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179868_MethodInfo;
 void InternalEnumerator_1__ctor_m179868 (InternalEnumerator_1_t24788 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179869_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179869 (InternalEnumerator_1_t24788 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870 (InternalEnumerator_1_t24788 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179873(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179873_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ClassInterfaceType_t7999_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179871_MethodInfo;
 void InternalEnumerator_1_Dispose_m179871 (InternalEnumerator_1_t24788 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179872_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179872 (InternalEnumerator_1_t24788 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179873_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179873 (InternalEnumerator_1_t24788 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisClassInterfaceType_t7999_m223071(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisClassInterfaceType_t7999_m223071_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24788____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24788, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24788____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24788, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24788_FieldInfos[] =
{
	&InternalEnumerator_1_t24788____array_FieldInfo,
	&InternalEnumerator_1_t24788____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24788____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24788_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179873_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24788____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24788_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179873_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24788_PropertyInfos[] =
{
	&InternalEnumerator_1_t24788____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24788____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24788_InternalEnumerator_1__ctor_m179868_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179868_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179868/* method */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24788_InternalEnumerator_1__ctor_m179868_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179869_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179869/* method */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870/* method */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179871_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179871/* method */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179872_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179872/* method */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t7999 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179873_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179873/* method */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t7999_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t7999/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24788_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179868_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179869_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870_MethodInfo,
	&InternalEnumerator_1_Dispose_m179871_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179872_MethodInfo,
	&InternalEnumerator_1_get_Current_m179873_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179872_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179869_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179871_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179873_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24788_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179870_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179872_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179869_MethodInfo,
	&InternalEnumerator_1_Dispose_m179871_MethodInfo,
	&InternalEnumerator_1_get_Current_m179873_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29246_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24788_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29246_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29246_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24788_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29246_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24788_0_0_0;
extern Il2CppType InternalEnumerator_1_t24788_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24788_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24788_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24788_MethodInfos/* methods */
	, InternalEnumerator_1_t24788_PropertyInfos/* properties */
	, InternalEnumerator_1_t24788_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24788_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24788_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24788_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24788_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24788_1_0_0/* this_arg */
	, InternalEnumerator_1_t24788_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24788_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24788)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo ICollection_1_get_Count_m271911_MethodInfo;
static PropertyInfo ICollection_1_t36908____Count_PropertyInfo = 
{
	&ICollection_1_t36908_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271911_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271912_MethodInfo;
static PropertyInfo ICollection_1_t36908____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36908_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271912_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36908_PropertyInfos[] =
{
	&ICollection_1_t36908____Count_PropertyInfo,
	&ICollection_1_t36908____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Count()
MethodInfo ICollection_1_get_Count_m271911_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271912_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
static ParameterInfo ICollection_1_t36908_ICollection_1_Add_m271913_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t7999_0_0_0},
};
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Add(T)
MethodInfo ICollection_1_Add_m271913_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36908_ICollection_1_Add_m271913_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Clear()
MethodInfo ICollection_1_Clear_m271914_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
static ParameterInfo ICollection_1_t36908_ICollection_1_Contains_m271915_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t7999_0_0_0},
};
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Contains(T)
MethodInfo ICollection_1_Contains_m271915_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36908_ICollection_1_Contains_m271915_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceTypeU5BU5D_t25318_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36908_ICollection_1_CopyTo_m271916_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceTypeU5BU5D_t25318_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271916_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36908_ICollection_1_CopyTo_m271916_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
static ParameterInfo ICollection_1_t36908_ICollection_1_Remove_m271917_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t7999_0_0_0},
};
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ClassInterfaceType>::Remove(T)
MethodInfo ICollection_1_Remove_m271917_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36908_ICollection_1_Remove_m271917_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36908_MethodInfos[] =
{
	&ICollection_1_get_Count_m271911_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271912_MethodInfo,
	&ICollection_1_Add_m271913_MethodInfo,
	&ICollection_1_Clear_m271914_MethodInfo,
	&ICollection_1_Contains_m271915_MethodInfo,
	&ICollection_1_CopyTo_m271916_MethodInfo,
	&ICollection_1_Remove_m271917_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36910_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36908_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36910_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36908_0_0_0;
extern Il2CppType ICollection_1_t36908_1_0_0;
struct ICollection_1_t36908;
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36908_GenericClass;
TypeInfo ICollection_1_t36908_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36908_MethodInfos/* methods */
	, ICollection_1_t36908_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36908_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36908_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36908_0_0_0/* byval_arg */
	, &ICollection_1_t36908_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36908_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36910_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>
extern TypeInfo IEnumerable_1_t36910_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29246_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ClassInterfaceType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271918_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36910_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29246_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36910_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271918_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36910_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36910_0_0_0;
extern Il2CppType IEnumerable_1_t36910_1_0_0;
struct IEnumerable_1_t36910;
extern TypeInfo IEnumerable_1_t36910_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36910_GenericClass;
TypeInfo IEnumerable_1_t36910_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36910_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36910_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36910_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36910_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36910_0_0_0/* byval_arg */
	, &IEnumerable_1_t36910_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36910_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36909_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>
extern MethodInfo IList_1_get_Item_m271919_MethodInfo;
extern MethodInfo IList_1_set_Item_m271920_MethodInfo;
static PropertyInfo IList_1_t36909____Item_PropertyInfo = 
{
	&IList_1_t36909_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271919_MethodInfo/* get */
	, &IList_1_set_Item_m271920_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36909_PropertyInfos[] =
{
	&IList_1_t36909____Item_PropertyInfo,
	NULL
};
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
static ParameterInfo IList_1_t36909_IList_1_IndexOf_m271921_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t7999_0_0_0},
};
extern TypeInfo IList_1_t36909_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271921_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36909_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36909_IList_1_IndexOf_m271921_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
static ParameterInfo IList_1_t36909_IList_1_Insert_m271922_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t7999_0_0_0},
};
extern TypeInfo IList_1_t36909_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271922_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36909_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36909_IList_1_Insert_m271922_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36909_IList_1_RemoveAt_m271923_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36909_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271923_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36909_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36909_IList_1_RemoveAt_m271923_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36909_IList_1_get_Item_m271919_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36909_il2cpp_TypeInfo;
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
extern void* RuntimeInvoker_ClassInterfaceType_t7999_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271919_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36909_il2cpp_TypeInfo/* declaring_type */
	, &ClassInterfaceType_t7999_0_0_0/* return_type */
	, RuntimeInvoker_ClassInterfaceType_t7999_Int32_t73/* invoker_method */
	, IList_1_t36909_IList_1_get_Item_m271919_ParameterInfos/* parameters */
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
extern Il2CppType ClassInterfaceType_t7999_0_0_0;
static ParameterInfo IList_1_t36909_IList_1_set_Item_m271920_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ClassInterfaceType_t7999_0_0_0},
};
extern TypeInfo IList_1_t36909_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ClassInterfaceType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271920_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36909_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36909_IList_1_set_Item_m271920_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36909_MethodInfos[] =
{
	&IList_1_IndexOf_m271921_MethodInfo,
	&IList_1_Insert_m271922_MethodInfo,
	&IList_1_RemoveAt_m271923_MethodInfo,
	&IList_1_get_Item_m271919_MethodInfo,
	&IList_1_set_Item_m271920_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36908_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36910_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36909_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36908_il2cpp_TypeInfo,
	&IEnumerable_1_t36910_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36909_0_0_0;
extern Il2CppType IList_1_t36909_1_0_0;
struct IList_1_t36909;
extern TypeInfo IList_1_t36909_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36909_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36909_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36909_MethodInfos/* methods */
	, IList_1_t36909_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36909_il2cpp_TypeInfo/* element_class */
	, IList_1_t36909_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36909_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36909_0_0_0/* byval_arg */
	, &IList_1_t36909_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36909_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29247_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComDefaultInterfaceAttribute
#include "mscorlib_System_Runtime_InteropServices_ComDefaultInterfaceA.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271924_MethodInfo;
static PropertyInfo IEnumerator_1_t29247____Current_PropertyInfo = 
{
	&IEnumerator_1_t29247_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271924_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29247_PropertyInfos[] =
{
	&IEnumerator_1_t29247____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29247_il2cpp_TypeInfo;
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271924_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29247_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t8000_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29247_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271924_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29247_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29247_0_0_0;
extern Il2CppType IEnumerator_1_t29247_1_0_0;
struct IEnumerator_1_t29247;
extern TypeInfo IEnumerator_1_t29247_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29247_GenericClass;
TypeInfo IEnumerator_1_t29247_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29247_MethodInfos/* methods */
	, IEnumerator_1_t29247_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29247_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29247_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29247_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29247_0_0_0/* byval_arg */
	, &IEnumerator_1_t29247_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29247_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2996.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2996MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern TypeInfo ComDefaultInterfaceAttribute_t8000_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179879_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t8000_m223082_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t8000_m223082(__this, p0, method) (ComDefaultInterfaceAttribute_t8000 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t8000_m223082_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24789____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24789, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24789____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24789, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24789_FieldInfos[] =
{
	&InternalEnumerator_1_t24789____array_FieldInfo,
	&InternalEnumerator_1_t24789____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179876_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24789____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24789_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179876_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179879_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24789____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24789_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179879_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24789_PropertyInfos[] =
{
	&InternalEnumerator_1_t24789____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24789____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24789_InternalEnumerator_1__ctor_m179874_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179874_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24789_InternalEnumerator_1__ctor_m179874_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179875_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179876_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179877_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179878_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179879_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t8000_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24789_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179874_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179875_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179876_MethodInfo,
	&InternalEnumerator_1_Dispose_m179877_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179878_MethodInfo,
	&InternalEnumerator_1_get_Current_m179879_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179876_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179878_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179875_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179877_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179879_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24789_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179876_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179878_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179875_MethodInfo,
	&InternalEnumerator_1_Dispose_m179877_MethodInfo,
	&InternalEnumerator_1_get_Current_m179879_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29247_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24789_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29247_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29247_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24789_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29247_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179879_MethodInfo;
extern TypeInfo ComDefaultInterfaceAttribute_t8000_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t8000_m223082_MethodInfo;
static void* InternalEnumerator_1_t24789_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179879_MethodInfo,
	&ComDefaultInterfaceAttribute_t8000_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisComDefaultInterfaceAttribute_t8000_m223082_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24789_0_0_0;
extern Il2CppType InternalEnumerator_1_t24789_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24789_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24789_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24789_MethodInfos/* methods */
	, InternalEnumerator_1_t24789_PropertyInfos/* properties */
	, InternalEnumerator_1_t24789_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24789_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24789_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24789_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24789_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24789_1_0_0/* this_arg */
	, InternalEnumerator_1_t24789_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24789_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24789_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24789)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo ICollection_1_get_Count_m271925_MethodInfo;
static PropertyInfo ICollection_1_t36911____Count_PropertyInfo = 
{
	&ICollection_1_t36911_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271925_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271926_MethodInfo;
static PropertyInfo ICollection_1_t36911____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36911_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271926_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36911_PropertyInfos[] =
{
	&ICollection_1_t36911____Count_PropertyInfo,
	&ICollection_1_t36911____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271925_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271926_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
static ParameterInfo ICollection_1_t36911_ICollection_1_Add_m271927_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t8000_0_0_0},
};
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271927_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36911_ICollection_1_Add_m271927_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271928_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
static ParameterInfo ICollection_1_t36911_ICollection_1_Contains_m271929_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t8000_0_0_0},
};
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271929_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36911_ICollection_1_Contains_m271929_ParameterInfos/* parameters */
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
extern Il2CppType ComDefaultInterfaceAttributeU5BU5D_t25319_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36911_ICollection_1_CopyTo_m271930_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttributeU5BU5D_t25319_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271930_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36911_ICollection_1_CopyTo_m271930_ParameterInfos/* parameters */
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
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
static ParameterInfo ICollection_1_t36911_ICollection_1_Remove_m271931_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t8000_0_0_0},
};
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271931_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36911_ICollection_1_Remove_m271931_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36911_MethodInfos[] =
{
	&ICollection_1_get_Count_m271925_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271926_MethodInfo,
	&ICollection_1_Add_m271927_MethodInfo,
	&ICollection_1_Clear_m271928_MethodInfo,
	&ICollection_1_Contains_m271929_MethodInfo,
	&ICollection_1_CopyTo_m271930_MethodInfo,
	&ICollection_1_Remove_m271931_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36913_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36911_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36913_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36911_0_0_0;
extern Il2CppType ICollection_1_t36911_1_0_0;
struct ICollection_1_t36911;
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36911_GenericClass;
TypeInfo ICollection_1_t36911_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36911_MethodInfos/* methods */
	, ICollection_1_t36911_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36911_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36911_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36911_0_0_0/* byval_arg */
	, &ICollection_1_t36911_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36911_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36913_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern TypeInfo IEnumerable_1_t36913_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29247_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271932_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36913_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29247_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36913_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271932_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36913_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36913_0_0_0;
extern Il2CppType IEnumerable_1_t36913_1_0_0;
struct IEnumerable_1_t36913;
extern TypeInfo IEnumerable_1_t36913_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36913_GenericClass;
TypeInfo IEnumerable_1_t36913_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36913_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36913_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36913_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36913_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36913_0_0_0/* byval_arg */
	, &IEnumerable_1_t36913_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36913_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36912_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>
extern MethodInfo IList_1_get_Item_m271933_MethodInfo;
extern MethodInfo IList_1_set_Item_m271934_MethodInfo;
static PropertyInfo IList_1_t36912____Item_PropertyInfo = 
{
	&IList_1_t36912_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271933_MethodInfo/* get */
	, &IList_1_set_Item_m271934_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36912_PropertyInfos[] =
{
	&IList_1_t36912____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
static ParameterInfo IList_1_t36912_IList_1_IndexOf_m271935_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t8000_0_0_0},
};
extern TypeInfo IList_1_t36912_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271935_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36912_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36912_IList_1_IndexOf_m271935_ParameterInfos/* parameters */
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
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
static ParameterInfo IList_1_t36912_IList_1_Insert_m271936_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t8000_0_0_0},
};
extern TypeInfo IList_1_t36912_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271936_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36912_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36912_IList_1_Insert_m271936_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36912_IList_1_RemoveAt_m271937_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36912_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271937_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36912_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36912_IList_1_RemoveAt_m271937_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36912_IList_1_get_Item_m271933_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36912_il2cpp_TypeInfo;
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271933_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36912_il2cpp_TypeInfo/* declaring_type */
	, &ComDefaultInterfaceAttribute_t8000_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36912_IList_1_get_Item_m271933_ParameterInfos/* parameters */
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
extern Il2CppType ComDefaultInterfaceAttribute_t8000_0_0_0;
static ParameterInfo IList_1_t36912_IList_1_set_Item_m271934_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComDefaultInterfaceAttribute_t8000_0_0_0},
};
extern TypeInfo IList_1_t36912_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComDefaultInterfaceAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271934_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36912_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36912_IList_1_set_Item_m271934_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36912_MethodInfos[] =
{
	&IList_1_IndexOf_m271935_MethodInfo,
	&IList_1_Insert_m271936_MethodInfo,
	&IList_1_RemoveAt_m271937_MethodInfo,
	&IList_1_get_Item_m271933_MethodInfo,
	&IList_1_set_Item_m271934_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36911_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36913_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36912_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36911_il2cpp_TypeInfo,
	&IEnumerable_1_t36913_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36912_0_0_0;
extern Il2CppType IList_1_t36912_1_0_0;
struct IList_1_t36912;
extern TypeInfo IList_1_t36912_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36912_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36912_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36912_MethodInfos/* methods */
	, IList_1_t36912_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36912_il2cpp_TypeInfo/* element_class */
	, IList_1_t36912_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36912_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36912_0_0_0/* byval_arg */
	, &IList_1_t36912_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36912_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29248_il2cpp_TypeInfo;

// System.Runtime.InteropServices.ComInterfaceType
#include "mscorlib_System_Runtime_InteropServices_ComInterfaceType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo IEnumerator_1_get_Current_m271938_MethodInfo;
static PropertyInfo IEnumerator_1_t29248____Current_PropertyInfo = 
{
	&IEnumerator_1_t29248_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271938_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29248_PropertyInfos[] =
{
	&IEnumerator_1_t29248____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29248_il2cpp_TypeInfo;
extern Il2CppType ComInterfaceType_t8001_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t8001 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271938_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29248_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t8001_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t8001/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29248_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271938_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29248_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29248_0_0_0;
extern Il2CppType IEnumerator_1_t29248_1_0_0;
struct IEnumerator_1_t29248;
extern TypeInfo IEnumerator_1_t29248_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29248_GenericClass;
TypeInfo IEnumerator_1_t29248_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29248_MethodInfos/* methods */
	, IEnumerator_1_t29248_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29248_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29248_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29248_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29248_0_0_0/* byval_arg */
	, &IEnumerator_1_t29248_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29248_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2997.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2997MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern TypeInfo ComInterfaceType_t8001_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179885_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisComInterfaceType_t8001_m223093_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComInterfaceType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.ComInterfaceType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisComInterfaceType_t8001_m223093 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisComInterfaceType_t8001_m223093_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179880_MethodInfo;
 void InternalEnumerator_1__ctor_m179880 (InternalEnumerator_1_t24790 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179881_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179881 (InternalEnumerator_1_t24790 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882 (InternalEnumerator_1_t24790 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179885(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179885_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ComInterfaceType_t8001_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179883_MethodInfo;
 void InternalEnumerator_1_Dispose_m179883 (InternalEnumerator_1_t24790 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179884_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179884 (InternalEnumerator_1_t24790 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179885_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179885 (InternalEnumerator_1_t24790 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisComInterfaceType_t8001_m223093(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisComInterfaceType_t8001_m223093_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24790____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24790, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24790____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24790, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24790_FieldInfos[] =
{
	&InternalEnumerator_1_t24790____array_FieldInfo,
	&InternalEnumerator_1_t24790____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24790____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24790_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179885_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24790____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24790_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179885_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24790_PropertyInfos[] =
{
	&InternalEnumerator_1_t24790____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24790____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24790_InternalEnumerator_1__ctor_m179880_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179880_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179880/* method */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24790_InternalEnumerator_1__ctor_m179880_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179881_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179881/* method */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882/* method */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179883_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179883/* method */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179884_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179884/* method */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern Il2CppType ComInterfaceType_t8001_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t8001 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.ComInterfaceType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179885_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179885/* method */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t8001_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t8001/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24790_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179880_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179881_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882_MethodInfo,
	&InternalEnumerator_1_Dispose_m179883_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179884_MethodInfo,
	&InternalEnumerator_1_get_Current_m179885_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179884_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179881_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179883_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179885_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24790_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179882_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179884_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179881_MethodInfo,
	&InternalEnumerator_1_Dispose_m179883_MethodInfo,
	&InternalEnumerator_1_get_Current_m179885_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29248_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24790_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29248_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29248_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24790_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29248_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24790_0_0_0;
extern Il2CppType InternalEnumerator_1_t24790_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24790_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24790_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24790_MethodInfos/* methods */
	, InternalEnumerator_1_t24790_PropertyInfos/* properties */
	, InternalEnumerator_1_t24790_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24790_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24790_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24790_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24790_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24790_1_0_0/* this_arg */
	, InternalEnumerator_1_t24790_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24790_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24790)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo ICollection_1_get_Count_m271939_MethodInfo;
static PropertyInfo ICollection_1_t36914____Count_PropertyInfo = 
{
	&ICollection_1_t36914_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271939_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271940_MethodInfo;
static PropertyInfo ICollection_1_t36914____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36914_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271940_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36914_PropertyInfos[] =
{
	&ICollection_1_t36914____Count_PropertyInfo,
	&ICollection_1_t36914____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_Count()
MethodInfo ICollection_1_get_Count_m271939_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271940_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ComInterfaceType_t8001_0_0_0;
static ParameterInfo ICollection_1_t36914_ICollection_1_Add_m271941_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t8001_0_0_0},
};
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Add(T)
MethodInfo ICollection_1_Add_m271941_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36914_ICollection_1_Add_m271941_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Clear()
MethodInfo ICollection_1_Clear_m271942_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ComInterfaceType_t8001_0_0_0;
static ParameterInfo ICollection_1_t36914_ICollection_1_Contains_m271943_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t8001_0_0_0},
};
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Contains(T)
MethodInfo ICollection_1_Contains_m271943_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36914_ICollection_1_Contains_m271943_ParameterInfos/* parameters */
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
extern Il2CppType ComInterfaceTypeU5BU5D_t25320_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36914_ICollection_1_CopyTo_m271944_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceTypeU5BU5D_t25320_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271944_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36914_ICollection_1_CopyTo_m271944_ParameterInfos/* parameters */
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
extern Il2CppType ComInterfaceType_t8001_0_0_0;
static ParameterInfo ICollection_1_t36914_ICollection_1_Remove_m271945_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t8001_0_0_0},
};
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.ComInterfaceType>::Remove(T)
MethodInfo ICollection_1_Remove_m271945_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36914_ICollection_1_Remove_m271945_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36914_MethodInfos[] =
{
	&ICollection_1_get_Count_m271939_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271940_MethodInfo,
	&ICollection_1_Add_m271941_MethodInfo,
	&ICollection_1_Clear_m271942_MethodInfo,
	&ICollection_1_Contains_m271943_MethodInfo,
	&ICollection_1_CopyTo_m271944_MethodInfo,
	&ICollection_1_Remove_m271945_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36916_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36914_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36916_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36914_0_0_0;
extern Il2CppType ICollection_1_t36914_1_0_0;
struct ICollection_1_t36914;
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36914_GenericClass;
TypeInfo ICollection_1_t36914_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36914_MethodInfos/* methods */
	, ICollection_1_t36914_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36914_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36914_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36914_0_0_0/* byval_arg */
	, &ICollection_1_t36914_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36914_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36916_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>
extern TypeInfo IEnumerable_1_t36916_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29248_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.ComInterfaceType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271946_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36916_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29248_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36916_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271946_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36916_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36916_0_0_0;
extern Il2CppType IEnumerable_1_t36916_1_0_0;
struct IEnumerable_1_t36916;
extern TypeInfo IEnumerable_1_t36916_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36916_GenericClass;
TypeInfo IEnumerable_1_t36916_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36916_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36916_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36916_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36916_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36916_0_0_0/* byval_arg */
	, &IEnumerable_1_t36916_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36916_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36915_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>
extern MethodInfo IList_1_get_Item_m271947_MethodInfo;
extern MethodInfo IList_1_set_Item_m271948_MethodInfo;
static PropertyInfo IList_1_t36915____Item_PropertyInfo = 
{
	&IList_1_t36915_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271947_MethodInfo/* get */
	, &IList_1_set_Item_m271948_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36915_PropertyInfos[] =
{
	&IList_1_t36915____Item_PropertyInfo,
	NULL
};
extern Il2CppType ComInterfaceType_t8001_0_0_0;
static ParameterInfo IList_1_t36915_IList_1_IndexOf_m271949_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t8001_0_0_0},
};
extern TypeInfo IList_1_t36915_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271949_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36915_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36915_IList_1_IndexOf_m271949_ParameterInfos/* parameters */
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
extern Il2CppType ComInterfaceType_t8001_0_0_0;
static ParameterInfo IList_1_t36915_IList_1_Insert_m271950_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t8001_0_0_0},
};
extern TypeInfo IList_1_t36915_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271950_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36915_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36915_IList_1_Insert_m271950_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36915_IList_1_RemoveAt_m271951_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36915_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271951_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36915_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36915_IList_1_RemoveAt_m271951_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36915_IList_1_get_Item_m271947_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36915_il2cpp_TypeInfo;
extern Il2CppType ComInterfaceType_t8001_0_0_0;
extern void* RuntimeInvoker_ComInterfaceType_t8001_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271947_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36915_il2cpp_TypeInfo/* declaring_type */
	, &ComInterfaceType_t8001_0_0_0/* return_type */
	, RuntimeInvoker_ComInterfaceType_t8001_Int32_t73/* invoker_method */
	, IList_1_t36915_IList_1_get_Item_m271947_ParameterInfos/* parameters */
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
extern Il2CppType ComInterfaceType_t8001_0_0_0;
static ParameterInfo IList_1_t36915_IList_1_set_Item_m271948_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ComInterfaceType_t8001_0_0_0},
};
extern TypeInfo IList_1_t36915_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.ComInterfaceType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271948_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36915_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36915_IList_1_set_Item_m271948_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36915_MethodInfos[] =
{
	&IList_1_IndexOf_m271949_MethodInfo,
	&IList_1_Insert_m271950_MethodInfo,
	&IList_1_RemoveAt_m271951_MethodInfo,
	&IList_1_get_Item_m271947_MethodInfo,
	&IList_1_set_Item_m271948_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36914_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36916_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36915_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36914_il2cpp_TypeInfo,
	&IEnumerable_1_t36916_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36915_0_0_0;
extern Il2CppType IList_1_t36915_1_0_0;
struct IList_1_t36915;
extern TypeInfo IList_1_t36915_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36915_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36915_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36915_MethodInfos/* methods */
	, IList_1_t36915_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36915_il2cpp_TypeInfo/* element_class */
	, IList_1_t36915_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36915_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36915_0_0_0/* byval_arg */
	, &IList_1_t36915_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36915_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29249_il2cpp_TypeInfo;

// System.Runtime.InteropServices.DispIdAttribute
#include "mscorlib_System_Runtime_InteropServices_DispIdAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271952_MethodInfo;
static PropertyInfo IEnumerator_1_t29249____Current_PropertyInfo = 
{
	&IEnumerator_1_t29249_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271952_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29249_PropertyInfos[] =
{
	&IEnumerator_1_t29249____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29249_il2cpp_TypeInfo;
extern Il2CppType DispIdAttribute_t8002_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271952_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29249_il2cpp_TypeInfo/* declaring_type */
	, &DispIdAttribute_t8002_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29249_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271952_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29249_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29249_0_0_0;
extern Il2CppType IEnumerator_1_t29249_1_0_0;
struct IEnumerator_1_t29249;
extern TypeInfo IEnumerator_1_t29249_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29249_GenericClass;
TypeInfo IEnumerator_1_t29249_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29249_MethodInfos/* methods */
	, IEnumerator_1_t29249_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29249_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29249_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29249_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29249_0_0_0/* byval_arg */
	, &IEnumerator_1_t29249_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29249_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2998.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2998MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern TypeInfo DispIdAttribute_t8002_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179891_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDispIdAttribute_t8002_m223104_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DispIdAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.DispIdAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisDispIdAttribute_t8002_m223104(__this, p0, method) (DispIdAttribute_t8002 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisDispIdAttribute_t8002_m223104_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24791____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24791, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24791____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24791, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24791_FieldInfos[] =
{
	&InternalEnumerator_1_t24791____array_FieldInfo,
	&InternalEnumerator_1_t24791____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179888_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24791____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24791_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179888_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179891_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24791____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24791_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179891_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24791_PropertyInfos[] =
{
	&InternalEnumerator_1_t24791____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24791____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24791_InternalEnumerator_1__ctor_m179886_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179886_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24791_InternalEnumerator_1__ctor_m179886_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179887_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179888_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179889_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179890_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern Il2CppType DispIdAttribute_t8002_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.DispIdAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179891_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* declaring_type */
	, &DispIdAttribute_t8002_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24791_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179886_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179887_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179888_MethodInfo,
	&InternalEnumerator_1_Dispose_m179889_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179890_MethodInfo,
	&InternalEnumerator_1_get_Current_m179891_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179888_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179890_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179887_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179889_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179891_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24791_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179888_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179890_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179887_MethodInfo,
	&InternalEnumerator_1_Dispose_m179889_MethodInfo,
	&InternalEnumerator_1_get_Current_m179891_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29249_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24791_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29249_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29249_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24791_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29249_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179891_MethodInfo;
extern TypeInfo DispIdAttribute_t8002_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisDispIdAttribute_t8002_m223104_MethodInfo;
static void* InternalEnumerator_1_t24791_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179891_MethodInfo,
	&DispIdAttribute_t8002_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisDispIdAttribute_t8002_m223104_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24791_0_0_0;
extern Il2CppType InternalEnumerator_1_t24791_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24791_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24791_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24791_MethodInfos/* methods */
	, InternalEnumerator_1_t24791_PropertyInfos/* properties */
	, InternalEnumerator_1_t24791_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24791_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24791_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24791_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24791_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24791_1_0_0/* this_arg */
	, InternalEnumerator_1_t24791_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24791_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24791_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24791)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo ICollection_1_get_Count_m271953_MethodInfo;
static PropertyInfo ICollection_1_t36917____Count_PropertyInfo = 
{
	&ICollection_1_t36917_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271953_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271954_MethodInfo;
static PropertyInfo ICollection_1_t36917____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36917_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271954_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36917_PropertyInfos[] =
{
	&ICollection_1_t36917____Count_PropertyInfo,
	&ICollection_1_t36917____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271953_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271954_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DispIdAttribute_t8002_0_0_0;
static ParameterInfo ICollection_1_t36917_ICollection_1_Add_m271955_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t8002_0_0_0},
};
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271955_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36917_ICollection_1_Add_m271955_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271956_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType DispIdAttribute_t8002_0_0_0;
static ParameterInfo ICollection_1_t36917_ICollection_1_Contains_m271957_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t8002_0_0_0},
};
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271957_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36917_ICollection_1_Contains_m271957_ParameterInfos/* parameters */
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
extern Il2CppType DispIdAttributeU5BU5D_t25321_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36917_ICollection_1_CopyTo_m271958_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttributeU5BU5D_t25321_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271958_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36917_ICollection_1_CopyTo_m271958_ParameterInfos/* parameters */
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
extern Il2CppType DispIdAttribute_t8002_0_0_0;
static ParameterInfo ICollection_1_t36917_ICollection_1_Remove_m271959_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t8002_0_0_0},
};
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.DispIdAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271959_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36917_ICollection_1_Remove_m271959_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36917_MethodInfos[] =
{
	&ICollection_1_get_Count_m271953_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271954_MethodInfo,
	&ICollection_1_Add_m271955_MethodInfo,
	&ICollection_1_Clear_m271956_MethodInfo,
	&ICollection_1_Contains_m271957_MethodInfo,
	&ICollection_1_CopyTo_m271958_MethodInfo,
	&ICollection_1_Remove_m271959_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36919_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36917_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36919_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36917_0_0_0;
extern Il2CppType ICollection_1_t36917_1_0_0;
struct ICollection_1_t36917;
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36917_GenericClass;
TypeInfo ICollection_1_t36917_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36917_MethodInfos/* methods */
	, ICollection_1_t36917_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36917_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36917_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36917_0_0_0/* byval_arg */
	, &ICollection_1_t36917_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36917_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36919_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>
extern TypeInfo IEnumerable_1_t36919_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29249_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.DispIdAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271960_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36919_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29249_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36919_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271960_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36919_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36919_0_0_0;
extern Il2CppType IEnumerable_1_t36919_1_0_0;
struct IEnumerable_1_t36919;
extern TypeInfo IEnumerable_1_t36919_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36919_GenericClass;
TypeInfo IEnumerable_1_t36919_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36919_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36919_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36919_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36919_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36919_0_0_0/* byval_arg */
	, &IEnumerable_1_t36919_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36919_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36918_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>
extern MethodInfo IList_1_get_Item_m271961_MethodInfo;
extern MethodInfo IList_1_set_Item_m271962_MethodInfo;
static PropertyInfo IList_1_t36918____Item_PropertyInfo = 
{
	&IList_1_t36918_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271961_MethodInfo/* get */
	, &IList_1_set_Item_m271962_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36918_PropertyInfos[] =
{
	&IList_1_t36918____Item_PropertyInfo,
	NULL
};
extern Il2CppType DispIdAttribute_t8002_0_0_0;
static ParameterInfo IList_1_t36918_IList_1_IndexOf_m271963_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t8002_0_0_0},
};
extern TypeInfo IList_1_t36918_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271963_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36918_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36918_IList_1_IndexOf_m271963_ParameterInfos/* parameters */
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
extern Il2CppType DispIdAttribute_t8002_0_0_0;
static ParameterInfo IList_1_t36918_IList_1_Insert_m271964_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t8002_0_0_0},
};
extern TypeInfo IList_1_t36918_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271964_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36918_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36918_IList_1_Insert_m271964_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36918_IList_1_RemoveAt_m271965_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36918_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271965_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36918_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36918_IList_1_RemoveAt_m271965_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36918_IList_1_get_Item_m271961_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36918_il2cpp_TypeInfo;
extern Il2CppType DispIdAttribute_t8002_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271961_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36918_il2cpp_TypeInfo/* declaring_type */
	, &DispIdAttribute_t8002_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36918_IList_1_get_Item_m271961_ParameterInfos/* parameters */
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
extern Il2CppType DispIdAttribute_t8002_0_0_0;
static ParameterInfo IList_1_t36918_IList_1_set_Item_m271962_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &DispIdAttribute_t8002_0_0_0},
};
extern TypeInfo IList_1_t36918_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.DispIdAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271962_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36918_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36918_IList_1_set_Item_m271962_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36918_MethodInfos[] =
{
	&IList_1_IndexOf_m271963_MethodInfo,
	&IList_1_Insert_m271964_MethodInfo,
	&IList_1_RemoveAt_m271965_MethodInfo,
	&IList_1_get_Item_m271961_MethodInfo,
	&IList_1_set_Item_m271962_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36917_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36919_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36918_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36917_il2cpp_TypeInfo,
	&IEnumerable_1_t36919_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36918_0_0_0;
extern Il2CppType IList_1_t36918_1_0_0;
struct IList_1_t36918;
extern TypeInfo IList_1_t36918_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36918_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36918_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36918_MethodInfos/* methods */
	, IList_1_t36918_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36918_il2cpp_TypeInfo/* element_class */
	, IList_1_t36918_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36918_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36918_0_0_0/* byval_arg */
	, &IList_1_t36918_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36918_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29250_il2cpp_TypeInfo;

// System.Runtime.InteropServices.GCHandleType
#include "mscorlib_System_Runtime_InteropServices_GCHandleType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo IEnumerator_1_get_Current_m271966_MethodInfo;
static PropertyInfo IEnumerator_1_t29250____Current_PropertyInfo = 
{
	&IEnumerator_1_t29250_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271966_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29250_PropertyInfos[] =
{
	&IEnumerator_1_t29250____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29250_il2cpp_TypeInfo;
extern Il2CppType GCHandleType_t8003_0_0_0;
extern void* RuntimeInvoker_GCHandleType_t8003 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271966_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29250_il2cpp_TypeInfo/* declaring_type */
	, &GCHandleType_t8003_0_0_0/* return_type */
	, RuntimeInvoker_GCHandleType_t8003/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29250_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271966_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29250_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29250_0_0_0;
extern Il2CppType IEnumerator_1_t29250_1_0_0;
struct IEnumerator_1_t29250;
extern TypeInfo IEnumerator_1_t29250_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29250_GenericClass;
TypeInfo IEnumerator_1_t29250_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29250_MethodInfos/* methods */
	, IEnumerator_1_t29250_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29250_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29250_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29250_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29250_0_0_0/* byval_arg */
	, &IEnumerator_1_t29250_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29250_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2999.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_2999MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern TypeInfo GCHandleType_t8003_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179897_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisGCHandleType_t8003_m223115_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GCHandleType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.GCHandleType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisGCHandleType_t8003_m223115 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisGCHandleType_t8003_m223115_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179892_MethodInfo;
 void InternalEnumerator_1__ctor_m179892 (InternalEnumerator_1_t24792 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179893_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179893 (InternalEnumerator_1_t24792 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894 (InternalEnumerator_1_t24792 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179897(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179897_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&GCHandleType_t8003_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179895_MethodInfo;
 void InternalEnumerator_1_Dispose_m179895 (InternalEnumerator_1_t24792 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179896_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179896 (InternalEnumerator_1_t24792 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179897_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179897 (InternalEnumerator_1_t24792 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisGCHandleType_t8003_m223115(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisGCHandleType_t8003_m223115_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24792____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24792, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24792____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24792, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24792_FieldInfos[] =
{
	&InternalEnumerator_1_t24792____array_FieldInfo,
	&InternalEnumerator_1_t24792____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24792____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24792_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179897_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24792____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24792_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179897_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24792_PropertyInfos[] =
{
	&InternalEnumerator_1_t24792____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24792____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24792_InternalEnumerator_1__ctor_m179892_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179892_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179892/* method */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24792_InternalEnumerator_1__ctor_m179892_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179893_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179893/* method */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894/* method */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179895_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179895/* method */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179896_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179896/* method */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern Il2CppType GCHandleType_t8003_0_0_0;
extern void* RuntimeInvoker_GCHandleType_t8003 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.GCHandleType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179897_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179897/* method */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* declaring_type */
	, &GCHandleType_t8003_0_0_0/* return_type */
	, RuntimeInvoker_GCHandleType_t8003/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24792_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179892_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179893_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894_MethodInfo,
	&InternalEnumerator_1_Dispose_m179895_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179896_MethodInfo,
	&InternalEnumerator_1_get_Current_m179897_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179896_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179893_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179895_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179897_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24792_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179894_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179896_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179893_MethodInfo,
	&InternalEnumerator_1_Dispose_m179895_MethodInfo,
	&InternalEnumerator_1_get_Current_m179897_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29250_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24792_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29250_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29250_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24792_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29250_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24792_0_0_0;
extern Il2CppType InternalEnumerator_1_t24792_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24792_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24792_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24792_MethodInfos/* methods */
	, InternalEnumerator_1_t24792_PropertyInfos/* properties */
	, InternalEnumerator_1_t24792_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24792_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24792_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24792_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24792_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24792_1_0_0/* this_arg */
	, InternalEnumerator_1_t24792_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24792_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24792)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo ICollection_1_get_Count_m271967_MethodInfo;
static PropertyInfo ICollection_1_t36920____Count_PropertyInfo = 
{
	&ICollection_1_t36920_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271967_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271968_MethodInfo;
static PropertyInfo ICollection_1_t36920____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36920_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271968_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36920_PropertyInfos[] =
{
	&ICollection_1_t36920____Count_PropertyInfo,
	&ICollection_1_t36920____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_Count()
MethodInfo ICollection_1_get_Count_m271967_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271968_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GCHandleType_t8003_0_0_0;
static ParameterInfo ICollection_1_t36920_ICollection_1_Add_m271969_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t8003_0_0_0},
};
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Add(T)
MethodInfo ICollection_1_Add_m271969_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36920_ICollection_1_Add_m271969_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Clear()
MethodInfo ICollection_1_Clear_m271970_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType GCHandleType_t8003_0_0_0;
static ParameterInfo ICollection_1_t36920_ICollection_1_Contains_m271971_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t8003_0_0_0},
};
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Contains(T)
MethodInfo ICollection_1_Contains_m271971_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36920_ICollection_1_Contains_m271971_ParameterInfos/* parameters */
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
extern Il2CppType GCHandleTypeU5BU5D_t25322_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36920_ICollection_1_CopyTo_m271972_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleTypeU5BU5D_t25322_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271972_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36920_ICollection_1_CopyTo_m271972_ParameterInfos/* parameters */
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
extern Il2CppType GCHandleType_t8003_0_0_0;
static ParameterInfo ICollection_1_t36920_ICollection_1_Remove_m271973_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t8003_0_0_0},
};
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.GCHandleType>::Remove(T)
MethodInfo ICollection_1_Remove_m271973_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36920_ICollection_1_Remove_m271973_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36920_MethodInfos[] =
{
	&ICollection_1_get_Count_m271967_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271968_MethodInfo,
	&ICollection_1_Add_m271969_MethodInfo,
	&ICollection_1_Clear_m271970_MethodInfo,
	&ICollection_1_Contains_m271971_MethodInfo,
	&ICollection_1_CopyTo_m271972_MethodInfo,
	&ICollection_1_Remove_m271973_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36922_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36920_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36922_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36920_0_0_0;
extern Il2CppType ICollection_1_t36920_1_0_0;
struct ICollection_1_t36920;
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36920_GenericClass;
TypeInfo ICollection_1_t36920_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36920_MethodInfos/* methods */
	, ICollection_1_t36920_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36920_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36920_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36920_0_0_0/* byval_arg */
	, &ICollection_1_t36920_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36920_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36922_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>
extern TypeInfo IEnumerable_1_t36922_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29250_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.GCHandleType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271974_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36922_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29250_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36922_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271974_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36922_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36922_0_0_0;
extern Il2CppType IEnumerable_1_t36922_1_0_0;
struct IEnumerable_1_t36922;
extern TypeInfo IEnumerable_1_t36922_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36922_GenericClass;
TypeInfo IEnumerable_1_t36922_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36922_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36922_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36922_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36922_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36922_0_0_0/* byval_arg */
	, &IEnumerable_1_t36922_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36922_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36921_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>
extern MethodInfo IList_1_get_Item_m271975_MethodInfo;
extern MethodInfo IList_1_set_Item_m271976_MethodInfo;
static PropertyInfo IList_1_t36921____Item_PropertyInfo = 
{
	&IList_1_t36921_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271975_MethodInfo/* get */
	, &IList_1_set_Item_m271976_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36921_PropertyInfos[] =
{
	&IList_1_t36921____Item_PropertyInfo,
	NULL
};
extern Il2CppType GCHandleType_t8003_0_0_0;
static ParameterInfo IList_1_t36921_IList_1_IndexOf_m271977_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t8003_0_0_0},
};
extern TypeInfo IList_1_t36921_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271977_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36921_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36921_IList_1_IndexOf_m271977_ParameterInfos/* parameters */
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
extern Il2CppType GCHandleType_t8003_0_0_0;
static ParameterInfo IList_1_t36921_IList_1_Insert_m271978_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t8003_0_0_0},
};
extern TypeInfo IList_1_t36921_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271978_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36921_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36921_IList_1_Insert_m271978_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36921_IList_1_RemoveAt_m271979_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36921_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271979_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36921_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36921_IList_1_RemoveAt_m271979_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36921_IList_1_get_Item_m271975_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36921_il2cpp_TypeInfo;
extern Il2CppType GCHandleType_t8003_0_0_0;
extern void* RuntimeInvoker_GCHandleType_t8003_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271975_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36921_il2cpp_TypeInfo/* declaring_type */
	, &GCHandleType_t8003_0_0_0/* return_type */
	, RuntimeInvoker_GCHandleType_t8003_Int32_t73/* invoker_method */
	, IList_1_t36921_IList_1_get_Item_m271975_ParameterInfos/* parameters */
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
extern Il2CppType GCHandleType_t8003_0_0_0;
static ParameterInfo IList_1_t36921_IList_1_set_Item_m271976_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &GCHandleType_t8003_0_0_0},
};
extern TypeInfo IList_1_t36921_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.GCHandleType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271976_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36921_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36921_IList_1_set_Item_m271976_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36921_MethodInfos[] =
{
	&IList_1_IndexOf_m271977_MethodInfo,
	&IList_1_Insert_m271978_MethodInfo,
	&IList_1_RemoveAt_m271979_MethodInfo,
	&IList_1_get_Item_m271975_MethodInfo,
	&IList_1_set_Item_m271976_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36920_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36922_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36921_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36920_il2cpp_TypeInfo,
	&IEnumerable_1_t36922_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36921_0_0_0;
extern Il2CppType IList_1_t36921_1_0_0;
struct IList_1_t36921;
extern TypeInfo IList_1_t36921_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36921_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36921_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36921_MethodInfos/* methods */
	, IList_1_t36921_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36921_il2cpp_TypeInfo/* element_class */
	, IList_1_t36921_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36921_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36921_0_0_0/* byval_arg */
	, &IList_1_t36921_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36921_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29251_il2cpp_TypeInfo;

// System.Runtime.InteropServices.InterfaceTypeAttribute
#include "mscorlib_System_Runtime_InteropServices_InterfaceTypeAttribu.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271980_MethodInfo;
static PropertyInfo IEnumerator_1_t29251____Current_PropertyInfo = 
{
	&IEnumerator_1_t29251_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271980_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29251_PropertyInfos[] =
{
	&IEnumerator_1_t29251____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29251_il2cpp_TypeInfo;
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271980_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29251_il2cpp_TypeInfo/* declaring_type */
	, &InterfaceTypeAttribute_t8004_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29251_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271980_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29251_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29251_0_0_0;
extern Il2CppType IEnumerator_1_t29251_1_0_0;
struct IEnumerator_1_t29251;
extern TypeInfo IEnumerator_1_t29251_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29251_GenericClass;
TypeInfo IEnumerator_1_t29251_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29251_MethodInfos/* methods */
	, IEnumerator_1_t29251_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29251_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29251_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29251_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29251_0_0_0/* byval_arg */
	, &IEnumerator_1_t29251_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29251_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3000.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3000MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern TypeInfo InterfaceTypeAttribute_t8004_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179903_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t8004_m223126_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InterfaceTypeAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.InterfaceTypeAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t8004_m223126(__this, p0, method) (InterfaceTypeAttribute_t8004 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t8004_m223126_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24793____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24793, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24793____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24793, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24793_FieldInfos[] =
{
	&InternalEnumerator_1_t24793____array_FieldInfo,
	&InternalEnumerator_1_t24793____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179900_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24793____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24793_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179900_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179903_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24793____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24793_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179903_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24793_PropertyInfos[] =
{
	&InternalEnumerator_1_t24793____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24793____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24793_InternalEnumerator_1__ctor_m179898_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179898_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24793_InternalEnumerator_1__ctor_m179898_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179899_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179900_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179901_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179902_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179903_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* declaring_type */
	, &InterfaceTypeAttribute_t8004_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24793_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179898_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179899_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179900_MethodInfo,
	&InternalEnumerator_1_Dispose_m179901_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179902_MethodInfo,
	&InternalEnumerator_1_get_Current_m179903_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179900_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179902_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179899_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179901_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179903_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24793_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179900_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179902_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179899_MethodInfo,
	&InternalEnumerator_1_Dispose_m179901_MethodInfo,
	&InternalEnumerator_1_get_Current_m179903_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29251_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24793_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29251_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29251_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24793_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29251_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179903_MethodInfo;
extern TypeInfo InterfaceTypeAttribute_t8004_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t8004_m223126_MethodInfo;
static void* InternalEnumerator_1_t24793_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179903_MethodInfo,
	&InterfaceTypeAttribute_t8004_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisInterfaceTypeAttribute_t8004_m223126_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24793_0_0_0;
extern Il2CppType InternalEnumerator_1_t24793_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24793_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24793_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24793_MethodInfos/* methods */
	, InternalEnumerator_1_t24793_PropertyInfos/* properties */
	, InternalEnumerator_1_t24793_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24793_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24793_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24793_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24793_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24793_1_0_0/* this_arg */
	, InternalEnumerator_1_t24793_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24793_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24793_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24793)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo ICollection_1_get_Count_m271981_MethodInfo;
static PropertyInfo ICollection_1_t36923____Count_PropertyInfo = 
{
	&ICollection_1_t36923_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271981_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271982_MethodInfo;
static PropertyInfo ICollection_1_t36923____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36923_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271982_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36923_PropertyInfos[] =
{
	&ICollection_1_t36923____Count_PropertyInfo,
	&ICollection_1_t36923____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271981_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271982_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
static ParameterInfo ICollection_1_t36923_ICollection_1_Add_m271983_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t8004_0_0_0},
};
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271983_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36923_ICollection_1_Add_m271983_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271984_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
static ParameterInfo ICollection_1_t36923_ICollection_1_Contains_m271985_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t8004_0_0_0},
};
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271985_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36923_ICollection_1_Contains_m271985_ParameterInfos/* parameters */
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
extern Il2CppType InterfaceTypeAttributeU5BU5D_t25323_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36923_ICollection_1_CopyTo_m271986_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttributeU5BU5D_t25323_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m271986_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36923_ICollection_1_CopyTo_m271986_ParameterInfos/* parameters */
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
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
static ParameterInfo ICollection_1_t36923_ICollection_1_Remove_m271987_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t8004_0_0_0},
};
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m271987_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36923_ICollection_1_Remove_m271987_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36923_MethodInfos[] =
{
	&ICollection_1_get_Count_m271981_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271982_MethodInfo,
	&ICollection_1_Add_m271983_MethodInfo,
	&ICollection_1_Clear_m271984_MethodInfo,
	&ICollection_1_Contains_m271985_MethodInfo,
	&ICollection_1_CopyTo_m271986_MethodInfo,
	&ICollection_1_Remove_m271987_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36925_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36923_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36925_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36923_0_0_0;
extern Il2CppType ICollection_1_t36923_1_0_0;
struct ICollection_1_t36923;
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36923_GenericClass;
TypeInfo ICollection_1_t36923_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36923_MethodInfos/* methods */
	, ICollection_1_t36923_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36923_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36923_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36923_0_0_0/* byval_arg */
	, &ICollection_1_t36923_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36923_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36925_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern TypeInfo IEnumerable_1_t36925_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29251_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m271988_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36925_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29251_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36925_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m271988_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36925_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36925_0_0_0;
extern Il2CppType IEnumerable_1_t36925_1_0_0;
struct IEnumerable_1_t36925;
extern TypeInfo IEnumerable_1_t36925_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36925_GenericClass;
TypeInfo IEnumerable_1_t36925_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36925_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36925_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36925_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36925_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36925_0_0_0/* byval_arg */
	, &IEnumerable_1_t36925_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36925_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36924_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>
extern MethodInfo IList_1_get_Item_m271989_MethodInfo;
extern MethodInfo IList_1_set_Item_m271990_MethodInfo;
static PropertyInfo IList_1_t36924____Item_PropertyInfo = 
{
	&IList_1_t36924_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m271989_MethodInfo/* get */
	, &IList_1_set_Item_m271990_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36924_PropertyInfos[] =
{
	&IList_1_t36924____Item_PropertyInfo,
	NULL
};
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
static ParameterInfo IList_1_t36924_IList_1_IndexOf_m271991_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t8004_0_0_0},
};
extern TypeInfo IList_1_t36924_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m271991_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36924_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36924_IList_1_IndexOf_m271991_ParameterInfos/* parameters */
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
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
static ParameterInfo IList_1_t36924_IList_1_Insert_m271992_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t8004_0_0_0},
};
extern TypeInfo IList_1_t36924_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m271992_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36924_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36924_IList_1_Insert_m271992_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36924_IList_1_RemoveAt_m271993_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36924_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m271993_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36924_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36924_IList_1_RemoveAt_m271993_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36924_IList_1_get_Item_m271989_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36924_il2cpp_TypeInfo;
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m271989_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36924_il2cpp_TypeInfo/* declaring_type */
	, &InterfaceTypeAttribute_t8004_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36924_IList_1_get_Item_m271989_ParameterInfos/* parameters */
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
extern Il2CppType InterfaceTypeAttribute_t8004_0_0_0;
static ParameterInfo IList_1_t36924_IList_1_set_Item_m271990_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &InterfaceTypeAttribute_t8004_0_0_0},
};
extern TypeInfo IList_1_t36924_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.InterfaceTypeAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m271990_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36924_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36924_IList_1_set_Item_m271990_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36924_MethodInfos[] =
{
	&IList_1_IndexOf_m271991_MethodInfo,
	&IList_1_Insert_m271992_MethodInfo,
	&IList_1_RemoveAt_m271993_MethodInfo,
	&IList_1_get_Item_m271989_MethodInfo,
	&IList_1_set_Item_m271990_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36923_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36925_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36924_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36923_il2cpp_TypeInfo,
	&IEnumerable_1_t36925_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36924_0_0_0;
extern Il2CppType IList_1_t36924_1_0_0;
struct IList_1_t36924;
extern TypeInfo IList_1_t36924_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36924_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36924_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36924_MethodInfos/* methods */
	, IList_1_t36924_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36924_il2cpp_TypeInfo/* element_class */
	, IList_1_t36924_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36924_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36924_0_0_0/* byval_arg */
	, &IList_1_t36924_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36924_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29252_il2cpp_TypeInfo;

// System.Runtime.InteropServices.PreserveSigAttribute
#include "mscorlib_System_Runtime_InteropServices_PreserveSigAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo IEnumerator_1_get_Current_m271994_MethodInfo;
static PropertyInfo IEnumerator_1_t29252____Current_PropertyInfo = 
{
	&IEnumerator_1_t29252_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m271994_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29252_PropertyInfos[] =
{
	&IEnumerator_1_t29252____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29252_il2cpp_TypeInfo;
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m271994_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29252_il2cpp_TypeInfo/* declaring_type */
	, &PreserveSigAttribute_t8005_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29252_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m271994_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29252_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29252_0_0_0;
extern Il2CppType IEnumerator_1_t29252_1_0_0;
struct IEnumerator_1_t29252;
extern TypeInfo IEnumerator_1_t29252_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29252_GenericClass;
TypeInfo IEnumerator_1_t29252_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29252_MethodInfos/* methods */
	, IEnumerator_1_t29252_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29252_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29252_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29252_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29252_0_0_0/* byval_arg */
	, &IEnumerator_1_t29252_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29252_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3001.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3001MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern TypeInfo PreserveSigAttribute_t8005_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179909_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPreserveSigAttribute_t8005_m223137_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.PreserveSigAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.PreserveSigAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisPreserveSigAttribute_t8005_m223137(__this, p0, method) (PreserveSigAttribute_t8005 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisPreserveSigAttribute_t8005_m223137_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24794____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24794, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24794____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24794, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24794_FieldInfos[] =
{
	&InternalEnumerator_1_t24794____array_FieldInfo,
	&InternalEnumerator_1_t24794____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179906_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24794____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24794_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179906_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179909_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24794____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24794_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179909_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24794_PropertyInfos[] =
{
	&InternalEnumerator_1_t24794____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24794____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24794_InternalEnumerator_1__ctor_m179904_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179904_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24794_InternalEnumerator_1__ctor_m179904_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179905_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179906_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179907_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179908_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179909_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* declaring_type */
	, &PreserveSigAttribute_t8005_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24794_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179904_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179905_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179906_MethodInfo,
	&InternalEnumerator_1_Dispose_m179907_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179908_MethodInfo,
	&InternalEnumerator_1_get_Current_m179909_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179906_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179908_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179905_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179907_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179909_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24794_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179906_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179908_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179905_MethodInfo,
	&InternalEnumerator_1_Dispose_m179907_MethodInfo,
	&InternalEnumerator_1_get_Current_m179909_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29252_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24794_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29252_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29252_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24794_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29252_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179909_MethodInfo;
extern TypeInfo PreserveSigAttribute_t8005_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisPreserveSigAttribute_t8005_m223137_MethodInfo;
static void* InternalEnumerator_1_t24794_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179909_MethodInfo,
	&PreserveSigAttribute_t8005_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisPreserveSigAttribute_t8005_m223137_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24794_0_0_0;
extern Il2CppType InternalEnumerator_1_t24794_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24794_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24794_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24794_MethodInfos/* methods */
	, InternalEnumerator_1_t24794_PropertyInfos/* properties */
	, InternalEnumerator_1_t24794_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24794_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24794_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24794_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24794_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24794_1_0_0/* this_arg */
	, InternalEnumerator_1_t24794_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24794_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24794_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24794)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo ICollection_1_get_Count_m271995_MethodInfo;
static PropertyInfo ICollection_1_t36926____Count_PropertyInfo = 
{
	&ICollection_1_t36926_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m271995_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m271996_MethodInfo;
static PropertyInfo ICollection_1_t36926____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36926_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m271996_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36926_PropertyInfos[] =
{
	&ICollection_1_t36926____Count_PropertyInfo,
	&ICollection_1_t36926____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m271995_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m271996_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
static ParameterInfo ICollection_1_t36926_ICollection_1_Add_m271997_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t8005_0_0_0},
};
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Add(T)
MethodInfo ICollection_1_Add_m271997_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36926_ICollection_1_Add_m271997_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Clear()
MethodInfo ICollection_1_Clear_m271998_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
static ParameterInfo ICollection_1_t36926_ICollection_1_Contains_m271999_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t8005_0_0_0},
};
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m271999_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36926_ICollection_1_Contains_m271999_ParameterInfos/* parameters */
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
extern Il2CppType PreserveSigAttributeU5BU5D_t25324_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36926_ICollection_1_CopyTo_m272000_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttributeU5BU5D_t25324_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272000_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36926_ICollection_1_CopyTo_m272000_ParameterInfos/* parameters */
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
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
static ParameterInfo ICollection_1_t36926_ICollection_1_Remove_m272001_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t8005_0_0_0},
};
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.PreserveSigAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272001_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36926_ICollection_1_Remove_m272001_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36926_MethodInfos[] =
{
	&ICollection_1_get_Count_m271995_MethodInfo,
	&ICollection_1_get_IsReadOnly_m271996_MethodInfo,
	&ICollection_1_Add_m271997_MethodInfo,
	&ICollection_1_Clear_m271998_MethodInfo,
	&ICollection_1_Contains_m271999_MethodInfo,
	&ICollection_1_CopyTo_m272000_MethodInfo,
	&ICollection_1_Remove_m272001_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36928_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36926_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36928_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36926_0_0_0;
extern Il2CppType ICollection_1_t36926_1_0_0;
struct ICollection_1_t36926;
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36926_GenericClass;
TypeInfo ICollection_1_t36926_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36926_MethodInfos/* methods */
	, ICollection_1_t36926_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36926_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36926_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36926_0_0_0/* byval_arg */
	, &ICollection_1_t36926_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36926_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36928_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern TypeInfo IEnumerable_1_t36928_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29252_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.PreserveSigAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272002_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36928_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29252_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36928_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272002_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36928_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36928_0_0_0;
extern Il2CppType IEnumerable_1_t36928_1_0_0;
struct IEnumerable_1_t36928;
extern TypeInfo IEnumerable_1_t36928_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36928_GenericClass;
TypeInfo IEnumerable_1_t36928_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36928_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36928_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36928_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36928_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36928_0_0_0/* byval_arg */
	, &IEnumerable_1_t36928_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36928_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36927_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>
extern MethodInfo IList_1_get_Item_m272003_MethodInfo;
extern MethodInfo IList_1_set_Item_m272004_MethodInfo;
static PropertyInfo IList_1_t36927____Item_PropertyInfo = 
{
	&IList_1_t36927_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272003_MethodInfo/* get */
	, &IList_1_set_Item_m272004_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36927_PropertyInfos[] =
{
	&IList_1_t36927____Item_PropertyInfo,
	NULL
};
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
static ParameterInfo IList_1_t36927_IList_1_IndexOf_m272005_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t8005_0_0_0},
};
extern TypeInfo IList_1_t36927_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272005_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36927_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36927_IList_1_IndexOf_m272005_ParameterInfos/* parameters */
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
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
static ParameterInfo IList_1_t36927_IList_1_Insert_m272006_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t8005_0_0_0},
};
extern TypeInfo IList_1_t36927_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272006_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36927_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36927_IList_1_Insert_m272006_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36927_IList_1_RemoveAt_m272007_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36927_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272007_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36927_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36927_IList_1_RemoveAt_m272007_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36927_IList_1_get_Item_m272003_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36927_il2cpp_TypeInfo;
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272003_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36927_il2cpp_TypeInfo/* declaring_type */
	, &PreserveSigAttribute_t8005_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36927_IList_1_get_Item_m272003_ParameterInfos/* parameters */
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
extern Il2CppType PreserveSigAttribute_t8005_0_0_0;
static ParameterInfo IList_1_t36927_IList_1_set_Item_m272004_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &PreserveSigAttribute_t8005_0_0_0},
};
extern TypeInfo IList_1_t36927_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.PreserveSigAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272004_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36927_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36927_IList_1_set_Item_m272004_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36927_MethodInfos[] =
{
	&IList_1_IndexOf_m272005_MethodInfo,
	&IList_1_Insert_m272006_MethodInfo,
	&IList_1_RemoveAt_m272007_MethodInfo,
	&IList_1_get_Item_m272003_MethodInfo,
	&IList_1_set_Item_m272004_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36926_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36928_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36927_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36926_il2cpp_TypeInfo,
	&IEnumerable_1_t36928_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36927_0_0_0;
extern Il2CppType IList_1_t36927_1_0_0;
struct IList_1_t36927;
extern TypeInfo IList_1_t36927_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36927_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36927_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36927_MethodInfos/* methods */
	, IList_1_t36927_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36927_il2cpp_TypeInfo/* element_class */
	, IList_1_t36927_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36927_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36927_0_0_0/* byval_arg */
	, &IList_1_t36927_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36927_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29253_il2cpp_TypeInfo;

// System.Runtime.InteropServices.TypeLibImportClassAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibImportClassAt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272008_MethodInfo;
static PropertyInfo IEnumerator_1_t29253____Current_PropertyInfo = 
{
	&IEnumerator_1_t29253_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272008_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29253_PropertyInfos[] =
{
	&IEnumerator_1_t29253____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29253_il2cpp_TypeInfo;
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272008_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29253_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibImportClassAttribute_t8006_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29253_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272008_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29253_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29253_0_0_0;
extern Il2CppType IEnumerator_1_t29253_1_0_0;
struct IEnumerator_1_t29253;
extern TypeInfo IEnumerator_1_t29253_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29253_GenericClass;
TypeInfo IEnumerator_1_t29253_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29253_MethodInfos/* methods */
	, IEnumerator_1_t29253_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29253_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29253_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29253_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29253_0_0_0/* byval_arg */
	, &IEnumerator_1_t29253_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29253_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3002.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3002MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern TypeInfo TypeLibImportClassAttribute_t8006_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179915_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t8006_m223148_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibImportClassAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibImportClassAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t8006_m223148(__this, p0, method) (TypeLibImportClassAttribute_t8006 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t8006_m223148_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24795____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24795, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24795____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24795, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24795_FieldInfos[] =
{
	&InternalEnumerator_1_t24795____array_FieldInfo,
	&InternalEnumerator_1_t24795____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179912_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24795____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24795_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179912_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179915_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24795____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24795_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179915_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24795_PropertyInfos[] =
{
	&InternalEnumerator_1_t24795____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24795____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24795_InternalEnumerator_1__ctor_m179910_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179910_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24795_InternalEnumerator_1__ctor_m179910_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179911_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179912_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179913_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179914_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179915_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibImportClassAttribute_t8006_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24795_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179910_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179911_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179912_MethodInfo,
	&InternalEnumerator_1_Dispose_m179913_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179914_MethodInfo,
	&InternalEnumerator_1_get_Current_m179915_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179912_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179914_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179911_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179913_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179915_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24795_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179912_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179914_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179911_MethodInfo,
	&InternalEnumerator_1_Dispose_m179913_MethodInfo,
	&InternalEnumerator_1_get_Current_m179915_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29253_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24795_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29253_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29253_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24795_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29253_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179915_MethodInfo;
extern TypeInfo TypeLibImportClassAttribute_t8006_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t8006_m223148_MethodInfo;
static void* InternalEnumerator_1_t24795_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179915_MethodInfo,
	&TypeLibImportClassAttribute_t8006_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTypeLibImportClassAttribute_t8006_m223148_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24795_0_0_0;
extern Il2CppType InternalEnumerator_1_t24795_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24795_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24795_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24795_MethodInfos/* methods */
	, InternalEnumerator_1_t24795_PropertyInfos/* properties */
	, InternalEnumerator_1_t24795_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24795_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24795_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24795_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24795_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24795_1_0_0/* this_arg */
	, InternalEnumerator_1_t24795_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24795_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24795_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24795)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo ICollection_1_get_Count_m272009_MethodInfo;
static PropertyInfo ICollection_1_t36929____Count_PropertyInfo = 
{
	&ICollection_1_t36929_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272009_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272010_MethodInfo;
static PropertyInfo ICollection_1_t36929____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36929_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272010_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36929_PropertyInfos[] =
{
	&ICollection_1_t36929____Count_PropertyInfo,
	&ICollection_1_t36929____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272009_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272010_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
static ParameterInfo ICollection_1_t36929_ICollection_1_Add_m272011_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t8006_0_0_0},
};
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272011_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36929_ICollection_1_Add_m272011_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272012_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
static ParameterInfo ICollection_1_t36929_ICollection_1_Contains_m272013_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t8006_0_0_0},
};
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272013_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36929_ICollection_1_Contains_m272013_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibImportClassAttributeU5BU5D_t25325_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36929_ICollection_1_CopyTo_m272014_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttributeU5BU5D_t25325_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272014_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36929_ICollection_1_CopyTo_m272014_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
static ParameterInfo ICollection_1_t36929_ICollection_1_Remove_m272015_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t8006_0_0_0},
};
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272015_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36929_ICollection_1_Remove_m272015_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36929_MethodInfos[] =
{
	&ICollection_1_get_Count_m272009_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272010_MethodInfo,
	&ICollection_1_Add_m272011_MethodInfo,
	&ICollection_1_Clear_m272012_MethodInfo,
	&ICollection_1_Contains_m272013_MethodInfo,
	&ICollection_1_CopyTo_m272014_MethodInfo,
	&ICollection_1_Remove_m272015_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36931_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36929_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36931_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36929_0_0_0;
extern Il2CppType ICollection_1_t36929_1_0_0;
struct ICollection_1_t36929;
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36929_GenericClass;
TypeInfo ICollection_1_t36929_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36929_MethodInfos/* methods */
	, ICollection_1_t36929_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36929_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36929_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36929_0_0_0/* byval_arg */
	, &ICollection_1_t36929_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36929_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36931_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern TypeInfo IEnumerable_1_t36931_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29253_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272016_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36931_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29253_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36931_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272016_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36931_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36931_0_0_0;
extern Il2CppType IEnumerable_1_t36931_1_0_0;
struct IEnumerable_1_t36931;
extern TypeInfo IEnumerable_1_t36931_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36931_GenericClass;
TypeInfo IEnumerable_1_t36931_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36931_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36931_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36931_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36931_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36931_0_0_0/* byval_arg */
	, &IEnumerable_1_t36931_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36931_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36930_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>
extern MethodInfo IList_1_get_Item_m272017_MethodInfo;
extern MethodInfo IList_1_set_Item_m272018_MethodInfo;
static PropertyInfo IList_1_t36930____Item_PropertyInfo = 
{
	&IList_1_t36930_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272017_MethodInfo/* get */
	, &IList_1_set_Item_m272018_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36930_PropertyInfos[] =
{
	&IList_1_t36930____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
static ParameterInfo IList_1_t36930_IList_1_IndexOf_m272019_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t8006_0_0_0},
};
extern TypeInfo IList_1_t36930_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272019_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36930_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36930_IList_1_IndexOf_m272019_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
static ParameterInfo IList_1_t36930_IList_1_Insert_m272020_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t8006_0_0_0},
};
extern TypeInfo IList_1_t36930_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272020_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36930_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36930_IList_1_Insert_m272020_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36930_IList_1_RemoveAt_m272021_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36930_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272021_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36930_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36930_IList_1_RemoveAt_m272021_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36930_IList_1_get_Item_m272017_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36930_il2cpp_TypeInfo;
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272017_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36930_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibImportClassAttribute_t8006_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36930_IList_1_get_Item_m272017_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibImportClassAttribute_t8006_0_0_0;
static ParameterInfo IList_1_t36930_IList_1_set_Item_m272018_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibImportClassAttribute_t8006_0_0_0},
};
extern TypeInfo IList_1_t36930_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibImportClassAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272018_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36930_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36930_IList_1_set_Item_m272018_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36930_MethodInfos[] =
{
	&IList_1_IndexOf_m272019_MethodInfo,
	&IList_1_Insert_m272020_MethodInfo,
	&IList_1_RemoveAt_m272021_MethodInfo,
	&IList_1_get_Item_m272017_MethodInfo,
	&IList_1_set_Item_m272018_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36929_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36931_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36930_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36929_il2cpp_TypeInfo,
	&IEnumerable_1_t36931_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36930_0_0_0;
extern Il2CppType IList_1_t36930_1_0_0;
struct IList_1_t36930;
extern TypeInfo IList_1_t36930_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36930_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36930_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36930_MethodInfos/* methods */
	, IList_1_t36930_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36930_il2cpp_TypeInfo/* element_class */
	, IList_1_t36930_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36930_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36930_0_0_0/* byval_arg */
	, &IList_1_t36930_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36930_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29254_il2cpp_TypeInfo;

// System.Runtime.InteropServices.TypeLibVersionAttribute
#include "mscorlib_System_Runtime_InteropServices_TypeLibVersionAttrib.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272022_MethodInfo;
static PropertyInfo IEnumerator_1_t29254____Current_PropertyInfo = 
{
	&IEnumerator_1_t29254_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272022_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29254_PropertyInfos[] =
{
	&IEnumerator_1_t29254____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29254_il2cpp_TypeInfo;
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272022_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29254_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibVersionAttribute_t8007_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29254_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272022_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29254_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29254_0_0_0;
extern Il2CppType IEnumerator_1_t29254_1_0_0;
struct IEnumerator_1_t29254;
extern TypeInfo IEnumerator_1_t29254_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29254_GenericClass;
TypeInfo IEnumerator_1_t29254_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29254_MethodInfos/* methods */
	, IEnumerator_1_t29254_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29254_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29254_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29254_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29254_0_0_0/* byval_arg */
	, &IEnumerator_1_t29254_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29254_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3003.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3003MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern TypeInfo TypeLibVersionAttribute_t8007_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179921_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t8007_m223159_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibVersionAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.TypeLibVersionAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t8007_m223159(__this, p0, method) (TypeLibVersionAttribute_t8007 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t8007_m223159_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24796____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24796, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24796____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24796, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24796_FieldInfos[] =
{
	&InternalEnumerator_1_t24796____array_FieldInfo,
	&InternalEnumerator_1_t24796____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179918_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24796____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24796_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179918_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179921_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24796____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24796_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179921_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24796_PropertyInfos[] =
{
	&InternalEnumerator_1_t24796____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24796____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24796_InternalEnumerator_1__ctor_m179916_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179916_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24796_InternalEnumerator_1__ctor_m179916_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179917_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179918_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179919_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179920_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179921_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibVersionAttribute_t8007_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24796_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179916_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179917_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179918_MethodInfo,
	&InternalEnumerator_1_Dispose_m179919_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179920_MethodInfo,
	&InternalEnumerator_1_get_Current_m179921_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179918_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179920_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179917_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179919_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179921_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24796_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179918_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179920_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179917_MethodInfo,
	&InternalEnumerator_1_Dispose_m179919_MethodInfo,
	&InternalEnumerator_1_get_Current_m179921_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29254_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24796_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29254_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29254_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24796_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29254_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179921_MethodInfo;
extern TypeInfo TypeLibVersionAttribute_t8007_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t8007_m223159_MethodInfo;
static void* InternalEnumerator_1_t24796_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179921_MethodInfo,
	&TypeLibVersionAttribute_t8007_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisTypeLibVersionAttribute_t8007_m223159_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24796_0_0_0;
extern Il2CppType InternalEnumerator_1_t24796_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24796_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24796_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24796_MethodInfos/* methods */
	, InternalEnumerator_1_t24796_PropertyInfos/* properties */
	, InternalEnumerator_1_t24796_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24796_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24796_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24796_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24796_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24796_1_0_0/* this_arg */
	, InternalEnumerator_1_t24796_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24796_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24796_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24796)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo ICollection_1_get_Count_m272023_MethodInfo;
static PropertyInfo ICollection_1_t36932____Count_PropertyInfo = 
{
	&ICollection_1_t36932_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272023_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272024_MethodInfo;
static PropertyInfo ICollection_1_t36932____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36932_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272024_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36932_PropertyInfos[] =
{
	&ICollection_1_t36932____Count_PropertyInfo,
	&ICollection_1_t36932____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272023_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272024_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
static ParameterInfo ICollection_1_t36932_ICollection_1_Add_m272025_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t8007_0_0_0},
};
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272025_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36932_ICollection_1_Add_m272025_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272026_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
static ParameterInfo ICollection_1_t36932_ICollection_1_Contains_m272027_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t8007_0_0_0},
};
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272027_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36932_ICollection_1_Contains_m272027_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibVersionAttributeU5BU5D_t25326_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36932_ICollection_1_CopyTo_m272028_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttributeU5BU5D_t25326_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272028_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36932_ICollection_1_CopyTo_m272028_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
static ParameterInfo ICollection_1_t36932_ICollection_1_Remove_m272029_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t8007_0_0_0},
};
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272029_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36932_ICollection_1_Remove_m272029_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36932_MethodInfos[] =
{
	&ICollection_1_get_Count_m272023_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272024_MethodInfo,
	&ICollection_1_Add_m272025_MethodInfo,
	&ICollection_1_Clear_m272026_MethodInfo,
	&ICollection_1_Contains_m272027_MethodInfo,
	&ICollection_1_CopyTo_m272028_MethodInfo,
	&ICollection_1_Remove_m272029_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36934_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36932_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36934_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36932_0_0_0;
extern Il2CppType ICollection_1_t36932_1_0_0;
struct ICollection_1_t36932;
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36932_GenericClass;
TypeInfo ICollection_1_t36932_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36932_MethodInfos/* methods */
	, ICollection_1_t36932_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36932_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36932_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36932_0_0_0/* byval_arg */
	, &ICollection_1_t36932_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36932_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36934_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern TypeInfo IEnumerable_1_t36934_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29254_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272030_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36934_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29254_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36934_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272030_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36934_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36934_0_0_0;
extern Il2CppType IEnumerable_1_t36934_1_0_0;
struct IEnumerable_1_t36934;
extern TypeInfo IEnumerable_1_t36934_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36934_GenericClass;
TypeInfo IEnumerable_1_t36934_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36934_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36934_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36934_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36934_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36934_0_0_0/* byval_arg */
	, &IEnumerable_1_t36934_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36934_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36933_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>
extern MethodInfo IList_1_get_Item_m272031_MethodInfo;
extern MethodInfo IList_1_set_Item_m272032_MethodInfo;
static PropertyInfo IList_1_t36933____Item_PropertyInfo = 
{
	&IList_1_t36933_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272031_MethodInfo/* get */
	, &IList_1_set_Item_m272032_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36933_PropertyInfos[] =
{
	&IList_1_t36933____Item_PropertyInfo,
	NULL
};
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
static ParameterInfo IList_1_t36933_IList_1_IndexOf_m272033_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t8007_0_0_0},
};
extern TypeInfo IList_1_t36933_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272033_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36933_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36933_IList_1_IndexOf_m272033_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
static ParameterInfo IList_1_t36933_IList_1_Insert_m272034_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t8007_0_0_0},
};
extern TypeInfo IList_1_t36933_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272034_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36933_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36933_IList_1_Insert_m272034_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36933_IList_1_RemoveAt_m272035_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36933_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272035_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36933_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36933_IList_1_RemoveAt_m272035_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36933_IList_1_get_Item_m272031_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36933_il2cpp_TypeInfo;
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272031_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36933_il2cpp_TypeInfo/* declaring_type */
	, &TypeLibVersionAttribute_t8007_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36933_IList_1_get_Item_m272031_ParameterInfos/* parameters */
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
extern Il2CppType TypeLibVersionAttribute_t8007_0_0_0;
static ParameterInfo IList_1_t36933_IList_1_set_Item_m272032_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &TypeLibVersionAttribute_t8007_0_0_0},
};
extern TypeInfo IList_1_t36933_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.TypeLibVersionAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272032_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36933_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36933_IList_1_set_Item_m272032_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36933_MethodInfos[] =
{
	&IList_1_IndexOf_m272033_MethodInfo,
	&IList_1_Insert_m272034_MethodInfo,
	&IList_1_RemoveAt_m272035_MethodInfo,
	&IList_1_get_Item_m272031_MethodInfo,
	&IList_1_set_Item_m272032_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36932_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36934_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36933_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36932_il2cpp_TypeInfo,
	&IEnumerable_1_t36934_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36933_0_0_0;
extern Il2CppType IList_1_t36933_1_0_0;
struct IList_1_t36933;
extern TypeInfo IList_1_t36933_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36933_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36933_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36933_MethodInfos/* methods */
	, IList_1_t36933_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36933_il2cpp_TypeInfo/* element_class */
	, IList_1_t36933_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36933_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36933_0_0_0/* byval_arg */
	, &IList_1_t36933_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36933_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29255_il2cpp_TypeInfo;

// System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute
#include "mscorlib_System_Runtime_InteropServices_UnmanagedFunctionPoi.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272036_MethodInfo;
static PropertyInfo IEnumerator_1_t29255____Current_PropertyInfo = 
{
	&IEnumerator_1_t29255_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272036_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29255_PropertyInfos[] =
{
	&IEnumerator_1_t29255____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29255_il2cpp_TypeInfo;
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272036_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29255_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedFunctionPointerAttribute_t7403_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29255_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272036_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29255_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29255_0_0_0;
extern Il2CppType IEnumerator_1_t29255_1_0_0;
struct IEnumerator_1_t29255;
extern TypeInfo IEnumerator_1_t29255_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29255_GenericClass;
TypeInfo IEnumerator_1_t29255_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29255_MethodInfos/* methods */
	, IEnumerator_1_t29255_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29255_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29255_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29255_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29255_0_0_0/* byval_arg */
	, &IEnumerator_1_t29255_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29255_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3004.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3004MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern TypeInfo UnmanagedFunctionPointerAttribute_t7403_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179927_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnmanagedFunctionPointerAttribute_t7403_m223170_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisUnmanagedFunctionPointerAttribute_t7403_m223170(__this, p0, method) (UnmanagedFunctionPointerAttribute_t7403 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisUnmanagedFunctionPointerAttribute_t7403_m223170_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24797____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24797, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24797____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24797, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24797_FieldInfos[] =
{
	&InternalEnumerator_1_t24797____array_FieldInfo,
	&InternalEnumerator_1_t24797____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179924_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24797____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24797_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179924_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179927_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24797____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24797_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179927_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24797_PropertyInfos[] =
{
	&InternalEnumerator_1_t24797____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24797____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24797_InternalEnumerator_1__ctor_m179922_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179922_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24797_InternalEnumerator_1__ctor_m179922_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179923_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179924_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179925_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179926_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179927_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedFunctionPointerAttribute_t7403_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24797_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179922_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179923_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179924_MethodInfo,
	&InternalEnumerator_1_Dispose_m179925_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179926_MethodInfo,
	&InternalEnumerator_1_get_Current_m179927_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179924_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179926_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179923_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179925_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179927_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24797_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179924_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179926_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179923_MethodInfo,
	&InternalEnumerator_1_Dispose_m179925_MethodInfo,
	&InternalEnumerator_1_get_Current_m179927_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29255_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24797_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29255_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29255_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24797_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29255_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179927_MethodInfo;
extern TypeInfo UnmanagedFunctionPointerAttribute_t7403_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnmanagedFunctionPointerAttribute_t7403_m223170_MethodInfo;
static void* InternalEnumerator_1_t24797_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179927_MethodInfo,
	&UnmanagedFunctionPointerAttribute_t7403_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisUnmanagedFunctionPointerAttribute_t7403_m223170_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24797_0_0_0;
extern Il2CppType InternalEnumerator_1_t24797_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24797_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24797_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24797_MethodInfos/* methods */
	, InternalEnumerator_1_t24797_PropertyInfos/* properties */
	, InternalEnumerator_1_t24797_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24797_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24797_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24797_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24797_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24797_1_0_0/* this_arg */
	, InternalEnumerator_1_t24797_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24797_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24797_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24797)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>
extern MethodInfo ICollection_1_get_Count_m272037_MethodInfo;
static PropertyInfo ICollection_1_t36935____Count_PropertyInfo = 
{
	&ICollection_1_t36935_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272037_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272038_MethodInfo;
static PropertyInfo ICollection_1_t36935____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36935_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272038_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36935_PropertyInfos[] =
{
	&ICollection_1_t36935____Count_PropertyInfo,
	&ICollection_1_t36935____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272037_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272038_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
static ParameterInfo ICollection_1_t36935_ICollection_1_Add_m272039_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedFunctionPointerAttribute_t7403_0_0_0},
};
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272039_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36935_ICollection_1_Add_m272039_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272040_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
static ParameterInfo ICollection_1_t36935_ICollection_1_Contains_m272041_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedFunctionPointerAttribute_t7403_0_0_0},
};
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272041_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36935_ICollection_1_Contains_m272041_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedFunctionPointerAttributeU5BU5D_t25327_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36935_ICollection_1_CopyTo_m272042_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedFunctionPointerAttributeU5BU5D_t25327_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272042_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36935_ICollection_1_CopyTo_m272042_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
static ParameterInfo ICollection_1_t36935_ICollection_1_Remove_m272043_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedFunctionPointerAttribute_t7403_0_0_0},
};
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272043_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36935_ICollection_1_Remove_m272043_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36935_MethodInfos[] =
{
	&ICollection_1_get_Count_m272037_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272038_MethodInfo,
	&ICollection_1_Add_m272039_MethodInfo,
	&ICollection_1_Clear_m272040_MethodInfo,
	&ICollection_1_Contains_m272041_MethodInfo,
	&ICollection_1_CopyTo_m272042_MethodInfo,
	&ICollection_1_Remove_m272043_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36937_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36935_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36937_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36935_0_0_0;
extern Il2CppType ICollection_1_t36935_1_0_0;
struct ICollection_1_t36935;
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36935_GenericClass;
TypeInfo ICollection_1_t36935_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36935_MethodInfos/* methods */
	, ICollection_1_t36935_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36935_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36935_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36935_0_0_0/* byval_arg */
	, &ICollection_1_t36935_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36935_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36937_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>
extern TypeInfo IEnumerable_1_t36937_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29255_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272044_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36937_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29255_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36937_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272044_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36937_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36937_0_0_0;
extern Il2CppType IEnumerable_1_t36937_1_0_0;
struct IEnumerable_1_t36937;
extern TypeInfo IEnumerable_1_t36937_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36937_GenericClass;
TypeInfo IEnumerable_1_t36937_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36937_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36937_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36937_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36937_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36937_0_0_0/* byval_arg */
	, &IEnumerable_1_t36937_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36937_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36936_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>
extern MethodInfo IList_1_get_Item_m272045_MethodInfo;
extern MethodInfo IList_1_set_Item_m272046_MethodInfo;
static PropertyInfo IList_1_t36936____Item_PropertyInfo = 
{
	&IList_1_t36936_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272045_MethodInfo/* get */
	, &IList_1_set_Item_m272046_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36936_PropertyInfos[] =
{
	&IList_1_t36936____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
static ParameterInfo IList_1_t36936_IList_1_IndexOf_m272047_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedFunctionPointerAttribute_t7403_0_0_0},
};
extern TypeInfo IList_1_t36936_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272047_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36936_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36936_IList_1_IndexOf_m272047_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
static ParameterInfo IList_1_t36936_IList_1_Insert_m272048_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnmanagedFunctionPointerAttribute_t7403_0_0_0},
};
extern TypeInfo IList_1_t36936_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272048_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36936_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36936_IList_1_Insert_m272048_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36936_IList_1_RemoveAt_m272049_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36936_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272049_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36936_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36936_IList_1_RemoveAt_m272049_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36936_IList_1_get_Item_m272045_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36936_il2cpp_TypeInfo;
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272045_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36936_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedFunctionPointerAttribute_t7403_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36936_IList_1_get_Item_m272045_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedFunctionPointerAttribute_t7403_0_0_0;
static ParameterInfo IList_1_t36936_IList_1_set_Item_m272046_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnmanagedFunctionPointerAttribute_t7403_0_0_0},
};
extern TypeInfo IList_1_t36936_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedFunctionPointerAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272046_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36936_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36936_IList_1_set_Item_m272046_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36936_MethodInfos[] =
{
	&IList_1_IndexOf_m272047_MethodInfo,
	&IList_1_Insert_m272048_MethodInfo,
	&IList_1_RemoveAt_m272049_MethodInfo,
	&IList_1_get_Item_m272045_MethodInfo,
	&IList_1_set_Item_m272046_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36935_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36937_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36936_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36935_il2cpp_TypeInfo,
	&IEnumerable_1_t36937_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36936_0_0_0;
extern Il2CppType IList_1_t36936_1_0_0;
struct IList_1_t36936;
extern TypeInfo IList_1_t36936_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36936_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36936_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36936_MethodInfos/* methods */
	, IList_1_t36936_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36936_il2cpp_TypeInfo/* element_class */
	, IList_1_t36936_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36936_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36936_0_0_0/* byval_arg */
	, &IList_1_t36936_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36936_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29256_il2cpp_TypeInfo;

// System.Runtime.InteropServices.UnmanagedType
#include "mscorlib_System_Runtime_InteropServices_UnmanagedType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo IEnumerator_1_get_Current_m272050_MethodInfo;
static PropertyInfo IEnumerator_1_t29256____Current_PropertyInfo = 
{
	&IEnumerator_1_t29256_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272050_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29256_PropertyInfos[] =
{
	&IEnumerator_1_t29256____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29256_il2cpp_TypeInfo;
extern Il2CppType UnmanagedType_t8008_0_0_0;
extern void* RuntimeInvoker_UnmanagedType_t8008 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272050_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29256_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedType_t8008_0_0_0/* return_type */
	, RuntimeInvoker_UnmanagedType_t8008/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29256_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272050_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29256_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29256_0_0_0;
extern Il2CppType IEnumerator_1_t29256_1_0_0;
struct IEnumerator_1_t29256;
extern TypeInfo IEnumerator_1_t29256_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29256_GenericClass;
TypeInfo IEnumerator_1_t29256_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29256_MethodInfos/* methods */
	, IEnumerator_1_t29256_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29256_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29256_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29256_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29256_0_0_0/* byval_arg */
	, &IEnumerator_1_t29256_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29256_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3005.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3005MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern TypeInfo UnmanagedType_t8008_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179933_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUnmanagedType_t8008_m223181_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.UnmanagedType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.InteropServices.UnmanagedType>(System.Int32)
 int32_t Array_InternalArray__get_Item_TisUnmanagedType_t8008_m223181 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisUnmanagedType_t8008_m223181_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179928_MethodInfo;
 void InternalEnumerator_1__ctor_m179928 (InternalEnumerator_1_t24798 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179929_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179929 (InternalEnumerator_1_t24798 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930 (InternalEnumerator_1_t24798 * __this, MethodInfo* method){
	{
		int32_t L_0 = InternalEnumerator_1_get_Current_m179933(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179933_MethodInfo);
		int32_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&UnmanagedType_t8008_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179931_MethodInfo;
 void InternalEnumerator_1_Dispose_m179931 (InternalEnumerator_1_t24798 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179932_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179932 (InternalEnumerator_1_t24798 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179933_MethodInfo;
 int32_t InternalEnumerator_1_get_Current_m179933 (InternalEnumerator_1_t24798 * __this, MethodInfo* method){
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
		int32_t L_8 = Array_InternalArray__get_Item_TisUnmanagedType_t8008_m223181(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisUnmanagedType_t8008_m223181_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24798____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24798, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24798____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24798, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24798_FieldInfos[] =
{
	&InternalEnumerator_1_t24798____array_FieldInfo,
	&InternalEnumerator_1_t24798____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24798____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24798_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179933_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24798____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24798_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179933_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24798_PropertyInfos[] =
{
	&InternalEnumerator_1_t24798____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24798____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24798_InternalEnumerator_1__ctor_m179928_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179928_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179928/* method */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24798_InternalEnumerator_1__ctor_m179928_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179929_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179929/* method */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930/* method */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179931_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179931/* method */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179932_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179932/* method */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern Il2CppType UnmanagedType_t8008_0_0_0;
extern void* RuntimeInvoker_UnmanagedType_t8008 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.InteropServices.UnmanagedType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179933_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179933/* method */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedType_t8008_0_0_0/* return_type */
	, RuntimeInvoker_UnmanagedType_t8008/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24798_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179928_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179929_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930_MethodInfo,
	&InternalEnumerator_1_Dispose_m179931_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179932_MethodInfo,
	&InternalEnumerator_1_get_Current_m179933_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179932_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179929_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179931_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179933_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24798_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179930_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179932_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179929_MethodInfo,
	&InternalEnumerator_1_Dispose_m179931_MethodInfo,
	&InternalEnumerator_1_get_Current_m179933_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29256_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24798_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29256_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29256_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24798_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29256_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24798_0_0_0;
extern Il2CppType InternalEnumerator_1_t24798_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24798_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24798_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24798_MethodInfos/* methods */
	, InternalEnumerator_1_t24798_PropertyInfos/* properties */
	, InternalEnumerator_1_t24798_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24798_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24798_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24798_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24798_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24798_1_0_0/* this_arg */
	, InternalEnumerator_1_t24798_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24798_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24798)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo ICollection_1_get_Count_m272051_MethodInfo;
static PropertyInfo ICollection_1_t36938____Count_PropertyInfo = 
{
	&ICollection_1_t36938_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272051_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272052_MethodInfo;
static PropertyInfo ICollection_1_t36938____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36938_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272052_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36938_PropertyInfos[] =
{
	&ICollection_1_t36938____Count_PropertyInfo,
	&ICollection_1_t36938____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_Count()
MethodInfo ICollection_1_get_Count_m272051_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272052_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UnmanagedType_t8008_0_0_0;
static ParameterInfo ICollection_1_t36938_ICollection_1_Add_m272053_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t8008_0_0_0},
};
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Add(T)
MethodInfo ICollection_1_Add_m272053_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, ICollection_1_t36938_ICollection_1_Add_m272053_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Clear()
MethodInfo ICollection_1_Clear_m272054_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UnmanagedType_t8008_0_0_0;
static ParameterInfo ICollection_1_t36938_ICollection_1_Contains_m272055_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t8008_0_0_0},
};
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Contains(T)
MethodInfo ICollection_1_Contains_m272055_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36938_ICollection_1_Contains_m272055_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedTypeU5BU5D_t25328_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36938_ICollection_1_CopyTo_m272056_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedTypeU5BU5D_t25328_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272056_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36938_ICollection_1_CopyTo_m272056_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedType_t8008_0_0_0;
static ParameterInfo ICollection_1_t36938_ICollection_1_Remove_m272057_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t8008_0_0_0},
};
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.InteropServices.UnmanagedType>::Remove(T)
MethodInfo ICollection_1_Remove_m272057_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Int32_t73/* invoker_method */
	, ICollection_1_t36938_ICollection_1_Remove_m272057_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36938_MethodInfos[] =
{
	&ICollection_1_get_Count_m272051_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272052_MethodInfo,
	&ICollection_1_Add_m272053_MethodInfo,
	&ICollection_1_Clear_m272054_MethodInfo,
	&ICollection_1_Contains_m272055_MethodInfo,
	&ICollection_1_CopyTo_m272056_MethodInfo,
	&ICollection_1_Remove_m272057_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36940_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36938_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36940_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36938_0_0_0;
extern Il2CppType ICollection_1_t36938_1_0_0;
struct ICollection_1_t36938;
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36938_GenericClass;
TypeInfo ICollection_1_t36938_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36938_MethodInfos/* methods */
	, ICollection_1_t36938_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36938_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36938_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36938_0_0_0/* byval_arg */
	, &ICollection_1_t36938_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36938_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36940_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>
extern TypeInfo IEnumerable_1_t36940_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29256_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.InteropServices.UnmanagedType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272058_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36940_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29256_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36940_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272058_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36940_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36940_0_0_0;
extern Il2CppType IEnumerable_1_t36940_1_0_0;
struct IEnumerable_1_t36940;
extern TypeInfo IEnumerable_1_t36940_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36940_GenericClass;
TypeInfo IEnumerable_1_t36940_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36940_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36940_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36940_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36940_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36940_0_0_0/* byval_arg */
	, &IEnumerable_1_t36940_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36940_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36939_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>
extern MethodInfo IList_1_get_Item_m272059_MethodInfo;
extern MethodInfo IList_1_set_Item_m272060_MethodInfo;
static PropertyInfo IList_1_t36939____Item_PropertyInfo = 
{
	&IList_1_t36939_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272059_MethodInfo/* get */
	, &IList_1_set_Item_m272060_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36939_PropertyInfos[] =
{
	&IList_1_t36939____Item_PropertyInfo,
	NULL
};
extern Il2CppType UnmanagedType_t8008_0_0_0;
static ParameterInfo IList_1_t36939_IList_1_IndexOf_m272061_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t8008_0_0_0},
};
extern TypeInfo IList_1_t36939_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272061_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36939_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36939_IList_1_IndexOf_m272061_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedType_t8008_0_0_0;
static ParameterInfo IList_1_t36939_IList_1_Insert_m272062_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t8008_0_0_0},
};
extern TypeInfo IList_1_t36939_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272062_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36939_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36939_IList_1_Insert_m272062_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36939_IList_1_RemoveAt_m272063_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36939_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272063_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36939_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36939_IList_1_RemoveAt_m272063_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36939_IList_1_get_Item_m272059_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36939_il2cpp_TypeInfo;
extern Il2CppType UnmanagedType_t8008_0_0_0;
extern void* RuntimeInvoker_UnmanagedType_t8008_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272059_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36939_il2cpp_TypeInfo/* declaring_type */
	, &UnmanagedType_t8008_0_0_0/* return_type */
	, RuntimeInvoker_UnmanagedType_t8008_Int32_t73/* invoker_method */
	, IList_1_t36939_IList_1_get_Item_m272059_ParameterInfos/* parameters */
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
extern Il2CppType UnmanagedType_t8008_0_0_0;
static ParameterInfo IList_1_t36939_IList_1_set_Item_m272060_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UnmanagedType_t8008_0_0_0},
};
extern TypeInfo IList_1_t36939_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.InteropServices.UnmanagedType>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272060_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36939_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Int32_t73/* invoker_method */
	, IList_1_t36939_IList_1_set_Item_m272060_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36939_MethodInfos[] =
{
	&IList_1_IndexOf_m272061_MethodInfo,
	&IList_1_Insert_m272062_MethodInfo,
	&IList_1_RemoveAt_m272063_MethodInfo,
	&IList_1_get_Item_m272059_MethodInfo,
	&IList_1_set_Item_m272060_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36938_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36940_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36939_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36938_il2cpp_TypeInfo,
	&IEnumerable_1_t36940_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36939_0_0_0;
extern Il2CppType IList_1_t36939_1_0_0;
struct IList_1_t36939;
extern TypeInfo IList_1_t36939_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36939_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36939_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36939_MethodInfos/* methods */
	, IList_1_t36939_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36939_il2cpp_TypeInfo/* element_class */
	, IList_1_t36939_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36939_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36939_0_0_0/* byval_arg */
	, &IList_1_t36939_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36939_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29257_il2cpp_TypeInfo;

// System.Runtime.Remoting.Activation.UrlAttribute
#include "mscorlib_System_Runtime_Remoting_Activation_UrlAttribute.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272064_MethodInfo;
static PropertyInfo IEnumerator_1_t29257____Current_PropertyInfo = 
{
	&IEnumerator_1_t29257_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272064_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29257_PropertyInfos[] =
{
	&IEnumerator_1_t29257____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29257_il2cpp_TypeInfo;
extern Il2CppType UrlAttribute_t8016_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272064_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29257_il2cpp_TypeInfo/* declaring_type */
	, &UrlAttribute_t8016_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29257_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272064_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29257_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29257_0_0_0;
extern Il2CppType IEnumerator_1_t29257_1_0_0;
struct IEnumerator_1_t29257;
extern TypeInfo IEnumerator_1_t29257_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29257_GenericClass;
TypeInfo IEnumerator_1_t29257_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29257_MethodInfos/* methods */
	, IEnumerator_1_t29257_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29257_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29257_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29257_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29257_0_0_0/* byval_arg */
	, &IEnumerator_1_t29257_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29257_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3006.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3006MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern TypeInfo UrlAttribute_t8016_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179939_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUrlAttribute_t8016_m223192_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Activation.UrlAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Activation.UrlAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisUrlAttribute_t8016_m223192(__this, p0, method) (UrlAttribute_t8016 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisUrlAttribute_t8016_m223192_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24799____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24799, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24799____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24799, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24799_FieldInfos[] =
{
	&InternalEnumerator_1_t24799____array_FieldInfo,
	&InternalEnumerator_1_t24799____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179936_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24799____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24799_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179936_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179939_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24799____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24799_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179939_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24799_PropertyInfos[] =
{
	&InternalEnumerator_1_t24799____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24799____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24799_InternalEnumerator_1__ctor_m179934_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179934_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24799_InternalEnumerator_1__ctor_m179934_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179935_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179936_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179937_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179938_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern Il2CppType UrlAttribute_t8016_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179939_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* declaring_type */
	, &UrlAttribute_t8016_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24799_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179934_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179935_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179936_MethodInfo,
	&InternalEnumerator_1_Dispose_m179937_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179938_MethodInfo,
	&InternalEnumerator_1_get_Current_m179939_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179936_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179938_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179935_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179937_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179939_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24799_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179936_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179938_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179935_MethodInfo,
	&InternalEnumerator_1_Dispose_m179937_MethodInfo,
	&InternalEnumerator_1_get_Current_m179939_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29257_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24799_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29257_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29257_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24799_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29257_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179939_MethodInfo;
extern TypeInfo UrlAttribute_t8016_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisUrlAttribute_t8016_m223192_MethodInfo;
static void* InternalEnumerator_1_t24799_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179939_MethodInfo,
	&UrlAttribute_t8016_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisUrlAttribute_t8016_m223192_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24799_0_0_0;
extern Il2CppType InternalEnumerator_1_t24799_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24799_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24799_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24799_MethodInfos/* methods */
	, InternalEnumerator_1_t24799_PropertyInfos/* properties */
	, InternalEnumerator_1_t24799_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24799_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24799_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24799_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24799_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24799_1_0_0/* this_arg */
	, InternalEnumerator_1_t24799_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24799_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24799_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24799)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo ICollection_1_get_Count_m272065_MethodInfo;
static PropertyInfo ICollection_1_t36941____Count_PropertyInfo = 
{
	&ICollection_1_t36941_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272065_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272066_MethodInfo;
static PropertyInfo ICollection_1_t36941____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36941_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272066_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36941_PropertyInfos[] =
{
	&ICollection_1_t36941____Count_PropertyInfo,
	&ICollection_1_t36941____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272065_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272066_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UrlAttribute_t8016_0_0_0;
static ParameterInfo ICollection_1_t36941_ICollection_1_Add_m272067_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t8016_0_0_0},
};
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272067_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36941_ICollection_1_Add_m272067_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272068_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType UrlAttribute_t8016_0_0_0;
static ParameterInfo ICollection_1_t36941_ICollection_1_Contains_m272069_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t8016_0_0_0},
};
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272069_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36941_ICollection_1_Contains_m272069_ParameterInfos/* parameters */
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
extern Il2CppType UrlAttributeU5BU5D_t25329_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36941_ICollection_1_CopyTo_m272070_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttributeU5BU5D_t25329_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272070_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36941_ICollection_1_CopyTo_m272070_ParameterInfos/* parameters */
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
extern Il2CppType UrlAttribute_t8016_0_0_0;
static ParameterInfo ICollection_1_t36941_ICollection_1_Remove_m272071_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t8016_0_0_0},
};
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Activation.UrlAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272071_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36941_ICollection_1_Remove_m272071_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36941_MethodInfos[] =
{
	&ICollection_1_get_Count_m272065_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272066_MethodInfo,
	&ICollection_1_Add_m272067_MethodInfo,
	&ICollection_1_Clear_m272068_MethodInfo,
	&ICollection_1_Contains_m272069_MethodInfo,
	&ICollection_1_CopyTo_m272070_MethodInfo,
	&ICollection_1_Remove_m272071_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36943_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36941_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36943_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36941_0_0_0;
extern Il2CppType ICollection_1_t36941_1_0_0;
struct ICollection_1_t36941;
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36941_GenericClass;
TypeInfo ICollection_1_t36941_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36941_MethodInfos/* methods */
	, ICollection_1_t36941_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36941_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36941_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36941_0_0_0/* byval_arg */
	, &ICollection_1_t36941_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36941_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36943_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern TypeInfo IEnumerable_1_t36943_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29257_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Activation.UrlAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272072_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36943_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29257_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36943_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272072_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36943_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36943_0_0_0;
extern Il2CppType IEnumerable_1_t36943_1_0_0;
struct IEnumerable_1_t36943;
extern TypeInfo IEnumerable_1_t36943_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36943_GenericClass;
TypeInfo IEnumerable_1_t36943_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36943_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36943_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36943_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36943_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36943_0_0_0/* byval_arg */
	, &IEnumerable_1_t36943_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36943_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36942_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>
extern MethodInfo IList_1_get_Item_m272073_MethodInfo;
extern MethodInfo IList_1_set_Item_m272074_MethodInfo;
static PropertyInfo IList_1_t36942____Item_PropertyInfo = 
{
	&IList_1_t36942_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272073_MethodInfo/* get */
	, &IList_1_set_Item_m272074_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36942_PropertyInfos[] =
{
	&IList_1_t36942____Item_PropertyInfo,
	NULL
};
extern Il2CppType UrlAttribute_t8016_0_0_0;
static ParameterInfo IList_1_t36942_IList_1_IndexOf_m272075_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t8016_0_0_0},
};
extern TypeInfo IList_1_t36942_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272075_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36942_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36942_IList_1_IndexOf_m272075_ParameterInfos/* parameters */
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
extern Il2CppType UrlAttribute_t8016_0_0_0;
static ParameterInfo IList_1_t36942_IList_1_Insert_m272076_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t8016_0_0_0},
};
extern TypeInfo IList_1_t36942_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272076_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36942_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36942_IList_1_Insert_m272076_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36942_IList_1_RemoveAt_m272077_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36942_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272077_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36942_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36942_IList_1_RemoveAt_m272077_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36942_IList_1_get_Item_m272073_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36942_il2cpp_TypeInfo;
extern Il2CppType UrlAttribute_t8016_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272073_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36942_il2cpp_TypeInfo/* declaring_type */
	, &UrlAttribute_t8016_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36942_IList_1_get_Item_m272073_ParameterInfos/* parameters */
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
extern Il2CppType UrlAttribute_t8016_0_0_0;
static ParameterInfo IList_1_t36942_IList_1_set_Item_m272074_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &UrlAttribute_t8016_0_0_0},
};
extern TypeInfo IList_1_t36942_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Activation.UrlAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272074_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36942_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36942_IList_1_set_Item_m272074_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36942_MethodInfos[] =
{
	&IList_1_IndexOf_m272075_MethodInfo,
	&IList_1_Insert_m272076_MethodInfo,
	&IList_1_RemoveAt_m272077_MethodInfo,
	&IList_1_get_Item_m272073_MethodInfo,
	&IList_1_set_Item_m272074_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36941_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36943_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36942_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36941_il2cpp_TypeInfo,
	&IEnumerable_1_t36943_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36942_0_0_0;
extern Il2CppType IList_1_t36942_1_0_0;
struct IList_1_t36942;
extern TypeInfo IList_1_t36942_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36942_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36942_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36942_MethodInfos/* methods */
	, IList_1_t36942_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36942_il2cpp_TypeInfo/* element_class */
	, IList_1_t36942_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36942_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36942_0_0_0/* byval_arg */
	, &IList_1_t36942_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36942_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;

// System.Runtime.Remoting.Contexts.ContextAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_ContextAttribute.h"


// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo ICollection_1_get_Count_m272078_MethodInfo;
static PropertyInfo ICollection_1_t36944____Count_PropertyInfo = 
{
	&ICollection_1_t36944_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272078_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272079_MethodInfo;
static PropertyInfo ICollection_1_t36944____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36944_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272079_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36944_PropertyInfos[] =
{
	&ICollection_1_t36944____Count_PropertyInfo,
	&ICollection_1_t36944____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272078_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272079_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ContextAttribute_t8017_0_0_0;
static ParameterInfo ICollection_1_t36944_ICollection_1_Add_m272080_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t8017_0_0_0},
};
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272080_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36944_ICollection_1_Add_m272080_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272081_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ContextAttribute_t8017_0_0_0;
static ParameterInfo ICollection_1_t36944_ICollection_1_Contains_m272082_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t8017_0_0_0},
};
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272082_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36944_ICollection_1_Contains_m272082_ParameterInfos/* parameters */
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
extern Il2CppType ContextAttributeU5BU5D_t25330_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36944_ICollection_1_CopyTo_m272083_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttributeU5BU5D_t25330_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272083_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36944_ICollection_1_CopyTo_m272083_ParameterInfos/* parameters */
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
extern Il2CppType ContextAttribute_t8017_0_0_0;
static ParameterInfo ICollection_1_t36944_ICollection_1_Remove_m272084_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t8017_0_0_0},
};
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272084_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36944_ICollection_1_Remove_m272084_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36944_MethodInfos[] =
{
	&ICollection_1_get_Count_m272078_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272079_MethodInfo,
	&ICollection_1_Add_m272080_MethodInfo,
	&ICollection_1_Clear_m272081_MethodInfo,
	&ICollection_1_Contains_m272082_MethodInfo,
	&ICollection_1_CopyTo_m272083_MethodInfo,
	&ICollection_1_Remove_m272084_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36946_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36944_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36946_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36944_0_0_0;
extern Il2CppType ICollection_1_t36944_1_0_0;
struct ICollection_1_t36944;
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36944_GenericClass;
TypeInfo ICollection_1_t36944_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36944_MethodInfos/* methods */
	, ICollection_1_t36944_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36944_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36944_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36944_0_0_0/* byval_arg */
	, &ICollection_1_t36944_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36944_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36946_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern TypeInfo IEnumerable_1_t36946_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29258_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.ContextAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272085_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36946_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29258_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36946_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272085_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36946_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36946_0_0_0;
extern Il2CppType IEnumerable_1_t36946_1_0_0;
struct IEnumerable_1_t36946;
extern TypeInfo IEnumerable_1_t36946_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36946_GenericClass;
TypeInfo IEnumerable_1_t36946_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36946_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36946_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36946_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36946_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36946_0_0_0/* byval_arg */
	, &IEnumerable_1_t36946_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36946_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29258_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272086_MethodInfo;
static PropertyInfo IEnumerator_1_t29258____Current_PropertyInfo = 
{
	&IEnumerator_1_t29258_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272086_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29258_PropertyInfos[] =
{
	&IEnumerator_1_t29258____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29258_il2cpp_TypeInfo;
extern Il2CppType ContextAttribute_t8017_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272086_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29258_il2cpp_TypeInfo/* declaring_type */
	, &ContextAttribute_t8017_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29258_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272086_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29258_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29258_0_0_0;
extern Il2CppType IEnumerator_1_t29258_1_0_0;
struct IEnumerator_1_t29258;
extern TypeInfo IEnumerator_1_t29258_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29258_GenericClass;
TypeInfo IEnumerator_1_t29258_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29258_MethodInfos/* methods */
	, IEnumerator_1_t29258_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29258_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29258_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29258_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29258_0_0_0/* byval_arg */
	, &IEnumerator_1_t29258_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29258_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3007.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3007MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern TypeInfo ContextAttribute_t8017_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179945_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContextAttribute_t8017_m223203_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.ContextAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.ContextAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisContextAttribute_t8017_m223203(__this, p0, method) (ContextAttribute_t8017 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisContextAttribute_t8017_m223203_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24800____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24800, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24800____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24800, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24800_FieldInfos[] =
{
	&InternalEnumerator_1_t24800____array_FieldInfo,
	&InternalEnumerator_1_t24800____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179942_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24800____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24800_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179942_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179945_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24800____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24800_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179945_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24800_PropertyInfos[] =
{
	&InternalEnumerator_1_t24800____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24800____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24800_InternalEnumerator_1__ctor_m179940_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179940_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24800_InternalEnumerator_1__ctor_m179940_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179941_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179942_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179943_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179944_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern Il2CppType ContextAttribute_t8017_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179945_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* declaring_type */
	, &ContextAttribute_t8017_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24800_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179940_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179941_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179942_MethodInfo,
	&InternalEnumerator_1_Dispose_m179943_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179944_MethodInfo,
	&InternalEnumerator_1_get_Current_m179945_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179942_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179944_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179941_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179943_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179945_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24800_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179942_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179944_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179941_MethodInfo,
	&InternalEnumerator_1_Dispose_m179943_MethodInfo,
	&InternalEnumerator_1_get_Current_m179945_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29258_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24800_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29258_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29258_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24800_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29258_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179945_MethodInfo;
extern TypeInfo ContextAttribute_t8017_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisContextAttribute_t8017_m223203_MethodInfo;
static void* InternalEnumerator_1_t24800_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179945_MethodInfo,
	&ContextAttribute_t8017_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisContextAttribute_t8017_m223203_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24800_0_0_0;
extern Il2CppType InternalEnumerator_1_t24800_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24800_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24800_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24800_MethodInfos/* methods */
	, InternalEnumerator_1_t24800_PropertyInfos/* properties */
	, InternalEnumerator_1_t24800_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24800_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24800_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24800_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24800_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24800_1_0_0/* this_arg */
	, InternalEnumerator_1_t24800_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24800_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24800_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24800)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t36945_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>
extern MethodInfo IList_1_get_Item_m272087_MethodInfo;
extern MethodInfo IList_1_set_Item_m272088_MethodInfo;
static PropertyInfo IList_1_t36945____Item_PropertyInfo = 
{
	&IList_1_t36945_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272087_MethodInfo/* get */
	, &IList_1_set_Item_m272088_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36945_PropertyInfos[] =
{
	&IList_1_t36945____Item_PropertyInfo,
	NULL
};
extern Il2CppType ContextAttribute_t8017_0_0_0;
static ParameterInfo IList_1_t36945_IList_1_IndexOf_m272089_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t8017_0_0_0},
};
extern TypeInfo IList_1_t36945_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272089_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36945_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36945_IList_1_IndexOf_m272089_ParameterInfos/* parameters */
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
extern Il2CppType ContextAttribute_t8017_0_0_0;
static ParameterInfo IList_1_t36945_IList_1_Insert_m272090_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t8017_0_0_0},
};
extern TypeInfo IList_1_t36945_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272090_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36945_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36945_IList_1_Insert_m272090_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36945_IList_1_RemoveAt_m272091_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36945_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272091_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36945_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36945_IList_1_RemoveAt_m272091_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36945_IList_1_get_Item_m272087_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36945_il2cpp_TypeInfo;
extern Il2CppType ContextAttribute_t8017_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272087_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36945_il2cpp_TypeInfo/* declaring_type */
	, &ContextAttribute_t8017_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36945_IList_1_get_Item_m272087_ParameterInfos/* parameters */
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
extern Il2CppType ContextAttribute_t8017_0_0_0;
static ParameterInfo IList_1_t36945_IList_1_set_Item_m272088_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &ContextAttribute_t8017_0_0_0},
};
extern TypeInfo IList_1_t36945_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.ContextAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272088_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36945_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36945_IList_1_set_Item_m272088_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36945_MethodInfos[] =
{
	&IList_1_IndexOf_m272089_MethodInfo,
	&IList_1_Insert_m272090_MethodInfo,
	&IList_1_RemoveAt_m272091_MethodInfo,
	&IList_1_get_Item_m272087_MethodInfo,
	&IList_1_set_Item_m272088_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36944_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36946_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36945_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36944_il2cpp_TypeInfo,
	&IEnumerable_1_t36946_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36945_0_0_0;
extern Il2CppType IList_1_t36945_1_0_0;
struct IList_1_t36945;
extern TypeInfo IList_1_t36945_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36945_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36945_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36945_MethodInfos/* methods */
	, IList_1_t36945_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36945_il2cpp_TypeInfo/* element_class */
	, IList_1_t36945_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36945_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36945_0_0_0/* byval_arg */
	, &IList_1_t36945_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36945_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo ICollection_1_get_Count_m272092_MethodInfo;
static PropertyInfo ICollection_1_t36947____Count_PropertyInfo = 
{
	&ICollection_1_t36947_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272092_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272093_MethodInfo;
static PropertyInfo ICollection_1_t36947____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36947_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272093_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36947_PropertyInfos[] =
{
	&ICollection_1_t36947____Count_PropertyInfo,
	&ICollection_1_t36947____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272092_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272093_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContextAttribute_t8507_0_0_0;
static ParameterInfo ICollection_1_t36947_ICollection_1_Add_m272094_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t8507_0_0_0},
};
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272094_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36947_ICollection_1_Add_m272094_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272095_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContextAttribute_t8507_0_0_0;
static ParameterInfo ICollection_1_t36947_ICollection_1_Contains_m272096_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t8507_0_0_0},
};
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272096_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36947_ICollection_1_Contains_m272096_ParameterInfos/* parameters */
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
extern Il2CppType IContextAttributeU5BU5D_t8066_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36947_ICollection_1_CopyTo_m272097_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttributeU5BU5D_t8066_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272097_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36947_ICollection_1_CopyTo_m272097_ParameterInfos/* parameters */
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
extern Il2CppType IContextAttribute_t8507_0_0_0;
static ParameterInfo ICollection_1_t36947_ICollection_1_Remove_m272098_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t8507_0_0_0},
};
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272098_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36947_ICollection_1_Remove_m272098_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36947_MethodInfos[] =
{
	&ICollection_1_get_Count_m272092_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272093_MethodInfo,
	&ICollection_1_Add_m272094_MethodInfo,
	&ICollection_1_Clear_m272095_MethodInfo,
	&ICollection_1_Contains_m272096_MethodInfo,
	&ICollection_1_CopyTo_m272097_MethodInfo,
	&ICollection_1_Remove_m272098_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36949_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36947_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36949_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36947_0_0_0;
extern Il2CppType ICollection_1_t36947_1_0_0;
struct ICollection_1_t36947;
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36947_GenericClass;
TypeInfo ICollection_1_t36947_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36947_MethodInfos/* methods */
	, ICollection_1_t36947_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36947_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36947_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36947_0_0_0/* byval_arg */
	, &ICollection_1_t36947_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36947_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36949_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern TypeInfo IEnumerable_1_t36949_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29259_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272099_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36949_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29259_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36949_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272099_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36949_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36949_0_0_0;
extern Il2CppType IEnumerable_1_t36949_1_0_0;
struct IEnumerable_1_t36949;
extern TypeInfo IEnumerable_1_t36949_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36949_GenericClass;
TypeInfo IEnumerable_1_t36949_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36949_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36949_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36949_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36949_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36949_0_0_0/* byval_arg */
	, &IEnumerable_1_t36949_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36949_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29259_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272100_MethodInfo;
static PropertyInfo IEnumerator_1_t29259____Current_PropertyInfo = 
{
	&IEnumerator_1_t29259_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272100_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29259_PropertyInfos[] =
{
	&IEnumerator_1_t29259____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29259_il2cpp_TypeInfo;
extern Il2CppType IContextAttribute_t8507_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272100_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29259_il2cpp_TypeInfo/* declaring_type */
	, &IContextAttribute_t8507_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29259_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272100_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29259_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29259_0_0_0;
extern Il2CppType IEnumerator_1_t29259_1_0_0;
struct IEnumerator_1_t29259;
extern TypeInfo IEnumerator_1_t29259_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29259_GenericClass;
TypeInfo IEnumerator_1_t29259_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29259_MethodInfos/* methods */
	, IEnumerator_1_t29259_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29259_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29259_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29259_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29259_0_0_0/* byval_arg */
	, &IEnumerator_1_t29259_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29259_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3008.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3008MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern TypeInfo IContextAttribute_t8507_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179951_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContextAttribute_t8507_m223214_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisIContextAttribute_t8507_m223214(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisIContextAttribute_t8507_m223214_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24801____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24801, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24801____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24801, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24801_FieldInfos[] =
{
	&InternalEnumerator_1_t24801____array_FieldInfo,
	&InternalEnumerator_1_t24801____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179948_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24801____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24801_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179948_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179951_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24801____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24801_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179951_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24801_PropertyInfos[] =
{
	&InternalEnumerator_1_t24801____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24801____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24801_InternalEnumerator_1__ctor_m179946_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179946_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24801_InternalEnumerator_1__ctor_m179946_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179947_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179948_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179949_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179950_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern Il2CppType IContextAttribute_t8507_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179951_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* declaring_type */
	, &IContextAttribute_t8507_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24801_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179946_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179947_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179948_MethodInfo,
	&InternalEnumerator_1_Dispose_m179949_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179950_MethodInfo,
	&InternalEnumerator_1_get_Current_m179951_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179948_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179950_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179947_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179949_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179951_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24801_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179948_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179950_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179947_MethodInfo,
	&InternalEnumerator_1_Dispose_m179949_MethodInfo,
	&InternalEnumerator_1_get_Current_m179951_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29259_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24801_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29259_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29259_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24801_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29259_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179951_MethodInfo;
extern TypeInfo IContextAttribute_t8507_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContextAttribute_t8507_m223214_MethodInfo;
static void* InternalEnumerator_1_t24801_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179951_MethodInfo,
	&IContextAttribute_t8507_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisIContextAttribute_t8507_m223214_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24801_0_0_0;
extern Il2CppType InternalEnumerator_1_t24801_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24801_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24801_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24801_MethodInfos/* methods */
	, InternalEnumerator_1_t24801_PropertyInfos/* properties */
	, InternalEnumerator_1_t24801_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24801_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24801_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24801_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24801_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24801_1_0_0/* this_arg */
	, InternalEnumerator_1_t24801_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24801_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24801_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24801)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t36948_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>
extern MethodInfo IList_1_get_Item_m272101_MethodInfo;
extern MethodInfo IList_1_set_Item_m272102_MethodInfo;
static PropertyInfo IList_1_t36948____Item_PropertyInfo = 
{
	&IList_1_t36948_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272101_MethodInfo/* get */
	, &IList_1_set_Item_m272102_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36948_PropertyInfos[] =
{
	&IList_1_t36948____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContextAttribute_t8507_0_0_0;
static ParameterInfo IList_1_t36948_IList_1_IndexOf_m272103_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t8507_0_0_0},
};
extern TypeInfo IList_1_t36948_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272103_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36948_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36948_IList_1_IndexOf_m272103_ParameterInfos/* parameters */
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
extern Il2CppType IContextAttribute_t8507_0_0_0;
static ParameterInfo IList_1_t36948_IList_1_Insert_m272104_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t8507_0_0_0},
};
extern TypeInfo IList_1_t36948_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272104_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36948_IList_1_Insert_m272104_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36948_IList_1_RemoveAt_m272105_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36948_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272105_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36948_IList_1_RemoveAt_m272105_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36948_IList_1_get_Item_m272101_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36948_il2cpp_TypeInfo;
extern Il2CppType IContextAttribute_t8507_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272101_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36948_il2cpp_TypeInfo/* declaring_type */
	, &IContextAttribute_t8507_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36948_IList_1_get_Item_m272101_ParameterInfos/* parameters */
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
extern Il2CppType IContextAttribute_t8507_0_0_0;
static ParameterInfo IList_1_t36948_IList_1_set_Item_m272102_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContextAttribute_t8507_0_0_0},
};
extern TypeInfo IList_1_t36948_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272102_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36948_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36948_IList_1_set_Item_m272102_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36948_MethodInfos[] =
{
	&IList_1_IndexOf_m272103_MethodInfo,
	&IList_1_Insert_m272104_MethodInfo,
	&IList_1_RemoveAt_m272105_MethodInfo,
	&IList_1_get_Item_m272101_MethodInfo,
	&IList_1_set_Item_m272102_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36947_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36949_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36948_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36947_il2cpp_TypeInfo,
	&IEnumerable_1_t36949_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36948_0_0_0;
extern Il2CppType IList_1_t36948_1_0_0;
struct IList_1_t36948;
extern TypeInfo IList_1_t36948_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36948_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36948_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36948_MethodInfos/* methods */
	, IList_1_t36948_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36948_il2cpp_TypeInfo/* element_class */
	, IList_1_t36948_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36948_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36948_0_0_0/* byval_arg */
	, &IList_1_t36948_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36948_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo ICollection_1_get_Count_m272106_MethodInfo;
static PropertyInfo ICollection_1_t36950____Count_PropertyInfo = 
{
	&ICollection_1_t36950_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272106_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272107_MethodInfo;
static PropertyInfo ICollection_1_t36950____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36950_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272107_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36950_PropertyInfos[] =
{
	&ICollection_1_t36950____Count_PropertyInfo,
	&ICollection_1_t36950____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Count()
MethodInfo ICollection_1_get_Count_m272106_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272107_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContextProperty_t8027_0_0_0;
static ParameterInfo ICollection_1_t36950_ICollection_1_Add_m272108_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t8027_0_0_0},
};
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Add(T)
MethodInfo ICollection_1_Add_m272108_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36950_ICollection_1_Add_m272108_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Clear()
MethodInfo ICollection_1_Clear_m272109_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContextProperty_t8027_0_0_0;
static ParameterInfo ICollection_1_t36950_ICollection_1_Contains_m272110_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t8027_0_0_0},
};
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Contains(T)
MethodInfo ICollection_1_Contains_m272110_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36950_ICollection_1_Contains_m272110_ParameterInfos/* parameters */
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
extern Il2CppType IContextPropertyU5BU5D_t25331_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36950_ICollection_1_CopyTo_m272111_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContextPropertyU5BU5D_t25331_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272111_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36950_ICollection_1_CopyTo_m272111_ParameterInfos/* parameters */
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
extern Il2CppType IContextProperty_t8027_0_0_0;
static ParameterInfo ICollection_1_t36950_ICollection_1_Remove_m272112_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t8027_0_0_0},
};
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContextProperty>::Remove(T)
MethodInfo ICollection_1_Remove_m272112_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36950_ICollection_1_Remove_m272112_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36950_MethodInfos[] =
{
	&ICollection_1_get_Count_m272106_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272107_MethodInfo,
	&ICollection_1_Add_m272108_MethodInfo,
	&ICollection_1_Clear_m272109_MethodInfo,
	&ICollection_1_Contains_m272110_MethodInfo,
	&ICollection_1_CopyTo_m272111_MethodInfo,
	&ICollection_1_Remove_m272112_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36952_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36950_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36952_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36950_0_0_0;
extern Il2CppType ICollection_1_t36950_1_0_0;
struct ICollection_1_t36950;
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36950_GenericClass;
TypeInfo ICollection_1_t36950_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36950_MethodInfos/* methods */
	, ICollection_1_t36950_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36950_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36950_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36950_0_0_0/* byval_arg */
	, &ICollection_1_t36950_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36950_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36952_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern TypeInfo IEnumerable_1_t36952_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29260_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContextProperty>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272113_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36952_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29260_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36952_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272113_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36952_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36952_0_0_0;
extern Il2CppType IEnumerable_1_t36952_1_0_0;
struct IEnumerable_1_t36952;
extern TypeInfo IEnumerable_1_t36952_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36952_GenericClass;
TypeInfo IEnumerable_1_t36952_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36952_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36952_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36952_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36952_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36952_0_0_0/* byval_arg */
	, &IEnumerable_1_t36952_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36952_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29260_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo IEnumerator_1_get_Current_m272114_MethodInfo;
static PropertyInfo IEnumerator_1_t29260____Current_PropertyInfo = 
{
	&IEnumerator_1_t29260_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272114_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29260_PropertyInfos[] =
{
	&IEnumerator_1_t29260____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29260_il2cpp_TypeInfo;
extern Il2CppType IContextProperty_t8027_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272114_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29260_il2cpp_TypeInfo/* declaring_type */
	, &IContextProperty_t8027_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29260_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272114_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29260_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29260_0_0_0;
extern Il2CppType IEnumerator_1_t29260_1_0_0;
struct IEnumerator_1_t29260;
extern TypeInfo IEnumerator_1_t29260_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29260_GenericClass;
TypeInfo IEnumerator_1_t29260_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29260_MethodInfos/* methods */
	, IEnumerator_1_t29260_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29260_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29260_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29260_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29260_0_0_0/* byval_arg */
	, &IEnumerator_1_t29260_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29260_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3009.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3009MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern TypeInfo IContextProperty_t8027_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179957_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContextProperty_t8027_m223225_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextProperty>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContextProperty>(System.Int32)
#define Array_InternalArray__get_Item_TisIContextProperty_t8027_m223225(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisIContextProperty_t8027_m223225_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24802____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24802, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24802____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24802, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24802_FieldInfos[] =
{
	&InternalEnumerator_1_t24802____array_FieldInfo,
	&InternalEnumerator_1_t24802____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179954_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24802____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24802_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179954_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179957_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24802____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24802_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179957_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24802_PropertyInfos[] =
{
	&InternalEnumerator_1_t24802____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24802____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24802_InternalEnumerator_1__ctor_m179952_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179952_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24802_InternalEnumerator_1__ctor_m179952_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179953_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179954_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179955_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179956_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern Il2CppType IContextProperty_t8027_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179957_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* declaring_type */
	, &IContextProperty_t8027_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24802_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179952_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179953_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179954_MethodInfo,
	&InternalEnumerator_1_Dispose_m179955_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179956_MethodInfo,
	&InternalEnumerator_1_get_Current_m179957_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179954_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179956_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179953_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179955_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179957_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24802_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179954_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179956_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179953_MethodInfo,
	&InternalEnumerator_1_Dispose_m179955_MethodInfo,
	&InternalEnumerator_1_get_Current_m179957_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29260_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24802_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29260_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29260_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24802_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29260_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179957_MethodInfo;
extern TypeInfo IContextProperty_t8027_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContextProperty_t8027_m223225_MethodInfo;
static void* InternalEnumerator_1_t24802_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179957_MethodInfo,
	&IContextProperty_t8027_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisIContextProperty_t8027_m223225_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24802_0_0_0;
extern Il2CppType InternalEnumerator_1_t24802_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24802_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24802_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24802_MethodInfos/* methods */
	, InternalEnumerator_1_t24802_PropertyInfos/* properties */
	, InternalEnumerator_1_t24802_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24802_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24802_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24802_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24802_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24802_1_0_0/* this_arg */
	, InternalEnumerator_1_t24802_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24802_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24802_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24802)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t36951_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>
extern MethodInfo IList_1_get_Item_m272115_MethodInfo;
extern MethodInfo IList_1_set_Item_m272116_MethodInfo;
static PropertyInfo IList_1_t36951____Item_PropertyInfo = 
{
	&IList_1_t36951_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272115_MethodInfo/* get */
	, &IList_1_set_Item_m272116_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36951_PropertyInfos[] =
{
	&IList_1_t36951____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContextProperty_t8027_0_0_0;
static ParameterInfo IList_1_t36951_IList_1_IndexOf_m272117_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t8027_0_0_0},
};
extern TypeInfo IList_1_t36951_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272117_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36951_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36951_IList_1_IndexOf_m272117_ParameterInfos/* parameters */
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
extern Il2CppType IContextProperty_t8027_0_0_0;
static ParameterInfo IList_1_t36951_IList_1_Insert_m272118_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t8027_0_0_0},
};
extern TypeInfo IList_1_t36951_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272118_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36951_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36951_IList_1_Insert_m272118_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36951_IList_1_RemoveAt_m272119_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36951_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272119_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36951_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36951_IList_1_RemoveAt_m272119_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36951_IList_1_get_Item_m272115_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36951_il2cpp_TypeInfo;
extern Il2CppType IContextProperty_t8027_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272115_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36951_il2cpp_TypeInfo/* declaring_type */
	, &IContextProperty_t8027_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36951_IList_1_get_Item_m272115_ParameterInfos/* parameters */
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
extern Il2CppType IContextProperty_t8027_0_0_0;
static ParameterInfo IList_1_t36951_IList_1_set_Item_m272116_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContextProperty_t8027_0_0_0},
};
extern TypeInfo IList_1_t36951_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContextProperty>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272116_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36951_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36951_IList_1_set_Item_m272116_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36951_MethodInfos[] =
{
	&IList_1_IndexOf_m272117_MethodInfo,
	&IList_1_Insert_m272118_MethodInfo,
	&IList_1_RemoveAt_m272119_MethodInfo,
	&IList_1_get_Item_m272115_MethodInfo,
	&IList_1_set_Item_m272116_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36950_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36952_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36951_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36950_il2cpp_TypeInfo,
	&IEnumerable_1_t36952_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36951_0_0_0;
extern Il2CppType IList_1_t36951_1_0_0;
struct IList_1_t36951;
extern TypeInfo IList_1_t36951_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36951_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36951_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36951_MethodInfos/* methods */
	, IList_1_t36951_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36951_il2cpp_TypeInfo/* element_class */
	, IList_1_t36951_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36951_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36951_0_0_0/* byval_arg */
	, &IList_1_t36951_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36951_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29261_il2cpp_TypeInfo;

// System.Runtime.Remoting.Contexts.SynchronizationAttribute
#include "mscorlib_System_Runtime_Remoting_Contexts_SynchronizationAtt.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern MethodInfo IEnumerator_1_get_Current_m272120_MethodInfo;
static PropertyInfo IEnumerator_1_t29261____Current_PropertyInfo = 
{
	&IEnumerator_1_t29261_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272120_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29261_PropertyInfos[] =
{
	&IEnumerator_1_t29261____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29261_il2cpp_TypeInfo;
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272120_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29261_il2cpp_TypeInfo/* declaring_type */
	, &SynchronizationAttribute_t8029_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29261_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272120_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29261_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29261_0_0_0;
extern Il2CppType IEnumerator_1_t29261_1_0_0;
struct IEnumerator_1_t29261;
extern TypeInfo IEnumerator_1_t29261_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29261_GenericClass;
TypeInfo IEnumerator_1_t29261_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29261_MethodInfos/* methods */
	, IEnumerator_1_t29261_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29261_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29261_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29261_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29261_0_0_0/* byval_arg */
	, &IEnumerator_1_t29261_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29261_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3010.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3010MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern TypeInfo SynchronizationAttribute_t8029_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179963_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSynchronizationAttribute_t8029_m223236_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.SynchronizationAttribute>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.SynchronizationAttribute>(System.Int32)
#define Array_InternalArray__get_Item_TisSynchronizationAttribute_t8029_m223236(__this, p0, method) (SynchronizationAttribute_t8029 *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisSynchronizationAttribute_t8029_m223236_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24803____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24803, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24803____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24803, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24803_FieldInfos[] =
{
	&InternalEnumerator_1_t24803____array_FieldInfo,
	&InternalEnumerator_1_t24803____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179960_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24803____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24803_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179960_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179963_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24803____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24803_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179963_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24803_PropertyInfos[] =
{
	&InternalEnumerator_1_t24803____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24803____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24803_InternalEnumerator_1__ctor_m179958_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179958_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24803_InternalEnumerator_1__ctor_m179958_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179959_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179960_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179961_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179962_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179963_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* declaring_type */
	, &SynchronizationAttribute_t8029_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24803_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179958_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179959_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179960_MethodInfo,
	&InternalEnumerator_1_Dispose_m179961_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179962_MethodInfo,
	&InternalEnumerator_1_get_Current_m179963_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179960_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179962_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179959_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179961_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179963_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24803_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179960_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179962_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179959_MethodInfo,
	&InternalEnumerator_1_Dispose_m179961_MethodInfo,
	&InternalEnumerator_1_get_Current_m179963_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29261_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24803_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29261_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29261_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24803_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29261_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179963_MethodInfo;
extern TypeInfo SynchronizationAttribute_t8029_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisSynchronizationAttribute_t8029_m223236_MethodInfo;
static void* InternalEnumerator_1_t24803_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179963_MethodInfo,
	&SynchronizationAttribute_t8029_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisSynchronizationAttribute_t8029_m223236_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24803_0_0_0;
extern Il2CppType InternalEnumerator_1_t24803_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24803_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24803_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24803_MethodInfos/* methods */
	, InternalEnumerator_1_t24803_PropertyInfos/* properties */
	, InternalEnumerator_1_t24803_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24803_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24803_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24803_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24803_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24803_1_0_0/* this_arg */
	, InternalEnumerator_1_t24803_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24803_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24803_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24803)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern MethodInfo ICollection_1_get_Count_m272121_MethodInfo;
static PropertyInfo ICollection_1_t36953____Count_PropertyInfo = 
{
	&ICollection_1_t36953_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272121_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272122_MethodInfo;
static PropertyInfo ICollection_1_t36953____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36953_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272122_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36953_PropertyInfos[] =
{
	&ICollection_1_t36953____Count_PropertyInfo,
	&ICollection_1_t36953____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Count()
MethodInfo ICollection_1_get_Count_m272121_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272122_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
static ParameterInfo ICollection_1_t36953_ICollection_1_Add_m272123_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t8029_0_0_0},
};
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Add(T)
MethodInfo ICollection_1_Add_m272123_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36953_ICollection_1_Add_m272123_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Clear()
MethodInfo ICollection_1_Clear_m272124_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
static ParameterInfo ICollection_1_t36953_ICollection_1_Contains_m272125_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t8029_0_0_0},
};
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Contains(T)
MethodInfo ICollection_1_Contains_m272125_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36953_ICollection_1_Contains_m272125_ParameterInfos/* parameters */
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
extern Il2CppType SynchronizationAttributeU5BU5D_t25332_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36953_ICollection_1_CopyTo_m272126_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttributeU5BU5D_t25332_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272126_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36953_ICollection_1_CopyTo_m272126_ParameterInfos/* parameters */
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
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
static ParameterInfo ICollection_1_t36953_ICollection_1_Remove_m272127_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t8029_0_0_0},
};
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Remove(T)
MethodInfo ICollection_1_Remove_m272127_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36953_ICollection_1_Remove_m272127_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36953_MethodInfos[] =
{
	&ICollection_1_get_Count_m272121_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272122_MethodInfo,
	&ICollection_1_Add_m272123_MethodInfo,
	&ICollection_1_Clear_m272124_MethodInfo,
	&ICollection_1_Contains_m272125_MethodInfo,
	&ICollection_1_CopyTo_m272126_MethodInfo,
	&ICollection_1_Remove_m272127_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36955_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36953_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36955_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36953_0_0_0;
extern Il2CppType ICollection_1_t36953_1_0_0;
struct ICollection_1_t36953;
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36953_GenericClass;
TypeInfo ICollection_1_t36953_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36953_MethodInfos/* methods */
	, ICollection_1_t36953_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36953_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36953_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36953_0_0_0/* byval_arg */
	, &ICollection_1_t36953_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36953_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36955_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern TypeInfo IEnumerable_1_t36955_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29261_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272128_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36955_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29261_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36955_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272128_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36955_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36955_0_0_0;
extern Il2CppType IEnumerable_1_t36955_1_0_0;
struct IEnumerable_1_t36955;
extern TypeInfo IEnumerable_1_t36955_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36955_GenericClass;
TypeInfo IEnumerable_1_t36955_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36955_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36955_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36955_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36955_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36955_0_0_0/* byval_arg */
	, &IEnumerable_1_t36955_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36955_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IList_1_t36954_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>
extern MethodInfo IList_1_get_Item_m272129_MethodInfo;
extern MethodInfo IList_1_set_Item_m272130_MethodInfo;
static PropertyInfo IList_1_t36954____Item_PropertyInfo = 
{
	&IList_1_t36954_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272129_MethodInfo/* get */
	, &IList_1_set_Item_m272130_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36954_PropertyInfos[] =
{
	&IList_1_t36954____Item_PropertyInfo,
	NULL
};
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
static ParameterInfo IList_1_t36954_IList_1_IndexOf_m272131_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t8029_0_0_0},
};
extern TypeInfo IList_1_t36954_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272131_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36954_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36954_IList_1_IndexOf_m272131_ParameterInfos/* parameters */
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
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
static ParameterInfo IList_1_t36954_IList_1_Insert_m272132_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t8029_0_0_0},
};
extern TypeInfo IList_1_t36954_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272132_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36954_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36954_IList_1_Insert_m272132_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36954_IList_1_RemoveAt_m272133_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36954_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272133_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36954_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36954_IList_1_RemoveAt_m272133_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36954_IList_1_get_Item_m272129_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36954_il2cpp_TypeInfo;
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272129_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36954_il2cpp_TypeInfo/* declaring_type */
	, &SynchronizationAttribute_t8029_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36954_IList_1_get_Item_m272129_ParameterInfos/* parameters */
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
extern Il2CppType SynchronizationAttribute_t8029_0_0_0;
static ParameterInfo IList_1_t36954_IList_1_set_Item_m272130_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &SynchronizationAttribute_t8029_0_0_0},
};
extern TypeInfo IList_1_t36954_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.SynchronizationAttribute>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272130_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36954_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36954_IList_1_set_Item_m272130_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36954_MethodInfos[] =
{
	&IList_1_IndexOf_m272131_MethodInfo,
	&IList_1_Insert_m272132_MethodInfo,
	&IList_1_RemoveAt_m272133_MethodInfo,
	&IList_1_get_Item_m272129_MethodInfo,
	&IList_1_set_Item_m272130_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36953_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36955_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36954_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36953_il2cpp_TypeInfo,
	&IEnumerable_1_t36955_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36954_0_0_0;
extern Il2CppType IList_1_t36954_1_0_0;
struct IList_1_t36954;
extern TypeInfo IList_1_t36954_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36954_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36954_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36954_MethodInfos/* methods */
	, IList_1_t36954_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36954_il2cpp_TypeInfo/* element_class */
	, IList_1_t36954_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36954_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36954_0_0_0/* byval_arg */
	, &IList_1_t36954_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36954_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern MethodInfo ICollection_1_get_Count_m272134_MethodInfo;
static PropertyInfo ICollection_1_t36956____Count_PropertyInfo = 
{
	&ICollection_1_t36956_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272134_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272135_MethodInfo;
static PropertyInfo ICollection_1_t36956____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36956_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272135_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36956_PropertyInfos[] =
{
	&ICollection_1_t36956____Count_PropertyInfo,
	&ICollection_1_t36956____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Count()
MethodInfo ICollection_1_get_Count_m272134_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272135_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
static ParameterInfo ICollection_1_t36956_ICollection_1_Add_m272136_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t8511_0_0_0},
};
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Add(T)
MethodInfo ICollection_1_Add_m272136_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36956_ICollection_1_Add_m272136_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Clear()
MethodInfo ICollection_1_Clear_m272137_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
static ParameterInfo ICollection_1_t36956_ICollection_1_Contains_m272138_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t8511_0_0_0},
};
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Contains(T)
MethodInfo ICollection_1_Contains_m272138_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36956_ICollection_1_Contains_m272138_ParameterInfos/* parameters */
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
extern Il2CppType IContributeClientContextSinkU5BU5D_t25333_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36956_ICollection_1_CopyTo_m272139_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSinkU5BU5D_t25333_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272139_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36956_ICollection_1_CopyTo_m272139_ParameterInfos/* parameters */
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
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
static ParameterInfo ICollection_1_t36956_ICollection_1_Remove_m272140_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t8511_0_0_0},
};
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Remove(T)
MethodInfo ICollection_1_Remove_m272140_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36956_ICollection_1_Remove_m272140_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36956_MethodInfos[] =
{
	&ICollection_1_get_Count_m272134_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272135_MethodInfo,
	&ICollection_1_Add_m272136_MethodInfo,
	&ICollection_1_Clear_m272137_MethodInfo,
	&ICollection_1_Contains_m272138_MethodInfo,
	&ICollection_1_CopyTo_m272139_MethodInfo,
	&ICollection_1_Remove_m272140_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36958_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36956_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36958_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36956_0_0_0;
extern Il2CppType ICollection_1_t36956_1_0_0;
struct ICollection_1_t36956;
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36956_GenericClass;
TypeInfo ICollection_1_t36956_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36956_MethodInfos/* methods */
	, ICollection_1_t36956_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36956_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36956_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36956_0_0_0/* byval_arg */
	, &ICollection_1_t36956_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36956_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36958_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern TypeInfo IEnumerable_1_t36958_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29262_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272141_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36958_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29262_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36958_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272141_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36958_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36958_0_0_0;
extern Il2CppType IEnumerable_1_t36958_1_0_0;
struct IEnumerable_1_t36958;
extern TypeInfo IEnumerable_1_t36958_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36958_GenericClass;
TypeInfo IEnumerable_1_t36958_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36958_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36958_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36958_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36958_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36958_0_0_0/* byval_arg */
	, &IEnumerable_1_t36958_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36958_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29262_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern MethodInfo IEnumerator_1_get_Current_m272142_MethodInfo;
static PropertyInfo IEnumerator_1_t29262____Current_PropertyInfo = 
{
	&IEnumerator_1_t29262_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272142_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29262_PropertyInfos[] =
{
	&IEnumerator_1_t29262____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29262_il2cpp_TypeInfo;
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272142_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29262_il2cpp_TypeInfo/* declaring_type */
	, &IContributeClientContextSink_t8511_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29262_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272142_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29262_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29262_0_0_0;
extern Il2CppType IEnumerator_1_t29262_1_0_0;
struct IEnumerator_1_t29262;
extern TypeInfo IEnumerator_1_t29262_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29262_GenericClass;
TypeInfo IEnumerator_1_t29262_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29262_MethodInfos/* methods */
	, IEnumerator_1_t29262_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29262_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29262_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29262_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29262_0_0_0/* byval_arg */
	, &IEnumerator_1_t29262_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29262_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3011.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3011MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern TypeInfo IContributeClientContextSink_t8511_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179969_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContributeClientContextSink_t8511_m223247_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeClientContextSink>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeClientContextSink>(System.Int32)
#define Array_InternalArray__get_Item_TisIContributeClientContextSink_t8511_m223247(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisIContributeClientContextSink_t8511_m223247_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24804____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24804, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24804____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24804, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24804_FieldInfos[] =
{
	&InternalEnumerator_1_t24804____array_FieldInfo,
	&InternalEnumerator_1_t24804____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179966_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24804____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24804_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179966_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179969_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24804____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24804_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179969_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24804_PropertyInfos[] =
{
	&InternalEnumerator_1_t24804____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24804____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24804_InternalEnumerator_1__ctor_m179964_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179964_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24804_InternalEnumerator_1__ctor_m179964_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179965_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179966_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179967_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179968_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179969_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* declaring_type */
	, &IContributeClientContextSink_t8511_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24804_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179964_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179965_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179966_MethodInfo,
	&InternalEnumerator_1_Dispose_m179967_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179968_MethodInfo,
	&InternalEnumerator_1_get_Current_m179969_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179966_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179968_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179965_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179967_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179969_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24804_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179966_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179968_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179965_MethodInfo,
	&InternalEnumerator_1_Dispose_m179967_MethodInfo,
	&InternalEnumerator_1_get_Current_m179969_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29262_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24804_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29262_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29262_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24804_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29262_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179969_MethodInfo;
extern TypeInfo IContributeClientContextSink_t8511_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContributeClientContextSink_t8511_m223247_MethodInfo;
static void* InternalEnumerator_1_t24804_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179969_MethodInfo,
	&IContributeClientContextSink_t8511_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisIContributeClientContextSink_t8511_m223247_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24804_0_0_0;
extern Il2CppType InternalEnumerator_1_t24804_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24804_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24804_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24804_MethodInfos/* methods */
	, InternalEnumerator_1_t24804_PropertyInfos/* properties */
	, InternalEnumerator_1_t24804_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24804_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24804_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24804_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24804_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24804_1_0_0/* this_arg */
	, InternalEnumerator_1_t24804_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24804_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24804_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24804)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t36957_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>
extern MethodInfo IList_1_get_Item_m272143_MethodInfo;
extern MethodInfo IList_1_set_Item_m272144_MethodInfo;
static PropertyInfo IList_1_t36957____Item_PropertyInfo = 
{
	&IList_1_t36957_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272143_MethodInfo/* get */
	, &IList_1_set_Item_m272144_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36957_PropertyInfos[] =
{
	&IList_1_t36957____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
static ParameterInfo IList_1_t36957_IList_1_IndexOf_m272145_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t8511_0_0_0},
};
extern TypeInfo IList_1_t36957_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272145_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36957_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36957_IList_1_IndexOf_m272145_ParameterInfos/* parameters */
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
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
static ParameterInfo IList_1_t36957_IList_1_Insert_m272146_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t8511_0_0_0},
};
extern TypeInfo IList_1_t36957_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272146_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36957_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36957_IList_1_Insert_m272146_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36957_IList_1_RemoveAt_m272147_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36957_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272147_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36957_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36957_IList_1_RemoveAt_m272147_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36957_IList_1_get_Item_m272143_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36957_il2cpp_TypeInfo;
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272143_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36957_il2cpp_TypeInfo/* declaring_type */
	, &IContributeClientContextSink_t8511_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36957_IList_1_get_Item_m272143_ParameterInfos/* parameters */
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
extern Il2CppType IContributeClientContextSink_t8511_0_0_0;
static ParameterInfo IList_1_t36957_IList_1_set_Item_m272144_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContributeClientContextSink_t8511_0_0_0},
};
extern TypeInfo IList_1_t36957_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeClientContextSink>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272144_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36957_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36957_IList_1_set_Item_m272144_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36957_MethodInfos[] =
{
	&IList_1_IndexOf_m272145_MethodInfo,
	&IList_1_Insert_m272146_MethodInfo,
	&IList_1_RemoveAt_m272147_MethodInfo,
	&IList_1_get_Item_m272143_MethodInfo,
	&IList_1_set_Item_m272144_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36956_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36958_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36957_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36956_il2cpp_TypeInfo,
	&IEnumerable_1_t36958_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36957_0_0_0;
extern Il2CppType IList_1_t36957_1_0_0;
struct IList_1_t36957;
extern TypeInfo IList_1_t36957_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36957_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36957_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36957_MethodInfos/* methods */
	, IList_1_t36957_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36957_il2cpp_TypeInfo/* element_class */
	, IList_1_t36957_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36957_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36957_0_0_0/* byval_arg */
	, &IList_1_t36957_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36957_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern MethodInfo ICollection_1_get_Count_m272148_MethodInfo;
static PropertyInfo ICollection_1_t36959____Count_PropertyInfo = 
{
	&ICollection_1_t36959_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272148_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272149_MethodInfo;
static PropertyInfo ICollection_1_t36959____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36959_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272149_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36959_PropertyInfos[] =
{
	&ICollection_1_t36959____Count_PropertyInfo,
	&ICollection_1_t36959____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Count()
MethodInfo ICollection_1_get_Count_m272148_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272149_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
static ParameterInfo ICollection_1_t36959_ICollection_1_Add_m272150_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t8512_0_0_0},
};
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Add(T)
MethodInfo ICollection_1_Add_m272150_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, ICollection_1_t36959_ICollection_1_Add_m272150_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Clear()
MethodInfo ICollection_1_Clear_m272151_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
static ParameterInfo ICollection_1_t36959_ICollection_1_Contains_m272152_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t8512_0_0_0},
};
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Contains(T)
MethodInfo ICollection_1_Contains_m272152_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36959_ICollection_1_Contains_m272152_ParameterInfos/* parameters */
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
extern Il2CppType IContributeServerContextSinkU5BU5D_t25334_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36959_ICollection_1_CopyTo_m272153_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSinkU5BU5D_t25334_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272153_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36959_ICollection_1_CopyTo_m272153_ParameterInfos/* parameters */
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
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
static ParameterInfo ICollection_1_t36959_ICollection_1_Remove_m272154_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t8512_0_0_0},
};
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Object_t (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Remove(T)
MethodInfo ICollection_1_Remove_m272154_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Object_t/* invoker_method */
	, ICollection_1_t36959_ICollection_1_Remove_m272154_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36959_MethodInfos[] =
{
	&ICollection_1_get_Count_m272148_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272149_MethodInfo,
	&ICollection_1_Add_m272150_MethodInfo,
	&ICollection_1_Clear_m272151_MethodInfo,
	&ICollection_1_Contains_m272152_MethodInfo,
	&ICollection_1_CopyTo_m272153_MethodInfo,
	&ICollection_1_Remove_m272154_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36961_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36959_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36961_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36959_0_0_0;
extern Il2CppType ICollection_1_t36959_1_0_0;
struct ICollection_1_t36959;
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36959_GenericClass;
TypeInfo ICollection_1_t36959_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36959_MethodInfos/* methods */
	, ICollection_1_t36959_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36959_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36959_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36959_0_0_0/* byval_arg */
	, &ICollection_1_t36959_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36959_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36961_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern TypeInfo IEnumerable_1_t36961_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29263_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272155_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36961_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29263_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36961_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272155_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36961_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36961_0_0_0;
extern Il2CppType IEnumerable_1_t36961_1_0_0;
struct IEnumerable_1_t36961;
extern TypeInfo IEnumerable_1_t36961_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36961_GenericClass;
TypeInfo IEnumerable_1_t36961_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36961_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36961_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36961_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36961_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36961_0_0_0/* byval_arg */
	, &IEnumerable_1_t36961_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36961_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29263_il2cpp_TypeInfo;



// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern MethodInfo IEnumerator_1_get_Current_m272156_MethodInfo;
static PropertyInfo IEnumerator_1_t29263____Current_PropertyInfo = 
{
	&IEnumerator_1_t29263_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272156_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29263_PropertyInfos[] =
{
	&IEnumerator_1_t29263____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29263_il2cpp_TypeInfo;
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272156_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29263_il2cpp_TypeInfo/* declaring_type */
	, &IContributeServerContextSink_t8512_0_0_0/* return_type */
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
static MethodInfo* IEnumerator_1_t29263_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272156_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29263_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29263_0_0_0;
extern Il2CppType IEnumerator_1_t29263_1_0_0;
struct IEnumerator_1_t29263;
extern TypeInfo IEnumerator_1_t29263_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29263_GenericClass;
TypeInfo IEnumerator_1_t29263_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29263_MethodInfos/* methods */
	, IEnumerator_1_t29263_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29263_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29263_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29263_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29263_0_0_0/* byval_arg */
	, &IEnumerator_1_t29263_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29263_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3012.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3012MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern TypeInfo IContributeServerContextSink_t8512_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179975_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContributeServerContextSink_t8512_m223258_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeServerContextSink>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Contexts.IContributeServerContextSink>(System.Int32)
#define Array_InternalArray__get_Item_TisIContributeServerContextSink_t8512_m223258(__this, p0, method) (Object_t *)Array_InternalArray__get_Item_TisObject_t_m180549_gshared((Array_t *)__this, (int32_t)p0, method)
extern MethodInfo Array_InternalArray__get_Item_TisIContributeServerContextSink_t8512_m223258_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::.ctor(System.Array)
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::System.Collections.IEnumerator.Reset()
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::System.Collections.IEnumerator.get_Current()
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Dispose()
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::MoveNext()
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24805____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24805, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24805____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24805, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24805_FieldInfos[] =
{
	&InternalEnumerator_1_t24805____array_FieldInfo,
	&InternalEnumerator_1_t24805____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179972_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24805____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24805_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179972_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179975_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24805____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24805_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179975_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24805_PropertyInfos[] =
{
	&InternalEnumerator_1_t24805____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24805____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24805_InternalEnumerator_1__ctor_m179970_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179970_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m57825_gshared/* method */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24805_InternalEnumerator_1__ctor_m179970_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179971_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m57826_gshared/* method */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179972_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m57827_gshared/* method */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179973_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m57828_gshared/* method */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179974_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m57829_gshared/* method */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179975_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m57830_gshared/* method */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* declaring_type */
	, &IContributeServerContextSink_t8512_0_0_0/* return_type */
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
static MethodInfo* InternalEnumerator_1_t24805_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179970_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179971_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179972_MethodInfo,
	&InternalEnumerator_1_Dispose_m179973_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179974_MethodInfo,
	&InternalEnumerator_1_get_Current_m179975_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179972_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179974_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179971_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179973_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179975_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24805_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179972_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179974_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179971_MethodInfo,
	&InternalEnumerator_1_Dispose_m179973_MethodInfo,
	&InternalEnumerator_1_get_Current_m179975_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29263_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24805_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29263_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29263_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24805_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29263_il2cpp_TypeInfo, 8},
};
extern MethodInfo InternalEnumerator_1_get_Current_m179975_MethodInfo;
extern TypeInfo IContributeServerContextSink_t8512_il2cpp_TypeInfo;
extern MethodInfo Array_InternalArray__get_Item_TisIContributeServerContextSink_t8512_m223258_MethodInfo;
static void* InternalEnumerator_1_t24805_RGCTXData[3] = 
{
	&InternalEnumerator_1_get_Current_m179975_MethodInfo,
	&IContributeServerContextSink_t8512_il2cpp_TypeInfo,
	&Array_InternalArray__get_Item_TisIContributeServerContextSink_t8512_m223258_MethodInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24805_0_0_0;
extern Il2CppType InternalEnumerator_1_t24805_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24805_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24805_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24805_MethodInfos/* methods */
	, InternalEnumerator_1_t24805_PropertyInfos/* properties */
	, InternalEnumerator_1_t24805_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24805_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24805_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24805_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24805_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24805_1_0_0/* this_arg */
	, InternalEnumerator_1_t24805_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24805_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, InternalEnumerator_1_t24805_RGCTXData/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24805)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo IList_1_t36960_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::IndexOf(T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Insert(System.Int32,T)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::RemoveAt(System.Int32)
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Item(System.Int32)
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::set_Item(System.Int32,T)
// Metadata Definition System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>
extern MethodInfo IList_1_get_Item_m272157_MethodInfo;
extern MethodInfo IList_1_set_Item_m272158_MethodInfo;
static PropertyInfo IList_1_t36960____Item_PropertyInfo = 
{
	&IList_1_t36960_il2cpp_TypeInfo/* parent */
	, "Item"/* name */
	, &IList_1_get_Item_m272157_MethodInfo/* get */
	, &IList_1_set_Item_m272158_MethodInfo/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IList_1_t36960_PropertyInfos[] =
{
	&IList_1_t36960____Item_PropertyInfo,
	NULL
};
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
static ParameterInfo IList_1_t36960_IList_1_IndexOf_m272159_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t8512_0_0_0},
};
extern TypeInfo IList_1_t36960_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::IndexOf(T)
MethodInfo IList_1_IndexOf_m272159_MethodInfo = 
{
	"IndexOf"/* name */
	, NULL/* method */
	, &IList_1_t36960_il2cpp_TypeInfo/* declaring_type */
	, &Int32_t73_0_0_0/* return_type */
	, RuntimeInvoker_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36960_IList_1_IndexOf_m272159_ParameterInfos/* parameters */
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
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
static ParameterInfo IList_1_t36960_IList_1_Insert_m272160_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"item", 1, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t8512_0_0_0},
};
extern TypeInfo IList_1_t36960_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::Insert(System.Int32,T)
MethodInfo IList_1_Insert_m272160_MethodInfo = 
{
	"Insert"/* name */
	, NULL/* method */
	, &IList_1_t36960_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36960_IList_1_Insert_m272160_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36960_IList_1_RemoveAt_m272161_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36960_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::RemoveAt(System.Int32)
MethodInfo IList_1_RemoveAt_m272161_MethodInfo = 
{
	"RemoveAt"/* name */
	, NULL/* method */
	, &IList_1_t36960_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73/* invoker_method */
	, IList_1_t36960_IList_1_RemoveAt_m272161_ParameterInfos/* parameters */
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
static ParameterInfo IList_1_t36960_IList_1_get_Item_m272157_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo IList_1_t36960_il2cpp_TypeInfo;
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
extern void* RuntimeInvoker_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::get_Item(System.Int32)
MethodInfo IList_1_get_Item_m272157_MethodInfo = 
{
	"get_Item"/* name */
	, NULL/* method */
	, &IList_1_t36960_il2cpp_TypeInfo/* declaring_type */
	, &IContributeServerContextSink_t8512_0_0_0/* return_type */
	, RuntimeInvoker_Object_t_Int32_t73/* invoker_method */
	, IList_1_t36960_IList_1_get_Item_m272157_ParameterInfos/* parameters */
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
extern Il2CppType IContributeServerContextSink_t8512_0_0_0;
static ParameterInfo IList_1_t36960_IList_1_set_Item_m272158_ParameterInfos[] = 
{
	{"index", 0, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
	{"value", 1, 134217728, &EmptyCustomAttributesCache, &IContributeServerContextSink_t8512_0_0_0},
};
extern TypeInfo IList_1_t36960_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Int32_t73_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.IList`1<System.Runtime.Remoting.Contexts.IContributeServerContextSink>::set_Item(System.Int32,T)
MethodInfo IList_1_set_Item_m272158_MethodInfo = 
{
	"set_Item"/* name */
	, NULL/* method */
	, &IList_1_t36960_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Int32_t73_Object_t/* invoker_method */
	, IList_1_t36960_IList_1_set_Item_m272158_ParameterInfos/* parameters */
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
static MethodInfo* IList_1_t36960_MethodInfos[] =
{
	&IList_1_IndexOf_m272159_MethodInfo,
	&IList_1_Insert_m272160_MethodInfo,
	&IList_1_RemoveAt_m272161_MethodInfo,
	&IList_1_get_Item_m272157_MethodInfo,
	&IList_1_set_Item_m272158_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo ICollection_1_t36959_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36961_il2cpp_TypeInfo;
static TypeInfo* IList_1_t36960_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&ICollection_1_t36959_il2cpp_TypeInfo,
	&IEnumerable_1_t36961_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IList_1_t36960_0_0_0;
extern Il2CppType IList_1_t36960_1_0_0;
struct IList_1_t36960;
extern TypeInfo IList_1_t36960_il2cpp_TypeInfo;
extern Il2CppGenericClass IList_1_t36960_GenericClass;
extern CustomAttributesCache IList_1_t8376__CustomAttributeCache;
TypeInfo IList_1_t36960_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IList`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IList_1_t36960_MethodInfos/* methods */
	, IList_1_t36960_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IList_1_t36960_il2cpp_TypeInfo/* element_class */
	, IList_1_t36960_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &IList_1_t8376__CustomAttributeCache/* custom_attributes_cache */
	, &IList_1_t36960_il2cpp_TypeInfo/* cast_class */
	, &IList_1_t36960_0_0_0/* byval_arg */
	, &IList_1_t36960_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IList_1_t36960_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerator_1_t29264_il2cpp_TypeInfo;

// System.Runtime.Remoting.Messaging.ArgInfoType
#include "mscorlib_System_Runtime_Remoting_Messaging_ArgInfoType.h"


// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
// Metadata Definition System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo IEnumerator_1_get_Current_m272162_MethodInfo;
static PropertyInfo IEnumerator_1_t29264____Current_PropertyInfo = 
{
	&IEnumerator_1_t29264_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &IEnumerator_1_get_Current_m272162_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* IEnumerator_1_t29264_PropertyInfos[] =
{
	&IEnumerator_1_t29264____Current_PropertyInfo,
	NULL
};
extern TypeInfo IEnumerator_1_t29264_il2cpp_TypeInfo;
extern Il2CppType ArgInfoType_t8030_0_0_0;
extern void* RuntimeInvoker_ArgInfoType_t8030 (MethodInfo* method, void* obj, void** args);
// T System.Collections.Generic.IEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
MethodInfo IEnumerator_1_get_Current_m272162_MethodInfo = 
{
	"get_Current"/* name */
	, NULL/* method */
	, &IEnumerator_1_t29264_il2cpp_TypeInfo/* declaring_type */
	, &ArgInfoType_t8030_0_0_0/* return_type */
	, RuntimeInvoker_ArgInfoType_t8030/* invoker_method */
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
static MethodInfo* IEnumerator_1_t29264_MethodInfos[] =
{
	&IEnumerator_1_get_Current_m272162_MethodInfo,
	NULL
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
static TypeInfo* IEnumerator_1_t29264_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerator_1_t29264_0_0_0;
extern Il2CppType IEnumerator_1_t29264_1_0_0;
struct IEnumerator_1_t29264;
extern TypeInfo IEnumerator_1_t29264_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerator_1_t29264_GenericClass;
TypeInfo IEnumerator_1_t29264_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerator`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerator_1_t29264_MethodInfos/* methods */
	, IEnumerator_1_t29264_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerator_1_t29264_il2cpp_TypeInfo/* element_class */
	, IEnumerator_1_t29264_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerator_1_t29264_il2cpp_TypeInfo/* cast_class */
	, &IEnumerator_1_t29264_0_0_0/* byval_arg */
	, &IEnumerator_1_t29264_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerator_1_t29264_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3013.h"
#ifndef _MSC_VER
#else
#endif
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
// System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
#include "mscorlib_System_Array_InternalEnumerator_1_gen_3013MethodDeclarations.h"

extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern TypeInfo ArgInfoType_t8030_il2cpp_TypeInfo;
extern TypeInfo InvalidOperationException_t5468_il2cpp_TypeInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179981_MethodInfo;
extern MethodInfo InvalidOperationException__ctor_m38738_MethodInfo;
extern MethodInfo Array_get_Length_m42374_MethodInfo;
extern MethodInfo Array_InternalArray__get_Item_TisArgInfoType_t8030_m223269_MethodInfo;
struct Array_t;
// Declaration !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.ArgInfoType>(System.Int32)
// !!0 System.Array::InternalArray__get_Item<System.Runtime.Remoting.Messaging.ArgInfoType>(System.Int32)
 uint8_t Array_InternalArray__get_Item_TisArgInfoType_t8030_m223269 (Array_t * __this, int32_t p0, MethodInfo* method) IL2CPP_METHOD_ATTR;
extern MethodInfo Array_InternalArray__get_Item_TisArgInfoType_t8030_m223269_MethodInfo;


// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::.ctor(System.Array)
extern MethodInfo InternalEnumerator_1__ctor_m179976_MethodInfo;
 void InternalEnumerator_1__ctor_m179976 (InternalEnumerator_1_t24806 * __this, Array_t * ___array, MethodInfo* method){
	{
		__this->___array = ___array;
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::System.Collections.IEnumerator.Reset()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179977_MethodInfo;
 void InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179977 (InternalEnumerator_1_t24806 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::System.Collections.IEnumerator.get_Current()
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978_MethodInfo;
 Object_t * InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978 (InternalEnumerator_1_t24806 * __this, MethodInfo* method){
	{
		uint8_t L_0 = InternalEnumerator_1_get_Current_m179981(__this, /*hidden argument*/&InternalEnumerator_1_get_Current_m179981_MethodInfo);
		uint8_t L_1 = L_0;
		Object_t * L_2 = Box(InitializedTypeInfo(&ArgInfoType_t8030_il2cpp_TypeInfo), &L_1);
		return L_2;
	}
}
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Dispose()
extern MethodInfo InternalEnumerator_1_Dispose_m179979_MethodInfo;
 void InternalEnumerator_1_Dispose_m179979 (InternalEnumerator_1_t24806 * __this, MethodInfo* method){
	{
		__this->___idx = ((int32_t)-2);
		return;
	}
}
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::MoveNext()
extern MethodInfo InternalEnumerator_1_MoveNext_m179980_MethodInfo;
 bool InternalEnumerator_1_MoveNext_m179980 (InternalEnumerator_1_t24806 * __this, MethodInfo* method){
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
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
extern MethodInfo InternalEnumerator_1_get_Current_m179981_MethodInfo;
 uint8_t InternalEnumerator_1_get_Current_m179981 (InternalEnumerator_1_t24806 * __this, MethodInfo* method){
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
		uint8_t L_8 = Array_InternalArray__get_Item_TisArgInfoType_t8030_m223269(L_4, ((int32_t)(((int32_t)(L_6-1))-L_7)), /*hidden argument*/&Array_InternalArray__get_Item_TisArgInfoType_t8030_m223269_MethodInfo);
		return L_8;
	}
}
// Metadata Definition System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern Il2CppType Array_t_0_0_1;
FieldInfo InternalEnumerator_1_t24806____array_FieldInfo = 
{
	"array"/* name */
	, &Array_t_0_0_1/* type */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24806, ___array) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern Il2CppType Int32_t73_0_0_1;
FieldInfo InternalEnumerator_1_t24806____idx_FieldInfo = 
{
	"idx"/* name */
	, &Int32_t73_0_0_1/* type */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* parent */
	, offsetof(InternalEnumerator_1_t24806, ___idx) + sizeof(Object_t)/* data */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static FieldInfo* InternalEnumerator_1_t24806_FieldInfos[] =
{
	&InternalEnumerator_1_t24806____array_FieldInfo,
	&InternalEnumerator_1_t24806____idx_FieldInfo,
	NULL
};
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24806____System_Collections_IEnumerator_Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24806_il2cpp_TypeInfo/* parent */
	, "System.Collections.IEnumerator.Current"/* name */
	, &InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo InternalEnumerator_1_get_Current_m179981_MethodInfo;
static PropertyInfo InternalEnumerator_1_t24806____Current_PropertyInfo = 
{
	&InternalEnumerator_1_t24806_il2cpp_TypeInfo/* parent */
	, "Current"/* name */
	, &InternalEnumerator_1_get_Current_m179981_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* InternalEnumerator_1_t24806_PropertyInfos[] =
{
	&InternalEnumerator_1_t24806____System_Collections_IEnumerator_Current_PropertyInfo,
	&InternalEnumerator_1_t24806____Current_PropertyInfo,
	NULL
};
extern Il2CppType Array_t_0_0_0;
static ParameterInfo InternalEnumerator_1_t24806_InternalEnumerator_1__ctor_m179976_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &Array_t_0_0_0},
};
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::.ctor(System.Array)
MethodInfo InternalEnumerator_1__ctor_m179976_MethodInfo = 
{
	".ctor"/* name */
	, (methodPointerType)&InternalEnumerator_1__ctor_m179976/* method */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t/* invoker_method */
	, InternalEnumerator_1_t24806_InternalEnumerator_1__ctor_m179976_ParameterInfos/* parameters */
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
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::System.Collections.IEnumerator.Reset()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179977_MethodInfo = 
{
	"System.Collections.IEnumerator.Reset"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179977/* method */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern Il2CppType Object_t_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Object System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::System.Collections.IEnumerator.get_Current()
MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978_MethodInfo = 
{
	"System.Collections.IEnumerator.get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978/* method */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Dispose()
MethodInfo InternalEnumerator_1_Dispose_m179979_MethodInfo = 
{
	"Dispose"/* name */
	, (methodPointerType)&InternalEnumerator_1_Dispose_m179979/* method */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::MoveNext()
MethodInfo InternalEnumerator_1_MoveNext_m179980_MethodInfo = 
{
	"MoveNext"/* name */
	, (methodPointerType)&InternalEnumerator_1_MoveNext_m179980/* method */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern Il2CppType ArgInfoType_t8030_0_0_0;
extern void* RuntimeInvoker_ArgInfoType_t8030 (MethodInfo* method, void* obj, void** args);
// T System.Array/InternalEnumerator`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Current()
MethodInfo InternalEnumerator_1_get_Current_m179981_MethodInfo = 
{
	"get_Current"/* name */
	, (methodPointerType)&InternalEnumerator_1_get_Current_m179981/* method */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* declaring_type */
	, &ArgInfoType_t8030_0_0_0/* return_type */
	, RuntimeInvoker_ArgInfoType_t8030/* invoker_method */
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
static MethodInfo* InternalEnumerator_1_t24806_MethodInfos[] =
{
	&InternalEnumerator_1__ctor_m179976_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179977_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978_MethodInfo,
	&InternalEnumerator_1_Dispose_m179979_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179980_MethodInfo,
	&InternalEnumerator_1_get_Current_m179981_MethodInfo,
	NULL
};
extern MethodInfo ValueType_Equals_m4341_MethodInfo;
extern MethodInfo Object_Finalize_m4041_MethodInfo;
extern MethodInfo ValueType_GetHashCode_m4342_MethodInfo;
extern MethodInfo ValueType_ToString_m4343_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978_MethodInfo;
extern MethodInfo InternalEnumerator_1_MoveNext_m179980_MethodInfo;
extern MethodInfo InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179977_MethodInfo;
extern MethodInfo InternalEnumerator_1_Dispose_m179979_MethodInfo;
extern MethodInfo InternalEnumerator_1_get_Current_m179981_MethodInfo;
static MethodInfo* InternalEnumerator_1_t24806_VTable[] =
{
	&ValueType_Equals_m4341_MethodInfo,
	&Object_Finalize_m4041_MethodInfo,
	&ValueType_GetHashCode_m4342_MethodInfo,
	&ValueType_ToString_m4343_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_get_Current_m179978_MethodInfo,
	&InternalEnumerator_1_MoveNext_m179980_MethodInfo,
	&InternalEnumerator_1_System_Collections_IEnumerator_Reset_m179977_MethodInfo,
	&InternalEnumerator_1_Dispose_m179979_MethodInfo,
	&InternalEnumerator_1_get_Current_m179981_MethodInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29264_il2cpp_TypeInfo;
static TypeInfo* InternalEnumerator_1_t24806_InterfacesTypeInfos[] = 
{
	&IEnumerator_t67_il2cpp_TypeInfo,
	&IDisposable_t971_il2cpp_TypeInfo,
	&IEnumerator_1_t29264_il2cpp_TypeInfo,
};
extern TypeInfo IEnumerator_t67_il2cpp_TypeInfo;
extern TypeInfo IDisposable_t971_il2cpp_TypeInfo;
extern TypeInfo IEnumerator_1_t29264_il2cpp_TypeInfo;
static Il2CppInterfaceOffsetPair InternalEnumerator_1_t24806_InterfacesOffsets[] = 
{
	{ &IEnumerator_t67_il2cpp_TypeInfo, 4},
	{ &IDisposable_t971_il2cpp_TypeInfo, 7},
	{ &IEnumerator_1_t29264_il2cpp_TypeInfo, 8},
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType InternalEnumerator_1_t24806_0_0_0;
extern Il2CppType InternalEnumerator_1_t24806_1_0_0;
extern TypeInfo ValueType_t987_il2cpp_TypeInfo;
extern TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo;
extern Il2CppGenericClass InternalEnumerator_1_t24806_GenericClass;
extern TypeInfo Array_t_il2cpp_TypeInfo;
TypeInfo InternalEnumerator_1_t24806_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "InternalEnumerator`1"/* name */
	, ""/* namespaze */
	, InternalEnumerator_1_t24806_MethodInfos/* methods */
	, InternalEnumerator_1_t24806_PropertyInfos/* properties */
	, InternalEnumerator_1_t24806_FieldInfos/* fields */
	, NULL/* events */
	, &ValueType_t987_il2cpp_TypeInfo/* parent */
	, NULL/* nested_types */
	, &Array_t_il2cpp_TypeInfo/* nested_in */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* element_class */
	, InternalEnumerator_1_t24806_InterfacesTypeInfos/* implemented_interfaces */
	, InternalEnumerator_1_t24806_VTable/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &InternalEnumerator_1_t24806_il2cpp_TypeInfo/* cast_class */
	, &InternalEnumerator_1_t24806_0_0_0/* byval_arg */
	, &InternalEnumerator_1_t24806_1_0_0/* this_arg */
	, InternalEnumerator_1_t24806_InterfacesOffsets/* interface_offsets */
	, &InternalEnumerator_1_t24806_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, sizeof (InternalEnumerator_1_t24806)+ sizeof (Il2CppObject)/* instance_size */
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
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;



// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Count()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_IsReadOnly()
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Add(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Clear()
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Contains(T)
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::CopyTo(T[],System.Int32)
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Remove(T)
// Metadata Definition System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern MethodInfo ICollection_1_get_Count_m272163_MethodInfo;
static PropertyInfo ICollection_1_t36962____Count_PropertyInfo = 
{
	&ICollection_1_t36962_il2cpp_TypeInfo/* parent */
	, "Count"/* name */
	, &ICollection_1_get_Count_m272163_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
extern MethodInfo ICollection_1_get_IsReadOnly_m272164_MethodInfo;
static PropertyInfo ICollection_1_t36962____IsReadOnly_PropertyInfo = 
{
	&ICollection_1_t36962_il2cpp_TypeInfo/* parent */
	, "IsReadOnly"/* name */
	, &ICollection_1_get_IsReadOnly_m272164_MethodInfo/* get */
	, NULL/* set */
	, 0/* attrs */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */

};
static PropertyInfo* ICollection_1_t36962_PropertyInfos[] =
{
	&ICollection_1_t36962____Count_PropertyInfo,
	&ICollection_1_t36962____IsReadOnly_PropertyInfo,
	NULL
};
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppType Int32_t73_0_0_0;
extern void* RuntimeInvoker_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Int32 System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_Count()
MethodInfo ICollection_1_get_Count_m272163_MethodInfo = 
{
	"get_Count"/* name */
	, NULL/* method */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* declaring_type */
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
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::get_IsReadOnly()
MethodInfo ICollection_1_get_IsReadOnly_m272164_MethodInfo = 
{
	"get_IsReadOnly"/* name */
	, NULL/* method */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ArgInfoType_t8030_0_0_0;
static ParameterInfo ICollection_1_t36962_ICollection_1_Add_m272165_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t8030_0_0_0},
};
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Byte_t1026 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Add(T)
MethodInfo ICollection_1_Add_m272165_MethodInfo = 
{
	"Add"/* name */
	, NULL/* method */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Byte_t1026/* invoker_method */
	, ICollection_1_t36962_ICollection_1_Add_m272165_ParameterInfos/* parameters */
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
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Clear()
MethodInfo ICollection_1_Clear_m272166_MethodInfo = 
{
	"Clear"/* name */
	, NULL/* method */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* declaring_type */
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
extern Il2CppType ArgInfoType_t8030_0_0_0;
static ParameterInfo ICollection_1_t36962_ICollection_1_Contains_m272167_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t8030_0_0_0},
};
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Byte_t1026 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Contains(T)
MethodInfo ICollection_1_Contains_m272167_MethodInfo = 
{
	"Contains"/* name */
	, NULL/* method */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Byte_t1026/* invoker_method */
	, ICollection_1_t36962_ICollection_1_Contains_m272167_ParameterInfos/* parameters */
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
extern Il2CppType ArgInfoTypeU5BU5D_t25335_0_0_0;
extern Il2CppType Int32_t73_0_0_0;
static ParameterInfo ICollection_1_t36962_ICollection_1_CopyTo_m272168_ParameterInfos[] = 
{
	{"array", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoTypeU5BU5D_t25335_0_0_0},
	{"arrayIndex", 1, 134217728, &EmptyCustomAttributesCache, &Int32_t73_0_0_0},
};
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppType Void_t21_0_0_0;
extern void* RuntimeInvoker_Void_t21_Object_t_Int32_t73 (MethodInfo* method, void* obj, void** args);
// System.Void System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::CopyTo(T[],System.Int32)
MethodInfo ICollection_1_CopyTo_m272168_MethodInfo = 
{
	"CopyTo"/* name */
	, NULL/* method */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* declaring_type */
	, &Void_t21_0_0_0/* return_type */
	, RuntimeInvoker_Void_t21_Object_t_Int32_t73/* invoker_method */
	, ICollection_1_t36962_ICollection_1_CopyTo_m272168_ParameterInfos/* parameters */
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
extern Il2CppType ArgInfoType_t8030_0_0_0;
static ParameterInfo ICollection_1_t36962_ICollection_1_Remove_m272169_ParameterInfos[] = 
{
	{"item", 0, 134217728, &EmptyCustomAttributesCache, &ArgInfoType_t8030_0_0_0},
};
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppType Boolean_t956_0_0_0;
extern void* RuntimeInvoker_Boolean_t956_Byte_t1026 (MethodInfo* method, void* obj, void** args);
// System.Boolean System.Collections.Generic.ICollection`1<System.Runtime.Remoting.Messaging.ArgInfoType>::Remove(T)
MethodInfo ICollection_1_Remove_m272169_MethodInfo = 
{
	"Remove"/* name */
	, NULL/* method */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* declaring_type */
	, &Boolean_t956_0_0_0/* return_type */
	, RuntimeInvoker_Boolean_t956_Byte_t1026/* invoker_method */
	, ICollection_1_t36962_ICollection_1_Remove_m272169_ParameterInfos/* parameters */
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
static MethodInfo* ICollection_1_t36962_MethodInfos[] =
{
	&ICollection_1_get_Count_m272163_MethodInfo,
	&ICollection_1_get_IsReadOnly_m272164_MethodInfo,
	&ICollection_1_Add_m272165_MethodInfo,
	&ICollection_1_Clear_m272166_MethodInfo,
	&ICollection_1_Contains_m272167_MethodInfo,
	&ICollection_1_CopyTo_m272168_MethodInfo,
	&ICollection_1_Remove_m272169_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
extern TypeInfo IEnumerable_1_t36964_il2cpp_TypeInfo;
static TypeInfo* ICollection_1_t36962_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
	&IEnumerable_1_t36964_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType ICollection_1_t36962_0_0_0;
extern Il2CppType ICollection_1_t36962_1_0_0;
struct ICollection_1_t36962;
extern TypeInfo ICollection_1_t36962_il2cpp_TypeInfo;
extern Il2CppGenericClass ICollection_1_t36962_GenericClass;
TypeInfo ICollection_1_t36962_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "ICollection`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, ICollection_1_t36962_MethodInfos/* methods */
	, ICollection_1_t36962_PropertyInfos/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* element_class */
	, ICollection_1_t36962_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &ICollection_1_t36962_il2cpp_TypeInfo/* cast_class */
	, &ICollection_1_t36962_0_0_0/* byval_arg */
	, &ICollection_1_t36962_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &ICollection_1_t36962_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
extern TypeInfo IEnumerable_1_t36964_il2cpp_TypeInfo;



// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>::GetEnumerator()
// Metadata Definition System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>
extern TypeInfo IEnumerable_1_t36964_il2cpp_TypeInfo;
extern Il2CppType IEnumerator_1_t29264_0_0_0;
extern void* RuntimeInvoker_Object_t (MethodInfo* method, void* obj, void** args);
// System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Runtime.Remoting.Messaging.ArgInfoType>::GetEnumerator()
MethodInfo IEnumerable_1_GetEnumerator_m272170_MethodInfo = 
{
	"GetEnumerator"/* name */
	, NULL/* method */
	, &IEnumerable_1_t36964_il2cpp_TypeInfo/* declaring_type */
	, &IEnumerator_1_t29264_0_0_0/* return_type */
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
static MethodInfo* IEnumerable_1_t36964_MethodInfos[] =
{
	&IEnumerable_1_GetEnumerator_m272170_MethodInfo,
	NULL
};
extern TypeInfo IEnumerable_t977_il2cpp_TypeInfo;
static TypeInfo* IEnumerable_1_t36964_InterfacesTypeInfos[] = 
{
	&IEnumerable_t977_il2cpp_TypeInfo,
};
extern Il2CppImage g_mscorlib_dll_Image;
extern Il2CppType IEnumerable_1_t36964_0_0_0;
extern Il2CppType IEnumerable_1_t36964_1_0_0;
struct IEnumerable_1_t36964;
extern TypeInfo IEnumerable_1_t36964_il2cpp_TypeInfo;
extern Il2CppGenericClass IEnumerable_1_t36964_GenericClass;
TypeInfo IEnumerable_1_t36964_il2cpp_TypeInfo = 
{
	&g_mscorlib_dll_Image/* image */
	, NULL/* gc_desc */
	, "IEnumerable`1"/* name */
	, "System.Collections.Generic"/* namespaze */
	, IEnumerable_1_t36964_MethodInfos/* methods */
	, NULL/* properties */
	, NULL/* fields */
	, NULL/* events */
	, NULL/* parent */
	, NULL/* nested_types */
	, NULL/* nested_in */
	, &IEnumerable_1_t36964_il2cpp_TypeInfo/* element_class */
	, IEnumerable_1_t36964_InterfacesTypeInfos/* implemented_interfaces */
	, NULL/* vtable */
	, &EmptyCustomAttributesCache/* custom_attributes_cache */
	, &IEnumerable_1_t36964_il2cpp_TypeInfo/* cast_class */
	, &IEnumerable_1_t36964_0_0_0/* byval_arg */
	, &IEnumerable_1_t36964_1_0_0/* this_arg */
	, NULL/* interface_offsets */
	, &IEnumerable_1_t36964_GenericClass/* generic_class */
	, NULL/* generic_container */
	, NULL/* field_def_values */
	, NULL/* static_fields */
	, NULL/* rgctx_data */
	, (methodPointerType)NULL/* pinvoke_delegate_wrapper */
	, (methodPointerType)NULL/* marshal_to_native_func */
	, (methodPointerType)NULL/* marshal_from_native_func */
	, (methodPointerType)NULL/* marshal_cleanup_func */
	, 0/* instance_size */
	, 0/* element_size */
	, -1/* native_size */
	, 0/* static_fields_size */
	, 0/* thread_static_fields_size */
	, -1/* thread_static_fields_offset */
	, 161/* flags */
	, 0/* rank */
	, false/* valuetype */
	, true/* is_interface */
	, false/* initialized */
	, false/* cctor_initialized */
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
